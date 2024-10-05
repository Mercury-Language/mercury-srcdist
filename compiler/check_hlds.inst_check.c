/*
** Automatically generated from `inst_check.m'
** by the Mercury compiler,
** version rotd-2024-10-05
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


// :- module check_hlds.inst_check.
// :- implementation.

/*
INIT mercury__check_hlds__inst_check__init
ENDINIT
*/

#include "check_hlds.inst_check.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s {
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__PossibleTypes_13;
  MR_bool check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded;
  jmp_buf check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__commit_0;
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__Type_158;
  MR_Box check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__conv1_Type_158;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_functor_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_cons_mismatch_0_0[2];

static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_cons_mismatch_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_cons_mismatch_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_cons_mismatch_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_cons_mismatch_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_cons_mismatch_0[1];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_cons_mismatch_0[1];

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_1[2];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0[2];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0[2];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0[2];

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3];

static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1];

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_near_miss_cons_mismatch_0_0[2];

static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_near_miss_cons_mismatch_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_near_miss_cons_mismatch_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_near_miss_cons_mismatch_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_near_miss_cons_mismatch_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_near_miss_cons_mismatch_0[1];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_near_miss_cons_mismatch_0[1];

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1];

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3];

static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0;

static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1;

static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_ordinal_ordered_typeable_functors_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2];

static MR_Word MR_CALL 
check_hlds__inst_check__IntroducedFrom__func__record_arity_mismatch__1266__1_1_f_0(
  MR_Integer LambdaHeadVar__1_32);

static MR_bool MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__355__1_2_p_0(
  MR_Word IFTC0_19,
  MR_Word HeadVar__2_79);

static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__149__1_4_p_0(
  MR_Word TypeCtorAndDefn_12,
  MR_Word HeadVar__2_19,
  MR_Word HeadVar__3_20,
  MR_Word * HeadVar__4_21);

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____cons_mismatch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____cons_mismatch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
  MR_Word BoundFunctors_4,
  MR_Word TypeDefnOrBuiltin_5,
  MR_Word * MismatchFromType_6);

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * STATE_VARIABLE_NumMismatches_5,
  MR_Word STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * STATE_VARIABLE_PiecesCord_7);

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * STATE_VARIABLE_NumMismatches_5,
  MR_Word STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * STATE_VARIABLE_PiecesCord_7);

static MR_Box MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * STATE_VARIABLE_NumMismatches_5,
  MR_Word STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * STATE_VARIABLE_PiecesCord_7);

static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
  MR_Integer CurNum_7,
  MR_Word BoundFunctor_8,
  MR_Integer STATE_VARIABLE_NumMismatches_0_18,
  MR_Integer * STATE_VARIABLE_NumMismatches_19,
  MR_Word STATE_VARIABLE_PiecesCord_0_20,
  MR_Word * STATE_VARIABLE_PiecesCord_21);

static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word STATE_VARIABLE_ExpectedArities_0_4,
  MR_Word * STATE_VARIABLE_ExpectedArities_5);

static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_Word MR_CALL 
check_hlds__inst_check__project_if_several_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__inst_check__project_if_alone_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
check_hlds__inst_check__make_cons_id_component_3_f_0(
  MR_Word TypeCtor_5,
  MR_Word SymName_6,
  MR_Integer Arity_7);

static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
  MR_Word TypeDefnOrBuiltin_3,
  MR_Word * TypeCtor_4);

static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
  MR_Word Ctor_3,
  MR_Word * FunctorNameAndArity_4);

static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0(
  MR_Word WarnInstsWithoutMatchingType_1,
  MR_Word TypeTable_2,
  MR_Word FunctorsToTypeDefns_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0(
  MR_Word WarnInstsWithoutMatchingType_9,
  MR_Word InstCtor_10,
  MR_Word InstDefn_11,
  MR_Word BoundFunctors_12,
  MR_Word PossibleTypes_13,
  MR_Word PossibleTypeSets_14,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
  MR_Word TypeDefnOrBuiltin_3);

static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_7_p_0(
  MR_Word WarnInstsWithoutMatchingType_8,
  MR_Word InstCtor_9,
  MR_Word InstDefn_10,
  MR_Word ForTypeKind_11,
  MR_Word Mismatches0_12,
  MR_Word * IFTC_13,
  MR_Word * Specs_14);

static void MR_CALL 
check_hlds__inst_check__cons_id_strs_and_near_misses_4_p_0(
  MR_Word Color_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
  MR_Word Section_3,
  MR_Word TypeDefn_4);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
  MR_Word InstCtor_6,
  MR_Word InstDefn_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_functors_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeableFunctors_0_3,
  MR_Word * STATE_VARIABLE_TypeableFunctors_4,
  MR_Word STATE_VARIABLE_PossibleTypeSets_0_5,
  MR_Word * STATE_VARIABLE_PossibleTypeSets_6);

static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_functors_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Box MR_CALL 
check_hlds__inst_check__report_near_misses_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__inst_check__report_near_misses_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsId_8,
  MR_Word SymName_9,
  MR_Word CtorArities_10,
  MR_Word STATE_VARIABLE_Mismatches_0_14,
  MR_Word * STATE_VARIABLE_Mismatches_15);

static MR_Box MR_CALL 
check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word ConsId_9,
  MR_Word SymName_10,
  MR_Integer ConsArity_11,
  MR_Word CtorArities_12,
  MR_Word STATE_VARIABLE_Mismatches_0_14,
  MR_Word * STATE_VARIABLE_Mismatches_15);

static MR_Word MR_CALL 
check_hlds__inst_check__simple_miss_1_f_0(
  MR_Word ConsId_3);

static void MR_CALL 
check_hlds__inst_check__find_ctors_with_given_name_3_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_FunctorsToTypesMap_0_2,
  MR_Word * STATE_VARIABLE_FunctorsToTypesMap_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____cons_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____cons_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[78][2];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[18][1];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[6][5];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[2][7];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_6[1][6];


struct check_hlds__inst_check__vector_common_type_7_0_s {
  const MR_String check_hlds__inst_check__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_7_0_s check_hlds__inst_check_vector_common_7[64];



static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[78][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is specified to be for"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not visible here."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that type constructor"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is exported, but the type it is for,"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "outside this module."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not visible"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is declared to be for type"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but that type"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is an equivalence type,"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and thus has no function symbols of its own."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Change the inst definition to refer"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to the type constructor that"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expands to."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but its top level"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of that type."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Maybe you meant"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "For"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: inst"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not match"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "any of the types in scope."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is exported, but the one type it matches"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not visible from"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[21])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is exported, but"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "none of the types it matches"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "visible from"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[21])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function symbol"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has arity"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected arity was"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function symbol is"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "There are"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "equally close matches."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The closest match is"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for which the top level mismatches are the following."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "match is"))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0)),
    ((MR_Box) (&check_hlds__inst_check_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[0])),
    ((MR_Box) (check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1])),
    ((MR_Box) (check_hlds__inst_check__maybe_issue_type_match_error_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1])),
    ((MR_Box) (check_hlds__inst_check__maybe_issue_type_match_error_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[2])),
    ((MR_Box) (check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[4])),
    ((MR_Box) (check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[5])),
    ((MR_Box) (check_hlds__inst_check__find_mismatches_from_user_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[18][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 7U) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row   9 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row  11 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row  12 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[2]))) },
  /* row  13 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  14 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[3]))) },
  /* row  15 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row  16 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[4]))) },
  /* row  17 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_near_miss_cons_mismatch_0)),
    ((MR_Box) (&check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_for_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_for_type_ctor_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_functor_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0))
  },
};


static /* final */ const struct check_hlds__inst_check__vector_common_type_7_0_s check_hlds__inst_check_vector_common_7[64] = {
  /* row   0 */   { NULL },
  /* row   1 */   { (MR_String) "string" },
  /* row   2 */   { NULL },
  /* row   3 */   { (MR_String) "uint32" },
  /* row   4 */   { (MR_String) "character" },
  /* row   5 */   { NULL },
  /* row   6 */   { NULL },
  /* row   7 */   { (MR_String) "int16" },
  /* row   8 */   { (MR_String) "int" },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) "uint8" },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { NULL },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { (MR_String) "uint" },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) "int8" },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { (MR_String) "uint64" },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { (MR_String) "uint16" },
  /* row  34 */   { NULL },
  /* row  35 */   { (MR_String) "float" },
  /* row  36 */   { NULL },
  /* row  37 */   { (MR_String) "int32" },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { NULL },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { NULL },
  /* row  46 */   { NULL },
  /* row  47 */   { NULL },
  /* row  48 */   { (MR_String) "int64" },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { NULL },
  /* row  53 */   { NULL },
  /* row  54 */   { NULL },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { NULL },
  /* row  60 */   { NULL },
  /* row  61 */   { NULL },
  /* row  62 */   { NULL },
  /* row  63 */   { NULL },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0),
    (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_functor_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_cons_mismatch_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_cons_mismatch_0_0[2] = {
  (MR_String) "bad_cons_id",
  (MR_String) "possible_near_miss_cons_ids"
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_cons_mismatch_0_0 = {
  (MR_String) "cons_mismatch",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_check__check_hlds__inst_check__field_types_cons_mismatch_0_0,
  check_hlds__inst_check__check_hlds__inst_check__field_names_cons_mismatch_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_cons_mismatch_0_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_cons_mismatch_0_0 };

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_cons_mismatch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_cons_mismatch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_cons_mismatch_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_cons_mismatch_0_0 };

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_cons_mismatch_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____cons_mismatch_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____cons_mismatch_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "cons_mismatch",
  { check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_cons_mismatch_0 },
  { check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_cons_mismatch_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_cons_mismatch_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0 = {
  (MR_String) "ftk_user",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0)
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1 = {
  (MR_String) "ftk_builtin",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0 };

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1 };

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0[2] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0
};

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_for_type_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____for_type_kind_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____for_type_kind_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "for_type_kind",
  { check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0 },
  { check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0 = {
  (MR_String) "functor_name_and_arity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0 };

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0 };

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "functor_name_and_arity",
  { check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0 },
  { check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0),
    (MR_TypeInfo) (&check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functors_to_types_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "functors_to_types_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3] = {
  (MR_String) "mft_num_mismatches",
  (MR_String) "mft_type",
  (MR_String) "mft_pieces"
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0 = {
  (MR_String) "mismatch_from_type",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0,
  check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0 };

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0 };

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "mismatch_from_type",
  { check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0 },
  { check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_near_miss_cons_mismatch_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_near_miss_cons_mismatch_0_0[2] = {
  (MR_String) "if_only_one_mismatch",
  (MR_String) "if_several_mismatches"
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_near_miss_cons_mismatch_0_0 = {
  (MR_String) "near_miss_cons_mismatch",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_check__check_hlds__inst_check__field_types_near_miss_cons_mismatch_0_0,
  check_hlds__inst_check__check_hlds__inst_check__field_names_near_miss_cons_mismatch_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_near_miss_cons_mismatch_0_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_near_miss_cons_mismatch_0_0 };

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_near_miss_cons_mismatch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_near_miss_cons_mismatch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_near_miss_cons_mismatch_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_near_miss_cons_mismatch_0_0 };

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_near_miss_cons_mismatch_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_near_miss_cons_mismatch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "near_miss_cons_mismatch",
  { check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_near_miss_cons_mismatch_0 },
  { check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_near_miss_cons_mismatch_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_near_miss_cons_mismatch_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0 = {
  (MR_String) "type_ctor_and_defn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0 };

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0 };

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "type_ctor_and_defn",
  { check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0 },
  { check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0,

};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0) };

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0 = {
  (MR_String) "type_user",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0) };

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1 = {
  (MR_String) "type_builtin",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2 = {
  (MR_String) "type_tuple",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0 };

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1 };

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1] = { &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2 };

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0[3] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0
};

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "type_defn_or_builtin",
  { check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0 },
  { check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0,

};

static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0 = {
  (MR_String) "some_untypeable_functors",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1 = {
  (MR_String) "all_typeable_functors",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_ordinal_ordered_typeable_functors_0[2] = {
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0,
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2] = {
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0
};

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_typeable_functors_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_check____Unify____typeable_functors_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____typeable_functors_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "typeable_functors",
  { check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0 },
  { check_hlds__inst_check__check_hlds__inst_check__enum_ordinal_ordered_typeable_functors_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0,

};

static MR_Word MR_CALL 
check_hlds__inst_check__IntroducedFrom__func__record_arity_mismatch__1266__1_1_f_0(
  MR_Integer LambdaHeadVar__1_32)
{
  MR_Word LambdaHeadVar__2_33;

  {
    LambdaHeadVar__2_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, LambdaHeadVar__2_33, 1) = ((MR_Box) (LambdaHeadVar__1_32));
  }
  return LambdaHeadVar__2_33;
}

static MR_bool MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__355__1_2_p_0(
  MR_Word IFTC0_19,
  MR_Word HeadVar__2_79)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_inst_mode____Unify____inst_for_type_ctor_0_0(IFTC0_19, HeadVar__2_79);
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__149__1_4_p_0(
  MR_Word TypeCtorAndDefn_12,
  MR_Word HeadVar__2_19,
  MR_Word HeadVar__3_20,
  MR_Word * HeadVar__4_21)
{
  mercury__multi_map__reverse_set_4_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0), ((MR_Box) (TypeCtorAndDefn_12)), ((MR_Box) (HeadVar__2_19)), HeadVar__3_20, HeadVar__4_21);
}

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
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
check_hlds__inst_check____Unify____typeable_functors_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__inst_check_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

      check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

              check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              parse_tree__prog_data____Compare____builtin_type_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

              succeeded = (ArgX1_8 < ArgY1_9);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_8 > ArgY1_9);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__hlds_data____Compare____hlds_type_defn_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&check_hlds__inst_check_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
            succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_11;

      parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_11, ArgX1_9, ArgY1_10);
      succeeded = (SubResult1_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_11;
      else
        parse_tree__prog_data____Compare____builtin_type_0_0(HeadVar__1_1, ArgX2_12, ArgY2_13);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__hlds_data____Compare____hlds_type_defn_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_8;
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_7, ArgY1_8);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(ArgX2_9, ArgY2_10);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX2_5, ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____cons_mismatch_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    parse_tree__error_spec____Compare____format_piece_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____cons_mismatch_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = parse_tree__error_spec____Unify____format_piece_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__inst_check_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
  MR_Word BoundFunctors_4,
  MR_Word TypeDefnOrBuiltin_5,
  MR_Word * MismatchFromType_6)
{
  MR_Integer NumMismatches_17;
  MR_Word MismatchPiecesCord_18;
  MR_Word MismatchPieces_25;

  switch (MR_tag((MR_Word) TypeDefnOrBuiltin_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorAndDefn_7 = (MR_Word) ((MR_Word) (TypeDefnOrBuiltin_5));
        MR_Word TypeDefn_9 = ((MR_Word) ((MR_hl_field(0, TypeCtorAndDefn_7, (MR_Integer) 1))));
        MR_Word TypeDefnBody_10;

        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeDefnBody_10);
        switch (MR_tag((MR_Word) TypeDefnBody_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeBodyDu_11 = (MR_Word) ((MR_Word) (TypeDefnBody_10));
              MR_Word Constructors_12 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_11, (MR_Integer) 0))));
              MR_Word Var_26;
              MR_Word Var_29;

              Var_26 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Constructors_12);
              Var_29 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
              check_hlds__inst_check__find_mismatches_from_user_7_p_0(Var_26, (MR_Integer) 1, BoundFunctors_4, (MR_Integer) 0, &NumMismatches_17, Var_29, &MismatchPiecesCord_18);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
              return;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BuiltinType_23 = ((MR_Word) ((MR_hl_field(1, TypeDefnOrBuiltin_5, (MR_Integer) 0))));
        MR_Word Var_34;

        Var_34 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
        check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(BuiltinType_23, (MR_Integer) 1, BoundFunctors_4, (MR_Integer) 0, &NumMismatches_17, Var_34, &MismatchPiecesCord_18);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer TupleArity_24 = ((MR_Integer) ((MR_hl_field(2, TypeDefnOrBuiltin_5, (MR_Integer) 0))));
        MR_Word Var_37;

        Var_37 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0));
        check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(TupleArity_24, (MR_Integer) 1, BoundFunctors_4, (MR_Integer) 0, &NumMismatches_17, Var_37, &MismatchPiecesCord_18);
      }
      break;
  }
  MismatchPieces_25 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPiecesCord_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *MismatchFromType_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (NumMismatches_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (TypeDefnOrBuiltin_5));
    MR_hl_field(0, base, 2) = ((MR_Box) (MismatchPieces_25));
  }
}

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * STATE_VARIABLE_NumMismatches_5,
  MR_Word STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * STATE_VARIABLE_PiecesCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PiecesCord_7 = STATE_VARIABLE_PiecesCord_0_6;
      *STATE_VARIABLE_NumMismatches_5 = STATE_VARIABLE_NumMismatches_0_4;
    }
    else
    {
      MR_Word BoundFunctor_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundFunctors_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_18, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_NumMismatches_29_29;
      MR_Word STATE_VARIABLE_PiecesCord_30_30;
      MR_Integer Var_33;
      MR_Integer ActualArity_24;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_NumMismatches_0_4;
      MR_Word next_value_of_STATE_VARIABLE_PiecesCord_0_6;

      succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        ActualArity_24 = ((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 1))));
        succeeded = (ActualArity_24 == HeadVar__1_1);
        if (succeeded)
        {
          STATE_VARIABLE_PiecesCord_30_30 = STATE_VARIABLE_PiecesCord_0_6;
          STATE_VARIABLE_NumMismatches_29_29 = STATE_VARIABLE_NumMismatches_0_4;
        }
        else
          check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundFunctor_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_29_29, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_30_30);
      }
      else
        check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundFunctor_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_29_29, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_30_30);
      Var_33 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_33;
      next_value_of_HeadVar__3_3 = BoundFunctors_19;
      next_value_of_STATE_VARIABLE_NumMismatches_0_4 = STATE_VARIABLE_NumMismatches_29_29;
      next_value_of_STATE_VARIABLE_PiecesCord_0_6 = STATE_VARIABLE_PiecesCord_30_30;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_NumMismatches_0_4 = next_value_of_STATE_VARIABLE_NumMismatches_0_4;
      STATE_VARIABLE_PiecesCord_0_6 = next_value_of_STATE_VARIABLE_PiecesCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * STATE_VARIABLE_NumMismatches_5,
  MR_Word STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * STATE_VARIABLE_PiecesCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PiecesCord_7 = STATE_VARIABLE_PiecesCord_0_6;
      *STATE_VARIABLE_NumMismatches_5 = STATE_VARIABLE_NumMismatches_0_4;
    }
    else
    {
      MR_Word BoundFunctor_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundFunctors_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_18, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_NumMismatches_36_36;
      MR_Word STATE_VARIABLE_PiecesCord_37_37;
      MR_Integer Var_47;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_NumMismatches_0_4;
      MR_Word next_value_of_STATE_VARIABLE_PiecesCord_0_6;

      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  STATE_VARIABLE_PiecesCord_37_37 = STATE_VARIABLE_PiecesCord_0_6;
                  STATE_VARIABLE_NumMismatches_36_36 = STATE_VARIABLE_NumMismatches_0_4;
                }
                else
                  check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundFunctor_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_36_36, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_37_37);
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
                if (succeeded)
                {
                  STATE_VARIABLE_PiecesCord_37_37 = STATE_VARIABLE_PiecesCord_0_6;
                  STATE_VARIABLE_NumMismatches_36_36 = STATE_VARIABLE_NumMismatches_0_4;
                }
                else
                  check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundFunctor_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_36_36, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_37_37);
              }
              break;
            case (MR_Integer) 2:
              {
                succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  STATE_VARIABLE_PiecesCord_37_37 = STATE_VARIABLE_PiecesCord_0_6;
                  STATE_VARIABLE_NumMismatches_36_36 = STATE_VARIABLE_NumMismatches_0_4;
                }
                else
                {
                  MR_Word SymName_28;
                  MR_Integer ConsArity_29;
                  MR_Word Var_40;
                  MR_Integer Var_41;
                  MR_String Var_42;

                  succeeded = ((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_40 = (MR_Word) (MR_body((MR_Word) (ConsId_22), (MR_Integer) 1));
                    SymName_28 = ((MR_Word) ((MR_hl_field(0, Var_40, (MR_Integer) 0))));
                    ConsArity_29 = ((MR_Integer) ((MR_hl_field(0, Var_40, (MR_Integer) 1))));
                    Var_42 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_28);
                    Var_41 = mercury__string__count_code_points_1_f_0(Var_42);
                    succeeded = (Var_41 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = (ConsArity_29 == (MR_Integer) 0);
                  }
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_37_37 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_36_36 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundFunctor_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_36_36, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_37_37);
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntType_24 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
            MR_Word IntConst_25;
            MR_Word Var_51;

            succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (succeeded)
            {
              IntConst_25 = ((MR_Word) ((MR_hl_field(3, ConsId_22, (MR_Integer) 1))));
              Var_51 = parse_tree__prog_data__type_of_int_const_1_f_0(IntConst_25);
              succeeded = (IntType_24 == Var_51);
            }
            if (succeeded)
            {
              STATE_VARIABLE_PiecesCord_37_37 = STATE_VARIABLE_PiecesCord_0_6;
              STATE_VARIABLE_NumMismatches_36_36 = STATE_VARIABLE_NumMismatches_0_4;
            }
            else
              check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundFunctor_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_36_36, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_37_37);
          }
          break;
      }
      Var_47 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_47;
      next_value_of_HeadVar__3_3 = BoundFunctors_19;
      next_value_of_STATE_VARIABLE_NumMismatches_0_4 = STATE_VARIABLE_NumMismatches_36_36;
      next_value_of_STATE_VARIABLE_PiecesCord_0_6 = STATE_VARIABLE_PiecesCord_37_37;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_NumMismatches_0_4 = next_value_of_STATE_VARIABLE_NumMismatches_0_4;
      STATE_VARIABLE_PiecesCord_0_6 = next_value_of_STATE_VARIABLE_PiecesCord_0_6;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_33;

  conv0_LambdaHeadVar__2_33 = check_hlds__inst_check__IntroducedFrom__func__record_arity_mismatch__1266__1_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_33));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * STATE_VARIABLE_NumMismatches_5,
  MR_Word STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * STATE_VARIABLE_PiecesCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PiecesCord_7 = STATE_VARIABLE_PiecesCord_0_6;
      *STATE_VARIABLE_NumMismatches_5 = STATE_VARIABLE_NumMismatches_0_4;
    }
    else
    {
      MR_Word BoundFunctor_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundFunctors_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_18, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_NumMismatches_35_35;
      MR_Word STATE_VARIABLE_PiecesCord_36_36;
      MR_Integer Var_41;
      MR_Word SymName_24;
      MR_Integer Arity_25;
      MR_Word Var_33;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_NumMismatches_0_4;
      MR_Word next_value_of_STATE_VARIABLE_PiecesCord_0_6;

      succeeded = ((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_33 = (MR_Word) (MR_body((MR_Word) (ConsId_22), (MR_Integer) 1));
        SymName_24 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
        Arity_25 = ((MR_Integer) ((MR_hl_field(0, Var_33, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String FunctorName_27;

        FunctorName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_24);
        succeeded = check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(HeadVar__1_1, FunctorName_27, Arity_25);
        if (succeeded)
        {
          STATE_VARIABLE_PiecesCord_36_36 = STATE_VARIABLE_PiecesCord_0_6;
          STATE_VARIABLE_NumMismatches_35_35 = STATE_VARIABLE_NumMismatches_0_4;
        }
        else
        {
          MR_Word ExpectedArities_28;
          MR_Word Var_34;

          Var_34 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
          check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(HeadVar__1_1, FunctorName_27, Arity_25, Var_34, &ExpectedArities_28);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ExpectedArities_28);
          if (succeeded)
            check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundFunctor_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_35_35, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_36_36);
          else
          {
            MR_String InFunctorStr_46;
            MR_Word ExpectedArityPieces_47;
            MR_Word ExpectedArities_48;
            MR_Word ExpectedAritiesPieces_49;
            MR_Word Pieces_50;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_71;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_78;
            MR_String Var_82;
            MR_String Var_84;

            STATE_VARIABLE_NumMismatches_35_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumMismatches_0_4 + (MR_Unsigned) 1);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_3[17]), HeadVar__2_2, &Var_82);
            Var_84 = mercury__string__f_43_43_2_f_0(Var_82, (MR_String) ":");
            InFunctorStr_46 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", Var_84);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ExpectedArities_28, &ExpectedArities_48);
            ExpectedArityPieces_47 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&check_hlds__inst_check_scalar_common_2[6]), ExpectedArities_48);
            ExpectedAritiesPieces_49 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "or", (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[41])), ExpectedArityPieces_47);
            {
              Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_57, 1) = ((MR_Box) (InFunctorStr_46));
            }
            {
              Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
              MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[63])));
            }
            {
              Var_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_62, 0) = ((MR_Box) (FunctorName_27));
            }
            {
              Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
              MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_60 = parse_tree__error_spec__color_as_subject_1_f_0(Var_61);
            {
              Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_69, 1) = ((MR_Box) (Arity_25));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[10])));
            }
            {
              Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[64])));
              MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_68));
            }
            Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_66);
            {
              Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[65])));
              MR_hl_field(1, Var_75, 1) = ((MR_Box) (ExpectedAritiesPieces_49));
            }
            Var_74 = parse_tree__error_spec__color_as_correct_1_f_0(Var_75);
            Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])));
            Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])), Var_73);
            Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_71);
            Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_64);
            Pieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_59);
            Var_78 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces_50);
            STATE_VARIABLE_PiecesCord_36_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_PiecesCord_0_6, Var_78);
          }
        }
      }
      else
        check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundFunctor_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_35_35, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_36_36);
      Var_41 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_41;
      next_value_of_HeadVar__3_3 = BoundFunctors_19;
      next_value_of_STATE_VARIABLE_NumMismatches_0_4 = STATE_VARIABLE_NumMismatches_35_35;
      next_value_of_STATE_VARIABLE_PiecesCord_0_6 = STATE_VARIABLE_PiecesCord_36_36;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_NumMismatches_0_4 = next_value_of_STATE_VARIABLE_NumMismatches_0_4;
      STATE_VARIABLE_PiecesCord_0_6 = next_value_of_STATE_VARIABLE_PiecesCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
  MR_Integer CurNum_7,
  MR_Word BoundFunctor_8,
  MR_Integer STATE_VARIABLE_NumMismatches_0_18,
  MR_Integer * STATE_VARIABLE_NumMismatches_19,
  MR_Word STATE_VARIABLE_PiecesCord_0_20,
  MR_Word * STATE_VARIABLE_PiecesCord_21)
{
  MR_Word ConsId_11;
  MR_Word SubInsts_12;
  MR_String ConsIdStr_13;
  MR_Integer NumSubInsts_14;
  MR_String InFunctorStr_15;
  MR_String ActualStr_16;
  MR_Word Pieces_17;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_53;
  MR_String Var_57;
  MR_String Var_64;
  MR_String Var_67;
  MR_String Var_74;
  MR_String Var_76;

  *STATE_VARIABLE_NumMismatches_19 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumMismatches_0_18 + (MR_Unsigned) 1);
  ConsId_11 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, (MR_Integer) 0))));
  SubInsts_12 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_8, (MR_Integer) 1))));
  ConsIdStr_13 = parse_tree__parse_tree_out_cons_id__mercury_cons_id_to_string_3_f_0((MR_Integer) 0, (MR_Integer) 1, ConsId_11);
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), SubInsts_12, &NumSubInsts_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_3[17]), CurNum_7, &Var_57);
  Var_64 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) ":");
  InFunctorStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", Var_64);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_3[17]), NumSubInsts_14, &Var_67);
  Var_74 = mercury__string__f_43_43_2_f_0(Var_67, (MR_String) ".");
  Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_74);
  ActualStr_16 = mercury__string__f_43_43_2_f_0(ConsIdStr_13, Var_76);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (InFunctorStr_15));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[68])));
  }
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (ActualStr_16));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_46);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])));
  Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_44);
  Var_53 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces_17);
  *STATE_VARIABLE_PiecesCord_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), STATE_VARIABLE_PiecesCord_0_20, Var_53);
}

static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word STATE_VARIABLE_ExpectedArities_0_4,
  MR_Word * STATE_VARIABLE_ExpectedArities_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ExpectedArities_5 = STATE_VARIABLE_ExpectedArities_0_4;
    else
    {
      MR_Word Ctor_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ConsName_18 = ((MR_Word) ((MR_hl_field(0, Ctor_11, (MR_Integer) 2))));
      MR_Integer ConsArity_20 = ((MR_Integer) ((MR_hl_field(0, Ctor_11, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_ExpectedArities_24_24;
      MR_String Var_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ExpectedArities_0_4;

      Var_26 = mdbcomp__sym_name__unqualify_name_1_f_0(ConsName_18);
      succeeded = (strcmp(HeadVar__2_2, Var_26) == 0);
      if (succeeded)
        succeeded = (ConsArity_20 != HeadVar__3_3);
      if (succeeded)
        mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ConsArity_20)), STATE_VARIABLE_ExpectedArities_0_4, &STATE_VARIABLE_ExpectedArities_24_24);
      else
        STATE_VARIABLE_ExpectedArities_24_24 = STATE_VARIABLE_ExpectedArities_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ctors_12;
      next_value_of_STATE_VARIABLE_ExpectedArities_0_4 = STATE_VARIABLE_ExpectedArities_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ExpectedArities_0_4 = next_value_of_STATE_VARIABLE_ExpectedArities_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Ctor_6;
    MR_Word Ctors_7;
    MR_Word ConsName_12;
    MR_Integer ConsArity_14;
    MR_String Var_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Ctor_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Ctors_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      ConsName_12 = ((MR_Word) ((MR_hl_field(0, Ctor_6, (MR_Integer) 2))));
      ConsArity_14 = ((MR_Integer) ((MR_hl_field(0, Ctor_6, (MR_Integer) 4))));
      Var_16 = mdbcomp__sym_name__unqualify_name_1_f_0(ConsName_12);
      succeeded = (strcmp(HeadVar__2_2, Var_16) == 0);
      if (succeeded)
        succeeded = (ConsArity_14 == HeadVar__3_3);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Ctors_7;

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

static MR_Word MR_CALL 
check_hlds__inst_check__project_if_several_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word IfSeveral_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return IfSeveral_4;
}

static MR_Word MR_CALL 
check_hlds__inst_check__project_if_alone_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word IfAlone_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  return IfAlone_3;
}

static MR_Word MR_CALL 
check_hlds__inst_check__make_cons_id_component_3_f_0(
  MR_Word TypeCtor_5,
  MR_Word SymName_6,
  MR_Integer Arity_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (SymName_6));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (Arity_7));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) (TypeCtor_5));
  }
  Var_8 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_9)));
  {
    HeadVar__4_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 25U));
    MR_hl_field(3, HeadVar__4_4, 1) = ((MR_Box) (Var_8));
  }
  return HeadVar__4_4;
}

static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
  MR_Word TypeDefnOrBuiltin_3,
  MR_Word * TypeCtor_4)
{
  switch (MR_tag((MR_Word) TypeDefnOrBuiltin_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_9 = (MR_Word) ((MR_Word) (TypeDefnOrBuiltin_3));

        *TypeCtor_4 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BuiltinType_6 = ((MR_Word) ((MR_hl_field(1, TypeDefnOrBuiltin_3, (MR_Integer) 0))));
        MR_String TypeCtorName_7;
        MR_Word Var_10;

        parse_tree__prog_data__builtin_type_name_2_p_0(BuiltinType_6, &TypeCtorName_7);
        {
          Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_10, 0) = ((MR_Box) (TypeCtorName_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *TypeCtor_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Integer) 0));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(2, TypeDefnOrBuiltin_3, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *TypeCtor_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_3[10]));
          MR_hl_field(0, base, 1) = ((MR_Box) (Arity_8));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
  MR_Word Ctor_3,
  MR_Word * FunctorNameAndArity_4)
{
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(0, Ctor_3, (MR_Integer) 2))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, Ctor_3, (MR_Integer) 4))));
  MR_String Var_11;

  Var_11 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *FunctorNameAndArity_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Arity_9));
  }
}

void MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_5_p_0(
  MR_Word WarnInstsWithoutMatchingType_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_Word InstTable0_9;
  MR_Word UserInstTable0_10;
  MR_Word InstCtorDefnPairs0_11;
  MR_Word TypeTable_12;
  MR_Word TypeCtorsDefns_13;
  MR_Word FunctorsToTypeDefns_14;
  MR_Word InstCtorDefnPairs_15;
  MR_Word UserInstTable_16;
  MR_Word InstTable_17;
  MR_Word Var_22;

  hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_18, &InstTable0_9);
  hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable0_9, &UserInstTable0_10);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable0_10, &InstCtorDefnPairs0_11);
  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_18, &TypeTable_12);
  hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_12, &TypeCtorsDefns_13);
  Var_22 = mercury__multi_map__init_0_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0));
  check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(TypeCtorsDefns_13, Var_22, &FunctorsToTypeDefns_14);
  check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0(WarnInstsWithoutMatchingType_6, TypeTable_12, FunctorsToTypeDefns_14, InstCtorDefnPairs0_11, &InstCtorDefnPairs_15, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), InstCtorDefnPairs_15, &UserInstTable_16);
  hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(UserInstTable_16, InstTable0_9, &InstTable_17);
  hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_17, STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19);
}

static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_TypeCtor_4;

  check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TypeCtor_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_TypeCtor_4));
}

static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__355__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0(
  MR_Word WarnInstsWithoutMatchingType_1,
  MR_Word TypeTable_2,
  MR_Word FunctorsToTypeDefns_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
  }
  else
  {
    MR_Word InstCtorDefnPair0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word InstCtorDefnPairs0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word InstCtorDefnPair_19;
    MR_Word InstCtorDefnPairs_20;
    MR_Word InstCtor_22 = ((MR_Word) ((MR_hl_field(0, InstCtorDefnPair0_17, (MR_Integer) 0))));
    MR_Word InstDefn0_23 = ((MR_Word) ((MR_hl_field(0, InstCtorDefnPair0_17, (MR_Integer) 1))));
    MR_Word InstDefn_24;
    MR_Word STATE_VARIABLE_Specs_27_27;
    MR_Word InstVarSet_28 = ((MR_Word) ((MR_hl_field(0, InstDefn0_23, (MR_Integer) 0))));
    MR_Word InstParams_29 = ((MR_Word) ((MR_hl_field(0, InstDefn0_23, (MR_Integer) 1))));
    MR_Word InstBody_30 = ((MR_Word) ((MR_hl_field(0, InstDefn0_23, (MR_Integer) 2))));
    MR_Word IFTC0_31 = ((MR_Word) ((MR_hl_field(0, InstDefn0_23, (MR_Integer) 3))));
    MR_Word Context_32 = ((MR_Word) ((MR_hl_field(0, InstDefn0_23, (MR_Integer) 4))));
    MR_Word Status_33 = ((MR_Word) ((MR_hl_field(0, InstDefn0_23, (MR_Integer) 5))));
    MR_Word Inst_34 = (MR_Word) (InstBody_30);

    switch (MR_tag((MR_Word) Inst_34)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          MR_Word Var_70;

          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[3]));
            MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0_1));
            MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_70, 3) = ((MR_Box) (IFTC0_31));
            MR_hl_field(0, Var_70, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/8", (MR_String) "not bound, IFTC0 != iftc_not_bound_inst");
          InstDefn_24 = InstDefn0_23;
          STATE_VARIABLE_Specs_27_27 = STATE_VARIABLE_Specs_0_6;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundFunctors_37 = ((MR_Word) ((MR_hl_field(2, Inst_34, (MR_Integer) 2))));

          switch (MR_tag((MR_Word) IFTC0_31)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(IFTC0_31)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/8", (MR_String) "bound, IFTC0 = iftc_not_bound_inst");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeableFunctors_50;
                    MR_Word PossibleTypeSets_51;

                    check_hlds__inst_check__get_possible_types_for_bound_functors_6_p_0(FunctorsToTypeDefns_3, BoundFunctors_37, (MR_Integer) 1, &TypeableFunctors_50, (MR_Word) ((MR_Unsigned) 0U), &PossibleTypeSets_51);
                    switch (TypeableFunctors_50) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word PossibleTypesSet_52;
                          MR_Word PossibleTypes_53;
                          MR_Word PossibleTypeCtors_54;
                          MR_Word IFTC_76;

                          PossibleTypesSet_52 = mercury__set__intersect_list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), PossibleTypeSets_51);
                          PossibleTypes_53 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), PossibleTypesSet_52);
                          check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0(WarnInstsWithoutMatchingType_1, InstCtor_22, InstDefn0_23, BoundFunctors_37, PossibleTypes_53, PossibleTypeSets_51, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_27_27);
                          mercury__list__map_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__inst_check_scalar_common_2[5]), PossibleTypes_53, &PossibleTypeCtors_54);
                          {
                            IFTC_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, IFTC_76, 0) = ((MR_Box) (PossibleTypeCtors_54));
                          }
                          {
                            InstDefn_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, InstDefn_24, 0) = ((MR_Box) (InstVarSet_28));
                            MR_hl_field(0, InstDefn_24, 1) = ((MR_Box) (InstParams_29));
                            MR_hl_field(0, InstDefn_24, 2) = ((MR_Box) (InstBody_30));
                            MR_hl_field(0, InstDefn_24, 3) = ((MR_Box) (IFTC_76));
                            MR_hl_field(0, InstDefn_24, 4) = ((MR_Box) (Context_32));
                            MR_hl_field(0, InstDefn_24, 5) = ((MR_Box) (Status_33));
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          InstDefn_24 = InstDefn0_23;
                          STATE_VARIABLE_Specs_27_27 = STATE_VARIABLE_Specs_0_6;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/8", (MR_String) "bound, IFTC0 = iftc_applicable_error_X");
                    return;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForTypeCtor0_38 = ((MR_Word) ((MR_hl_field(1, IFTC0_31, (MR_Integer) 0))));
                MR_Word ForTypeCtorSymName_39 = ((MR_Word) ((MR_hl_field(0, ForTypeCtor0_38, (MR_Integer) 0))));
                MR_Integer ForTypeCtorArity_40 = ((MR_Integer) ((MR_hl_field(0, ForTypeCtor0_38, (MR_Integer) 1))));
                MR_Word IFTC_45;
                MR_Word ForTypeKind0_42;
                MR_String ForTypeCtorName_41;
                MR_Word ForTypeCtor_81;
                MR_Word BuiltinType_82;
                MR_Integer slot_0;
                MR_String str_1;

                succeeded = (ForTypeCtorArity_40 == (MR_Integer) 0);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ForTypeCtorSymName_39)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    ForTypeCtorName_41 = ((MR_String) ((MR_hl_field(0, ForTypeCtorSymName_39, (MR_Integer) 0))));
                    // hashed string jump switch
                    ;
                    // compute the hash value of the input string
                    ;
                    slot_0 = ((MR_hash_string6(ForTypeCtorName_41)) & (MR_Integer) 63);
                    // no collisions; no hash chain loop
                    ;
                    // lookup the string for this hash slot
                    ;
                    str_1 = ((&check_hlds__inst_check_vector_common_7[0 + slot_0]))->check_hlds__inst_check__vector_common_type_7_0__vct_7_f_0;
                    // did we find a match?
                    ;
                    if ((((str_1 != NULL)) && ((strcmp(str_1, ForTypeCtorName_41) == 0))))
                    {
                      // we found a match; dispatch to the corresponding code
                      ;
                      switch (slot_0) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            // case "string"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__string_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) ((MR_Unsigned) 4U);
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            // case "uint32"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__uint32_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[7]));
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            // case "character"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) ((MR_Unsigned) 8U);
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 7:
                          {
                            // case "int16"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__int16_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[1]));
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 8:
                          {
                            // case "int"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__int_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[0]));
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 13:
                          {
                            // case "uint8"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__uint8_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[9]));
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 20:
                          {
                            // case "uint"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__uint_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[5]));
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 23:
                          {
                            // case "int8"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__int8_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[4]));
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 28:
                          {
                            // case "uint64"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__uint64_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[8]));
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 33:
                          {
                            // case "uint16"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__uint16_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[6]));
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 35:
                          {
                            // case "float"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) ((MR_Unsigned) 0U);
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 37:
                          {
                            // case "int32"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__int32_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[2]));
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 48:
                          {
                            // case "int64"
                            ;
                            ForTypeCtor_81 = parse_tree__builtin_lib_types__int64_type_ctor_0_f_0();
                            BuiltinType_82 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[3]));
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      // jump out of search loop
                      ;
                      goto label_0;
                    }
                    succeeded = MR_FALSE;
                  label_0:;
                    if (succeeded)
                    {
                      {
                        ForTypeKind0_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, ForTypeKind0_42, 0) = ((MR_Box) (ForTypeCtor_81));
                        MR_hl_field(1, ForTypeKind0_42, 1) = ((MR_Box) (BuiltinType_82));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word MismatchesCord_47;
                  MR_Word Mismatches_48;
                  MR_Word MatchSpecs_49;
                  MR_Word Var_60;

                  Var_60 = mercury__cord__init_0_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0));
                  check_hlds__inst_check__check_for_type_bound_functors_4_p_0(ForTypeKind0_42, BoundFunctors_37, Var_60, &MismatchesCord_47);
                  Mismatches_48 = mercury__cord__list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), MismatchesCord_47);
                  check_hlds__inst_check__maybe_issue_type_match_error_7_p_0(WarnInstsWithoutMatchingType_1, InstCtor_22, InstDefn0_23, ForTypeKind0_42, Mismatches_48, &IFTC_45, &MatchSpecs_49);
                  STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), MatchSpecs_49, STATE_VARIABLE_Specs_0_6);
                }
                else
                {
                  MR_Word Var_55;
                  MR_String Var_56;
                  MR_String Var_57;

                  succeeded = (ForTypeCtorArity_40 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) ForTypeCtorSymName_39)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_55 = ((MR_Word) ((MR_hl_field(1, ForTypeCtorSymName_39, (MR_Integer) 0))));
                      Var_57 = ((MR_String) ((MR_hl_field(1, ForTypeCtorSymName_39, (MR_Integer) 1))));
                      succeeded = (strcmp(Var_57, (MR_String) "char") == 0);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Var_56 = ((MR_String) ((MR_hl_field(0, Var_55, (MR_Integer) 0))));
                          succeeded = (strcmp(Var_56, (MR_String) "char") == 0);
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_58;
                    MR_Word ForTypeKind_93;
                    MR_Word MismatchesCord_94;
                    MR_Word Mismatches_95;
                    MR_Word MatchSpecs_96;
                    MR_Word Var_97;

                    Var_58 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
                    {
                      ForTypeKind_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ForTypeKind_93, 0) = ((MR_Box) (Var_58));
                      MR_hl_field(1, ForTypeKind_93, 1) = ((MR_Box) ((MR_Unsigned) 8U));
                    }
                    Var_97 = mercury__cord__init_0_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0));
                    check_hlds__inst_check__check_for_type_bound_functors_4_p_0(ForTypeKind_93, BoundFunctors_37, Var_97, &MismatchesCord_94);
                    Mismatches_95 = mercury__cord__list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), MismatchesCord_94);
                    check_hlds__inst_check__maybe_issue_type_match_error_7_p_0(WarnInstsWithoutMatchingType_1, InstCtor_22, InstDefn0_23, ForTypeKind_93, Mismatches_95, &IFTC_45, &MatchSpecs_96);
                    STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), MatchSpecs_96, STATE_VARIABLE_Specs_0_6);
                  }
                  else
                  {
                    MR_Word ForTypeDefn_44;

                    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_2, ForTypeCtor0_38, &ForTypeDefn_44);
                    if (succeeded)
                    {
                      MR_Word ForTypeKind_115;
                      MR_Word MismatchesCord_116;
                      MR_Word Mismatches_117;
                      MR_Word MatchSpecs_118;
                      MR_Word Var_119;

                      {
                        ForTypeKind_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, ForTypeKind_115, 0) = ((MR_Box) (ForTypeCtor0_38));
                        MR_hl_field(0, ForTypeKind_115, 1) = ((MR_Box) (ForTypeDefn_44));
                      }
                      Var_119 = mercury__cord__init_0_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0));
                      check_hlds__inst_check__check_for_type_bound_functors_4_p_0(ForTypeKind_115, BoundFunctors_37, Var_119, &MismatchesCord_116);
                      Mismatches_117 = mercury__cord__list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), MismatchesCord_116);
                      check_hlds__inst_check__maybe_issue_type_match_error_7_p_0(WarnInstsWithoutMatchingType_1, InstCtor_22, InstDefn0_23, ForTypeKind_115, Mismatches_117, &IFTC_45, &MatchSpecs_118);
                      STATE_VARIABLE_Specs_27_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), MatchSpecs_118, STATE_VARIABLE_Specs_0_6);
                    }
                    else
                    {
                      check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(InstCtor_22, InstDefn0_23, ForTypeCtor0_38, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_27_27);
                      IFTC_45 = (MR_Word) ((MR_Unsigned) 8U);
                    }
                  }
                }
                {
                  InstDefn_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, InstDefn_24, 0) = ((MR_Box) (InstVarSet_28));
                  MR_hl_field(0, InstDefn_24, 1) = ((MR_Box) (InstParams_29));
                  MR_hl_field(0, InstDefn_24, 2) = ((MR_Box) (InstBody_30));
                  MR_hl_field(0, InstDefn_24, 3) = ((MR_Box) (IFTC_45));
                  MR_hl_field(0, InstDefn_24, 4) = ((MR_Box) (Context_32));
                  MR_hl_field(0, InstDefn_24, 5) = ((MR_Box) (Status_33));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/8", (MR_String) "bound, IFTC0 = iftc_applicable_known");
                return;
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/8", (MR_String) "bound, IFTC0 = iftc_applicable_error_X");
                return;
              }
              break;
          }
        }
        break;
    }
    {
      InstCtorDefnPair_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, InstCtorDefnPair_19, 0) = ((MR_Box) (InstCtor_22));
      MR_hl_field(0, InstCtorDefnPair_19, 1) = ((MR_Box) (InstDefn_24));
    }
    check_hlds__inst_check__check_inst_defns_have_matching_types_7_p_0(WarnInstsWithoutMatchingType_1, TypeTable_2, FunctorsToTypeDefns_3, InstCtorDefnPairs0_18, &InstCtorDefnPairs_20, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InstCtorDefnPair_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (InstCtorDefnPairs_20));
    }
  }
}

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_Str_4;

  conv2_Str_4 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_Str_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MismatchFromType_6;

  check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MismatchFromType_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MismatchFromType_6));
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s * env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s * env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__Type_158 = ((MR_Word) ((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__conv1_Type_158));
  check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_3(env_ptr);
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s * env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s *) (env_ptr_arg);

  switch (MR_tag((MR_Word) (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__Type_158)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtorAndDefn_31 = (MR_Word) ((MR_Word) ((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__Type_158));
        MR_Word TypeDefn_33 = ((MR_Word) ((MR_hl_field(0, TypeCtorAndDefn_31, (MR_Integer) 1))));
        MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, TypeCtorAndDefn_31, (MR_Integer) 0))));

        (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0((MR_Integer) 0, TypeDefn_33);
      }
      break;
    case (MR_Integer) 1:
      (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded = MR_TRUE;
      break;
  }
  if ((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded)
    check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_2(env_ptr);
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s * env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), &(env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__conv1_Type_158, (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__PossibleTypes_13, check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_4, env_ptr);
      (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0(
  MR_Word WarnInstsWithoutMatchingType_9,
  MR_Word InstCtor_10,
  MR_Word InstDefn_11,
  MR_Word BoundFunctors_12,
  MR_Word PossibleTypes_13,
  MR_Word PossibleTypeSets_14,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0_s env;

  (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__PossibleTypes_13 = PossibleTypes_13;
  {
    MR_Word InstStatus_16 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 5))));
    MR_Word DefinedInThisModule_17;
    MR_Word Var_162 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 0))));
    MR_Word Var_163 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 1))));
    MR_Word Var_164 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 2))));
    MR_Word Var_165 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 3))));
    MR_Word Var_166 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 4))));

    DefinedInThisModule_17 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_16);
    (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded = (WarnInstsWithoutMatchingType_9 == (MR_Integer) 1);
    if ((env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded)
      (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded = (DefinedInThisModule_17 == (MR_Integer) 1);
    if ((env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded)
      if (((env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__PossibleTypes_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 4))));
        MR_Word NoMatchPieces_19;
        MR_Word AllPossibleTypesSet_20;
        MR_Word AllPossibleTypes_21;
        MR_Word MismatchesFromPossibleTypes_22;
        MR_Word SortedMismatchesFromPossibleTypes_23;
        MR_Word MismatchPieces_24;
        MR_Word Pieces_25;
        MR_Word Spec_26;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_68;
        MR_Word Var_167 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 0))));
        MR_Word Var_168 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 1))));
        MR_Word Var_169 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 2))));
        MR_Word Var_170 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 3))));
        MR_Word Var_171 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 5))));

        {
          Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(3, Var_54, 1) = ((MR_Box) (InstCtor_10));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_52 = parse_tree__error_spec__color_as_subject_1_f_0(Var_53);
        Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[46])));
        Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[48])));
        Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_56);
        NoMatchPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[44])), Var_51);
        AllPossibleTypesSet_20 = mercury__set__union_list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), PossibleTypeSets_14);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), AllPossibleTypesSet_20, &AllPossibleTypes_21);
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_68, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_6[0]));
          MR_hl_field(0, Var_68, 1) = ((MR_Box) (check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_1));
          MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_68, 3) = ((MR_Box) (BoundFunctors_12));
        }
        mercury__list__map_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0), Var_68, AllPossibleTypes_21, &MismatchesFromPossibleTypes_22);
        mercury__list__sort_2_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0), MismatchesFromPossibleTypes_22, &SortedMismatchesFromPossibleTypes_23);
        check_hlds__inst_check__create_mismatch_pieces_2_p_0(SortedMismatchesFromPossibleTypes_23, &MismatchPieces_24);
        Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NoMatchPieces_19, MismatchPieces_24);
        {
          Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.inst_check.maybe_issue_no_matching_types_warning\'/8"));
          MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 56U));
          MR_hl_field(0, Spec_26, 3) = ((MR_Box) (Context_18));
          MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_46 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
        }
      }
      else
      {
        MR_Word InstIsExported_29;

        InstIsExported_29 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(InstStatus_16);
        switch (InstIsExported_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_5(&env);
            break;
        }
        if ((env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__succeeded)
          *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
        else
        {
          MR_Word Context_159 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 4))));
          MR_Word Pieces_160;
          MR_Word Spec_161;
          MR_Word Var_189 = ((MR_Word) ((MR_hl_field(1, (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__PossibleTypes_13, (MR_Integer) 1))));
          MR_Word Var_190 = ((MR_Word) ((MR_hl_field(1, (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__PossibleTypes_13, (MR_Integer) 0))));
          MR_Word Var_172 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 0))));
          MR_Word Var_173 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 1))));
          MR_Word Var_174 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 2))));
          MR_Word Var_175 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 3))));
          MR_Word Var_176 = ((MR_Word) ((MR_hl_field(0, InstDefn_11, (MR_Integer) 5))));

          if ((Var_189 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String OnePossibleTypeStr0_37;
            MR_String OnePossibleTypeStr_38;
            MR_String Var_76;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_87;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_97;
            MR_Word Var_102;
            MR_Word Var_103;

            OnePossibleTypeStr0_37 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(Var_190);
            Var_76 = mercury__string__f_43_43_2_f_0(OnePossibleTypeStr0_37, (MR_String) ")");
            OnePossibleTypeStr_38 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_76);
            {
              Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, Var_85, 1) = ((MR_Box) (InstCtor_10));
            }
            {
              Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
              MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_83 = parse_tree__error_spec__color_as_subject_1_f_0(Var_84);
            {
              Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_95, 1) = ((MR_Box) (OnePossibleTypeStr_38));
            }
            {
              Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
              MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_93 = parse_tree__error_spec__color_as_subject_1_f_0(Var_94);
            Var_103 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[54])));
            Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])));
            Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[52])), Var_102);
            Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_97);
            Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[50])), Var_92);
            Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_87);
            Pieces_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[44])), Var_82);
          }
          else
          {
            MR_Word PossibleTypeStrs_42;
            MR_String PossibleTypesStr0_43;
            MR_String PossibleTypesStr_44;
            MR_String Var_118;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Word Var_133;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Var_142;
            MR_Word Var_143;

            PossibleTypeStrs_42 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__inst_check_scalar_common_2[4]), (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_8_p_0_env_0__PossibleTypes_13);
            PossibleTypesStr0_43 = mercury__string__join_list_2_f_0((MR_String) ", ", PossibleTypeStrs_42);
            Var_118 = mercury__string__f_43_43_2_f_0(PossibleTypesStr0_43, (MR_String) ")");
            PossibleTypesStr_44 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_118);
            {
              Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_127, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, Var_127, 1) = ((MR_Box) (InstCtor_10));
            }
            {
              Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_126, 0) = ((MR_Box) (Var_127));
              MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_125 = parse_tree__error_spec__color_as_subject_1_f_0(Var_126);
            {
              Var_137 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_137, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Var_137, 1) = ((MR_Box) (PossibleTypesStr_44));
            }
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_137));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[58])));
            }
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[56])));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
            }
            {
              Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[55])));
              MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
            }
            Var_143 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[60])));
            Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])));
            Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, Var_142);
            Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, Var_129);
            Pieces_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[44])), Var_124);
          }
          {
            Spec_161 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_161, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.inst_check.maybe_issue_no_matching_types_warning\'/8"));
            MR_hl_field(0, Spec_161, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(0, Spec_161, 2) = ((MR_Box) ((MR_Unsigned) 56U));
            MR_hl_field(0, Spec_161, 3) = ((MR_Box) (Context_159));
            MR_hl_field(0, Spec_161, 4) = ((MR_Box) (Pieces_160));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_46 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_161));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
          }
        }
      }
    else
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
  }
}

static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FirstMismatch_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word LaterMismatches_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer FirstNumMismatches_6 = ((MR_Integer) ((MR_hl_field(0, FirstMismatch_3, (MR_Integer) 0))));
    MR_Word TakenLaterMismatches_9;

    check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(FirstNumMismatches_6, LaterMismatches_4, &TakenLaterMismatches_9);
    if ((TakenLaterMismatches_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeDefnOrBuiltin_30 = ((MR_Word) ((MR_hl_field(0, FirstMismatch_3, (MR_Integer) 1))));
      MR_Word BoundFunctorPieces_31 = ((MR_Word) ((MR_hl_field(0, FirstMismatch_3, (MR_Integer) 2))));
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_String Var_37;

      Var_37 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(TypeDefnOrBuiltin_30);
      {
        Var_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_36, 0) = ((MR_Box) (Var_37));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[75])));
      }
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[72])));
        MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
      }
      *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, BoundFunctorPieces_31);
    }
    else
    {
      MR_Word RelevantMismatches_12;
      MR_Integer NumRelevantMismatches_13;
      MR_Word HeadPieces_14;
      MR_Word TailPieces_15;
      MR_Word Var_18;
      MR_Word Var_19;

      {
        RelevantMismatches_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RelevantMismatches_12, 0) = ((MR_Box) (FirstMismatch_3));
        MR_hl_field(1, RelevantMismatches_12, 1) = ((MR_Box) (TakenLaterMismatches_9));
      }
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0), RelevantMismatches_12, &NumRelevantMismatches_13);
      {
        Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_19, 1) = ((MR_Box) (NumRelevantMismatches_13));
      }
      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[71])));
      }
      {
        HeadPieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadPieces_14, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[69])));
        MR_hl_field(1, HeadPieces_14, 1) = ((MR_Box) (Var_18));
      }
      check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(RelevantMismatches_12, (MR_Integer) 1, &TailPieces_15);
      *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadPieces_14, TailPieces_15);
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mismatch_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Mismatches_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailPieces_9;
    MR_Word TypeDefnOrBuiltin_11;
    MR_Word BoundFunctorPieces_12;
    MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;
    MR_Word Var_35;

    check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(Mismatches_6, Var_13, &TailPieces_9);
    TypeDefnOrBuiltin_11 = ((MR_Word) ((MR_hl_field(0, Mismatch_5, (MR_Integer) 1))));
    BoundFunctorPieces_12 = ((MR_Word) ((MR_hl_field(0, Mismatch_5, (MR_Integer) 2))));
    {
      Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_19, 1) = ((MR_Box) (HeadVar__2_2));
    }
    Var_25 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(TypeDefnOrBuiltin_11);
    {
      Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_24, 0) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[75])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[77])));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[76])));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_18));
    }
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BoundFunctorPieces_12, TailPieces_9);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_35);
  }
}

static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
  MR_Word TypeDefnOrBuiltin_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) TypeDefnOrBuiltin_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeCtor_5;
        MR_Word Var_9 = (MR_Word) ((MR_Word) (TypeDefnOrBuiltin_3));

        TypeCtor_5 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
        Str_4 = parse_tree__parse_tree_out_sym_name__type_ctor_to_string_1_f_0(TypeCtor_5);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BuiltinType_7 = ((MR_Word) ((MR_hl_field(1, TypeDefnOrBuiltin_3, (MR_Integer) 0))));

        parse_tree__prog_data__builtin_type_name_2_p_0(BuiltinType_7, &Str_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(2, TypeDefnOrBuiltin_3, (MR_Integer) 0))));
        MR_String Var_14;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_3[17]), Arity_8, &Var_14);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_14);
      }
      break;
  }
  return Str_4;
}

static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Mismatch_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Mismatches_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer NumMismatches_9 = ((MR_Integer) ((MR_hl_field(0, Mismatch_6, (MR_Integer) 0))));

    succeeded = (HeadVar__1_1 == NumMismatches_9);
    if (succeeded)
    {
      MR_Word TakenTail_12;

      check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(HeadVar__1_1, Mismatches_7, &TakenTail_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mismatch_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (TakenTail_12));
      }
    }
    else
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_IfSeveral_4;

  conv3_IfSeveral_4 = check_hlds__inst_check__project_if_several_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_IfSeveral_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_IfAlone_3;

  conv2_IfAlone_3 = check_hlds__inst_check__project_if_alone_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_IfAlone_3));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_7_p_0(
  MR_Word WarnInstsWithoutMatchingType_8,
  MR_Word InstCtor_9,
  MR_Word InstDefn_10,
  MR_Word ForTypeKind_11,
  MR_Word Mismatches0_12,
  MR_Word * IFTC_13,
  MR_Word * Specs_14)
{
  MR_bool succeeded;
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, InstDefn_10, (MR_Integer) 4))));
  MR_Word InstStatus_16 = ((MR_Word) ((MR_hl_field(0, InstDefn_10, (MR_Integer) 5))));
  MR_Word InstDefinedInThisModule_17;
  MR_Word ForTypeCtor_18;
  MR_Word Mismatches_20;
  MR_Word VisSpecs_21;
  MR_Word EqvSpecs_22;
  MR_Word MismatchSpecs_51;
  MR_Word MismatchesTail_38;

  InstDefinedInThisModule_17 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_16);
  if (((MR_tag((MR_Word) ForTypeKind_11)) == (MR_Integer) 1))
  {
    ForTypeCtor_18 = ((MR_Word) ((MR_hl_field(1, ForTypeKind_11, (MR_Integer) 0))));
    Mismatches_20 = Mismatches0_12;
    VisSpecs_21 = (MR_Word) ((MR_Unsigned) 0U);
    EqvSpecs_22 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ForTypeDefn_23;
    MR_Word InstIsExported_24;
    MR_Word ForTypeDefnBody_27;
    MR_Word Var_58;

    ForTypeCtor_18 = ((MR_Word) ((MR_hl_field(0, ForTypeKind_11, (MR_Integer) 0))));
    ForTypeDefn_23 = ((MR_Word) ((MR_hl_field(0, ForTypeKind_11, (MR_Integer) 1))));
    InstIsExported_24 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(InstStatus_16);
    succeeded = (InstIsExported_24 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_58 = (MR_Integer) 0;
      succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0(Var_58, ForTypeDefn_23);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word VisPieces_25;
      MR_Word VisSpec_26;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_68;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_81;
      MR_Word Var_82;

      {
        Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_66, 1) = ((MR_Box) (InstCtor_9));
      }
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_64 = parse_tree__error_spec__color_as_subject_1_f_0(Var_65);
      {
        Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(3, Var_76, 1) = ((MR_Box) (ForTypeCtor_18));
      }
      {
        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[10])));
      }
      Var_74 = parse_tree__error_spec__color_as_subject_1_f_0(Var_75);
      Var_82 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[23])));
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_82, (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])));
      Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_81);
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[19])), Var_73);
      Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_68);
      VisPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[6])), Var_63);
      {
        VisSpec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, VisSpec_26, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.inst_check.maybe_issue_type_match_error\'/7"));
        MR_hl_field(0, VisSpec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, VisSpec_26, 2) = ((MR_Box) ((MR_Unsigned) 56U));
        MR_hl_field(0, VisSpec_26, 3) = ((MR_Box) (Context_15));
        MR_hl_field(0, VisSpec_26, 4) = ((MR_Box) (VisPieces_25));
      }
      {
        VisSpecs_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, VisSpecs_21, 0) = ((MR_Box) (VisSpec_26));
        MR_hl_field(1, VisSpecs_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      VisSpecs_21 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__hlds_data__get_type_defn_body_2_p_0(ForTypeDefn_23, &ForTypeDefnBody_27);
    switch (MR_tag((MR_Word) ForTypeDefnBody_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          Mismatches_20 = Mismatches0_12;
          EqvSpecs_22 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          if ((Mismatches0_12 == (MR_Word) ((MR_Unsigned) 0U)))
            EqvSpecs_22 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word EqvPieces_35;
            MR_Word EqvSpec_36;
            MR_Word Var_101;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_106;
            MR_Word Var_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_119;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_130;
            MR_Word Var_133;
            MR_Word Var_136;
            MR_Word Var_139;

            {
              Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 20U));
              MR_hl_field(3, Var_104, 1) = ((MR_Box) (InstCtor_9));
            }
            {
              Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
              MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_102 = parse_tree__error_spec__color_as_subject_1_f_0(Var_103);
            {
              Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(3, Var_114, 1) = ((MR_Box) (ForTypeCtor_18));
            }
            {
              Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
              MR_hl_field(1, Var_113, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[10])));
            }
            Var_112 = parse_tree__error_spec__color_as_subject_1_f_0(Var_113);
            Var_125 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[29])));
            {
              Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_114));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[34])));
            }
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[32])));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
            }
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[31])));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
            }
            {
              Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[30])));
              MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
            }
            Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, Var_130);
            Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[27])), Var_124);
            Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_119);
            Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[25])), Var_111);
            Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_102, Var_106);
            EqvPieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[6])), Var_101);
            {
              EqvSpec_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, EqvSpec_36, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.inst_check.maybe_issue_type_match_error\'/7"));
              MR_hl_field(0, EqvSpec_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, EqvSpec_36, 2) = ((MR_Box) ((MR_Unsigned) 56U));
              MR_hl_field(0, EqvSpec_36, 3) = ((MR_Box) (Context_15));
              MR_hl_field(0, EqvSpec_36, 4) = ((MR_Box) (EqvPieces_35));
            }
            {
              EqvSpecs_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, EqvSpecs_22, 0) = ((MR_Box) (EqvSpec_36));
              MR_hl_field(1, EqvSpecs_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          Mismatches_20 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
  succeeded = (WarnInstsWithoutMatchingType_8 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (Mismatches_20 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      MismatchesTail_38 = ((MR_Word) ((MR_hl_field(1, Mismatches_20, (MR_Integer) 1))));
  }
  if (succeeded)
  {
    MR_Word MismatchConsIdComponents_39;
    MR_Word NearMisses_40;
    MR_String FuncSymbolPhrase_41;
    MR_String IsAreNotPhrase_42;
    MR_Word MismatchConsIdPieces_43;
    MR_Word MismatchPieces_44;
    MR_Word NearMissPieces_45;
    MR_Word MismatchSpec_50;
    MR_Word Var_163;
    MR_Word Var_164;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_168;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_Word Var_176;
    MR_Word Var_181;
    MR_Word Var_182;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word Var_188;
    MR_Word Var_189;
    MR_Word Var_190;
    MR_Word Var_191;
    MR_Word Var_192;
    MR_Word Var_207;
    MR_Box conv0_FuncSymbolPhrase_41;
    MR_Box conv1_IsAreNotPhrase_42;

    check_hlds__inst_check__cons_id_strs_and_near_misses_4_p_0((MR_Integer) 4, Mismatches_20, &MismatchConsIdComponents_39, &NearMisses_40);
    conv0_FuncSymbolPhrase_41 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Mismatches_20, ((MR_Box) ((MR_String) "function symbol")), ((MR_Box) ((MR_String) "function symbols")));
    FuncSymbolPhrase_41 = ((MR_String) (conv0_FuncSymbolPhrase_41));
    conv1_IsAreNotPhrase_42 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Mismatches_20, ((MR_Box) ((MR_String) "is not a function symbol")), ((MR_Box) ((MR_String) "are not function symbols")));
    IsAreNotPhrase_42 = ((MR_String) (conv1_IsAreNotPhrase_42));
    MismatchConsIdPieces_43 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), MismatchConsIdComponents_39);
    {
      Var_166 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_166, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(3, Var_166, 1) = ((MR_Box) (InstCtor_9));
    }
    {
      Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
      MR_hl_field(1, Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_164 = parse_tree__error_spec__color_as_subject_1_f_0(Var_165);
    {
      Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_176, 1) = ((MR_Box) (ForTypeCtor_18));
    }
    {
      Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
      MR_hl_field(1, Var_175, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[10])));
    }
    Var_174 = parse_tree__error_spec__color_as_subject_1_f_0(Var_175);
    {
      Var_186 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_186, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_186, 1) = ((MR_Box) (FuncSymbolPhrase_41));
    }
    {
      Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_185, 0) = ((MR_Box) (Var_186));
      MR_hl_field(1, Var_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_182, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[35])));
      MR_hl_field(1, Var_182, 1) = ((MR_Box) (Var_185));
    }
    {
      Var_192 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_192, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_192, 1) = ((MR_Box) (IsAreNotPhrase_42));
    }
    {
      Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_191, 0) = ((MR_Box) (Var_192));
      MR_hl_field(1, Var_191, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[37])));
    }
    Var_190 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_191);
    Var_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_190, (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])));
    Var_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchConsIdPieces_43, Var_189);
    Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_182, Var_188);
    Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_174, Var_181);
    Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[25])), Var_173);
    Var_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_164, Var_168);
    MismatchPieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[6])), Var_163);
    if ((NearMisses_40 == (MR_Word) ((MR_Unsigned) 0U)))
      NearMissPieces_45 = (MR_Word) ((MR_Unsigned) 0U);
    else
    if ((MismatchesTail_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_200;

      Var_200 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_near_miss_cons_mismatch_0), (MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), (MR_Word) (&check_hlds__inst_check_scalar_common_2[2]), NearMisses_40);
      NearMissPieces_45 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_200);
    }
    else
    {
      MR_Word Var_202;

      Var_202 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_near_miss_cons_mismatch_0), (MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), (MR_Word) (&check_hlds__inst_check_scalar_common_2[3]), NearMisses_40);
      NearMissPieces_45 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_202);
    }
    Var_207 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MismatchPieces_44, NearMissPieces_45);
    {
      MismatchSpec_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MismatchSpec_50, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.inst_check.maybe_issue_type_match_error\'/7"));
      MR_hl_field(0, MismatchSpec_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, MismatchSpec_50, 2) = ((MR_Box) ((MR_Unsigned) 56U));
      MR_hl_field(0, MismatchSpec_50, 3) = ((MR_Box) (Context_15));
      MR_hl_field(0, MismatchSpec_50, 4) = ((MR_Box) (Var_207));
    }
    {
      MismatchSpecs_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MismatchSpecs_51, 0) = ((MR_Box) (MismatchSpec_50));
      MR_hl_field(1, MismatchSpecs_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    MismatchSpecs_51 = (MR_Word) ((MR_Unsigned) 0U);
  if ((EqvSpecs_22 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((VisSpecs_21 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MismatchSpecs_51 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *IFTC_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ForTypeCtor_18));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IFTC_13 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = ((MR_Box) (ForTypeCtor_18));
        }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *IFTC_13 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, base, 1) = ((MR_Box) (ForTypeCtor_18));
      }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *IFTC_13 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 1) = ((MR_Box) (ForTypeCtor_18));
    }
  switch (InstDefinedInThisModule_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_209;

        Var_209 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EqvSpecs_22, MismatchSpecs_51);
        *Specs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), VisSpecs_21, Var_209);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__inst_check__cons_id_strs_and_near_misses_4_p_0(
  MR_Word Color_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Mismatch_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Mismatches_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ConsIdComponent_9;
    MR_Word ConsIdComponents_10;
    MR_Word NearMissMismatchesTail_12;
    MR_Word MaybeNearMisses_13;

    check_hlds__inst_check__cons_id_strs_and_near_misses_4_p_0(Color_1, Mismatches_8, &ConsIdComponents_10, &NearMissMismatchesTail_12);
    ConsIdComponent_9 = ((MR_Word) ((MR_hl_field(0, Mismatch_7, (MR_Integer) 0))));
    MaybeNearMisses_13 = ((MR_Word) ((MR_hl_field(0, Mismatch_7, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsIdComponent_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (ConsIdComponents_10));
    }
    if ((MaybeNearMisses_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = NearMissMismatchesTail_12;
    else
    {
      MR_Word IfAlone_16;
      MR_Word IfSeveral_17;
      MR_Word NearMissMismatch_18;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;

      Var_24 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0(Color_1, (MR_String) "or", (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[41])), MaybeNearMisses_13);
      Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])));
      IfAlone_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[39])), Var_23);
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (IfAlone_16));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[9])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (ConsIdComponent_9));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_36));
      }
      {
        IfSeveral_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IfSeveral_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__inst_check_scalar_common_1[42])));
        MR_hl_field(1, IfSeveral_17, 1) = ((MR_Box) (Var_35));
      }
      {
        NearMissMismatch_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NearMissMismatch_18, 0) = ((MR_Box) (IfAlone_16));
        MR_hl_field(0, NearMissMismatch_18, 1) = ((MR_Box) (IfSeveral_17));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NearMissMismatch_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (NearMissMismatchesTail_12));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
  MR_Word Section_3,
  MR_Word TypeDefn_4)
{
  MR_bool succeeded;
  MR_Word TypeStatus_5;
  MR_Word Status_7;

  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_4, &TypeStatus_5);
  Status_7 = (MR_Word) (TypeStatus_5);
  switch (MR_tag((MR_Word) Status_7)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Status_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          succeeded = (Section_3 == (MR_Integer) 1);
          break;
      }
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
  MR_Word InstCtor_6,
  MR_Word InstDefn_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word InstStatus_10 = ((MR_Word) ((MR_hl_field(0, InstDefn_7, (MR_Integer) 5))));
  MR_Word InstDefinedInThisModule_11;

  InstDefinedInThisModule_11 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_10);
  switch (InstDefinedInThisModule_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, InstDefn_7, (MR_Integer) 4))));
        MR_Word Pieces_13;
        MR_Word Spec_14;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_26;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_39;
        MR_Word Var_44;
        MR_Word Var_45;

        {
          Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(3, Var_24, 1) = ((MR_Box) (InstCtor_6));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_22 = parse_tree__error_spec__color_as_subject_1_f_0(Var_23);
        {
          Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Var_34, 1) = ((MR_Box) (TypeCtor_8));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[10])));
        }
        Var_32 = parse_tree__error_spec__color_as_subject_1_f_0(Var_33);
        Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[16])));
        Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[17])));
        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[12])), Var_44);
        Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_32, Var_39);
        Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[8])), Var_31);
        Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_26);
        Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_1[6])), Var_21);
        {
          Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.inst_check.maybe_issue_no_such_type_error\'/5"));
          MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 56U));
          MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_12));
          MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_functors_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeableFunctors_0_3,
  MR_Word * STATE_VARIABLE_TypeableFunctors_4,
  MR_Word STATE_VARIABLE_PossibleTypeSets_0_5,
  MR_Word * STATE_VARIABLE_PossibleTypeSets_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PossibleTypeSets_6 = STATE_VARIABLE_PossibleTypeSets_0_5;
      *STATE_VARIABLE_TypeableFunctors_4 = STATE_VARIABLE_TypeableFunctors_0_3;
    }
    else
    {
      MR_Word BoundFunctor_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MaybePossibleTypes_19;
      MR_Word STATE_VARIABLE_TypeableFunctors_26_26;
      MR_Word STATE_VARIABLE_PossibleTypeSets_27_27;
      MR_Word ConsId_29 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_15, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeableFunctors_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PossibleTypeSets_0_5;

      switch (MR_tag((MR_Word) ConsId_29)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          MaybePossibleTypes_19 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word SymName_31;
            MR_Integer Arity_32;
            MR_String Name_34;
            MR_Word FunctorNameAndArity_35;
            MR_Word UserTypes_37;
            MR_Word UserCharTypes_38;
            MR_Word Types_39;
            MR_Word Var_62 = (MR_Word) (MR_body((MR_Word) (ConsId_29), (MR_Integer) 1));
            MR_Word TypeCtorDefns_36;
            MR_Integer Var_63;
            MR_Word Var_66;

            SymName_31 = ((MR_Word) ((MR_hl_field(0, Var_62, (MR_Integer) 0))));
            Arity_32 = ((MR_Integer) ((MR_hl_field(0, Var_62, (MR_Integer) 1))));
            Name_34 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_31);
            {
              FunctorNameAndArity_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, FunctorNameAndArity_35, 0) = ((MR_Box) (Name_34));
              MR_hl_field(0, FunctorNameAndArity_35, 1) = ((MR_Box) (Arity_32));
            }
            succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0), HeadVar__1_1, ((MR_Box) (FunctorNameAndArity_35)), &TypeCtorDefns_36);
            if (succeeded)
              check_hlds__inst_check__find_matching_user_types_3_p_0(SymName_31, TypeCtorDefns_36, &UserTypes_37);
            else
              UserTypes_37 = (MR_Word) ((MR_Unsigned) 0U);
            Var_63 = mercury__string__count_code_points_1_f_0(Name_34);
            succeeded = (Var_63 == (MR_Integer) 1);
            if (succeeded)
              {
                UserCharTypes_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, UserCharTypes_38, 0) = ((MR_Box) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[11])));
                MR_hl_field(1, UserCharTypes_38, 1) = ((MR_Box) (UserTypes_37));
              }
            else
              UserCharTypes_38 = UserTypes_37;
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_66, 0) = ((MR_Box) (SymName_31));
              MR_hl_field(0, Var_66, 1) = ((MR_Box) (Arity_32));
            }
            succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(Var_66);
            if (succeeded)
            {
              MR_Word Var_67;

              {
                Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_67, 0) = ((MR_Box) (Arity_32));
              }
              {
                Types_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Types_39, 0) = ((MR_Box) (Var_67));
                MR_hl_field(1, Types_39, 1) = ((MR_Box) (UserCharTypes_38));
              }
            }
            else
              Types_39 = UserCharTypes_38;
            {
              MaybePossibleTypes_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybePossibleTypes_19, 0) = ((MR_Box) (Types_39));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ConsId_29, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
              MaybePossibleTypes_19 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_68;
                MR_Word Var_69;
                MR_Integer Arity_75 = ((MR_Integer) ((MR_hl_field(3, ConsId_29, (MR_Integer) 1))));

                {
                  Var_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Var_69, 0) = ((MR_Box) (Arity_75));
                }
                {
                  Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
                  MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybePossibleTypes_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybePossibleTypes_19, 0) = ((MR_Box) (Var_68));
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word IntConst_40 = ((MR_Word) ((MR_hl_field(3, ConsId_29, (MR_Integer) 1))));
                MR_Word IntType_41;
                MR_Word Var_71;
                MR_Word Var_72;
                MR_Word Var_73;

                IntType_41 = parse_tree__prog_data__type_of_int_const_1_f_0(IntConst_40);
                {
                  Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_73, 0) = (MR_Box) ((MR_Unsigned) (IntType_41));
                }
                {
                  Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
                }
                {
                  Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
                  MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MaybePossibleTypes_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybePossibleTypes_19, 0) = ((MR_Box) (Var_71));
                }
              }
              break;
            case (MR_Integer) 6:
              MaybePossibleTypes_19 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[14]));
              break;
            case (MR_Integer) 7:
              MaybePossibleTypes_19 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[12]));
              break;
            case (MR_Integer) 8:
              MaybePossibleTypes_19 = (MR_Word) (MR_mkword(1, &check_hlds__inst_check_scalar_common_3[16]));
              break;
          }
          break;
      }
      if ((MaybePossibleTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_TypeableFunctors_26_26 = (MR_Integer) 0;
        STATE_VARIABLE_PossibleTypeSets_27_27 = STATE_VARIABLE_PossibleTypeSets_0_5;
      }
      else
      {
        MR_Word PossibleTypes_20 = ((MR_Word) ((MR_hl_field(1, MaybePossibleTypes_19, (MR_Integer) 0))));
        MR_Word PossibleTypeSet_21;

        PossibleTypeSet_21 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), PossibleTypes_20);
        {
          STATE_VARIABLE_PossibleTypeSets_27_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_PossibleTypeSets_27_27, 0) = ((MR_Box) (PossibleTypeSet_21));
          MR_hl_field(1, STATE_VARIABLE_PossibleTypeSets_27_27, 1) = ((MR_Box) (STATE_VARIABLE_PossibleTypeSets_0_5));
        }
        STATE_VARIABLE_TypeableFunctors_26_26 = STATE_VARIABLE_TypeableFunctors_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = BoundFunctors_16;
      next_value_of_STATE_VARIABLE_TypeableFunctors_0_3 = STATE_VARIABLE_TypeableFunctors_26_26;
      next_value_of_STATE_VARIABLE_PossibleTypeSets_0_5 = STATE_VARIABLE_PossibleTypeSets_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TypeableFunctors_0_3 = next_value_of_STATE_VARIABLE_TypeableFunctors_0_3;
      STATE_VARIABLE_PossibleTypeSets_0_5 = next_value_of_STATE_VARIABLE_PossibleTypeSets_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeCtorAndDefn_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeCtorAndDefns_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word MatchingUserTypes0_9;
    MR_Word TypeCtor_10;
    MR_Word TypeCtorSymName_12;
    MR_Word TypeCtorModuleName_15;

    check_hlds__inst_check__find_matching_user_types_3_p_0(HeadVar__1_1, TypeCtorAndDefns_7, &MatchingUserTypes0_9);
    TypeCtor_10 = ((MR_Word) ((MR_hl_field(0, TypeCtorAndDefn_6, (MR_Integer) 0))));
    TypeCtorSymName_12 = ((MR_Word) ((MR_hl_field(0, TypeCtor_10, (MR_Integer) 0))));
    if (((MR_tag((MR_Word) TypeCtorSymName_12)) == (MR_Integer) 1))
      TypeCtorModuleName_15 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_12, (MR_Integer) 0))));
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.find_matching_user_types\'/3", (MR_String) "TypeCtorSymName is unqualified");
        return;
      }
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word FunctorModuleName_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(FunctorModuleName_18, TypeCtorModuleName_15);
      if (succeeded)
      {
        MR_Word Var_23 = (MR_Word) ((MR_Word) (TypeCtorAndDefn_6));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, base, 1) = ((MR_Box) (MatchingUserTypes0_9));
        }
      }
      else
        *HeadVar__3_3 = MatchingUserTypes0_9;
    }
    else
    {
      MR_Word Var_22 = (MR_Word) ((MR_Word) (TypeCtorAndDefn_6));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, base, 1) = ((MR_Box) (MatchingUserTypes0_9));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_functors_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word BoundFunctor_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundFunctors_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(0, BoundFunctor_10, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Mismatches_76_76;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      switch (MR_tag((MR_Word) ConsId_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            MR_Word Var_99;

            Var_99 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
            mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_99)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word DuCtor_15 = (MR_Word) (MR_body((MR_Word) (ConsId_13), (MR_Integer) 1));
            MR_Word ConsSymName_16 = ((MR_Word) ((MR_hl_field(0, DuCtor_15, (MR_Integer) 0))));
            MR_Integer ConsArity_17 = ((MR_Integer) ((MR_hl_field(0, DuCtor_15, (MR_Integer) 1))));
            MR_Word ConsIdTypeCtor_18 = ((MR_Word) ((MR_hl_field(0, DuCtor_15, (MR_Integer) 2))));

            if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
            {
              MR_Word BuiltinType_44 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) BuiltinType_44)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(BuiltinType_44)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_85;

                        Var_85 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                        mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_85)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Integer Var_82;
                        MR_String ConsName_107;

                        succeeded = ((MR_tag((MR_Word) ConsSymName_16)) == (MR_Integer) 0);
                        if (succeeded)
                        {
                          ConsName_107 = ((MR_String) ((MR_hl_field(0, ConsSymName_16, (MR_Integer) 0))));
                          Var_82 = mercury__string__count_code_points_1_f_0(ConsName_107);
                          succeeded = (Var_82 == (MR_Integer) 1);
                        }
                        if (succeeded)
                          STATE_VARIABLE_Mismatches_76_76 = HeadVar__3_3;
                        else
                        {
                          MR_Word Var_83;

                          Var_83 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                          mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_83)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_85;

                    Var_85 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                    mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_85)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                  }
                  break;
              }
            }
            else
            {
              MR_Word TypeCtor_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
              MR_Word TypeDefn_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word TypeDefnBody_21;

              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_20, &TypeDefnBody_21);
              switch (MR_tag((MR_Word) TypeDefnBody_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word TypeBodyDu_22 = (MR_Word) ((MR_Word) (TypeDefnBody_21));
                    MR_Word OoMConstructors_23 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_22, (MR_Integer) 0))));
                    MR_Word Constructors_28;

                    Constructors_28 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMConstructors_23);
                    if (((MR_tag((MR_Word) ConsSymName_16)) == (MR_Integer) 1))
                    {
                      MR_Word ConsModuleName_31 = ((MR_Word) ((MR_hl_field(1, ConsSymName_16, (MR_Integer) 0))));
                      MR_Word TypeCtorSymName_32;
                      MR_String ConsName_105 = ((MR_String) ((MR_hl_field(1, ConsSymName_16, (MR_Integer) 1))));
                      MR_Word CtorArities_106;
                      MR_Word TypeCtorModuleName_34;

                      check_hlds__inst_check__find_ctors_with_given_name_3_p_0(ConsName_105, Constructors_28, &CtorArities_106);
                      TypeCtorSymName_32 = ((MR_Word) ((MR_hl_field(0, TypeCtor_19, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) TypeCtorSymName_32)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        TypeCtorModuleName_34 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_32, (MR_Integer) 0))));
                        succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ConsModuleName_31, TypeCtorModuleName_34);
                      }
                      if (succeeded)
                      {
                        MR_Word Var_77;

                        {
                          Var_77 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, Var_77, 0) = ((MR_Box) (ConsName_105));
                        }
                        check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0(ConsIdTypeCtor_18, ConsId_13, Var_77, ConsArity_17, CtorArities_106, HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                      }
                      else
                      {
                        MR_Word MissConsSymName_37;

                        if (((MR_tag((MR_Word) TypeCtorSymName_32)) == (MR_Integer) 1))
                        {
                          MR_Word TypeCtorModuleName_102 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_32, (MR_Integer) 0))));

                          {
                            MissConsSymName_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, MissConsSymName_37, 0) = ((MR_Box) (TypeCtorModuleName_102));
                            MR_hl_field(1, MissConsSymName_37, 1) = ((MR_Box) (ConsName_105));
                          }
                        }
                        else
                          {
                            MissConsSymName_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, MissConsSymName_37, 0) = ((MR_Box) (ConsName_105));
                          }
                        check_hlds__inst_check__report_near_misses_6_p_0(ConsIdTypeCtor_18, ConsId_13, MissConsSymName_37, CtorArities_106, HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                      }
                    }
                    else
                    {
                      MR_String ConsName_29 = ((MR_String) ((MR_hl_field(0, ConsSymName_16, (MR_Integer) 0))));
                      MR_Word CtorArities_30;

                      check_hlds__inst_check__find_ctors_with_given_name_3_p_0(ConsName_29, Constructors_28, &CtorArities_30);
                      check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0(ConsIdTypeCtor_18, ConsId_13, ConsSymName_16, ConsArity_17, CtorArities_30, HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    MR_Word Var_80;

                    Var_80 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                    mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_80)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, ConsId_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
              {
                MR_Word Var_99;

                Var_99 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_99)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word IntConst_46 = ((MR_Word) ((MR_hl_field(3, ConsId_13, (MR_Integer) 1))));
                MR_Word ExpType_47;
                MR_Word Var_87;
                MR_Word Var_117;

                ExpType_47 = parse_tree__prog_data__type_of_int_const_1_f_0(IntConst_46);
                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_87 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_87)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_117 = ((MR_Unsigned) ((MR_hl_field(1, Var_87, (MR_Integer) 0))) & (MR_Integer) 15);
                    succeeded = (ExpType_47 == Var_117);
                  }
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_76_76 = HeadVar__3_3;
                else
                {
                  MR_Word Var_88;

                  Var_88 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_88)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Var_90;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_90 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
                  succeeded = (Var_90 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_76_76 = HeadVar__3_3;
                else
                {
                  MR_Word Var_91;

                  Var_91 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_91)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Var_93;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_93 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
                  succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 8U));
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_76_76 = HeadVar__3_3;
                else
                {
                  MR_Word Var_94;

                  Var_94 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_94)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Var_96;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_96 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
                  succeeded = (Var_96 == (MR_Word) ((MR_Unsigned) 4U));
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_76_76 = HeadVar__3_3;
                else
                {
                  MR_Word Var_97;

                  Var_97 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Var_97)), HeadVar__3_3, &STATE_VARIABLE_Mismatches_76_76);
                }
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = BoundFunctors_11;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_Mismatches_76_76;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__inst_check__report_near_misses_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = check_hlds__inst_check__make_cons_id_component_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__inst_check__report_near_misses_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsId_8,
  MR_Word SymName_9,
  MR_Word CtorArities_10,
  MR_Word STATE_VARIABLE_Mismatches_0_14,
  MR_Word * STATE_VARIABLE_Mismatches_15)
{
  MR_Word NearMisses_12;
  MR_Word Mismatch_13;
  MR_Word Var_16;
  MR_Word Var_17;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (check_hlds__inst_check__report_near_misses_6_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (TypeCtor_7));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (SymName_9));
  }
  NearMisses_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, CtorArities_10);
  {
    Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 25U));
    MR_hl_field(3, Var_17, 1) = ((MR_Box) (ConsId_8));
  }
  {
    Mismatch_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Mismatch_13, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, Mismatch_13, 1) = ((MR_Box) (NearMisses_12));
  }
  mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Mismatch_13)), STATE_VARIABLE_Mismatches_0_14, STATE_VARIABLE_Mismatches_15);
}

static MR_Box MR_CALL 
check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = check_hlds__inst_check__make_cons_id_component_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word ConsId_9,
  MR_Word SymName_10,
  MR_Integer ConsArity_11,
  MR_Word CtorArities_12,
  MR_Word STATE_VARIABLE_Mismatches_0_14,
  MR_Word * STATE_VARIABLE_Mismatches_15)
{
  MR_bool succeeded;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ConsArity_11)), CtorArities_12);
  if (succeeded)
    *STATE_VARIABLE_Mismatches_15 = STATE_VARIABLE_Mismatches_0_14;
  else
  {
    MR_Word NearMisses_17;
    MR_Word Mismatch_18;
    MR_Word Var_19;
    MR_Word Var_20;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[1]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (TypeCtor_8));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) (SymName_10));
    }
    NearMisses_17 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, CtorArities_12);
    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 25U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (ConsId_9));
    }
    {
      Mismatch_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Mismatch_18, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, Mismatch_18, 1) = ((MR_Box) (NearMisses_17));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), ((MR_Box) (Mismatch_18)), STATE_VARIABLE_Mismatches_0_14, STATE_VARIABLE_Mismatches_15);
  }
}

static MR_Word MR_CALL 
check_hlds__inst_check__simple_miss_1_f_0(
  MR_Word ConsId_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  {
    Var_4 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_4, 0) = ((MR_Box) ((MR_Unsigned) 25U));
    MR_hl_field(3, Var_4, 1) = ((MR_Box) (ConsId_3));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__inst_check__find_ctors_with_given_name_3_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Constructor_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Constructors_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word AritiesTail_9;
    MR_Word CtorSymName_12;
    MR_Integer CtorArity_14;
    MR_String Var_16;

    check_hlds__inst_check__find_ctors_with_given_name_3_p_0(HeadVar__1_1, Constructors_7, &AritiesTail_9);
    CtorSymName_12 = ((MR_Word) ((MR_hl_field(0, Constructor_6, (MR_Integer) 2))));
    CtorArity_14 = ((MR_Integer) ((MR_hl_field(0, Constructor_6, (MR_Integer) 4))));
    Var_16 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_12);
    succeeded = (strcmp(HeadVar__1_1, Var_16) == 0);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CtorArity_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (AritiesTail_9));
      }
    else
      *HeadVar__3_3 = AritiesTail_9;
  }
}

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_21;

  check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__149__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_21);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_21));
}

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FunctorNameAndArity_4;

  check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_FunctorNameAndArity_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_FunctorNameAndArity_4));
}

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_FunctorsToTypesMap_0_2,
  MR_Word * STATE_VARIABLE_FunctorsToTypesMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FunctorsToTypesMap_3 = STATE_VARIABLE_FunctorsToTypesMap_0_2;
    else
    {
      MR_Word TypeCtorDefn_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeCtorDefns_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeCtor_10 = ((MR_Word) ((MR_hl_field(0, TypeCtorDefn_7, (MR_Integer) 0))));
      MR_Word TypeDefn_11 = ((MR_Word) ((MR_hl_field(0, TypeCtorDefn_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FunctorsToTypesMap_18_18;
      MR_Word TypeStatus_26;
      MR_Word Status_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FunctorsToTypesMap_0_2;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_11, &TypeStatus_26);
      Status_28 = (MR_Word) (TypeStatus_26);
      switch (MR_tag((MR_Word) Status_28)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Status_28)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        MR_Word TypeCtorAndDefn_12;
        MR_Word Functors_13;
        MR_Word Var_17;
        MR_Word TypeDefnBody_31;
        MR_Box conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18;

        {
          TypeCtorAndDefn_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorAndDefn_12, 0) = ((MR_Box) (TypeCtor_10));
          MR_hl_field(0, TypeCtorAndDefn_12, 1) = ((MR_Box) (TypeDefn_11));
        }
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeDefnBody_31);
        switch (MR_tag((MR_Word) TypeDefnBody_31)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Constructors_32;
              MR_Word Var_37 = (MR_Word) ((MR_Word) (TypeDefnBody_31));
              MR_Word Var_39;

              Constructors_32 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
              Var_39 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Constructors_32);
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0), (MR_Word) (&check_hlds__inst_check_scalar_common_2[1]), Var_39, &Functors_13);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            Functors_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[0]));
          MR_hl_field(0, Var_17, 1) = ((MR_Box) (check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2));
          MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_17, 3) = ((MR_Box) (TypeCtorAndDefn_12));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0), (MR_Word) (&check_hlds__inst_check_scalar_common_2[0]), Var_17, Functors_13, ((MR_Box) (STATE_VARIABLE_FunctorsToTypesMap_0_2)), &conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18);
        STATE_VARIABLE_FunctorsToTypesMap_18_18 = ((MR_Word) (conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18));
      }
      else
        STATE_VARIABLE_FunctorsToTypesMap_18_18 = STATE_VARIABLE_FunctorsToTypesMap_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeCtorDefns_8;
      next_value_of_STATE_VARIABLE_FunctorsToTypesMap_0_2 = STATE_VARIABLE_FunctorsToTypesMap_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_FunctorsToTypesMap_0_2 = next_value_of_STATE_VARIABLE_FunctorsToTypesMap_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____cons_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_check____Unify____cons_mismatch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____cons_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_check____Compare____cons_mismatch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_check____Unify____for_type_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_check____Compare____for_type_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_check____Unify____functor_name_and_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_check____Compare____functor_name_and_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_check____Unify____functors_to_types_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_check____Compare____functors_to_types_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_check____Unify____mismatch_from_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_check____Compare____mismatch_from_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__inst_check____Unify____typeable_functors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__inst_check____Compare____typeable_functors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__inst_check__init(void)
{
}

void mercury__check_hlds__inst_check__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_for_type_kind_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functors_to_types_map_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_near_miss_cons_mismatch_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_typeable_functors_0);
}

void mercury__check_hlds__inst_check__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_check__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_check.
