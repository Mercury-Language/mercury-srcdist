/*
** Automatically generated from `inst_check.m'
** by the Mercury compiler,
** version rotd-2019-09-26
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "int.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s {
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11;
  MR_bool check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded;
  jmp_buf check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0;
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_120;
  MR_Box check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_120;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_cons_mismatch_0_0[2];

static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_cons_mismatch_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_cons_mismatch_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_cons_mismatch_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_cons_mismatch_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_cons_mismatch_0[1];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_cons_mismatch_0[1];

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_1[1];

static const MR_DuArgLocn check_hlds__inst_check__check_hlds__inst_check__field_locns_for_type_kind_0_1[1];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1;

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2;

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3;

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0[3];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_2[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0[3];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0[5];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0[5];

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

static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0[2];

static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0[2];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0[2];

static MR_bool MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__400__1_2_p_0(
  MR_Word IFTC0_17,
  MR_Word HeadVar__2_59);

static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__126__1_4_p_0(
  MR_Word TypeCtorAndDefn_12,
  MR_Word HeadVar__2_20,
  MR_Word HeadVar__3_21,
  MR_Word * HeadVar__4_22);

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word BoundInsts_4,
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
  MR_Word BoundInst_8,
  MR_Integer STATE_VARIABLE_NumMismatches_0_16,
  MR_Integer * STATE_VARIABLE_NumMismatches_17,
  MR_Word STATE_VARIABLE_PiecesCord_0_18,
  MR_Word * STATE_VARIABLE_PiecesCord_19);

static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
  MR_Integer CurNum_9,
  MR_String FunctorName_10,
  MR_Integer ActualArity_11,
  MR_Word ExpectedAritiesSet_12,
  MR_Integer STATE_VARIABLE_NumMismatches_0_22,
  MR_Integer * STATE_VARIABLE_NumMismatches_23,
  MR_Word STATE_VARIABLE_PiecesCord_0_24,
  MR_Word * STATE_VARIABLE_PiecesCord_25);

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
check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0(
  MR_Word TypeTable_8,
  MR_Word FunctorsToTypesMap_9,
  MR_Word InstId_10,
  MR_Word InstDefn0_11,
  MR_Word * InstDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(
  MR_Word InstId_8,
  MR_Word InstDefn_9,
  MR_Word BoundInsts_10,
  MR_Word PossibleTypes_11,
  MR_Word PossibleTypeSets_12,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

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
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(
  MR_Word InstId_7,
  MR_Word InstDefn_8,
  MR_Word ForTypeKind_9,
  MR_Word * IFTC_10,
  MR_Word Mismatches_11,
  MR_Word * STATE_VARIABLE_Specs_42);

static void MR_CALL 
check_hlds__inst_check__cons_id_strs_and_near_misses_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
  MR_Word Section_3,
  MR_Word TypeDefn_4);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
  MR_Word InstId_6,
  MR_Word InstDefn_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeableFunctors_0_3,
  MR_Word * STATE_VARIABLE_TypeableFunctors_4,
  MR_Word STATE_VARIABLE_PossibleTypeSets_0_5,
  MR_Word * STATE_VARIABLE_PossibleTypeSets_6);

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_inst_3_p_0(
  MR_Word FunctorsToTypesMap_4,
  MR_Word BoundInst_5,
  MR_Word * MaybeTypes_6);

static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0(
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

static MR_bool MR_CALL 
check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(
  MR_Word SymName_3,
  MR_String TypeName_4);

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


static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[70][2];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[63][1];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[6][5];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[2][7];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[1][6];


/* sealed */ struct check_hlds__inst_check__vector_common_type_6_0_s {
  const MR_String check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_6_0_s check_hlds__inst_check_vector_common_6[10];

/* sealed */ struct check_hlds__inst_check__vector_common_type_8_0_s {
  const MR_Word check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_8_0_s check_hlds__inst_check_vector_common_8[10];



static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[70][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but that type constructor is not visible here."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not visible outside this module."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of that type."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not match any of the types in scope."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not visible from outside this module."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are visible from outside this module."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "equally close matches."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for which the top level mismatches are the following."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is specified to be for"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Maybe you meant"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "For"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is exported, but the type it is for,"))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is declared to be for type"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but its top level"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "match is"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The closest match is"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There are"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: inst"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is exported, but the one type it matches"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is exported, but none of the types it matches"))
  },
  /* row 57 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[49])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[50])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[51])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 60 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[52])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 61 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[53])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 62 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[54])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 63 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[55])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 64 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[56])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 65 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[57])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 66 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[58])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 67 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[59])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 68 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[60])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 69 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[61])),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0)),
    ((MR_Box) (&check_hlds__inst_check_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[0])),
    ((MR_Box) (check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1])),
    ((MR_Box) (check_hlds__inst_check__maybe_issue_type_match_error_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1])),
    ((MR_Box) (check_hlds__inst_check__maybe_issue_type_match_error_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[2])),
    ((MR_Box) (check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[4])),
    ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[5])),
    ((MR_Box) (check_hlds__inst_check__record_arity_mismatch_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[63][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[2])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[3])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[4])))
  },
  /* row 6 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[31])))
  },
  /* row 9 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[32])))
  },
  /* row 12 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[33])))
  },
  /* row 15 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[34])))
  },
  /* row 18 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[35])))
  },
  /* row 21 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[36])))
  },
  /* row 24 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[37])))
  },
  /* row 27 */
  {
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[38])))
  },
  /* row 30 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[39])))
  },
  /* row 33 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[40])))
  },
  /* row 36 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[33])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[15])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[30])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[6])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[21])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[9])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[24])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[12])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[27])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "char"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "float"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "int16"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "int32"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "int64"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "int8"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "uint"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "uint16"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "uint32"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "uint64"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "uint8"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_near_miss_cons_mismatch_0)),
    ((MR_Box) (&check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_for_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_for_type_ctor_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0))
  },
};


static /* final */ const struct check_hlds__inst_check__vector_common_type_6_0_s check_hlds__inst_check_vector_common_6[10] = {
  /* row 0 */   {     (MR_String) "int" },
  /* row 1 */   {     (MR_String) "uint" },
  /* row 2 */   {     (MR_String) "int8" },
  /* row 3 */   {     (MR_String) "uint8" },
  /* row 4 */   {     (MR_String) "int16" },
  /* row 5 */   {     (MR_String) "uint16" },
  /* row 6 */   {     (MR_String) "int32" },
  /* row 7 */   {     (MR_String) "uint32" },
  /* row 8 */   {     (MR_String) "int64" },
  /* row 9 */   {     (MR_String) "uint64" },
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_8_0_s check_hlds__inst_check_vector_common_8[10] = {
  /* row 0 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[59]) },
  /* row 1 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[64]) },
  /* row 2 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[63]) },
  /* row 3 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[68]) },
  /* row 4 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[60]) },
  /* row 5 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[65]) },
  /* row 6 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[61]) },
  /* row 7 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[66]) },
  /* row 8 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[62]) },
  /* row 9 */   {     (MR_Word) (&check_hlds__inst_check_scalar_common_1[67]) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0),
    (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_cons_mismatch_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
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

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_cons_mismatch_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_cons_mismatch_0_0
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_cons_mismatch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_cons_mismatch_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_cons_mismatch_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_cons_mismatch_0_0
};

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_cons_mismatch_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____cons_mismatch_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____cons_mismatch_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "cons_mismatch",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_cons_mismatch_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_cons_mismatch_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_cons_mismatch_0
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
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0)
};

static const MR_DuArgLocn check_hlds__inst_check__check_hlds__inst_check__field_locns_for_type_kind_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1 = {
  (MR_String) "ftk_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_1,
  NULL,
  check_hlds__inst_check__check_hlds__inst_check__field_locns_for_type_kind_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2 = {
  (MR_String) "ftk_float",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3 = {
  (MR_String) "ftk_char",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4 = {
  (MR_String) "ftk_string",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0[3] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_2[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0[3] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0[5] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4,
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0
};

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_for_type_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____for_type_kind_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____for_type_kind_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "for_type_kind",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0
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

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0
};

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "functor_name_and_arity",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "functors_to_types_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
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

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0
};

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "mismatch_from_type",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_near_miss_cons_mismatch_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0),
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
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

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_near_miss_cons_mismatch_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_near_miss_cons_mismatch_0_0
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_near_miss_cons_mismatch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_near_miss_cons_mismatch_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_near_miss_cons_mismatch_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_near_miss_cons_mismatch_0_0
};

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_near_miss_cons_mismatch_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_near_miss_cons_mismatch_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "near_miss_cons_mismatch",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_near_miss_cons_mismatch_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_near_miss_cons_mismatch_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_near_miss_cons_mismatch_0
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

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0
};

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "type_ctor_and_defn",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)
};

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

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0)
};

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

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "type_defn_or_builtin",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0
};

static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0 = {
  (MR_String) "some_untypeable_functors",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1 = {
  (MR_String) "all_typeable_functors",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_check____Unify____typeable_functors_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____typeable_functors_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "typeable_functors",
  {     check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0
};

static MR_bool MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__400__1_2_p_0(
  MR_Word IFTC0_17,
  MR_Word HeadVar__2_59)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_inst_mode____Unify____inst_for_type_ctor_0_0(IFTC0_17, HeadVar__2_59);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__126__1_4_p_0(
  MR_Word TypeCtorAndDefn_12,
  MR_Word HeadVar__2_20,
  MR_Word HeadVar__3_21,
  MR_Word * HeadVar__4_22)
{
  mercury__multi_map__reverse_set_4_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0), ((MR_Box) (TypeCtorAndDefn_12)), ((MR_Box) (HeadVar__2_20)), HeadVar__3_21, HeadVar__4_22);
}

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
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
check_hlds__inst_check____Unify____typeable_functors_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__inst_check_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_29 = (MR_Word) ((MR_Word) (HeadVar__2_2));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                  check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(HeadVar__1_1, Var_29, ArgY1_5);
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
            MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  parse_tree__prog_data____Compare____builtin_type_0_0(HeadVar__1_1, Var_27, ArgY1_13);
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
            MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_28 < ArgY1_21);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_28 > ArgY1_21);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        hlds__hlds_data____Compare____hlds_type_defn_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
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
      MR_Word TypeInfo_11_11;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

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
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
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
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
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
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_35 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_36 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_35 == CastY_36);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, Var_42, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    hlds__hlds_data____Compare____hlds_type_defn_0_0(HeadVar__1_1, Var_41, ArgY2_8);
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
            MR_Word Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
                  MR_Integer Var_43 = (MR_Integer) (Var_40);
                  MR_Integer Var_44 = (MR_Integer) (ArgY1_22);

                  succeeded = (Var_43 < Var_44);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_43 > Var_44);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_14 == CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____cons_mismatch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__error_util____Compare____format_component_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____cons_mismatch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__error_util____Unify____format_component_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__inst_check_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
  MR_Word BoundInsts_4,
  MR_Word TypeDefnOrBuiltin_5,
  MR_Word * MismatchFromType_6)
{
  {
    MR_Integer NumMismatches_15;
    MR_Word MismatchPiecesCord_16;
    MR_Word MismatchPieces_23;

    switch (MR_tag((MR_Word) TypeDefnOrBuiltin_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorAndDefn_7 = (MR_Word) ((MR_Word) (TypeDefnOrBuiltin_5));
          MR_Word TypeDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAndDefn_7, (MR_Integer) 1))));
          MR_Word TypeDefnBody_10;

          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeDefnBody_10);
          switch (MR_tag((MR_Word) TypeDefnBody_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Constructors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnBody_10, (MR_Integer) 0))));
                MR_Word Var_32;
                MR_Word Var_35;

                Var_32 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Constructors_11);
                Var_35 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
                check_hlds__inst_check__find_mismatches_from_user_7_p_0(Var_32, (MR_Integer) 1, BoundInsts_4, (MR_Integer) 0, &NumMismatches_15, Var_35, &MismatchPiecesCord_16);
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
                return;
              }
              break;
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
          MR_Word BuiltinType_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnOrBuiltin_5, (MR_Integer) 0))));
          MR_Word Var_29;

          Var_29 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
          check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(BuiltinType_21, (MR_Integer) 1, BoundInsts_4, (MR_Integer) 0, &NumMismatches_15, Var_29, &MismatchPiecesCord_16);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer TupleArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TypeDefnOrBuiltin_5, (MR_Integer) 0))));
          MR_Word Var_26;

          Var_26 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
          check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(TupleArity_22, (MR_Integer) 1, BoundInsts_4, (MR_Integer) 0, &NumMismatches_15, Var_26, &MismatchPiecesCord_16);
        }
        break;
    }
    MismatchPieces_23 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MismatchPiecesCord_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *MismatchFromType_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumMismatches_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefnOrBuiltin_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MismatchPieces_23));
    }
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
      MR_Word BoundInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_18, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_NumMismatches_29_29;
      MR_Word STATE_VARIABLE_PiecesCord_30_30;
      MR_Integer Var_33;
      MR_Integer ActualArity_24;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_NumMismatches_0_4;
      MR_Word next_value_of_STATE_VARIABLE_PiecesCord_0_6;

      succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        ActualArity_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 1))));
        succeeded = (ActualArity_24 == HeadVar__1_1);
        if (succeeded)
        {
          STATE_VARIABLE_PiecesCord_30_30 = STATE_VARIABLE_PiecesCord_0_6;
          STATE_VARIABLE_NumMismatches_29_29 = STATE_VARIABLE_NumMismatches_0_4;
        }
        else
          check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_29_29, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_30_30);
      }
      else
        check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_29_29, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_30_30);
      Var_33 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_33;
      next_value_of_HeadVar__3_3 = BoundInsts_19;
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
      MR_Word BoundInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_18, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_NumMismatches_80_80;
      MR_Word STATE_VARIABLE_PiecesCord_81_81;
      MR_Integer Var_82;
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
                succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 15)));
                if (succeeded)
                {
                  STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                  STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                }
                else
                  check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 17)));
                if (succeeded)
                {
                  STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                  STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                }
                else
                  check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
              }
              break;
            case (MR_Integer) 2:
              {
                succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 16)));
                if (succeeded)
                {
                  STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                  STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                }
                else
                {
                  MR_Word SymName_36;
                  MR_Integer ConsArity_37;
                  MR_Integer Var_46;
                  MR_String Var_47;

                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    SymName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 1))));
                    ConsArity_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 2))));
                    Var_47 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_36);
                    Var_46 = mercury__string__count_codepoints_1_f_0(Var_47);
                    succeeded = (Var_46 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = (ConsArity_37 == (MR_Integer) 0);
                  }
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

            switch (Var_86) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
              case (MR_Integer) 4:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
              case (MR_Integer) 6:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
              case (MR_Integer) 8:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
              case (MR_Integer) 2:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
              case (MR_Integer) 1:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
              case (MR_Integer) 5:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
              case (MR_Integer) 7:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
              case (MR_Integer) 9:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
              case (MR_Integer) 3:
                {
                  succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    STATE_VARIABLE_PiecesCord_81_81 = STATE_VARIABLE_PiecesCord_0_6;
                    STATE_VARIABLE_NumMismatches_80_80 = STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_80_80, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_81_81);
                }
                break;
            }
          }
          break;
      }
      Var_82 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_82;
      next_value_of_HeadVar__3_3 = BoundInsts_19;
      next_value_of_STATE_VARIABLE_NumMismatches_0_4 = STATE_VARIABLE_NumMismatches_80_80;
      next_value_of_STATE_VARIABLE_PiecesCord_0_6 = STATE_VARIABLE_PiecesCord_81_81;
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
      MR_Word BoundInst_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_18, (MR_Integer) 0))));
      MR_Integer STATE_VARIABLE_NumMismatches_34_34;
      MR_Word STATE_VARIABLE_PiecesCord_35_35;
      MR_Integer Var_40;
      MR_Word SymName_24;
      MR_Integer Arity_25;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_NumMismatches_0_4;
      MR_Word next_value_of_STATE_VARIABLE_PiecesCord_0_6;

      succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        SymName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 1))));
        Arity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_22, (MR_Integer) 2))));
        {
          MR_String FunctorName_27;

          FunctorName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_24);
          succeeded = check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(HeadVar__1_1, FunctorName_27, Arity_25);
          if (succeeded)
          {
            STATE_VARIABLE_PiecesCord_35_35 = STATE_VARIABLE_PiecesCord_0_6;
            STATE_VARIABLE_NumMismatches_34_34 = STATE_VARIABLE_NumMismatches_0_4;
          }
          else
          {
            MR_Word ExpectedArities_28;
            MR_Word Var_33;

            Var_33 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
            check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(HeadVar__1_1, FunctorName_27, Arity_25, Var_33, &ExpectedArities_28);
            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ExpectedArities_28);
            if (succeeded)
              check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_34_34, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_35_35);
            else
              check_hlds__inst_check__record_arity_mismatch_8_p_0(HeadVar__2_2, FunctorName_27, Arity_25, ExpectedArities_28, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_34_34, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_35_35);
          }
        }
      }
      else
        check_hlds__inst_check__record_mismatch_6_p_0(HeadVar__2_2, BoundInst_18, STATE_VARIABLE_NumMismatches_0_4, &STATE_VARIABLE_NumMismatches_34_34, STATE_VARIABLE_PiecesCord_0_6, &STATE_VARIABLE_PiecesCord_35_35);
      Var_40 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_40;
      next_value_of_HeadVar__3_3 = BoundInsts_19;
      next_value_of_STATE_VARIABLE_NumMismatches_0_4 = STATE_VARIABLE_NumMismatches_34_34;
      next_value_of_STATE_VARIABLE_PiecesCord_0_6 = STATE_VARIABLE_PiecesCord_35_35;
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
  MR_Word BoundInst_8,
  MR_Integer STATE_VARIABLE_NumMismatches_0_16,
  MR_Integer * STATE_VARIABLE_NumMismatches_17,
  MR_Word STATE_VARIABLE_PiecesCord_0_18,
  MR_Word * STATE_VARIABLE_PiecesCord_19)
{
  {
    MR_Word ConsId_11;
    MR_Word SubInsts_12;
    MR_String InFunctorStr_13;
    MR_String ActualStr_14;
    MR_Word Pieces_15;
    MR_String Var_29;
    MR_Integer Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_44;
    MR_String Var_48;
    MR_String Var_55;
    MR_String Var_58;
    MR_String Var_65;
    MR_String Var_67;
    MR_String Var_68;

    *STATE_VARIABLE_NumMismatches_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumMismatches_0_16 + (MR_Unsigned) 1);
    ConsId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 0))));
    SubInsts_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_8, (MR_Integer) 1))));
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_3[36]), CurNum_7, &Var_48);
    Var_55 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) ":");
    InFunctorStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", Var_55);
    Var_29 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 1, ConsId_11);
    Var_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), SubInsts_12);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_3[36]), Var_33, &Var_58);
    Var_65 = mercury__string__f_43_43_2_f_0(Var_58, (MR_String) ".");
    Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_65);
    Var_68 = mercury__string__f_43_43_2_f_0(Var_29, Var_67);
    ActualStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol is ", Var_68);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (InFunctorStr_13));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (ActualStr_14));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_36));
    }
    Var_44 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces_15);
    *STATE_VARIABLE_PiecesCord_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_PiecesCord_0_18, Var_44);
  }
}

static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    mercury__string__int_to_string_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
  MR_Integer CurNum_9,
  MR_String FunctorName_10,
  MR_Integer ActualArity_11,
  MR_Word ExpectedAritiesSet_12,
  MR_Integer STATE_VARIABLE_NumMismatches_0_22,
  MR_Integer * STATE_VARIABLE_NumMismatches_23,
  MR_Word STATE_VARIABLE_PiecesCord_0_24,
  MR_Word * STATE_VARIABLE_PiecesCord_25)
{
  {
    MR_String InFunctorStr_15;
    MR_Word ExpectedArities_16;
    MR_Word ExpectedArityStrs_17;
    MR_String ExpectedArityOrStr_18;
    MR_String ActualStr_19;
    MR_String ExpectedStr_20;
    MR_Word Pieces_21;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_57;
    MR_String Var_64;
    MR_String Var_71;
    MR_String Var_74;
    MR_String Var_81;
    MR_String Var_83;
    MR_String Var_84;
    MR_String Var_87;

    *STATE_VARIABLE_NumMismatches_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumMismatches_0_22 + (MR_Unsigned) 1);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_3[36]), CurNum_9, &Var_64);
    Var_71 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) ":");
    InFunctorStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", Var_71);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_3[36]), ActualArity_11, &Var_74);
    Var_81 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) ",");
    Var_83 = mercury__string__f_43_43_2_f_0((MR_String) " has arity ", Var_81);
    Var_84 = mercury__string__f_43_43_2_f_0(FunctorName_10, Var_83);
    ActualStr_19 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol ", Var_84);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ExpectedAritiesSet_12, &ExpectedArities_16);
    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__inst_check_scalar_common_2[6]), ExpectedArities_16, &ExpectedArityStrs_17);
    ExpectedArityOrStr_18 = mercury__string__join_list_2_f_0((MR_String) "or", ExpectedArityStrs_17);
    Var_87 = mercury__string__f_43_43_2_f_0(ExpectedArityOrStr_18, (MR_String) ".");
    ExpectedStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "expected arity was ", Var_87);
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (InFunctorStr_15));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (ActualStr_19));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (ExpectedStr_20));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
    }
    {
      Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_21, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Pieces_21, 1) = ((MR_Box) (Var_45));
    }
    Var_57 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces_21);
    *STATE_VARIABLE_PiecesCord_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), STATE_VARIABLE_PiecesCord_0_24, Var_57);
  }
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
      MR_Word Ctor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ConsName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 2))));
      MR_Integer ConsArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 4))));
      MR_Word STATE_VARIABLE_ExpectedArities_24_24;
      MR_String Var_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ExpectedArities_0_4;

      Var_27 = mdbcomp__sym_name__unqualify_name_1_f_0(ConsName_18);
      succeeded = (strcmp(HeadVar__2_2, Var_27) == 0);
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
      Ctor_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Ctors_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      ConsName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 2))));
      ConsArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 4))));
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
  {
    MR_Word IfSeveral_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return IfSeveral_4;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_check__project_if_alone_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word IfAlone_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return IfAlone_3;
  }
}

static MR_Word MR_CALL 
check_hlds__inst_check__make_cons_id_component_3_f_0(
  MR_Word TypeCtor_5,
  MR_Word SymName_6,
  MR_Integer Arity_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(3), Var_8, 2) = ((MR_Box) (Arity_7));
      MR_hl_field(MR_mktag(3), Var_8, 3) = ((MR_Box) (TypeCtor_5));
    }
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), HeadVar__4_4, 1) = ((MR_Box) (Var_8));
    }
    return HeadVar__4_4;
  }
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
        MR_Word Var_59 = (MR_Word) ((MR_Word) (TypeDefnOrBuiltin_3));

        *TypeCtor_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_59, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word BuiltinType_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnOrBuiltin_3, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) BuiltinType_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *TypeCtor_4 = (MR_Word) (&check_hlds__inst_check_scalar_common_1[58]);
                break;
              case (MR_Integer) 1:
                *TypeCtor_4 = (MR_Word) (&check_hlds__inst_check_scalar_common_1[69]);
                break;
              case (MR_Integer) 2:
                *TypeCtor_4 = (MR_Word) (&check_hlds__inst_check_scalar_common_1[57]);
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_6, (MR_Integer) 0))) & (MR_Integer) 15);

              *TypeCtor_4 = ((&check_hlds__inst_check_vector_common_8[0 + Var_60]))->check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TypeDefnOrBuiltin_3, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *TypeCtor_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_3[62]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_7));
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
  {
    MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 2))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 4))));
    MR_String Var_11;

    Var_11 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *FunctorNameAndArity_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_9));
    }
  }
}

void MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word InstTable0_7;
    MR_Word UserInstTable0_8;
    MR_Word InstIdDefnPairs0_9;
    MR_Word TypeTable_10;
    MR_Word TypeCtorsDefns_11;
    MR_Word FunctorsToTypeDefns_12;
    MR_Word InstIdDefnPairs_13;
    MR_Word UserInstTable_14;
    MR_Word InstTable_15;
    MR_Word Var_20;

    hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &InstTable0_7);
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable0_7, &UserInstTable0_8);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable0_8, &InstIdDefnPairs0_9);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_16, &TypeTable_10);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_10, &TypeCtorsDefns_11);
    Var_20 = mercury__multi_map__init_0_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0));
    check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(TypeCtorsDefns_11, Var_20, &FunctorsToTypeDefns_12);
    check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(TypeTable_10, FunctorsToTypeDefns_12, InstIdDefnPairs0_9, &InstIdDefnPairs_13, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), InstIdDefnPairs_13, &UserInstTable_14);
    hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(UserInstTable_14, InstTable0_7, &InstTable_15);
    hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
  }
}

static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
  }
  else
  {
    MR_Word InstIdDefnPair0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word InstIdDefnPairs0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InstIdDefnPair_16;
    MR_Word InstIdDefnPairs_17;
    MR_Word InstId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstIdDefnPair0_14, (MR_Integer) 0))));
    MR_Word InstDefn0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstIdDefnPair0_14, (MR_Integer) 1))));
    MR_Word InstDefn_21;
    MR_Word STATE_VARIABLE_Specs_24_24;

    check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0(HeadVar__1_1, HeadVar__2_2, InstId_19, InstDefn0_20, &InstDefn_21, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_24_24);
    {
      InstIdDefnPair_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstIdDefnPair_16, 0) = ((MR_Box) (InstId_19));
      MR_hl_field(MR_mktag(0), InstIdDefnPair_16, 1) = ((MR_Box) (InstDefn_21));
    }
    check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(HeadVar__1_1, HeadVar__2_2, InstIdDefnPairs0_15, &InstIdDefnPairs_17, STATE_VARIABLE_Specs_24_24, STATE_VARIABLE_Specs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstIdDefnPair_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstIdDefnPairs_17));
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_TypeCtor_4;

    check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TypeCtor_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_TypeCtor_4));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__400__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0(
  MR_Word TypeTable_8,
  MR_Word FunctorsToTypesMap_9,
  MR_Word InstId_10,
  MR_Word InstDefn0_11,
  MR_Word * InstDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  {
    MR_bool succeeded;
    MR_Word InstVarSet_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn0_11, (MR_Integer) 0))));
    MR_Word InstParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn0_11, (MR_Integer) 1))));
    MR_Word InstBody_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn0_11, (MR_Integer) 2))));
    MR_Word IFTC0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn0_11, (MR_Integer) 3))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn0_11, (MR_Integer) 4))));
    MR_Word Status_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn0_11, (MR_Integer) 5))));
    MR_Word Inst_20 = (MR_Word) (InstBody_16);

    switch (MR_tag((MR_Word) Inst_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_56;

          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (IFTC0_17));
            MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
          *InstDefn_12 = InstDefn0_11;
          *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_0_54;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_56;

          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (IFTC0_17));
            MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
          *InstDefn_12 = InstDefn0_11;
          *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_0_54;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word BoundInsts_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_20, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) IFTC0_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(IFTC0_17)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_not_applicable");
                        return;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word TypeableFunctors_37;
                        MR_Word PossibleTypeSets_38;

                        check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(FunctorsToTypesMap_9, BoundInsts_23, (MR_Integer) 1, &TypeableFunctors_37, (MR_Word) ((MR_Unsigned) 0U), &PossibleTypeSets_38);
                        switch (TypeableFunctors_37) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word PossibleTypesSet_39;
                              MR_Word PossibleTypes_40;
                              MR_Word PossibleTypeCtors_41;
                              MR_Word IFTC_112;

                              PossibleTypesSet_39 = mercury__set__intersect_list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), PossibleTypeSets_38);
                              PossibleTypes_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), PossibleTypesSet_39);
                              check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(InstId_10, InstDefn0_11, BoundInsts_23, PossibleTypes_40, PossibleTypeSets_38, STATE_VARIABLE_Specs_0_54, STATE_VARIABLE_Specs_55);
                              mercury__list__map_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&check_hlds__inst_check_scalar_common_2[5]), PossibleTypes_40, &PossibleTypeCtors_41);
                              {
                                IFTC_112 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), IFTC_112, 0) = ((MR_Box) (PossibleTypeCtors_41));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                                *InstDefn_12 = base;
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstVarSet_14));
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstParams_15));
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InstBody_16));
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IFTC_112));
                                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_18));
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Status_19));
                              }
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              *InstDefn_12 = InstDefn0_11;
                              *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_0_54;
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_applicable_error");
                        return;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ForTypeCtor0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IFTC0_17, (MR_Integer) 0))));
                    MR_Word ForTypeCtorName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor0_24, (MR_Integer) 0))));
                    MR_Integer ForTypeCtorArity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor0_24, (MR_Integer) 1))));
                    MR_Word IFTC_32;

                    succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "int");
                    if (succeeded)
                      succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      MR_Word ForTypeKind_33;
                      MR_Word MismatchesCord_34;
                      MR_Word Mismatches_35;
                      MR_Word MatchSpecs_36;
                      MR_Word Var_109;
                      MR_Word ForTypeCtor_27;

                      ForTypeCtor_27 = parse_tree__builtin_lib_types__int_type_ctor_0_f_0();
                      ForTypeKind_33 = (MR_Word) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[18]));
                      Var_109 = mercury__cord__init_0_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0));
                      check_hlds__inst_check__check_for_type_bound_insts_4_p_0(ForTypeKind_33, BoundInsts_23, Var_109, &MismatchesCord_34);
                      Mismatches_35 = mercury__cord__list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), MismatchesCord_34);
                      check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(InstId_10, InstDefn0_11, ForTypeKind_33, &IFTC_32, Mismatches_35, &MatchSpecs_36);
                      *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MatchSpecs_36, STATE_VARIABLE_Specs_0_54);
                    }
                    else
                    {
                      MR_Word ForTypeCtor_139;
                      MR_Word MaybeForTypeKind_140;

                      succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "uint");
                      if (succeeded)
                        succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        ForTypeCtor_139 = parse_tree__builtin_lib_types__uint_type_ctor_0_f_0();
                        MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[37]));
                      }
                      else
                      {
                        succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "int8");
                        if (succeeded)
                          succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          ForTypeCtor_139 = parse_tree__builtin_lib_types__int8_type_ctor_0_f_0();
                          MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[38]));
                        }
                        else
                        {
                          succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "uint8");
                          if (succeeded)
                            succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            ForTypeCtor_139 = parse_tree__builtin_lib_types__uint8_type_ctor_0_f_0();
                            MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[39]));
                          }
                          else
                          {
                            succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "int16");
                            if (succeeded)
                              succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                            if (succeeded)
                            {
                              ForTypeCtor_139 = parse_tree__builtin_lib_types__int16_type_ctor_0_f_0();
                              MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[40]));
                            }
                            else
                            {
                              succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "uint16");
                              if (succeeded)
                                succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                ForTypeCtor_139 = parse_tree__builtin_lib_types__uint16_type_ctor_0_f_0();
                                MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[41]));
                              }
                              else
                              {
                                succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "int32");
                                if (succeeded)
                                  succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                                if (succeeded)
                                {
                                  ForTypeCtor_139 = parse_tree__builtin_lib_types__int32_type_ctor_0_f_0();
                                  MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[42]));
                                }
                                else
                                {
                                  succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "uint32");
                                  if (succeeded)
                                    succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    ForTypeCtor_139 = parse_tree__builtin_lib_types__uint32_type_ctor_0_f_0();
                                    MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[43]));
                                  }
                                  else
                                  {
                                    succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "int64");
                                    if (succeeded)
                                      succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                                    if (succeeded)
                                    {
                                      ForTypeCtor_139 = parse_tree__builtin_lib_types__int64_type_ctor_0_f_0();
                                      MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[44]));
                                    }
                                    else
                                    {
                                      succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "uint64");
                                      if (succeeded)
                                        succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                                      if (succeeded)
                                      {
                                        ForTypeCtor_139 = parse_tree__builtin_lib_types__uint64_type_ctor_0_f_0();
                                        MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[45]));
                                      }
                                      else
                                      {
                                        succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "float");
                                        if (succeeded)
                                          succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                                        if (succeeded)
                                        {
                                          ForTypeCtor_139 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
                                          MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[46]));
                                        }
                                        else
                                        {
                                          MR_String CName_29;

                                          succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                                          if (succeeded)
                                          {
                                            if (((MR_tag((MR_Word) ForTypeCtorName_25)) == (MR_Integer) 1))
                                            {
                                              MR_String Var_122 = ((MR_String) ((MR_hl_field(MR_mktag(1), ForTypeCtorName_25, (MR_Integer) 1))));
                                              MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForTypeCtorName_25, (MR_Integer) 0))));
                                              MR_String Var_124;

                                              succeeded = ((MR_tag((MR_Word) Var_123)) == (MR_Integer) 0);
                                              if (succeeded)
                                              {
                                                Var_124 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_123, (MR_Integer) 0))));
                                                if ((strcmp(Var_124, (MR_String) "") == 0))
                                                {
                                                  CName_29 = Var_122;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                if ((strcmp(Var_124, (MR_String) "char") == 0))
                                                {
                                                  CName_29 = Var_122;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                  succeeded = MR_FALSE;
                                              }
                                            }
                                            else
                                            {
                                              CName_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForTypeCtorName_25, (MR_Integer) 0))));
                                              succeeded = MR_TRUE;
                                            }
                                            if (succeeded)
                                            {
                                              if ((strcmp(CName_29, (MR_String) "char") == 0))
                                                succeeded = MR_TRUE;
                                              else
                                              if ((strcmp(CName_29, (MR_String) "character") == 0))
                                                succeeded = MR_TRUE;
                                              else
                                                succeeded = MR_FALSE;
                                            }
                                          }
                                          if (succeeded)
                                          {
                                            ForTypeCtor_139 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
                                            MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[47]));
                                          }
                                          else
                                          {
                                            succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(ForTypeCtorName_25, (MR_String) "string");
                                            if (succeeded)
                                              succeeded = (ForTypeCtorArity_26 == (MR_Integer) 0);
                                            if (succeeded)
                                            {
                                              ForTypeCtor_139 = parse_tree__builtin_lib_types__string_type_ctor_0_f_0();
                                              MaybeForTypeKind_140 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[48]));
                                            }
                                            else
                                            {
                                              MR_Word ForTypeDefn_30;

                                              ForTypeCtor_139 = ForTypeCtor0_24;
                                              succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_8, ForTypeCtor0_24, &ForTypeDefn_30);
                                              if (succeeded)
                                              {
                                                MR_Word ForTypeKind0_31;

                                                {
                                                  ForTypeKind0_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(1), ForTypeKind0_31, 0) = ((MR_Box) (ForTypeCtor_139));
                                                  MR_hl_field(MR_mktag(1), ForTypeKind0_31, 1) = ((MR_Box) (ForTypeDefn_30));
                                                }
                                                {
                                                  MaybeForTypeKind_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                                  MR_hl_field(MR_mktag(1), MaybeForTypeKind_140, 0) = ((MR_Box) (ForTypeKind0_31));
                                                }
                                              }
                                              else
                                                MaybeForTypeKind_140 = (MR_Word) ((MR_Unsigned) 0U);
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
                      if ((MaybeForTypeKind_140 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(InstId_10, InstDefn0_11, ForTypeCtor_139, STATE_VARIABLE_Specs_0_54, STATE_VARIABLE_Specs_55);
                        IFTC_32 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      else
                      {
                        MR_Word ForTypeKind_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeKind_140, (MR_Integer) 0))));
                        MR_Word MismatchesCord_126;
                        MR_Word Mismatches_127;
                        MR_Word MatchSpecs_128;
                        MR_Word Var_129;

                        Var_129 = mercury__cord__init_0_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0));
                        check_hlds__inst_check__check_for_type_bound_insts_4_p_0(ForTypeKind_125, BoundInsts_23, Var_129, &MismatchesCord_126);
                        Mismatches_127 = mercury__cord__list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), MismatchesCord_126);
                        check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(InstId_10, InstDefn0_11, ForTypeKind_125, &IFTC_32, Mismatches_127, &MatchSpecs_128);
                        *STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), MatchSpecs_128, STATE_VARIABLE_Specs_0_54);
                      }
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      *InstDefn_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstVarSet_14));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstParams_15));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InstBody_16));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IFTC_32));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Context_18));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Status_19));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_applicable_known");
                    return;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              MR_Word Var_56;

              {
                Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[3]));
                MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (IFTC0_17));
                MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_56, (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
              *InstDefn_12 = InstDefn0_11;
              *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_0_54;
            }
            break;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_Str_4;

    conv2_Str_4 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Str_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MismatchFromType_6;

    check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MismatchFromType_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_MismatchFromType_6));
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_120 = ((MR_Word) ((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_120));
    check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) (env_ptr_arg);

    switch (MR_tag((MR_Word) (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_120)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorAndDefn_31 = (MR_Word) ((MR_Word) ((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_120));
          MR_Word TypeDefn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAndDefn_31, (MR_Integer) 1))));
          MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAndDefn_31, (MR_Integer) 0))));

          (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0((MR_Integer) 0, TypeDefn_33);
        }
        break;
      case (MR_Integer) 1:
        (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
        break;
    }
    if ((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded)
      check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), &(env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_120, (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4, env_ptr);
        (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(
  MR_Word InstId_8,
  MR_Word InstDefn_9,
  MR_Word BoundInsts_10,
  MR_Word PossibleTypes_11,
  MR_Word PossibleTypeSets_12,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s env;

    (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11 = PossibleTypes_11;
    {
      MR_Word InstStatus_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 5))));
      MR_Word DefinedInThisModule_15;
      MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 0))));
      MR_Word Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 1))));
      MR_Word Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 2))));
      MR_Word Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 3))));
      MR_Word Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 4))));

      DefinedInThisModule_15 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_14);
      switch (DefinedInThisModule_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
          break;
        case (MR_Integer) 1:
          if (((env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 4))));
            MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstId_8, (MR_Integer) 0))));
            MR_Integer InstArity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstId_8, (MR_Integer) 1))));
            MR_Word NoMatchPieces_19;
            MR_Word AllPossibleTypesSet_20;
            MR_Word AllPossibleTypes_21;
            MR_Word MismatchesFromPossibleTypes_22;
            MR_Word SortedMismatchesFromPossibleTypes_23;
            MR_Word MismatchPieces_24;
            MR_Word Pieces_25;
            MR_Word Spec_26;
            MR_Word Var_101;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_110;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_141 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 0))));
            MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 1))));
            MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 2))));
            MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 3))));
            MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 5))));

            {
              Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (InstName_17));
              MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (InstArity_18));
            }
            {
              Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (Var_103));
            }
            {
              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[18])));
            }
            {
              NoMatchPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NoMatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[53])));
              MR_hl_field(MR_mktag(1), NoMatchPieces_19, 1) = ((MR_Box) (Var_101));
            }
            AllPossibleTypesSet_20 = mercury__set__union_list_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), PossibleTypeSets_12);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), AllPossibleTypesSet_20, &AllPossibleTypes_21);
            {
              Var_110 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_110, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_110, 3) = ((MR_Box) (BoundInsts_10));
            }
            mercury__list__map_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0), Var_110, AllPossibleTypes_21, &MismatchesFromPossibleTypes_22);
            mercury__list__sort_2_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0), MismatchesFromPossibleTypes_22, &SortedMismatchesFromPossibleTypes_23);
            check_hlds__inst_check__create_mismatch_pieces_2_p_0(SortedMismatchesFromPossibleTypes_23, &MismatchPieces_24);
            Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NoMatchPieces_19, MismatchPieces_24);
            {
              Var_116 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (Pieces_25));
            }
            {
              Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
              MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
            }
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_113));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_44 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
            }
          }
          else
          {
            MR_Word InstIsExported_29;

            InstIsExported_29 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(InstStatus_14);
            switch (InstIsExported_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(&env);
                break;
            }
            if ((env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded)
              *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
            else
            {
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;
              MR_Word Var_95;
              MR_Word Context_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 4))));
              MR_Word InstName_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstId_8, (MR_Integer) 0))));
              MR_Integer InstArity_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstId_8, (MR_Integer) 1))));
              MR_Word Pieces_124;
              MR_Word Spec_125;
              MR_Word Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 1))));
              MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 0))));
              MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 0))));
              MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 1))));
              MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 2))));
              MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 3))));
              MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_9, (MR_Integer) 5))));

              if ((Var_161 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String OnePossibleTypeStr_37;
                MR_Word Var_72;
                MR_Word Var_73;
                MR_Word Var_74;
                MR_Word Var_75;
                MR_Word Var_78;
                MR_Word Var_81;
                MR_Word Var_82;

                OnePossibleTypeStr_37 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(Var_162);
                {
                  Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (InstName_122));
                  MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (InstArity_123));
                }
                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                  MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (OnePossibleTypeStr_37));
                }
                {
                  Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
                  MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[22])));
                }
                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[55])));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
                }
                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[54])));
                  MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
                }
                {
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
                  MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
                }
                {
                  Pieces_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[53])));
                  MR_hl_field(MR_mktag(1), Pieces_124, 1) = ((MR_Box) (Var_72));
                }
              }
              else
              {
                MR_Word PossibleTypeStrs_41;
                MR_String PossibleTypesStr_42;
                MR_Word Var_51;
                MR_Word Var_52;
                MR_Word Var_53;
                MR_Word Var_54;
                MR_Word Var_57;
                MR_Word Var_60;
                MR_Word Var_61;

                PossibleTypeStrs_41 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__inst_check_scalar_common_2[4]), (env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11);
                PossibleTypesStr_42 = mercury__string__join_list_2_f_0((MR_String) ", ", PossibleTypeStrs_41);
                {
                  Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (InstName_122));
                  MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (InstArity_123));
                }
                {
                  Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                  MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
                }
                {
                  Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (PossibleTypesStr_42));
                }
                {
                  Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
                  MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[25])));
                }
                {
                  Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[55])));
                  MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
                }
                {
                  Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[56])));
                  MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
                }
                {
                  Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
                  MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
                }
                {
                  Pieces_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[53])));
                  MR_hl_field(MR_mktag(1), Pieces_124, 1) = ((MR_Box) (Var_51));
                }
              }
              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Pieces_124));
              }
              {
                Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
                MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Context_121));
                MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
              }
              {
                Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
                MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_125 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_125, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(0), Spec_125, 1) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(MR_mktag(0), Spec_125, 2) = ((MR_Box) (Var_92));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_44 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_125));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
              }
            }
          }
          break;
      }
    }
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
    MR_Word FirstMismatch_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word LaterMismatches_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer FirstNumMismatches_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FirstMismatch_3, (MR_Integer) 0))));
    MR_Word TakenLaterMismatches_9;

    check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(FirstNumMismatches_6, LaterMismatches_4, &TakenLaterMismatches_9);
    if ((TakenLaterMismatches_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeDefnOrBuiltin_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstMismatch_3, (MR_Integer) 1))));
      MR_Word BoundInstPieces_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstMismatch_3, (MR_Integer) 2))));
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_String Var_39;

      Var_39 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(TypeDefnOrBuiltin_32);
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (Var_39));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[30])));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[51])));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
      }
      *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, BoundInstPieces_33);
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
        RelevantMismatches_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RelevantMismatches_12, 0) = ((MR_Box) (FirstMismatch_3));
        MR_hl_field(MR_mktag(1), RelevantMismatches_12, 1) = ((MR_Box) (TakenLaterMismatches_9));
      }
      mercury__list__length_2_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0), RelevantMismatches_12, &NumRelevantMismatches_13);
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (NumRelevantMismatches_13));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[27])));
      }
      {
        HeadPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[52])));
        MR_hl_field(MR_mktag(1), HeadPieces_14, 1) = ((MR_Box) (Var_18));
      }
      check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(RelevantMismatches_12, (MR_Integer) 1, &TailPieces_15);
      *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_14, TailPieces_15);
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
    MR_Word Mismatch_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Mismatches_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailPieces_9;
    MR_Word TypeDefnOrBuiltin_11;
    MR_Word BoundInstPieces_12;
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
    TypeDefnOrBuiltin_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_5, (MR_Integer) 1))));
    BoundInstPieces_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_5, (MR_Integer) 2))));
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (HeadVar__2_2));
    }
    Var_25 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(TypeDefnOrBuiltin_11);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[30])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[50])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), BoundInstPieces_12, TailPieces_9);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_35);
  }
}

static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
  MR_Word TypeDefnOrBuiltin_3)
{
  {
    MR_String Str_4;

    switch (MR_tag((MR_Word) TypeDefnOrBuiltin_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtor_5;
          MR_Word Var_23 = (MR_Word) ((MR_Word) (TypeDefnOrBuiltin_3));

          TypeCtor_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
          Str_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(TypeCtor_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word BuiltinType_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnOrBuiltin_3, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) BuiltinType_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Str_4 = (MR_String) "float";
                  break;
                case (MR_Integer) 1:
                  Str_4 = (MR_String) "string";
                  break;
                case (MR_Integer) 2:
                  Str_4 = (MR_String) "char";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_7, (MR_Integer) 0))) & (MR_Integer) 15);

                Str_4 = ((&check_hlds__inst_check_vector_common_6[0 + Var_24]))->check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), TypeDefnOrBuiltin_3, (MR_Integer) 0))));
          MR_String Var_25;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__inst_check_scalar_common_3[36]), Arity_8, &Var_25);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", Var_25);
        }
        break;
    }
    return Str_4;
  }
}

static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Mismatch_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Mismatches_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer NumMismatches_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Mismatch_6, (MR_Integer) 0))));

      succeeded = (HeadVar__1_1 == NumMismatches_9);
      if (succeeded)
      {
        MR_Word TakenTail_12;

        check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(HeadVar__1_1, Mismatches_7, &TakenTail_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mismatch_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TakenTail_12));
        }
      }
      else
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_IfSeveral_4;

    conv3_IfSeveral_4 = check_hlds__inst_check__project_if_several_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_IfSeveral_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_IfAlone_3;

    conv2_IfAlone_3 = check_hlds__inst_check__project_if_alone_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_IfAlone_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(
  MR_Word InstId_7,
  MR_Word InstDefn_8,
  MR_Word ForTypeKind_9,
  MR_Word * IFTC_10,
  MR_Word Mismatches_11,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  {
    MR_bool succeeded;
    MR_Word InstSymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstId_7, (MR_Integer) 0))));
    MR_Integer InstArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstId_7, (MR_Integer) 1))));
    MR_Word ShortInstSymName_15;
    MR_Word Context_16;
    MR_Word InstStatus_17;
    MR_Word InstDefinedInThisModule_18;
    MR_Word ForTypeCtor_19;
    MR_Word TypeCtorName_20;
    MR_Integer TypeCtorArity_21;
    MR_String Var_44;
    MR_Word STATE_VARIABLE_Specs_74_74;
    MR_Word STATE_VARIABLE_Specs_134_134;

    Var_44 = mdbcomp__sym_name__unqualify_name_1_f_0(InstSymName_13);
    {
      ShortInstSymName_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ShortInstSymName_15, 0) = ((MR_Box) (Var_44));
    }
    Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_8, (MR_Integer) 4))));
    InstStatus_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_8, (MR_Integer) 5))));
    InstDefinedInThisModule_18 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_17);
    switch (MR_tag((MR_Word) ForTypeKind_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ForTypeKind_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              ForTypeCtor_19 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
              TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
              TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
              STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 1:
            {
              ForTypeCtor_19 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
              TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
              TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
              STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              ForTypeCtor_19 = parse_tree__builtin_lib_types__string_type_ctor_0_f_0();
              TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
              TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
              STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForTypeDefn_22;
          MR_Word InstIsExported_23;
          MR_Word Var_45;

          ForTypeCtor_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForTypeKind_9, (MR_Integer) 0))));
          ForTypeDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForTypeKind_9, (MR_Integer) 1))));
          TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
          TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
          InstIsExported_23 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(InstStatus_17);
          succeeded = (InstIsExported_23 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_45 = (MR_Integer) 0;
            succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0(Var_45, ForTypeDefn_22);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word VisPieces_24;
            MR_Word VisSpec_25;
            MR_Word Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;

            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (ShortInstSymName_15));
              MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (InstArity_14));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
            }
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (TypeCtorName_20));
              MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (TypeCtorArity_21));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[12])));
            }
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[46])));
              MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
            }
            {
              Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
            }
            {
              VisPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), VisPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[41])));
              MR_hl_field(MR_mktag(1), VisPieces_24, 1) = ((MR_Box) (Var_48));
            }
            {
              Var_71 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (VisPieces_24));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Context_16));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
            }
            {
              Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              VisSpec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), VisSpec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), VisSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(MR_mktag(0), VisSpec_25, 2) = ((MR_Box) (Var_68));
            }
            {
              STATE_VARIABLE_Specs_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_74_74, 0) = ((MR_Box) (VisSpec_25));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_74_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
            STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_157 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ForTypeKind_9, (MR_Integer) 0))) & (MR_Integer) 15);

          switch (Var_157) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__int_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 4:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__int16_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 6:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__int32_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 8:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__int64_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__int8_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__uint_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 5:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__uint16_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 7:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__uint32_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 9:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__uint64_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 3:
              {
                ForTypeCtor_19 = parse_tree__builtin_lib_types__uint8_type_ctor_0_f_0();
                TypeCtorName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 0))));
                TypeCtorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ForTypeCtor_19, (MR_Integer) 1))));
                STATE_VARIABLE_Specs_74_74 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
    }
    if ((Mismatches_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_134_134 = STATE_VARIABLE_Specs_74_74;
    else
    {
      MR_Word MismatchesTail_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mismatches_11, (MR_Integer) 1))));
      MR_Word MismatchConsIdComponents_28;
      MR_Word NearMisses_29;
      MR_String FuncSymbolPhrase_30;
      MR_String IsAreNotPhrase_31;
      MR_Word MismatchConsIdPieces_32;
      MR_Word MismatchPieces_33;
      MR_Word NearMissPieces_34;
      MR_Word MismatchSpec_39;
      MR_Word Var_90;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_105;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_113;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_Box conv0_FuncSymbolPhrase_30;
      MR_Box conv1_IsAreNotPhrase_31;

      check_hlds__inst_check__cons_id_strs_and_near_misses_3_p_0(Mismatches_11, &MismatchConsIdComponents_28, &NearMisses_29);
      conv0_FuncSymbolPhrase_30 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Mismatches_11, ((MR_Box) ((MR_String) "function symbol")), ((MR_Box) ((MR_String) "function symbols")));
      FuncSymbolPhrase_30 = ((MR_String) (conv0_FuncSymbolPhrase_30));
      conv1_IsAreNotPhrase_31 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Mismatches_11, ((MR_Box) ((MR_String) "is not a function symbol")), ((MR_Box) ((MR_String) "are not function symbols")));
      IsAreNotPhrase_31 = ((MR_String) (conv1_IsAreNotPhrase_31));
      MismatchConsIdPieces_32 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", MismatchConsIdComponents_28);
      {
        Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (ShortInstSymName_15));
        MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (InstArity_14));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Var_95));
      }
      {
        Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (TypeCtorName_20));
        MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (TypeCtorArity_21));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (Var_101));
      }
      {
        Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (FuncSymbolPhrase_30));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[48])));
        MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_108));
      }
      {
        Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[45])));
        MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_105));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_102));
      }
      {
        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[47])));
        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_99));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_96));
      }
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[41])));
        MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_93));
      }
      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (IsAreNotPhrase_31));
      }
      {
        Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (Var_113));
        MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[14])));
      }
      Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MismatchConsIdPieces_32, Var_112);
      MismatchPieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_90, Var_111);
      if ((NearMisses_29 == (MR_Word) ((MR_Unsigned) 0U)))
        NearMissPieces_34 = (MR_Word) ((MR_Unsigned) 0U);
      else
      if ((MismatchesTail_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_122;

        Var_122 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_near_miss_cons_mismatch_0), (MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), (MR_Word) (&check_hlds__inst_check_scalar_common_2[2]), NearMisses_29);
        NearMissPieces_34 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_122);
      }
      else
      {
        MR_Word Var_120;

        Var_120 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_near_miss_cons_mismatch_0), (MR_Word) (&check_hlds__inst_check_scalar_common_1[1]), (MR_Word) (&check_hlds__inst_check_scalar_common_2[3]), NearMisses_29);
        NearMissPieces_34 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_120);
      }
      {
        Var_129 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (MismatchPieces_33));
      }
      {
        Var_131 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (NearMissPieces_34));
      }
      {
        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_130));
      }
      {
        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Context_16));
        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_128));
      }
      {
        Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (Var_127));
        MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MismatchSpec_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MismatchSpec_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), MismatchSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(MR_mktag(0), MismatchSpec_39, 2) = ((MR_Box) (Var_126));
      }
      {
        STATE_VARIABLE_Specs_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_134_134, 0) = ((MR_Box) (MismatchSpec_39));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_134_134, 1) = ((MR_Box) (STATE_VARIABLE_Specs_74_74));
      }
    }
    if ((STATE_VARIABLE_Specs_134_134 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *IFTC_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForTypeCtor_19));
      }
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_134_134;
    }
    else
    {
      *IFTC_10 = (MR_Word) ((MR_Unsigned) 8U);
      switch (InstDefinedInThisModule_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_42 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_134_134;
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__cons_id_strs_and_near_misses_3_p_0(
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
    MR_Word Mismatch_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Mismatches_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ConsIdComponent_6;
    MR_Word ConsIdComponents_7;
    MR_Word NearMissMismatchesTail_9;
    MR_Word MaybeNearMisses_10;

    check_hlds__inst_check__cons_id_strs_and_near_misses_3_p_0(Mismatches_5, &ConsIdComponents_7, &NearMissMismatchesTail_9);
    ConsIdComponent_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_4, (MR_Integer) 0))));
    MaybeNearMisses_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mismatch_4, (MR_Integer) 1))));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsIdComponent_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConsIdComponents_7));
    }
    if ((MaybeNearMisses_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = NearMissMismatchesTail_9;
    else
    {
      MR_Word IfAlone_13;
      MR_Word IfSeveral_14;
      MR_Word NearMissMismatch_15;
      MR_Word Var_16;
      MR_Word Var_19;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_33;

      Var_19 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "or", MaybeNearMisses_10);
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
      }
      IfAlone_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_16, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[16])));
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (IfAlone_13));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[45])));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (ConsIdComponent_6));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_30));
      }
      {
        IfSeveral_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IfSeveral_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[44])));
        MR_hl_field(MR_mktag(1), IfSeveral_14, 1) = ((MR_Box) (Var_29));
      }
      {
        NearMissMismatch_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NearMissMismatch_15, 0) = ((MR_Box) (IfAlone_13));
        MR_hl_field(MR_mktag(0), NearMissMismatch_15, 1) = ((MR_Box) (IfSeveral_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NearMissMismatch_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NearMissMismatchesTail_9));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
  MR_Word Section_3,
  MR_Word TypeDefn_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeStatus_5;
    MR_Word Status_10;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_4, &TypeStatus_5);
    Status_10 = (MR_Word) (TypeStatus_5);
    switch (MR_tag((MR_Word) Status_10)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Status_10)) {
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
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
  MR_Word InstId_6,
  MR_Word InstDefn_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word InstStatus_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 5))));
    MR_Word InstDefinedInThisModule_11;

    InstDefinedInThisModule_11 = hlds__status__inst_status_defined_in_this_module_1_f_0(InstStatus_10);
    switch (InstDefinedInThisModule_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_7, (MR_Integer) 4))));
          MR_Word InstName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstId_6, (MR_Integer) 0))));
          MR_Integer InstArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstId_6, (MR_Integer) 1))));
          MR_Word TypeCtorName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 0))));
          MR_Integer TypeCtorArity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 1))));
          MR_Word Pieces_17;
          MR_Word Spec_18;
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;

          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (InstName_13));
            MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (InstArity_14));
          }
          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
          }
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (TypeCtorName_15));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (TypeCtorArity_16));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[9])));
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[42])));
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
          }
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
          }
          {
            Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[41])));
            MR_hl_field(MR_mktag(1), Pieces_17, 1) = ((MR_Box) (Var_23));
          }
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Pieces_17));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Context_12));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_45));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_43));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeableFunctors_0_3,
  MR_Word * STATE_VARIABLE_TypeableFunctors_4,
  MR_Word STATE_VARIABLE_PossibleTypeSets_0_5,
  MR_Word * STATE_VARIABLE_PossibleTypeSets_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PossibleTypeSets_6 = STATE_VARIABLE_PossibleTypeSets_0_5;
      *STATE_VARIABLE_TypeableFunctors_4 = STATE_VARIABLE_TypeableFunctors_0_3;
    }
    else
    {
      MR_Word BoundInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundInsts_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MaybePossibleTypes_19;
      MR_Word STATE_VARIABLE_PossibleTypeSets_26_26;
      MR_Word STATE_VARIABLE_TypeableFunctors_27_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeableFunctors_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PossibleTypeSets_0_5;

      check_hlds__inst_check__get_possible_types_for_bound_inst_3_p_0(HeadVar__1_1, BoundInst_15, &MaybePossibleTypes_19);
      if ((MaybePossibleTypes_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_TypeableFunctors_27_27 = (MR_Integer) 0;
        STATE_VARIABLE_PossibleTypeSets_26_26 = STATE_VARIABLE_PossibleTypeSets_0_5;
      }
      else
      {
        MR_Word PossibleTypes_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePossibleTypes_19, (MR_Integer) 0))));
        MR_Word PossibleTypeSet_21;

        PossibleTypeSet_21 = mercury__set__list_to_set_1_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0), PossibleTypes_20);
        {
          STATE_VARIABLE_PossibleTypeSets_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_PossibleTypeSets_26_26, 0) = ((MR_Box) (PossibleTypeSet_21));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_PossibleTypeSets_26_26, 1) = ((MR_Box) (STATE_VARIABLE_PossibleTypeSets_0_5));
        }
        STATE_VARIABLE_TypeableFunctors_27_27 = STATE_VARIABLE_TypeableFunctors_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = BoundInsts_16;
      next_value_of_STATE_VARIABLE_TypeableFunctors_0_3 = STATE_VARIABLE_TypeableFunctors_27_27;
      next_value_of_STATE_VARIABLE_PossibleTypeSets_0_5 = STATE_VARIABLE_PossibleTypeSets_26_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TypeableFunctors_0_3 = next_value_of_STATE_VARIABLE_TypeableFunctors_0_3;
      STATE_VARIABLE_PossibleTypeSets_0_5 = next_value_of_STATE_VARIABLE_PossibleTypeSets_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_inst_3_p_0(
  MR_Word FunctorsToTypesMap_4,
  MR_Word BoundInst_5,
  MR_Word * MaybeTypes_6)
{
  {
    MR_bool succeeded;
    MR_Word ConsId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_5, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) ConsId_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *MaybeTypes_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *MaybeTypes_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
          case (MR_Integer) 22:
          case (MR_Integer) 23:
            *MaybeTypes_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));
              MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 2))));
              MR_String Name_12;
              MR_Word FunctorNameAndArity_13;
              MR_Word UserTypes_15;
              MR_Word UserCharTypes_16;
              MR_Word Types_17;
              MR_Word TypeCtorDefns_14;
              MR_Integer Var_69;
              MR_Word Var_72;

              Name_12 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_9);
              {
                FunctorNameAndArity_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FunctorNameAndArity_13, 0) = ((MR_Box) (Name_12));
                MR_hl_field(MR_mktag(0), FunctorNameAndArity_13, 1) = ((MR_Box) (Arity_10));
              }
              succeeded = mercury__multi_map__search_3_p_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0), FunctorsToTypesMap_4, ((MR_Box) (FunctorNameAndArity_13)), &TypeCtorDefns_14);
              if (succeeded)
                check_hlds__inst_check__find_matching_user_types_3_p_0(SymName_9, TypeCtorDefns_14, &UserTypes_15);
              else
                UserTypes_15 = (MR_Word) ((MR_Unsigned) 0U);
              Var_69 = mercury__string__count_codepoints_1_f_0(Name_12);
              succeeded = (Var_69 == (MR_Integer) 1);
              if (succeeded)
                {
                  UserCharTypes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), UserCharTypes_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(1), UserCharTypes_16, 1) = ((MR_Box) (UserTypes_15));
                }
              else
                UserCharTypes_16 = UserTypes_15;
              {
                Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (SymName_9));
                MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Arity_10));
              }
              succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(Var_72);
              if (succeeded)
              {
                MR_Word Var_73;

                {
                  Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (Arity_10));
                }
                {
                  Types_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Types_17, 0) = ((MR_Box) (Var_73));
                  MR_hl_field(MR_mktag(1), Types_17, 1) = ((MR_Box) (UserCharTypes_16));
                }
              }
              else
                Types_17 = UserCharTypes_16;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeTypes_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Types_17));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_66;
              MR_Word Var_67;
              MR_Integer Arity_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_7, (MR_Integer) 1))));

              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (Arity_74));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeTypes_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_66));
              }
            }
            break;
          case (MR_Integer) 5:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[20]));
            break;
          case (MR_Integer) 6:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[35]));
            break;
          case (MR_Integer) 7:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[17]));
            break;
          case (MR_Integer) 8:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[32]));
            break;
          case (MR_Integer) 9:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[8]));
            break;
          case (MR_Integer) 10:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[23]));
            break;
          case (MR_Integer) 11:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[11]));
            break;
          case (MR_Integer) 12:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[26]));
            break;
          case (MR_Integer) 13:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[14]));
            break;
          case (MR_Integer) 14:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[29]));
            break;
          case (MR_Integer) 15:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[3]));
            break;
          case (MR_Integer) 16:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[1]));
            break;
          case (MR_Integer) 17:
            *MaybeTypes_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[5]));
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeCtorAndDefn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypeCtorAndDefns_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MatchingUserTypes0_9;
      MR_Word TypeCtor_10;
      MR_Word TypeCtorSymName_12;
      MR_Word TypeCtorModuleName_15;

      check_hlds__inst_check__find_matching_user_types_3_p_0(HeadVar__1_1, TypeCtorAndDefns_7, &MatchingUserTypes0_9);
      TypeCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorAndDefn_6, (MR_Integer) 0))));
      TypeCtorSymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) TypeCtorSymName_12)) == (MR_Integer) 1))
        TypeCtorModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_12, (MR_Integer) 0))));
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.inst_check.find_matching_user_types\'/3", (MR_String) "TypeCtorSymName is unqualified");
          return;
        }
      if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
      {
        MR_Word FunctorModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

        succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(FunctorModuleName_18, TypeCtorModuleName_15);
        if (succeeded)
        {
          MR_Word Var_22 = (MR_Word) ((MR_Word) (TypeCtorAndDefn_6));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MatchingUserTypes0_9));
          }
        }
        else
          *HeadVar__3_3 = MatchingUserTypes0_9;
      }
      else
      {
        MR_Word Var_23 = (MR_Word) ((MR_Word) (TypeCtorAndDefn_6));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MatchingUserTypes0_9));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0(
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
      MR_Word BoundInst_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word BoundInsts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_10, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Mismatches_133_133;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      switch (MR_tag((MR_Word) ConsId_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_85;

            Var_85 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
            STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_85)));
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Var_85;

            Var_85 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
            STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_85)));
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 18:
            case (MR_Integer) 19:
            case (MR_Integer) 20:
            case (MR_Integer) 21:
            case (MR_Integer) 22:
            case (MR_Integer) 23:
              {
                MR_Word Var_85;

                Var_85 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_85)));
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConsSymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 1))));
                MR_Integer ConsArity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 2))));
                MR_Word ConsIdTypeCtor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_13, (MR_Integer) 3))));

                switch (MR_tag((MR_Word) HeadVar__1_1)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__1_1)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        {
                          MR_Word Var_123;

                          Var_123 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                          STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_123)));
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer Var_124;
                          MR_String ConsName_140;

                          succeeded = ((MR_tag((MR_Word) ConsSymName_15)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            ConsName_140 = ((MR_String) ((MR_hl_field(MR_mktag(0), ConsSymName_15, (MR_Integer) 0))));
                            Var_124 = mercury__string__count_codepoints_1_f_0(ConsName_140);
                            succeeded = (Var_124 == (MR_Integer) 1);
                          }
                          if (succeeded)
                            STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                          else
                          {
                            MR_Word Var_126;

                            Var_126 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                            STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_126)));
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word TypeCtor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
                      MR_Word TypeDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
                      MR_Word TypeDefnBody_20;

                      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_19, &TypeDefnBody_20);
                      switch (MR_tag((MR_Word) TypeDefnBody_20)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Var_128;

                            Var_128 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                            STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_128)));
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word OoMConstructors_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnBody_20, (MR_Integer) 0))));
                            MR_Word Constructors_25;

                            Constructors_25 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMConstructors_21);
                            if (((MR_tag((MR_Word) ConsSymName_15)) == (MR_Integer) 1))
                            {
                              MR_Word ConsModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsSymName_15, (MR_Integer) 0))));
                              MR_Word TypeCtorSymName_29;
                              MR_String ConsName_138 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConsSymName_15, (MR_Integer) 1))));
                              MR_Word CtorArities_139;
                              MR_Word TypeCtorModuleName_31;

                              check_hlds__inst_check__find_ctors_with_given_name_3_p_0(ConsName_138, Constructors_25, &CtorArities_139);
                              TypeCtorSymName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_18, (MR_Integer) 0))));
                              succeeded = ((MR_tag((MR_Word) TypeCtorSymName_29)) == (MR_Integer) 1);
                              if (succeeded)
                              {
                                TypeCtorModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_29, (MR_Integer) 0))));
                                succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(ConsModuleName_28, TypeCtorModuleName_31);
                              }
                              if (succeeded)
                              {
                                MR_Word Var_129;

                                {
                                  Var_129 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                  MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (ConsName_138));
                                }
                                check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0(ConsIdTypeCtor_17, ConsId_13, Var_129, ConsArity_16, CtorArities_139, HeadVar__3_3, &STATE_VARIABLE_Mismatches_133_133);
                              }
                              else
                              {
                                MR_Word MissConsSymName_34;

                                if (((MR_tag((MR_Word) TypeCtorSymName_29)) == (MR_Integer) 1))
                                {
                                  MR_Word TypeCtorModuleName_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_29, (MR_Integer) 0))));

                                  {
                                    MissConsSymName_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), MissConsSymName_34, 0) = ((MR_Box) (TypeCtorModuleName_135));
                                    MR_hl_field(MR_mktag(1), MissConsSymName_34, 1) = ((MR_Box) (ConsName_138));
                                  }
                                }
                                else
                                  {
                                    MissConsSymName_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), MissConsSymName_34, 0) = ((MR_Box) (ConsName_138));
                                  }
                                check_hlds__inst_check__report_near_misses_6_p_0(ConsIdTypeCtor_17, ConsId_13, MissConsSymName_34, CtorArities_139, HeadVar__3_3, &STATE_VARIABLE_Mismatches_133_133);
                              }
                            }
                            else
                            {
                              MR_String ConsName_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), ConsSymName_15, (MR_Integer) 0))));
                              MR_Word CtorArities_27;

                              check_hlds__inst_check__find_ctors_with_given_name_3_p_0(ConsName_26, Constructors_25, &CtorArities_27);
                              check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0(ConsIdTypeCtor_17, ConsId_13, ConsSymName_15, ConsArity_16, CtorArities_27, HeadVar__3_3, &STATE_VARIABLE_Mismatches_133_133);
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word Var_128;

                            Var_128 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                            STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_128)));
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            MR_Word Var_128;

                            Var_128 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                            STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_128)));
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_123;

                      Var_123 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                      STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_123)));
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_119;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_119 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_119 == (MR_Integer) 0);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_121;

                  Var_121 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_121)));
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Var_116;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_116 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_116 == (MR_Integer) 1);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_118;

                  Var_118 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_118)));
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Var_113;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_113 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_113 == (MR_Integer) 2);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_115;

                  Var_115 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_115)));
                }
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Var_110;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_110 == (MR_Integer) 3);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_112;

                  Var_112 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_112)));
                }
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Var_107;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_107 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_107 == (MR_Integer) 4);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_109;

                  Var_109 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_109)));
                }
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Var_104;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_104 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_104 == (MR_Integer) 5);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_106;

                  Var_106 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_106)));
                }
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word Var_101;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_101 == (MR_Integer) 6);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_103;

                  Var_103 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_103)));
                }
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word Var_98;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_98 == (MR_Integer) 7);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_100;

                  Var_100 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_100)));
                }
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Var_95;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_95 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_95 == (MR_Integer) 8);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_97;

                  Var_97 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_97)));
                }
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Var_92;

                succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_92 == (MR_Integer) 9);
                }
                if (succeeded)
                  STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                else
                {
                  MR_Word Var_94;

                  Var_94 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                  STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_94)));
                }
              }
              break;
            case (MR_Integer) 15:
              switch (MR_tag((MR_Word) HeadVar__1_1)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__1_1)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_91;

                        Var_91 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                        STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_91)));
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word Var_91;

                    Var_91 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                    STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_91)));
                  }
                  break;
              }
              break;
            case (MR_Integer) 16:
              switch (MR_tag((MR_Word) HeadVar__1_1)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__1_1)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_89;

                        Var_89 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                        STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_89)));
                      }
                      break;
                    case (MR_Integer) 1:
                      STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word Var_89;

                    Var_89 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                    STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_89)));
                  }
                  break;
              }
              break;
            case (MR_Integer) 17:
              switch (MR_tag((MR_Word) HeadVar__1_1)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__1_1)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_87;

                        Var_87 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                        STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_87)));
                      }
                      break;
                    case (MR_Integer) 2:
                      STATE_VARIABLE_Mismatches_133_133 = HeadVar__3_3;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word Var_87;

                    Var_87 = check_hlds__inst_check__simple_miss_1_f_0(ConsId_13);
                    STATE_VARIABLE_Mismatches_133_133 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), HeadVar__3_3, ((MR_Box) (Var_87)));
                  }
                  break;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = BoundInsts_11;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_Mismatches_133_133;
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
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = check_hlds__inst_check__make_cons_id_component_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
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
  {
    MR_Word NearMisses_12;
    MR_Word Mismatch_13;
    MR_Word Var_16;
    MR_Word Var_17;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (check_hlds__inst_check__report_near_misses_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeCtor_7));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (SymName_9));
    }
    NearMisses_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_16, CtorArities_10);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ConsId_8));
    }
    {
      Mismatch_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Mismatch_13, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Mismatch_13, 1) = ((MR_Box) (NearMisses_12));
    }
    *STATE_VARIABLE_Mismatches_15 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), STATE_VARIABLE_Mismatches_0_14, ((MR_Box) (Mismatch_13)));
  }
}

static MR_Box MR_CALL 
check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    conv0_HeadVar__4_4 = check_hlds__inst_check__make_cons_id_component_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    return wrapper_arg_2;
  }
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
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ConsArity_11)), CtorArities_12);
    if (succeeded)
      *STATE_VARIABLE_Mismatches_15 = STATE_VARIABLE_Mismatches_0_14;
    else
    {
      MR_Word NearMisses_25;
      MR_Word Mismatch_26;
      MR_Word Var_27;
      MR_Word Var_28;

      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (check_hlds__inst_check__check_arity_and_maybe_report_near_misses_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (TypeCtor_8));
        MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (SymName_10));
      }
      NearMisses_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_27, CtorArities_12);
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (ConsId_9));
      }
      {
        Mismatch_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Mismatch_26, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), Mismatch_26, 1) = ((MR_Box) (NearMisses_25));
      }
      *STATE_VARIABLE_Mismatches_15 = mercury__cord__snoc_2_f_0((MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_cons_mismatch_0), STATE_VARIABLE_Mismatches_0_14, ((MR_Box) (Mismatch_26)));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__inst_check__simple_miss_1_f_0(
  MR_Word ConsId_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (ConsId_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
check_hlds__inst_check__find_ctors_with_given_name_3_p_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Constructor_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Constructors_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word AritiesTail_9;
      MR_Word CtorSymName_12;
      MR_Integer CtorArity_14;
      MR_String Var_16;

      check_hlds__inst_check__find_ctors_with_given_name_3_p_0(HeadVar__1_1, Constructors_7, &AritiesTail_9);
      CtorSymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constructor_6, (MR_Integer) 2))));
      CtorArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Constructor_6, (MR_Integer) 4))));
      Var_16 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_12);
      succeeded = (strcmp(HeadVar__1_1, Var_16) == 0);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorArity_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (AritiesTail_9));
        }
      else
        *HeadVar__3_3 = AritiesTail_9;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(
  MR_Word SymName_3,
  MR_String TypeName_4)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) SymName_3)) == (MR_Integer) 1))
    {
      MR_String Var_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_3, (MR_Integer) 0))));
      MR_String Var_14;

      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
        succeeded = (strcmp(TypeName_4, Var_12) == 0);
        if (succeeded)
          succeeded = (strcmp(Var_14, (MR_String) "") == 0);
        if (!(succeeded))
        {
          succeeded = (strcmp(TypeName_4, Var_12) == 0);
          if (succeeded)
            succeeded = (strcmp(TypeName_4, Var_14) == 0);
        }
      }
    }
    else
    {
      MR_String Var_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_3, (MR_Integer) 0))));

      succeeded = (strcmp(TypeName_4, Var_8) == 0);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_22;

    check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__126__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_22);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_22));
  }
}

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_FunctorNameAndArity_4;

    check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_FunctorNameAndArity_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_FunctorNameAndArity_4));
  }
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
      MR_Word TypeCtorDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeCtorDefns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeCtor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorDefn_7, (MR_Integer) 0))));
      MR_Word TypeDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorDefn_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FunctorsToTypesMap_18_18;
      MR_Word TypeStatus_29;
      MR_Word Status_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FunctorsToTypesMap_0_2;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_11, &TypeStatus_29);
      Status_34 = (MR_Word) (TypeStatus_29);
      switch (MR_tag((MR_Word) Status_34)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Status_34)) {
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
        MR_Word TypeDefnBody_39;
        MR_Box conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18;

        {
          TypeCtorAndDefn_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorAndDefn_12, 0) = ((MR_Box) (TypeCtor_10));
          MR_hl_field(MR_mktag(0), TypeCtorAndDefn_12, 1) = ((MR_Box) (TypeDefn_11));
        }
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeDefnBody_39);
        switch (MR_tag((MR_Word) TypeDefnBody_39)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Functors_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Constructors_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefnBody_39, (MR_Integer) 0))));
              MR_Word Var_49;

              Var_49 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Constructors_40);
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0), (MR_Word) (&check_hlds__inst_check_scalar_common_2[1]), Var_49, &Functors_13);
            }
            break;
          case (MR_Integer) 2:
            Functors_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 3:
            Functors_13 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TypeCtorAndDefn_12));
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
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_check____Unify____cons_mismatch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____cons_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____cons_mismatch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_check____Unify____for_type_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____for_type_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_check____Unify____functor_name_and_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____functor_name_and_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_check____Unify____functors_to_types_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____functors_to_types_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_check____Unify____mismatch_from_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____mismatch_from_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_check____Unify____near_miss_cons_mismatch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____near_miss_cons_mismatch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_check____Unify____typeable_functors_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____typeable_functors_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
