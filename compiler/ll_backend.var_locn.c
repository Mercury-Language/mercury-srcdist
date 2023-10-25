/*
** Automatically generated from `var_locn.m'
** by the Mercury compiler,
** version rotd-2023-10-25
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


// :- module ll_backend.var_locn.
// :- implementation.

/*
INIT mercury__ll_backend__var_locn__init
ENDINIT
*/

#include "ll_backend.var_locn.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_0;

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_1;

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_ordinal_ordered_dead_or_alive_0[2];

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

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_store_var_if_required_0_0;

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_store_var_if_required_0_1;

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_ordinal_ordered_store_var_if_required_0[2];

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_name_ordered_store_var_if_required_0[2];

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_store_var_if_required_0[2];

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_avail_0_0[1];

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_0;

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_1;

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_1[1];

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_avail_0[2];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_avail_0[2];

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_avail_0[2];

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0;

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_locn_info_0_0[12];

static const MR_ConstString ll_backend__var_locn__ll_backend__var_locn__field_names_var_locn_info_0_0[12];

static const MR_DuArgLocn ll_backend__var_locn__ll_backend__var_locn__field_locns_var_locn_info_0_0[12];

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_locn_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_locn_info_0_0[1];

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_locn_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_locn_info_0[1];

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_locn_info_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0;

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_state_0_0[5];

static const MR_ConstString ll_backend__var_locn__ll_backend__var_locn__field_names_var_state_0_0[5];

static const MR_DuArgLocn ll_backend__var_locn__ll_backend__var_locn__field_locns_var_state_0_0[5];

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_state_0_0;

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_state_0_0[1];

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_state_0[1];

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_state_0[1];

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_state_0[1];

static void MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__record_copy__1999__1_3_p_0(
  MR_Word HeadVar__1_36,
  MR_Word HeadVar__2_37,
  MR_Word * HeadVar__3_38);

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__record_copy__1996__1_3_p_0(
  MR_Word LocVarMap0_9,
  MR_Word HeadVar__2_31,
  MR_Word * HeadVar__3_32);

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__1438__1_3_p_0(
  MR_Word VarStateMap_5,
  MR_Word ExprnOpts_6,
  MR_Word Rval_8);

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__2557__1_2_p_0(
  MR_Word FirstTime_6,
  MR_Word HeadVar__2_31);

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__var_locn_assign_var_to_var__838__1_2_p_0(
  MR_Word OldVarIsDummy_27,
  MR_Word HeadVar__2_42);

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_avail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_avail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____store_var_if_required_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____store_var_if_required_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____loc_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____loc_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____dep_search_lval_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dep_search_lval_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn____Compare____dead_or_alive_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dead_or_alive_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__var_locn__nonempty_state_1_p_0(
  MR_Word State_2);

static MR_bool MR_CALL 
ll_backend__var_locn__lval_does_not_support_lval_2_p_0(
  MR_Word Lval1_3,
  MR_Word Lval2_4);

static MR_bool MR_CALL 
ll_backend__var_locn__is_root_lval_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_LocVarMap_0_11,
  MR_Word * STATE_VARIABLE_LocVarMap_12);

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_LocVarMap_0_10,
  MR_Word * STATE_VARIABLE_LocVarMap_11);

static void MR_CALL 
ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(
  MR_Word Lval_7,
  MR_Word OkToDeleteVars_8,
  MR_Word OkToDeleteAny_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_VarStateMap_0_12,
  MR_Word * STATE_VARIABLE_VarStateMap_13);

static MR_bool MR_CALL 
ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(
  MR_Word Lval_7,
  MR_Word OkToDeleteVars_8,
  MR_Word OkToDeleteAny_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_VarStateMap_0_21,
  MR_Word * STATE_VARIABLE_VarStateMap_22);

static MR_bool MR_CALL 
ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarStateMap_2,
  MR_Word OkToDeleteVars_3);

static void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_2_7_p_0(
  MR_Word ReuseLval_8,
  MR_Word DepVar_9,
  MR_Word * SaveDepVarCode_10,
  MR_Word STATE_VARIABLE_Regs_0_25,
  MR_Word * STATE_VARIABLE_Regs_26,
  MR_Word STATE_VARIABLE_VLI_0_27,
  MR_Word * STATE_VARIABLE_VLI_28);

static MR_bool MR_CALL 
ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(
  MR_Word Rval_3,
  MR_Word SearchLval_4);

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0(
  MR_Word Old_8,
  MR_Word New_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_VarStateMap_0_25,
  MR_Word * STATE_VARIABLE_VarStateMap_26,
  MR_Word STATE_VARIABLE_LocVarMap_0_27,
  MR_Word * STATE_VARIABLE_LocVarMap_28);

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_lval_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OneSource_2,
  MR_Word Lval_3,
  MR_Word STATE_VARIABLE_LvalSet_0_4,
  MR_Word * STATE_VARIABLE_LvalSet_5);

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0(
  MR_Word OneSource_6,
  MR_Word OtherSources_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_VLI_0_23,
  MR_Word * STATE_VARIABLE_VLI_24);

static void MR_CALL 
ll_backend__var_locn__clobber_old_lval_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__clobber_old_lval_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_VLI_0_8,
  MR_Word * STATE_VARIABLE_VLI_9);

static MR_Word MR_CALL 
ll_backend__var_locn__add_field_offset_3_f_0(
  MR_Word Ptag_5,
  MR_Word Offset_6,
  MR_Word Base_7);

static MR_bool MR_CALL 
ll_backend__var_locn__convert_live_to_lval_set_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn__var_locn_clobber_reg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__var_locn_clear_r1_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_clear_r1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__clobber_regs_in_maps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__clobber_regs_in_maps_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OkToDeleteAny_2,
  MR_Word STATE_VARIABLE_LocVarMap_0_3,
  MR_Word * STATE_VARIABLE_LocVarMap_4,
  MR_Word STATE_VARIABLE_VarStateMap_0_5,
  MR_Word * STATE_VARIABLE_VarStateMap_6);

static void MR_CALL 
ll_backend__var_locn__actually_place_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VLI_0_3,
  MR_Word * STATE_VARIABLE_VLI_4);

static MR_bool MR_CALL 
ll_backend__var_locn__cell_is_constant_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_p_0(
  MR_Word Var_13,
  MR_Word ReserveWordAtStart_14,
  MR_Word Ptag_15,
  MR_Word CellArgs_16,
  MR_Word HowToConstruct_17,
  MR_Word MaybeOffset_18,
  MR_Word MaybeAllocId_19,
  MR_Word MayUseAtomic_20,
  MR_Word Label_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_VLI_0_49,
  MR_Word * STATE_VARIABLE_VLI_50);

static void MR_CALL 
ll_backend__var_locn__assign_reused_cell_to_var_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__assign_reused_cell_to_var_13_p_0(
  MR_Word Lval_14,
  MR_Word Ptag_15,
  MR_Word CellArgs_16,
  MR_Word CellToReuse_17,
  MR_Word ReuseLval_18,
  MR_Word ReuseVarCode_19,
  MR_Integer StartOffset_20,
  MR_Word Label_21,
  MR_Word * MaybeReuse_22,
  MR_Word * SetupReuseCode_23,
  MR_Word * ArgsCode_24,
  MR_Word STATE_VARIABLE_VLI_0_39,
  MR_Word * STATE_VARIABLE_VLI_40);

static void MR_CALL 
ll_backend__var_locn__assign_some_cell_args_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Ptag_3,
  MR_Word Base_4,
  MR_Integer Offset_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VLI_0_8,
  MR_Word * STATE_VARIABLE_VLI_9);

static void MR_CALL 
ll_backend__var_locn__assign_all_cell_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Ptag_2,
  MR_Word Base_3,
  MR_Integer Offset_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VLI_0_6,
  MR_Word * STATE_VARIABLE_VLI_7);

static void MR_CALL 
ll_backend__var_locn__materialize_if_var_5_p_0(
  MR_Word Rval0_6,
  MR_Word * EvalCode_7,
  MR_Word * Rval_8,
  MR_Word STATE_VARIABLE_VLI_0_24,
  MR_Word * STATE_VARIABLE_VLI_25);

static void MR_CALL 
ll_backend__var_locn__assign_cell_arg_7_p_0(
  MR_Word Rval0_8,
  MR_Word Ptag_9,
  MR_Word Base_10,
  MR_Integer Offset_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_VLI_0_39,
  MR_Word * STATE_VARIABLE_VLI_40);

static void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_4_p_0(
  MR_Word VLI_5,
  MR_Word Var_6,
  MR_Word RegType_7,
  MR_Word * Lval_8);

static void MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__var_locn_reassign_tagword_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__select_reg_or_stack_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Lval_5);

static void MR_CALL 
ll_backend__var_locn__var_locn_reassign_mkword_hole_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__add_use_refs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word UsingVar_2,
  MR_Word STATE_VARIABLE_VarStateMap_0_3,
  MR_Word * STATE_VARIABLE_VarStateMap_4);

static MR_bool MR_CALL 
ll_backend__var_locn__expr_is_constant_4_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__var_locn__expr_is_constant_4_p_0(
  MR_Word VarStateMap_5,
  MR_Word ExprnOpts_6,
  MR_Word Rval0_7,
  MR_Word * Rval_8);

static MR_Box MR_CALL 
ll_backend__var_locn__var_locn_assign_lval_to_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_LocVarMap_0_9,
  MR_Word * STATE_VARIABLE_LocVarMap_10);

static void MR_CALL 
ll_backend__var_locn__add_use_ref_4_p_0(
  MR_Word ContainedVar_5,
  MR_Word UsingVar_6,
  MR_Word STATE_VARIABLE_VarStateMap_0_16,
  MR_Word * STATE_VARIABLE_VarStateMap_17);

static void MR_CALL 
ll_backend__var_locn__check_var_is_unknown_2_p_0(
  MR_Word VLI_3,
  MR_Word Var_4);

static void MR_CALL 
ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(
  MR_Word Rval0_8,
  MR_Word MaybePrefer_9,
  MR_Word Avoid_10,
  MR_Word * Rval_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_VLI_0_34,
  MR_Word * STATE_VARIABLE_VLI_35);

static void MR_CALL 
ll_backend__var_locn__free_up_lval_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__free_up_lval_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__free_up_lval_6_p_0(
  MR_Word Lval_7,
  MR_Word ToBeAssignedVars_8,
  MR_Word ForbiddenLvals_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_17,
  MR_Word * STATE_VARIABLE_VLI_18);

static void MR_CALL 
ll_backend__var_locn__materialize_var_general_8_p_0(
  MR_Word Var_9,
  MR_Word MaybePrefer_10,
  MR_Word StoreIfReq_11,
  MR_Word Avoid_12,
  MR_Word * Rval_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_VLI_0_30,
  MR_Word * STATE_VARIABLE_VLI_31);

static void MR_CALL 
ll_backend__var_locn__materialize_vars_in_mem_ref_avoid_6_p_0(
  MR_Word MemRef0_7,
  MR_Word * MemRef_8,
  MR_Word Avoid_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_21,
  MR_Word * STATE_VARIABLE_VLI_22);

static void MR_CALL 
ll_backend__var_locn__actually_place_var_6_p_0(
  MR_Word Var_7,
  MR_Word Target_8,
  MR_Word ForbiddenLvals_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_35,
  MR_Word * STATE_VARIABLE_VLI_36);

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_avoid_5_p_0(
  MR_Word VLI_6,
  MR_Word Var_7,
  MR_Word RegType_8,
  MR_Word Avoid_9,
  MR_Word * Lval_10);

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_avoid_4_p_0(
  MR_Word VLI_5,
  MR_Word RegType_6,
  MR_Word Avoid_7,
  MR_Word * Lval_8);

static void MR_CALL 
ll_backend__var_locn__get_var_name_3_p_0(
  MR_Word VLI_4,
  MR_Word Var_5,
  MR_String * Name_6);

static MR_bool MR_CALL 
ll_backend__var_locn__reg_is_not_locked_for_var_4_p_0(
  MR_Word VLI_5,
  MR_Word RegType_6,
  MR_Integer RegNum_7,
  MR_Word Var_8);

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(
  MR_Word VLI_5,
  MR_Word Var_6,
  MR_Word RegType_7,
  MR_Word * Lval_8);

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_3_p_0(
  MR_Word VLI_4,
  MR_Word RegType_5,
  MR_Word * Lval_6);

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_loop_5_p_0(
  MR_Word VLI_6,
  MR_Word RegType_7,
  MR_Word Avoid_8,
  MR_Integer N0_9,
  MR_Word * Lval_10);

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0(
  MR_Word Old_5,
  MR_Word New_6,
  MR_Word STATE_VARIABLE_VLI_0_17,
  MR_Word * STATE_VARIABLE_VLI_18);

static MR_Word MR_CALL 
ll_backend__var_locn__lval_spare_reg_type_1_f_0(
  MR_Word Lval_3);

static MR_bool MR_CALL 
ll_backend__var_locn__find_one_occupying_var_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Lval_8,
  MR_Word VarStateMap_9,
  MR_Word * OccupyingVar_10,
  MR_Word * OtherSources_11);

static void MR_CALL 
ll_backend__var_locn__reg_type_for_var_3_p_0(
  MR_Word VLI_4,
  MR_Word Var_5,
  MR_Word * RegType_6);

static void MR_CALL 
ll_backend__var_locn__record_clobbering_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__var_locn__record_clobbering_4_p_0(
  MR_Word Target_5,
  MR_Word Assigns_6,
  MR_Word STATE_VARIABLE_VLI_0_14,
  MR_Word * STATE_VARIABLE_VLI_15);

static void MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_VLI_0_20,
  MR_Word * STATE_VARIABLE_VLI_21);

static void MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__var_locn__remove_use_refs_4_p_0(
  MR_Word MaybeExprRval_5,
  MR_Word UsingVar_6,
  MR_Word STATE_VARIABLE_VLI_0_11,
  MR_Word * STATE_VARIABLE_VLI_12);

static void MR_CALL 
ll_backend__var_locn__remove_use_refs_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word UsingVar_2,
  MR_Word STATE_VARIABLE_VLI_0_3,
  MR_Word * STATE_VARIABLE_VLI_4);

static void MR_CALL 
ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(
  MR_Word VSM_4,
  MR_Word VI_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__var_locn__var_locn_get_acquired_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn__find_var_availability_4_p_0(
  MR_Word VLI_5,
  MR_Word Var_6,
  MR_Word MaybePrefer_7,
  MR_Word * Avail_8);

static MR_bool MR_CALL 
ll_backend__var_locn__select_stack_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Lval_5);

static MR_bool MR_CALL 
ll_backend__var_locn__select_reg_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Lval_5);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_assign_var_to_var_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0(
  MR_Word Var_5,
  MR_Word Lvals_6,
  MR_Word STATE_VARIABLE_LocVarMap_0_9,
  MR_Word * STATE_VARIABLE_LocVarMap_10);

static void MR_CALL 
ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(
  MR_Word LVM_4,
  MR_Word VI_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__var_locn__var_locn_get_var_table_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_get_var_locations_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarStateMap_0_2,
  MR_Word * STATE_VARIABLE_VarStateMap_3,
  MR_Word STATE_VARIABLE_LocVarMap_0_4,
  MR_Word * STATE_VARIABLE_LocVarMap_5);

static void MR_CALL 
ll_backend__var_locn__init_var_locn_state_loop_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn__init_var_locn_state_loop_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__var_locn__init_var_locn_state_loop_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__var_locn__init_var_locn_state_loop_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Liveness_2,
  MR_Word STATE_VARIABLE_VarStateMap_0_3,
  MR_Word * STATE_VARIABLE_VarStateMap_4,
  MR_Word STATE_VARIABLE_LocVarMap_0_5,
  MR_Word * STATE_VARIABLE_LocVarMap_6);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dead_or_alive_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____dead_or_alive_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dep_search_lval_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____dep_search_lval_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____loc_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____loc_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____store_var_if_required_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____store_var_if_required_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_locn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_locn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__var_locn_scalar_common_1[12][2];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_2[22][3];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_3[3][1];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_4[2][4];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_5[4][7];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_6[4][5];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_7[1][9];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_8[5][6];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_9[2][10];

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_10[2][8];




static /* final */ const MR_Box ll_backend__var_locn_scalar_common_1[12][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_2[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   9 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(1, &ll_backend__var_locn_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) -42))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_2[22][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__var_locn_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__init_var_locn_state_loop_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_6[0])),
    ((MR_Box) (ll_backend__var_locn__var_locn_get_var_locations_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__add_additional_lval_for_var_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_8[1])),
    ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_8[3])),
    ((MR_Box) (ll_backend__var_locn__assign_reused_cell_to_var_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__ensure_copies_are_present_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__ensure_copies_are_present_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0])),
    ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(1, &ll_backend__var_locn_scalar_common_1[9]))) },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_4[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_5[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__var_locn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_6[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0)),
    ((MR_Box) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_7[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_8[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_exprn_opts_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__var_locn_scalar_common_7[0])),
    ((MR_Box) (ll_backend__var_locn__var_locn_clear_r1_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &ll_backend__var_locn_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_9[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0))
  },
};

static /* final */ const MR_Box ll_backend__var_locn_scalar_common_10[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0)),
    ((MR_Box) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__var_locn__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "array.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_PseudoTypeInfo) (&ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__var_locn__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__var_locn__type_ctor_info_var_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ptag_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__var_locn__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_0 = {
  (MR_String) "doa_dead",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_dead_or_alive_0_1 = {
  (MR_String) "doa_alive",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_ordinal_ordered_dead_or_alive_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__var_locn____Unify____dead_or_alive_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____dead_or_alive_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "dead_or_alive",
  { ll_backend__var_locn__ll_backend__var_locn__enum_name_ordered_dead_or_alive_0 },
  { ll_backend__var_locn__ll_backend__var_locn__enum_ordinal_ordered_dead_or_alive_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_dead_or_alive_0,

};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_0 = {
  (MR_String) "all_regs",
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

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_dep_search_lval_0_1[1] = { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) };

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_1 = {
  (MR_String) "specific_reg_or_stack",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__var_locn__ll_backend__var_locn__field_types_dep_search_lval_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_0[1] = { &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_0 };

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_1[1] = { &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_dep_search_lval_0_1 };

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_dep_search_lval_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_dep_search_lval_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__var_locn____Unify____dep_search_lval_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____dep_search_lval_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "dep_search_lval",
  { ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_dep_search_lval_0 },
  { ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_dep_search_lval_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_dep_search_lval_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_loc_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__var_locn____Unify____loc_var_map_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____loc_var_map_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "loc_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__var_locn__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_store_var_if_required_0_0 = {
  (MR_String) "do_not_store_var",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_store_var_if_required_0_1 = {
  (MR_String) "store_var",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_ordinal_ordered_store_var_if_required_0[2] = {
  &ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_store_var_if_required_0_0,
  &ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_store_var_if_required_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__enum_name_ordered_store_var_if_required_0[2] = {
  &ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_store_var_if_required_0_0,
  &ll_backend__var_locn__ll_backend__var_locn__enum_functor_desc_store_var_if_required_0_1
};

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_store_var_if_required_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_store_var_if_required_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__var_locn____Unify____store_var_if_required_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____store_var_if_required_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "store_var_if_required",
  { ll_backend__var_locn__ll_backend__var_locn__enum_name_ordered_store_var_if_required_0 },
  { ll_backend__var_locn__ll_backend__var_locn__enum_ordinal_ordered_store_var_if_required_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_store_var_if_required_0,

};

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_avail_0_0[1] = { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0) };

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_0 = {
  (MR_String) "available",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__var_locn__ll_backend__var_locn__field_types_var_avail_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_1 = {
  (MR_String) "needs_materialization",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_0[1] = { &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_1 };

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_1[1] = { &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_avail_0_0 };

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_avail_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_avail_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__var_locn____Unify____var_avail_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____var_avail_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "var_avail",
  { ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_avail_0 },
  { ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_avail_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_avail_0,

};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__var_locn__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__var_locn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ll_backend__var_locn__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_locn_info_0_0[12] = {
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_ConstString ll_backend__var_locn__ll_backend__var_locn__field_names_var_locn_info_0_0[12] = {
  (MR_String) "vli_var_table",
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

static const MR_DuArgLocn ll_backend__var_locn__ll_backend__var_locn__field_locns_var_locn_info_0_0[12] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
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
    (MR_Integer) 0,
    (MR_Integer) 0
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
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_locn_info_0_0 = {
  (MR_String) "var_locn_info",
  INT16_C(12),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__var_locn__ll_backend__var_locn__field_types_var_locn_info_0_0,
  ll_backend__var_locn__ll_backend__var_locn__field_names_var_locn_info_0_0,
  ll_backend__var_locn__ll_backend__var_locn__field_locns_var_locn_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_locn_info_0_0[1] = { &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_locn_info_0_0 };

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_locn_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_locn_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_locn_info_0[1] = { &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_locn_info_0_0 };

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_locn_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__var_locn____Unify____var_locn_info_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____var_locn_info_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "var_locn_info",
  { ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_locn_info_0 },
  { ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_locn_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_locn_info_0,

};

static const MR_FA_TypeInfo_Struct1 ll_backend__var_locn__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0) }
};

static const MR_PseudoTypeInfo ll_backend__var_locn__ll_backend__var_locn__field_types_var_state_0_0[5] = {
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_rval_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_dead_or_alive_0)
};

static const MR_ConstString ll_backend__var_locn__ll_backend__var_locn__field_names_var_state_0_0[5] = {
  (MR_String) "locs",
  (MR_String) "const_rval",
  (MR_String) "expr_rval",
  (MR_String) "using_vars",
  (MR_String) "dead_or_alive"
};

static const MR_DuArgLocn ll_backend__var_locn__ll_backend__var_locn__field_locns_var_state_0_0[5] = {
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
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_state_0_0 = {
  (MR_String) "var_state",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__var_locn__ll_backend__var_locn__field_types_var_state_0_0,
  ll_backend__var_locn__ll_backend__var_locn__field_names_var_state_0_0,
  ll_backend__var_locn__ll_backend__var_locn__field_locns_var_state_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_state_0_0[1] = { &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_state_0_0 };

static const MR_DuPtagLayout ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_state_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__var_locn__ll_backend__var_locn__du_stag_ordered_var_state_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_state_0[1] = { &ll_backend__var_locn__ll_backend__var_locn__du_functor_desc_var_state_0_0 };

static const MR_Integer ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_state_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__var_locn____Unify____var_state_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____var_state_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "var_state",
  { ll_backend__var_locn__ll_backend__var_locn__du_name_ordered_var_state_0 },
  { ll_backend__var_locn__ll_backend__var_locn__du_ptag_ordered_var_state_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__var_locn__ll_backend__var_locn__functor_number_map_var_state_0,

};

const MR_TypeCtorInfo_Struct ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__var_locn____Unify____var_state_map_0_0_10001)),
  ((MR_Box) (ll_backend__var_locn____Compare____var_state_map_0_0_10001)),
  (MR_String) "ll_backend.var_locn",
  (MR_String) "var_state_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&ll_backend__var_locn__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0ll_backend__var_locn__type_ctor_info_var_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__record_copy__1999__1_3_p_0(
  MR_Word HeadVar__1_36,
  MR_Word HeadVar__2_37,
  MR_Word * HeadVar__3_38)
{
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_36, HeadVar__2_37, HeadVar__3_38);
}

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__record_copy__1996__1_3_p_0(
  MR_Word LocVarMap0_9,
  MR_Word HeadVar__2_31,
  MR_Word * HeadVar__3_32)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_32;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap0_9, ((MR_Box) (HeadVar__2_31)), &conv0_HeadVar__3_32);
  if (succeeded)
  {
    *HeadVar__3_32 = ((MR_Word) (conv0_HeadVar__3_32));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__1438__1_3_p_0(
  MR_Word VarStateMap_5,
  MR_Word ExprnOpts_6,
  MR_Word Rval_8)
{
  MR_bool succeeded;
  MR_Word Var_27;

  succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(VarStateMap_5, ExprnOpts_6, Rval_8, &Var_27);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__2557__1_2_p_0(
  MR_Word FirstTime_6,
  MR_Word HeadVar__2_31)
{
  MR_bool succeeded = (FirstTime_6 == HeadVar__2_31);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__IntroducedFrom__pred__var_locn_assign_var_to_var__838__1_2_p_0(
  MR_Word OldVarIsDummy_27,
  MR_Word HeadVar__2_42)
{
  MR_bool succeeded = (OldVarIsDummy_27 == HeadVar__2_42);

  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_25 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_26 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_25 < Var_26);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_25 > Var_26);
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

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
ll_backend__var_locn____Compare____var_locn_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_39 == CastY_40);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Integer ArgX11_34 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Integer ArgY11_35 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word SubResult1_6;

    parse_tree__var_table____Compare____var_table_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_53 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_54 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_53 < Var_54);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_53 > Var_54);
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
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_2[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_2[6]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
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

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
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

                mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_2[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[2]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      succeeded = (ArgX10_31 < ArgY10_32);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX10_31 > ArgY10_32);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        succeeded = (ArgX11_34 < ArgY11_35);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX11_34 > ArgY11_35);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_27 == CastY_28);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_31_31;
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Integer ArgX11_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Integer ArgY11_24 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));

    succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_30_30 = (MR_Word) (&ll_backend__var_locn_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_31_31 = (MR_Word) (&ll_backend__var_locn_scalar_common_2[6]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                TypeInfo_32_32 = (MR_Word) (&ll_backend__var_locn_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_33_33 = (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_34_34 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          TypeInfo_35_35 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[5]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
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

static void MR_CALL 
ll_backend__var_locn____Compare____var_avail_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      ll_backend__llds____Compare____rval_0_0(HeadVar__1_1, Var_11, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_avail_0_0(
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
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = ll_backend__llds____Unify____rval_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____store_var_if_required_0_0(
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
ll_backend__var_locn____Unify____store_var_if_required_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____loc_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____loc_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____dep_search_lval_0_0(
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
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      ll_backend__llds____Compare____lval_0_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dep_search_lval_0_0(
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____dead_or_alive_0_0(
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
ll_backend__var_locn____Unify____dead_or_alive_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__nonempty_state_1_p_0(
  MR_Word State_2)
{
  MR_bool succeeded;
  MR_Word LvalSet_3 = ((MR_Word) ((MR_hl_field(0, State_2, (MR_Integer) 0))));
  MR_Word MaybeConstRval_4 = ((MR_Word) ((MR_hl_field(0, State_2, (MR_Integer) 1))));
  MR_Word MaybeExprRval_5 = ((MR_Word) ((MR_hl_field(0, State_2, (MR_Integer) 2))));

  succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet_3);
  if (!(succeeded))
  {
    succeeded = (MaybeConstRval_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (MaybeExprRval_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__lval_does_not_support_lval_2_p_0(
  MR_Word Lval1_3,
  MR_Word Lval2_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  {
    Var_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_5, 0) = ((MR_Box) (Lval1_3));
  }
  switch (MR_tag((MR_Word) Lval2_4)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      succeeded = ll_backend__llds____Unify____lval_0_0(Lval2_4, Lval1_3);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval2_4, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          succeeded = ll_backend__llds____Unify____lval_0_0(Lval2_4, Lval1_3);
          break;
        case (MR_Integer) 2:
          succeeded = ll_backend__llds____Unify____lval_0_0(Lval2_4, Lval1_3);
          break;
        case (MR_Integer) 3:
          succeeded = ll_backend__llds____Unify____lval_0_0(Lval2_4, Lval1_3);
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval0_9 = ((MR_Word) ((MR_hl_field(3, Lval2_4, (MR_Integer) 2))));
            MR_Word Rval1_10 = ((MR_Word) ((MR_hl_field(3, Lval2_4, (MR_Integer) 3))));

            succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(Rval0_9, Var_5);
            if (!(succeeded))
              succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(Rval1_10, Var_5);
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.lval_depends_on_search_lval\'/2", (MR_String) "lvar");
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__is_root_lval_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
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
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_LocVarMap_0_11,
  MR_Word * STATE_VARIABLE_LocVarMap_12)
{
  MR_bool succeeded;
  MR_Word Var_13;
  MR_Word Vars0_8;
  MR_Box conv0_Vars0_8;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Lval_6));
  }
  mercury__require__expect_3_p_0(Var_13, (MR_String) "predicate \140ll_backend.var_locn.make_var_not_depend_on_root_lval\'/4", (MR_String) "non-root lval");
  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), STATE_VARIABLE_LocVarMap_0_11, ((MR_Box) (Lval_6)), &conv0_Vars0_8);
  if (succeeded)
  {
    Vars0_8 = ((MR_Word) (conv0_Vars0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Vars_9;

    parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, Vars0_8, &Vars_9);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_9);
    if (succeeded)
    {
      MR_Box conv1_Var_10;

      mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), ((MR_Box) (Lval_6)), &conv1_Var_10, STATE_VARIABLE_LocVarMap_0_11, STATE_VARIABLE_LocVarMap_12);
    }
    else
      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), ((MR_Box) (Lval_6)), ((MR_Box) (Vars_9)), STATE_VARIABLE_LocVarMap_0_11, STATE_VARIABLE_LocVarMap_12);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.make_var_not_depend_on_root_lval\'/4", (MR_String) "no record");
      return;
    }
}

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_LocVarMap_0_10,
  MR_Word * STATE_VARIABLE_LocVarMap_11)
{
  MR_bool succeeded;
  MR_Word Var_12;
  MR_Word Vars0_8;
  MR_Box conv0_Vars0_8;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Lval_6));
  }
  mercury__require__expect_3_p_0(Var_12, (MR_String) "predicate \140ll_backend.var_locn.make_var_depend_on_root_lval\'/4", (MR_String) "non-root lval");
  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), STATE_VARIABLE_LocVarMap_0_10, ((MR_Box) (Lval_6)), &conv0_Vars0_8);
  if (succeeded)
  {
    Vars0_8 = ((MR_Word) (conv0_Vars0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Vars_9;

    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, Vars0_8, &Vars_9);
    mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), ((MR_Box) (Lval_6)), ((MR_Box) (Vars_9)), STATE_VARIABLE_LocVarMap_0_10, STATE_VARIABLE_LocVarMap_11);
  }
  else
  {
    MR_Word Vars_17;

    Vars_17 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5);
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), ((MR_Box) (Lval_6)), ((MR_Box) (Vars_17)), STATE_VARIABLE_LocVarMap_0_10, STATE_VARIABLE_LocVarMap_11);
  }
}

static void MR_CALL 
ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(
  MR_Word Lval_7,
  MR_Word OkToDeleteVars_8,
  MR_Word OkToDeleteAny_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_VarStateMap_0_12,
  MR_Word * STATE_VARIABLE_VarStateMap_13)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_VarStateMap_14_14;

  succeeded = ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(Lval_7, OkToDeleteVars_8, OkToDeleteAny_9, Var_10, STATE_VARIABLE_VarStateMap_0_12, &STATE_VARIABLE_VarStateMap_14_14);
  if (succeeded)
    *STATE_VARIABLE_VarStateMap_13 = STATE_VARIABLE_VarStateMap_14_14;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.clobber_lval_in_var_state_map\'/6", (MR_String) "empty state");
      return;
    }
}

static MR_bool MR_CALL 
ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__lval_does_not_support_lval_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(
  MR_Word Lval_7,
  MR_Word OkToDeleteVars_8,
  MR_Word OkToDeleteAny_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_VarStateMap_0_21,
  MR_Word * STATE_VARIABLE_VarStateMap_22)
{
  MR_bool succeeded;
  MR_Word State0_12;
  MR_Word LvalSet0_13;
  MR_Word MaybeConstRval_14;
  MR_Word MaybeExprRval_15;
  MR_Word Using_16;
  MR_Word DeadOrAlive_17;
  MR_Word LvalSet_18;
  MR_Word State_19;
  MR_Word Var_23;
  MR_Box conv0_State0_12;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), STATE_VARIABLE_VarStateMap_0_21, ((MR_Box) (Var_10)), &conv0_State0_12);
  State0_12 = ((MR_Word) (conv0_State0_12));
  LvalSet0_13 = ((MR_Word) ((MR_hl_field(0, State0_12, (MR_Integer) 0))));
  MaybeConstRval_14 = ((MR_Word) ((MR_hl_field(0, State0_12, (MR_Integer) 1))));
  MaybeExprRval_15 = ((MR_Word) ((MR_hl_field(0, State0_12, (MR_Integer) 2))));
  Using_16 = ((MR_Word) ((MR_hl_field(0, State0_12, (MR_Integer) 3))));
  DeadOrAlive_17 = ((MR_Unsigned) ((MR_hl_field(0, State0_12, (MR_Integer) 4))) & (MR_Integer) 1);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_6[3]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Lval_7));
  }
  LvalSet_18 = mercury__set__filter_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_23, LvalSet0_13);
  {
    State_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, State_19, 0) = ((MR_Box) (LvalSet_18));
    MR_hl_field(0, State_19, 1) = ((MR_Box) (MaybeConstRval_14));
    MR_hl_field(0, State_19, 2) = ((MR_Box) (MaybeExprRval_15));
    MR_hl_field(0, State_19, 3) = ((MR_Box) (Using_16));
    MR_hl_field(0, State_19, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive_17));
  }
  {
    MR_Word LvalSet_29 = ((MR_Word) ((MR_hl_field(0, State_19, (MR_Integer) 0))));
    MR_Word MaybeConstRval_30 = ((MR_Word) ((MR_hl_field(0, State_19, (MR_Integer) 1))));
    MR_Word MaybeExprRval_31 = ((MR_Word) ((MR_hl_field(0, State_19, (MR_Integer) 2))));

    succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet_29);
    if (!(succeeded))
    {
      succeeded = (MaybeConstRval_30 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (MaybeExprRval_31 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
    }
  }
  if (!(succeeded))
  {
    succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), ((MR_Box) (Var_10)), OkToDeleteVars_8);
    if (!(succeeded))
    {
      succeeded = (OkToDeleteAny_9 == (MR_Integer) 1);
      if (!(succeeded))
      {
        MR_Word TypeCtorInfo_28_28;
        MR_Word UsingVars_20;

        succeeded = (DeadOrAlive_17 == (MR_Integer) 0);
        if (succeeded)
        {
          TypeCtorInfo_28_28 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_28_28, Using_16, &UsingVars_20);
          succeeded = ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_p_0(UsingVars_20, STATE_VARIABLE_VarStateMap_0_21, OkToDeleteVars_8);
        }
      }
    }
  }
  if (succeeded)
  {
    mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_10)), ((MR_Box) (State_19)), STATE_VARIABLE_VarStateMap_0_21, STATE_VARIABLE_VarStateMap_22);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word VarStateMap_2,
  MR_Word OkToDeleteVars_3)
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
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), ((MR_Box) (Var_6)), OkToDeleteVars_3);
      if (!(succeeded))
      {
        MR_Word TypeCtorInfo_20_20;
        MR_Word State_10;
        MR_Word Using_14;
        MR_Word DeadOrAlive_15;
        MR_Word UsingVars_16;
        MR_Box conv0_State_10;

        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_2, ((MR_Box) (Var_6)), &conv0_State_10);
        State_10 = ((MR_Word) (conv0_State_10));
        Using_14 = ((MR_Word) ((MR_hl_field(0, State_10, (MR_Integer) 3))));
        DeadOrAlive_15 = ((MR_Unsigned) ((MR_hl_field(0, State_10, (MR_Integer) 4))) & (MR_Integer) 1);
        succeeded = (DeadOrAlive_15 == (MR_Integer) 0);
        if (succeeded)
        {
          TypeCtorInfo_20_20 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_20_20, Using_14, &UsingVars_16);
          succeeded = ll_backend__var_locn__recursive_using_vars_dead_and_ok_to_delete_3_p_0(UsingVars_16, VarStateMap_2, OkToDeleteVars_3);
        }
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Vars_7;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_2_7_p_0(
  MR_Word ReuseLval_8,
  MR_Word DepVar_9,
  MR_Word * SaveDepVarCode_10,
  MR_Word STATE_VARIABLE_Regs_0_25,
  MR_Word * STATE_VARIABLE_Regs_26,
  MR_Word STATE_VARIABLE_VLI_0_27,
  MR_Word * STATE_VARIABLE_VLI_28)
{
  MR_bool succeeded;
  MR_Word Avail_13;
  MR_Word DepVarRval_14;
  MR_Word EvalCode_15;
  MR_Word VarTable_16;
  MR_Word DepVarEntry_17;
  MR_Word DepVarType_19;
  MR_Word DepVarIsDummy_20;
  MR_Word AssignCode_21;
  MR_Word STATE_VARIABLE_VLI_33_33;

  ll_backend__var_locn__find_var_availability_4_p_0(STATE_VARIABLE_VLI_0_27, DepVar_9, (MR_Word) ((MR_Unsigned) 0U), &Avail_13);
  if ((Avail_13 == (MR_Word) ((MR_Unsigned) 0U)))
    ll_backend__var_locn__materialize_var_general_8_p_0(DepVar_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &DepVarRval_14, &EvalCode_15, STATE_VARIABLE_VLI_0_27, &STATE_VARIABLE_VLI_33_33);
  else
  {
    DepVarRval_14 = ((MR_Word) ((MR_hl_field(1, Avail_13, (MR_Integer) 0))));
    EvalCode_15 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    STATE_VARIABLE_VLI_33_33 = STATE_VARIABLE_VLI_0_27;
  }
  VarTable_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_33_33, (MR_Integer) 0))));
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_16, DepVar_9, &DepVarEntry_17);
  DepVarType_19 = ((MR_Word) ((MR_hl_field(0, DepVarEntry_17, (MR_Integer) 1))));
  DepVarIsDummy_20 = ((MR_Unsigned) ((MR_hl_field(0, DepVarEntry_17, (MR_Integer) 2))) & (MR_Integer) 1);
  switch (DepVarIsDummy_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        AssignCode_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_Regs_26 = STATE_VARIABLE_Regs_0_25;
        *STATE_VARIABLE_VLI_28 = STATE_VARIABLE_VLI_33_33;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_34;

        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (ReuseLval_8));
        }
        succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(DepVarRval_14, Var_34);
        if (succeeded)
        {
          MR_Word RegType_22;
          MR_Word Target_23;
          MR_String DepVarName_24;
          MR_Word STATE_VARIABLE_VLI_35_35;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_String Var_39;
          MR_Word Var_57;

          Var_57 = parse_tree__builtin_lib_types__float_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(DepVarType_19, Var_57);
          if (succeeded)
            RegType_22 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_33_33, (MR_Integer) 1))) & (MR_Integer) 1);
          else
            RegType_22 = (MR_Integer) 0;
          ll_backend__var_locn__var_locn_acquire_reg_4_p_0(RegType_22, &Target_23, STATE_VARIABLE_VLI_33_33, &STATE_VARIABLE_VLI_35_35);
          ll_backend__var_locn__add_additional_lval_for_var_4_p_0(DepVar_9, Target_23, STATE_VARIABLE_VLI_35_35, STATE_VARIABLE_VLI_28);
          DepVarName_24 = parse_tree__var_table__var_entry_name_2_f_0(DepVar_9, DepVarEntry_17);
          {
            Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_38, 1) = ((MR_Box) (Target_23));
            MR_hl_field(3, Var_38, 2) = ((MR_Box) (DepVarRval_14));
          }
          Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "saving ", DepVarName_24);
          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(0, Var_37, 1) = ((MR_Box) (Var_39));
          }
          AssignCode_21 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_37)));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Regs_26 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Target_23));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Regs_0_25));
          }
        }
        else
        {
          AssignCode_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_VLI_28 = STATE_VARIABLE_VLI_33_33;
          *STATE_VARIABLE_Regs_26 = STATE_VARIABLE_Regs_0_25;
        }
      }
      break;
  }
  *SaveDepVarCode_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EvalCode_15, AssignCode_21);
}

static MR_bool MR_CALL 
ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(
  MR_Word Rval_3,
  MR_Word SearchLval_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Lval_5 = ((MR_Word) ((MR_hl_field(0, Rval_3, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Lval_5)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              if ((SearchLval_4 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, SearchLval_4, (MR_Integer) 0))));

                succeeded = ll_backend__llds____Unify____lval_0_0(Lval_5, Var_52);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Lval_5, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_53;

                    succeeded = (SearchLval_4 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_53 = ((MR_Word) ((MR_hl_field(1, SearchLval_4, (MR_Integer) 0))));
                      succeeded = ll_backend__llds____Unify____lval_0_0(Lval_5, Var_53);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_54;

                    succeeded = (SearchLval_4 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_54 = ((MR_Word) ((MR_hl_field(1, SearchLval_4, (MR_Integer) 0))));
                      succeeded = ll_backend__llds____Unify____lval_0_0(Lval_5, Var_54);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Var_55;

                    succeeded = (SearchLval_4 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_55 = ((MR_Word) ((MR_hl_field(1, SearchLval_4, (MR_Integer) 0))));
                      succeeded = ll_backend__llds____Unify____lval_0_0(Lval_5, Var_55);
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word Rval0_32 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 2))));
                    MR_Word Rval1_33 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 3))));

                    succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(Rval0_32, SearchLval_4);
                    if (!(succeeded))
                    {
                      MR_Word next_value_of_Rval_3 = Rval1_33;

                      // direct tailcall eliminated
                      ;
                      Rval_3 = next_value_of_Rval_3;
                      continue;
                    }
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.lval_depends_on_search_lval\'/2", (MR_String) "lvar");
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.rval_depends_on_search_lval\'/2", (MR_String) "var");
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_27 = ((MR_Word) ((MR_hl_field(2, Rval_3, (MR_Integer) 1))));
          MR_Word next_value_of_Rval_3 = SubRval_27;

          // direct tailcall eliminated
          ;
          Rval_3 = next_value_of_Rval_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_3, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_7 = ((MR_Word) ((MR_hl_field(3, Rval_3, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_3 = SubRval_7;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_28 = ((MR_Word) ((MR_hl_field(3, Rval_3, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_3 = SubRval_28;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_11 = ((MR_Word) ((MR_hl_field(3, Rval_3, (MR_Integer) 2))));
              MR_Word SubRvalB_12 = ((MR_Word) ((MR_hl_field(3, Rval_3, (MR_Integer) 3))));

              succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(SubRvalA_11, SearchLval_4);
              if (!(succeeded))
              {
                MR_Word next_value_of_Rval_3 = SubRvalB_12;

                // direct tailcall eliminated
                ;
                Rval_3 = next_value_of_Rval_3;
                continue;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_13 = ((MR_Word) ((MR_hl_field(3, Rval_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) MemRef_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubRval_26 = ((MR_Word) ((MR_hl_field(0, MemRef_13, (MR_Integer) 0))));
                    MR_Word next_value_of_Rval_3 = SubRval_26;

                    // direct tailcall eliminated
                    ;
                    Rval_3 = next_value_of_Rval_3;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubRval_21 = ((MR_Word) ((MR_hl_field(1, MemRef_13, (MR_Integer) 0))));
                    MR_Word next_value_of_Rval_3 = SubRval_21;

                    // direct tailcall eliminated
                    ;
                    Rval_3 = next_value_of_Rval_3;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CellRval_14 = ((MR_Word) ((MR_hl_field(2, MemRef_13, (MR_Integer) 0))));
                    MR_Word FieldNumRval_16 = ((MR_Word) ((MR_hl_field(2, MemRef_13, (MR_Integer) 2))));
                    MR_Word next_value_of_Rval_3;

                    succeeded = ll_backend__var_locn__rval_depends_on_search_lval_2_p_0(CellRval_14, SearchLval_4);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_Rval_3 = FieldNumRval_16;
                      Rval_3 = next_value_of_Rval_3;
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
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_LocVarMap_12;

  ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_LocVarMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_LocVarMap_12));
}

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_LocVarMap_11;

  ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_LocVarMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_LocVarMap_11));
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__nonempty_state_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_4;

  ll_backend__exprn_aux__substitute_lval_in_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__lval_does_not_support_lval_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  ll_backend__exprn_aux__substitute_lval_in_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
}

static void MR_CALL 
ll_backend__var_locn__record_copy_for_var_7_p_0(
  MR_Word Old_8,
  MR_Word New_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_VarStateMap_0_25,
  MR_Word * STATE_VARIABLE_VarStateMap_26,
  MR_Word STATE_VARIABLE_LocVarMap_0_27,
  MR_Word * STATE_VARIABLE_LocVarMap_28)
{
  MR_bool succeeded;
  MR_Word State0_13;
  MR_Word LvalSet0_14;
  MR_Word MaybeConstRval_15;
  MR_Word MaybeExprRval_16;
  MR_Word Using_17;
  MR_Word DeadOrAlive_18;
  MR_Word Token_19;
  MR_Word LvalSet1_20;
  MR_Word LvalSet2_21;
  MR_Word LvalSet3_22;
  MR_Word LvalSet_23;
  MR_Word State_24;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word OldRootLvals_42;
  MR_Word NewRootLvals_43;
  MR_Word OldRootLvalSet_44;
  MR_Word NewRootLvalSet_45;
  MR_Word InsertSet_46;
  MR_Word DeleteSet_47;
  MR_Word Inserts_48;
  MR_Word Deletes_49;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_LocVarMap_21_51;
  MR_Word Var_52;
  MR_Word LvalList_55;
  MR_Word AllLvals_56;
  MR_Word RootLvals_57;
  MR_Word Var_58;
  MR_Word LvalList_61;
  MR_Word AllLvals_62;
  MR_Word RootLvals_63;
  MR_Word Var_64;
  MR_Box conv0_State0_13;
  MR_Box conv4_STATE_VARIABLE_LocVarMap_21_51;
  MR_Box conv6_STATE_VARIABLE_LocVarMap_28;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), STATE_VARIABLE_VarStateMap_0_25, ((MR_Box) (Var_10)), &conv0_State0_13);
  State0_13 = ((MR_Word) (conv0_State0_13));
  LvalSet0_14 = ((MR_Word) ((MR_hl_field(0, State0_13, (MR_Integer) 0))));
  MaybeConstRval_15 = ((MR_Word) ((MR_hl_field(0, State0_13, (MR_Integer) 1))));
  MaybeExprRval_16 = ((MR_Word) ((MR_hl_field(0, State0_13, (MR_Integer) 2))));
  Using_17 = ((MR_Word) ((MR_hl_field(0, State0_13, (MR_Integer) 3))));
  DeadOrAlive_18 = ((MR_Unsigned) ((MR_hl_field(0, State0_13, (MR_Integer) 4))) & (MR_Integer) 1);
  Token_19 = (MR_Word) (MR_mkword(1, &ll_backend__var_locn_scalar_common_1[11]));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[3]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Old_8));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (Token_19));
  }
  mercury__set__map_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_31, LvalSet0_14, &LvalSet1_20);
  mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_14, LvalSet1_20, &LvalSet2_21);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_6[3]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_2));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (New_9));
  }
  LvalSet3_22 = mercury__set__filter_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_32, LvalSet2_21);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[3]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_3));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Token_19));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (New_9));
  }
  mercury__set__map_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_33, LvalSet3_22, &LvalSet_23);
  {
    State_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, State_24, 0) = ((MR_Box) (LvalSet_23));
    MR_hl_field(0, State_24, 1) = ((MR_Box) (MaybeConstRval_15));
    MR_hl_field(0, State_24, 2) = ((MR_Box) (MaybeExprRval_16));
    MR_hl_field(0, State_24, 3) = ((MR_Box) (Using_17));
    MR_hl_field(0, State_24, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive_18));
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[1]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_4));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (State_24));
  }
  mercury__require__expect_3_p_0(Var_34, (MR_String) "predicate \140ll_backend.var_locn.record_copy_for_var\'/7", (MR_String) "empty state");
  mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_10)), ((MR_Box) (State_24)), STATE_VARIABLE_VarStateMap_0_25, STATE_VARIABLE_VarStateMap_26);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_14, &LvalList_55);
  Var_58 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_55);
  AllLvals_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_55, Var_58);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[20]), AllLvals_56, &RootLvals_57);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_57, &OldRootLvals_42);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet_23, &LvalList_61);
  Var_64 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_61);
  AllLvals_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_61, Var_64);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[21]), AllLvals_62, &RootLvals_63);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_63, &NewRootLvals_43);
  mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), OldRootLvals_42, &OldRootLvalSet_44);
  mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), NewRootLvals_43, &NewRootLvalSet_45);
  mercury__set__difference_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), NewRootLvalSet_45, OldRootLvalSet_44, &InsertSet_46);
  mercury__set__difference_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), OldRootLvalSet_44, NewRootLvalSet_45, &DeleteSet_47);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), InsertSet_46, &Inserts_48);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), DeleteSet_47, &Deletes_49);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_7));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (Var_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_50, Inserts_48, ((MR_Box) (STATE_VARIABLE_LocVarMap_0_27)), &conv4_STATE_VARIABLE_LocVarMap_21_51);
  STATE_VARIABLE_LocVarMap_21_51 = ((MR_Word) (conv4_STATE_VARIABLE_LocVarMap_21_51));
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_for_var_7_p_0_8));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (Var_10));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_52, Deletes_49, ((MR_Box) (STATE_VARIABLE_LocVarMap_21_51)), &conv6_STATE_VARIABLE_LocVarMap_28);
  *STATE_VARIABLE_LocVarMap_28 = ((MR_Word) (conv6_STATE_VARIABLE_LocVarMap_28));
}

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_lval_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OneSource_2,
  MR_Word Lval_3,
  MR_Word STATE_VARIABLE_LvalSet_0_4,
  MR_Word * STATE_VARIABLE_LvalSet_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LvalSet_5 = STATE_VARIABLE_LvalSet_0_4;
    else
    {
      MR_Word OtherSource_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word OtherSources_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SubstLval_16;
      MR_Word STATE_VARIABLE_LvalSet_19_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LvalSet_0_4;

      ll_backend__exprn_aux__substitute_lval_in_lval_4_p_0(OneSource_2, OtherSource_11, Lval_3, &SubstLval_16);
      mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (SubstLval_16)), STATE_VARIABLE_LvalSet_0_4, &STATE_VARIABLE_LvalSet_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = OtherSources_12;
      next_value_of_STATE_VARIABLE_LvalSet_0_4 = STATE_VARIABLE_LvalSet_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LvalSet_0_4 = next_value_of_STATE_VARIABLE_LvalSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_LocVarMap_12;

  ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_LocVarMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_LocVarMap_12));
}

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_LocVarMap_11;

  ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_LocVarMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_LocVarMap_11));
}

static MR_bool MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_LvalSet_5;

  ll_backend__var_locn__ensure_copies_are_present_lval_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_LvalSet_5);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_LvalSet_5));
}

static void MR_CALL 
ll_backend__var_locn__ensure_copies_are_present_5_p_0(
  MR_Word OneSource_6,
  MR_Word OtherSources_7,
  MR_Word Var_8,
  MR_Word STATE_VARIABLE_VLI_0_23,
  MR_Word * STATE_VARIABLE_VLI_24)
{
  MR_bool succeeded;
  MR_Word VarStateMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 6))));
  MR_Word State0_11;
  MR_Word LvalSet0_12;
  MR_Word MaybeConstRval_13;
  MR_Word MaybeExprRval_14;
  MR_Word Using_15;
  MR_Word DeadOrAlive_16;
  MR_Word Lvals0_17;
  MR_Word LvalSet_18;
  MR_Word State_19;
  MR_Word VarStateMap_20;
  MR_Word LocVarMap0_21;
  MR_Word LocVarMap_22;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_VLI_26_26;
  MR_Word OldRootLvals_68;
  MR_Word NewRootLvals_69;
  MR_Word OldRootLvalSet_70;
  MR_Word NewRootLvalSet_71;
  MR_Word InsertSet_72;
  MR_Word DeleteSet_73;
  MR_Word Inserts_74;
  MR_Word Deletes_75;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_LocVarMap_21_77;
  MR_Word Var_78;
  MR_Word LvalList_81;
  MR_Word AllLvals_82;
  MR_Word RootLvals_83;
  MR_Word Var_84;
  MR_Word LvalList_87;
  MR_Word AllLvals_88;
  MR_Word RootLvals_89;
  MR_Word Var_90;
  MR_Box conv0_State0_11;
  MR_Box conv2_LvalSet_18;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Integer Var_49;
  MR_Integer Var_50;
  MR_Word Var_53;
  MR_Integer Var_54;
  MR_Integer Var_55;
  MR_Word Var_56;
  MR_Box conv4_STATE_VARIABLE_LocVarMap_21_77;
  MR_Box conv6_LocVarMap_22;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Integer Var_97;
  MR_Integer Var_98;
  MR_Word Var_99;
  MR_Word Var_101;
  MR_Integer Var_102;
  MR_Integer Var_103;
  MR_Word Var_104;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_10, ((MR_Box) (Var_8)), &conv0_State0_11);
  State0_11 = ((MR_Word) (conv0_State0_11));
  LvalSet0_12 = ((MR_Word) ((MR_hl_field(0, State0_11, (MR_Integer) 0))));
  MaybeConstRval_13 = ((MR_Word) ((MR_hl_field(0, State0_11, (MR_Integer) 1))));
  MaybeExprRval_14 = ((MR_Word) ((MR_hl_field(0, State0_11, (MR_Integer) 2))));
  Using_15 = ((MR_Word) ((MR_hl_field(0, State0_11, (MR_Integer) 3))));
  DeadOrAlive_16 = ((MR_Unsigned) ((MR_hl_field(0, State0_11, (MR_Integer) 4))) & (MR_Integer) 1);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_12, &Lvals0_17);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_10[1]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (ll_backend__var_locn__ensure_copies_are_present_5_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (OtherSources_7));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (OneSource_6));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[2]), Var_25, Lvals0_17, ((MR_Box) (LvalSet0_12)), &conv2_LvalSet_18);
  LvalSet_18 = ((MR_Word) (conv2_LvalSet_18));
  {
    State_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, State_19, 0) = ((MR_Box) (LvalSet_18));
    MR_hl_field(0, State_19, 1) = ((MR_Box) (MaybeConstRval_13));
    MR_hl_field(0, State_19, 2) = ((MR_Box) (MaybeExprRval_14));
    MR_hl_field(0, State_19, 3) = ((MR_Box) (Using_15));
    MR_hl_field(0, State_19, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive_16));
  }
  mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_8)), ((MR_Box) (State_19)), VarStateMap0_10, &VarStateMap_20);
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 0))));
  Var_46 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 2))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 3))));
  Var_49 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 4))));
  Var_50 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 5))));
  LocVarMap0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 7))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 8))));
  Var_54 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 9))));
  Var_55 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 10))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_23, (MR_Integer) 11))));
  {
    STATE_VARIABLE_VLI_26_26 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 1) = (MR_Box) ((MR_Unsigned) (Var_46));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 2) = ((MR_Box) (Var_47));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 4) = ((MR_Box) (Var_49));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 5) = ((MR_Box) (Var_50));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 6) = ((MR_Box) (VarStateMap_20));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 7) = ((MR_Box) (LocVarMap0_21));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 8) = ((MR_Box) (Var_53));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 9) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 10) = ((MR_Box) (Var_55));
    MR_hl_field(0, STATE_VARIABLE_VLI_26_26, 11) = ((MR_Box) (Var_56));
  }
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet0_12, &LvalList_81);
  Var_84 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_81);
  AllLvals_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_81, Var_84);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[18]), AllLvals_82, &RootLvals_83);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_83, &OldRootLvals_68);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet_18, &LvalList_87);
  Var_90 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_87);
  AllLvals_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_87, Var_90);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[19]), AllLvals_88, &RootLvals_89);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_89, &NewRootLvals_69);
  mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), OldRootLvals_68, &OldRootLvalSet_70);
  mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), NewRootLvals_69, &NewRootLvalSet_71);
  mercury__set__difference_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), NewRootLvalSet_71, OldRootLvalSet_70, &InsertSet_72);
  mercury__set__difference_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), OldRootLvalSet_70, NewRootLvalSet_71, &DeleteSet_73);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), InsertSet_72, &Inserts_74);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), DeleteSet_73, &Deletes_75);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (ll_backend__var_locn__ensure_copies_are_present_5_p_0_4));
    MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_76, 3) = ((MR_Box) (Var_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_76, Inserts_74, ((MR_Box) (LocVarMap0_21)), &conv4_STATE_VARIABLE_LocVarMap_21_77);
  STATE_VARIABLE_LocVarMap_21_77 = ((MR_Word) (conv4_STATE_VARIABLE_LocVarMap_21_77));
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (ll_backend__var_locn__ensure_copies_are_present_5_p_0_5));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (Var_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_78, Deletes_75, ((MR_Box) (STATE_VARIABLE_LocVarMap_21_77)), &conv6_LocVarMap_22);
  LocVarMap_22 = ((MR_Word) (conv6_LocVarMap_22));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 0))));
  Var_94 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 2))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 3))));
  Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 4))));
  Var_98 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 5))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 6))));
  Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 8))));
  Var_102 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 9))));
  Var_103 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 10))));
  Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_93));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_94));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_95));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_96));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_97));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_98));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_99));
    MR_hl_field(0, base, 7) = ((MR_Box) (LocVarMap_22));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_101));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_102));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_103));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_104));
  }
}

static void MR_CALL 
ll_backend__var_locn__clobber_old_lval_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarStateMap_13;

  ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarStateMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarStateMap_13));
}

static void MR_CALL 
ll_backend__var_locn__clobber_old_lval_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_VLI_0_8,
  MR_Word * STATE_VARIABLE_VLI_9)
{
  MR_bool succeeded;
  MR_Word Var_10;
  MR_Word LocVarMap1_13;
  MR_Word DependentVarsSet_14;
  MR_Box conv0_DependentVarsSet_14;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_5));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LocVarMap1_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 7))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap1_13, ((MR_Box) (Lval_6)), &conv0_DependentVarsSet_14);
  if (succeeded)
  {
    DependentVarsSet_14 = ((MR_Word) (conv0_DependentVarsSet_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word DependentVars_15;
    MR_Word LocVarMap_16;
    MR_Word VarStateMap2_17;
    MR_Word VarStateMap_18;
    MR_Word STATE_VARIABLE_VLI_16_19;
    MR_Word Var_20;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Integer Var_44;
    MR_Integer Var_45;
    MR_Word Var_48;
    MR_Integer Var_49;
    MR_Integer Var_50;
    MR_Word Var_51;
    MR_Box conv2_VarStateMap_18;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Integer Var_67;
    MR_Integer Var_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Integer Var_72;
    MR_Integer Var_73;
    MR_Word Var_74;

    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DependentVarsSet_14, &DependentVars_15);
    mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), ((MR_Box) (Lval_6)), LocVarMap1_13, &LocVarMap_16);
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 0))));
    Var_41 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 2))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 3))));
    Var_44 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 4))));
    Var_45 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 5))));
    VarStateMap2_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 6))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 8))));
    Var_49 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 9))));
    Var_50 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 10))));
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 11))));
    {
      STATE_VARIABLE_VLI_16_19 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 1) = (MR_Box) ((MR_Unsigned) (Var_41));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 2) = ((MR_Box) (Var_42));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 3) = ((MR_Box) (Var_43));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 4) = ((MR_Box) (Var_44));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 5) = ((MR_Box) (Var_45));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 6) = ((MR_Box) (VarStateMap2_17));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 7) = ((MR_Box) (LocVarMap_16));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 8) = ((MR_Box) (Var_48));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 9) = ((MR_Box) (Var_49));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 10) = ((MR_Box) (Var_50));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_19, 11) = ((MR_Box) (Var_51));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_7[0]));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (ll_backend__var_locn__clobber_old_lval_4_p_0_1));
      MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_20, 3) = ((MR_Box) (Lval_6));
      MR_hl_field(0, Var_20, 4) = ((MR_Box) (Var_10));
      MR_hl_field(0, Var_20, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn_scalar_common_2[3]), Var_20, DependentVars_15, ((MR_Box) (VarStateMap2_17)), &conv2_VarStateMap_18);
    VarStateMap_18 = ((MR_Word) (conv2_VarStateMap_18));
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 0))));
    Var_64 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 2))));
    Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 3))));
    Var_67 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 4))));
    Var_68 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 5))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 7))));
    Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 8))));
    Var_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 9))));
    Var_73 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 10))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_19, (MR_Integer) 11))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VLI_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_64));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_65));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_66));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_67));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_68));
      MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_18));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_74));
    }
  }
  else
    *STATE_VARIABLE_VLI_9 = STATE_VARIABLE_VLI_0_8;
}

static MR_Word MR_CALL 
ll_backend__var_locn__add_field_offset_3_f_0(
  MR_Word Ptag_5,
  MR_Word Offset_6,
  MR_Word Base_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (Base_7));
  }
  {
    HeadVar__4_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, HeadVar__4_4, 1) = ((MR_Box) (Ptag_5));
    MR_hl_field(3, HeadVar__4_4, 2) = ((MR_Box) (Var_8));
    MR_hl_field(3, HeadVar__4_4, 3) = ((MR_Box) (Offset_6));
  }
  return HeadVar__4_4;
}

static MR_bool MR_CALL 
ll_backend__var_locn__convert_live_to_lval_set_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word State_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Lvals_5 = ((MR_Word) ((MR_hl_field(0, State_4, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(0, State_4, (MR_Integer) 4))) & (MR_Integer) 1);

  succeeded = (Var_9 == (MR_Integer) 1);
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_3));
      MR_hl_field(0, base, 1) = ((MR_Box) (Lvals_5));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
ll_backend__var_locn__var_locn_unlock_regs_2_p_0(
  MR_Word STATE_VARIABLE_VLI_0_4,
  MR_Word * STATE_VARIABLE_VLI_5)
{
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_4, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_4, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_4, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_4, (MR_Integer) 3))));
  MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_4, (MR_Integer) 4))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_4, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_4, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_4, (MR_Integer) 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_4, (MR_Integer) 8))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_lock_regs_5_p_0(
  MR_Integer R_6,
  MR_Integer F_7,
  MR_Word Exceptions_8,
  MR_Word STATE_VARIABLE_VLI_0_10,
  MR_Word * STATE_VARIABLE_VLI_11)
{
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 0))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 2))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 3))));
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 4))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 5))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 6))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 7))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 8))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 9) = ((MR_Box) (R_6));
    MR_hl_field(0, base, 10) = ((MR_Box) (F_7));
    MR_hl_field(0, base, 11) = ((MR_Box) (Exceptions_8));
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_release_reg_3_p_0(
  MR_Word Lval_4,
  MR_Word STATE_VARIABLE_VLI_0_8,
  MR_Word * STATE_VARIABLE_VLI_9)
{
  MR_bool succeeded;
  MR_Word Acquired0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 8))));

  succeeded = mercury__set__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_4)), Acquired0_6);
  if (succeeded)
  {
    MR_Word Acquired_7;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Integer Var_30;
    MR_Integer Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Integer Var_35;
    MR_Integer Var_36;
    MR_Word Var_37;

    mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_4)), Acquired0_6, &Acquired_7);
    Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 0))));
    Var_27 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 3))));
    Var_30 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 4))));
    Var_31 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 5))));
    Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 6))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 7))));
    Var_35 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 9))));
    Var_36 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 10))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 11))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VLI_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_27));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 8) = ((MR_Box) (Acquired_7));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_36));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_37));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.var_locn_release_reg\'/3", (MR_String) "unacquired reg");
      return;
    }
}

void MR_CALL 
ll_backend__var_locn__var_locn_acquire_reg_start_at_given_5_p_0(
  MR_Word Type_6,
  MR_Integer Start_7,
  MR_Word * Lval_8,
  MR_Word STATE_VARIABLE_VLI_0_13,
  MR_Word * STATE_VARIABLE_VLI_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word StartLval_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      StartLval_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StartLval_10, 0) = (MR_Box) ((MR_Unsigned) (Type_6));
      MR_hl_field(1, StartLval_10, 1) = ((MR_Box) (Start_7));
    }
    succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(STATE_VARIABLE_VLI_0_13, StartLval_10);
    if (succeeded)
    {
      MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Start_7 + (MR_Unsigned) 1);
      MR_Integer next_value_of_Start_7 = Var_15;

      // direct tailcall eliminated
      ;
      Start_7 = next_value_of_Start_7;
      continue;
    }
    else
    {
      MR_Word Acquired0_11;
      MR_Word Acquired_12;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Integer Var_34;
      MR_Integer Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Integer Var_39;
      MR_Integer Var_40;
      MR_Word Var_41;

      *Lval_8 = StartLval_10;
      Acquired0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 8))));
      mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (*Lval_8)), Acquired0_11, &Acquired_12);
      Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 0))));
      Var_31 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 2))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 3))));
      Var_34 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 4))));
      Var_35 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 5))));
      Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 6))));
      Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 7))));
      Var_39 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 9))));
      Var_40 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 10))));
      Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 11))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_VLI_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_30));
        MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_31));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_32));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_33));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_34));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_35));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_36));
        MR_hl_field(0, base, 7) = ((MR_Box) (Var_37));
        MR_hl_field(0, base, 8) = ((MR_Box) (Acquired_12));
        MR_hl_field(0, base, 9) = ((MR_Box) (Var_39));
        MR_hl_field(0, base, 10) = ((MR_Box) (Var_40));
        MR_hl_field(0, base, 11) = ((MR_Box) (Var_41));
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_acquire_reg_prefer_given_5_p_0(
  MR_Word Type_6,
  MR_Integer Pref_7,
  MR_Word * Lval_8,
  MR_Word STATE_VARIABLE_VLI_0_13,
  MR_Word * STATE_VARIABLE_VLI_14)
{
  MR_bool succeeded;
  MR_Word PrefLval_10;
  MR_Word Acquired0_11;
  MR_Word Acquired_12;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Integer Var_69;
  MR_Integer Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Integer Var_74;
  MR_Integer Var_75;
  MR_Word Var_76;

  {
    PrefLval_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrefLval_10, 0) = (MR_Box) ((MR_Unsigned) (Type_6));
    MR_hl_field(1, PrefLval_10, 1) = ((MR_Box) (Pref_7));
  }
  succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(STATE_VARIABLE_VLI_0_13, PrefLval_10);
  if (succeeded)
  {
    MR_Integer NextNonReserved_16;
    MR_Integer Var_48 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 5))));
    MR_Integer Var_49 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 4))));

    switch (Type_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        NextNonReserved_16 = Var_48;
        break;
      case (MR_Integer) 0:
        NextNonReserved_16 = Var_49;
        break;
    }
    ll_backend__var_locn__get_spare_reg_loop_5_p_0(STATE_VARIABLE_VLI_0_13, Type_6, (MR_Word) ((MR_Unsigned) 0U), NextNonReserved_16, Lval_8);
  }
  else
    *Lval_8 = PrefLval_10;
  Acquired0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 8))));
  mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (*Lval_8)), Acquired0_11, &Acquired_12);
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 0))));
  Var_66 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 2))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 3))));
  Var_69 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 4))));
  Var_70 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 5))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 6))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 7))));
  Var_74 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 9))));
  Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 10))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_13, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_66));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_68));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_69));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_70));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 8) = ((MR_Box) (Acquired_12));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_76));
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_acquire_reg_require_given_3_p_0(
  MR_Word Lval_4,
  MR_Word STATE_VARIABLE_VLI_0_8,
  MR_Word * STATE_VARIABLE_VLI_9)
{
  MR_bool succeeded;
  MR_Word Acquired0_6;
  MR_Word Acquired_7;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Integer Var_28;
  MR_Integer Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Integer Var_33;
  MR_Integer Var_34;
  MR_Word Var_35;

  succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(STATE_VARIABLE_VLI_0_8, Lval_4);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.var_locn_acquire_reg_require_given\'/3", (MR_String) "lval in use");
      return;
    }
  Acquired0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 8))));
  mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_4)), Acquired0_6, &Acquired_7);
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 0))));
  Var_25 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 2))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 3))));
  Var_28 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 4))));
  Var_29 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 5))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 6))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 7))));
  Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 9))));
  Var_34 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 10))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_25));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_28));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_29));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_30));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 8) = ((MR_Box) (Acquired_7));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_35));
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_clobber_regs_3_p_0(
  MR_Word Regs_4,
  MR_Word STATE_VARIABLE_VLI_0_12,
  MR_Word * STATE_VARIABLE_VLI_13)
{
  MR_Word Acquired0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 8))));
  MR_Word Acquired_7;
  MR_Word LocVarMap0_8;
  MR_Word VarStateMap0_9;
  MR_Word LocVarMap_10;
  MR_Word VarStateMap_11;
  MR_Word STATE_VARIABLE_VLI_14_14;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Integer Var_67;
  MR_Integer Var_68;
  MR_Word Var_71;
  MR_Integer Var_72;
  MR_Integer Var_73;
  MR_Word Var_74;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Integer Var_33;
  MR_Integer Var_34;
  MR_Integer Var_38;
  MR_Integer Var_39;
  MR_Word Var_40;

  Acquired_7 = mercury__set__delete_list_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Acquired0_6, Regs_4);
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 0))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 2))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 3))));
  Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 4))));
  Var_34 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 5))));
  VarStateMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 6))));
  LocVarMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 7))));
  Var_38 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 9))));
  Var_39 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 10))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 11))));
  {
    STATE_VARIABLE_VLI_14_14 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 0) = ((MR_Box) (Var_29));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 1) = (MR_Box) ((MR_Unsigned) (Var_30));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 2) = ((MR_Box) (Var_31));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 3) = ((MR_Box) (Var_32));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 4) = ((MR_Box) (Var_33));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 5) = ((MR_Box) (Var_34));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 6) = ((MR_Box) (VarStateMap0_9));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 7) = ((MR_Box) (LocVarMap0_8));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 8) = ((MR_Box) (Acquired_7));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 9) = ((MR_Box) (Var_38));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 10) = ((MR_Box) (Var_39));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 11) = ((MR_Box) (Var_40));
  }
  ll_backend__var_locn__clobber_regs_in_maps_6_p_0(Regs_4, (MR_Integer) 0, LocVarMap0_8, &LocVarMap_10, VarStateMap0_9, &VarStateMap_11);
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 0))));
  Var_64 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 2))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 3))));
  Var_67 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 4))));
  Var_68 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 5))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 8))));
  Var_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 9))));
  Var_73 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 10))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_64));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_66));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_68));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_11));
    MR_hl_field(0, base, 7) = ((MR_Box) (LocVarMap_10));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_74));
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_clobber_reg_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarStateMap_13;

  ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarStateMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarStateMap_13));
}

void MR_CALL 
ll_backend__var_locn__var_locn_clobber_reg_3_p_0(
  MR_Word Reg_4,
  MR_Word STATE_VARIABLE_VLI_0_12,
  MR_Word * STATE_VARIABLE_VLI_13)
{
  MR_bool succeeded;
  MR_Word Acquired0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 8))));
  MR_Word Acquired_7;
  MR_Word LocVarMap0_8;
  MR_Word VarStateMap0_9;
  MR_Word LocVarMap_10;
  MR_Word VarStateMap_11;
  MR_Word STATE_VARIABLE_VLI_14_14;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Integer Var_78;
  MR_Integer Var_79;
  MR_Word Var_82;
  MR_Integer Var_83;
  MR_Integer Var_84;
  MR_Word Var_85;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Integer Var_33;
  MR_Integer Var_34;
  MR_Integer Var_38;
  MR_Integer Var_39;
  MR_Word Var_40;
  MR_Word DependentVarsSet_65;
  MR_Word TypeCtorInfo_22_68;
  MR_Word TypeInfo_23_69;
  MR_Box conv0_DependentVarsSet_65;

  Acquired_7 = mercury__set__delete_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Acquired0_6, ((MR_Box) (Reg_4)));
  Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 0))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 2))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 3))));
  Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 4))));
  Var_34 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 5))));
  VarStateMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 6))));
  LocVarMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 7))));
  Var_38 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 9))));
  Var_39 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 10))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_12, (MR_Integer) 11))));
  {
    STATE_VARIABLE_VLI_14_14 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 0) = ((MR_Box) (Var_29));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 1) = (MR_Box) ((MR_Unsigned) (Var_30));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 2) = ((MR_Box) (Var_31));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 3) = ((MR_Box) (Var_32));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 4) = ((MR_Box) (Var_33));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 5) = ((MR_Box) (Var_34));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 6) = ((MR_Box) (VarStateMap0_9));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 7) = ((MR_Box) (LocVarMap0_8));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 8) = ((MR_Box) (Acquired_7));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 9) = ((MR_Box) (Var_38));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 10) = ((MR_Box) (Var_39));
    MR_hl_field(0, STATE_VARIABLE_VLI_14_14, 11) = ((MR_Box) (Var_40));
  }
  succeeded = ((MR_tag((MR_Word) Reg_4)) == (MR_Integer) 1);
  if (succeeded)
  {
    TypeCtorInfo_22_68 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    TypeInfo_23_69 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_22_68, TypeInfo_23_69, LocVarMap0_8, ((MR_Box) (Reg_4)), &conv0_DependentVarsSet_65);
    if (succeeded)
    {
      DependentVarsSet_65 = ((MR_Word) (conv0_DependentVarsSet_65));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word Var_66;
    MR_Box conv2_VarStateMap_11;

    mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), ((MR_Box) (Reg_4)), LocVarMap0_8, &LocVarMap_10);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_7[0]));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_clobber_reg_3_p_0_1));
      MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_66, 3) = ((MR_Box) (Reg_4));
      MR_hl_field(0, Var_66, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Var_66, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[3]), Var_66, DependentVarsSet_65, ((MR_Box) (VarStateMap0_9)), &conv2_VarStateMap_11);
    VarStateMap_11 = ((MR_Word) (conv2_VarStateMap_11));
  }
  else
  {
    VarStateMap_11 = VarStateMap0_9;
    LocVarMap_10 = LocVarMap0_8;
  }
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 0))));
  Var_75 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 2))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 3))));
  Var_78 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 4))));
  Var_79 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 5))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 8))));
  Var_83 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 9))));
  Var_84 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 10))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_75));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_11));
    MR_hl_field(0, base, 7) = ((MR_Box) (LocVarMap_10));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_85));
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_clobber_all_regs_3_p_0(
  MR_Word OkToDeleteAny_4,
  MR_Word STATE_VARIABLE_VLI_0_11,
  MR_Word * STATE_VARIABLE_VLI_12)
{
  MR_Word LocVarMap0_6;
  MR_Word VarStateMap0_7;
  MR_Word Locs_8;
  MR_Word LocVarMap_9;
  MR_Word VarStateMap_10;
  MR_Word Var_13;
  MR_Word STATE_VARIABLE_VLI_19_19;
  MR_Word STATE_VARIABLE_VLI_20_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Integer Var_27;
  MR_Integer Var_28;

  Var_13 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 0))));
  Var_24 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 2))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 3))));
  Var_27 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 4))));
  Var_28 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 5))));
  VarStateMap0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 6))));
  LocVarMap0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 7))));
  {
    STATE_VARIABLE_VLI_19_19 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 1) = (MR_Box) ((MR_Unsigned) (Var_24));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 2) = ((MR_Box) (Var_25));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 3) = ((MR_Box) (Var_26));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 6) = ((MR_Box) (VarStateMap0_7));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 7) = ((MR_Box) (LocVarMap0_6));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 8) = ((MR_Box) (Var_13));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 9) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 10) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, STATE_VARIABLE_VLI_19_19, 11) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__keys_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap0_6, &Locs_8);
  ll_backend__var_locn__clobber_regs_in_maps_6_p_0(Locs_8, OkToDeleteAny_4, LocVarMap0_6, &LocVarMap_9, VarStateMap0_7, &VarStateMap_10);
  ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(LocVarMap_9, STATE_VARIABLE_VLI_19_19, &STATE_VARIABLE_VLI_20_20);
  ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(VarStateMap_10, STATE_VARIABLE_VLI_20_20, STATE_VARIABLE_VLI_12);
}

static void MR_CALL 
ll_backend__var_locn__var_locn_clear_r1_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_VLI_24;

  ll_backend__var_locn__ensure_copies_are_present_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_VLI_24);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_VLI_24));
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_clear_r1_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarStateMap_22;

  succeeded = ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarStateMap_22);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarStateMap_22));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
ll_backend__var_locn__var_locn_clear_r1_3_p_0(
  MR_Word * Code_4,
  MR_Word STATE_VARIABLE_VLI_0_10,
  MR_Word * STATE_VARIABLE_VLI_11)
{
  MR_bool succeeded;
  MR_Word LocVarMap0_6;
  MR_Word VarStateMap0_7;
  MR_Word LocVarMap_8;
  MR_Word VarStateMap_9;
  MR_Word Var_12 = (MR_Word) (MR_mkword(1, &ll_backend__var_locn_scalar_common_1[9]));
  MR_Word STATE_VARIABLE_VLI_15_15;
  MR_Word STATE_VARIABLE_VLI_24_24;
  MR_Word TypeCtorInfo_23_34;
  MR_Word LocVarMap0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 7))));
  MR_Word AffectedVarSet_26;
  MR_Word AffectedVars_27;
  MR_Word VarStateMap0_28;
  MR_Box conv0_AffectedVarSet_26;
  MR_Word TypeInfo_27_35;
  MR_Word TypeInfo_28_36;
  MR_Word Var_30;
  MR_Box conv2_Var_29;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap0_25, ((MR_Box) (Var_12)), &conv0_AffectedVarSet_26);
  if (succeeded)
  {
    AffectedVarSet_26 = ((MR_Word) (conv0_AffectedVarSet_26));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_23_34 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_23_34, AffectedVarSet_26, &AffectedVars_27);
    VarStateMap0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 6))));
    TypeInfo_27_35 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[0]);
    TypeInfo_28_36 = (MR_Word) (&ll_backend__var_locn_scalar_common_2[3]);
    Var_30 = (MR_Word) (&ll_backend__var_locn_scalar_common_8[4]);
    succeeded = mercury__list__foldl_4_p_3(TypeInfo_27_35, TypeInfo_28_36, Var_30, AffectedVars_27, ((MR_Box) (VarStateMap0_28)), &conv2_Var_29);
    if (succeeded)
      succeeded = MR_TRUE;
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word MovedVar_67;
    MR_Word Pref_70;
    MR_Word STATE_VARIABLE_VLI_30_76;
    MR_Word TypeCtorInfo_43_87;
    MR_Word LocVarMap0_60;
    MR_Word AffectedVarSet_61;
    MR_Word EffAffectedVarSet_62;
    MR_Word EffAffectedVars_63;
    MR_Word VarStateMap0_64;
    MR_Word RegType_69;
    MR_Box conv3_AffectedVarSet_61;
    MR_Word OccupyingVar_65;
    MR_Word OtherSources_66;

    ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(STATE_VARIABLE_VLI_0_10, &LocVarMap0_60);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap0_60, ((MR_Box) (Var_12)), &conv3_AffectedVarSet_61);
    if (succeeded)
    {
      AffectedVarSet_61 = ((MR_Word) (conv3_AffectedVarSet_61));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_43_87 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      parse_tree__set_of_var__delete_list_3_p_0(TypeCtorInfo_43_87, (MR_Word) ((MR_Unsigned) 0U), AffectedVarSet_61, &EffAffectedVarSet_62);
      parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_43_87, EffAffectedVarSet_62, &EffAffectedVars_63);
      ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(STATE_VARIABLE_VLI_0_10, &VarStateMap0_64);
      succeeded = ll_backend__var_locn__find_one_occupying_var_5_p_0(EffAffectedVars_63, Var_12, VarStateMap0_64, &OccupyingVar_65, &OtherSources_66);
      if (succeeded)
      {
        MR_Word OtherVars_68;
        MR_Word Var_75;
        MR_Box conv5_STATE_VARIABLE_VLI_30_76;

        MovedVar_67 = OccupyingVar_65;
        mercury__list__delete_all_3_p_1((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), EffAffectedVars_63, ((MR_Box) (MovedVar_67)), &OtherVars_68);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_75, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_10[0]));
          MR_hl_field(0, Var_75, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_clear_r1_3_p_0_2));
          MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_75, 3) = ((MR_Box) (Var_12));
          MR_hl_field(0, Var_75, 4) = ((MR_Box) (OtherSources_66));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0), Var_75, OtherVars_68, ((MR_Box) (STATE_VARIABLE_VLI_0_10)), &conv5_STATE_VARIABLE_VLI_30_76);
        STATE_VARIABLE_VLI_30_76 = ((MR_Word) (conv5_STATE_VARIABLE_VLI_30_76));
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_77;

        succeeded = (EffAffectedVars_63 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MovedVar_67 = ((MR_Word) ((MR_hl_field(1, EffAffectedVars_63, (MR_Integer) 0))));
          Var_77 = ((MR_Word) ((MR_hl_field(1, EffAffectedVars_63, (MR_Integer) 1))));
          succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            STATE_VARIABLE_VLI_30_76 = STATE_VARIABLE_VLI_0_10;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        ll_backend__var_locn__reg_type_for_var_3_p_0(STATE_VARIABLE_VLI_30_76, MovedVar_67, &RegType_69);
        ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(STATE_VARIABLE_VLI_30_76, MovedVar_67, RegType_69, &Pref_70);
        succeeded = ll_backend__llds____Unify____lval_0_0(Pref_70, Var_12);
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Pref_70)), (MR_Word) ((MR_Unsigned) 0U));
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(STATE_VARIABLE_VLI_30_76, Pref_70);
            if (succeeded)
            {
              MR_Word PrefRegType_71;
              MR_Integer RegNum_72;

              succeeded = ((MR_tag((MR_Word) Pref_70)) == (MR_Integer) 1);
              if (succeeded)
              {
                PrefRegType_71 = ((MR_Unsigned) ((MR_hl_field(1, Pref_70, (MR_Integer) 0))) & (MR_Integer) 1);
                RegNum_72 = ((MR_Integer) ((MR_hl_field(1, Pref_70, (MR_Integer) 1))));
                succeeded = ll_backend__var_locn__reg_is_not_locked_for_var_4_p_0(STATE_VARIABLE_VLI_30_76, PrefRegType_71, RegNum_72, MovedVar_67);
              }
            }
            else
              succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
      ll_backend__var_locn__actually_place_var_6_p_0(MovedVar_67, Pref_70, (MR_Word) (MR_mkword(1, &ll_backend__var_locn_scalar_common_1[10])), Code_4, STATE_VARIABLE_VLI_30_76, &STATE_VARIABLE_VLI_15_15);
    else
    {
      MR_Word Target_73;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word RegType_84;

      RegType_84 = ll_backend__var_locn__lval_spare_reg_type_1_f_0(Var_12);
      ll_backend__var_locn__get_spare_reg_3_p_0(STATE_VARIABLE_VLI_0_10, RegType_84, &Target_73);
      ll_backend__var_locn__record_copy_4_p_0(Var_12, Target_73, STATE_VARIABLE_VLI_0_10, &STATE_VARIABLE_VLI_15_15);
      {
        Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_81, 1) = ((MR_Box) (Target_73));
        MR_hl_field(3, Var_81, 2) = ((MR_Box) (&ll_backend__var_locn_scalar_common_3[2]));
      }
      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(0, Var_80, 1) = ((MR_Box) ((MR_String) "Freeing up the source lval"));
      }
      *Code_4 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_80)));
    }
  }
  else
  {
    *Code_4 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    STATE_VARIABLE_VLI_15_15 = STATE_VARIABLE_VLI_0_10;
  }
  LocVarMap0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_15_15, (MR_Integer) 7))));
  ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(STATE_VARIABLE_VLI_15_15, &VarStateMap0_7);
  ll_backend__var_locn__clobber_regs_in_maps_6_p_0((MR_Word) (MR_mkword(1, &ll_backend__var_locn_scalar_common_1[10])), (MR_Integer) 0, LocVarMap0_6, &LocVarMap_8, VarStateMap0_7, &VarStateMap_9);
  ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(LocVarMap_8, STATE_VARIABLE_VLI_15_15, &STATE_VARIABLE_VLI_24_24);
  ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(VarStateMap_9, STATE_VARIABLE_VLI_24_24, STATE_VARIABLE_VLI_11);
}

static void MR_CALL 
ll_backend__var_locn__clobber_regs_in_maps_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarStateMap_13;

  ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarStateMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarStateMap_13));
}

static void MR_CALL 
ll_backend__var_locn__clobber_regs_in_maps_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word OkToDeleteAny_2,
  MR_Word STATE_VARIABLE_LocVarMap_0_3,
  MR_Word * STATE_VARIABLE_LocVarMap_4,
  MR_Word STATE_VARIABLE_VarStateMap_0_5,
  MR_Word * STATE_VARIABLE_VarStateMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_VarStateMap_6 = STATE_VARIABLE_VarStateMap_0_5;
      *STATE_VARIABLE_LocVarMap_4 = STATE_VARIABLE_LocVarMap_0_3;
    }
    else
    {
      MR_Word Lval_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Lvals_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_LocVarMap_23_23;
      MR_Word STATE_VARIABLE_VarStateMap_24_24;
      MR_Word DependentVarsSet_27;
      MR_Word TypeCtorInfo_22_30;
      MR_Word TypeInfo_23_31;
      MR_Box conv0_DependentVarsSet_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LocVarMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_VarStateMap_0_5;

      succeeded = ((MR_tag((MR_Word) Lval_14)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_22_30 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        TypeInfo_23_31 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_22_30, TypeInfo_23_31, STATE_VARIABLE_LocVarMap_0_3, ((MR_Box) (Lval_14)), &conv0_DependentVarsSet_27);
        if (succeeded)
        {
          DependentVarsSet_27 = ((MR_Word) (conv0_DependentVarsSet_27));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word Var_28;
        MR_Box conv2_STATE_VARIABLE_VarStateMap_24_24;

        mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), ((MR_Box) (Lval_14)), STATE_VARIABLE_LocVarMap_0_3, &STATE_VARIABLE_LocVarMap_23_23);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_7[0]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (ll_backend__var_locn__clobber_regs_in_maps_6_p_0_1));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (Lval_14));
          MR_hl_field(0, Var_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_28, 5) = ((MR_Box) (OkToDeleteAny_2));
        }
        parse_tree__set_of_var__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[3]), Var_28, DependentVarsSet_27, ((MR_Box) (STATE_VARIABLE_VarStateMap_0_5)), &conv2_STATE_VARIABLE_VarStateMap_24_24);
        STATE_VARIABLE_VarStateMap_24_24 = ((MR_Word) (conv2_STATE_VARIABLE_VarStateMap_24_24));
      }
      else
      {
        STATE_VARIABLE_VarStateMap_24_24 = STATE_VARIABLE_VarStateMap_0_5;
        STATE_VARIABLE_LocVarMap_23_23 = STATE_VARIABLE_LocVarMap_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Lvals_15;
      next_value_of_STATE_VARIABLE_LocVarMap_0_3 = STATE_VARIABLE_LocVarMap_23_23;
      next_value_of_STATE_VARIABLE_VarStateMap_0_5 = STATE_VARIABLE_VarStateMap_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LocVarMap_0_3 = next_value_of_STATE_VARIABLE_LocVarMap_0_3;
      STATE_VARIABLE_VarStateMap_0_5 = next_value_of_STATE_VARIABLE_VarStateMap_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_materialize_vars_in_rval_5_p_0(
  MR_Word Rval0_6,
  MR_Word * Rval_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_VLI_0_10,
  MR_Word * STATE_VARIABLE_VLI_11)
{
  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_6, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Rval_7, Code_8, STATE_VARIABLE_VLI_0_10, STATE_VARIABLE_VLI_11);
}

void MR_CALL 
ll_backend__var_locn__var_locn_place_vars_4_p_0(
  MR_Word VarLocns_5,
  MR_Word * Code_6,
  MR_Word STATE_VARIABLE_VLI_0_11,
  MR_Word * STATE_VARIABLE_VLI_12)
{
  MR_Word Lvals_8;
  MR_Integer MaxRegR_9;
  MR_Integer MaxRegF_10;
  MR_Word STATE_VARIABLE_VLI_13_13;
  MR_Word STATE_VARIABLE_VLI_14_14;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Integer Var_23;
  MR_Integer Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Integer Var_64;
  MR_Integer Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;

  mercury__assoc_list__values_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), VarLocns_5, &Lvals_8);
  ll_backend__code_util__max_mentioned_regs_3_p_0(Lvals_8, &MaxRegR_9, &MaxRegF_10);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 0))));
  Var_20 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 2))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 3))));
  Var_23 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 4))));
  Var_24 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 5))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 6))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 7))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_11, (MR_Integer) 8))));
  {
    STATE_VARIABLE_VLI_13_13 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 1) = (MR_Box) ((MR_Unsigned) (Var_20));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 7) = ((MR_Box) (Var_26));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 8) = ((MR_Box) (Var_27));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 9) = ((MR_Box) (MaxRegR_9));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 10) = ((MR_Box) (MaxRegF_10));
    MR_hl_field(0, STATE_VARIABLE_VLI_13_13, 11) = ((MR_Box) (VarLocns_5));
  }
  ll_backend__var_locn__actually_place_vars_4_p_0(VarLocns_5, Code_6, STATE_VARIABLE_VLI_13_13, &STATE_VARIABLE_VLI_14_14);
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 0))));
  Var_61 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 2))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 3))));
  Var_64 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 4))));
  Var_65 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 5))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 6))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 7))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_14_14, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_61));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_63));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_64));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_66));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_68));
    MR_hl_field(0, base, 9) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ll_backend__var_locn__actually_place_vars_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VLI_0_3,
  MR_Word * STATE_VARIABLE_VLI_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_VLI_4 = STATE_VARIABLE_VLI_0_3;
  }
  else
  {
    MR_Word Var_8;
    MR_Word Lval_9;
    MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word FirstCode_13;
    MR_Word RestCode_14;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_VLI_18_18;

    Var_8 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    Lval_9 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
    ll_backend__var_locn__actually_place_var_6_p_0(Var_8, Lval_9, (MR_Word) ((MR_Unsigned) 0U), &FirstCode_13, STATE_VARIABLE_VLI_0_3, &STATE_VARIABLE_VLI_18_18);
    ll_backend__var_locn__actually_place_vars_4_p_0(Rest_10, &RestCode_14, STATE_VARIABLE_VLI_18_18, STATE_VARIABLE_VLI_4);
    *HeadVar__2_2 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstCode_13, RestCode_14);
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_place_var_5_p_0(
  MR_Word Var_6,
  MR_Word Target_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_VLI_0_10,
  MR_Word * STATE_VARIABLE_VLI_11)
{
  ll_backend__var_locn__actually_place_var_6_p_0(Var_6, Target_7, (MR_Word) ((MR_Unsigned) 0U), Code_8, STATE_VARIABLE_VLI_0_10, STATE_VARIABLE_VLI_11);
}

void MR_CALL 
ll_backend__var_locn__var_locn_produce_var_in_reg_5_p_0(
  MR_Word Var_6,
  MR_Word * Lval_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_VLI_0_20,
  MR_Word * STATE_VARIABLE_VLI_21)
{
  MR_bool succeeded;
  MR_Word VarStateMap_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 6))));
  MR_Word State_11;
  MR_Word Lvals_12;
  MR_Word LvalList_17;
  MR_Box conv0_State_11;
  MR_Word SelectLval_18;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_10, ((MR_Box) (Var_6)), &conv0_State_11);
  State_11 = ((MR_Word) (conv0_State_11));
  Lvals_12 = ((MR_Word) ((MR_hl_field(0, State_11, (MR_Integer) 0))));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_12, &LvalList_17);
  succeeded = ll_backend__var_locn__select_reg_lval_2_p_0(LvalList_17, &SelectLval_18);
  if (succeeded)
  {
    *Lval_7 = SelectLval_18;
    *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_VLI_21 = STATE_VARIABLE_VLI_0_20;
  }
  else
  {
    MR_Word RegType_19;
    MR_Word FloatRegType_37 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 0))));

    switch (FloatRegType_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word VarType_39;
          MR_Word Var_40;

          parse_tree__var_table__lookup_var_type_3_p_0(Var_42, Var_6, &VarType_39);
          Var_40 = parse_tree__builtin_lib_types__float_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_39, Var_40);
          if (succeeded)
            RegType_19 = (MR_Integer) 1;
          else
            RegType_19 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        RegType_19 = (MR_Integer) 0;
        break;
    }
    ll_backend__var_locn__select_preferred_reg_4_p_0(STATE_VARIABLE_VLI_0_20, Var_6, RegType_19, Lval_7);
    ll_backend__var_locn__actually_place_var_6_p_0(Var_6, *Lval_7, (MR_Word) ((MR_Unsigned) 0U), Code_8, STATE_VARIABLE_VLI_0_20, STATE_VARIABLE_VLI_21);
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_VLI_0_8,
  MR_Word * STATE_VARIABLE_VLI_9)
{
  MR_bool succeeded;

  succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(STATE_VARIABLE_VLI_0_8, Lval_6);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.var_locn_check_and_set_magic_var_location\'/4", (MR_String) "in use");
      return;
    }
  else
    ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0(Var_5, Lval_6, STATE_VARIABLE_VLI_0_8, STATE_VARIABLE_VLI_9);
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_cell_to_var_15_p_0(
  MR_Word ExprnOpts_16,
  MR_Word Var_17,
  MR_Word ReserveWordAtStart_18,
  MR_Word Ptag_19,
  MR_Word CellArgs0_20,
  MR_Word HowToConstruct_21,
  MR_Word MaybeSize_22,
  MR_Word MaybeAllocId_23,
  MR_Word MayUseAtomic_24,
  MR_Word Label_25,
  MR_Word * Code_26,
  MR_Word STATE_VARIABLE_StaticCellInfo_0_41,
  MR_Word * STATE_VARIABLE_StaticCellInfo_42,
  MR_Word STATE_VARIABLE_VLI_0_43,
  MR_Word * STATE_VARIABLE_VLI_44)
{
  MR_bool succeeded;
  MR_Word CellArgs_33;
  MR_Word MaybeOffset_34;
  MR_Word VarStateMap_35;
  MR_Word StaticGroundCells_36;
  MR_Word TypedRvals_37;

  if ((MaybeSize_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    CellArgs_33 = CellArgs0_20;
    MaybeOffset_34 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word SizeSource_29 = ((MR_Word) ((MR_hl_field(1, MaybeSize_22, (MR_Integer) 0))));
    MR_Word SizeRval_31;
    MR_Word Var_46;

    if (((MR_tag((MR_Word) SizeSource_29)) == (MR_Integer) 1))
    {
      MR_Word SizeVar_32 = ((MR_Word) ((MR_hl_field(1, SizeSource_29, (MR_Integer) 0))));

      {
        SizeRval_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SizeRval_31, 0) = ((MR_Box) (SizeVar_32));
      }
    }
    else
    {
      MR_Integer Size_30 = ((MR_Integer) ((MR_hl_field(0, SizeSource_29, (MR_Integer) 0))));
      MR_Word Var_45;

      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (Size_30));
      }
      {
        SizeRval_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, SizeRval_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, SizeRval_31, 1) = ((MR_Box) (Var_45));
      }
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (SizeRval_31));
      MR_hl_field(1, Var_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      CellArgs_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CellArgs_33, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, CellArgs_33, 1) = ((MR_Box) (CellArgs0_20));
    }
    MaybeOffset_34 = (MR_Word) (MR_mkword(1, &ll_backend__var_locn_scalar_common_3[0]));
  }
  VarStateMap_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_43, (MR_Integer) 6))));
  StaticGroundCells_36 = ll_backend__llds__get_static_ground_cells_1_f_0(ExprnOpts_16);
  succeeded = (StaticGroundCells_36 == (MR_Integer) 0);
  if (succeeded)
    succeeded = ll_backend__var_locn__cell_is_constant_4_p_0(VarStateMap_35, ExprnOpts_16, CellArgs_33, &TypedRvals_37);
  if (succeeded)
  {
    MR_Word DataAddr_38;
    MR_Word CellPtrConst_39;
    MR_Word CellPtrRval_40;
    MR_Word Var_50;

    ll_backend__global_data__add_scalar_static_cell_4_p_0(TypedRvals_37, &DataAddr_38, STATE_VARIABLE_StaticCellInfo_0_41, STATE_VARIABLE_StaticCellInfo_42);
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (DataAddr_38));
      MR_hl_field(3, Var_50, 2) = ((MR_Box) (MaybeOffset_34));
    }
    {
      CellPtrConst_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CellPtrConst_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, CellPtrConst_39, 1) = ((MR_Box) (Var_50));
    }
    {
      CellPtrRval_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, CellPtrRval_40, 0) = ((MR_Box) (Ptag_19));
      MR_hl_field(2, CellPtrRval_40, 1) = ((MR_Box) (CellPtrConst_39));
    }
    ll_backend__var_locn__var_locn_assign_const_to_var_5_p_0(ExprnOpts_16, Var_17, CellPtrRval_40, STATE_VARIABLE_VLI_0_43, STATE_VARIABLE_VLI_44);
    *Code_26 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  }
  else
  {
    ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_p_0(Var_17, ReserveWordAtStart_18, Ptag_19, CellArgs_33, HowToConstruct_21, MaybeOffset_34, MaybeAllocId_23, MayUseAtomic_24, Label_25, Code_26, STATE_VARIABLE_VLI_0_43, STATE_VARIABLE_VLI_44);
    *STATE_VARIABLE_StaticCellInfo_42 = STATE_VARIABLE_StaticCellInfo_0_41;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__cell_is_constant_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word CellArg_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word CellArgs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Rval_11;
    MR_Word LldsType_12;
    MR_Word TypedRvals_13;
    MR_Word Rval0_14;
    MR_Word NumWords_15;
    MR_Word UnboxedFloats_20;
    MR_Word UnboxedInt64s_21;
    MR_Word Var_22;

    if (((MR_tag((MR_Word) CellArg_9)) == (MR_Integer) 2))
    {
      Rval0_14 = ((MR_Word) ((MR_hl_field(2, CellArg_9, (MR_Integer) 0))));
      NumWords_15 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) CellArg_9)) == (MR_Integer) 1))
    {
      MR_Word Var_23;

      Rval0_14 = ((MR_Word) ((MR_hl_field(1, CellArg_9, (MR_Integer) 0))));
      Var_23 = ((MR_Unsigned) ((MR_hl_field(1, CellArg_9, (MR_Integer) 1))) & (MR_Integer) 1);
      succeeded = (Var_23 == (MR_Integer) 0);
      if (succeeded)
      {
        NumWords_15 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(HeadVar__1_1, HeadVar__2_2, Rval0_14, &Rval_11);
      if (succeeded)
      {
        UnboxedFloats_20 = ll_backend__llds__get_unboxed_floats_1_f_0(HeadVar__2_2);
        UnboxedInt64s_21 = ll_backend__llds__get_unboxed_int64s_1_f_0(HeadVar__2_2);
        LldsType_12 = ll_backend__global_data__rval_type_as_arg_4_f_0(UnboxedFloats_20, UnboxedInt64s_21, NumWords_15, Rval_11);
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (Rval_11));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (LldsType_12));
        }
        succeeded = ll_backend__var_locn__cell_is_constant_4_p_0(HeadVar__1_1, HeadVar__2_2, CellArgs_10, &TypedRvals_13);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
            MR_hl_field(1, base, 1) = ((MR_Box) (TypedRvals_13));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__var_locn_assign_dynamic_cell_to_var_12_p_0(
  MR_Word Var_13,
  MR_Word ReserveWordAtStart_14,
  MR_Word Ptag_15,
  MR_Word CellArgs_16,
  MR_Word HowToConstruct_17,
  MR_Word MaybeOffset_18,
  MR_Word MaybeAllocId_19,
  MR_Word MayUseAtomic_20,
  MR_Word Label_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_VLI_0_49,
  MR_Word * STATE_VARIABLE_VLI_50)
{
  MR_bool succeeded;
  MR_Word Lval_24;
  MR_String VarName_25;
  MR_Integer Size_26;
  MR_Word TotalOffset_28;
  MR_Integer TotalSize_29;
  MR_Integer StartOffset_31;
  MR_String LldsComment_33;
  MR_Word RegionVarCode_35;
  MR_Word MaybeRegionRval_36;
  MR_Word ArgsCode_38;
  MR_Word SetupReuseCode_39;
  MR_Word MaybeReuse_40;
  MR_Word CellCode_48;
  MR_Word STATE_VARIABLE_VLI_56_56;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_String Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word VarTable_88;

  ll_backend__var_locn__check_var_is_unknown_2_p_0(STATE_VARIABLE_VLI_0_49, Var_13);
  ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(STATE_VARIABLE_VLI_0_49, Var_13, (MR_Integer) 0, &Lval_24);
  VarTable_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_49, (MR_Integer) 0))));
  VarName_25 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_88, Var_13);
  Size_26 = ll_backend__code_util__size_of_cell_args_1_f_0(CellArgs_16);
  switch (ReserveWordAtStart_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        TotalOffset_28 = MaybeOffset_18;
        TotalSize_29 = Size_26;
        if ((MaybeOffset_18 == (MR_Word) ((MR_Unsigned) 0U)))
          StartOffset_31 = (MR_Integer) 0;
        else
        {
          MR_Integer Offset_30 = ((MR_Integer) ((MR_hl_field(1, MaybeOffset_18, (MR_Integer) 0))));

          StartOffset_31 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Offset_30);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        if ((MaybeOffset_18 == (MR_Word) ((MR_Unsigned) 0U)))
          TotalOffset_28 = (MR_Word) (MR_mkword(1, &ll_backend__var_locn_scalar_common_3[0]));
        else
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140ll_backend.var_locn.var_locn_assign_dynamic_cell_to_var\'/12", (MR_String) "accurate GC combined with term size profiling");
            return;
          }
        TotalSize_29 = (MR_Integer) ((MR_Unsigned) Size_26 + (MR_Unsigned) 1);
        StartOffset_31 = (MR_Integer) 0;
      }
      break;
  }
  ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0(Var_13, Lval_24, STATE_VARIABLE_VLI_0_49, &STATE_VARIABLE_VLI_56_56);
  switch (MR_tag((MR_Word) HowToConstruct_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_58;
        MR_Word Var_59;

        LldsComment_33 = (MR_String) "Allocating heap for ";
        RegionVarCode_35 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        MaybeRegionRval_36 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Ptag_15));
        }
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_59, 0) = ((MR_Box) (Lval_24));
        }
        ll_backend__var_locn__assign_all_cell_args_7_p_0(CellArgs_16, Var_58, Var_59, StartOffset_31, &ArgsCode_38, STATE_VARIABLE_VLI_56_56, STATE_VARIABLE_VLI_50);
        SetupReuseCode_39 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        MaybeReuse_40 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CellToReuse_41 = (MR_Word) (MR_body((MR_Word) (HowToConstruct_17), (MR_Integer) 1));
        MR_Word ReuseVar_42 = ((MR_Word) ((MR_hl_field(0, CellToReuse_41, (MR_Integer) 0))));
        MR_Word ReuseRval_45;
        MR_Word ReuseVarCode_46;
        MR_Word STATE_VARIABLE_VLI_61_61;
        MR_Word ReuseLval_47;

        ll_backend__var_locn__var_locn_produce_var_5_p_0(ReuseVar_42, &ReuseRval_45, &ReuseVarCode_46, STATE_VARIABLE_VLI_56_56, &STATE_VARIABLE_VLI_61_61);
        succeeded = ((MR_tag((MR_Word) ReuseRval_45)) == (MR_Integer) 0);
        if (succeeded)
        {
          ReuseLval_47 = ((MR_Word) ((MR_hl_field(0, ReuseRval_45, (MR_Integer) 0))));
          LldsComment_33 = (MR_String) "Reusing cell on heap for ";
          ll_backend__var_locn__assign_reused_cell_to_var_13_p_0(Lval_24, Ptag_15, CellArgs_16, CellToReuse_41, ReuseLval_47, ReuseVarCode_46, StartOffset_31, Label_21, &MaybeReuse_40, &SetupReuseCode_39, &ArgsCode_38, STATE_VARIABLE_VLI_61_61, STATE_VARIABLE_VLI_50);
          MaybeRegionRval_36 = (MR_Word) ((MR_Unsigned) 0U);
          RegionVarCode_35 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        else
        {
          MR_Word Var_63;
          MR_Word Var_64;

          RegionVarCode_35 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          MaybeRegionRval_36 = (MR_Word) ((MR_Unsigned) 0U);
          LldsComment_33 = (MR_String) "Allocating heap for ";
          {
            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_63, 0) = ((MR_Box) (Ptag_15));
          }
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_64, 0) = ((MR_Box) (Lval_24));
          }
          ll_backend__var_locn__assign_all_cell_args_7_p_0(CellArgs_16, Var_63, Var_64, StartOffset_31, &ArgsCode_38, STATE_VARIABLE_VLI_61_61, STATE_VARIABLE_VLI_50);
          SetupReuseCode_39 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          MaybeReuse_40 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_85;
        MR_Word Var_86;

        LldsComment_33 = (MR_String) "Allocating heap (unnecessarily\?) for ";
        RegionVarCode_35 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        MaybeRegionRval_36 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (Ptag_15));
        }
        {
          Var_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_86, 0) = ((MR_Box) (Lval_24));
        }
        ll_backend__var_locn__assign_all_cell_args_7_p_0(CellArgs_16, Var_85, Var_86, StartOffset_31, &ArgsCode_38, STATE_VARIABLE_VLI_56_56, STATE_VARIABLE_VLI_50);
        SetupReuseCode_39 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        MaybeReuse_40 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word RegionVar_32 = ((MR_Word) ((MR_hl_field(3, HowToConstruct_17, (MR_Integer) 0))));
        MR_Word RegionRval_34;
        MR_Word STATE_VARIABLE_VLI_57_80;
        MR_Word Var_81;
        MR_Word Var_82;

        LldsComment_33 = (MR_String) "Allocating region for ";
        ll_backend__var_locn__var_locn_produce_var_5_p_0(RegionVar_32, &RegionRval_34, &RegionVarCode_35, STATE_VARIABLE_VLI_56_56, &STATE_VARIABLE_VLI_57_80);
        {
          MaybeRegionRval_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeRegionRval_36, 0) = ((MR_Box) (RegionRval_34));
        }
        {
          Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_81, 0) = ((MR_Box) (Ptag_15));
        }
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_82, 0) = ((MR_Box) (Lval_24));
        }
        ll_backend__var_locn__assign_all_cell_args_7_p_0(CellArgs_16, Var_81, Var_82, StartOffset_31, &ArgsCode_38, STATE_VARIABLE_VLI_57_80, STATE_VARIABLE_VLI_50);
        SetupReuseCode_39 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        MaybeReuse_40 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Ptag_15));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (TotalSize_29));
  }
  {
    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_69, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_67, 1) = ((MR_Box) (Lval_24));
    MR_hl_field(3, Var_67, 2) = ((MR_Box) (Var_68));
    MR_hl_field(3, Var_67, 3) = ((MR_Box) (TotalOffset_28));
    MR_hl_field(3, Var_67, 4) = ((MR_Box) (Var_69));
    MR_hl_field(3, Var_67, 5) = ((MR_Box) (MaybeAllocId_19));
    MR_hl_field(3, Var_67, 6) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_20));
    MR_hl_field(3, Var_67, 7) = ((MR_Box) (MaybeRegionRval_36));
    MR_hl_field(3, Var_67, 8) = ((MR_Box) (MaybeReuse_40));
  }
  Var_71 = mercury__string__f_43_43_2_f_0(LldsComment_33, VarName_25);
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(0, Var_66, 1) = ((MR_Box) (Var_71));
  }
  CellCode_48 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_66)));
  Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RegionVarCode_35, ArgsCode_38);
  Var_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CellCode_48, Var_73);
  *Code_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SetupReuseCode_39, Var_72);
}

static void MR_CALL 
ll_backend__var_locn__assign_reused_cell_to_var_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_VLI_9;

  ll_backend__var_locn__var_locn_release_reg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_VLI_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_VLI_9));
}

static void MR_CALL 
ll_backend__var_locn__assign_reused_cell_to_var_13_p_0(
  MR_Word Lval_14,
  MR_Word Ptag_15,
  MR_Word CellArgs_16,
  MR_Word CellToReuse_17,
  MR_Word ReuseLval_18,
  MR_Word ReuseVarCode_19,
  MR_Integer StartOffset_20,
  MR_Word Label_21,
  MR_Word * MaybeReuse_22,
  MR_Word * SetupReuseCode_23,
  MR_Word * ArgsCode_24,
  MR_Word STATE_VARIABLE_VLI_0_39,
  MR_Word * STATE_VARIABLE_VLI_40)
{
  MR_bool succeeded;
  MR_Word ReuseVar_26 = ((MR_Word) ((MR_hl_field(0, CellToReuse_17, (MR_Integer) 0))));
  MR_Word NeedsUpdates0_28 = ((MR_Word) ((MR_hl_field(0, CellToReuse_17, (MR_Integer) 2))));
  MR_Word SaveArgsCode_29;
  MR_Word TempRegs0_30;
  MR_Word TempRegs_33;
  MR_Integer Padding_34;
  MR_Word NeedsUpdates_35;
  MR_Word STATE_VARIABLE_VLI_41_41;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Integer Var_48;
  MR_Integer Var_49;
  MR_Word STATE_VARIABLE_VLI_57_57;
  MR_Box conv1_STATE_VARIABLE_VLI_40;

  ll_backend__var_locn__var_locn_save_cell_fields_6_p_0(ReuseVar_26, ReuseLval_18, &SaveArgsCode_29, &TempRegs0_30, STATE_VARIABLE_VLI_0_39, &STATE_VARIABLE_VLI_41_41);
  *SetupReuseCode_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ReuseVarCode_19, SaveArgsCode_29);
  {
    Var_47 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_47, 0) = ((MR_Box) (ReuseLval_18));
  }
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_45, 2) = ((MR_Box) (Var_47));
  }
  Var_48 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_cell_arg_0), CellArgs_16);
  Var_49 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), NeedsUpdates0_28);
  Padding_34 = (MR_Integer) ((MR_Unsigned) Var_48 - (MR_Unsigned) Var_49);
  succeeded = (Padding_34 >= (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_51;

    Var_51 = mercury__list__duplicate_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), Padding_34, ((MR_Box) ((MR_Integer) 0)));
    NeedsUpdates_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), Var_51, NeedsUpdates0_28);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.assign_reused_cell_to_var\'/13", (MR_String) "Padding < 0");
      return;
    }
  succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0), ((MR_Box) ((MR_Integer) 1)), NeedsUpdates0_28);
  if (succeeded)
  {
    MR_Word MaybeFlag_32;
    MR_Word FlagLval_36;
    MR_Word CannotSkipArgsCode_37;
    MR_Word CanSkipArgsCode_38;
    MR_Word STATE_VARIABLE_VLI_44_44;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;

    ll_backend__var_locn__var_locn_acquire_reg_4_p_0((MR_Integer) 0, &FlagLval_36, STATE_VARIABLE_VLI_41_41, &STATE_VARIABLE_VLI_44_44);
    {
      MaybeFlag_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeFlag_32, 0) = ((MR_Box) (FlagLval_36));
    }
    {
      TempRegs_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TempRegs_33, 0) = ((MR_Box) (FlagLval_36));
      MR_hl_field(1, TempRegs_33, 1) = ((MR_Box) (TempRegs0_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeReuse_22 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, base, 1) = ((MR_Box) (MaybeFlag_32));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Ptag_15));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) (Lval_14));
    }
    ll_backend__var_locn__assign_some_cell_args_9_p_0(CellArgs_16, NeedsUpdates_35, Var_55, Var_56, StartOffset_20, &CannotSkipArgsCode_37, &CanSkipArgsCode_38, STATE_VARIABLE_VLI_44_44, &STATE_VARIABLE_VLI_57_57);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (FlagLval_36));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (Label_21));
    }
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
      MR_hl_field(3, Var_60, 2) = ((MR_Box) (Var_62));
    }
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_59, 1) = ((MR_Box) ((MR_String) "skip some field assignments"));
    }
    Var_58 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_59)));
    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (Label_21));
    }
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_String) "past skipped field assignments"));
    }
    Var_66 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_67)));
    Var_65 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_66, CannotSkipArgsCode_37);
    Var_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CanSkipArgsCode_38, Var_65);
    *ArgsCode_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_58, Var_64);
  }
  else
  {
    MR_Word Var_70;
    MR_Word Var_71;

    TempRegs_33 = TempRegs0_30;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MaybeReuse_22 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Ptag_15));
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (Lval_14));
    }
    ll_backend__var_locn__assign_all_cell_args_7_p_0(CellArgs_16, Var_70, Var_71, StartOffset_20, ArgsCode_24, STATE_VARIABLE_VLI_41_41, &STATE_VARIABLE_VLI_57_57);
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[17]), TempRegs_33, ((MR_Box) (STATE_VARIABLE_VLI_57_57)), &conv1_STATE_VARIABLE_VLI_40);
  *STATE_VARIABLE_VLI_40 = ((MR_Word) (conv1_STATE_VARIABLE_VLI_40));
}

static void MR_CALL 
ll_backend__var_locn__assign_some_cell_args_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Ptag_3,
  MR_Word Base_4,
  MR_Integer Offset_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VLI_0_8,
  MR_Word * STATE_VARIABLE_VLI_9)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *HeadVar__7_7 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_VLI_9 = STATE_VARIABLE_VLI_0_8;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.assign_some_cell_args\'/9", (MR_String) "mismatch lists");
        return;
      }
  else
  {
    MR_Word Var_131 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_132 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.assign_some_cell_args\'/9", (MR_String) "mismatch lists");
        return;
      }
    else
    {
      MR_Word NeedsUpdate_42 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word NeedsUpdates_43 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ThisCode_53;
      MR_Integer NextOffset_54;
      MR_Word RestCannotSkipArgsCode_64;
      MR_Word RestCanSkipArgsCode_65;
      MR_Word STATE_VARIABLE_VLI_69_69;

      switch (MR_tag((MR_Word) Var_132)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Var_132)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ThisCode_53 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                NextOffset_54 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 1);
                STATE_VARIABLE_VLI_69_69 = STATE_VARIABLE_VLI_0_8;
              }
              break;
            case (MR_Integer) 1:
              {
                ThisCode_53 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                NextOffset_54 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 2);
                STATE_VARIABLE_VLI_69_69 = STATE_VARIABLE_VLI_0_8;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_50 = ((MR_Word) ((MR_hl_field(1, Var_132, (MR_Integer) 0))));

            ll_backend__var_locn__assign_cell_arg_7_p_0(Rval_50, Ptag_3, Base_4, Offset_5, &ThisCode_53, STATE_VARIABLE_VLI_0_8, &STATE_VARIABLE_VLI_69_69);
            NextOffset_54 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 1);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Rval0_55 = ((MR_Word) ((MR_hl_field(2, Var_132, (MR_Integer) 0))));
            MR_Word EvalCode_56;
            MR_Word RvalA_57;
            MR_Word RvalB_58;
            MR_Word ThisCodeA_60;
            MR_Word ThisCodeB_61;
            MR_Word STATE_VARIABLE_VLI_71_71;
            MR_Word STATE_VARIABLE_VLI_76_76;
            MR_Integer Var_77;
            MR_Word Var_80;
            MR_Word Rval_87;

            ll_backend__var_locn__materialize_if_var_5_p_0(Rval0_55, &EvalCode_56, &Rval_87, STATE_VARIABLE_VLI_0_8, &STATE_VARIABLE_VLI_71_71);
            {
              RvalA_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, RvalA_57, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, RvalA_57, 1) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(3, RvalA_57, 2) = ((MR_Box) (Rval_87));
            }
            {
              RvalB_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, RvalB_58, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, RvalB_58, 1) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(3, RvalB_58, 2) = ((MR_Box) (Rval_87));
            }
            ll_backend__var_locn__assign_cell_arg_7_p_0(RvalA_57, Ptag_3, Base_4, Offset_5, &ThisCodeA_60, STATE_VARIABLE_VLI_71_71, &STATE_VARIABLE_VLI_76_76);
            Var_77 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 1);
            ll_backend__var_locn__assign_cell_arg_7_p_0(RvalB_58, Ptag_3, Base_4, Var_77, &ThisCodeB_61, STATE_VARIABLE_VLI_76_76, &STATE_VARIABLE_VLI_69_69);
            Var_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCodeA_60, ThisCodeB_61);
            ThisCode_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EvalCode_56, Var_80);
            NextOffset_54 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 2);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Var_132, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_133 = ((MR_Word) ((MR_hl_field(3, Var_132, (MR_Integer) 2))));

                if ((Var_133 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ThisCode_53 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  NextOffset_54 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 1);
                  STATE_VARIABLE_VLI_69_69 = STATE_VARIABLE_VLI_0_8;
                }
                else
                {
                  MR_Word Rval_97 = ((MR_Word) ((MR_hl_field(1, Var_133, (MR_Integer) 0))));

                  ll_backend__var_locn__assign_cell_arg_7_p_0(Rval_97, Ptag_3, Base_4, Offset_5, &ThisCode_53, STATE_VARIABLE_VLI_0_8, &STATE_VARIABLE_VLI_69_69);
                  NextOffset_54 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 1);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_135 = ((MR_Word) ((MR_hl_field(3, Var_132, (MR_Integer) 2))));

                if ((Var_135 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  ThisCode_53 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  NextOffset_54 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 2);
                  STATE_VARIABLE_VLI_69_69 = STATE_VARIABLE_VLI_0_8;
                }
                else
                {
                  MR_Tuple Var_75 = ((MR_Tuple) ((MR_hl_field(1, Var_135, (MR_Integer) 0))));
                  MR_Word EvalCode_105;
                  MR_Word RvalA_106 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 0))));
                  MR_Word RvalB_107 = ((MR_Word) ((MR_hl_field(0, Var_75, (MR_Integer) 1))));
                  MR_Word ThisCodeA_108;
                  MR_Word ThisCodeB_109;
                  MR_Word STATE_VARIABLE_VLI_76_111;
                  MR_Integer Var_112;
                  MR_Word Var_114;

                  EvalCode_105 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  ll_backend__var_locn__assign_cell_arg_7_p_0(RvalA_106, Ptag_3, Base_4, Offset_5, &ThisCodeA_108, STATE_VARIABLE_VLI_0_8, &STATE_VARIABLE_VLI_76_111);
                  Var_112 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 1);
                  ll_backend__var_locn__assign_cell_arg_7_p_0(RvalB_107, Ptag_3, Base_4, Var_112, &ThisCodeB_109, STATE_VARIABLE_VLI_76_111, &STATE_VARIABLE_VLI_69_69);
                  Var_114 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCodeA_108, ThisCodeB_109);
                  ThisCode_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EvalCode_105, Var_114);
                  NextOffset_54 = (MR_Integer) ((MR_Unsigned) Offset_5 + (MR_Unsigned) 2);
                }
              }
              break;
          }
          break;
      }
      ll_backend__var_locn__assign_some_cell_args_9_p_0(Var_131, NeedsUpdates_43, Ptag_3, Base_4, NextOffset_54, &RestCannotSkipArgsCode_64, &RestCanSkipArgsCode_65, STATE_VARIABLE_VLI_69_69, STATE_VARIABLE_VLI_9);
      switch (NeedsUpdate_42) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            *HeadVar__6_6 = RestCannotSkipArgsCode_64;
            *HeadVar__7_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCode_53, RestCanSkipArgsCode_65);
          }
          break;
        case (MR_Integer) 0:
          {
            *HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCode_53, RestCannotSkipArgsCode_64);
            *HeadVar__7_7 = RestCanSkipArgsCode_65;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__assign_all_cell_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Ptag_2,
  MR_Word Base_3,
  MR_Integer Offset_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VLI_0_6,
  MR_Word * STATE_VARIABLE_VLI_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_VLI_7 = STATE_VARIABLE_VLI_0_6;
  }
  else
  {
    MR_Word CellArg_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word CellArgs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ThisCode_24;
    MR_Integer NextOffset_25;
    MR_Word RestCode_35;
    MR_Word STATE_VARIABLE_VLI_39_39;

    switch (MR_tag((MR_Word) CellArg_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CellArg_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ThisCode_24 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              NextOffset_25 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 1);
              STATE_VARIABLE_VLI_39_39 = STATE_VARIABLE_VLI_0_6;
            }
            break;
          case (MR_Integer) 1:
            {
              ThisCode_24 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              NextOffset_25 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 2);
              STATE_VARIABLE_VLI_39_39 = STATE_VARIABLE_VLI_0_6;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(1, CellArg_14, (MR_Integer) 0))));

          ll_backend__var_locn__assign_cell_arg_7_p_0(Rval_21, Ptag_2, Base_3, Offset_4, &ThisCode_24, STATE_VARIABLE_VLI_0_6, &STATE_VARIABLE_VLI_39_39);
          NextOffset_25 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Rval0_26 = ((MR_Word) ((MR_hl_field(2, CellArg_14, (MR_Integer) 0))));
          MR_Word EvalCode_27;
          MR_Word RvalA_28;
          MR_Word RvalB_29;
          MR_Word ThisCodeA_31;
          MR_Word ThisCodeB_32;
          MR_Word STATE_VARIABLE_VLI_41_41;
          MR_Word STATE_VARIABLE_VLI_46_46;
          MR_Integer Var_47;
          MR_Word Var_50;
          MR_Word Rval_57;

          ll_backend__var_locn__materialize_if_var_5_p_0(Rval0_26, &EvalCode_27, &Rval_57, STATE_VARIABLE_VLI_0_6, &STATE_VARIABLE_VLI_41_41);
          {
            RvalA_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, RvalA_28, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, RvalA_28, 1) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(3, RvalA_28, 2) = ((MR_Box) (Rval_57));
          }
          {
            RvalB_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, RvalB_29, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, RvalB_29, 1) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(3, RvalB_29, 2) = ((MR_Box) (Rval_57));
          }
          ll_backend__var_locn__assign_cell_arg_7_p_0(RvalA_28, Ptag_2, Base_3, Offset_4, &ThisCodeA_31, STATE_VARIABLE_VLI_41_41, &STATE_VARIABLE_VLI_46_46);
          Var_47 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 1);
          ll_backend__var_locn__assign_cell_arg_7_p_0(RvalB_29, Ptag_2, Base_3, Var_47, &ThisCodeB_32, STATE_VARIABLE_VLI_46_46, &STATE_VARIABLE_VLI_39_39);
          Var_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCodeA_31, ThisCodeB_32);
          ThisCode_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EvalCode_27, Var_50);
          NextOffset_25 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 2);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, CellArg_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_100 = ((MR_Word) ((MR_hl_field(3, CellArg_14, (MR_Integer) 2))));

              if ((Var_100 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                ThisCode_24 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                NextOffset_25 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 1);
                STATE_VARIABLE_VLI_39_39 = STATE_VARIABLE_VLI_0_6;
              }
              else
              {
                MR_Word Rval_66 = ((MR_Word) ((MR_hl_field(1, Var_100, (MR_Integer) 0))));

                ll_backend__var_locn__assign_cell_arg_7_p_0(Rval_66, Ptag_2, Base_3, Offset_4, &ThisCode_24, STATE_VARIABLE_VLI_0_6, &STATE_VARIABLE_VLI_39_39);
                NextOffset_25 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 1);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_102 = ((MR_Word) ((MR_hl_field(3, CellArg_14, (MR_Integer) 2))));

              if ((Var_102 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                ThisCode_24 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                NextOffset_25 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 2);
                STATE_VARIABLE_VLI_39_39 = STATE_VARIABLE_VLI_0_6;
              }
              else
              {
                MR_Tuple Var_45 = ((MR_Tuple) ((MR_hl_field(1, Var_102, (MR_Integer) 0))));
                MR_Word EvalCode_74;
                MR_Word RvalA_75 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 0))));
                MR_Word RvalB_76 = ((MR_Word) ((MR_hl_field(0, Var_45, (MR_Integer) 1))));
                MR_Word ThisCodeA_77;
                MR_Word ThisCodeB_78;
                MR_Word STATE_VARIABLE_VLI_46_80;
                MR_Integer Var_81;
                MR_Word Var_83;

                EvalCode_74 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                ll_backend__var_locn__assign_cell_arg_7_p_0(RvalA_75, Ptag_2, Base_3, Offset_4, &ThisCodeA_77, STATE_VARIABLE_VLI_0_6, &STATE_VARIABLE_VLI_46_80);
                Var_81 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 1);
                ll_backend__var_locn__assign_cell_arg_7_p_0(RvalB_76, Ptag_2, Base_3, Var_81, &ThisCodeB_78, STATE_VARIABLE_VLI_46_80, &STATE_VARIABLE_VLI_39_39);
                Var_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCodeA_77, ThisCodeB_78);
                ThisCode_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EvalCode_74, Var_83);
                NextOffset_25 = (MR_Integer) ((MR_Unsigned) Offset_4 + (MR_Unsigned) 2);
              }
            }
            break;
        }
        break;
    }
    ll_backend__var_locn__assign_all_cell_args_7_p_0(CellArgs_15, Ptag_2, Base_3, NextOffset_25, &RestCode_35, STATE_VARIABLE_VLI_39_39, STATE_VARIABLE_VLI_7);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ThisCode_24, RestCode_35);
  }
}

static void MR_CALL 
ll_backend__var_locn__materialize_if_var_5_p_0(
  MR_Word Rval0_6,
  MR_Word * EvalCode_7,
  MR_Word * Rval_8,
  MR_Word STATE_VARIABLE_VLI_0_24,
  MR_Word * STATE_VARIABLE_VLI_25)
{
  switch (MR_tag((MR_Word) Rval0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        *EvalCode_7 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *Rval_8 = Rval0_6;
        *STATE_VARIABLE_VLI_25 = STATE_VARIABLE_VLI_0_24;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, Rval0_6, (MR_Integer) 0))));
        MR_Word Avail_27;

        ll_backend__var_locn__find_var_availability_4_p_0(STATE_VARIABLE_VLI_0_24, Var_10, (MR_Word) ((MR_Unsigned) 0U), &Avail_27);
        if ((Avail_27 == (MR_Word) ((MR_Unsigned) 0U)))
          ll_backend__var_locn__materialize_var_general_8_p_0(Var_10, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Rval_8, EvalCode_7, STATE_VARIABLE_VLI_0_24, STATE_VARIABLE_VLI_25);
        else
        {
          *Rval_8 = ((MR_Word) ((MR_hl_field(1, Avail_27, (MR_Integer) 0))));
          *EvalCode_7 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_VLI_25 = STATE_VARIABLE_VLI_0_24;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        *EvalCode_7 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *Rval_8 = Rval0_6;
        *STATE_VARIABLE_VLI_25 = STATE_VARIABLE_VLI_0_24;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__var_locn__assign_cell_arg_7_p_0(
  MR_Word Rval0_8,
  MR_Word Ptag_9,
  MR_Word Base_10,
  MR_Integer Offset_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_VLI_0_39,
  MR_Word * STATE_VARIABLE_VLI_40)
{
  MR_Word Target_14;
  MR_Word EvalCode_16;
  MR_Word AssignCode_23;
  MR_Word Var_41;
  MR_Word Var_42;

  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Offset_11));
  }
  {
    Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Target_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Target_14, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Target_14, 1) = ((MR_Box) (Ptag_9));
    MR_hl_field(3, Target_14, 2) = ((MR_Box) (Base_10));
    MR_hl_field(3, Target_14, 3) = ((MR_Box) (Var_41));
  }
  switch (MR_tag((MR_Word) Rval0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_67;
        MR_Word Var_68;

        EvalCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        {
          Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_68, 1) = ((MR_Box) (Target_14));
          MR_hl_field(3, Var_68, 2) = ((MR_Box) (Rval0_8));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) ((MR_String) "assigning field"));
        }
        AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_67)));
        *STATE_VARIABLE_VLI_40 = STATE_VARIABLE_VLI_0_39;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval_17;
        MR_Word VarTable_18;
        MR_Word VarEntry_19;
        MR_Word VarIsDummy_22;
        MR_Word STATE_VARIABLE_VLI_43_43;
        MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, Rval0_8, (MR_Integer) 0))));
        MR_Word Avail_94;

        ll_backend__var_locn__find_var_availability_4_p_0(STATE_VARIABLE_VLI_0_39, Var_79, (MR_Word) ((MR_Unsigned) 0U), &Avail_94);
        if ((Avail_94 == (MR_Word) ((MR_Unsigned) 0U)))
          ll_backend__var_locn__materialize_var_general_8_p_0(Var_79, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Rval_17, &EvalCode_16, STATE_VARIABLE_VLI_0_39, &STATE_VARIABLE_VLI_43_43);
        else
        {
          Rval_17 = ((MR_Word) ((MR_hl_field(1, Avail_94, (MR_Integer) 0))));
          EvalCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_VLI_43_43 = STATE_VARIABLE_VLI_0_39;
        }
        ll_backend__var_locn__var_locn_get_var_table_2_p_0(STATE_VARIABLE_VLI_43_43, &VarTable_18);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_18, Var_79, &VarEntry_19);
        VarIsDummy_22 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry_19, (MR_Integer) 2))) & (MR_Integer) 1);
        switch (VarIsDummy_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              AssignCode_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_VLI_40 = STATE_VARIABLE_VLI_43_43;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String VarName_24;
              MR_String Comment_25;
              MR_Word Var_46;
              MR_Word Var_47;

              ll_backend__var_locn__add_additional_lval_for_var_4_p_0(Var_79, Target_14, STATE_VARIABLE_VLI_43_43, STATE_VARIABLE_VLI_40);
              ll_backend__var_locn__get_var_name_3_p_0(*STATE_VARIABLE_VLI_40, Var_79, &VarName_24);
              Comment_25 = mercury__string__f_43_43_2_f_0((MR_String) "assigning from ", VarName_24);
              {
                Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_47, 1) = ((MR_Box) (Target_14));
                MR_hl_field(3, Var_47, 2) = ((MR_Box) (Rval_17));
              }
              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_47));
                MR_hl_field(0, Var_46, 1) = ((MR_Box) (Comment_25));
              }
              AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_46)));
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_71;
        MR_Word Var_72;

        EvalCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        {
          Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_72, 1) = ((MR_Box) (Target_14));
          MR_hl_field(3, Var_72, 2) = ((MR_Box) (Rval0_8));
        }
        {
          Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(0, Var_71, 1) = ((MR_Box) ((MR_String) "assigning field from tagged pointer"));
        }
        AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_71)));
        *STATE_VARIABLE_VLI_40 = STATE_VARIABLE_VLI_0_39;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.assign_cell_arg\'/7", (MR_String) "mkword_hole");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_63;
            MR_Word Var_64;

            EvalCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            {
              Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_64, 1) = ((MR_Box) (Target_14));
              MR_hl_field(3, Var_64, 2) = ((MR_Box) (Rval0_8));
            }
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (Var_64));
              MR_hl_field(0, Var_63, 1) = ((MR_Box) ((MR_String) "assigning field from const"));
            }
            AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_63)));
            *STATE_VARIABLE_VLI_40 = STATE_VARIABLE_VLI_0_39;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_59;
            MR_Word Var_60;

            EvalCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            {
              Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_60, 1) = ((MR_Box) (Target_14));
              MR_hl_field(3, Var_60, 2) = ((MR_Box) (Rval0_8));
            }
            {
              Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_59, 0) = ((MR_Box) (Var_60));
              MR_hl_field(0, Var_59, 1) = ((MR_Box) ((MR_String) "assigning field from cast"));
            }
            AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_59)));
            *STATE_VARIABLE_VLI_40 = STATE_VARIABLE_VLI_0_39;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_75;
            MR_Word Var_76;

            EvalCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            {
              Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_76, 1) = ((MR_Box) (Target_14));
              MR_hl_field(3, Var_76, 2) = ((MR_Box) (Rval0_8));
            }
            {
              Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_String) "assigning field from unary op"));
            }
            AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_75)));
            *STATE_VARIABLE_VLI_40 = STATE_VARIABLE_VLI_0_39;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_48;
            MR_Word Var_49;

            EvalCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            {
              Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_49, 1) = ((MR_Box) (Target_14));
              MR_hl_field(3, Var_49, 2) = ((MR_Box) (Rval0_8));
            }
            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_48, 0) = ((MR_Box) (Var_49));
              MR_hl_field(0, Var_48, 1) = ((MR_Box) ((MR_String) "assigning field from binary op"));
            }
            AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_48)));
            *STATE_VARIABLE_VLI_40 = STATE_VARIABLE_VLI_0_39;
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.assign_cell_arg\'/7", (MR_String) "unknown rval");
            return;
          }
          break;
      }
      break;
  }
  *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EvalCode_16, AssignCode_23);
}

void MR_CALL 
ll_backend__var_locn__var_locn_acquire_reg_4_p_0(
  MR_Word Type_5,
  MR_Word * Lval_6,
  MR_Word STATE_VARIABLE_VLI_0_10,
  MR_Word * STATE_VARIABLE_VLI_11)
{
  MR_Word Acquired0_8;
  MR_Word Acquired_9;
  MR_Integer NextNonReserved_13;
  MR_Integer Var_45 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 5))));
  MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 4))));
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Integer Var_66;
  MR_Integer Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Integer Var_71;
  MR_Integer Var_72;
  MR_Word Var_73;

  switch (Type_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      NextNonReserved_13 = Var_45;
      break;
    case (MR_Integer) 0:
      NextNonReserved_13 = Var_46;
      break;
  }
  ll_backend__var_locn__get_spare_reg_loop_5_p_0(STATE_VARIABLE_VLI_0_10, Type_5, (MR_Word) ((MR_Unsigned) 0U), NextNonReserved_13, Lval_6);
  Acquired0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 8))));
  mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (*Lval_6)), Acquired0_8, &Acquired_9);
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 0))));
  Var_63 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 2))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 3))));
  Var_66 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 4))));
  Var_67 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 5))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 6))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 7))));
  Var_71 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 9))));
  Var_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 10))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_10, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_63));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_64));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_66));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_68));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_69));
    MR_hl_field(0, base, 8) = ((MR_Box) (Acquired_9));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_73));
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_SaveDepVarCode_10;
  MR_Word conv2_STATE_VARIABLE_Regs_26;
  MR_Word conv1_STATE_VARIABLE_VLI_28;

  ll_backend__var_locn__var_locn_save_cell_fields_2_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_SaveDepVarCode_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Regs_26, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_VLI_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_SaveDepVarCode_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Regs_26));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_VLI_28));
}

void MR_CALL 
ll_backend__var_locn__var_locn_save_cell_fields_6_p_0(
  MR_Word ReuseVar_7,
  MR_Word ReuseLval_8,
  MR_Word * Code_9,
  MR_Word * Regs_10,
  MR_Word STATE_VARIABLE_VLI_0_17,
  MR_Word * STATE_VARIABLE_VLI_18)
{
  MR_Word VarStateMap_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 6))));
  MR_Word ReuseVarState0_13;
  MR_Word DepVarsSet_14;
  MR_Word DepVars_15;
  MR_Word SaveArgsCode_16;
  MR_Word Var_19;
  MR_Box conv0_ReuseVarState0_13;
  MR_Box conv5_Regs_10;
  MR_Box conv4_STATE_VARIABLE_VLI_18;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_12, ((MR_Box) (ReuseVar_7)), &conv0_ReuseVarState0_13);
  ReuseVarState0_13 = ((MR_Word) (conv0_ReuseVarState0_13));
  DepVarsSet_14 = ((MR_Word) ((MR_hl_field(0, ReuseVarState0_13, (MR_Integer) 3))));
  DepVars_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DepVarsSet_14);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_9[1]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_save_cell_fields_6_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (ReuseLval_8));
  }
  mercury__list__map_foldl2_7_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn_scalar_common_1[3]), (MR_Word) (&ll_backend__var_locn_scalar_common_1[4]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0), Var_19, DepVars_15, &SaveArgsCode_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_Regs_10, ((MR_Box) (STATE_VARIABLE_VLI_0_17)), &conv4_STATE_VARIABLE_VLI_18);
  *Regs_10 = ((MR_Word) (conv5_Regs_10));
  *STATE_VARIABLE_VLI_18 = ((MR_Word) (conv4_STATE_VARIABLE_VLI_18));
  *Code_9 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveArgsCode_16);
}

void MR_CALL 
ll_backend__var_locn__var_locn_produce_var_5_p_0(
  MR_Word Var_6,
  MR_Word * Rval_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_VLI_0_30,
  MR_Word * STATE_VARIABLE_VLI_31)
{
  MR_bool succeeded;
  MR_Word VarStateMap_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_30, (MR_Integer) 6))));
  MR_Word State_11;
  MR_Word Lvals_12;
  MR_Word MaybeConstRval_13;
  MR_Word MaybeExprRval_14;
  MR_Word LvalsList_17;
  MR_Box conv0_State_11;
  MR_Word Rval1_18;
  MR_Word Lval1_49;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_10, ((MR_Box) (Var_6)), &conv0_State_11);
  State_11 = ((MR_Word) (conv0_State_11));
  Lvals_12 = ((MR_Word) ((MR_hl_field(0, State_11, (MR_Integer) 0))));
  MaybeConstRval_13 = ((MR_Word) ((MR_hl_field(0, State_11, (MR_Integer) 1))));
  MaybeExprRval_14 = ((MR_Word) ((MR_hl_field(0, State_11, (MR_Integer) 2))));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_12, &LvalsList_17);
  succeeded = ll_backend__var_locn__select_reg_lval_2_p_0(LvalsList_17, &Lval1_49);
  if (succeeded)
  {
    {
      Rval1_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Rval1_18, 0) = ((MR_Box) (Lval1_49));
    }
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Lval2_50;

    succeeded = ll_backend__var_locn__select_stack_lval_2_p_0(LvalsList_17, &Lval2_50);
    if (succeeded)
    {
      {
        Rval1_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Rval1_18, 0) = ((MR_Box) (Lval2_50));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ConstRval_51;

      succeeded = (MaybeConstRval_13 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ConstRval_51 = ((MR_Word) ((MR_hl_field(1, MaybeConstRval_13, (MR_Integer) 0))));
        Rval1_18 = ConstRval_51;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Lval3_52;

        succeeded = (LvalsList_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Lval3_52 = ((MR_Word) ((MR_hl_field(1, LvalsList_17, (MR_Integer) 0))));
          {
            Rval1_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Rval1_18, 0) = ((MR_Box) (Lval3_52));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    *Rval_7 = Rval1_18;
    *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_VLI_31 = STATE_VARIABLE_VLI_0_30;
  }
  else
  {
    MR_Word Rval2_27;
    MR_Word ExprVar_19;
    MR_Word ExprState_20;
    MR_Word ExprLvals_21;
    MR_Word ExprMaybeConstRval_22;
    MR_Word ExprLvalsList_26;
    MR_Word Var_32;
    MR_Box conv1_ExprState_20;
    MR_Word Lval1_54;

    succeeded = (MaybeExprRval_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(1, MaybeExprRval_14, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 1);
      if (succeeded)
      {
        ExprVar_19 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
        mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_10, ((MR_Box) (ExprVar_19)), &conv1_ExprState_20);
        ExprState_20 = ((MR_Word) (conv1_ExprState_20));
        ExprLvals_21 = ((MR_Word) ((MR_hl_field(0, ExprState_20, (MR_Integer) 0))));
        ExprMaybeConstRval_22 = ((MR_Word) ((MR_hl_field(0, ExprState_20, (MR_Integer) 1))));
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ExprLvals_21, &ExprLvalsList_26);
        succeeded = ll_backend__var_locn__select_reg_lval_2_p_0(ExprLvalsList_26, &Lval1_54);
        if (succeeded)
        {
          {
            Rval2_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Rval2_27, 0) = ((MR_Box) (Lval1_54));
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Lval2_55;

          succeeded = ll_backend__var_locn__select_stack_lval_2_p_0(ExprLvalsList_26, &Lval2_55);
          if (succeeded)
          {
            {
              Rval2_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Rval2_27, 0) = ((MR_Box) (Lval2_55));
            }
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word ConstRval_56;

            succeeded = (ExprMaybeConstRval_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConstRval_56 = ((MR_Word) ((MR_hl_field(1, ExprMaybeConstRval_22, (MR_Integer) 0))));
              Rval2_27 = ConstRval_56;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Lval3_57;

              succeeded = (ExprLvalsList_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Lval3_57 = ((MR_Word) ((MR_hl_field(1, ExprLvalsList_26, (MR_Integer) 0))));
                {
                  Rval2_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Rval2_27, 0) = ((MR_Box) (Lval3_57));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *Rval_7 = Rval2_27;
      *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_VLI_31 = STATE_VARIABLE_VLI_0_30;
    }
    else
    {
      MR_Word RegType_28;
      MR_Word Lval_29;
      MR_Word FloatRegType_59 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_30, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_30, (MR_Integer) 0))));

      switch (FloatRegType_59) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word VarType_61;
            MR_Word Var_62;

            parse_tree__var_table__lookup_var_type_3_p_0(Var_64, Var_6, &VarType_61);
            Var_62 = parse_tree__builtin_lib_types__float_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_61, Var_62);
            if (succeeded)
              RegType_28 = (MR_Integer) 1;
            else
              RegType_28 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          RegType_28 = (MR_Integer) 0;
          break;
      }
      ll_backend__var_locn__select_preferred_reg_4_p_0(STATE_VARIABLE_VLI_0_30, Var_6, RegType_28, &Lval_29);
      ll_backend__var_locn__actually_place_var_6_p_0(Var_6, Lval_29, (MR_Word) ((MR_Unsigned) 0U), Code_8, STATE_VARIABLE_VLI_0_30, STATE_VARIABLE_VLI_31);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Rval_7 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Lval_29));
      }
    }
  }
}

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_4_p_0(
  MR_Word VLI_5,
  MR_Word Var_6,
  MR_Word RegType_7,
  MR_Word * Lval_8)
{
  MR_bool succeeded;
  MR_Word FollowVarMap_10 = ((MR_Word) ((MR_hl_field(0, VLI_5, (MR_Integer) 3))));
  MR_Word PrefLocn_11;
  MR_Box conv0_PrefLocn_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), FollowVarMap_10, ((MR_Box) (Var_6)), &conv0_PrefLocn_11);
  if (succeeded)
  {
    PrefLocn_11 = ((MR_Word) (conv0_PrefLocn_11));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    if ((PrefLocn_11 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) PrefLocn_11)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
  {
    MR_Word PrefLval_16;
    MR_Word PrefRegType_14;
    MR_Integer N_15;
    MR_Word TypeCtorInfo_20_19;

    succeeded = ((MR_tag((MR_Word) PrefLocn_11)) == (MR_Integer) 1);
    if (succeeded)
    {
      PrefRegType_14 = ((MR_Unsigned) ((MR_hl_field(1, PrefLocn_11, (MR_Integer) 0))) & (MR_Integer) 1);
      N_15 = ((MR_Integer) ((MR_hl_field(1, PrefLocn_11, (MR_Integer) 1))));
      {
        PrefLval_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PrefLval_16, 0) = (MR_Box) ((MR_Unsigned) (PrefRegType_14));
        MR_hl_field(1, PrefLval_16, 1) = ((MR_Box) (N_15));
      }
      succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(VLI_5, PrefLval_16);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_20_19 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_20_19, ((MR_Box) (PrefLval_16)), (MR_Word) ((MR_Unsigned) 0U));
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      *Lval_8 = PrefLval_16;
    else
    {
      MR_Integer NextNonReserved_31;
      MR_Integer Var_62 = ((MR_Integer) ((MR_hl_field(0, VLI_5, (MR_Integer) 5))));
      MR_Integer Var_63 = ((MR_Integer) ((MR_hl_field(0, VLI_5, (MR_Integer) 4))));

      switch (RegType_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          NextNonReserved_31 = Var_62;
          break;
        case (MR_Integer) 0:
          NextNonReserved_31 = Var_63;
          break;
      }
      ll_backend__var_locn__get_spare_reg_loop_5_p_0(VLI_5, RegType_7, (MR_Word) ((MR_Unsigned) 0U), NextNonReserved_31, Lval_8);
    }
  }
  else
    ll_backend__var_locn__get_spare_reg_avoid_4_p_0(VLI_5, RegType_7, (MR_Word) ((MR_Unsigned) 0U), Lval_8);
}

static void MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LocVarMap_11;

  ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LocVarMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LocVarMap_11));
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_VLI_0_14,
  MR_Word * STATE_VARIABLE_VLI_15)
{
  MR_bool succeeded;
  MR_Word LocVarMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 7))));
  MR_Word LocVarMap_9;
  MR_Word VarStateMap0_10;
  MR_Word LvalSet_11;
  MR_Word State_12;
  MR_Word VarStateMap_13;
  MR_Word STATE_VARIABLE_VLI_16_16;
  MR_Word Var_19;
  MR_Word Lvals_36;
  MR_Word NoDupRootLvals_38;
  MR_Word Var_39;
  MR_Word LvalList_42;
  MR_Word AllLvals_43;
  MR_Word RootLvals_44;
  MR_Word Var_45;
  MR_Box conv1_LocVarMap_9;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Integer Var_52;
  MR_Integer Var_53;
  MR_Word Var_56;
  MR_Integer Var_57;
  MR_Integer Var_58;
  MR_Word Var_59;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Integer Var_75;
  MR_Integer Var_76;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Integer Var_80;
  MR_Integer Var_81;
  MR_Word Var_82;

  Lvals_36 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_6)));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_36, &LvalList_42);
  Var_45 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_42);
  AllLvals_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_42, Var_45);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[16]), AllLvals_43, &RootLvals_44);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_44, &NoDupRootLvals_38);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0_2));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Var_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_39, NoDupRootLvals_38, ((MR_Box) (LocVarMap0_8)), &conv1_LocVarMap_9);
  LocVarMap_9 = ((MR_Word) (conv1_LocVarMap_9));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 0))));
  Var_49 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 2))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 3))));
  Var_52 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 4))));
  Var_53 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 5))));
  VarStateMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 6))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 8))));
  Var_57 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 9))));
  Var_58 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 10))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 11))));
  {
    STATE_VARIABLE_VLI_16_16 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 0) = ((MR_Box) (Var_48));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 1) = (MR_Box) ((MR_Unsigned) (Var_49));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 2) = ((MR_Box) (Var_50));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 3) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 4) = ((MR_Box) (Var_52));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 5) = ((MR_Box) (Var_53));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 6) = ((MR_Box) (VarStateMap0_10));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 7) = ((MR_Box) (LocVarMap_9));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 8) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 9) = ((MR_Box) (Var_57));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 10) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 11) = ((MR_Box) (Var_59));
  }
  LvalSet_11 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_6)));
  Var_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    State_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, State_12, 0) = ((MR_Box) (LvalSet_11));
    MR_hl_field(0, State_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, State_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, State_12, 3) = ((MR_Box) (Var_19));
    MR_hl_field(0, State_12, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_5)), ((MR_Box) (State_12)), VarStateMap0_10, &VarStateMap_13);
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 0))));
  Var_72 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 2))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 3))));
  Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 4))));
  Var_76 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 5))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 7))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 8))));
  Var_80 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 9))));
  Var_81 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 10))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_72));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_13));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_82));
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_reassign_tagword_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VLI_9;

  ll_backend__var_locn__clobber_old_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VLI_9);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VLI_9));
}

void MR_CALL 
ll_backend__var_locn__var_locn_reassign_tagword_var_6_p_0(
  MR_Word Var_7,
  MR_Unsigned ToOrMask_8,
  MR_Word ToOrRval0_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_32,
  MR_Word * STATE_VARIABLE_VLI_33)
{
  MR_bool succeeded;
  MR_Word VarLval_12;
  MR_Word VarCode_13;
  MR_Word VarStateMap0_14;
  MR_Word State0_15;
  MR_Word STATE_VARIABLE_VLI_34_34;
  MR_Box conv0_State0_15;
  MR_Word Lvals_16;
  MR_Word Using0_19;
  MR_Word DeadOrAlive0_20;

  ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_5_p_0(Var_7, &VarLval_12, &VarCode_13, STATE_VARIABLE_VLI_0_32, &STATE_VARIABLE_VLI_34_34);
  VarStateMap0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_34_34, (MR_Integer) 6))));
  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_14, ((MR_Box) (Var_7)), &conv0_State0_15);
  State0_15 = ((MR_Word) (conv0_State0_15));
  Lvals_16 = ((MR_Word) ((MR_hl_field(0, State0_15, (MR_Integer) 0))));
  Using0_19 = ((MR_Word) ((MR_hl_field(0, State0_15, (MR_Integer) 3))));
  DeadOrAlive0_20 = ((MR_Unsigned) ((MR_hl_field(0, State0_15, (MR_Integer) 4))) & (MR_Integer) 1);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Using0_19);
  if (succeeded)
    succeeded = (DeadOrAlive0_20 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word OtherLvals_21;
    MR_Word ComplementMask_22;
    MR_Word MaskedOldVarRval_23;
    MR_Word ToOrRval_24;
    MR_Word MaterializeCode_25;
    MR_Word NewVarRval_26;
    MR_Word AssignCode_28;
    MR_Word VarStateMap1_29;
    MR_Word State_30;
    MR_Word VarStateMap_31;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_VLI_36_36;
    MR_Word Var_37;
    MR_Unsigned Var_38;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_VLI_42_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Box conv2_STATE_VARIABLE_VLI_36_36;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Integer Var_91;
    MR_Integer Var_92;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Integer Var_96;
    MR_Integer Var_97;
    MR_Word Var_98;

    mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (VarLval_12)), Lvals_16, &OtherLvals_21);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[2]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_reassign_tagword_var_6_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (Var_7));
    }
    mercury__set__fold_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0), Var_35, OtherLvals_21, ((MR_Box) (STATE_VARIABLE_VLI_34_34)), &conv2_STATE_VARIABLE_VLI_36_36);
    STATE_VARIABLE_VLI_36_36 = ((MR_Word) (conv2_STATE_VARIABLE_VLI_36_36));
    Var_38 = ~(ToOrMask_8);
    {
      Var_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_37, 0) = ((MR_Box) (Var_38));
    }
    {
      ComplementMask_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, ComplementMask_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, ComplementMask_22, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (VarLval_12));
    }
    {
      MaskedOldVarRval_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MaskedOldVarRval_23, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, MaskedOldVarRval_23, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__var_locn_scalar_common_1[7])));
      MR_hl_field(3, MaskedOldVarRval_23, 2) = ((MR_Box) (Var_41));
      MR_hl_field(3, MaskedOldVarRval_23, 3) = ((MR_Box) (ComplementMask_22));
    }
    ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(ToOrRval0_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ToOrRval_24, &MaterializeCode_25, STATE_VARIABLE_VLI_36_36, &STATE_VARIABLE_VLI_42_42);
    {
      NewVarRval_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, NewVarRval_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, NewVarRval_26, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__var_locn_scalar_common_1[8])));
      MR_hl_field(3, NewVarRval_26, 2) = ((MR_Box) (MaskedOldVarRval_23));
      MR_hl_field(3, NewVarRval_26, 3) = ((MR_Box) (ToOrRval_24));
    }
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (VarLval_12));
      MR_hl_field(3, Var_46, 2) = ((MR_Box) (NewVarRval_26));
    }
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) ((MR_String) "updating tagword"));
    }
    AssignCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_45)));
    Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeCode_25, AssignCode_28);
    *Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), VarCode_13, Var_47);
    VarStateMap1_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 6))));
    Var_48 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (VarLval_12)));
    {
      State_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, State_30, 0) = ((MR_Box) (Var_48));
      MR_hl_field(0, State_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, State_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, State_30, 3) = ((MR_Box) (Using0_19));
      MR_hl_field(0, State_30, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive0_20));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_7)), ((MR_Box) (State_30)), VarStateMap1_29, &VarStateMap_31);
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 0))));
    Var_88 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 2))));
    Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 3))));
    Var_91 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 4))));
    Var_92 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 5))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 7))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 8))));
    Var_96 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 9))));
    Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 10))));
    Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_42_42, (MR_Integer) 11))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VLI_33 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_88));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_89));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_90));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_91));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_92));
      MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_31));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_94));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_95));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_96));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_97));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_98));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.var_locn_reassign_tagword_var\'/6", (MR_String) "unexpected var_state");
      return;
    }
}

void MR_CALL 
ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_5_p_0(
  MR_Word Var_6,
  MR_Word * Lval_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_VLI_0_20,
  MR_Word * STATE_VARIABLE_VLI_21)
{
  MR_bool succeeded;
  MR_Word VarStateMap_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 6))));
  MR_Word State_11;
  MR_Word Lvals_12;
  MR_Word LvalList_17;
  MR_Box conv0_State_11;
  MR_Word SelectLval_18;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_10, ((MR_Box) (Var_6)), &conv0_State_11);
  State_11 = ((MR_Word) (conv0_State_11));
  Lvals_12 = ((MR_Word) ((MR_hl_field(0, State_11, (MR_Integer) 0))));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_12, &LvalList_17);
  succeeded = ll_backend__var_locn__select_reg_or_stack_lval_2_p_0(LvalList_17, &SelectLval_18);
  if (succeeded)
  {
    *Lval_7 = SelectLval_18;
    *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_VLI_21 = STATE_VARIABLE_VLI_0_20;
  }
  else
  {
    MR_Word RegType_19;
    MR_Word FloatRegType_37 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 0))));

    switch (FloatRegType_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word VarType_39;
          MR_Word Var_40;

          parse_tree__var_table__lookup_var_type_3_p_0(Var_42, Var_6, &VarType_39);
          Var_40 = parse_tree__builtin_lib_types__float_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_39, Var_40);
          if (succeeded)
            RegType_19 = (MR_Integer) 1;
          else
            RegType_19 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        RegType_19 = (MR_Integer) 0;
        break;
    }
    ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(STATE_VARIABLE_VLI_0_20, Var_6, RegType_19, Lval_7);
    ll_backend__var_locn__actually_place_var_6_p_0(Var_6, *Lval_7, (MR_Word) ((MR_Unsigned) 0U), Code_8, STATE_VARIABLE_VLI_0_20, STATE_VARIABLE_VLI_21);
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__select_reg_or_stack_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Lval_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Lval0_3;
    MR_Word Lvals0_4;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Lval0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Lvals0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Lval0_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Lval0_3, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
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
      if (succeeded)
      {
        *Lval_5 = Lval0_3;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Lvals0_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_reassign_mkword_hole_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VLI_9;

  ll_backend__var_locn__clobber_old_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VLI_9);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VLI_9));
}

void MR_CALL 
ll_backend__var_locn__var_locn_reassign_mkword_hole_var_6_p_0(
  MR_Word Var_7,
  MR_Word Ptag_8,
  MR_Word Rval_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_22,
  MR_Word * STATE_VARIABLE_VLI_23)
{
  MR_bool succeeded;
  MR_Word VarStateMap0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_22, (MR_Integer) 6))));
  MR_Word State0_13;
  MR_Box conv0_State0_13;
  MR_Word Lvals_14;
  MR_Word TypeCtorInfo_34_34;
  MR_Word MaybeConstRval_15;
  MR_Word MaybeExprRval_16;
  MR_Word Using0_17;
  MR_Word DeadOrAlive0_18;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_12, ((MR_Box) (Var_7)), &conv0_State0_13);
  State0_13 = ((MR_Word) (conv0_State0_13));
  Lvals_14 = ((MR_Word) ((MR_hl_field(0, State0_13, (MR_Integer) 0))));
  MaybeConstRval_15 = ((MR_Word) ((MR_hl_field(0, State0_13, (MR_Integer) 1))));
  MaybeExprRval_16 = ((MR_Word) ((MR_hl_field(0, State0_13, (MR_Integer) 2))));
  Using0_17 = ((MR_Word) ((MR_hl_field(0, State0_13, (MR_Integer) 3))));
  DeadOrAlive0_18 = ((MR_Unsigned) ((MR_hl_field(0, State0_13, (MR_Integer) 4))) & (MR_Integer) 1);
  succeeded = (MaybeExprRval_16 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    if ((MaybeConstRval_15 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, MaybeConstRval_15, (MR_Integer) 0))));
      MR_Word Var_40;
      uint8_t Var_42;
      uint8_t Var_43;

      succeeded = ((((MR_tag((MR_Word) Var_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_24, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        Var_40 = ((MR_Word) ((MR_hl_field(3, Var_24, (MR_Integer) 1))));
        Var_42 = (uint8_t) (Ptag_8);
        Var_43 = (uint8_t) (Var_40);
        succeeded = (Var_42 == Var_43);
      }
    }
    if (succeeded)
    {
      TypeCtorInfo_34_34 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_34_34, Using0_17);
      if (succeeded)
        succeeded = (DeadOrAlive0_18 == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word VarStateMap1_19;
    MR_Word VarStateMap_21;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_VLI_26_26;
    MR_Word STATE_VARIABLE_VLI_27_27;
    MR_Word Var_28;
    MR_Box conv2_STATE_VARIABLE_VLI_26_26;
    MR_Box conv3__State1_20;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Integer Var_70;
    MR_Integer Var_71;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Integer Var_75;
    MR_Integer Var_76;
    MR_Word Var_77;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[2]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_reassign_mkword_hole_var_6_p_0_1));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (Var_7));
    }
    mercury__set__fold_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0), Var_25, Lvals_14, ((MR_Box) (STATE_VARIABLE_VLI_0_22)), &conv2_STATE_VARIABLE_VLI_26_26);
    STATE_VARIABLE_VLI_26_26 = ((MR_Word) (conv2_STATE_VARIABLE_VLI_26_26));
    VarStateMap1_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 6))));
    mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_7)), &conv3__State1_20, VarStateMap1_19, &VarStateMap_21);
    Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 0))));
    Var_67 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 2))));
    Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 3))));
    Var_70 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 4))));
    Var_71 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 5))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 7))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 8))));
    Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 9))));
    Var_76 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 10))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_26_26, (MR_Integer) 11))));
    {
      STATE_VARIABLE_VLI_27_27 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 0) = ((MR_Box) (Var_66));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 1) = (MR_Box) ((MR_Unsigned) (Var_67));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 2) = ((MR_Box) (Var_68));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 3) = ((MR_Box) (Var_69));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 4) = ((MR_Box) (Var_70));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 5) = ((MR_Box) (Var_71));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 6) = ((MR_Box) (VarStateMap_21));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 7) = ((MR_Box) (Var_73));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 8) = ((MR_Box) (Var_74));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 9) = ((MR_Box) (Var_75));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 10) = ((MR_Box) (Var_76));
      MR_hl_field(0, STATE_VARIABLE_VLI_27_27, 11) = ((MR_Box) (Var_77));
    }
    {
      Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_28, 0) = ((MR_Box) (Ptag_8));
      MR_hl_field(2, Var_28, 1) = ((MR_Box) (Rval_9));
    }
    ll_backend__var_locn__var_locn_assign_expr_to_var_5_p_0(Var_7, Var_28, Code_10, STATE_VARIABLE_VLI_27_27, STATE_VARIABLE_VLI_23);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.var_locn_reassign_mkword_hole_var\'/6", (MR_String) "unexpected var_state");
      return;
    }
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_expr_to_var_5_p_0(
  MR_Word Var_6,
  MR_Word Rval_7,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VLI_0_15,
  MR_Word * STATE_VARIABLE_VLI_16)
{
  MR_bool succeeded;
  MR_Word VarStateMap0_9;
  MR_Word State_10;
  MR_Word VarStateMap1_11;
  MR_Word ContainedVars0_12;
  MR_Word ContainedVars_13;
  MR_Word VarStateMap_14;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word VarStateMap0_27;
  MR_Box conv0_Var_28;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Integer Var_73;
  MR_Integer Var_74;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Integer Var_78;
  MR_Integer Var_79;
  MR_Word Var_80;

  *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  VarStateMap0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 6))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_27, ((MR_Box) (Var_6)), &conv0_Var_28);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    MR_String Name_29;
    MR_String Var_31;
    MR_Word VarTable_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 0))));

    Name_29 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_46, Var_6);
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", Name_29);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", Var_31);
      return;
    }
  }
  VarStateMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 6))));
  Var_17 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Rval_7));
  }
  Var_20 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    State_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, State_10, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, State_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, State_10, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, State_10, 3) = ((MR_Box) (Var_20));
    MR_hl_field(0, State_10, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_6)), ((MR_Box) (State_10)), VarStateMap0_9, &VarStateMap1_11);
  ll_backend__exprn_aux__vars_in_rval_2_p_0(Rval_7, &ContainedVars0_12);
  mercury__list__remove_dups_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), ContainedVars0_12, &ContainedVars_13);
  ll_backend__var_locn__add_use_refs_4_p_0(ContainedVars_13, Var_6, VarStateMap1_11, &VarStateMap_14);
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 0))));
  Var_70 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 2))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 3))));
  Var_73 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 4))));
  Var_74 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 5))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 7))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 8))));
  Var_78 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 9))));
  Var_79 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 10))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_15, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_70));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_80));
  }
}

static void MR_CALL 
ll_backend__var_locn__add_use_refs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word UsingVar_2,
  MR_Word STATE_VARIABLE_VarStateMap_0_3,
  MR_Word * STATE_VARIABLE_VarStateMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarStateMap_4 = STATE_VARIABLE_VarStateMap_0_3;
    else
    {
      MR_Word ContainedVar_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ContainedVars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VarStateMap_15_15;
      MR_Word State0_16;
      MR_Word Lvals_17;
      MR_Word MaybeConstRval_18;
      MR_Word MaybeExprRval_19;
      MR_Word Using0_20;
      MR_Word DeadOrAlive_21;
      MR_Word Using_22;
      MR_Word State_23;
      MR_Box conv0_State0_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarStateMap_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), STATE_VARIABLE_VarStateMap_0_3, ((MR_Box) (ContainedVar_9)), &conv0_State0_16);
      State0_16 = ((MR_Word) (conv0_State0_16));
      Lvals_17 = ((MR_Word) ((MR_hl_field(0, State0_16, (MR_Integer) 0))));
      MaybeConstRval_18 = ((MR_Word) ((MR_hl_field(0, State0_16, (MR_Integer) 1))));
      MaybeExprRval_19 = ((MR_Word) ((MR_hl_field(0, State0_16, (MR_Integer) 2))));
      Using0_20 = ((MR_Word) ((MR_hl_field(0, State0_16, (MR_Integer) 3))));
      DeadOrAlive_21 = ((MR_Unsigned) ((MR_hl_field(0, State0_16, (MR_Integer) 4))) & (MR_Integer) 1);
      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UsingVar_2, Using0_20, &Using_22);
      {
        State_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, State_23, 0) = ((MR_Box) (Lvals_17));
        MR_hl_field(0, State_23, 1) = ((MR_Box) (MaybeConstRval_18));
        MR_hl_field(0, State_23, 2) = ((MR_Box) (MaybeExprRval_19));
        MR_hl_field(0, State_23, 3) = ((MR_Box) (Using_22));
        MR_hl_field(0, State_23, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive_21));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (ContainedVar_9)), ((MR_Box) (State_23)), STATE_VARIABLE_VarStateMap_0_3, &STATE_VARIABLE_VarStateMap_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ContainedVars_10;
      next_value_of_STATE_VARIABLE_VarStateMap_0_3 = STATE_VARIABLE_VarStateMap_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarStateMap_0_3 = next_value_of_STATE_VARIABLE_VarStateMap_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_const_to_var_5_p_0(
  MR_Word ExprnOpts_6,
  MR_Word Var_7,
  MR_Word ConstRval0_8,
  MR_Word STATE_VARIABLE_VLI_0_14,
  MR_Word * STATE_VARIABLE_VLI_15)
{
  MR_bool succeeded;
  MR_Word VarStateMap0_10;
  MR_Word VarStateMap0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 6))));
  MR_Box conv0_Var_29;
  MR_Word ConstRval_11;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_28, ((MR_Box) (Var_7)), &conv0_Var_29);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    MR_String Name_30;
    MR_String Var_32;
    MR_Word VarTable_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 0))));

    Name_30 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_47, Var_7);
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", Name_30);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", Var_32);
      return;
    }
  }
  VarStateMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 6))));
  succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(VarStateMap0_10, ExprnOpts_6, ConstRval0_8, &ConstRval_11);
  if (succeeded)
  {
    MR_Word State_12;
    MR_Word VarStateMap_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Integer Var_74;
    MR_Integer Var_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Integer Var_79;
    MR_Integer Var_80;
    MR_Word Var_81;

    Var_16 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (ConstRval_11));
    }
    Var_19 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    {
      State_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, State_12, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, State_12, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, State_12, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, State_12, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, State_12, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_7)), ((MR_Box) (State_12)), VarStateMap0_10, &VarStateMap_13);
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 0))));
    Var_71 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 2))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 3))));
    Var_74 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 4))));
    Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 5))));
    Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 7))));
    Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 8))));
    Var_79 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 9))));
    Var_80 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 10))));
    Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 11))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VLI_15 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_71));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_75));
      MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_13));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_77));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_78));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_79));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_80));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_81));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.var_locn_assign_const_to_var\'/5", (MR_String) "supposed constant isn\'t");
      return;
    }
}

static MR_bool MR_CALL 
ll_backend__var_locn__expr_is_constant_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__IntroducedFrom__pred__expr_is_constant__1438__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__expr_is_constant_4_p_0(
  MR_Word VarStateMap_5,
  MR_Word ExprnOpts_6,
  MR_Word Rval0_7,
  MR_Word * Rval_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Rval0_7)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, Rval0_7, (MR_Integer) 0))));
        MR_Word State_22;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_String Var_33;
        MR_String Var_34;
        MR_Box conv0_State_22;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_5, ((MR_Box) (Var_21)), &conv0_State_22);
        if (succeeded)
        {
          State_22 = ((MR_Word) (conv0_State_22));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_31 = ((MR_Word) ((MR_hl_field(0, State_22, (MR_Integer) 1))));
          succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            *Rval_8 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
            Var_33 = (MR_String) "predicate \140ll_backend.var_locn.expr_is_constant\'/4";
            Var_34 = (MR_String) "non-constant rval in variable state";
            {
              Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_32, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_8[2]));
              MR_hl_field(0, Var_32, 1) = ((MR_Box) (ll_backend__var_locn__expr_is_constant_4_p_0_1));
              MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_32, 3) = ((MR_Box) (VarStateMap_5));
              MR_hl_field(0, Var_32, 4) = ((MR_Box) (ExprnOpts_6));
              MR_hl_field(0, Var_32, 5) = ((MR_Box) (*Rval_8));
            }
            mercury__require__expect_3_p_0(Var_32, Var_33, Var_34);
            succeeded = MR_TRUE;
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tag_19 = ((MR_Word) ((MR_hl_field(2, Rval0_7, (MR_Integer) 0))));
        MR_Word SubRval0_37 = ((MR_Word) ((MR_hl_field(2, Rval0_7, (MR_Integer) 1))));
        MR_Word SubRval_38;

        succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(VarStateMap_5, ExprnOpts_6, SubRval0_37, &SubRval_38);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Rval_8 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (Tag_19));
            MR_hl_field(2, base, 1) = ((MR_Box) (SubRval_38));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_7, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            *Rval_8 = Rval0_7;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Const_9 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word Var_41;

            ll_backend__exprn_aux__const_is_constant_3_p_0(Const_9, ExprnOpts_6, &Var_41);
            succeeded = ((MR_Integer) 1 == Var_41);
            if (succeeded)
            {
              *Rval_8 = Rval0_7;
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_10 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_11 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_12;

            succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(VarStateMap_5, ExprnOpts_6, SubRval0_11, &SubRval_12);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Type_10));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubRval_12));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word UnOp_13 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word SubRval0_35 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
            MR_Word SubRval_36;

            succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(VarStateMap_5, ExprnOpts_6, SubRval0_35, &SubRval_36);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, base, 1) = ((MR_Box) (UnOp_13));
                MR_hl_field(3, base, 2) = ((MR_Box) (SubRval_36));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word BinOp_14 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 1))));
            MR_Word SubRvalA0_15 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 2))));
            MR_Word SubRvalB0_16 = ((MR_Word) ((MR_hl_field(3, Rval0_7, (MR_Integer) 3))));
            MR_Word SubRvalA_17;
            MR_Word SubRvalB_18;

            succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(VarStateMap_5, ExprnOpts_6, SubRvalA0_15, &SubRvalA_17);
            if (succeeded)
            {
              succeeded = ll_backend__var_locn__expr_is_constant_4_p_0(VarStateMap_5, ExprnOpts_6, SubRvalB0_16, &SubRvalB_18);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Rval_8 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (BinOp_14));
                  MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_17));
                  MR_hl_field(3, base, 3) = ((MR_Box) (SubRvalB_18));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_field_lval_expr_to_var_6_p_0(
  MR_Word Var_7,
  MR_Word BaseVar_8,
  MR_Word Expr_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_16,
  MR_Word * STATE_VARIABLE_VLI_17)
{
  MR_bool succeeded;
  MR_Word VarStateMap0_12;
  MR_Word State_13;
  MR_Word VarStateMap1_14;
  MR_Word VarStateMap_15;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word VarStateMap0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 6))));
  MR_Word State0_70;
  MR_Word Lvals_71;
  MR_Word MaybeConstRval_72;
  MR_Word MaybeExprRval_73;
  MR_Word Using0_74;
  MR_Word DeadOrAlive_75;
  MR_Word Using_76;
  MR_Word State_77;
  MR_Box conv0_Var_29;
  MR_Box conv1_State0_70;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Integer Var_85;
  MR_Integer Var_86;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Integer Var_90;
  MR_Integer Var_91;
  MR_Word Var_92;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_28, ((MR_Box) (Var_7)), &conv0_Var_29);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    MR_String Name_30;
    MR_String Var_32;
    MR_Word VarTable_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 0))));

    Name_30 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_47, Var_7);
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", Name_30);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", Var_32);
      return;
    }
  }
  VarStateMap0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 6))));
  Var_18 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Expr_9));
  }
  Var_21 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  {
    State_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, State_13, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, State_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, State_13, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, State_13, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, State_13, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_7)), ((MR_Box) (State_13)), VarStateMap0_12, &VarStateMap1_14);
  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap1_14, ((MR_Box) (BaseVar_8)), &conv1_State0_70);
  State0_70 = ((MR_Word) (conv1_State0_70));
  Lvals_71 = ((MR_Word) ((MR_hl_field(0, State0_70, (MR_Integer) 0))));
  MaybeConstRval_72 = ((MR_Word) ((MR_hl_field(0, State0_70, (MR_Integer) 1))));
  MaybeExprRval_73 = ((MR_Word) ((MR_hl_field(0, State0_70, (MR_Integer) 2))));
  Using0_74 = ((MR_Word) ((MR_hl_field(0, State0_70, (MR_Integer) 3))));
  DeadOrAlive_75 = ((MR_Unsigned) ((MR_hl_field(0, State0_70, (MR_Integer) 4))) & (MR_Integer) 1);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7, Using0_74, &Using_76);
  {
    State_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, State_77, 0) = ((MR_Box) (Lvals_71));
    MR_hl_field(0, State_77, 1) = ((MR_Box) (MaybeConstRval_72));
    MR_hl_field(0, State_77, 2) = ((MR_Box) (MaybeExprRval_73));
    MR_hl_field(0, State_77, 3) = ((MR_Box) (Using_76));
    MR_hl_field(0, State_77, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive_75));
  }
  mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (BaseVar_8)), ((MR_Box) (State_77)), VarStateMap1_14, &VarStateMap_15);
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 0))));
  Var_82 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 2))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 3))));
  Var_85 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 4))));
  Var_86 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 5))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 7))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 8))));
  Var_90 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 9))));
  Var_91 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 10))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_16, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_82));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_92));
  }
  *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
}

static MR_Box MR_CALL 
ll_backend__var_locn__var_locn_assign_lval_to_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = ll_backend__var_locn__add_field_offset_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_lval_to_var_6_p_0(
  MR_Word Var_7,
  MR_Word Lval0_8,
  MR_Word StaticCellInfo_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_37,
  MR_Word * STATE_VARIABLE_VLI_38)
{
  MR_bool succeeded;
  MR_Word Ptag_12;
  MR_Word BaseVar_13;
  MR_Integer Offset_14;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_40;
  MR_Word Var_42;

  ll_backend__var_locn__check_var_is_unknown_2_p_0(STATE_VARIABLE_VLI_0_37, Var_7);
  succeeded = ((((MR_tag((MR_Word) Lval0_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval0_8, (MR_Integer) 0)))) == (MR_Integer) 9)));
  if (succeeded)
  {
    Var_39 = ((MR_Word) ((MR_hl_field(3, Lval0_8, (MR_Integer) 1))));
    Var_40 = ((MR_Word) ((MR_hl_field(3, Lval0_8, (MR_Integer) 2))));
    Var_41 = ((MR_Word) ((MR_hl_field(3, Lval0_8, (MR_Integer) 3))));
    succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Ptag_12 = ((MR_Word) ((MR_hl_field(1, Var_39, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1);
      if (succeeded)
      {
        BaseVar_13 = ((MR_Word) ((MR_hl_field(1, Var_40, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_41)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_41, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_42 = ((MR_Word) ((MR_hl_field(3, Var_41, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 1);
          if (succeeded)
            Offset_14 = ((MR_Integer) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word VarStateMap0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 6))));
    MR_Word BaseState_16;
    MR_Word BaseVarLvals_17;
    MR_Word MaybeConstBaseVarRval_18;
    MR_Box conv0_BaseState_16;
    MR_Word SelectedArgRval_26;
    MR_Word BaseVarRval_22;
    MR_Word BaseConst_23;
    MR_Word DataAddr_24;
    MR_Word MaybeBaseOffset_25;
    MR_Word Var_43;
    MR_Word Var_86;
    uint8_t Var_88;
    uint8_t Var_89;

    mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_15, ((MR_Box) (BaseVar_13)), &conv0_BaseState_16);
    BaseState_16 = ((MR_Word) (conv0_BaseState_16));
    BaseVarLvals_17 = ((MR_Word) ((MR_hl_field(0, BaseState_16, (MR_Integer) 0))));
    MaybeConstBaseVarRval_18 = ((MR_Word) ((MR_hl_field(0, BaseState_16, (MR_Integer) 1))));
    succeeded = (MaybeConstBaseVarRval_18 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      BaseVarRval_22 = ((MR_Word) ((MR_hl_field(1, MaybeConstBaseVarRval_18, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) BaseVarRval_22)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_86 = ((MR_Word) ((MR_hl_field(2, BaseVarRval_22, (MR_Integer) 0))));
        BaseConst_23 = ((MR_Word) ((MR_hl_field(2, BaseVarRval_22, (MR_Integer) 1))));
        Var_88 = (uint8_t) (Ptag_12);
        Var_89 = (uint8_t) (Var_86);
        succeeded = (Var_88 == Var_89);
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) BaseConst_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BaseConst_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_43 = ((MR_Word) ((MR_hl_field(3, BaseConst_23, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_43, (MR_Integer) 0)))) == (MR_Integer) 13)));
            if (succeeded)
            {
              DataAddr_24 = ((MR_Word) ((MR_hl_field(3, Var_43, (MR_Integer) 1))));
              MaybeBaseOffset_25 = ((MR_Word) ((MR_hl_field(3, Var_43, (MR_Integer) 2))));
              succeeded = (MaybeBaseOffset_25 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = ll_backend__global_data__search_scalar_static_cell_offset_4_p_0(StaticCellInfo_9, DataAddr_24, Offset_14, &SelectedArgRval_26);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeConstRval_27;
      MR_Word Lvals_28;
      MR_Word State_29;
      MR_Word VarStateMap_30;
      MR_Word LocVarMap0_31;
      MR_Word LocVarMap_32;
      MR_Word Var_44;
      MR_Word Var_49;
      MR_Word STATE_VARIABLE_VLI_51_51;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Integer Var_105;
      MR_Integer Var_106;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Integer Var_110;
      MR_Integer Var_111;
      MR_Word Var_112;

      {
        MaybeConstRval_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeConstRval_27, 0) = ((MR_Box) (SelectedArgRval_26));
      }
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[1]));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_assign_lval_to_var_6_p_0_1));
        MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_44, 3) = ((MR_Box) (Var_39));
        MR_hl_field(0, Var_44, 4) = ((MR_Box) (Var_41));
      }
      Lvals_28 = mercury__set__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_44, BaseVarLvals_17);
      Var_49 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      {
        State_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, State_29, 0) = ((MR_Box) (Lvals_28));
        MR_hl_field(0, State_29, 1) = ((MR_Box) (MaybeConstRval_27));
        MR_hl_field(0, State_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, State_29, 3) = ((MR_Box) (Var_49));
        MR_hl_field(0, State_29, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_7)), ((MR_Box) (State_29)), VarStateMap0_15, &VarStateMap_30);
      Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 0))));
      Var_102 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 2))));
      Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 3))));
      Var_105 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 4))));
      Var_106 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 5))));
      Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 7))));
      Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 8))));
      Var_110 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 9))));
      Var_111 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 10))));
      Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_37, (MR_Integer) 11))));
      {
        STATE_VARIABLE_VLI_51_51 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 0) = ((MR_Box) (Var_101));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 1) = (MR_Box) ((MR_Unsigned) (Var_102));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 2) = ((MR_Box) (Var_103));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 3) = ((MR_Box) (Var_104));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 4) = ((MR_Box) (Var_105));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 5) = ((MR_Box) (Var_106));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 6) = ((MR_Box) (VarStateMap_30));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 7) = ((MR_Box) (Var_108));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 8) = ((MR_Box) (Var_109));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 9) = ((MR_Box) (Var_110));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 10) = ((MR_Box) (Var_111));
        MR_hl_field(0, STATE_VARIABLE_VLI_51_51, 11) = ((MR_Box) (Var_112));
      }
      ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(STATE_VARIABLE_VLI_51_51, &LocVarMap0_31);
      ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0(Var_7, Lvals_28, LocVarMap0_31, &LocVarMap_32);
      ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(LocVarMap_32, STATE_VARIABLE_VLI_51_51, STATE_VARIABLE_VLI_38);
    }
    else
    {
      MR_Word Expr_33;
      MR_Word VarStateMap1_34;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Lvals_65;
      MR_Word State_66;
      MR_Word VarStateMap_67;

      mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &Lvals_65);
      {
        Expr_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Expr_33, 0) = ((MR_Box) (Lval0_8));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Expr_33));
      }
      Var_55 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      {
        State_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, State_66, 0) = ((MR_Box) (Lvals_65));
        MR_hl_field(0, State_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, State_66, 2) = ((MR_Box) (Var_54));
        MR_hl_field(0, State_66, 3) = ((MR_Box) (Var_55));
        MR_hl_field(0, State_66, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_7)), ((MR_Box) (State_66)), VarStateMap0_15, &VarStateMap1_34);
      ll_backend__var_locn__add_use_ref_4_p_0(BaseVar_13, Var_7, VarStateMap1_34, &VarStateMap_67);
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(VarStateMap_67, STATE_VARIABLE_VLI_0_37, STATE_VARIABLE_VLI_38);
    }
    *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  }
  else
  {
    MR_Word Lval_35;
    MR_Word LvalSet_36;
    MR_Word STATE_VARIABLE_VLI_58_58;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_VLI_63_63;
    MR_Word VarStateMap0_68;
    MR_Word State_69;
    MR_Word VarStateMap_70;
    MR_Word LocVarMap0_71;
    MR_Word LocVarMap_72;

    ll_backend__var_locn__var_locn_materialize_vars_in_lval_5_p_0(Lval0_8, &Lval_35, Code_10, STATE_VARIABLE_VLI_0_37, &STATE_VARIABLE_VLI_58_58);
    ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(STATE_VARIABLE_VLI_58_58, &VarStateMap0_68);
    LvalSet_36 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_35)));
    Var_61 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    {
      State_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, State_69, 0) = ((MR_Box) (LvalSet_36));
      MR_hl_field(0, State_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, State_69, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, State_69, 3) = ((MR_Box) (Var_61));
      MR_hl_field(0, State_69, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_7)), ((MR_Box) (State_69)), VarStateMap0_68, &VarStateMap_70);
    ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(VarStateMap_70, STATE_VARIABLE_VLI_58_58, &STATE_VARIABLE_VLI_63_63);
    ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(STATE_VARIABLE_VLI_63_63, &LocVarMap0_71);
    ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0(Var_7, Lval_35, LocVarMap0_71, &LocVarMap_72);
    ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(LocVarMap_72, STATE_VARIABLE_VLI_63_63, STATE_VARIABLE_VLI_38);
  }
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LocVarMap_11;

  ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LocVarMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LocVarMap_11));
}

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_LocVarMap_0_9,
  MR_Word * STATE_VARIABLE_LocVarMap_10)
{
  MR_bool succeeded;
  MR_Word Lvals_8;
  MR_Word NoDupRootLvals_12;
  MR_Word Var_13;
  MR_Word LvalList_16;
  MR_Word AllLvals_17;
  MR_Word RootLvals_18;
  MR_Word Var_19;
  MR_Box conv1_STATE_VARIABLE_LocVarMap_10;

  Lvals_8 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_6)));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_8, &LvalList_16);
  Var_19 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_16);
  AllLvals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_16, Var_19);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[15]), AllLvals_17, &RootLvals_18);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_18, &NoDupRootLvals_12);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (ll_backend__var_locn__make_var_depend_on_lval_roots_4_p_0_2));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Var_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_13, NoDupRootLvals_12, ((MR_Box) (STATE_VARIABLE_LocVarMap_0_9)), &conv1_STATE_VARIABLE_LocVarMap_10);
  *STATE_VARIABLE_LocVarMap_10 = ((MR_Word) (conv1_STATE_VARIABLE_LocVarMap_10));
}

static void MR_CALL 
ll_backend__var_locn__add_use_ref_4_p_0(
  MR_Word ContainedVar_5,
  MR_Word UsingVar_6,
  MR_Word STATE_VARIABLE_VarStateMap_0_16,
  MR_Word * STATE_VARIABLE_VarStateMap_17)
{
  MR_Word State0_8;
  MR_Word Lvals_9;
  MR_Word MaybeConstRval_10;
  MR_Word MaybeExprRval_11;
  MR_Word Using0_12;
  MR_Word DeadOrAlive_13;
  MR_Word Using_14;
  MR_Word State_15;
  MR_Box conv0_State0_8;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), STATE_VARIABLE_VarStateMap_0_16, ((MR_Box) (ContainedVar_5)), &conv0_State0_8);
  State0_8 = ((MR_Word) (conv0_State0_8));
  Lvals_9 = ((MR_Word) ((MR_hl_field(0, State0_8, (MR_Integer) 0))));
  MaybeConstRval_10 = ((MR_Word) ((MR_hl_field(0, State0_8, (MR_Integer) 1))));
  MaybeExprRval_11 = ((MR_Word) ((MR_hl_field(0, State0_8, (MR_Integer) 2))));
  Using0_12 = ((MR_Word) ((MR_hl_field(0, State0_8, (MR_Integer) 3))));
  DeadOrAlive_13 = ((MR_Unsigned) ((MR_hl_field(0, State0_8, (MR_Integer) 4))) & (MR_Integer) 1);
  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UsingVar_6, Using0_12, &Using_14);
  {
    State_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, State_15, 0) = ((MR_Box) (Lvals_9));
    MR_hl_field(0, State_15, 1) = ((MR_Box) (MaybeConstRval_10));
    MR_hl_field(0, State_15, 2) = ((MR_Box) (MaybeExprRval_11));
    MR_hl_field(0, State_15, 3) = ((MR_Box) (Using_14));
    MR_hl_field(0, State_15, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive_13));
  }
  mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (ContainedVar_5)), ((MR_Box) (State_15)), STATE_VARIABLE_VarStateMap_0_16, STATE_VARIABLE_VarStateMap_17);
}

static void MR_CALL 
ll_backend__var_locn__check_var_is_unknown_2_p_0(
  MR_Word VLI_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word VarStateMap0_5 = ((MR_Word) ((MR_hl_field(0, VLI_3, (MR_Integer) 6))));
  MR_Box conv0_Var_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_5, ((MR_Box) (Var_4)), &conv0_Var_6);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    MR_String Name_7;
    MR_String Var_9;
    MR_Word VarTable_24 = ((MR_Word) ((MR_hl_field(0, VLI_3, (MR_Integer) 0))));

    Name_7 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_24, Var_4);
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", Name_7);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", Var_9);
      return;
    }
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_materialize_vars_in_lval_5_p_0(
  MR_Word Lval0_6,
  MR_Word * Lval_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_VLI_0_10,
  MR_Word * STATE_VARIABLE_VLI_11)
{
  switch (MR_tag((MR_Word) Lval0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Lval_7 = Lval0_6;
        *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_VLI_11 = STATE_VARIABLE_VLI_0_10;
      }
      break;
    case (MR_Integer) 1:
      {
        *Lval_7 = Lval0_6;
        *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_VLI_11 = STATE_VARIABLE_VLI_0_10;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.materialize_vars_in_lval_avoid\'/6", (MR_String) "temp");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval0_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 11:
          {
            *Lval_7 = Lval0_6;
            *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_VLI_11 = STATE_VARIABLE_VLI_0_10;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval0_21 = ((MR_Word) ((MR_hl_field(3, Lval0_6, (MR_Integer) 1))));
            MR_Word Rval_22;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Rval_22, Code_8, STATE_VARIABLE_VLI_0_10, STATE_VARIABLE_VLI_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_7 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_22));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval0_48 = ((MR_Word) ((MR_hl_field(3, Lval0_6, (MR_Integer) 1))));
            MR_Word Rval_49;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_48, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Rval_49, Code_8, STATE_VARIABLE_VLI_0_10, STATE_VARIABLE_VLI_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_7 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_49));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval0_46 = ((MR_Word) ((MR_hl_field(3, Lval0_6, (MR_Integer) 1))));
            MR_Word Rval_47;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_46, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Rval_47, Code_8, STATE_VARIABLE_VLI_0_10, STATE_VARIABLE_VLI_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_7 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_47));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval0_50 = ((MR_Word) ((MR_hl_field(3, Lval0_6, (MR_Integer) 1))));
            MR_Word Rval_51;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_50, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Rval_51, Code_8, STATE_VARIABLE_VLI_0_10, STATE_VARIABLE_VLI_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_7 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_51));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval0_52 = ((MR_Word) ((MR_hl_field(3, Lval0_6, (MR_Integer) 1))));
            MR_Word Rval_53;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_52, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Rval_53, Code_8, STATE_VARIABLE_VLI_0_10, STATE_VARIABLE_VLI_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_7 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_53));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Tag_23 = ((MR_Word) ((MR_hl_field(3, Lval0_6, (MR_Integer) 1))));
            MR_Word RvalA0_24 = ((MR_Word) ((MR_hl_field(3, Lval0_6, (MR_Integer) 2))));
            MR_Word RvalB0_25 = ((MR_Word) ((MR_hl_field(3, Lval0_6, (MR_Integer) 3))));
            MR_Word RvalA_26;
            MR_Word CodeA_27;
            MR_Word RvalB_28;
            MR_Word CodeB_29;
            MR_Word STATE_VARIABLE_VLI_47_40;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(RvalA0_24, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &RvalA_26, &CodeA_27, STATE_VARIABLE_VLI_0_10, &STATE_VARIABLE_VLI_47_40);
            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(RvalB0_25, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &RvalB_28, &CodeB_29, STATE_VARIABLE_VLI_47_40, STATE_VARIABLE_VLI_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Lval_7 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Tag_23));
              MR_hl_field(3, base, 2) = ((MR_Box) (RvalA_26));
              MR_hl_field(3, base, 3) = ((MR_Box) (RvalB_28));
            }
            *Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeA_27, CodeB_29);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Rval0_54 = ((MR_Word) ((MR_hl_field(3, Lval0_6, (MR_Integer) 1))));
            MR_Word Rval_55;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_54, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Rval_55, Code_8, STATE_VARIABLE_VLI_0_10, STATE_VARIABLE_VLI_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_7 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Rval_55));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.materialize_vars_in_lval_avoid\'/6", (MR_String) "lvar");
            return;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(
  MR_Word Rval0_8,
  MR_Word MaybePrefer_9,
  MR_Word Avoid_10,
  MR_Word * Rval_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_VLI_0_34,
  MR_Word * STATE_VARIABLE_VLI_35)
{
  switch (MR_tag((MR_Word) Rval0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval0_14 = ((MR_Word) ((MR_hl_field(0, Rval0_8, (MR_Integer) 0))));
        MR_Word Lval_15;

        switch (MR_tag((MR_Word) Lval0_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Lval_15 = Lval0_14;
              *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_VLI_35 = STATE_VARIABLE_VLI_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              Lval_15 = Lval0_14;
              *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_VLI_35 = STATE_VARIABLE_VLI_0_34;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.materialize_vars_in_lval_avoid\'/6", (MR_String) "temp");
              return;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Lval0_14, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 11:
                {
                  Lval_15 = Lval0_14;
                  *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  *STATE_VARIABLE_VLI_35 = STATE_VARIABLE_VLI_0_34;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Rval0_66 = ((MR_Word) ((MR_hl_field(3, Lval0_14, (MR_Integer) 1))));
                  MR_Word Rval_67;

                  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_66, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &Rval_67, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
                  {
                    Lval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_15, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, Lval_15, 1) = ((MR_Box) (Rval_67));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Rval0_93 = ((MR_Word) ((MR_hl_field(3, Lval0_14, (MR_Integer) 1))));
                  MR_Word Rval_94;

                  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_93, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &Rval_94, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
                  {
                    Lval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, Lval_15, 1) = ((MR_Box) (Rval_94));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Rval0_91 = ((MR_Word) ((MR_hl_field(3, Lval0_14, (MR_Integer) 1))));
                  MR_Word Rval_92;

                  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_91, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &Rval_92, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
                  {
                    Lval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, Lval_15, 1) = ((MR_Box) (Rval_92));
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word Rval0_95 = ((MR_Word) ((MR_hl_field(3, Lval0_14, (MR_Integer) 1))));
                  MR_Word Rval_96;

                  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_95, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &Rval_96, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
                  {
                    Lval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                    MR_hl_field(3, Lval_15, 1) = ((MR_Box) (Rval_96));
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word Rval0_97 = ((MR_Word) ((MR_hl_field(3, Lval0_14, (MR_Integer) 1))));
                  MR_Word Rval_98;

                  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_97, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &Rval_98, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
                  {
                    Lval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_15, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                    MR_hl_field(3, Lval_15, 1) = ((MR_Box) (Rval_98));
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word Tag_68 = ((MR_Word) ((MR_hl_field(3, Lval0_14, (MR_Integer) 1))));
                  MR_Word RvalA0_69 = ((MR_Word) ((MR_hl_field(3, Lval0_14, (MR_Integer) 2))));
                  MR_Word RvalB0_70 = ((MR_Word) ((MR_hl_field(3, Lval0_14, (MR_Integer) 3))));
                  MR_Word RvalA_71;
                  MR_Word CodeA_72;
                  MR_Word RvalB_73;
                  MR_Word CodeB_74;
                  MR_Word STATE_VARIABLE_VLI_47_85;

                  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(RvalA0_69, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &RvalA_71, &CodeA_72, STATE_VARIABLE_VLI_0_34, &STATE_VARIABLE_VLI_47_85);
                  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(RvalB0_70, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &RvalB_73, &CodeB_74, STATE_VARIABLE_VLI_47_85, STATE_VARIABLE_VLI_35);
                  {
                    Lval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_15, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                    MR_hl_field(3, Lval_15, 1) = ((MR_Box) (Tag_68));
                    MR_hl_field(3, Lval_15, 2) = ((MR_Box) (RvalA_71));
                    MR_hl_field(3, Lval_15, 3) = ((MR_Box) (RvalB_73));
                  }
                  *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeA_72, CodeB_74);
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word Rval0_99 = ((MR_Word) ((MR_hl_field(3, Lval0_14, (MR_Integer) 1))));
                  MR_Word Rval_100;

                  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(Rval0_99, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &Rval_100, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
                  {
                    Lval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Lval_15, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                    MR_hl_field(3, Lval_15, 1) = ((MR_Box) (Rval_100));
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.materialize_vars_in_lval_avoid\'/6", (MR_String) "lvar");
                  return;
                }
                break;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Rval_11 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Lval_15));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, Rval0_8, (MR_Integer) 0))));
        MR_Word Avail_33;

        ll_backend__var_locn__find_var_availability_4_p_0(STATE_VARIABLE_VLI_0_34, Var_32, MaybePrefer_9, &Avail_33);
        if ((Avail_33 == (MR_Word) ((MR_Unsigned) 0U)))
          ll_backend__var_locn__materialize_var_general_8_p_0(Var_32, MaybePrefer_9, (MR_Integer) 1, Avoid_10, Rval_11, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
        else
        {
          *Rval_11 = ((MR_Word) ((MR_hl_field(1, Avail_33, (MR_Integer) 0))));
          *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_VLI_35 = STATE_VARIABLE_VLI_0_34;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tag_16 = ((MR_Word) ((MR_hl_field(2, Rval0_8, (MR_Integer) 0))));
        MR_Word SubRval0_17 = ((MR_Word) ((MR_hl_field(2, Rval0_8, (MR_Integer) 1))));
        MR_Word SubRval_18;

        ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(SubRval0_17, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &SubRval_18, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Rval_11 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Tag_16));
          MR_hl_field(2, base, 1) = ((MR_Box) (SubRval_18));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval0_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Rval_11 = Rval0_8;
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_VLI_35 = STATE_VARIABLE_VLI_0_34;
          }
          break;
        case (MR_Integer) 1:
          {
            *Rval_11 = Rval0_8;
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_VLI_35 = STATE_VARIABLE_VLI_0_34;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_20 = ((MR_Word) ((MR_hl_field(3, Rval0_8, (MR_Integer) 1))));
            MR_Word SubRval0_50 = ((MR_Word) ((MR_hl_field(3, Rval0_8, (MR_Integer) 2))));
            MR_Word SubRval_51;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(SubRval0_50, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &SubRval_51, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_11 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Type_20));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubRval_51));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Unop_21 = ((MR_Word) ((MR_hl_field(3, Rval0_8, (MR_Integer) 1))));
            MR_Word SubRval0_52 = ((MR_Word) ((MR_hl_field(3, Rval0_8, (MR_Integer) 2))));
            MR_Word SubRval_53;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(SubRval0_52, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &SubRval_53, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Rval_11 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Unop_21));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubRval_53));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Binop_22 = ((MR_Word) ((MR_hl_field(3, Rval0_8, (MR_Integer) 1))));
            MR_Word SubRvalA0_23 = ((MR_Word) ((MR_hl_field(3, Rval0_8, (MR_Integer) 2))));
            MR_Word SubRvalB0_24 = ((MR_Word) ((MR_hl_field(3, Rval0_8, (MR_Integer) 3))));
            MR_Word SubRvalA_25;
            MR_Word CodeA_26;
            MR_Word SubRvalB_27;
            MR_Word CodeB_28;
            MR_Word STATE_VARIABLE_VLI_44_44;

            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(SubRvalA0_23, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &SubRvalA_25, &CodeA_26, STATE_VARIABLE_VLI_0_34, &STATE_VARIABLE_VLI_44_44);
            ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(SubRvalB0_24, (MR_Word) ((MR_Unsigned) 0U), Avoid_10, &SubRvalB_27, &CodeB_28, STATE_VARIABLE_VLI_44_44, STATE_VARIABLE_VLI_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Rval_11 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Binop_22));
              MR_hl_field(3, base, 2) = ((MR_Box) (SubRvalA_25));
              MR_hl_field(3, base, 3) = ((MR_Box) (SubRvalB_27));
            }
            *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeA_26, CodeB_28);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef0_30 = ((MR_Word) ((MR_hl_field(3, Rval0_8, (MR_Integer) 1))));
            MR_Word MemRef_31;

            ll_backend__var_locn__materialize_vars_in_mem_ref_avoid_6_p_0(MemRef0_30, &MemRef_31, Avoid_10, Code_12, STATE_VARIABLE_VLI_0_34, STATE_VARIABLE_VLI_35);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Rval_11 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MemRef_31));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__var_locn__free_up_lval_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_VLI_24;

  ll_backend__var_locn__ensure_copies_are_present_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_VLI_24);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_VLI_24));
}

static MR_bool MR_CALL 
ll_backend__var_locn__free_up_lval_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarStateMap_22;

  succeeded = ll_backend__var_locn__try_clobber_lval_in_var_state_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarStateMap_22);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarStateMap_22));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__free_up_lval_6_p_0(
  MR_Word Lval_7,
  MR_Word ToBeAssignedVars_8,
  MR_Word ForbiddenLvals_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_17,
  MR_Word * STATE_VARIABLE_VLI_18)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_23_23;
  MR_Word LocVarMap0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 7))));
  MR_Word AffectedVarSet_13;
  MR_Word AffectedVars_14;
  MR_Word VarStateMap0_15;
  MR_Box conv0_AffectedVarSet_13;
  MR_Word TypeInfo_27_27;
  MR_Word TypeInfo_28_28;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Box conv2_Var_16;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap0_12, ((MR_Box) (Lval_7)), &conv0_AffectedVarSet_13);
  if (succeeded)
  {
    AffectedVarSet_13 = ((MR_Word) (conv0_AffectedVarSet_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_23_23, AffectedVarSet_13, &AffectedVars_14);
    VarStateMap0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 6))));
    Var_20 = (MR_Integer) 0;
    TypeInfo_27_27 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[0]);
    TypeInfo_28_28 = (MR_Word) (&ll_backend__var_locn_scalar_common_2[3]);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_7[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (ll_backend__var_locn__free_up_lval_6_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (Lval_7));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) (ToBeAssignedVars_8));
      MR_hl_field(0, Var_19, 5) = ((MR_Box) (Var_20));
    }
    succeeded = mercury__list__foldl_4_p_3(TypeInfo_27_27, TypeInfo_28_28, Var_19, AffectedVars_14, ((MR_Box) (VarStateMap0_15)), &conv2_Var_16);
    if (succeeded)
      succeeded = MR_TRUE;
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word MovedVar_59;
    MR_Word Pref_62;
    MR_Word STATE_VARIABLE_VLI_30_68;
    MR_Word TypeCtorInfo_43_79;
    MR_Word LocVarMap0_52;
    MR_Word AffectedVarSet_53;
    MR_Word EffAffectedVarSet_54;
    MR_Word EffAffectedVars_55;
    MR_Word VarStateMap0_56;
    MR_Word RegType_61;
    MR_Box conv3_AffectedVarSet_53;
    MR_Word OccupyingVar_57;
    MR_Word OtherSources_58;

    ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(STATE_VARIABLE_VLI_0_17, &LocVarMap0_52);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap0_52, ((MR_Box) (Lval_7)), &conv3_AffectedVarSet_53);
    if (succeeded)
    {
      AffectedVarSet_53 = ((MR_Word) (conv3_AffectedVarSet_53));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_43_79 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      parse_tree__set_of_var__delete_list_3_p_0(TypeCtorInfo_43_79, ToBeAssignedVars_8, AffectedVarSet_53, &EffAffectedVarSet_54);
      parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_43_79, EffAffectedVarSet_54, &EffAffectedVars_55);
      ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(STATE_VARIABLE_VLI_0_17, &VarStateMap0_56);
      succeeded = ll_backend__var_locn__find_one_occupying_var_5_p_0(EffAffectedVars_55, Lval_7, VarStateMap0_56, &OccupyingVar_57, &OtherSources_58);
      if (succeeded)
      {
        MR_Word OtherVars_60;
        MR_Word Var_67;
        MR_Box conv5_STATE_VARIABLE_VLI_30_68;

        MovedVar_59 = OccupyingVar_57;
        mercury__list__delete_all_3_p_1((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), EffAffectedVars_55, ((MR_Box) (MovedVar_59)), &OtherVars_60);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_10[0]));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (ll_backend__var_locn__free_up_lval_6_p_0_2));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (Lval_7));
          MR_hl_field(0, Var_67, 4) = ((MR_Box) (OtherSources_58));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0), Var_67, OtherVars_60, ((MR_Box) (STATE_VARIABLE_VLI_0_17)), &conv5_STATE_VARIABLE_VLI_30_68);
        STATE_VARIABLE_VLI_30_68 = ((MR_Word) (conv5_STATE_VARIABLE_VLI_30_68));
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_69;

        succeeded = (EffAffectedVars_55 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MovedVar_59 = ((MR_Word) ((MR_hl_field(1, EffAffectedVars_55, (MR_Integer) 0))));
          Var_69 = ((MR_Word) ((MR_hl_field(1, EffAffectedVars_55, (MR_Integer) 1))));
          succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            STATE_VARIABLE_VLI_30_68 = STATE_VARIABLE_VLI_0_17;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
      {
        ll_backend__var_locn__reg_type_for_var_3_p_0(STATE_VARIABLE_VLI_30_68, MovedVar_59, &RegType_61);
        ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(STATE_VARIABLE_VLI_30_68, MovedVar_59, RegType_61, &Pref_62);
        succeeded = ll_backend__llds____Unify____lval_0_0(Pref_62, Lval_7);
        succeeded = !(succeeded);
        if (succeeded)
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Pref_62)), ForbiddenLvals_9);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(STATE_VARIABLE_VLI_30_68, Pref_62);
            if (succeeded)
            {
              MR_Word PrefRegType_63;
              MR_Integer RegNum_64;

              succeeded = ((MR_tag((MR_Word) Pref_62)) == (MR_Integer) 1);
              if (succeeded)
              {
                PrefRegType_63 = ((MR_Unsigned) ((MR_hl_field(1, Pref_62, (MR_Integer) 0))) & (MR_Integer) 1);
                RegNum_64 = ((MR_Integer) ((MR_hl_field(1, Pref_62, (MR_Integer) 1))));
                succeeded = ll_backend__var_locn__reg_is_not_locked_for_var_4_p_0(STATE_VARIABLE_VLI_30_68, PrefRegType_63, RegNum_64, MovedVar_59);
              }
            }
            else
              succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_70;

      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Lval_7));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) (ForbiddenLvals_9));
      }
      ll_backend__var_locn__actually_place_var_6_p_0(MovedVar_59, Pref_62, Var_70, Code_10, STATE_VARIABLE_VLI_30_68, STATE_VARIABLE_VLI_18);
    }
    else
    {
      MR_Word Target_65;
      MR_Word RegType_76;
      MR_Integer N_66;
      MR_Integer Var_71;

      RegType_76 = ll_backend__var_locn__lval_spare_reg_type_1_f_0(Lval_7);
      ll_backend__var_locn__get_spare_reg_3_p_0(STATE_VARIABLE_VLI_0_17, RegType_76, &Target_65);
      ll_backend__var_locn__record_copy_4_p_0(Lval_7, Target_65, STATE_VARIABLE_VLI_0_17, STATE_VARIABLE_VLI_18);
      if (((((MR_tag((MR_Word) Lval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
      {
        N_66 = ((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
      else
      if (((((MR_tag((MR_Word) Lval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
      {
        N_66 = ((MR_Integer) ((MR_hl_field(3, Lval_7, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        Var_71 = (MR_Integer) 0;
        succeeded = (N_66 < Var_71);
      }
      if (succeeded)
        *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      else
      {
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Word Var_74;

        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (Lval_7));
        }
        {
          Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_73, 1) = ((MR_Box) (Target_65));
          MR_hl_field(3, Var_73, 2) = ((MR_Box) (Var_74));
        }
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_72, 0) = ((MR_Box) (Var_73));
          MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_String) "Freeing up the source lval"));
        }
        *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_72)));
      }
    }
  }
  else
  {
    *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_VLI_18 = STATE_VARIABLE_VLI_0_17;
  }
}

static void MR_CALL 
ll_backend__var_locn__materialize_var_general_8_p_0(
  MR_Word Var_9,
  MR_Word MaybePrefer_10,
  MR_Word StoreIfReq_11,
  MR_Word Avoid_12,
  MR_Word * Rval_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_VLI_0_30,
  MR_Word * STATE_VARIABLE_VLI_31)
{
  MR_bool succeeded;
  MR_Word VarStateMap_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_30, (MR_Integer) 6))));
  MR_Word State_17;
  MR_Word MaybeExprRval_20;
  MR_Word UsingVars_21;
  MR_Word ExprRval_23;
  MR_Word Rval0_24;
  MR_Word ExprCode_25;
  MR_Word STATE_VARIABLE_VLI_34_34;
  MR_Box conv0_State_17;
  MR_Word TypeCtorInfo_38_38;
  MR_Integer NumUsingVars_26;
  MR_Integer Var_35;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_16, ((MR_Box) (Var_9)), &conv0_State_17);
  State_17 = ((MR_Word) (conv0_State_17));
  MaybeExprRval_20 = ((MR_Word) ((MR_hl_field(0, State_17, (MR_Integer) 2))));
  UsingVars_21 = ((MR_Word) ((MR_hl_field(0, State_17, (MR_Integer) 3))));
  if ((MaybeExprRval_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.materialize_var_general\'/8", (MR_String) "no expr");
      return;
    }
  else
    ExprRval_23 = ((MR_Word) ((MR_hl_field(1, MaybeExprRval_20, (MR_Integer) 0))));
  ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(ExprRval_23, MaybePrefer_10, Avoid_12, &Rval0_24, &ExprCode_25, STATE_VARIABLE_VLI_0_30, &STATE_VARIABLE_VLI_34_34);
  succeeded = (StoreIfReq_11 == (MR_Integer) 1);
  if (succeeded)
  {
    TypeCtorInfo_38_38 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    NumUsingVars_26 = parse_tree__set_of_var__count_1_f_0(TypeCtorInfo_38_38, UsingVars_21);
    Var_35 = (MR_Integer) 1;
    succeeded = (NumUsingVars_26 > Var_35);
  }
  if (succeeded)
  {
    MR_Word RegType_27;
    MR_Word Lval_28;
    MR_Word PlaceCode_29;
    MR_Word FloatRegType_51 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_34_34, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_34_34, (MR_Integer) 0))));

    switch (FloatRegType_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word VarType_53;
          MR_Word Var_54;

          parse_tree__var_table__lookup_var_type_3_p_0(Var_56, Var_9, &VarType_53);
          Var_54 = parse_tree__builtin_lib_types__float_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_53, Var_54);
          if (succeeded)
            RegType_27 = (MR_Integer) 1;
          else
            RegType_27 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 0:
        RegType_27 = (MR_Integer) 0;
        break;
    }
    ll_backend__var_locn__select_preferred_reg_avoid_5_p_0(STATE_VARIABLE_VLI_34_34, Var_9, RegType_27, Avoid_12, &Lval_28);
    ll_backend__var_locn__actually_place_var_6_p_0(Var_9, Lval_28, (MR_Word) ((MR_Unsigned) 0U), &PlaceCode_29, STATE_VARIABLE_VLI_34_34, STATE_VARIABLE_VLI_31);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Rval_13 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Lval_28));
    }
    *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ExprCode_25, PlaceCode_29);
  }
  else
  {
    *Rval_13 = Rval0_24;
    *Code_14 = ExprCode_25;
    *STATE_VARIABLE_VLI_31 = STATE_VARIABLE_VLI_34_34;
  }
}

static void MR_CALL 
ll_backend__var_locn__materialize_vars_in_mem_ref_avoid_6_p_0(
  MR_Word MemRef0_7,
  MR_Word * MemRef_8,
  MR_Word Avoid_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_21,
  MR_Word * STATE_VARIABLE_VLI_22)
{
  switch (MR_tag((MR_Word) MemRef0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *MemRef_8 = MemRef0_7;
        *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_VLI_22 = STATE_VARIABLE_VLI_0_21;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PtrRval0_14 = ((MR_Word) ((MR_hl_field(2, MemRef0_7, (MR_Integer) 0))));
        MR_Word MaybeTag_15 = ((MR_Word) ((MR_hl_field(2, MemRef0_7, (MR_Integer) 1))));
        MR_Word FieldNumRval0_16 = ((MR_Word) ((MR_hl_field(2, MemRef0_7, (MR_Integer) 2))));
        MR_Word PtrRval_17;
        MR_Word PtrCode_18;
        MR_Word FieldNumRval_19;
        MR_Word FieldNumCode_20;
        MR_Word STATE_VARIABLE_VLI_24_24;

        ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(PtrRval0_14, (MR_Word) ((MR_Unsigned) 0U), Avoid_9, &PtrRval_17, &PtrCode_18, STATE_VARIABLE_VLI_0_21, &STATE_VARIABLE_VLI_24_24);
        ll_backend__var_locn__materialize_vars_in_rval_avoid_7_p_0(FieldNumRval0_16, (MR_Word) ((MR_Unsigned) 0U), Avoid_9, &FieldNumRval_19, &FieldNumCode_20, STATE_VARIABLE_VLI_24_24, STATE_VARIABLE_VLI_22);
        *Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PtrCode_18, FieldNumCode_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *MemRef_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (PtrRval_17));
          MR_hl_field(2, base, 1) = ((MR_Box) (MaybeTag_15));
          MR_hl_field(2, base, 2) = ((MR_Box) (FieldNumRval_19));
        }
      }
      break;
  }
}

static void MR_CALL 
ll_backend__var_locn__actually_place_var_6_p_0(
  MR_Word Var_7,
  MR_Word Target_8,
  MR_Word ForbiddenLvals_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_VLI_0_35,
  MR_Word * STATE_VARIABLE_VLI_36)
{
  MR_bool succeeded;
  MR_Word Acquired_12;
  MR_Word VarStateMap0_13;
  MR_Word State0_14;
  MR_Box conv0_State0_14;

  ll_backend__var_locn__var_locn_get_acquired_2_p_0(STATE_VARIABLE_VLI_0_35, &Acquired_12);
  succeeded = mercury__set__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Target_8)), Acquired_12);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.actually_place_var\'/6", (MR_String) "target is acquired reg");
      return;
    }
  ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(STATE_VARIABLE_VLI_0_35, &VarStateMap0_13);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_13, ((MR_Box) (Var_7)), &conv0_State0_14);
  if (succeeded)
  {
    State0_14 = ((MR_Word) (conv0_State0_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Lvals0_15 = ((MR_Word) ((MR_hl_field(0, State0_14, (MR_Integer) 0))));

    succeeded = mercury__set__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Target_8)), Lvals0_15);
    if (succeeded)
    {
      *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_VLI_36 = STATE_VARIABLE_VLI_0_35;
    }
    else
    {
      MR_Word FreeCode_20;
      MR_Word Avail_21;
      MR_Word Rval_22;
      MR_Word EvalCode_23;
      MR_Word AssignCode_25;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_VLI_40_40;
      MR_Word Var_42;
      MR_Word STATE_VARIABLE_VLI_43_43;
      MR_Word Var_66;
      MR_Word Var_94;

      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_7));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ll_backend__var_locn__free_up_lval_6_p_0(Target_8, Var_39, ForbiddenLvals_9, &FreeCode_20, STATE_VARIABLE_VLI_0_35, &STATE_VARIABLE_VLI_40_40);
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (Target_8));
      }
      ll_backend__var_locn__find_var_availability_4_p_0(STATE_VARIABLE_VLI_40_40, Var_7, Var_42, &Avail_21);
      if ((Avail_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_49;
        MR_Word STATE_VARIABLE_VLI_50_50;

        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Target_8));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ll_backend__var_locn__materialize_var_general_8_p_0(Var_7, Var_42, (MR_Integer) 0, Var_49, &Rval_22, &EvalCode_23, STATE_VARIABLE_VLI_40_40, &STATE_VARIABLE_VLI_50_50);
        ll_backend__var_locn__record_clobbering_4_p_0(Target_8, Var_39, STATE_VARIABLE_VLI_50_50, &STATE_VARIABLE_VLI_43_43);
      }
      else
      {
        MR_Word SourceLval_24;

        Rval_22 = ((MR_Word) ((MR_hl_field(1, Avail_21, (MR_Integer) 0))));
        EvalCode_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        succeeded = ((MR_tag((MR_Word) Rval_22)) == (MR_Integer) 0);
        if (succeeded)
        {
          SourceLval_24 = ((MR_Word) ((MR_hl_field(0, Rval_22, (MR_Integer) 0))));
          ll_backend__var_locn__record_copy_4_p_0(SourceLval_24, Target_8, STATE_VARIABLE_VLI_40_40, &STATE_VARIABLE_VLI_43_43);
        }
        else
          ll_backend__var_locn__record_clobbering_4_p_0(Target_8, Var_39, STATE_VARIABLE_VLI_40_40, &STATE_VARIABLE_VLI_43_43);
      }
      ll_backend__var_locn__add_additional_lval_for_var_4_p_0(Var_7, Target_8, STATE_VARIABLE_VLI_43_43, STATE_VARIABLE_VLI_36);
      succeeded = ((MR_tag((MR_Word) Rval_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_94 = ((MR_Word) ((MR_hl_field(0, Rval_22, (MR_Integer) 0))));
        succeeded = ll_backend__llds____Unify____lval_0_0(Target_8, Var_94);
      }
      if (succeeded)
        AssignCode_25 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      else
      {
        MR_String VarName_26;
        MR_String Msg_27;
        MR_Word VarTable_30;
        MR_Word VarEntry_31;
        MR_Word VarIsDummy_34;

        ll_backend__var_locn__get_var_name_3_p_0(*STATE_VARIABLE_VLI_36, Var_7, &VarName_26);
        if ((ForbiddenLvals_9 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__string__append_3_p_2((MR_String) "Placing ", VarName_26, &Msg_27);
        else
        {
          MR_Integer Var_62;
          MR_String Var_96;
          MR_String Var_103;
          MR_String Var_105;
          MR_String Var_106;

          Var_62 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ForbiddenLvals_9);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_3[1]), Var_62, &Var_96);
          Var_103 = mercury__string__f_43_43_2_f_0(Var_96, (MR_String) ")");
          Var_105 = mercury__string__f_43_43_2_f_0((MR_String) " (depth ", Var_103);
          Var_106 = mercury__string__f_43_43_2_f_0(VarName_26, Var_105);
          Msg_27 = mercury__string__f_43_43_2_f_0((MR_String) "Placing ", Var_106);
        }
        ll_backend__var_locn__var_locn_get_var_table_2_p_0(*STATE_VARIABLE_VLI_36, &VarTable_30);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_30, Var_7, &VarEntry_31);
        VarIsDummy_34 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry_31, (MR_Integer) 2))) & (MR_Integer) 1);
        switch (VarIsDummy_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            AssignCode_25 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_64;
              MR_Word Var_65;

              {
                Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_65, 1) = ((MR_Box) (Target_8));
                MR_hl_field(3, Var_65, 2) = ((MR_Box) (Rval_22));
              }
              {
                Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_64, 0) = ((MR_Box) (Var_65));
                MR_hl_field(0, Var_64, 1) = ((MR_Box) (Msg_27));
              }
              AssignCode_25 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_64)));
            }
            break;
        }
      }
      Var_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), EvalCode_23, AssignCode_25);
      *Code_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FreeCode_20, Var_66);
    }
  }
  else
  {
    MR_Word VarTable_76;
    MR_Word VarEntry_77;
    MR_Word VarIsDummy_80;

    ll_backend__var_locn__var_locn_get_var_table_2_p_0(STATE_VARIABLE_VLI_0_35, &VarTable_76);
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_76, Var_7, &VarEntry_77);
    VarIsDummy_80 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry_77, (MR_Integer) 2))) & (MR_Integer) 1);
    switch (VarIsDummy_80) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_68;
          MR_String Var_70;
          MR_String Var_71;
          MR_Integer Var_72;

          Var_72 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7);
          Var_71 = mercury__string__int_to_string_1_f_0(Var_72);
          Var_70 = mercury__string__f_43_43_2_f_0(Var_71, (MR_String) " which has no state");
          Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "placing nondummy var ", Var_70);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.actually_place_var\'/6", Var_68);
            return;
          }
        }
        break;
    }
    *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_VLI_36 = STATE_VARIABLE_VLI_0_35;
  }
}

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_avoid_5_p_0(
  MR_Word VLI_6,
  MR_Word Var_7,
  MR_Word RegType_8,
  MR_Word Avoid_9,
  MR_Word * Lval_10)
{
  MR_bool succeeded;
  MR_Word FollowVarMap_11 = ((MR_Word) ((MR_hl_field(0, VLI_6, (MR_Integer) 3))));
  MR_Word PrefLocn_12;
  MR_Box conv0_PrefLocn_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), FollowVarMap_11, ((MR_Box) (Var_7)), &conv0_PrefLocn_12);
  if (succeeded)
  {
    PrefLocn_12 = ((MR_Word) (conv0_PrefLocn_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    if ((PrefLocn_12 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) PrefLocn_12)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
  {
    MR_Word PrefLval_17;
    MR_Word PrefRegType_15;
    MR_Integer N_16;
    MR_Word TypeCtorInfo_20_20;

    succeeded = ((MR_tag((MR_Word) PrefLocn_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      PrefRegType_15 = ((MR_Unsigned) ((MR_hl_field(1, PrefLocn_12, (MR_Integer) 0))) & (MR_Integer) 1);
      N_16 = ((MR_Integer) ((MR_hl_field(1, PrefLocn_12, (MR_Integer) 1))));
      {
        PrefLval_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PrefLval_17, 0) = (MR_Box) ((MR_Unsigned) (PrefRegType_15));
        MR_hl_field(1, PrefLval_17, 1) = ((MR_Box) (N_16));
      }
      succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(VLI_6, PrefLval_17);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_20_20 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_20_20, ((MR_Box) (PrefLval_17)), Avoid_9);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      *Lval_10 = PrefLval_17;
    else
    {
      MR_Integer NextNonReserved_32;
      MR_Integer Var_63 = ((MR_Integer) ((MR_hl_field(0, VLI_6, (MR_Integer) 5))));
      MR_Integer Var_64 = ((MR_Integer) ((MR_hl_field(0, VLI_6, (MR_Integer) 4))));

      switch (RegType_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          NextNonReserved_32 = Var_63;
          break;
        case (MR_Integer) 0:
          NextNonReserved_32 = Var_64;
          break;
      }
      ll_backend__var_locn__get_spare_reg_loop_5_p_0(VLI_6, RegType_8, Avoid_9, NextNonReserved_32, Lval_10);
    }
  }
  else
    ll_backend__var_locn__get_spare_reg_avoid_4_p_0(VLI_6, RegType_8, Avoid_9, Lval_10);
}

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_avoid_4_p_0(
  MR_Word VLI_5,
  MR_Word RegType_6,
  MR_Word Avoid_7,
  MR_Word * Lval_8)
{
  MR_Integer NextNonReserved_9;
  MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(0, VLI_5, (MR_Integer) 5))));
  MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(0, VLI_5, (MR_Integer) 4))));

  switch (RegType_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      NextNonReserved_9 = Var_40;
      break;
    case (MR_Integer) 0:
      NextNonReserved_9 = Var_41;
      break;
  }
  ll_backend__var_locn__get_spare_reg_loop_5_p_0(VLI_5, RegType_6, Avoid_7, NextNonReserved_9, Lval_8);
}

static void MR_CALL 
ll_backend__var_locn__get_var_name_3_p_0(
  MR_Word VLI_4,
  MR_Word Var_5,
  MR_String * Name_6)
{
  MR_Word VarTable_7 = ((MR_Word) ((MR_hl_field(0, VLI_4, (MR_Integer) 0))));

  *Name_6 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_7, Var_5);
}

static MR_bool MR_CALL 
ll_backend__var_locn__reg_is_not_locked_for_var_4_p_0(
  MR_Word VLI_5,
  MR_Word RegType_6,
  MR_Integer RegNum_7,
  MR_Word Var_8)
{
  MR_bool succeeded;
  MR_Word Acquired_9 = ((MR_Word) ((MR_hl_field(0, VLI_5, (MR_Integer) 8))));
  MR_Word Exceptions_10 = ((MR_Word) ((MR_hl_field(0, VLI_5, (MR_Integer) 11))));
  MR_Integer Locked_11;
  MR_Word Reg_14;
  MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(0, VLI_5, (MR_Integer) 9))));
  MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(0, VLI_5, (MR_Integer) 10))));
  MR_Word TypeInfo_17_17;
  MR_Word Var_15;

  switch (RegType_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Locked_11 = Var_27;
      break;
    case (MR_Integer) 0:
      Locked_11 = Var_26;
      break;
  }
  {
    Reg_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Reg_14, 0) = (MR_Box) ((MR_Unsigned) (RegType_6));
    MR_hl_field(1, Reg_14, 1) = ((MR_Box) (RegNum_7));
  }
  succeeded = mercury__set__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Reg_14)), Acquired_9);
  succeeded = !(succeeded);
  if (succeeded)
  {
    succeeded = (RegNum_7 <= Locked_11);
    if (succeeded)
    {
      TypeInfo_17_17 = (MR_Word) (&ll_backend__var_locn_scalar_common_2[4]);
      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (Var_8));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) (Reg_14));
      }
      succeeded = mercury__list__member_2_p_0(TypeInfo_17_17, ((MR_Box) (Var_15)), Exceptions_10);
      succeeded = !(succeeded);
    }
    succeeded = !(succeeded);
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__select_preferred_reg_or_stack_4_p_0(
  MR_Word VLI_5,
  MR_Word Var_6,
  MR_Word RegType_7,
  MR_Word * Lval_8)
{
  MR_bool succeeded;
  MR_Word FollowVarMap_9 = ((MR_Word) ((MR_hl_field(0, VLI_5, (MR_Integer) 3))));
  MR_Word PrefLocn_10;
  MR_Box conv0_PrefLocn_10;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), FollowVarMap_9, ((MR_Box) (Var_6)), &conv0_PrefLocn_10);
  if (succeeded)
  {
    PrefLocn_10 = ((MR_Word) (conv0_PrefLocn_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    if ((PrefLocn_10 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) PrefLocn_10)) == (MR_Integer) 1))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
  {
    MR_Word PrefLval_14;
    MR_Integer N_13;
    MR_Word Var_22;

    succeeded = ((MR_tag((MR_Word) PrefLocn_10)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_22 = ((MR_Unsigned) ((MR_hl_field(1, PrefLocn_10, (MR_Integer) 0))) & (MR_Integer) 1);
      N_13 = ((MR_Integer) ((MR_hl_field(1, PrefLocn_10, (MR_Integer) 1))));
      succeeded = (RegType_7 == Var_22);
      if (succeeded)
      {
        {
          PrefLval_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PrefLval_14, 0) = (MR_Box) ((MR_Unsigned) (RegType_7));
          MR_hl_field(1, PrefLval_14, 1) = ((MR_Box) (N_13));
        }
        succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(VLI_5, PrefLval_14);
        succeeded = !(succeeded);
      }
    }
    if (succeeded)
      *Lval_8 = PrefLval_14;
    else
    {
      MR_Integer NextNonReserved_34;
      MR_Integer Var_66 = ((MR_Integer) ((MR_hl_field(0, VLI_5, (MR_Integer) 5))));
      MR_Integer Var_67 = ((MR_Integer) ((MR_hl_field(0, VLI_5, (MR_Integer) 4))));

      switch (RegType_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          NextNonReserved_34 = Var_66;
          break;
        case (MR_Integer) 0:
          NextNonReserved_34 = Var_67;
          break;
      }
      ll_backend__var_locn__get_spare_reg_loop_5_p_0(VLI_5, RegType_7, (MR_Word) ((MR_Unsigned) 0U), NextNonReserved_34, Lval_8);
    }
  }
  else
  {
    MR_Word StackSlot_17;
    MR_Word StackSlots_15 = ((MR_Word) ((MR_hl_field(0, VLI_5, (MR_Integer) 2))));
    MR_Word StackSlotLocn_16;
    MR_Box conv1_StackSlotLocn_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_15, ((MR_Box) (Var_6)), &conv1_StackSlotLocn_16);
    if (succeeded)
    {
      StackSlotLocn_16 = ((MR_Word) (conv1_StackSlotLocn_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      StackSlot_17 = ll_backend__llds__stack_slot_to_lval_1_f_0(StackSlotLocn_16);
      succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(VLI_5, StackSlot_17);
      succeeded = !(succeeded);
    }
    if (succeeded)
      *Lval_8 = StackSlot_17;
    else
      ll_backend__var_locn__get_spare_reg_3_p_0(VLI_5, RegType_7, Lval_8);
  }
}

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_3_p_0(
  MR_Word VLI_4,
  MR_Word RegType_5,
  MR_Word * Lval_6)
{
  MR_Integer NextNonReserved_7;
  MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(0, VLI_4, (MR_Integer) 5))));
  MR_Integer Var_40 = ((MR_Integer) ((MR_hl_field(0, VLI_4, (MR_Integer) 4))));

  switch (RegType_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      NextNonReserved_7 = Var_39;
      break;
    case (MR_Integer) 0:
      NextNonReserved_7 = Var_40;
      break;
  }
  ll_backend__var_locn__get_spare_reg_loop_5_p_0(VLI_4, RegType_5, (MR_Word) ((MR_Unsigned) 0U), NextNonReserved_7, Lval_6);
}

static void MR_CALL 
ll_backend__var_locn__get_spare_reg_loop_5_p_0(
  MR_Word VLI_6,
  MR_Word RegType_7,
  MR_Word Avoid_8,
  MR_Integer N0_9,
  MR_Word * Lval_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TryLval_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      TryLval_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TryLval_11, 0) = (MR_Box) ((MR_Unsigned) (RegType_7));
      MR_hl_field(1, TryLval_11, 1) = ((MR_Box) (N0_9));
    }
    succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(VLI_6, TryLval_11);
    if (!(succeeded))
      succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (TryLval_11)), Avoid_8);
    if (succeeded)
    {
      MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) N0_9 + (MR_Unsigned) 1);
      MR_Integer next_value_of_N0_9 = Var_12;

      // direct tailcall eliminated
      ;
      N0_9 = next_value_of_N0_9;
      continue;
    }
    else
      *Lval_10 = TryLval_11;
    break;
  }
}

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_VarStateMap_26;
  MR_Word conv3_STATE_VARIABLE_LocVarMap_28;

  ll_backend__var_locn__record_copy_for_var_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_VarStateMap_26, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_LocVarMap_28);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_VarStateMap_26));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_LocVarMap_28));
}

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_38;

  ll_backend__var_locn__IntroducedFrom__pred__record_copy__1999__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_38);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_38));
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_32;

  succeeded = ll_backend__var_locn__IntroducedFrom__pred__record_copy__1996__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_32);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_32));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__record_copy_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__record_copy_4_p_0(
  MR_Word Old_5,
  MR_Word New_6,
  MR_Word STATE_VARIABLE_VLI_0_17,
  MR_Word * STATE_VARIABLE_VLI_18)
{
  MR_bool succeeded;
  MR_Word VarStateMap0_8;
  MR_Word LocVarMap0_9;
  MR_Word AssignSet_10;
  MR_Word NoDupRootLvals_11;
  MR_Word AffectedVarSets_12;
  MR_Word AffectedVarSet_13;
  MR_Word AffectedVars_14;
  MR_Word VarStateMap_15;
  MR_Word LocVarMap_16;
  MR_Word Var_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word LvalList_71;
  MR_Word AllLvals_72;
  MR_Word RootLvals_73;
  MR_Word Var_74;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Integer Var_81;
  MR_Integer Var_82;
  MR_Word Var_85;
  MR_Integer Var_86;
  MR_Integer Var_87;
  MR_Word Var_88;
  MR_Box conv2_AffectedVarSet_13;
  MR_Box conv6_VarStateMap_15;
  MR_Box conv5_LocVarMap_16;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (New_6));
  }
  mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ll_backend.var_locn.record_copy\'/4", (MR_String) "non-root New lval");
  VarStateMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 6))));
  LocVarMap0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 7))));
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (New_6));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Old_5));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
  }
  mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_22, &AssignSet_10);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), AssignSet_10, &LvalList_71);
  Var_74 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_71);
  AllLvals_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_71, Var_74);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[13]), AllLvals_72, &RootLvals_73);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_73, &NoDupRootLvals_11);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_8[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_3));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (LocVarMap0_9));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), Var_25, NoDupRootLvals_11, &AffectedVarSets_12);
  Var_27 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), (MR_Word) (&ll_backend__var_locn_scalar_common_2[14]), AffectedVarSets_12, ((MR_Box) (Var_27)), &conv2_AffectedVarSet_13);
  AffectedVarSet_13 = ((MR_Word) (conv2_AffectedVarSet_13));
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), AffectedVarSet_13, &AffectedVars_14);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_9[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (ll_backend__var_locn__record_copy_4_p_0_5));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (Old_5));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (New_6));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn_scalar_common_2[3]), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_28, AffectedVars_14, ((MR_Box) (VarStateMap0_8)), &conv6_VarStateMap_15, ((MR_Box) (LocVarMap0_9)), &conv5_LocVarMap_16);
  VarStateMap_15 = ((MR_Word) (conv6_VarStateMap_15));
  LocVarMap_16 = ((MR_Word) (conv5_LocVarMap_16));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 0))));
  Var_78 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 2))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 3))));
  Var_81 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 4))));
  Var_82 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 5))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 8))));
  Var_86 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 9))));
  Var_87 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 10))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_17, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_78));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (LocVarMap_16));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_88));
  }
}

static MR_Word MR_CALL 
ll_backend__var_locn__lval_spare_reg_type_1_f_0(
  MR_Word Lval_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Lval_3)) == (MR_Integer) 1);
  MR_Word RegType_4;
  MR_Word Var_8;

  if (succeeded)
  {
    Var_8 = ((MR_Unsigned) ((MR_hl_field(1, Lval_3, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (Var_8 == (MR_Integer) 1);
  }
  if (succeeded)
    RegType_4 = (MR_Integer) 1;
  else
  {
    succeeded = ((((MR_tag((MR_Word) Lval_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
      RegType_4 = (MR_Integer) 1;
    else
      RegType_4 = (MR_Integer) 0;
  }
  return RegType_4;
}

static MR_bool MR_CALL 
ll_backend__var_locn__find_one_occupying_var_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Lval_8,
  MR_Word VarStateMap_9,
  MR_Word * OccupyingVar_10,
  MR_Word * OtherSources_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeInfo_19_19;
    MR_Word TypeCtorInfo_20_20;
    MR_Word Var_6;
    MR_Word Vars_7;
    MR_Word State_12;
    MR_Word LvalSet_13;
    MR_Box conv0_State_12;
    MR_Word TypeCtorInfo_21_21;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      TypeInfo_19_19 = (MR_Word) (&ll_backend__var_locn_scalar_common_1[0]);
      TypeCtorInfo_20_20 = (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0);
      mercury__map__lookup_3_p_0(TypeInfo_19_19, TypeCtorInfo_20_20, VarStateMap_9, ((MR_Box) (Var_6)), &conv0_State_12);
      State_12 = ((MR_Word) (conv0_State_12));
      LvalSet_13 = ((MR_Word) ((MR_hl_field(0, State_12, (MR_Integer) 0))));
      TypeCtorInfo_21_21 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
      succeeded = mercury__set__member_2_p_0(TypeCtorInfo_21_21, ((MR_Box) (Lval_8)), LvalSet_13);
      if (succeeded)
      {
        MR_Word OtherSourceSet_18;

        *OccupyingVar_10 = Var_6;
        mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_8)), LvalSet_13, &OtherSourceSet_18);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), OtherSourceSet_18, OtherSources_11);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Vars_7;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
ll_backend__var_locn__reg_type_for_var_3_p_0(
  MR_Word VLI_4,
  MR_Word Var_5,
  MR_Word * RegType_6)
{
  MR_bool succeeded;
  MR_Word FloatRegType_7 = ((MR_Unsigned) ((MR_hl_field(0, VLI_4, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, VLI_4, (MR_Integer) 0))));

  switch (FloatRegType_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word VarType_9;
        MR_Word Var_10;

        parse_tree__var_table__lookup_var_type_3_p_0(Var_12, Var_5, &VarType_9);
        Var_10 = parse_tree__builtin_lib_types__float_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(VarType_9, Var_10);
        if (succeeded)
          *RegType_6 = (MR_Integer) 1;
        else
          *RegType_6 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 0:
      *RegType_6 = (MR_Integer) 0;
      break;
  }
}

static void MR_CALL 
ll_backend__var_locn__record_clobbering_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_VarStateMap_13;

  ll_backend__var_locn__clobber_lval_in_var_state_map_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_VarStateMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_VarStateMap_13));
}

static void MR_CALL 
ll_backend__var_locn__record_clobbering_4_p_0(
  MR_Word Target_5,
  MR_Word Assigns_6,
  MR_Word STATE_VARIABLE_VLI_0_14,
  MR_Word * STATE_VARIABLE_VLI_15)
{
  MR_bool succeeded;
  MR_Word LocVarMap1_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 7))));
  MR_Word DependentVarsSet_9;
  MR_Box conv0_DependentVarsSet_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap1_8, ((MR_Box) (Target_5)), &conv0_DependentVarsSet_9);
  if (succeeded)
  {
    DependentVarsSet_9 = ((MR_Word) (conv0_DependentVarsSet_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word DependentVars_10;
    MR_Word LocVarMap_11;
    MR_Word VarStateMap2_12;
    MR_Word VarStateMap_13;
    MR_Word STATE_VARIABLE_VLI_16_16;
    MR_Word Var_17;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Integer Var_44;
    MR_Integer Var_45;
    MR_Word Var_48;
    MR_Integer Var_49;
    MR_Integer Var_50;
    MR_Word Var_51;
    MR_Box conv2_VarStateMap_13;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Integer Var_67;
    MR_Integer Var_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Integer Var_72;
    MR_Integer Var_73;
    MR_Word Var_74;

    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DependentVarsSet_9, &DependentVars_10);
    mercury__map__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), ((MR_Box) (Target_5)), LocVarMap1_8, &LocVarMap_11);
    Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 0))));
    Var_41 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 2))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 3))));
    Var_44 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 4))));
    Var_45 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 5))));
    VarStateMap2_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 6))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 8))));
    Var_49 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 9))));
    Var_50 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 10))));
    Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_14, (MR_Integer) 11))));
    {
      STATE_VARIABLE_VLI_16_16 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 0) = ((MR_Box) (Var_40));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 1) = (MR_Box) ((MR_Unsigned) (Var_41));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 2) = ((MR_Box) (Var_42));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 3) = ((MR_Box) (Var_43));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 4) = ((MR_Box) (Var_44));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 5) = ((MR_Box) (Var_45));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 6) = ((MR_Box) (VarStateMap2_12));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 7) = ((MR_Box) (LocVarMap_11));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 8) = ((MR_Box) (Var_48));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 9) = ((MR_Box) (Var_49));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 10) = ((MR_Box) (Var_50));
      MR_hl_field(0, STATE_VARIABLE_VLI_16_16, 11) = ((MR_Box) (Var_51));
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_7[0]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (ll_backend__var_locn__record_clobbering_4_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (Target_5));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (Assigns_6));
      MR_hl_field(0, Var_17, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn_scalar_common_2[3]), Var_17, DependentVars_10, ((MR_Box) (VarStateMap2_12)), &conv2_VarStateMap_13);
    VarStateMap_13 = ((MR_Word) (conv2_VarStateMap_13));
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 0))));
    Var_64 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 2))));
    Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 3))));
    Var_67 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 4))));
    Var_68 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 5))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 7))));
    Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 8))));
    Var_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 9))));
    Var_73 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 10))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_16_16, (MR_Integer) 11))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_VLI_15 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_64));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_65));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_66));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_67));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_68));
      MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_13));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_74));
    }
  }
  else
    *STATE_VARIABLE_VLI_15 = STATE_VARIABLE_VLI_0_14;
}

static void MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LocVarMap_11;

  ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LocVarMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LocVarMap_11));
}

static MR_bool MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__add_additional_lval_for_var_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_VLI_0_20,
  MR_Word * STATE_VARIABLE_VLI_21)
{
  MR_bool succeeded;
  MR_Word LocVarMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 7))));
  MR_Word LocVarMap_9;
  MR_Word VarStateMap0_10;
  MR_Word State0_11;
  MR_Word LvalSet0_12;
  MR_Word MaybeConstRval_13;
  MR_Word MaybeExprRval0_14;
  MR_Word Using_15;
  MR_Word DeadOrAlive_16;
  MR_Word LvalSet_17;
  MR_Word State_18;
  MR_Word VarStateMap_19;
  MR_Word STATE_VARIABLE_VLI_22_22;
  MR_Word STATE_VARIABLE_VLI_24_24;
  MR_Word Lvals_39;
  MR_Word NoDupRootLvals_41;
  MR_Word Var_42;
  MR_Word LvalList_45;
  MR_Word AllLvals_46;
  MR_Word RootLvals_47;
  MR_Word Var_48;
  MR_Box conv1_LocVarMap_9;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Integer Var_55;
  MR_Integer Var_56;
  MR_Word Var_59;
  MR_Integer Var_60;
  MR_Integer Var_61;
  MR_Word Var_62;
  MR_Box conv2_State0_11;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Integer Var_78;
  MR_Integer Var_79;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Integer Var_83;
  MR_Integer Var_84;
  MR_Word Var_85;

  Lvals_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_6)));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_39, &LvalList_45);
  Var_48 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_45);
  AllLvals_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_45, Var_48);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[12]), AllLvals_46, &RootLvals_47);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_47, &NoDupRootLvals_41);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (ll_backend__var_locn__add_additional_lval_for_var_4_p_0_2));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (Var_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_42, NoDupRootLvals_41, ((MR_Box) (LocVarMap0_8)), &conv1_LocVarMap_9);
  LocVarMap_9 = ((MR_Word) (conv1_LocVarMap_9));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 0))));
  Var_52 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 2))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 3))));
  Var_55 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 4))));
  Var_56 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 5))));
  VarStateMap0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 6))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 8))));
  Var_60 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 9))));
  Var_61 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 10))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_20, (MR_Integer) 11))));
  {
    STATE_VARIABLE_VLI_22_22 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 0) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 1) = (MR_Box) ((MR_Unsigned) (Var_52));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 2) = ((MR_Box) (Var_53));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 3) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 4) = ((MR_Box) (Var_55));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 5) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 6) = ((MR_Box) (VarStateMap0_10));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 7) = ((MR_Box) (LocVarMap_9));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 8) = ((MR_Box) (Var_59));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 9) = ((MR_Box) (Var_60));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 10) = ((MR_Box) (Var_61));
    MR_hl_field(0, STATE_VARIABLE_VLI_22_22, 11) = ((MR_Box) (Var_62));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_10, ((MR_Box) (Var_5)), &conv2_State0_11);
  State0_11 = ((MR_Word) (conv2_State0_11));
  LvalSet0_12 = ((MR_Word) ((MR_hl_field(0, State0_11, (MR_Integer) 0))));
  MaybeConstRval_13 = ((MR_Word) ((MR_hl_field(0, State0_11, (MR_Integer) 1))));
  MaybeExprRval0_14 = ((MR_Word) ((MR_hl_field(0, State0_11, (MR_Integer) 2))));
  Using_15 = ((MR_Word) ((MR_hl_field(0, State0_11, (MR_Integer) 3))));
  DeadOrAlive_16 = ((MR_Unsigned) ((MR_hl_field(0, State0_11, (MR_Integer) 4))) & (MR_Integer) 1);
  mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_6)), LvalSet0_12, &LvalSet_17);
  {
    State_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, State_18, 0) = ((MR_Box) (LvalSet_17));
    MR_hl_field(0, State_18, 1) = ((MR_Box) (MaybeConstRval_13));
    MR_hl_field(0, State_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, State_18, 3) = ((MR_Box) (Using_15));
    MR_hl_field(0, State_18, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive_16));
  }
  mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_5)), ((MR_Box) (State_18)), VarStateMap0_10, &VarStateMap_19);
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 0))));
  Var_75 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 2))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 3))));
  Var_78 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 4))));
  Var_79 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 5))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 7))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 8))));
  Var_83 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 9))));
  Var_84 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 10))));
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_22_22, (MR_Integer) 11))));
  {
    STATE_VARIABLE_VLI_24_24 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 0) = ((MR_Box) (Var_74));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 1) = (MR_Box) ((MR_Unsigned) (Var_75));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 2) = ((MR_Box) (Var_76));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 3) = ((MR_Box) (Var_77));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 4) = ((MR_Box) (Var_78));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 5) = ((MR_Box) (Var_79));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 6) = ((MR_Box) (VarStateMap_19));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 7) = ((MR_Box) (Var_81));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 8) = ((MR_Box) (Var_82));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 9) = ((MR_Box) (Var_83));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 10) = ((MR_Box) (Var_84));
    MR_hl_field(0, STATE_VARIABLE_VLI_24_24, 11) = ((MR_Box) (Var_85));
  }
  if ((MaybeExprRval0_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_VLI_21 = STATE_VARIABLE_VLI_24_24;
  else
  {
    MR_Word ExprRval_86 = ((MR_Word) ((MR_hl_field(1, MaybeExprRval0_14, (MR_Integer) 0))));
    MR_Word ContainedVars0_87;
    MR_Word ContainedVars_88;

    ll_backend__exprn_aux__vars_in_rval_2_p_0(ExprRval_86, &ContainedVars0_87);
    mercury__list__remove_dups_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), ContainedVars0_87, &ContainedVars_88);
    ll_backend__var_locn__remove_use_refs_2_4_p_0(ContainedVars_88, Var_5, STATE_VARIABLE_VLI_24_24, STATE_VARIABLE_VLI_21);
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_LocVarMap_12;

  ll_backend__var_locn__make_var_not_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_LocVarMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_LocVarMap_12));
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__IntroducedFrom__pred__var_locn_var_becomes_dead__2557__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0(
  MR_Word Var_5,
  MR_Word FirstTime_6,
  MR_Word STATE_VARIABLE_VLI_0_26,
  MR_Word * STATE_VARIABLE_VLI_27)
{
  MR_bool succeeded;
  MR_Word VarStateMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 6))));
  MR_Word State0_9;
  MR_Box conv0_State0_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_8, ((MR_Box) (Var_5)), &conv0_State0_9);
  if (succeeded)
  {
    State0_9 = ((MR_Word) (conv0_State0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Lvals_10 = ((MR_Word) ((MR_hl_field(0, State0_9, (MR_Integer) 0))));
    MR_Word MaybeConstRval_11 = ((MR_Word) ((MR_hl_field(0, State0_9, (MR_Integer) 1))));
    MR_Word MaybeExprRval_12 = ((MR_Word) ((MR_hl_field(0, State0_9, (MR_Integer) 2))));
    MR_Word Using_13 = ((MR_Word) ((MR_hl_field(0, State0_9, (MR_Integer) 3))));
    MR_Word DeadOrAlive0_14 = ((MR_Unsigned) ((MR_hl_field(0, State0_9, (MR_Integer) 4))) & (MR_Integer) 1);

    switch (DeadOrAlive0_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_28;

          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_6[2]));
            MR_hl_field(0, Var_28, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_1));
            MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_28, 3) = ((MR_Box) (FirstTime_6));
            MR_hl_field(0, Var_28, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140ll_backend.var_locn.var_locn_var_becomes_dead\'/4", (MR_String) "already dead");
        }
        break;
    }
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Using_13);
    if (succeeded)
    {
      MR_Word VarStateMap_16;
      MR_Word LocVarMap0_17;
      MR_Word NoDupRootLvals_18;
      MR_Word LocVarMap_19;
      MR_Word STATE_VARIABLE_VLI_32_32;
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_VLI_34_34;
      MR_Word LvalList_88;
      MR_Word AllLvals_89;
      MR_Word RootLvals_90;
      MR_Word Var_91;
      MR_Box conv1_Var_15;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Integer Var_69;
      MR_Integer Var_70;
      MR_Word Var_73;
      MR_Integer Var_74;
      MR_Integer Var_75;
      MR_Word Var_76;
      MR_Box conv3_LocVarMap_19;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Integer Var_98;
      MR_Integer Var_99;
      MR_Word Var_100;
      MR_Word Var_102;
      MR_Integer Var_103;
      MR_Integer Var_104;
      MR_Word Var_105;

      mercury__map__det_remove_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_5)), &conv1_Var_15, VarStateMap0_8, &VarStateMap_16);
      Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 0))));
      Var_66 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 2))));
      Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 3))));
      Var_69 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 4))));
      Var_70 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 5))));
      LocVarMap0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 7))));
      Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 8))));
      Var_74 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 9))));
      Var_75 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 10))));
      Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_26, (MR_Integer) 11))));
      {
        STATE_VARIABLE_VLI_32_32 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 0) = ((MR_Box) (Var_65));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 1) = (MR_Box) ((MR_Unsigned) (Var_66));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 2) = ((MR_Box) (Var_67));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 3) = ((MR_Box) (Var_68));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 4) = ((MR_Box) (Var_69));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 5) = ((MR_Box) (Var_70));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 6) = ((MR_Box) (VarStateMap_16));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 7) = ((MR_Box) (LocVarMap0_17));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 8) = ((MR_Box) (Var_73));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 9) = ((MR_Box) (Var_74));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 10) = ((MR_Box) (Var_75));
        MR_hl_field(0, STATE_VARIABLE_VLI_32_32, 11) = ((MR_Box) (Var_76));
      }
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_10, &LvalList_88);
      Var_91 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_88);
      AllLvals_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_88, Var_91);
      mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[11]), AllLvals_89, &RootLvals_90);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_90, &NoDupRootLvals_18);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0_3));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (Var_5));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_33, NoDupRootLvals_18, ((MR_Box) (LocVarMap0_17)), &conv3_LocVarMap_19);
      LocVarMap_19 = ((MR_Word) (conv3_LocVarMap_19));
      Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 0))));
      Var_95 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 2))));
      Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 3))));
      Var_98 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 4))));
      Var_99 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 5))));
      Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 6))));
      Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 8))));
      Var_103 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 9))));
      Var_104 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 10))));
      Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_32_32, (MR_Integer) 11))));
      {
        STATE_VARIABLE_VLI_34_34 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 0) = ((MR_Box) (Var_94));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 1) = (MR_Box) ((MR_Unsigned) (Var_95));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 2) = ((MR_Box) (Var_96));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 3) = ((MR_Box) (Var_97));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 4) = ((MR_Box) (Var_98));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 5) = ((MR_Box) (Var_99));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 6) = ((MR_Box) (Var_100));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 7) = ((MR_Box) (LocVarMap_19));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 8) = ((MR_Box) (Var_102));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 9) = ((MR_Box) (Var_103));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 10) = ((MR_Box) (Var_104));
        MR_hl_field(0, STATE_VARIABLE_VLI_34_34, 11) = ((MR_Box) (Var_105));
      }
      ll_backend__var_locn__remove_use_refs_4_p_0(MaybeExprRval_12, Var_5, STATE_VARIABLE_VLI_34_34, STATE_VARIABLE_VLI_27);
    }
    else
    {
      MR_Word State_20;
      MR_Word VarStateMap_40;

      {
        State_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, State_20, 0) = ((MR_Box) (Lvals_10));
        MR_hl_field(0, State_20, 1) = ((MR_Box) (MaybeConstRval_11));
        MR_hl_field(0, State_20, 2) = ((MR_Box) (MaybeExprRval_12));
        MR_hl_field(0, State_20, 3) = ((MR_Box) (Using_13));
        MR_hl_field(0, State_20, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_5)), ((MR_Box) (State_20)), VarStateMap0_8, &VarStateMap_40);
      ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(VarStateMap_40, STATE_VARIABLE_VLI_0_26, STATE_VARIABLE_VLI_27);
    }
  }
  else
  {
    MR_Word VarTable_21;
    MR_Word VarEntry_22;
    MR_Word VarIsDummy_25;

    ll_backend__var_locn__var_locn_get_var_table_2_p_0(STATE_VARIABLE_VLI_0_26, &VarTable_21);
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_21, Var_5, &VarEntry_22);
    VarIsDummy_25 = ((MR_Unsigned) ((MR_hl_field(0, VarEntry_22, (MR_Integer) 2))) & (MR_Integer) 1);
    succeeded = (VarIsDummy_25 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (FirstTime_6 == (MR_Integer) 0);
    if (!(succeeded))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.var_locn_var_becomes_dead\'/4", (MR_String) "premature deletion");
        return;
      }
    *STATE_VARIABLE_VLI_27 = STATE_VARIABLE_VLI_0_26;
  }
}

static void MR_CALL 
ll_backend__var_locn__remove_use_refs_4_p_0(
  MR_Word MaybeExprRval_5,
  MR_Word UsingVar_6,
  MR_Word STATE_VARIABLE_VLI_0_11,
  MR_Word * STATE_VARIABLE_VLI_12)
{
  if ((MaybeExprRval_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_VLI_12 = STATE_VARIABLE_VLI_0_11;
  else
  {
    MR_Word ExprRval_8 = ((MR_Word) ((MR_hl_field(1, MaybeExprRval_5, (MR_Integer) 0))));
    MR_Word ContainedVars0_9;
    MR_Word ContainedVars_10;

    ll_backend__exprn_aux__vars_in_rval_2_p_0(ExprRval_8, &ContainedVars0_9);
    mercury__list__remove_dups_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), ContainedVars0_9, &ContainedVars_10);
    ll_backend__var_locn__remove_use_refs_2_4_p_0(ContainedVars_10, UsingVar_6, STATE_VARIABLE_VLI_0_11, STATE_VARIABLE_VLI_12);
  }
}

static void MR_CALL 
ll_backend__var_locn__remove_use_refs_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word UsingVar_2,
  MR_Word STATE_VARIABLE_VLI_0_3,
  MR_Word * STATE_VARIABLE_VLI_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VLI_4 = STATE_VARIABLE_VLI_0_3;
    else
    {
      MR_Word ContainedVar_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ContainedVars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VarStateMap0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 6))));
      MR_Word State0_14;
      MR_Word Lvals_15;
      MR_Word MaybeConstRval_16;
      MR_Word MaybeExprRval_17;
      MR_Word Using0_18;
      MR_Word DeadOrAlive_19;
      MR_Word Using_21;
      MR_Word State_22;
      MR_Word VarStateMap_23;
      MR_Word STATE_VARIABLE_VLI_28_28;
      MR_Word STATE_VARIABLE_VLI_30_30;
      MR_Box conv0_State0_14;
      MR_Word Using1_20;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Integer Var_50;
      MR_Integer Var_51;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Integer Var_55;
      MR_Integer Var_56;
      MR_Word Var_57;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VLI_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_13, ((MR_Box) (ContainedVar_9)), &conv0_State0_14);
      State0_14 = ((MR_Word) (conv0_State0_14));
      Lvals_15 = ((MR_Word) ((MR_hl_field(0, State0_14, (MR_Integer) 0))));
      MaybeConstRval_16 = ((MR_Word) ((MR_hl_field(0, State0_14, (MR_Integer) 1))));
      MaybeExprRval_17 = ((MR_Word) ((MR_hl_field(0, State0_14, (MR_Integer) 2))));
      Using0_18 = ((MR_Word) ((MR_hl_field(0, State0_14, (MR_Integer) 3))));
      DeadOrAlive_19 = ((MR_Unsigned) ((MR_hl_field(0, State0_14, (MR_Integer) 4))) & (MR_Integer) 1);
      succeeded = parse_tree__set_of_var__remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UsingVar_2, Using0_18, &Using1_20);
      if (succeeded)
        Using_21 = Using1_20;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.remove_use_refs_2\'/4", (MR_String) "using ref not present");
          return;
        }
      {
        State_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, State_22, 0) = ((MR_Box) (Lvals_15));
        MR_hl_field(0, State_22, 1) = ((MR_Box) (MaybeConstRval_16));
        MR_hl_field(0, State_22, 2) = ((MR_Box) (MaybeExprRval_17));
        MR_hl_field(0, State_22, 3) = ((MR_Box) (Using_21));
        MR_hl_field(0, State_22, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive_19));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (ContainedVar_9)), ((MR_Box) (State_22)), VarStateMap0_13, &VarStateMap_23);
      Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 0))));
      Var_47 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 2))));
      Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 3))));
      Var_50 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 4))));
      Var_51 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 5))));
      Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 7))));
      Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 8))));
      Var_55 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 9))));
      Var_56 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 10))));
      Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_3, (MR_Integer) 11))));
      {
        STATE_VARIABLE_VLI_28_28 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 0) = ((MR_Box) (Var_46));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 1) = (MR_Box) ((MR_Unsigned) (Var_47));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 2) = ((MR_Box) (Var_48));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 3) = ((MR_Box) (Var_49));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 4) = ((MR_Box) (Var_50));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 5) = ((MR_Box) (Var_51));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 6) = ((MR_Box) (VarStateMap_23));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 7) = ((MR_Box) (Var_53));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 8) = ((MR_Box) (Var_54));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 9) = ((MR_Box) (Var_55));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 10) = ((MR_Box) (Var_56));
        MR_hl_field(0, STATE_VARIABLE_VLI_28_28, 11) = ((MR_Box) (Var_57));
      }
      succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Using_21);
      if (succeeded)
        succeeded = (DeadOrAlive_19 == (MR_Integer) 0);
      if (succeeded)
        ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0(ContainedVar_9, (MR_Integer) 0, STATE_VARIABLE_VLI_28_28, &STATE_VARIABLE_VLI_30_30);
      else
        STATE_VARIABLE_VLI_30_30 = STATE_VARIABLE_VLI_28_28;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ContainedVars_10;
      next_value_of_STATE_VARIABLE_VLI_0_3 = STATE_VARIABLE_VLI_30_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VLI_0_3 = next_value_of_STATE_VARIABLE_VLI_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_set_var_state_map_3_p_0(
  MR_Word VSM_4,
  MR_Word VI_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 0))));
  MR_Word Var_7 = ((MR_Unsigned) ((MR_hl_field(0, VI_5, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 2))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 3))));
  MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(0, VI_5, (MR_Integer) 4))));
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(0, VI_5, (MR_Integer) 5))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 7))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 8))));
  MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(0, VI_5, (MR_Integer) 9))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, VI_5, (MR_Integer) 10))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 6) = ((MR_Box) (VSM_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_17));
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_get_acquired_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, VI_3, (MR_Integer) 8))));
}

static void MR_CALL 
ll_backend__var_locn__var_locn_get_var_state_map_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, VI_3, (MR_Integer) 6))));
}

static void MR_CALL 
ll_backend__var_locn__find_var_availability_4_p_0(
  MR_Word VLI_5,
  MR_Word Var_6,
  MR_Word MaybePrefer_7,
  MR_Word * Avail_8)
{
  MR_bool succeeded;
  MR_Word VarStateMap_9 = ((MR_Word) ((MR_hl_field(0, VLI_5, (MR_Integer) 6))));
  MR_Word State_10;
  MR_Word Lvals_11;
  MR_Word MaybeConstRval_12;
  MR_Word LvalsList_16;
  MR_Box conv0_State_10;
  MR_Word Prefer_17;

  mercury__map__lookup_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_9, ((MR_Box) (Var_6)), &conv0_State_10);
  State_10 = ((MR_Word) (conv0_State_10));
  Lvals_11 = ((MR_Word) ((MR_hl_field(0, State_10, (MR_Integer) 0))));
  MaybeConstRval_12 = ((MR_Word) ((MR_hl_field(0, State_10, (MR_Integer) 1))));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_11, &LvalsList_16);
  succeeded = (MaybePrefer_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Prefer_17 = ((MR_Word) ((MR_hl_field(1, MaybePrefer_7, (MR_Integer) 0))));
    succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Prefer_17)), LvalsList_16);
  }
  if (succeeded)
  {
    MR_Word Rval_18;

    {
      Rval_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Rval_18, 0) = ((MR_Box) (Prefer_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Avail_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Rval_18));
    }
  }
  else
  {
    MR_Word Rval_19;
    MR_Word Lval1_34;

    succeeded = ll_backend__var_locn__select_reg_lval_2_p_0(LvalsList_16, &Lval1_34);
    if (succeeded)
    {
      {
        Rval_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Rval_19, 0) = ((MR_Box) (Lval1_34));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Lval2_35;

      succeeded = ll_backend__var_locn__select_stack_lval_2_p_0(LvalsList_16, &Lval2_35);
      if (succeeded)
      {
        {
          Rval_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Rval_19, 0) = ((MR_Box) (Lval2_35));
        }
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word ConstRval_36;

        succeeded = (MaybeConstRval_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ConstRval_36 = ((MR_Word) ((MR_hl_field(1, MaybeConstRval_12, (MR_Integer) 0))));
          Rval_19 = ConstRval_36;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Lval3_37;

          succeeded = (LvalsList_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Lval3_37 = ((MR_Word) ((MR_hl_field(1, LvalsList_16, (MR_Integer) 0))));
            {
              Rval_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Rval_19, 0) = ((MR_Box) (Lval3_37));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Avail_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Rval_19));
      }
    else
      *Avail_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__select_stack_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Lval_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Lval0_3;
    MR_Word Lvals0_4;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Lval0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Lvals0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Lval0_3)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Lval0_3, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
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
      if (succeeded)
      {
        *Lval_5 = Lval0_3;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Lvals0_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__select_reg_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Lval_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Lval0_3;
    MR_Word Lvals0_4;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Lval0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Lvals0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Lval0_3)) == (MR_Integer) 1);
      if (succeeded)
      {
        *Lval_5 = Lval0_3;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Lvals0_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_assign_var_to_var_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__IntroducedFrom__pred__var_locn_assign_var_to_var__838__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
ll_backend__var_locn__var_locn_assign_var_to_var_4_p_0(
  MR_Word Var_5,
  MR_Word OldVar_6,
  MR_Word STATE_VARIABLE_VLI_0_28,
  MR_Word * STATE_VARIABLE_VLI_29)
{
  MR_bool succeeded;
  MR_Word VarStateMap0_8;
  MR_Word VarStateMap0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 6))));
  MR_Box conv0_Var_52;
  MR_Word OldState0_9;
  MR_Box conv1_OldState0_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_51, ((MR_Box) (Var_5)), &conv0_Var_52);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
  {
    MR_String Name_53;
    MR_String Var_55;
    MR_Word VarTable_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 0))));

    Name_53 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_70, Var_5);
    Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "existing definition of variable ", Name_53);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.var_locn.check_var_is_unknown\'/2", Var_55);
      return;
    }
  }
  VarStateMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 6))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap0_8, ((MR_Box) (OldVar_6)), &conv1_OldState0_9);
  if (succeeded)
  {
    OldState0_9 = ((MR_Word) (conv1_OldState0_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Lvals_10 = ((MR_Word) ((MR_hl_field(0, OldState0_9, (MR_Integer) 0))));
    MR_Word MaybeConstRval_11 = ((MR_Word) ((MR_hl_field(0, OldState0_9, (MR_Integer) 1))));
    MR_Word MaybeExprRval_12 = ((MR_Word) ((MR_hl_field(0, OldState0_9, (MR_Integer) 2))));
    MR_Word Using0_13 = ((MR_Word) ((MR_hl_field(0, OldState0_9, (MR_Integer) 3))));
    MR_Word DeadOrAlive_14 = ((MR_Unsigned) ((MR_hl_field(0, OldState0_9, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word State_16;
    MR_Word VarStateMap1_19;
    MR_Word VarStateMap_20;
    MR_Word LocVarMap0_21;
    MR_Word LocVarMap_22;
    MR_Word STATE_VARIABLE_VLI_37_37;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Integer Var_97;
    MR_Integer Var_98;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Integer Var_102;
    MR_Integer Var_103;
    MR_Word Var_104;

    if ((MaybeExprRval_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_35;

      Var_35 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      {
        State_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, State_16, 0) = ((MR_Box) (Lvals_10));
        MR_hl_field(0, State_16, 1) = ((MR_Box) (MaybeConstRval_11));
        MR_hl_field(0, State_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, State_16, 3) = ((MR_Box) (Var_35));
        MR_hl_field(0, State_16, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      VarStateMap1_19 = VarStateMap0_8;
    }
    else
    {
      MR_Word Using_17;
      MR_Word OldState_18;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;

      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (OldVar_6));
      }
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      }
      Var_32 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      {
        State_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, State_16, 0) = ((MR_Box) (Lvals_10));
        MR_hl_field(0, State_16, 1) = ((MR_Box) (MaybeConstRval_11));
        MR_hl_field(0, State_16, 2) = ((MR_Box) (Var_30));
        MR_hl_field(0, State_16, 3) = ((MR_Box) (Var_32));
        MR_hl_field(0, State_16, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, Using0_13, &Using_17);
      {
        OldState_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OldState_18, 0) = ((MR_Box) (Lvals_10));
        MR_hl_field(0, OldState_18, 1) = ((MR_Box) (MaybeConstRval_11));
        MR_hl_field(0, OldState_18, 2) = ((MR_Box) (MaybeExprRval_12));
        MR_hl_field(0, OldState_18, 3) = ((MR_Box) (Using_17));
        MR_hl_field(0, OldState_18, 4) = (MR_Box) ((MR_Unsigned) (DeadOrAlive_14));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (OldVar_6)), ((MR_Box) (OldState_18)), VarStateMap0_8, &VarStateMap1_19);
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_5)), ((MR_Box) (State_16)), VarStateMap1_19, &VarStateMap_20);
    Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 0))));
    Var_94 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 2))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 3))));
    Var_97 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 4))));
    Var_98 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 5))));
    Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 7))));
    Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 8))));
    Var_102 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 9))));
    Var_103 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 10))));
    Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_28, (MR_Integer) 11))));
    {
      STATE_VARIABLE_VLI_37_37 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 0) = ((MR_Box) (Var_93));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 1) = (MR_Box) ((MR_Unsigned) (Var_94));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 2) = ((MR_Box) (Var_95));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 3) = ((MR_Box) (Var_96));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 4) = ((MR_Box) (Var_97));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 5) = ((MR_Box) (Var_98));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 6) = ((MR_Box) (VarStateMap_20));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 7) = ((MR_Box) (Var_100));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 8) = ((MR_Box) (Var_101));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 9) = ((MR_Box) (Var_102));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 10) = ((MR_Box) (Var_103));
      MR_hl_field(0, STATE_VARIABLE_VLI_37_37, 11) = ((MR_Box) (Var_104));
    }
    ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(STATE_VARIABLE_VLI_37_37, &LocVarMap0_21);
    ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0(Var_5, Lvals_10, LocVarMap0_21, &LocVarMap_22);
    ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(LocVarMap_22, STATE_VARIABLE_VLI_37_37, STATE_VARIABLE_VLI_29);
  }
  else
  {
    MR_Word VarTable_23;
    MR_Word OldVarEntry_24;
    MR_Word OldVarIsDummy_27;
    MR_Word Var_39;

    ll_backend__var_locn__var_locn_get_var_table_2_p_0(STATE_VARIABLE_VLI_0_28, &VarTable_23);
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_23, OldVar_6, &OldVarEntry_24);
    OldVarIsDummy_27 = ((MR_Unsigned) ((MR_hl_field(0, OldVarEntry_24, (MR_Integer) 2))) & (MR_Integer) 1);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_6[1]));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (ll_backend__var_locn__var_locn_assign_var_to_var_4_p_0_1));
      MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_39, 3) = ((MR_Box) (OldVarIsDummy_27));
      MR_hl_field(0, Var_39, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140ll_backend.var_locn.var_locn_assign_var_to_var\'/4", (MR_String) "assigning value of nondummy variable without a state");
    *STATE_VARIABLE_VLI_29 = STATE_VARIABLE_VLI_0_28;
  }
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LocVarMap_11;

  ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LocVarMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LocVarMap_11));
}

static MR_bool MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0(
  MR_Word Var_5,
  MR_Word Lvals_6,
  MR_Word STATE_VARIABLE_LocVarMap_0_9,
  MR_Word * STATE_VARIABLE_LocVarMap_10)
{
  MR_bool succeeded;
  MR_Word NoDupRootLvals_8;
  MR_Word Var_11;
  MR_Word LvalList_17;
  MR_Word AllLvals_18;
  MR_Word RootLvals_19;
  MR_Word Var_20;
  MR_Box conv1_STATE_VARIABLE_LocVarMap_10;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_6, &LvalList_17);
  Var_20 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_17);
  AllLvals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_17, Var_20);
  mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[10]), AllLvals_18, &RootLvals_19);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_19, &NoDupRootLvals_8);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (ll_backend__var_locn__make_var_depend_on_lvals_roots_4_p_0_2));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Var_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_11, NoDupRootLvals_8, ((MR_Box) (STATE_VARIABLE_LocVarMap_0_9)), &conv1_STATE_VARIABLE_LocVarMap_10);
  *STATE_VARIABLE_LocVarMap_10 = ((MR_Word) (conv1_STATE_VARIABLE_LocVarMap_10));
}

static void MR_CALL 
ll_backend__var_locn__var_locn_set_loc_var_map_3_p_0(
  MR_Word LVM_4,
  MR_Word VI_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 0))));
  MR_Word Var_7 = ((MR_Unsigned) ((MR_hl_field(0, VI_5, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 2))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 3))));
  MR_Integer Var_10 = ((MR_Integer) ((MR_hl_field(0, VI_5, (MR_Integer) 4))));
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(0, VI_5, (MR_Integer) 5))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 6))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 8))));
  MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(0, VI_5, (MR_Integer) 9))));
  MR_Integer Var_16 = ((MR_Integer) ((MR_hl_field(0, VI_5, (MR_Integer) 10))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, VI_5, (MR_Integer) 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_7));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 7) = ((MR_Box) (LVM_4));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_17));
  }
}

static void MR_CALL 
ll_backend__var_locn__var_locn_get_loc_var_map_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, VI_3, (MR_Integer) 7))));
}

static void MR_CALL 
ll_backend__var_locn__var_locn_get_var_table_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, VI_3, (MR_Integer) 0))));
}

void MR_CALL 
ll_backend__var_locn__var_locn_set_follow_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VLI_0_8,
  MR_Word * STATE_VARIABLE_VLI_9)
{
  MR_Word FollowVarMap_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer NextNonReservedR_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer NextNonReservedF_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 2))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 7))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 8))));
  MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 9))));
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 10))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VLI_0_8, (MR_Integer) 11))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VLI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (FollowVarMap_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (NextNonReservedR_5));
    MR_hl_field(0, base, 5) = ((MR_Box) (NextNonReservedF_6));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_get_next_non_reserved_3_p_0(
  MR_Word VI_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(0, VI_1, (MR_Integer) 5))));
  MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(0, VI_1, (MR_Integer) 4))));

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *HeadVar__3_3 = Var_34;
      break;
    case (MR_Integer) 0:
      *HeadVar__3_3 = Var_35;
      break;
  }
}

void MR_CALL 
ll_backend__var_locn__var_locn_max_reg_in_use_3_p_0(
  MR_Word VLI_4,
  MR_Integer * MaxR_5,
  MR_Integer * MaxF_6)
{
  MR_Word LocVarMap_7 = ((MR_Word) ((MR_hl_field(0, VLI_4, (MR_Integer) 7))));
  MR_Word VarLocs_8;
  MR_Integer MaxR1_9;
  MR_Integer MaxF1_10;
  MR_Word Acquired_11;
  MR_Word AcquiredList_12;
  MR_Integer MaxR2_13;
  MR_Integer MaxF2_14;

  mercury__map__keys_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap_7, &VarLocs_8);
  ll_backend__code_util__max_mentioned_regs_3_p_0(VarLocs_8, &MaxR1_9, &MaxF1_10);
  Acquired_11 = ((MR_Word) ((MR_hl_field(0, VLI_4, (MR_Integer) 8))));
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Acquired_11, &AcquiredList_12);
  ll_backend__code_util__max_mentioned_regs_3_p_0(AcquiredList_12, &MaxR2_13, &MaxF2_14);
  mercury__int__max_3_p_0(MaxR1_9, MaxR2_13, MaxR_5);
  mercury__int__max_3_p_0(MaxF1_10, MaxF2_14, MaxF_6);
}

MR_bool MR_CALL 
ll_backend__var_locn__var_locn_lval_in_use_2_p_0(
  MR_Word VLI_3,
  MR_Word Lval_4)
{
  MR_bool succeeded;
  MR_Word LocVarMap_5 = ((MR_Word) ((MR_hl_field(0, VLI_3, (MR_Integer) 7))));
  MR_Word Acquired_6 = ((MR_Word) ((MR_hl_field(0, VLI_3, (MR_Integer) 8))));
  MR_Integer LockedR_7 = ((MR_Integer) ((MR_hl_field(0, VLI_3, (MR_Integer) 9))));
  MR_Integer LockedF_8 = ((MR_Integer) ((MR_hl_field(0, VLI_3, (MR_Integer) 10))));

  {
    MR_Word TypeCtorInfo_16_16;
    MR_Word UsingVars_9;
    MR_Box conv0_UsingVars_9;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), LocVarMap_5, ((MR_Box) (Lval_4)), &conv0_UsingVars_9);
    if (succeeded)
    {
      UsingVars_9 = ((MR_Word) (conv0_UsingVars_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeCtorInfo_16_16 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(TypeCtorInfo_16_16, UsingVars_9);
    }
  }
  if (!(succeeded))
  {
    succeeded = mercury__set__member_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_4)), Acquired_6);
    if (!(succeeded))
    {
      {
        MR_Integer N_10;
        MR_Word Var_11;

        succeeded = ((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_11 = ((MR_Unsigned) ((MR_hl_field(1, Lval_4, (MR_Integer) 0))) & (MR_Integer) 1);
          N_10 = ((MR_Integer) ((MR_hl_field(1, Lval_4, (MR_Integer) 1))));
          succeeded = (Var_11 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (N_10 <= LockedR_7);
        }
      }
      if (!(succeeded))
      {
        MR_Word Var_12;
        MR_Integer N_13;

        succeeded = ((MR_tag((MR_Word) Lval_4)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_12 = ((MR_Unsigned) ((MR_hl_field(1, Lval_4, (MR_Integer) 0))) & (MR_Integer) 1);
          N_13 = ((MR_Integer) ((MR_hl_field(1, Lval_4, (MR_Integer) 1))));
          succeeded = (Var_12 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (N_13 <= LockedF_8);
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__var_locn_get_var_locations_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = ll_backend__var_locn__convert_live_to_lval_set_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
ll_backend__var_locn__var_locn_get_var_locations_2_p_0(
  MR_Word VLI_3,
  MR_Word * VarLocations_4)
{
  MR_bool succeeded;
  MR_Word VarStateMap_5 = ((MR_Word) ((MR_hl_field(0, VLI_3, (MR_Integer) 6))));
  MR_Word VarLocList_6;
  MR_Word LiveVarLocList_7;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), VarStateMap_5, &VarLocList_6);
  mercury__list__filter_map_3_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_2[0]), (MR_Word) (&ll_backend__var_locn_scalar_common_2[1]), (MR_Word) (&ll_backend__var_locn_scalar_common_2[9]), VarLocList_6, &LiveVarLocList_7);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn_scalar_common_1[2]), LiveVarLocList_7, VarLocations_4);
}

void MR_CALL 
ll_backend__var_locn__var_locn_get_follow_var_map_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, VI_3, (MR_Integer) 3))));
}

void MR_CALL 
ll_backend__var_locn__var_locn_get_stack_slots_2_p_0(
  MR_Word VI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, VI_3, (MR_Integer) 2))));
}

void MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_3_p_0(
  MR_Word VarLocs_4,
  MR_Word STATE_VARIABLE_VarLocnInfo_0_23,
  MR_Word * STATE_VARIABLE_VarLocnInfo_24)
{
  MR_Word VarStateMap0_6;
  MR_Word LocVarMap0_7;
  MR_Word VarStateMap_8;
  MR_Word LocVarMap_9;
  MR_Word AcquiredRegs_10;
  MR_Word VarTable_11;
  MR_Word FloatRegType_12;
  MR_Word StackSlots_13;
  MR_Word FollowVarMap_14;
  MR_Integer NextNonReservedR_15;
  MR_Integer NextNonReservedF_16;

  mercury__map__init_1_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), &VarStateMap0_6);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), &LocVarMap0_7);
  ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0(VarLocs_4, VarStateMap0_6, &VarStateMap_8, LocVarMap0_7, &LocVarMap_9);
  mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &AcquiredRegs_10);
  VarTable_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarLocnInfo_0_23, (MR_Integer) 0))));
  FloatRegType_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_VarLocnInfo_0_23, (MR_Integer) 1))) & (MR_Integer) 1);
  StackSlots_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarLocnInfo_0_23, (MR_Integer) 2))));
  FollowVarMap_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_VarLocnInfo_0_23, (MR_Integer) 3))));
  NextNonReservedR_15 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VarLocnInfo_0_23, (MR_Integer) 4))));
  NextNonReservedF_16 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_VarLocnInfo_0_23, (MR_Integer) 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_VarLocnInfo_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarTable_11));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (FloatRegType_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (StackSlots_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (FollowVarMap_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (NextNonReservedR_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (NextNonReservedF_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_8));
    MR_hl_field(0, base, 7) = ((MR_Box) (LocVarMap_9));
    MR_hl_field(0, base, 8) = ((MR_Box) (AcquiredRegs_10));
    MR_hl_field(0, base, 9) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LocVarMap_11;

  ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LocVarMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LocVarMap_11));
}

static MR_bool MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_VarStateMap_0_2,
  MR_Word * STATE_VARIABLE_VarStateMap_3,
  MR_Word STATE_VARIABLE_LocVarMap_0_4,
  MR_Word * STATE_VARIABLE_LocVarMap_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LocVarMap_5 = STATE_VARIABLE_LocVarMap_0_4;
      *STATE_VARIABLE_VarStateMap_3 = STATE_VARIABLE_VarStateMap_0_2;
    }
    else
    {
      MR_Word Var_12;
      MR_Word Lval_13;
      MR_Word VarLocns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_VarStateMap_22_22;
      MR_Word STATE_VARIABLE_LocVarMap_23_23;
      MR_Word NewLocs_24;
      MR_Word Using_25;
      MR_Word State_26;
      MR_Word Var_27;
      MR_Word Lvals_36;
      MR_Word NoDupRootLvals_38;
      MR_Word Var_39;
      MR_Word LvalList_42;
      MR_Word AllLvals_43;
      MR_Word RootLvals_44;
      MR_Word Var_45;
      MR_Box conv1_STATE_VARIABLE_LocVarMap_23_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarStateMap_0_2;
      MR_Word next_value_of_STATE_VARIABLE_LocVarMap_0_4;

      Var_12 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
      Lval_13 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 1))));
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_27, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
        MR_hl_field(0, Var_27, 1) = ((MR_Box) (ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0_1));
        MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_27, 3) = ((MR_Box) (Lval_13));
      }
      mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140ll_backend.var_locn.add_var_locn_state\'/6", (MR_String) "unexpected lval");
      NewLocs_24 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_13)));
      parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Using_25);
      {
        State_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, State_26, 0) = ((MR_Box) (NewLocs_24));
        MR_hl_field(0, State_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, State_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, State_26, 3) = ((MR_Box) (Using_25));
        MR_hl_field(0, State_26, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_12)), ((MR_Box) (State_26)), STATE_VARIABLE_VarStateMap_0_2, &STATE_VARIABLE_VarStateMap_22_22);
      Lvals_36 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_13)));
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_36, &LvalList_42);
      Var_45 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_42);
      AllLvals_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_42, Var_45);
      mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[8]), AllLvals_43, &RootLvals_44);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_44, &NoDupRootLvals_38);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (ll_backend__var_locn__reinit_var_locn_state_loop_5_p_0_3));
        MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_39, 3) = ((MR_Box) (Var_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_39, NoDupRootLvals_38, ((MR_Box) (STATE_VARIABLE_LocVarMap_0_4)), &conv1_STATE_VARIABLE_LocVarMap_23_23);
      STATE_VARIABLE_LocVarMap_23_23 = ((MR_Word) (conv1_STATE_VARIABLE_LocVarMap_23_23));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarLocns_14;
      next_value_of_STATE_VARIABLE_VarStateMap_0_2 = STATE_VARIABLE_VarStateMap_22_22;
      next_value_of_STATE_VARIABLE_LocVarMap_0_4 = STATE_VARIABLE_LocVarMap_23_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarStateMap_0_2 = next_value_of_STATE_VARIABLE_VarStateMap_0_2;
      STATE_VARIABLE_LocVarMap_0_4 = next_value_of_STATE_VARIABLE_LocVarMap_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__var_locn__init_var_locn_state_7_p_0(
  MR_Word VarTable_8,
  MR_Word FloatRegType_9,
  MR_Word StackSlots_10,
  MR_Word FollowVars_11,
  MR_Word Liveness_12,
  MR_Word VarLocs_13,
  MR_Word * VarLocnInfo_14)
{
  MR_Word VarStateMap0_15;
  MR_Word LocVarMap0_16;
  MR_Word VarStateMap_17;
  MR_Word LocVarMap_18;
  MR_Word FollowVarMap_19;
  MR_Integer NextNonReservedR_20;
  MR_Integer NextNonReservedF_21;
  MR_Word AcquiredRegs_22;

  mercury__map__init_1_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), &VarStateMap0_15);
  mercury__map__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_1[1]), &LocVarMap0_16);
  ll_backend__var_locn__init_var_locn_state_loop_6_p_0(VarLocs_13, Liveness_12, VarStateMap0_15, &VarStateMap_17, LocVarMap0_16, &LocVarMap_18);
  FollowVarMap_19 = ((MR_Word) ((MR_hl_field(0, FollowVars_11, (MR_Integer) 0))));
  NextNonReservedR_20 = ((MR_Integer) ((MR_hl_field(0, FollowVars_11, (MR_Integer) 1))));
  NextNonReservedF_21 = ((MR_Integer) ((MR_hl_field(0, FollowVars_11, (MR_Integer) 2))));
  mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &AcquiredRegs_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *VarLocnInfo_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarTable_8));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (FloatRegType_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (StackSlots_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (FollowVarMap_19));
    MR_hl_field(0, base, 4) = ((MR_Box) (NextNonReservedR_20));
    MR_hl_field(0, base, 5) = ((MR_Box) (NextNonReservedF_21));
    MR_hl_field(0, base, 6) = ((MR_Box) (VarStateMap_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (LocVarMap_18));
    MR_hl_field(0, base, 8) = ((MR_Box) (AcquiredRegs_22));
    MR_hl_field(0, base, 9) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ll_backend__var_locn__init_var_locn_state_loop_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LocVarMap_11;

  ll_backend__var_locn__make_var_depend_on_root_lval_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LocVarMap_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LocVarMap_11));
}

static MR_bool MR_CALL 
ll_backend__var_locn__init_var_locn_state_loop_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__var_locn__init_var_locn_state_loop_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__var_locn__is_root_lval_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn__init_var_locn_state_loop_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Liveness_2,
  MR_Word STATE_VARIABLE_VarStateMap_0_3,
  MR_Word * STATE_VARIABLE_VarStateMap_4,
  MR_Word STATE_VARIABLE_LocVarMap_0_5,
  MR_Word * STATE_VARIABLE_LocVarMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LocVarMap_6 = STATE_VARIABLE_LocVarMap_0_5;
      *STATE_VARIABLE_VarStateMap_4 = STATE_VARIABLE_VarStateMap_0_3;
    }
    else
    {
      MR_Word Var_14;
      MR_Word Lval_15;
      MR_Word VarLocns_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_VarStateMap_25_25;
      MR_Word STATE_VARIABLE_LocVarMap_26_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VarStateMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_LocVarMap_0_5;

      Var_14 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 0))));
      Lval_15 = ((MR_Word) ((MR_hl_field(0, Var_24, (MR_Integer) 1))));
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_2, Var_14);
      if (succeeded)
      {
        MR_Word NewLocs_28;
        MR_Word Using_29;
        MR_Word State_30;
        MR_Word Var_31;
        MR_Word Lvals_40;
        MR_Word NoDupRootLvals_42;
        MR_Word Var_43;
        MR_Word LvalList_46;
        MR_Word AllLvals_47;
        MR_Word RootLvals_48;
        MR_Word Var_49;
        MR_Box conv1_STATE_VARIABLE_LocVarMap_26_26;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_4[0]));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (ll_backend__var_locn__init_var_locn_state_loop_6_p_0_1));
          MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_31, 3) = ((MR_Box) (Lval_15));
        }
        mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140ll_backend.var_locn.add_var_locn_state\'/6", (MR_String) "unexpected lval");
        NewLocs_28 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_15)));
        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Using_29);
        {
          State_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, State_30, 0) = ((MR_Box) (NewLocs_28));
          MR_hl_field(0, State_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, State_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, State_30, 3) = ((MR_Box) (Using_29));
          MR_hl_field(0, State_30, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__var_locn_scalar_common_1[0]), (MR_Word) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_state_0), ((MR_Box) (Var_14)), ((MR_Box) (State_30)), STATE_VARIABLE_VarStateMap_0_3, &STATE_VARIABLE_VarStateMap_25_25);
        Lvals_40 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_15)));
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_40, &LvalList_46);
        Var_49 = ll_backend__code_util__lvals_in_lvals_1_f_0(LvalList_46);
        AllLvals_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalList_46, Var_49);
        mercury__list__filter_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[7]), AllLvals_47, &RootLvals_48);
        mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), RootLvals_48, &NoDupRootLvals_42);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (&ll_backend__var_locn_scalar_common_5[0]));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (ll_backend__var_locn__init_var_locn_state_loop_6_p_0_3));
          MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_43, 3) = ((MR_Box) (Var_14));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__var_locn_scalar_common_2[2]), Var_43, NoDupRootLvals_42, ((MR_Box) (STATE_VARIABLE_LocVarMap_0_5)), &conv1_STATE_VARIABLE_LocVarMap_26_26);
        STATE_VARIABLE_LocVarMap_26_26 = ((MR_Word) (conv1_STATE_VARIABLE_LocVarMap_26_26));
      }
      else
      {
        STATE_VARIABLE_LocVarMap_26_26 = STATE_VARIABLE_LocVarMap_0_5;
        STATE_VARIABLE_VarStateMap_25_25 = STATE_VARIABLE_VarStateMap_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarLocns_16;
      next_value_of_STATE_VARIABLE_VarStateMap_0_3 = STATE_VARIABLE_VarStateMap_25_25;
      next_value_of_STATE_VARIABLE_LocVarMap_0_5 = STATE_VARIABLE_LocVarMap_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VarStateMap_0_3 = next_value_of_STATE_VARIABLE_VarStateMap_0_3;
      STATE_VARIABLE_LocVarMap_0_5 = next_value_of_STATE_VARIABLE_LocVarMap_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dead_or_alive_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__var_locn____Unify____dead_or_alive_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____dead_or_alive_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__var_locn____Compare____dead_or_alive_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____dep_search_lval_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__var_locn____Unify____dep_search_lval_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____dep_search_lval_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__var_locn____Compare____dep_search_lval_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____loc_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__var_locn____Unify____loc_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____loc_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__var_locn____Compare____loc_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____store_var_if_required_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__var_locn____Unify____store_var_if_required_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____store_var_if_required_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__var_locn____Compare____store_var_if_required_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_avail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__var_locn____Unify____var_avail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_avail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__var_locn____Compare____var_avail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_locn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__var_locn____Unify____var_locn_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_locn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__var_locn____Compare____var_locn_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__var_locn____Unify____var_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__var_locn____Compare____var_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__var_locn____Unify____var_state_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__var_locn____Unify____var_state_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__var_locn____Compare____var_state_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__var_locn____Compare____var_state_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_store_var_if_required_0);
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

// :- end_module ll_backend.var_locn.
