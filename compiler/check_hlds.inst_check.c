/*
** Automatically generated from `inst_check.m'
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


/* :- module check_hlds.inst_check. */
/* :- implementation. */

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
#include "string.format.mih"
#include "string.parse_util.mih"



struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s {
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11;
  MR_bool check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded;
  jmp_buf check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0;
  MR_Word check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_120;
  MR_Box check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_120;
};

struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s {
  MR_bool check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded;
  MR_Integer check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsArity_17;
  MR_Word check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructors_22;
  MR_String check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31;
  jmp_buf check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__commit_0;
  MR_Word check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorSymName_41;
  MR_Integer check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorArity_43;
  MR_Word check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_118;
  MR_String check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Var_123;
  MR_Box check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__conv0_Constructor_118;
};


static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0[2];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_1[1];

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

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3];

static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3];

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0;

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1];

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0[1];

static const MR_Integer check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0[1];

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
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__390__1_2_p_0(
  MR_Word check_hlds__inst_check__IFTC0_17,
  MR_Word check_hlds__inst_check__HeadVar__2_60);

static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__125__1_4_p_0(
  MR_Word check_hlds__inst_check__TypeCtorAndDefn_12,
  MR_Word check_hlds__inst_check__HeadVar__2_20,
  MR_Word check_hlds__inst_check__HeadVar__3_21,
  MR_Word * check_hlds__inst_check__HeadVar__4_22);

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
  MR_Word check_hlds__inst_check__HeadVar__2_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
  MR_Word check_hlds__inst_check__BoundInsts_4,
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
  MR_Word * check_hlds__inst_check__MismatchFromType_6);

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7);

static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
  MR_Integer check_hlds__inst_check__CurNum_7,
  MR_Word check_hlds__inst_check__BoundInst_8,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19);

static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
  MR_Integer check_hlds__inst_check__CurNum_9,
  MR_String check_hlds__inst_check__FunctorName_10,
  MR_Integer check_hlds__inst_check__ActualArity_11,
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25);

static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_String check_hlds__inst_check__HeadVar__2_2,
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5);

static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_String check_hlds__inst_check__HeadVar__2_2,
  MR_Integer check_hlds__inst_check__HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
  MR_Word * check_hlds__inst_check__TypeCtor_4);

static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
  MR_Word check_hlds__inst_check__Ctor_3,
  MR_Word * check_hlds__inst_check__FunctorNameAndArity_4);

static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3,
  MR_Word * check_hlds__inst_check__HeadVar__4_4,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1(
  MR_Box check_hlds__inst_check__closure_arg);

static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0(
  MR_Word check_hlds__inst_check__TypeTable_8,
  MR_Word check_hlds__inst_check__FunctorsToTypesMap_9,
  MR_Word check_hlds__inst_check__InstId_10,
  MR_Word check_hlds__inst_check__InstDefn0_11,
  MR_Word * check_hlds__inst_check__InstDefn_12,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_54,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_55);

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(
  void * check_hlds__inst_check__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4(
  void * check_hlds__inst_check__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(
  void * check_hlds__inst_check__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(
  void * check_hlds__inst_check__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(
  MR_Word check_hlds__inst_check__InstId_8,
  MR_Word check_hlds__inst_check__InstDefn_9,
  MR_Word check_hlds__inst_check__BoundInsts_10,
  MR_Word check_hlds__inst_check__PossibleTypes_11,
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44);

static void MR_CALL 
check_hlds__inst_check__create_mismatch_pieces_2_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word * check_hlds__inst_check__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3);

static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(
  MR_Word check_hlds__inst_check__InstId_7,
  MR_Word check_hlds__inst_check__InstDefn_8,
  MR_Word check_hlds__inst_check__ForTypeKind_9,
  MR_Word check_hlds__inst_check__MismatchConsIdStrs_10,
  MR_Word * check_hlds__inst_check__IFTC_11,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_35);

static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
  MR_Word check_hlds__inst_check__Section_3,
  MR_Word check_hlds__inst_check__TypeDefn_4);

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
  MR_Word check_hlds__inst_check__InstId_6,
  MR_Word check_hlds__inst_check__InstDefn_7,
  MR_Word check_hlds__inst_check__TypeCtor_8,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_19,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6);

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_inst_3_p_0(
  MR_Word check_hlds__inst_check__FunctorsToTypesMap_4,
  MR_Word check_hlds__inst_check__BoundInst_5,
  MR_Word * check_hlds__inst_check__MaybeTypes_6);

static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word * check_hlds__inst_check__HeadVar__3_3);

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_1(
  void * check_hlds__inst_check__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_3(
  void * check_hlds__inst_check__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_2(
  void * check_hlds__inst_check__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_4(
  void * check_hlds__inst_check__env_ptr_arg);

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_4);

static MR_bool MR_CALL 
check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(
  MR_Word check_hlds__inst_check__SymName_3,
  MR_String check_hlds__inst_check__TypeName_4);

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box * check_hlds__inst_check__wrapper_arg_3);

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box * check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[62][2];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[52][1];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[5][5];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[1][7];

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[1][6];


/* sealed */ struct check_hlds__inst_check__vector_common_type_6_0_s {
  const MR_String check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_6_0_s check_hlds__inst_check_vector_common_6[8];

/* sealed */ struct check_hlds__inst_check__vector_common_type_8_0_s {
  const MR_Word check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_8_0_s check_hlds__inst_check_vector_common_8[8];



static /* final */ const MR_Box check_hlds__inst_check_scalar_common_1[62][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but that type constructor is not visible here."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of that type."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not match any of the types in scope."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not visible from outside this module."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are visible from outside this module."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "equally close matches."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for which the top level mismatches are the following."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inst"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is specified to be for"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is exported, but the type it is for,"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is declared to be for type"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but its top level"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "match is"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The closest match is"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There are"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: inst"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is exported, but the one type it matches"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is exported, but none of the types it matches"))
  },
  /* row 51 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[40])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[41])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[42])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[43])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[44])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 56 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[45])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 57 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[46])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[47])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[48])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 60 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[49])),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 61 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_3[50])),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_2[5][3] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[1])),
    ((MR_Box) (check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[3])),
    ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__inst_check_scalar_common_4[4])),
    ((MR_Box) (check_hlds__inst_check__record_arity_mismatch_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_3[52][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[2])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[3])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[29])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[30])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[31])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[32])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[33])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[34])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[24])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[35])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[36])))
  },
  /* row 30 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[12])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[24])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[6])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[18])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[9])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[21])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "char"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "float"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "int16"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "int32"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "int8"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "uint"))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "uint16"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "uint32"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "uint8"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_inst_for_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_inst_for_type_ctor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0)),
    ((MR_Box) (&check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_check_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0)),
    ((MR_Box) (&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0))
  },
};


static /* final */ const struct check_hlds__inst_check__vector_common_type_6_0_s check_hlds__inst_check_vector_common_6[8] = {
  /* row 0 */   {     (MR_String) "int" },
  /* row 1 */   {     (MR_String) "uint" },
  /* row 2 */   {     (MR_String) "int8" },
  /* row 3 */   {     (MR_String) "uint8" },
  /* row 4 */   {     (MR_String) "int16" },
  /* row 5 */   {     (MR_String) "uint16" },
  /* row 6 */   {     (MR_String) "int32" },
  /* row 7 */   {     (MR_String) "uint32" },
};

static /* final */ const struct check_hlds__inst_check__vector_common_type_8_0_s check_hlds__inst_check_vector_common_8[8] = {
  /* row 0 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[53] },
  /* row 1 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[57] },
  /* row 2 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[56] },
  /* row 3 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[60] },
  /* row 4 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[54] },
  /* row 5 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[58] },
  /* row 6 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[55] },
  /* row 7 */   {     (MR_Word) &check_hlds__inst_check_scalar_common_1[59] },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__inst_check__tree234__pti_tree234_2__plain_check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0__plain_list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0,
    (MR_PseudoTypeInfo) &check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__inst_check__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_bound_inst_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0
  }
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_0 = {
  (MR_String) "ftk_user",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_1 = {
  (MR_String) "ftk_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__inst_check__check_hlds__inst_check__field_types_for_type_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_2 = {
  (MR_String) "ftk_float",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_3 = {
  (MR_String) "ftk_char",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_for_type_kind_0_4 = {
  (MR_String) "ftk_string",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 3,
    MR_SECTAG_LOCAL,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_for_type_kind_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____for_type_kind_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____for_type_kind_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "for_type_kind",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_for_type_kind_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_for_type_kind_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_for_type_kind_0
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0 = {
  (MR_String) "functor_name_and_arity",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_functor_name_and_arity_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_functor_name_and_arity_0_0
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_functor_name_and_arity_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "functor_name_and_arity",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_functor_name_and_arity_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_functor_name_and_arity_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_functor_name_and_arity_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0,
    (MR_TypeInfo) &check_hlds__inst_check__list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functors_to_types_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "functors_to_types_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_check__tree234__ti_tree234_2check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0list__ti_list_1check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0,
  (MR_PseudoTypeInfo) &check_hlds__inst_check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

static const MR_ConstString check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0[3] = {
  (MR_String) "mft_num_mismatches",
  (MR_String) "mft_type",
  (MR_String) "mft_pieces"
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0 = {
  (MR_String) "mismatch_from_type",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_mismatch_from_type_0_0,
  check_hlds__inst_check__check_hlds__inst_check__field_names_mismatch_from_type_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_mismatch_from_type_0_0
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_mismatch_from_type_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "mismatch_from_type",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_mismatch_from_type_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_mismatch_from_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_mismatch_from_type_0
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0 = {
  (MR_String) "type_ctor_and_defn",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_ctor_and_defn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0[1] = {
  &check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_ctor_and_defn_0_0
};

static const MR_DuPtagLayout check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_ctor_and_defn_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "type_ctor_and_defn",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_ctor_and_defn_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_ctor_and_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_ctor_and_defn_0
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_0 = {
  (MR_String) "type_user",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_1 = {
  (MR_String) "type_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc check_hlds__inst_check__check_hlds__inst_check__du_functor_desc_type_defn_or_builtin_0_2 = {
  (MR_String) "type_tuple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__inst_check__check_hlds__inst_check__field_types_type_defn_or_builtin_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__inst_check__check_hlds__inst_check__du_stag_ordered_type_defn_or_builtin_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "type_defn_or_builtin",
  {     check_hlds__inst_check__check_hlds__inst_check__du_name_ordered_type_defn_or_builtin_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__du_ptag_ordered_type_defn_or_builtin_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_type_defn_or_builtin_0
};

static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_0 = {
  (MR_String) "some_untypeable_functors",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__inst_check__check_hlds__inst_check__enum_functor_desc_typeable_functors_0_1 = {
  (MR_String) "all_typeable_functors",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__inst_check____Unify____typeable_functors_0_0_10001)),
  ((MR_Box) (check_hlds__inst_check____Compare____typeable_functors_0_0_10001)),
  (MR_String) "check_hlds.inst_check",
  (MR_String) "typeable_functors",
  {     check_hlds__inst_check__check_hlds__inst_check__enum_name_ordered_typeable_functors_0 },
  {     check_hlds__inst_check__check_hlds__inst_check__enum_value_ordered_typeable_functors_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__inst_check__check_hlds__inst_check__functor_number_map_typeable_functors_0
};

static MR_bool MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__390__1_2_p_0(
  MR_Word check_hlds__inst_check__IFTC0_17,
  MR_Word check_hlds__inst_check__HeadVar__2_60)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____inst_for_type_ctor_0_0(check_hlds__inst_check__IFTC0_17, check_hlds__inst_check__HeadVar__2_60);
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__125__1_4_p_0(
  MR_Word check_hlds__inst_check__TypeCtorAndDefn_12,
  MR_Word check_hlds__inst_check__HeadVar__2_20,
  MR_Word check_hlds__inst_check__HeadVar__3_21,
  MR_Word * check_hlds__inst_check__HeadVar__4_22)
{
  {
    mercury__multi_map__reverse_set_4_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, ((MR_Box) (check_hlds__inst_check__TypeCtorAndDefn_12)), ((MR_Box) (check_hlds__inst_check__HeadVar__2_20)), check_hlds__inst_check__HeadVar__3_21, check_hlds__inst_check__HeadVar__4_22);
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3)
{
  {
    MR_Integer check_hlds__inst_check__Cast_HeadVar1_4 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
    MR_Integer check_hlds__inst_check__Cast_HeadVar2_5 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Cast_HeadVar1_4, check_hlds__inst_check__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0(
  MR_Word check_hlds__inst_check__HeadVar__2_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__2_1 == check_hlds__inst_check__HeadVar__2_2);

    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_12 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
    MR_Integer check_hlds__inst_check__CastY_13 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_12 == check_hlds__inst_check__CastY_13);
    if (check_hlds__inst_check__succeeded)
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer check_hlds__inst_check__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer check_hlds__inst_check__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word check_hlds__inst_check__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word check_hlds__inst_check__Var_10;

      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__inst_check__Var_10, check_hlds__inst_check__ArgX1_4, check_hlds__inst_check__ArgY1_5);
      check_hlds__inst_check__succeeded = (check_hlds__inst_check__Var_10 == (MR_Integer) 0);
      check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
      if (check_hlds__inst_check__succeeded)
        *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__Var_10;
      else
      {
        MR_Word check_hlds__inst_check__Var_11;

        check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__Var_11, check_hlds__inst_check__ArgX2_6, check_hlds__inst_check__ArgY2_7);
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__Var_11 == (MR_Integer) 0);
        check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
        if (check_hlds__inst_check__succeeded)
          *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_1[1], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__ArgX3_8)), ((MR_Box) (check_hlds__inst_check__ArgY3_9)));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_22 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
    MR_Integer check_hlds__inst_check__CastY_23 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_22 == check_hlds__inst_check__CastY_23);
    if (check_hlds__inst_check__succeeded)
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__inst_check__Var_29 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_check__ArgY1_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__3_3), (MR_Integer) 0);

                  check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Var_29, check_hlds__inst_check__ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__inst_check__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_check__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));

                  parse_tree__prog_data____Compare____builtin_type_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Var_27, check_hlds__inst_check__ArgY1_13);
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer check_hlds__inst_check__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer check_hlds__inst_check__ArgY1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Var_28, check_hlds__inst_check__ArgY1_21);
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
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
    if (check_hlds__inst_check__succeeded)
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word check_hlds__inst_check__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__Var_8;

      parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__inst_check__Var_8, check_hlds__inst_check__ArgX1_4, check_hlds__inst_check__ArgY1_5);
      check_hlds__inst_check__succeeded = (check_hlds__inst_check__Var_8 == (MR_Integer) 0);
      check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
      if (check_hlds__inst_check__succeeded)
        *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__Var_8;
      else
        hlds__hlds_data____Compare____hlds_type_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__ArgX2_6, check_hlds__inst_check__ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
    if (check_hlds__inst_check__succeeded)
      check_hlds__inst_check__succeeded = MR_TRUE;
    else
    {
      MR_Word check_hlds__inst_check__TypeInfo_11_11;
      MR_Integer check_hlds__inst_check__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer check_hlds__inst_check__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word check_hlds__inst_check__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 2)));

      check_hlds__inst_check__succeeded = (check_hlds__inst_check__ArgX1_3 == check_hlds__inst_check__ArgY1_4);
      if (check_hlds__inst_check__succeeded)
      {
        check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(check_hlds__inst_check__ArgX2_5, check_hlds__inst_check__ArgY2_6);
        if (check_hlds__inst_check__succeeded)
        {
          check_hlds__inst_check__TypeInfo_11_11 = (MR_Word) &check_hlds__inst_check_scalar_common_1[1];
          check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0(check_hlds__inst_check__TypeInfo_11_11, ((MR_Box) (check_hlds__inst_check__ArgX3_7)), ((MR_Box) (check_hlds__inst_check__ArgY3_8)));
        }
      }
    }
    return check_hlds__inst_check__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
    if (check_hlds__inst_check__succeeded)
      check_hlds__inst_check__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__inst_check__ArgX1_3 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__1_1), (MR_Integer) 0);
            MR_Word check_hlds__inst_check__ArgY1_4;

            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__inst_check__succeeded)
            {
              check_hlds__inst_check__ArgY1_4 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__HeadVar__2_2), (MR_Integer) 0);
              check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(check_hlds__inst_check__ArgX1_3, check_hlds__inst_check__ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__inst_check__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_check__ArgY1_6;

            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_check__succeeded)
            {
              check_hlds__inst_check__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
              check_hlds__inst_check__succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(check_hlds__inst_check__ArgX1_5, check_hlds__inst_check__ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer check_hlds__inst_check__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer check_hlds__inst_check__ArgY1_8;

            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__inst_check__succeeded)
            {
              check_hlds__inst_check__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
              check_hlds__inst_check__succeeded = (check_hlds__inst_check__ArgX1_7 == check_hlds__inst_check__ArgY1_8);
            }
          }
          break;
      }
    return check_hlds__inst_check__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
    MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_7 == check_hlds__inst_check__CastY_8);
    if (check_hlds__inst_check__succeeded)
      check_hlds__inst_check__succeeded = MR_TRUE;
    else
    {
      MR_Word check_hlds__inst_check__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));

      check_hlds__inst_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__inst_check__ArgX1_3, check_hlds__inst_check__ArgY1_4);
      if (check_hlds__inst_check__succeeded)
        check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(check_hlds__inst_check__ArgX2_5, check_hlds__inst_check__ArgY2_6);
    }
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3)
{
  {
    MR_Word check_hlds__inst_check__Cast_HeadVar1_4 = check_hlds__inst_check__HeadVar__2_2;
    MR_Word check_hlds__inst_check__Cast_HeadVar2_5 = check_hlds__inst_check__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_2[0], check_hlds__inst_check__HeadVar__1_1, ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Word check_hlds__inst_check__Cast_HeadVar1_3 = check_hlds__inst_check__HeadVar__1_1;
    MR_Word check_hlds__inst_check__Cast_HeadVar2_4 = check_hlds__inst_check__HeadVar__2_2;

    check_hlds__inst_check__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_check_scalar_common_2[0], ((MR_Box) (check_hlds__inst_check__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_check__Cast_HeadVar2_4)));
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
    MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_9 == check_hlds__inst_check__CastY_10);
    if (check_hlds__inst_check__succeeded)
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String check_hlds__inst_check__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
      MR_String check_hlds__inst_check__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer check_hlds__inst_check__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer check_hlds__inst_check__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__Var_8;

      mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__inst_check__Var_8, check_hlds__inst_check__ArgX1_4, check_hlds__inst_check__ArgY1_5);
      check_hlds__inst_check__succeeded = (check_hlds__inst_check__Var_8 == (MR_Integer) 0);
      check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
      if (check_hlds__inst_check__succeeded)
        *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__Var_8;
      else
        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__ArgX2_6, check_hlds__inst_check__ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_7 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
    MR_Integer check_hlds__inst_check__CastY_8 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_7 == check_hlds__inst_check__CastY_8);
    if (check_hlds__inst_check__succeeded)
      check_hlds__inst_check__succeeded = MR_TRUE;
    else
    {
      MR_String check_hlds__inst_check__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
      MR_String check_hlds__inst_check__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer check_hlds__inst_check__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer check_hlds__inst_check__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));

      check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__ArgX1_3, check_hlds__inst_check__ArgY1_4) == 0);
      if (check_hlds__inst_check__succeeded)
        check_hlds__inst_check__succeeded = (check_hlds__inst_check__ArgX2_5 == check_hlds__inst_check__ArgY2_6);
    }
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0(
  MR_Word * check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_35 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;
    MR_Integer check_hlds__inst_check__CastY_36 = (MR_Integer) check_hlds__inst_check__HeadVar__3_3;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_35 == check_hlds__inst_check__CastY_36);
    if (check_hlds__inst_check__succeeded)
      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__inst_check__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__inst_check__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__inst_check__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_check__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__inst_check__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_check__Var_8;

                  parse_tree__prog_data____Compare____type_ctor_0_0(&check_hlds__inst_check__Var_8, check_hlds__inst_check__Var_42, check_hlds__inst_check__ArgY1_5);
                  check_hlds__inst_check__succeeded = (check_hlds__inst_check__Var_8 == (MR_Integer) 0);
                  check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
                  if (check_hlds__inst_check__succeeded)
                    *check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__Var_8;
                  else
                    hlds__hlds_data____Compare____hlds_type_defn_0_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Var_41, check_hlds__inst_check__ArgY2_7);
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__inst_check__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(check_hlds__inst_check__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__inst_check__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__inst_check__ArgY1_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer check_hlds__inst_check__Var_43 = (MR_Integer) check_hlds__inst_check__Var_40;
                  MR_Integer check_hlds__inst_check__Var_44 = (MR_Integer) check_hlds__inst_check__ArgY1_22;

                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Var_43, check_hlds__inst_check__Var_44);
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
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Integer check_hlds__inst_check__CastX_15 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
    MR_Integer check_hlds__inst_check__CastY_16 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

    check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastX_15 == check_hlds__inst_check__CastY_16);
    if (check_hlds__inst_check__succeeded)
      check_hlds__inst_check__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer check_hlds__inst_check__CastX_9 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
                MR_Integer check_hlds__inst_check__CastY_10 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_10 == check_hlds__inst_check__CastX_9);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer check_hlds__inst_check__CastX_11 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
                MR_Integer check_hlds__inst_check__CastY_12 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_12 == check_hlds__inst_check__CastX_11);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer check_hlds__inst_check__CastX_13 = (MR_Integer) check_hlds__inst_check__HeadVar__1_1;
                MR_Integer check_hlds__inst_check__CastY_14 = (MR_Integer) check_hlds__inst_check__HeadVar__2_2;

                check_hlds__inst_check__succeeded = (check_hlds__inst_check__CastY_14 == check_hlds__inst_check__CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__inst_check__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_check__ArgY1_4;
            MR_Word check_hlds__inst_check__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_check__ArgY2_6;

            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_check__succeeded)
            {
              check_hlds__inst_check__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
              check_hlds__inst_check__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
              check_hlds__inst_check__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__inst_check__ArgX1_3, check_hlds__inst_check__ArgY1_4);
              if (check_hlds__inst_check__succeeded)
                check_hlds__inst_check__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(check_hlds__inst_check__ArgX2_5, check_hlds__inst_check__ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__inst_check__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_check__ArgY1_8;

            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__inst_check__succeeded)
            {
              check_hlds__inst_check__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
              check_hlds__inst_check__succeeded = (check_hlds__inst_check__ArgX1_7 == check_hlds__inst_check__ArgY1_8);
            }
          }
          break;
      }
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(
  MR_Word check_hlds__inst_check__BoundInsts_4,
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_5,
  MR_Word * check_hlds__inst_check__MismatchFromType_6)
{
  {
    MR_Integer check_hlds__inst_check__NumMismatches_24;
    MR_Word check_hlds__inst_check__MismatchPiecesCord_25;
    MR_Word check_hlds__inst_check__MismatchPieces_28;

    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_7 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_5), (MR_Integer) 0);
          MR_Word check_hlds__inst_check__TypeDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 1)));
          MR_Word check_hlds__inst_check__TypeDefnBody_10;
          MR_Word check_hlds__inst_check__Constructors_11;
          MR_Word check_hlds__inst_check__Var_40;
          MR_Word check_hlds__inst_check___TypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_7, (MR_Integer) 0)));

          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_9, &check_hlds__inst_check__TypeDefnBody_10);
          switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__inst_check__Var_12;
                MR_Word check_hlds__inst_check__Var_13;
                MR_Word check_hlds__inst_check__Var_14;
                MR_Word check_hlds__inst_check__Var_15;
                MR_Word check_hlds__inst_check__Var_16;
                MR_Word check_hlds__inst_check__Var_17;
                MR_Word check_hlds__inst_check__Var_18;
                MR_Word check_hlds__inst_check__Var_19;

                check_hlds__inst_check__Constructors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 0)));
                check_hlds__inst_check__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 1)));
                check_hlds__inst_check__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 2)));
                check_hlds__inst_check__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 3)));
                check_hlds__inst_check__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 4)));
                check_hlds__inst_check__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 5)));
                check_hlds__inst_check__Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) & (MR_Integer) 1);
                check_hlds__inst_check__Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                check_hlds__inst_check__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_10, (MR_Integer) 7)));
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.diagnose_mismatches_from_type\'/3", (MR_String) "non-du TypeDefnBody");
                  return;
                }
              }
              break;
          }
          check_hlds__inst_check__Var_40 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          check_hlds__inst_check__find_mismatches_from_user_7_p_0(check_hlds__inst_check__Constructors_11, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_24, check_hlds__inst_check__Var_40, &check_hlds__inst_check__MismatchPiecesCord_25);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_check__BuiltinType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
          MR_Word check_hlds__inst_check__Var_34;

          check_hlds__inst_check__Var_34 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(check_hlds__inst_check__BuiltinType_26, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_24, check_hlds__inst_check__Var_34, &check_hlds__inst_check__MismatchPiecesCord_25);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer check_hlds__inst_check__TupleArity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_5, (MR_Integer) 0)));
          MR_Word check_hlds__inst_check__Var_31;

          check_hlds__inst_check__Var_31 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
          check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(check_hlds__inst_check__TupleArity_27, (MR_Integer) 1, check_hlds__inst_check__BoundInsts_4, (MR_Integer) 0, &check_hlds__inst_check__NumMismatches_24, check_hlds__inst_check__Var_31, &check_hlds__inst_check__MismatchPiecesCord_25);
        }
        break;
    }
    check_hlds__inst_check__MismatchPieces_28 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__MismatchPiecesCord_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__inst_check__MismatchFromType_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__NumMismatches_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__TypeDefnOrBuiltin_5));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__MismatchPieces_28));
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_tuple_7_p_0(
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__inst_check__succeeded;

      if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
        *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
      }
      else
      {
        MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
        MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
        MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;
        MR_Integer check_hlds__inst_check__Var_33;
        MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
        MR_Integer check_hlds__inst_check__ActualArity_24;

        check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (check_hlds__inst_check__succeeded)
        {
          check_hlds__inst_check__ActualArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__ActualArity_24 == check_hlds__inst_check__HeadVar__1_1);
          if (check_hlds__inst_check__succeeded)
          {
            check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
            check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
          }
          else
            check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
        }
        else
          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30);
        check_hlds__inst_check__Var_33 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer check_hlds__inst_check__next_value_of_HeadVar__2_2 = check_hlds__inst_check__Var_33;
          MR_Word check_hlds__inst_check__next_value_of_HeadVar__3_3 = check_hlds__inst_check__BoundInsts_19;
          MR_Integer check_hlds__inst_check__next_value_of_STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_29_29;
          MR_Word check_hlds__inst_check__next_value_of_STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_30_30;

          check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__next_value_of_HeadVar__2_2;
          check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__next_value_of_HeadVar__3_3;
          check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_NumMismatches_0_4;
          check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_PiecesCord_0_6;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_builtin_7_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__inst_check__succeeded;

      if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
        *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
      }
      else
      {
        MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
        MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72;
        MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73;
        MR_Integer check_hlds__inst_check__Var_74;
        MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Float check_hlds__inst_check__Var_32;

                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (check_hlds__inst_check__succeeded)
                  {
                    check_hlds__inst_check__Var_32 = MR_unbox_float((MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                    check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                    check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String check_hlds__inst_check__Var_37;

                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 15)));
                  if (check_hlds__inst_check__succeeded)
                  {
                    check_hlds__inst_check__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                    check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                    check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                    check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Char check_hlds__inst_check__Var_33;

                  check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (check_hlds__inst_check__succeeded)
                  {
                    check_hlds__inst_check__Var_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                    check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                    check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                  }
                  else
                  {
                    MR_Word check_hlds__inst_check__SymName_34;
                    MR_Integer check_hlds__inst_check__ConsArity_35;
                    MR_Integer check_hlds__inst_check__Var_44;
                    MR_String check_hlds__inst_check__Var_45;
                    MR_Word check_hlds__inst_check__Var_36;

                    check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__SymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                      check_hlds__inst_check__ConsArity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
                      check_hlds__inst_check__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
                      check_hlds__inst_check__Var_45 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_34);
                      check_hlds__inst_check__Var_44 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__Var_45);
                      check_hlds__inst_check__succeeded = (check_hlds__inst_check__Var_44 == (MR_Integer) 1);
                      if (check_hlds__inst_check__succeeded)
                        check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_35 == (MR_Integer) 0);
                    }
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                    }
                    else
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_check__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));

              switch (check_hlds__inst_check__Var_78) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer check_hlds__inst_check__Var_24;

                    check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                    }
                    else
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Integer check_hlds__inst_check__Var_28;

                    check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 9)));
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                    }
                    else
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Integer check_hlds__inst_check__Var_30;

                    check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 11)));
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                    }
                    else
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer check_hlds__inst_check__Var_26;

                    check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                    }
                    else
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Unsigned check_hlds__inst_check__Var_25;

                    check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__Var_25 = ((MR_Unsigned) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                    }
                    else
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Integer check_hlds__inst_check__Var_29;

                    check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 10)));
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                    }
                    else
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Integer check_hlds__inst_check__Var_31;

                    check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 12)));
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                    }
                    else
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Integer check_hlds__inst_check__Var_27;

                    check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 8)));
                    if (check_hlds__inst_check__succeeded)
                    {
                      check_hlds__inst_check__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
                      check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
                      check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
                    }
                    else
                      check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73);
                  }
                  break;
              }
            }
            break;
        }
        check_hlds__inst_check__Var_74 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer check_hlds__inst_check__next_value_of_HeadVar__2_2 = check_hlds__inst_check__Var_74;
          MR_Word check_hlds__inst_check__next_value_of_HeadVar__3_3 = check_hlds__inst_check__BoundInsts_19;
          MR_Integer check_hlds__inst_check__next_value_of_STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_72_72;
          MR_Word check_hlds__inst_check__next_value_of_STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_73_73;

          check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__next_value_of_HeadVar__2_2;
          check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__next_value_of_HeadVar__3_3;
          check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_NumMismatches_0_4;
          check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_PiecesCord_0_6;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_check__find_mismatches_from_user_7_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__inst_check__succeeded;

      if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_7 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
        *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_5 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
      }
      else
      {
        MR_Word check_hlds__inst_check__BoundInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__inst_check__BoundInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__inst_check__ConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 0)));
        MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
        MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;
        MR_Integer check_hlds__inst_check__Var_40;
        MR_Word check_hlds__inst_check___SubInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_18, (MR_Integer) 1)));
        MR_Word check_hlds__inst_check__SymName_24;
        MR_Integer check_hlds__inst_check__Arity_25;
        MR_Word check_hlds__inst_check__Var_26;

        check_hlds__inst_check__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_check__ConsId_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (check_hlds__inst_check__succeeded)
        {
          check_hlds__inst_check__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 1)));
          check_hlds__inst_check__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 2)));
          check_hlds__inst_check__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_22, (MR_Integer) 3)));
          {
            MR_String check_hlds__inst_check__FunctorName_27;

            check_hlds__inst_check__FunctorName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_24);
            check_hlds__inst_check__succeeded = check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25);
            if (check_hlds__inst_check__succeeded)
            {
              check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6;
              check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4;
            }
            else
            {
              MR_Word check_hlds__inst_check__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Word check_hlds__inst_check__ExpectedArities_28;
              MR_Word check_hlds__inst_check__Var_33;

              check_hlds__inst_check__Var_33 = mercury__set__init_0_f_0(check_hlds__inst_check__TypeCtorInfo_44_44);
              check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__Var_33, &check_hlds__inst_check__ExpectedArities_28);
              check_hlds__inst_check__succeeded = mercury__set__is_empty_1_p_0(check_hlds__inst_check__TypeCtorInfo_44_44, check_hlds__inst_check__ExpectedArities_28);
              if (check_hlds__inst_check__succeeded)
                check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
              else
                check_hlds__inst_check__record_arity_mismatch_8_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__FunctorName_27, check_hlds__inst_check__Arity_25, check_hlds__inst_check__ExpectedArities_28, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
            }
          }
        }
        else
          check_hlds__inst_check__record_mismatch_6_p_0(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__BoundInst_18, check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4, &check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6, &check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35);
        check_hlds__inst_check__Var_40 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer check_hlds__inst_check__next_value_of_HeadVar__2_2 = check_hlds__inst_check__Var_40;
          MR_Word check_hlds__inst_check__next_value_of_HeadVar__3_3 = check_hlds__inst_check__BoundInsts_19;
          MR_Integer check_hlds__inst_check__next_value_of_STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__STATE_VARIABLE_NumMismatches_34_34;
          MR_Word check_hlds__inst_check__next_value_of_STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__STATE_VARIABLE_PiecesCord_35_35;

          check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__next_value_of_HeadVar__2_2;
          check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__next_value_of_HeadVar__3_3;
          check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_4 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_NumMismatches_0_4;
          check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_6 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_PiecesCord_0_6;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_check__record_mismatch_6_p_0(
  MR_Integer check_hlds__inst_check__CurNum_7,
  MR_Word check_hlds__inst_check__BoundInst_8,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19)
{
  {
    MR_Word check_hlds__inst_check__TypeCtorInfo_46_46;
    MR_Word check_hlds__inst_check__ConsId_11;
    MR_Word check_hlds__inst_check__SubInsts_12;
    MR_String check_hlds__inst_check__InFunctorStr_13;
    MR_String check_hlds__inst_check__ActualStr_14;
    MR_Word check_hlds__inst_check__Pieces_15;
    MR_String check_hlds__inst_check__Var_29;
    MR_Integer check_hlds__inst_check__Var_33;
    MR_Word check_hlds__inst_check__Var_35;
    MR_Word check_hlds__inst_check__Var_36;
    MR_Word check_hlds__inst_check__Var_38;
    MR_Word check_hlds__inst_check__Var_39;
    MR_Word check_hlds__inst_check__Var_44;
    MR_String check_hlds__inst_check__Var_48;
    MR_Word check_hlds__inst_check__Var_54;
    MR_String check_hlds__inst_check__Var_55;
    MR_String check_hlds__inst_check__Var_58;
    MR_String check_hlds__inst_check__Var_65;
    MR_String check_hlds__inst_check__Var_67;
    MR_String check_hlds__inst_check__Var_68;

    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_17 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_16 + (MR_Integer) 1);
    check_hlds__inst_check__ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 0)));
    check_hlds__inst_check__SubInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_8, (MR_Integer) 1)));
    check_hlds__inst_check__Var_54 = (MR_Word) &check_hlds__inst_check_scalar_common_3[30];
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__Var_54, check_hlds__inst_check__CurNum_7, &check_hlds__inst_check__Var_48);
    check_hlds__inst_check__Var_55 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__Var_48, (MR_String) ":");
    check_hlds__inst_check__InFunctorStr_13 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__Var_55);
    check_hlds__inst_check__Var_29 = parse_tree__mercury_to_mercury__mercury_cons_id_to_string_2_f_0((MR_Integer) 1, check_hlds__inst_check__ConsId_11);
    check_hlds__inst_check__Var_33 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_check__SubInsts_12);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__Var_54, check_hlds__inst_check__Var_33, &check_hlds__inst_check__Var_58);
    check_hlds__inst_check__Var_65 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__Var_58, (MR_String) ".");
    check_hlds__inst_check__Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "/", check_hlds__inst_check__Var_65);
    check_hlds__inst_check__Var_68 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__Var_29, check_hlds__inst_check__Var_67);
    check_hlds__inst_check__ActualStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol is ", check_hlds__inst_check__Var_68);
    {
      check_hlds__inst_check__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_35, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_13));
    }
    {
      check_hlds__inst_check__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_39, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_14));
    }
    {
      check_hlds__inst_check__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_38, 0) = ((MR_Box) (check_hlds__inst_check__Var_39));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])));
    }
    {
      check_hlds__inst_check__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_36, 1) = ((MR_Box) (check_hlds__inst_check__Var_38));
    }
    {
      check_hlds__inst_check__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 0) = ((MR_Box) (check_hlds__inst_check__Var_35));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_15, 1) = ((MR_Box) (check_hlds__inst_check__Var_36));
    }
    check_hlds__inst_check__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    check_hlds__inst_check__Var_44 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__Pieces_15);
    *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_19 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_46_46, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_18, check_hlds__inst_check__Var_44);
  }
}

static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0_1(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
    MR_String check_hlds__inst_check__conv0_HeadVar__2_2;

    mercury__string__int_to_string_2_p_0(((MR_Integer) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_HeadVar__2_2);
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__inst_check__record_arity_mismatch_8_p_0(
  MR_Integer check_hlds__inst_check__CurNum_9,
  MR_String check_hlds__inst_check__FunctorName_10,
  MR_Integer check_hlds__inst_check__ActualArity_11,
  MR_Word check_hlds__inst_check__ExpectedAritiesSet_12,
  MR_Integer check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22,
  MR_Integer * check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25)
{
  {
    MR_Word check_hlds__inst_check__TypeCtorInfo_60_60;
    MR_Word check_hlds__inst_check__TypeCtorInfo_62_62;
    MR_String check_hlds__inst_check__InFunctorStr_15;
    MR_Word check_hlds__inst_check__ExpectedArities_16;
    MR_Word check_hlds__inst_check__ExpectedArityStrs_17;
    MR_String check_hlds__inst_check__ExpectedArityOrStr_18;
    MR_String check_hlds__inst_check__ActualStr_19;
    MR_String check_hlds__inst_check__ExpectedStr_20;
    MR_Word check_hlds__inst_check__Pieces_21;
    MR_Word check_hlds__inst_check__Var_44;
    MR_Word check_hlds__inst_check__Var_45;
    MR_Word check_hlds__inst_check__Var_47;
    MR_Word check_hlds__inst_check__Var_48;
    MR_Word check_hlds__inst_check__Var_49;
    MR_Word check_hlds__inst_check__Var_51;
    MR_Word check_hlds__inst_check__Var_52;
    MR_Word check_hlds__inst_check__Var_57;
    MR_String check_hlds__inst_check__Var_64;
    MR_Word check_hlds__inst_check__Var_70;
    MR_String check_hlds__inst_check__Var_71;
    MR_String check_hlds__inst_check__Var_74;
    MR_String check_hlds__inst_check__Var_81;
    MR_String check_hlds__inst_check__Var_83;
    MR_String check_hlds__inst_check__Var_84;
    MR_String check_hlds__inst_check__Var_87;

    *check_hlds__inst_check__STATE_VARIABLE_NumMismatches_23 = (check_hlds__inst_check__STATE_VARIABLE_NumMismatches_0_22 + (MR_Integer) 1);
    check_hlds__inst_check__Var_70 = (MR_Word) &check_hlds__inst_check_scalar_common_3[30];
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__Var_70, check_hlds__inst_check__CurNum_9, &check_hlds__inst_check__Var_64);
    check_hlds__inst_check__Var_71 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__Var_64, (MR_String) ":");
    check_hlds__inst_check__InFunctorStr_15 = mercury__string__f_43_43_2_f_0((MR_String) "In bound functor #", check_hlds__inst_check__Var_71);
    check_hlds__inst_check__TypeCtorInfo_60_60 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__inst_check__Var_70, check_hlds__inst_check__ActualArity_11, &check_hlds__inst_check__Var_74);
    check_hlds__inst_check__Var_81 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__Var_74, (MR_String) ",");
    check_hlds__inst_check__Var_83 = mercury__string__f_43_43_2_f_0((MR_String) " has arity ", check_hlds__inst_check__Var_81);
    check_hlds__inst_check__Var_84 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__FunctorName_10, check_hlds__inst_check__Var_83);
    check_hlds__inst_check__ActualStr_19 = mercury__string__f_43_43_2_f_0((MR_String) "function symbol ", check_hlds__inst_check__Var_84);
    mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, check_hlds__inst_check__ExpectedAritiesSet_12, &check_hlds__inst_check__ExpectedArities_16);
    mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[4], check_hlds__inst_check__ExpectedArities_16, &check_hlds__inst_check__ExpectedArityStrs_17);
    check_hlds__inst_check__ExpectedArityOrStr_18 = mercury__string__join_list_2_f_0((MR_String) "or", check_hlds__inst_check__ExpectedArityStrs_17);
    check_hlds__inst_check__Var_87 = mercury__string__f_43_43_2_f_0(check_hlds__inst_check__ExpectedArityOrStr_18, (MR_String) ".");
    check_hlds__inst_check__ExpectedStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "expected arity was ", check_hlds__inst_check__Var_87);
    {
      check_hlds__inst_check__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_44, 1) = ((MR_Box) (check_hlds__inst_check__InFunctorStr_15));
    }
    {
      check_hlds__inst_check__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_48, 1) = ((MR_Box) (check_hlds__inst_check__ActualStr_19));
    }
    {
      check_hlds__inst_check__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_52, 1) = ((MR_Box) (check_hlds__inst_check__ExpectedStr_20));
    }
    {
      check_hlds__inst_check__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_51, 0) = ((MR_Box) (check_hlds__inst_check__Var_52));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[5])));
    }
    {
      check_hlds__inst_check__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_49, 1) = ((MR_Box) (check_hlds__inst_check__Var_51));
    }
    {
      check_hlds__inst_check__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_47, 0) = ((MR_Box) (check_hlds__inst_check__Var_48));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_47, 1) = ((MR_Box) (check_hlds__inst_check__Var_49));
    }
    {
      check_hlds__inst_check__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_45, 1) = ((MR_Box) (check_hlds__inst_check__Var_47));
    }
    {
      check_hlds__inst_check__Pieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 0) = ((MR_Box) (check_hlds__inst_check__Var_44));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_21, 1) = ((MR_Box) (check_hlds__inst_check__Var_45));
    }
    check_hlds__inst_check__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    check_hlds__inst_check__Var_57 = mercury__cord__from_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__Pieces_21);
    *check_hlds__inst_check__STATE_VARIABLE_PiecesCord_25 = mercury__cord__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_62_62, check_hlds__inst_check__STATE_VARIABLE_PiecesCord_0_24, check_hlds__inst_check__Var_57);
  }
}

static void MR_CALL 
check_hlds__inst_check__find_matching_name_wrong_arities_5_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_String check_hlds__inst_check__HeadVar__2_2,
  MR_Integer check_hlds__inst_check__HeadVar__3_3,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__inst_check__succeeded;

      if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_5 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
      else
      {
        MR_Word check_hlds__inst_check__Ctor_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_check__Ctors_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_check__ConsName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 2)));
        MR_Integer check_hlds__inst_check__ConsArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 4)));
        MR_Word check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;
        MR_Word check_hlds__inst_check___ExistTVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 0)));
        MR_Word check_hlds__inst_check___Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 1)));
        MR_Word check_hlds__inst_check___ConsArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 3)));
        MR_Word check_hlds__inst_check___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_11, (MR_Integer) 5)));
        MR_String check_hlds__inst_check__Var_27;

        check_hlds__inst_check__Var_27 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_18);
        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__Var_27) == 0);
        if (check_hlds__inst_check__succeeded)
        {
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_20 == check_hlds__inst_check__HeadVar__3_3);
          check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
        }
        if (check_hlds__inst_check__succeeded)
        {
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (check_hlds__inst_check__ConsArity_20)), check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4, &check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24);
        }
        else
          check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4;
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__inst_check__next_value_of_HeadVar__1_1 = check_hlds__inst_check__Ctors_12;
          MR_Word check_hlds__inst_check__next_value_of_STATE_VARIABLE_ExpectedArities_0_4 = check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_24_24;

          check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__next_value_of_HeadVar__1_1;
          check_hlds__inst_check__STATE_VARIABLE_ExpectedArities_0_4 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_ExpectedArities_0_4;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check__some_ctor_matches_exactly_3_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_String check_hlds__inst_check__HeadVar__2_2,
  MR_Integer check_hlds__inst_check__HeadVar__3_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
      MR_Word check_hlds__inst_check__Ctor_6;
      MR_Word check_hlds__inst_check__Ctors_7;
      MR_Word check_hlds__inst_check__ConsName_12;
      MR_Integer check_hlds__inst_check__ConsArity_14;
      MR_Word check_hlds__inst_check___ExistTVars_10;
      MR_Word check_hlds__inst_check___Constraints_11;
      MR_Word check_hlds__inst_check___ConsArgs_13;
      MR_Word check_hlds__inst_check___Context_15;
      MR_String check_hlds__inst_check__Var_16;

      if (check_hlds__inst_check__succeeded)
      {
        check_hlds__inst_check__Ctor_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
        check_hlds__inst_check__Ctors_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
        check_hlds__inst_check___ExistTVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 0)));
        check_hlds__inst_check___Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 1)));
        check_hlds__inst_check__ConsName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 2)));
        check_hlds__inst_check___ConsArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 3)));
        check_hlds__inst_check__ConsArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 4)));
        check_hlds__inst_check___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_6, (MR_Integer) 5)));
        check_hlds__inst_check__Var_16 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__ConsName_12);
        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__Var_16) == 0);
        if (check_hlds__inst_check__succeeded)
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__ConsArity_14 == check_hlds__inst_check__HeadVar__3_3);
        if (check_hlds__inst_check__succeeded)
          check_hlds__inst_check__succeeded = MR_TRUE;
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Word check_hlds__inst_check__next_value_of_HeadVar__1_1 = check_hlds__inst_check__Ctors_7;

            check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return check_hlds__inst_check__succeeded;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3,
  MR_Word * check_hlds__inst_check__TypeCtor_4)
{
  switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word check_hlds__inst_check__Var_51 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
        MR_Word check_hlds__inst_check__Var_5;

        *check_hlds__inst_check__TypeCtor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_51, (MR_Integer) 0)));
        check_hlds__inst_check__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_51, (MR_Integer) 1)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word check_hlds__inst_check__BuiltinType_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) check_hlds__inst_check__BuiltinType_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_check__BuiltinType_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *check_hlds__inst_check__TypeCtor_4 = (MR_Word) &check_hlds__inst_check_scalar_common_1[52];
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_check__TypeCtor_4 = (MR_Word) &check_hlds__inst_check_scalar_common_1[61];
                }
                break;
              case (MR_Integer) 2:
                {
                  *check_hlds__inst_check__TypeCtor_4 = (MR_Word) &check_hlds__inst_check_scalar_common_1[51];
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_check__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__BuiltinType_6, (MR_Integer) 0)));

              *check_hlds__inst_check__TypeCtor_4 = ((&check_hlds__inst_check_vector_common_8[0 + check_hlds__inst_check__Var_52]))->check_hlds__inst_check__vector_common_type_8_0__vct_8_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer check_hlds__inst_check__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__inst_check__TypeCtor_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_3[51]));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__Arity_7));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(
  MR_Word check_hlds__inst_check__Ctor_3,
  MR_Word * check_hlds__inst_check__FunctorNameAndArity_4)
{
  {
    MR_Word check_hlds__inst_check__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 2)));
    MR_Integer check_hlds__inst_check__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 4)));
    MR_String check_hlds__inst_check__Var_11;
    MR_Word check_hlds__inst_check__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 0)));
    MR_Word check_hlds__inst_check__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 1)));
    MR_Word check_hlds__inst_check___ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 3)));
    MR_Word check_hlds__inst_check__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Ctor_3, (MR_Integer) 5)));

    check_hlds__inst_check__Var_11 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__inst_check__FunctorNameAndArity_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__Arity_9));
    }
  }
}

void MR_CALL 
check_hlds__inst_check__check_insts_have_matching_types_4_p_0(
  MR_Word check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_17,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_18,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_19)
{
  {
    MR_Word check_hlds__inst_check__TypeCtorInfo_23_23;
    MR_Word check_hlds__inst_check__TypeCtorInfo_24_24;
    MR_Word check_hlds__inst_check__InstTable0_7;
    MR_Word check_hlds__inst_check__UserInstTable0_8;
    MR_Word check_hlds__inst_check__InstIdDefnPairs0_9;
    MR_Word check_hlds__inst_check__TypeTable_10;
    MR_Word check_hlds__inst_check__TypeCtorsDefns_11;
    MR_Word check_hlds__inst_check__FunctorsToTypeDefns_12;
    MR_Word check_hlds__inst_check__InstIdDefnPairs_13;
    MR_Word check_hlds__inst_check__UserInstTable_14;
    MR_Word check_hlds__inst_check__InstTable_15;
    MR_Word check_hlds__inst_check__Var_20;

    hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__inst_check__InstTable0_7);
    hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__inst_check__InstTable0_7, &check_hlds__inst_check__UserInstTable0_8);
    check_hlds__inst_check__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
    check_hlds__inst_check__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
    mercury__map__to_sorted_assoc_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_23_23, check_hlds__inst_check__TypeCtorInfo_24_24, check_hlds__inst_check__UserInstTable0_8, &check_hlds__inst_check__InstIdDefnPairs0_9);
    hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, &check_hlds__inst_check__TypeTable_10);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(check_hlds__inst_check__TypeTable_10, &check_hlds__inst_check__TypeCtorsDefns_11);
    check_hlds__inst_check__Var_20 = mercury__multi_map__init_0_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0);
    check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(check_hlds__inst_check__TypeCtorsDefns_11, check_hlds__inst_check__Var_20, &check_hlds__inst_check__FunctorsToTypeDefns_12);
    check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(check_hlds__inst_check__TypeTable_10, check_hlds__inst_check__FunctorsToTypeDefns_12, check_hlds__inst_check__InstIdDefnPairs0_9, &check_hlds__inst_check__InstIdDefnPairs_13, check_hlds__inst_check__STATE_VARIABLE_Specs_0_18, check_hlds__inst_check__STATE_VARIABLE_Specs_19);
    mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_23_23, check_hlds__inst_check__TypeCtorInfo_24_24, check_hlds__inst_check__InstIdDefnPairs_13, &check_hlds__inst_check__UserInstTable_14);
    hlds__hlds_data__inst_table_set_user_insts_3_p_0(check_hlds__inst_check__UserInstTable_14, check_hlds__inst_check__InstTable0_7, &check_hlds__inst_check__InstTable_15);
    hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_check__InstTable_15, check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_0_16, check_hlds__inst_check__STATE_VARIABLE_ModuleInfo_17);
  }
}

static void MR_CALL 
check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__HeadVar__3_3,
  MR_Word * check_hlds__inst_check__HeadVar__4_4,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_6)
{
  if ((check_hlds__inst_check__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *check_hlds__inst_check__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *check_hlds__inst_check__STATE_VARIABLE_Specs_6 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_5;
  }
  else
  {
    MR_Word check_hlds__inst_check__InstIdDefnPair0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word check_hlds__inst_check__InstIdDefnPairs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word check_hlds__inst_check__InstIdDefnPair_16;
    MR_Word check_hlds__inst_check__InstIdDefnPairs_17;
    MR_Word check_hlds__inst_check__InstId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair0_14, (MR_Integer) 0)));
    MR_Word check_hlds__inst_check__InstDefn0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair0_14, (MR_Integer) 1)));
    MR_Word check_hlds__inst_check__InstDefn_21;
    MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_24_24;

    check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__InstId_19, check_hlds__inst_check__InstDefn0_20, &check_hlds__inst_check__InstDefn_21, check_hlds__inst_check__STATE_VARIABLE_Specs_0_5, &check_hlds__inst_check__STATE_VARIABLE_Specs_24_24);
    {
      check_hlds__inst_check__InstIdDefnPair_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair_16, 0) = ((MR_Box) (check_hlds__inst_check__InstId_19));
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstIdDefnPair_16, 1) = ((MR_Box) (check_hlds__inst_check__InstDefn_21));
    }
    check_hlds__inst_check__check_inst_defns_have_matching_types_6_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__HeadVar__2_2, check_hlds__inst_check__InstIdDefnPairs0_15, &check_hlds__inst_check__InstIdDefnPairs_17, check_hlds__inst_check__STATE_VARIABLE_Specs_24_24, check_hlds__inst_check__STATE_VARIABLE_Specs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__inst_check__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__InstIdDefnPair_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__InstIdDefnPairs_17));
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_2(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
    MR_Word check_hlds__inst_check__conv0_TypeCtor_4;

    check_hlds__inst_check__type_defn_or_builtin_to_type_ctor_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_TypeCtor_4);
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_TypeCtor_4));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1(
  MR_Box check_hlds__inst_check__closure_arg)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;

    check_hlds__inst_check__succeeded = check_hlds__inst_check__IntroducedFrom__pred__check_inst_defn_has_matching_type__390__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 4))));
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0(
  MR_Word check_hlds__inst_check__TypeTable_8,
  MR_Word check_hlds__inst_check__FunctorsToTypesMap_9,
  MR_Word check_hlds__inst_check__InstId_10,
  MR_Word check_hlds__inst_check__InstDefn0_11,
  MR_Word * check_hlds__inst_check__InstDefn_12,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_54,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_55)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Word check_hlds__inst_check__InstVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 0)));
    MR_Word check_hlds__inst_check__InstParams_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 1)));
    MR_Word check_hlds__inst_check__InstBody_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 2)));
    MR_Word check_hlds__inst_check__IFTC0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 3)));
    MR_Word check_hlds__inst_check__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 4)));
    MR_Word check_hlds__inst_check__Status_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn0_11, (MR_Integer) 5)));

    if ((check_hlds__inst_check__InstBody_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
      *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
    }
    else
    {
      MR_Word check_hlds__inst_check__Inst_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__InstBody_16, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) check_hlds__inst_check__Inst_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__inst_check__Var_56;

            {
              check_hlds__inst_check__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 3) = ((MR_Box) (check_hlds__inst_check__IFTC0_17));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__require__expect_4_p_0(check_hlds__inst_check__Var_56, (MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
            *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
            *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__inst_check__Var_56;

            {
              check_hlds__inst_check__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 3) = ((MR_Box) (check_hlds__inst_check__IFTC0_17));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__require__expect_4_p_0(check_hlds__inst_check__Var_56, (MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
            *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
            *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__inst_check__BoundInsts_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 3)));
                MR_Word check_hlds__inst_check__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 1)));
                MR_Word check_hlds__inst_check__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__Inst_20, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) check_hlds__inst_check__IFTC0_17)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__inst_check__IFTC0_17)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_not_applicable");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word check_hlds__inst_check__TypeableFunctors_37;
                          MR_Word check_hlds__inst_check__PossibleTypeSets_38;

                          check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(check_hlds__inst_check__FunctorsToTypesMap_9, check_hlds__inst_check__BoundInsts_23, (MR_Integer) 1, &check_hlds__inst_check__TypeableFunctors_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__PossibleTypeSets_38);
                          switch (check_hlds__inst_check__TypeableFunctors_37) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                MR_Word check_hlds__inst_check__TypeCtorInfo_115_115 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
                                MR_Word check_hlds__inst_check__PossibleTypesSet_39;
                                MR_Word check_hlds__inst_check__PossibleTypes_40;
                                MR_Word check_hlds__inst_check__PossibleTypeCtors_41;
                                MR_Word check_hlds__inst_check__IFTC_110;

                                check_hlds__inst_check__PossibleTypesSet_39 = mercury__set__intersect_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_115_115, check_hlds__inst_check__PossibleTypeSets_38);
                                check_hlds__inst_check__PossibleTypes_40 = mercury__set__to_sorted_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_115_115, check_hlds__inst_check__PossibleTypesSet_39);
                                check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__BoundInsts_23, check_hlds__inst_check__PossibleTypes_40, check_hlds__inst_check__PossibleTypeSets_38, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54, check_hlds__inst_check__STATE_VARIABLE_Specs_55);
                                mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_115_115, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[3], check_hlds__inst_check__PossibleTypes_40, &check_hlds__inst_check__PossibleTypeCtors_41);
                                {
                                  check_hlds__inst_check__IFTC_110 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(2), check_hlds__inst_check__IFTC_110, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeCtors_41));
                                }
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                                  *check_hlds__inst_check__InstDefn_12 = base;
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__InstVarSet_14));
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__InstParams_15));
                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__InstBody_16));
                                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__inst_check__IFTC_110));
                                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__inst_check__Context_18));
                                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__inst_check__Status_19));
                                }
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
                                *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
                              }
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_applicable_error");
                            return;
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word check_hlds__inst_check__ForTypeCtor0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__IFTC0_17, (MR_Integer) 0)));
                      MR_Word check_hlds__inst_check__ForTypeCtorName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor0_24, (MR_Integer) 0)));
                      MR_Integer check_hlds__inst_check__ForTypeCtorArity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor0_24, (MR_Integer) 1)));
                      MR_Word check_hlds__inst_check__IFTC_32;

                      check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "int");
                      if (check_hlds__inst_check__succeeded)
                        check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                      if (check_hlds__inst_check__succeeded)
                      {
                        MR_Word check_hlds__inst_check__ForTypeKind_33;
                        MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_34;
                        MR_Word check_hlds__inst_check__MismatchConsIdStrs_35;
                        MR_Word check_hlds__inst_check__MatchSpecs_36;
                        MR_Word check_hlds__inst_check__ForTypeCtor_27;

                        check_hlds__inst_check__ForTypeCtor_27 = parse_tree__builtin_lib_types__int_type_ctor_0_f_0();
                        check_hlds__inst_check__ForTypeKind_33 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[15]);
                        check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_33, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_34);
                        mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_34, &check_hlds__inst_check__MismatchConsIdStrs_35);
                        check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_33, check_hlds__inst_check__MismatchConsIdStrs_35, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_36);
                        *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_36, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                      }
                      else
                      {
                        check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "uint");
                        if (check_hlds__inst_check__succeeded)
                          check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                        if (check_hlds__inst_check__succeeded)
                        {
                          MR_Word check_hlds__inst_check__ForTypeKind_123;
                          MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_124;
                          MR_Word check_hlds__inst_check__MismatchConsIdStrs_125;
                          MR_Word check_hlds__inst_check__MatchSpecs_126;
                          MR_Word check_hlds__inst_check__ForTypeCtor_137;

                          check_hlds__inst_check__ForTypeCtor_137 = parse_tree__builtin_lib_types__uint_type_ctor_0_f_0();
                          check_hlds__inst_check__ForTypeKind_123 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__inst_check_scalar_common_3[27]);
                          check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_123, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_124);
                          mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_124, &check_hlds__inst_check__MismatchConsIdStrs_125);
                          check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_123, check_hlds__inst_check__MismatchConsIdStrs_125, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_126);
                          *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_126, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                        }
                        else
                        {
                          MR_Word check_hlds__inst_check__ForTypeCtor_167;
                          MR_Word check_hlds__inst_check__MaybeForTypeKind_168;

                          check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "int8");
                          if (check_hlds__inst_check__succeeded)
                            check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                          if (check_hlds__inst_check__succeeded)
                          {
                            check_hlds__inst_check__ForTypeCtor_167 = parse_tree__builtin_lib_types__int8_type_ctor_0_f_0();
                            check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[31]);
                          }
                          else
                          {
                            check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "uint8");
                            if (check_hlds__inst_check__succeeded)
                              check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                            if (check_hlds__inst_check__succeeded)
                            {
                              check_hlds__inst_check__ForTypeCtor_167 = parse_tree__builtin_lib_types__uint8_type_ctor_0_f_0();
                              check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[32]);
                            }
                            else
                            {
                              check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "int16");
                              if (check_hlds__inst_check__succeeded)
                                check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                              if (check_hlds__inst_check__succeeded)
                              {
                                check_hlds__inst_check__ForTypeCtor_167 = parse_tree__builtin_lib_types__int16_type_ctor_0_f_0();
                                check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[33]);
                              }
                              else
                              {
                                check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "uint16");
                                if (check_hlds__inst_check__succeeded)
                                  check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                                if (check_hlds__inst_check__succeeded)
                                {
                                  check_hlds__inst_check__ForTypeCtor_167 = parse_tree__builtin_lib_types__uint16_type_ctor_0_f_0();
                                  check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[34]);
                                }
                                else
                                {
                                  check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "int32");
                                  if (check_hlds__inst_check__succeeded)
                                    check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                                  if (check_hlds__inst_check__succeeded)
                                  {
                                    check_hlds__inst_check__ForTypeCtor_167 = parse_tree__builtin_lib_types__int32_type_ctor_0_f_0();
                                    check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[35]);
                                  }
                                  else
                                  {
                                    check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "uint32");
                                    if (check_hlds__inst_check__succeeded)
                                      check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                                    if (check_hlds__inst_check__succeeded)
                                    {
                                      check_hlds__inst_check__ForTypeCtor_167 = parse_tree__builtin_lib_types__uint32_type_ctor_0_f_0();
                                      check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[36]);
                                    }
                                    else
                                    {
                                      check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "float");
                                      if (check_hlds__inst_check__succeeded)
                                        check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                                      if (check_hlds__inst_check__succeeded)
                                      {
                                        check_hlds__inst_check__ForTypeCtor_167 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
                                        check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[37]);
                                      }
                                      else
                                      {
                                        MR_String check_hlds__inst_check__CName_29;

                                        check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                                        if (check_hlds__inst_check__succeeded)
                                        {
                                          if (((MR_tag((MR_Word) check_hlds__inst_check__ForTypeCtorName_25)) == (MR_mktag((MR_Integer) 1))))
                                          {
                                            MR_String check_hlds__inst_check__Var_120 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 1)));
                                            MR_Word check_hlds__inst_check__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
                                            MR_String check_hlds__inst_check__Var_122;

                                            check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__Var_121)) == (MR_mktag((MR_Integer) 0)));
                                            if (check_hlds__inst_check__succeeded)
                                            {
                                              check_hlds__inst_check__Var_122 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_121, (MR_Integer) 0)));
                                              if ((strcmp(check_hlds__inst_check__Var_122, (MR_String) "") == 0))
                                              {
                                                check_hlds__inst_check__CName_29 = check_hlds__inst_check__Var_120;
                                                check_hlds__inst_check__succeeded = MR_TRUE;
                                              }
                                              else
                                              if ((strcmp(check_hlds__inst_check__Var_122, (MR_String) "char") == 0))
                                              {
                                                check_hlds__inst_check__CName_29 = check_hlds__inst_check__Var_120;
                                                check_hlds__inst_check__succeeded = MR_TRUE;
                                              }
                                              else
                                                check_hlds__inst_check__succeeded = MR_FALSE;
                                            }
                                          }
                                          else
                                          {
                                            check_hlds__inst_check__CName_29 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtorName_25, (MR_Integer) 0)));
                                            check_hlds__inst_check__succeeded = MR_TRUE;
                                          }
                                          if (check_hlds__inst_check__succeeded)
                                          {
                                            if ((strcmp(check_hlds__inst_check__CName_29, (MR_String) "char") == 0))
                                              check_hlds__inst_check__succeeded = MR_TRUE;
                                            else
                                            if ((strcmp(check_hlds__inst_check__CName_29, (MR_String) "character") == 0))
                                              check_hlds__inst_check__succeeded = MR_TRUE;
                                            else
                                              check_hlds__inst_check__succeeded = MR_FALSE;
                                          }
                                        }
                                        if (check_hlds__inst_check__succeeded)
                                        {
                                          check_hlds__inst_check__ForTypeCtor_167 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
                                          check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[38]);
                                        }
                                        else
                                        {
                                          check_hlds__inst_check__succeeded = check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(check_hlds__inst_check__ForTypeCtorName_25, (MR_String) "string");
                                          if (check_hlds__inst_check__succeeded)
                                            check_hlds__inst_check__succeeded = (check_hlds__inst_check__ForTypeCtorArity_26 == (MR_Integer) 0);
                                          if (check_hlds__inst_check__succeeded)
                                          {
                                            check_hlds__inst_check__ForTypeCtor_167 = parse_tree__builtin_lib_types__string_type_ctor_0_f_0();
                                            check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[39]);
                                          }
                                          else
                                          {
                                            MR_Word check_hlds__inst_check__ForTypeDefn_30;

                                            check_hlds__inst_check__ForTypeCtor_167 = check_hlds__inst_check__ForTypeCtor0_24;
                                            check_hlds__inst_check__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__inst_check__TypeTable_8, check_hlds__inst_check__ForTypeCtor0_24, &check_hlds__inst_check__ForTypeDefn_30);
                                            if (check_hlds__inst_check__succeeded)
                                            {
                                              MR_Word check_hlds__inst_check__ForTypeKind0_31;

                                              {
                                                check_hlds__inst_check__ForTypeKind0_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind0_31, 0) = ((MR_Box) (check_hlds__inst_check__ForTypeCtor_167));
                                                MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind0_31, 1) = ((MR_Box) (check_hlds__inst_check__ForTypeDefn_30));
                                              }
                                              {
                                                check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybeForTypeKind_168, 0) = ((MR_Box) (check_hlds__inst_check__ForTypeKind0_31));
                                              }
                                            }
                                            else
                                              check_hlds__inst_check__MaybeForTypeKind_168 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          if ((check_hlds__inst_check__MaybeForTypeKind_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeCtor_167, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54, check_hlds__inst_check__STATE_VARIABLE_Specs_55);
                            check_hlds__inst_check__IFTC_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          }
                          else
                          {
                            MR_Word check_hlds__inst_check__ForTypeKind_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybeForTypeKind_168, (MR_Integer) 0)));
                            MR_Word check_hlds__inst_check__RevMismatchConsIdStrs_147;
                            MR_Word check_hlds__inst_check__MismatchConsIdStrs_148;
                            MR_Word check_hlds__inst_check__MatchSpecs_149;

                            check_hlds__inst_check__check_for_type_bound_insts_4_p_0(check_hlds__inst_check__ForTypeKind_146, check_hlds__inst_check__BoundInsts_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__inst_check__RevMismatchConsIdStrs_147);
                            mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__inst_check__RevMismatchConsIdStrs_147, &check_hlds__inst_check__MismatchConsIdStrs_148);
                            check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(check_hlds__inst_check__InstId_10, check_hlds__inst_check__InstDefn0_11, check_hlds__inst_check__ForTypeKind_146, check_hlds__inst_check__MismatchConsIdStrs_148, &check_hlds__inst_check__IFTC_32, &check_hlds__inst_check__MatchSpecs_149);
                            *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__inst_check__MatchSpecs_149, check_hlds__inst_check__STATE_VARIABLE_Specs_0_54);
                          }
                        }
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        *check_hlds__inst_check__InstDefn_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__inst_check__InstVarSet_14));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__inst_check__InstParams_15));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__inst_check__InstBody_16));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__inst_check__IFTC_32));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__inst_check__Context_18));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__inst_check__Status_19));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "bound, IFTC0 = iftc_applicable_known");
                        return;
                      }
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
                MR_Word check_hlds__inst_check__Var_56;

                {
                  check_hlds__inst_check__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 1) = ((MR_Box) (check_hlds__inst_check__check_inst_defn_has_matching_type_7_p_0_1));
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 3) = ((MR_Box) (check_hlds__inst_check__IFTC0_17));
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                mercury__require__expect_4_p_0(check_hlds__inst_check__Var_56, (MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.check_inst_defn_has_matching_type\'/7", (MR_String) "not bound, IFTC0 != iftc_not_applicable");
                *check_hlds__inst_check__InstDefn_12 = check_hlds__inst_check__InstDefn0_11;
                *check_hlds__inst_check__STATE_VARIABLE_Specs_55 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_54;
              }
              break;
          }
          break;
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_6(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1)
{
  {
    MR_Box check_hlds__inst_check__wrapper_arg_2;
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
    MR_String check_hlds__inst_check__conv2_Str_4;

    check_hlds__inst_check__conv2_Str_4 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1));
    check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv2_Str_4));
    return check_hlds__inst_check__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
    MR_Word check_hlds__inst_check__conv0_MismatchFromType_6;

    check_hlds__inst_check__diagnose_mismatches_from_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_MismatchFromType_6);
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_MismatchFromType_6));
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(
  void * check_hlds__inst_check__env_ptr_arg)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4(
  void * check_hlds__inst_check__env_ptr_arg)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_120 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_120);
    check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(check_hlds__inst_check__env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_3(
  void * check_hlds__inst_check__env_ptr_arg)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

    switch (MR_tag((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_120)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_31 = (MR_Word) MR_body(((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__Type_120), (MR_Integer) 0);
          MR_Word check_hlds__inst_check__TypeDefn_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 1)));
          MR_Word check_hlds__inst_check__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_31, (MR_Integer) 0)));

          (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0((MR_Integer) 0, check_hlds__inst_check__TypeDefn_33);
        }
        break;
      case (MR_Integer) 1:
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
        break;
    }
    if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded)
      check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_2(check_hlds__inst_check__env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(
  void * check_hlds__inst_check__env_ptr_arg)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__conv1_Type_120, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_4, check_hlds__inst_check__env_ptr);
        }
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0(
  MR_Word check_hlds__inst_check__InstId_8,
  MR_Word check_hlds__inst_check__InstDefn_9,
  MR_Word check_hlds__inst_check__BoundInsts_10,
  MR_Word check_hlds__inst_check__PossibleTypes_11,
  MR_Word check_hlds__inst_check__PossibleTypeSets_12,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_43,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_44)
{
  {
    struct check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0_s check_hlds__inst_check__env;

    (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11 = check_hlds__inst_check__PossibleTypes_11;
    {
      MR_Word check_hlds__inst_check__InstStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));
      MR_Word check_hlds__inst_check__DefinedInThisModule_15;
      MR_Word check_hlds__inst_check__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
      MR_Word check_hlds__inst_check__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
      MR_Word check_hlds__inst_check__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));

      check_hlds__inst_check__DefinedInThisModule_15 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstStatus_14);
      switch (check_hlds__inst_check__DefinedInThisModule_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
          break;
        case (MR_Integer) 1:
          if (((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word check_hlds__inst_check__TypeCtorInfo_151_151;
            MR_Word check_hlds__inst_check__TypeCtorInfo_154_154;
            MR_Word check_hlds__inst_check__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
            MR_Word check_hlds__inst_check__InstName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
            MR_Integer check_hlds__inst_check__InstArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
            MR_Word check_hlds__inst_check__NoMatchPieces_19;
            MR_Word check_hlds__inst_check__AllPossibleTypesSet_20;
            MR_Word check_hlds__inst_check__AllPossibleTypes_21;
            MR_Word check_hlds__inst_check__MismatchesFromPossibleTypes_22;
            MR_Word check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23;
            MR_Word check_hlds__inst_check__MismatchPieces_24;
            MR_Word check_hlds__inst_check__Pieces_25;
            MR_Word check_hlds__inst_check__Spec_26;
            MR_Word check_hlds__inst_check__Var_101;
            MR_Word check_hlds__inst_check__Var_102;
            MR_Word check_hlds__inst_check__Var_103;
            MR_Word check_hlds__inst_check__Var_110;
            MR_Word check_hlds__inst_check__Var_113;
            MR_Word check_hlds__inst_check__Var_114;
            MR_Word check_hlds__inst_check__Var_115;
            MR_Word check_hlds__inst_check__Var_116;
            MR_Word check_hlds__inst_check__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
            MR_Word check_hlds__inst_check__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
            MR_Word check_hlds__inst_check__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
            MR_Word check_hlds__inst_check__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
            MR_Word check_hlds__inst_check__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

            {
              check_hlds__inst_check__Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_103, 0) = ((MR_Box) (check_hlds__inst_check__InstName_17));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_103, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_18));
            }
            {
              check_hlds__inst_check__Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_102, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_102, 1) = ((MR_Box) (check_hlds__inst_check__Var_103));
            }
            {
              check_hlds__inst_check__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_101, 0) = ((MR_Box) (check_hlds__inst_check__Var_102));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[16])));
            }
            {
              check_hlds__inst_check__NoMatchPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[47])));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__NoMatchPieces_19, 1) = ((MR_Box) (check_hlds__inst_check__Var_101));
            }
            check_hlds__inst_check__TypeCtorInfo_151_151 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0;
            check_hlds__inst_check__AllPossibleTypesSet_20 = mercury__set__union_list_1_f_0(check_hlds__inst_check__TypeCtorInfo_151_151, check_hlds__inst_check__PossibleTypeSets_12);
            mercury__set__to_sorted_list_2_p_0(check_hlds__inst_check__TypeCtorInfo_151_151, check_hlds__inst_check__AllPossibleTypesSet_20, &check_hlds__inst_check__AllPossibleTypes_21);
            {
              check_hlds__inst_check__Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_110, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_110, 1) = ((MR_Box) (check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_1));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_110, 3) = ((MR_Box) (check_hlds__inst_check__BoundInsts_10));
            }
            check_hlds__inst_check__TypeCtorInfo_154_154 = (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0;
            mercury__list__map_3_p_0(check_hlds__inst_check__TypeCtorInfo_151_151, check_hlds__inst_check__TypeCtorInfo_154_154, check_hlds__inst_check__Var_110, check_hlds__inst_check__AllPossibleTypes_21, &check_hlds__inst_check__MismatchesFromPossibleTypes_22);
            mercury__list__sort_2_p_0(check_hlds__inst_check__TypeCtorInfo_154_154, check_hlds__inst_check__MismatchesFromPossibleTypes_22, &check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23);
            check_hlds__inst_check__create_mismatch_pieces_2_p_0(check_hlds__inst_check__SortedMismatchesFromPossibleTypes_23, &check_hlds__inst_check__MismatchPieces_24);
            check_hlds__inst_check__Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__NoMatchPieces_19, check_hlds__inst_check__MismatchPieces_24);
            {
              check_hlds__inst_check__Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_116, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_25));
            }
            {
              check_hlds__inst_check__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_115, 0) = ((MR_Box) (check_hlds__inst_check__Var_116));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__inst_check__Var_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_114, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_114, 1) = ((MR_Box) (check_hlds__inst_check__Var_115));
            }
            {
              check_hlds__inst_check__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_113, 0) = ((MR_Box) (check_hlds__inst_check__Var_114));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__inst_check__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_26, 2) = ((MR_Box) (check_hlds__inst_check__Var_113));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
            }
          }
          else
          {
            MR_Word check_hlds__inst_check__InstIsExported_29;

            check_hlds__inst_check__InstIsExported_29 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(check_hlds__inst_check__InstStatus_14);
            switch (check_hlds__inst_check__InstIsExported_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                {
                  check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_5(&check_hlds__inst_check__env);
                }
                break;
            }
            if ((check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__succeeded)
              *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_43;
            else
            {
              MR_Word check_hlds__inst_check__Var_92;
              MR_Word check_hlds__inst_check__Var_93;
              MR_Word check_hlds__inst_check__Var_94;
              MR_Word check_hlds__inst_check__Var_95;
              MR_Word check_hlds__inst_check__Context_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 4)));
              MR_Word check_hlds__inst_check__InstName_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 0)));
              MR_Integer check_hlds__inst_check__InstArity_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_8, (MR_Integer) 1)));
              MR_Word check_hlds__inst_check__Pieces_124;
              MR_Word check_hlds__inst_check__Spec_125;
              MR_Word check_hlds__inst_check__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 1)));
              MR_Word check_hlds__inst_check__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11, (MR_Integer) 0)));
              MR_Word check_hlds__inst_check__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 0)));
              MR_Word check_hlds__inst_check__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 1)));
              MR_Word check_hlds__inst_check__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 2)));
              MR_Word check_hlds__inst_check__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 3)));
              MR_Word check_hlds__inst_check__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_9, (MR_Integer) 5)));

              if ((check_hlds__inst_check__Var_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_String check_hlds__inst_check__OnePossibleTypeStr_37;
                MR_Word check_hlds__inst_check__Var_72;
                MR_Word check_hlds__inst_check__Var_73;
                MR_Word check_hlds__inst_check__Var_74;
                MR_Word check_hlds__inst_check__Var_75;
                MR_Word check_hlds__inst_check__Var_78;
                MR_Word check_hlds__inst_check__Var_81;
                MR_Word check_hlds__inst_check__Var_82;

                check_hlds__inst_check__OnePossibleTypeStr_37 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__Var_162);
                {
                  check_hlds__inst_check__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_74, 0) = ((MR_Box) (check_hlds__inst_check__InstName_122));
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_74, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_123));
                }
                {
                  check_hlds__inst_check__Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_73, 1) = ((MR_Box) (check_hlds__inst_check__Var_74));
                }
                {
                  check_hlds__inst_check__Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_82, 1) = ((MR_Box) (check_hlds__inst_check__OnePossibleTypeStr_37));
                }
                {
                  check_hlds__inst_check__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_81, 0) = ((MR_Box) (check_hlds__inst_check__Var_82));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[20])));
                }
                {
                  check_hlds__inst_check__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[49])));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_78, 1) = ((MR_Box) (check_hlds__inst_check__Var_81));
                }
                {
                  check_hlds__inst_check__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[48])));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_75, 1) = ((MR_Box) (check_hlds__inst_check__Var_78));
                }
                {
                  check_hlds__inst_check__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_72, 0) = ((MR_Box) (check_hlds__inst_check__Var_73));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_72, 1) = ((MR_Box) (check_hlds__inst_check__Var_75));
                }
                {
                  check_hlds__inst_check__Pieces_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[47])));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_124, 1) = ((MR_Box) (check_hlds__inst_check__Var_72));
                }
              }
              else
              {
                MR_Word check_hlds__inst_check__PossibleTypeStrs_41;
                MR_String check_hlds__inst_check__PossibleTypesStr_42;
                MR_Word check_hlds__inst_check__Var_51;
                MR_Word check_hlds__inst_check__Var_52;
                MR_Word check_hlds__inst_check__Var_53;
                MR_Word check_hlds__inst_check__Var_54;
                MR_Word check_hlds__inst_check__Var_57;
                MR_Word check_hlds__inst_check__Var_60;
                MR_Word check_hlds__inst_check__Var_61;

                check_hlds__inst_check__PossibleTypeStrs_41 = mercury__list__map_2_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[2], (check_hlds__inst_check__env).check_hlds__inst_check__maybe_issue_no_matching_types_warning_7_p_0_env_0__PossibleTypes_11);
                check_hlds__inst_check__PossibleTypesStr_42 = mercury__string__join_list_2_f_0((MR_String) ", ", check_hlds__inst_check__PossibleTypeStrs_41);
                {
                  check_hlds__inst_check__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_53, 0) = ((MR_Box) (check_hlds__inst_check__InstName_122));
                  MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_53, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_123));
                }
                {
                  check_hlds__inst_check__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_52, 1) = ((MR_Box) (check_hlds__inst_check__Var_53));
                }
                {
                  check_hlds__inst_check__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_61, 1) = ((MR_Box) (check_hlds__inst_check__PossibleTypesStr_42));
                }
                {
                  check_hlds__inst_check__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_60, 0) = ((MR_Box) (check_hlds__inst_check__Var_61));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[23])));
                }
                {
                  check_hlds__inst_check__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[49])));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_57, 1) = ((MR_Box) (check_hlds__inst_check__Var_60));
                }
                {
                  check_hlds__inst_check__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[50])));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_54, 1) = ((MR_Box) (check_hlds__inst_check__Var_57));
                }
                {
                  check_hlds__inst_check__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_51, 0) = ((MR_Box) (check_hlds__inst_check__Var_52));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_51, 1) = ((MR_Box) (check_hlds__inst_check__Var_54));
                }
                {
                  check_hlds__inst_check__Pieces_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[47])));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_124, 1) = ((MR_Box) (check_hlds__inst_check__Var_51));
                }
              }
              {
                check_hlds__inst_check__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_95, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_124));
              }
              {
                check_hlds__inst_check__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_94, 0) = ((MR_Box) (check_hlds__inst_check__Var_95));
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__inst_check__Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_93, 0) = ((MR_Box) (check_hlds__inst_check__Context_121));
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_93, 1) = ((MR_Box) (check_hlds__inst_check__Var_94));
              }
              {
                check_hlds__inst_check__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_92, 0) = ((MR_Box) (check_hlds__inst_check__Var_93));
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__inst_check__Spec_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_125, 2) = ((MR_Box) (check_hlds__inst_check__Var_92));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_check__STATE_VARIABLE_Specs_44 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_125));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_43));
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
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word * check_hlds__inst_check__HeadVar__2_2)
{
  if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *check_hlds__inst_check__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word check_hlds__inst_check__FirstMismatch_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__inst_check__LaterMismatches_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer check_hlds__inst_check__FirstNumMismatches_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));
    MR_Word check_hlds__inst_check__TakenLaterMismatches_9;
    MR_Word check_hlds__inst_check__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
    MR_Word check_hlds__inst_check__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));

    check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__FirstNumMismatches_6, check_hlds__inst_check__LaterMismatches_4, &check_hlds__inst_check__TakenLaterMismatches_9);
    if ((check_hlds__inst_check__TakenLaterMismatches_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__BoundInstPieces_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 2)));
      MR_Word check_hlds__inst_check__Var_34;
      MR_Word check_hlds__inst_check__Var_37;
      MR_Word check_hlds__inst_check__Var_38;
      MR_String check_hlds__inst_check__Var_39;
      MR_Integer check_hlds__inst_check__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__FirstMismatch_3, (MR_Integer) 0)));

      check_hlds__inst_check__Var_39 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_32);
      {
        check_hlds__inst_check__Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), check_hlds__inst_check__Var_38, 0) = ((MR_Box) (check_hlds__inst_check__Var_39));
      }
      {
        check_hlds__inst_check__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_37, 0) = ((MR_Box) (check_hlds__inst_check__Var_38));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[28])));
      }
      {
        check_hlds__inst_check__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[45])));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_34, 1) = ((MR_Box) (check_hlds__inst_check__Var_37));
      }
      *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__Var_34, check_hlds__inst_check__BoundInstPieces_33);
    }
    else
    {
      MR_Word check_hlds__inst_check__RelevantMismatches_12;
      MR_Integer check_hlds__inst_check__NumRelevantMismatches_13;
      MR_Word check_hlds__inst_check__HeadPieces_14;
      MR_Word check_hlds__inst_check__TailPieces_15;
      MR_Word check_hlds__inst_check__Var_18;
      MR_Word check_hlds__inst_check__Var_19;

      {
        check_hlds__inst_check__RelevantMismatches_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 0) = ((MR_Box) (check_hlds__inst_check__FirstMismatch_3));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__RelevantMismatches_12, 1) = ((MR_Box) (check_hlds__inst_check__TakenLaterMismatches_9));
      }
      mercury__list__length_2_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0, check_hlds__inst_check__RelevantMismatches_12, &check_hlds__inst_check__NumRelevantMismatches_13);
      {
        check_hlds__inst_check__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_19, 1) = ((MR_Box) (check_hlds__inst_check__NumRelevantMismatches_13));
      }
      {
        check_hlds__inst_check__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_18, 0) = ((MR_Box) (check_hlds__inst_check__Var_19));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[25])));
      }
      {
        check_hlds__inst_check__HeadPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[46])));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadPieces_14, 1) = ((MR_Box) (check_hlds__inst_check__Var_18));
      }
      check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__RelevantMismatches_12, (MR_Integer) 1, &check_hlds__inst_check__TailPieces_15);
      *check_hlds__inst_check__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__inst_check__HeadPieces_14, check_hlds__inst_check__TailPieces_15);
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Integer check_hlds__inst_check__HeadVar__2_2,
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
{
  if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word check_hlds__inst_check__TypeCtorInfo_36_36;
    MR_Word check_hlds__inst_check__Mismatch_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__inst_check__Mismatches_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word check_hlds__inst_check__TailPieces_9;
    MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_11;
    MR_Word check_hlds__inst_check__BoundInstPieces_12;
    MR_Integer check_hlds__inst_check__Var_13 = (check_hlds__inst_check__HeadVar__2_2 + (MR_Integer) 1);
    MR_Word check_hlds__inst_check__Var_15;
    MR_Word check_hlds__inst_check__Var_18;
    MR_Word check_hlds__inst_check__Var_19;
    MR_Word check_hlds__inst_check__Var_20;
    MR_Word check_hlds__inst_check__Var_23;
    MR_Word check_hlds__inst_check__Var_24;
    MR_String check_hlds__inst_check__Var_25;
    MR_Word check_hlds__inst_check__Var_35;
    MR_Integer check_hlds__inst_check__Var_10;

    check_hlds__inst_check__create_pieces_for_all_mismatches_3_p_0(check_hlds__inst_check__Mismatches_6, check_hlds__inst_check__Var_13, &check_hlds__inst_check__TailPieces_9);
    check_hlds__inst_check__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 0)));
    check_hlds__inst_check__TypeDefnOrBuiltin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 1)));
    check_hlds__inst_check__BoundInstPieces_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_5, (MR_Integer) 2)));
    check_hlds__inst_check__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__inst_check__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_19, 1) = ((MR_Box) (check_hlds__inst_check__HeadVar__2_2));
    }
    check_hlds__inst_check__Var_25 = check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(check_hlds__inst_check__TypeDefnOrBuiltin_11);
    {
      check_hlds__inst_check__Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__inst_check__Var_24, 0) = ((MR_Box) (check_hlds__inst_check__Var_25));
    }
    {
      check_hlds__inst_check__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_23, 0) = ((MR_Box) (check_hlds__inst_check__Var_24));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[28])));
    }
    {
      check_hlds__inst_check__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_20, 1) = ((MR_Box) (check_hlds__inst_check__Var_23));
    }
    {
      check_hlds__inst_check__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_18, 0) = ((MR_Box) (check_hlds__inst_check__Var_19));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_18, 1) = ((MR_Box) (check_hlds__inst_check__Var_20));
    }
    {
      check_hlds__inst_check__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[43])));
      MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_15, 1) = ((MR_Box) (check_hlds__inst_check__Var_18));
    }
    check_hlds__inst_check__Var_35 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__BoundInstPieces_12, check_hlds__inst_check__TailPieces_9);
    *check_hlds__inst_check__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_36_36, check_hlds__inst_check__Var_15, check_hlds__inst_check__Var_35);
  }
}

static MR_String MR_CALL 
check_hlds__inst_check__type_defn_or_builtin_to_string_1_f_0(
  MR_Word check_hlds__inst_check__TypeDefnOrBuiltin_3)
{
  {
    MR_String check_hlds__inst_check__Str_4;

    switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__inst_check__TypeCtor_5;
          MR_Word check_hlds__inst_check__Var_21 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_check__TypeDefnOrBuiltin_3), (MR_Integer) 0);
          MR_Word check_hlds__inst_check__Var_6;

          check_hlds__inst_check__TypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_21, (MR_Integer) 0)));
          check_hlds__inst_check__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_21, (MR_Integer) 1)));
          check_hlds__inst_check__Str_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(check_hlds__inst_check__TypeCtor_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_check__BuiltinType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) check_hlds__inst_check__BuiltinType_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(check_hlds__inst_check__BuiltinType_7)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__inst_check__Str_4 = (MR_String) "float";
                  break;
                case (MR_Integer) 1:
                  check_hlds__inst_check__Str_4 = (MR_String) "string";
                  break;
                case (MR_Integer) 2:
                  check_hlds__inst_check__Str_4 = (MR_String) "char";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__inst_check__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__BuiltinType_7, (MR_Integer) 0)));

                check_hlds__inst_check__Str_4 = ((&check_hlds__inst_check_vector_common_6[0 + check_hlds__inst_check__Var_22]))->check_hlds__inst_check__vector_common_type_6_0__vct_6_f_0;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer check_hlds__inst_check__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__TypeDefnOrBuiltin_3, (MR_Integer) 0)));
          MR_String check_hlds__inst_check__Var_23;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &check_hlds__inst_check_scalar_common_3[30], check_hlds__inst_check__Arity_8, &check_hlds__inst_check__Var_23);
          check_hlds__inst_check__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", check_hlds__inst_check__Var_23);
        }
        break;
    }
    return check_hlds__inst_check__Str_4;
  }
}

static void MR_CALL 
check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(
  MR_Integer check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word check_hlds__inst_check__Mismatch_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__Mismatches_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer check_hlds__inst_check__NumMismatches_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Mismatch_6, (MR_Integer) 2)));

      check_hlds__inst_check__succeeded = (check_hlds__inst_check__HeadVar__1_1 == check_hlds__inst_check__NumMismatches_9);
      if (check_hlds__inst_check__succeeded)
      {
        MR_Word check_hlds__inst_check__TakenTail_12;

        check_hlds__inst_check__take_while_same_num_mismatches_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__Mismatches_7, &check_hlds__inst_check__TakenTail_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_check__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Mismatch_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__TakenTail_12));
        }
      }
      else
        *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_type_match_error_6_p_0(
  MR_Word check_hlds__inst_check__InstId_7,
  MR_Word check_hlds__inst_check__InstDefn_8,
  MR_Word check_hlds__inst_check__ForTypeKind_9,
  MR_Word check_hlds__inst_check__MismatchConsIdStrs_10,
  MR_Word * check_hlds__inst_check__IFTC_11,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_35)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Word check_hlds__inst_check__InstSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_7, (MR_Integer) 0)));
    MR_Integer check_hlds__inst_check__InstArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_7, (MR_Integer) 1)));
    MR_Word check_hlds__inst_check__ShortInstSymName_15;
    MR_Word check_hlds__inst_check__Context_16;
    MR_Word check_hlds__inst_check__InstStatus_17;
    MR_Word check_hlds__inst_check__InstDefinedInThisModule_18;
    MR_Word check_hlds__inst_check__ForTypeCtor_19;
    MR_Word check_hlds__inst_check__TypeCtorName_20;
    MR_Integer check_hlds__inst_check__TypeCtorArity_21;
    MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_String check_hlds__inst_check__Var_37;
    MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_67_67;
    MR_Word check_hlds__inst_check__Var_120;
    MR_Word check_hlds__inst_check__Var_121;
    MR_Word check_hlds__inst_check__Var_122;
    MR_Word check_hlds__inst_check__Var_123;

    check_hlds__inst_check__Var_37 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__InstSymName_13);
    {
      check_hlds__inst_check__ShortInstSymName_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__inst_check__ShortInstSymName_15, 0) = ((MR_Box) (check_hlds__inst_check__Var_37));
    }
    check_hlds__inst_check__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 0)));
    check_hlds__inst_check__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 1)));
    check_hlds__inst_check__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 2)));
    check_hlds__inst_check__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 3)));
    check_hlds__inst_check__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 4)));
    check_hlds__inst_check__InstStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_8, (MR_Integer) 5)));
    check_hlds__inst_check__InstDefinedInThisModule_18 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstStatus_17);
    switch (MR_tag((MR_Word) check_hlds__inst_check__ForTypeKind_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_check__ForTypeKind_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__float_type_ctor_0_f_0();
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__char_type_ctor_0_f_0();
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
            }
            break;
          case (MR_Integer) 2:
            {
              check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__string_type_ctor_0_f_0();
              check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
              check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_check__ForTypeDefn_22;
          MR_Word check_hlds__inst_check__InstIsExported_23;
          MR_Word check_hlds__inst_check__Var_38;

          check_hlds__inst_check__ForTypeCtor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_9, (MR_Integer) 0)));
          check_hlds__inst_check__ForTypeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ForTypeKind_9, (MR_Integer) 1)));
          check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
          check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
          check_hlds__inst_check__InstIsExported_23 = hlds__status__inst_status_is_exported_to_non_submodules_1_f_0(check_hlds__inst_check__InstStatus_17);
          check_hlds__inst_check__succeeded = (check_hlds__inst_check__InstIsExported_23 == (MR_Integer) 1);
          if (check_hlds__inst_check__succeeded)
          {
            check_hlds__inst_check__Var_38 = (MR_Integer) 0;
            check_hlds__inst_check__succeeded = check_hlds__inst_check__type_is_user_visible_2_p_0(check_hlds__inst_check__Var_38, check_hlds__inst_check__ForTypeDefn_22);
            check_hlds__inst_check__succeeded = !(check_hlds__inst_check__succeeded);
          }
          if (check_hlds__inst_check__succeeded)
          {
            MR_Word check_hlds__inst_check__VisPieces_24;
            MR_Word check_hlds__inst_check__VisSpec_25;
            MR_Word check_hlds__inst_check__Var_41;
            MR_Word check_hlds__inst_check__Var_42;
            MR_Word check_hlds__inst_check__Var_43;
            MR_Word check_hlds__inst_check__Var_44;
            MR_Word check_hlds__inst_check__Var_47;
            MR_Word check_hlds__inst_check__Var_48;
            MR_Word check_hlds__inst_check__Var_49;
            MR_Word check_hlds__inst_check__Var_61;
            MR_Word check_hlds__inst_check__Var_62;
            MR_Word check_hlds__inst_check__Var_63;
            MR_Word check_hlds__inst_check__Var_64;

            {
              check_hlds__inst_check__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_43, 0) = ((MR_Box) (check_hlds__inst_check__ShortInstSymName_15));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_43, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_14));
            }
            {
              check_hlds__inst_check__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_42, 1) = ((MR_Box) (check_hlds__inst_check__Var_43));
            }
            {
              check_hlds__inst_check__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_49, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtorName_20));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_49, 1) = ((MR_Box) (check_hlds__inst_check__TypeCtorArity_21));
            }
            {
              check_hlds__inst_check__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_48, 1) = ((MR_Box) (check_hlds__inst_check__Var_49));
            }
            {
              check_hlds__inst_check__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_47, 0) = ((MR_Box) (check_hlds__inst_check__Var_48));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[12])));
            }
            {
              check_hlds__inst_check__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[39])));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_44, 1) = ((MR_Box) (check_hlds__inst_check__Var_47));
            }
            {
              check_hlds__inst_check__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_41, 0) = ((MR_Box) (check_hlds__inst_check__Var_42));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_41, 1) = ((MR_Box) (check_hlds__inst_check__Var_44));
            }
            {
              check_hlds__inst_check__VisPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__VisPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[37])));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__VisPieces_24, 1) = ((MR_Box) (check_hlds__inst_check__Var_41));
            }
            {
              check_hlds__inst_check__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_64, 0) = ((MR_Box) (check_hlds__inst_check__VisPieces_24));
            }
            {
              check_hlds__inst_check__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_63, 0) = ((MR_Box) (check_hlds__inst_check__Var_64));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__inst_check__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_62, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_62, 1) = ((MR_Box) (check_hlds__inst_check__Var_63));
            }
            {
              check_hlds__inst_check__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_61, 0) = ((MR_Box) (check_hlds__inst_check__Var_62));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              check_hlds__inst_check__VisSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__VisSpec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__VisSpec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
              MR_hl_field(MR_mktag(0), check_hlds__inst_check__VisSpec_25, 2) = ((MR_Box) (check_hlds__inst_check__Var_61));
            }
            {
              check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_67_67, 0) = ((MR_Box) (check_hlds__inst_check__VisSpec_25));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_67_67, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_36_36));
            }
          }
          else
            check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_check__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__ForTypeKind_9, (MR_Integer) 0)));

          switch (check_hlds__inst_check__Var_132) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__int_type_ctor_0_f_0();
                check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
                check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
              }
              break;
            case (MR_Integer) 4:
              {
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__int16_type_ctor_0_f_0();
                check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
                check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
              }
              break;
            case (MR_Integer) 6:
              {
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__int32_type_ctor_0_f_0();
                check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
                check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
              }
              break;
            case (MR_Integer) 2:
              {
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__int8_type_ctor_0_f_0();
                check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
                check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
              }
              break;
            case (MR_Integer) 1:
              {
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__uint_type_ctor_0_f_0();
                check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
                check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
              }
              break;
            case (MR_Integer) 5:
              {
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__uint16_type_ctor_0_f_0();
                check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
                check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
              }
              break;
            case (MR_Integer) 7:
              {
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__uint32_type_ctor_0_f_0();
                check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
                check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
              }
              break;
            case (MR_Integer) 3:
              {
                check_hlds__inst_check__ForTypeCtor_19 = parse_tree__builtin_lib_types__uint8_type_ctor_0_f_0();
                check_hlds__inst_check__TypeCtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 0)));
                check_hlds__inst_check__TypeCtorArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ForTypeCtor_19, (MR_Integer) 1)));
                check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 = check_hlds__inst_check__STATE_VARIABLE_Specs_36_36;
              }
              break;
          }
        }
        break;
    }
    if ((check_hlds__inst_check__MismatchConsIdStrs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__inst_check__STATE_VARIABLE_Specs_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_check__IFTC_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__ForTypeCtor_19));
        }
        *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = check_hlds__inst_check__STATE_VARIABLE_Specs_67_67;
      }
      else
      {
        *check_hlds__inst_check__IFTC_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
        switch (check_hlds__inst_check__InstDefinedInThisModule_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = check_hlds__inst_check__STATE_VARIABLE_Specs_67_67;
            break;
        }
      }
    else
    {
      MR_Word check_hlds__inst_check__TypeCtorInfo_130_130 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word check_hlds__inst_check__TypeCtorInfo_131_131;
      MR_String check_hlds__inst_check__FuncSymbolPhrase_28;
      MR_String check_hlds__inst_check__IsAreNotPhrase_29;
      MR_Word check_hlds__inst_check__MismatchConsIdPieces_30;
      MR_Word check_hlds__inst_check__MismatchPieces_31;
      MR_Word check_hlds__inst_check__MismatchSpec_32;
      MR_Word check_hlds__inst_check__Var_80;
      MR_Word check_hlds__inst_check__Var_83;
      MR_Word check_hlds__inst_check__Var_84;
      MR_Word check_hlds__inst_check__Var_85;
      MR_Word check_hlds__inst_check__Var_86;
      MR_Word check_hlds__inst_check__Var_89;
      MR_Word check_hlds__inst_check__Var_90;
      MR_Word check_hlds__inst_check__Var_91;
      MR_Word check_hlds__inst_check__Var_92;
      MR_Word check_hlds__inst_check__Var_95;
      MR_Word check_hlds__inst_check__Var_98;
      MR_Word check_hlds__inst_check__Var_99;
      MR_Word check_hlds__inst_check__Var_101;
      MR_Word check_hlds__inst_check__Var_102;
      MR_Word check_hlds__inst_check__Var_103;
      MR_Word check_hlds__inst_check__Var_112;
      MR_Word check_hlds__inst_check__Var_113;
      MR_Word check_hlds__inst_check__Var_114;
      MR_Word check_hlds__inst_check__Var_115;
      MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_118_133;
      MR_Box check_hlds__inst_check__conv0_FuncSymbolPhrase_28;
      MR_Box check_hlds__inst_check__conv1_IsAreNotPhrase_29;

      check_hlds__inst_check__conv0_FuncSymbolPhrase_28 = parse_tree__error_util__choose_number_3_f_0(check_hlds__inst_check__TypeCtorInfo_130_130, check_hlds__inst_check__TypeCtorInfo_130_130, check_hlds__inst_check__MismatchConsIdStrs_10, ((MR_Box) ((MR_String) "function symbol")), ((MR_Box) ((MR_String) "function symbols")));
      check_hlds__inst_check__FuncSymbolPhrase_28 = ((MR_String) check_hlds__inst_check__conv0_FuncSymbolPhrase_28);
      check_hlds__inst_check__conv1_IsAreNotPhrase_29 = parse_tree__error_util__choose_number_3_f_0(check_hlds__inst_check__TypeCtorInfo_130_130, check_hlds__inst_check__TypeCtorInfo_130_130, check_hlds__inst_check__MismatchConsIdStrs_10, ((MR_Box) ((MR_String) "is not a function symbol")), ((MR_Box) ((MR_String) "are not function symbols")));
      check_hlds__inst_check__IsAreNotPhrase_29 = ((MR_String) check_hlds__inst_check__conv1_IsAreNotPhrase_29);
      check_hlds__inst_check__MismatchConsIdPieces_30 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(check_hlds__inst_check__MismatchConsIdStrs_10);
      check_hlds__inst_check__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        check_hlds__inst_check__Var_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_85, 0) = ((MR_Box) (check_hlds__inst_check__ShortInstSymName_15));
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_85, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_14));
      }
      {
        check_hlds__inst_check__Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_84, 1) = ((MR_Box) (check_hlds__inst_check__Var_85));
      }
      {
        check_hlds__inst_check__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_91, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtorName_20));
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_91, 1) = ((MR_Box) (check_hlds__inst_check__TypeCtorArity_21));
      }
      {
        check_hlds__inst_check__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_90, 1) = ((MR_Box) (check_hlds__inst_check__Var_91));
      }
      {
        check_hlds__inst_check__Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_99, 1) = ((MR_Box) (check_hlds__inst_check__FuncSymbolPhrase_28));
      }
      {
        check_hlds__inst_check__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_98, 0) = ((MR_Box) (check_hlds__inst_check__Var_99));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__inst_check__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[42])));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_95, 1) = ((MR_Box) (check_hlds__inst_check__Var_98));
      }
      {
        check_hlds__inst_check__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_92, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[41])));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_92, 1) = ((MR_Box) (check_hlds__inst_check__Var_95));
      }
      {
        check_hlds__inst_check__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_89, 0) = ((MR_Box) (check_hlds__inst_check__Var_90));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_89, 1) = ((MR_Box) (check_hlds__inst_check__Var_92));
      }
      {
        check_hlds__inst_check__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[40])));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_86, 1) = ((MR_Box) (check_hlds__inst_check__Var_89));
      }
      {
        check_hlds__inst_check__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_83, 0) = ((MR_Box) (check_hlds__inst_check__Var_84));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_83, 1) = ((MR_Box) (check_hlds__inst_check__Var_86));
      }
      {
        check_hlds__inst_check__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_80, 1) = ((MR_Box) (check_hlds__inst_check__Var_83));
      }
      {
        check_hlds__inst_check__Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_103, 1) = ((MR_Box) (check_hlds__inst_check__IsAreNotPhrase_29));
      }
      {
        check_hlds__inst_check__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_102, 0) = ((MR_Box) (check_hlds__inst_check__Var_103));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[14])));
      }
      check_hlds__inst_check__Var_101 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_131_131, check_hlds__inst_check__MismatchConsIdPieces_30, check_hlds__inst_check__Var_102);
      check_hlds__inst_check__MismatchPieces_31 = mercury__list__f_43_43_2_f_0(check_hlds__inst_check__TypeCtorInfo_131_131, check_hlds__inst_check__Var_80, check_hlds__inst_check__Var_101);
      {
        check_hlds__inst_check__Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_115, 0) = ((MR_Box) (check_hlds__inst_check__MismatchPieces_31));
      }
      {
        check_hlds__inst_check__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_114, 0) = ((MR_Box) (check_hlds__inst_check__Var_115));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__inst_check__Var_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_113, 0) = ((MR_Box) (check_hlds__inst_check__Context_16));
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_113, 1) = ((MR_Box) (check_hlds__inst_check__Var_114));
      }
      {
        check_hlds__inst_check__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_112, 0) = ((MR_Box) (check_hlds__inst_check__Var_113));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__inst_check__MismatchSpec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__MismatchSpec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__MismatchSpec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
        MR_hl_field(MR_mktag(0), check_hlds__inst_check__MismatchSpec_32, 2) = ((MR_Box) (check_hlds__inst_check__Var_112));
      }
      {
        check_hlds__inst_check__STATE_VARIABLE_Specs_118_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_118_133, 0) = ((MR_Box) (check_hlds__inst_check__MismatchSpec_32));
        MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_Specs_118_133, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_67_67));
      }
      *check_hlds__inst_check__IFTC_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
      switch (check_hlds__inst_check__InstDefinedInThisModule_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          *check_hlds__inst_check__STATE_VARIABLE_Specs_35 = check_hlds__inst_check__STATE_VARIABLE_Specs_118_133;
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check__type_is_user_visible_2_p_0(
  MR_Word check_hlds__inst_check__Section_3,
  MR_Word check_hlds__inst_check__TypeDefn_4)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Word check_hlds__inst_check__TypeStatus_5;
    MR_Word check_hlds__inst_check__Status_10;

    hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__inst_check__TypeDefn_4, &check_hlds__inst_check__TypeStatus_5);
    check_hlds__inst_check__Status_10 = (MR_Word) check_hlds__inst_check__TypeStatus_5;
    switch (MR_tag((MR_Word) check_hlds__inst_check__Status_10)) {
      default:
        check_hlds__inst_check__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_check__Status_10)) {
          default:
            check_hlds__inst_check__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            check_hlds__inst_check__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
            check_hlds__inst_check__succeeded = (check_hlds__inst_check__Section_3 == (MR_Integer) 1);
            break;
        }
        break;
      case (MR_Integer) 2:
        check_hlds__inst_check__succeeded = MR_TRUE;
        break;
    }
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check__maybe_issue_no_such_type_error_5_p_0(
  MR_Word check_hlds__inst_check__InstId_6,
  MR_Word check_hlds__inst_check__InstDefn_7,
  MR_Word check_hlds__inst_check__TypeCtor_8,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_Specs_0_19,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_Specs_20)
{
  {
    MR_Word check_hlds__inst_check__InstStatus_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 5)));
    MR_Word check_hlds__inst_check__InstDefinedInThisModule_11;
    MR_Word check_hlds__inst_check__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 0)));
    MR_Word check_hlds__inst_check__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 1)));
    MR_Word check_hlds__inst_check__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 2)));
    MR_Word check_hlds__inst_check__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 3)));
    MR_Word check_hlds__inst_check__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 4)));

    check_hlds__inst_check__InstDefinedInThisModule_11 = hlds__status__inst_status_defined_in_this_module_1_f_0(check_hlds__inst_check__InstStatus_10);
    switch (check_hlds__inst_check__InstDefinedInThisModule_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__inst_check__STATE_VARIABLE_Specs_20 = check_hlds__inst_check__STATE_VARIABLE_Specs_0_19;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_check__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 4)));
          MR_Word check_hlds__inst_check__InstName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_6, (MR_Integer) 0)));
          MR_Integer check_hlds__inst_check__InstArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstId_6, (MR_Integer) 1)));
          MR_Word check_hlds__inst_check__TypeCtorName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_8, (MR_Integer) 0)));
          MR_Integer check_hlds__inst_check__TypeCtorArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_8, (MR_Integer) 1)));
          MR_Word check_hlds__inst_check__Pieces_17;
          MR_Word check_hlds__inst_check__Spec_18;
          MR_Word check_hlds__inst_check__Var_23;
          MR_Word check_hlds__inst_check__Var_24;
          MR_Word check_hlds__inst_check__Var_25;
          MR_Word check_hlds__inst_check__Var_26;
          MR_Word check_hlds__inst_check__Var_29;
          MR_Word check_hlds__inst_check__Var_30;
          MR_Word check_hlds__inst_check__Var_31;
          MR_Word check_hlds__inst_check__Var_43;
          MR_Word check_hlds__inst_check__Var_44;
          MR_Word check_hlds__inst_check__Var_45;
          MR_Word check_hlds__inst_check__Var_46;
          MR_Word check_hlds__inst_check__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 0)));
          MR_Word check_hlds__inst_check__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 1)));
          MR_Word check_hlds__inst_check__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 2)));
          MR_Word check_hlds__inst_check__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 3)));
          MR_Word check_hlds__inst_check__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__InstDefn_7, (MR_Integer) 5)));

          {
            check_hlds__inst_check__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_25, 0) = ((MR_Box) (check_hlds__inst_check__InstName_13));
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_25, 1) = ((MR_Box) (check_hlds__inst_check__InstArity_14));
          }
          {
            check_hlds__inst_check__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_24, 1) = ((MR_Box) (check_hlds__inst_check__Var_25));
          }
          {
            check_hlds__inst_check__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_31, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtorName_15));
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_31, 1) = ((MR_Box) (check_hlds__inst_check__TypeCtorArity_16));
          }
          {
            check_hlds__inst_check__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), check_hlds__inst_check__Var_30, 1) = ((MR_Box) (check_hlds__inst_check__Var_31));
          }
          {
            check_hlds__inst_check__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_29, 0) = ((MR_Box) (check_hlds__inst_check__Var_30));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_1[9])));
          }
          {
            check_hlds__inst_check__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[38])));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_26, 1) = ((MR_Box) (check_hlds__inst_check__Var_29));
          }
          {
            check_hlds__inst_check__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_23, 0) = ((MR_Box) (check_hlds__inst_check__Var_24));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_23, 1) = ((MR_Box) (check_hlds__inst_check__Var_26));
          }
          {
            check_hlds__inst_check__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__inst_check_scalar_common_1[37])));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Pieces_17, 1) = ((MR_Box) (check_hlds__inst_check__Var_23));
          }
          {
            check_hlds__inst_check__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_46, 0) = ((MR_Box) (check_hlds__inst_check__Pieces_17));
          }
          {
            check_hlds__inst_check__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_45, 0) = ((MR_Box) (check_hlds__inst_check__Var_46));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__inst_check__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_44, 0) = ((MR_Box) (check_hlds__inst_check__Context_12));
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_44, 1) = ((MR_Box) (check_hlds__inst_check__Var_45));
          }
          {
            check_hlds__inst_check__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_43, 0) = ((MR_Box) (check_hlds__inst_check__Var_44));
            MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__inst_check__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Spec_18, 2) = ((MR_Box) (check_hlds__inst_check__Var_43));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_check__STATE_VARIABLE_Specs_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Spec_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_Specs_0_19));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_insts_6_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_6 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
      *check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_4 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
    }
    else
    {
      MR_Word check_hlds__inst_check__BoundInst_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__BoundInsts_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__MaybePossibleTypes_19;
      MR_Word check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;
      MR_Word check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;

      check_hlds__inst_check__get_possible_types_for_bound_inst_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__BoundInst_15, &check_hlds__inst_check__MaybePossibleTypes_19);
      if ((check_hlds__inst_check__MaybePossibleTypes_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = (MR_Integer) 0;
        check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5;
      }
      else
      {
        MR_Word check_hlds__inst_check__PossibleTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__MaybePossibleTypes_19, (MR_Integer) 0)));
        MR_Word check_hlds__inst_check__PossibleTypeSet_21;

        check_hlds__inst_check__PossibleTypeSet_21 = mercury__set__list_to_set_1_f_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_defn_or_builtin_0, check_hlds__inst_check__PossibleTypes_20);
        {
          check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 0) = ((MR_Box) (check_hlds__inst_check__PossibleTypeSet_21));
          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5));
        }
        check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3;
      }
      /* direct tailcall eliminated */
      {
        MR_Word check_hlds__inst_check__next_value_of_HeadVar__2_2 = check_hlds__inst_check__BoundInsts_16;
        MR_Word check_hlds__inst_check__next_value_of_STATE_VARIABLE_TypeableFunctors_0_3 = check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_27_27;
        MR_Word check_hlds__inst_check__next_value_of_STATE_VARIABLE_PossibleTypeSets_0_5 = check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_26_26;

        check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__next_value_of_HeadVar__2_2;
        check_hlds__inst_check__STATE_VARIABLE_TypeableFunctors_0_3 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_TypeableFunctors_0_3;
        check_hlds__inst_check__STATE_VARIABLE_PossibleTypeSets_0_5 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_PossibleTypeSets_0_5;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_check__get_possible_types_for_bound_inst_3_p_0(
  MR_Word check_hlds__inst_check__FunctorsToTypesMap_4,
  MR_Word check_hlds__inst_check__BoundInst_5,
  MR_Word * check_hlds__inst_check__MaybeTypes_6)
{
  {
    MR_bool check_hlds__inst_check__succeeded;
    MR_Word check_hlds__inst_check__ConsId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_5, (MR_Integer) 0)));
    MR_Word check_hlds__inst_check__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) check_hlds__inst_check__ConsId_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
            *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__inst_check__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_7, (MR_Integer) 1)));
              MR_Integer check_hlds__inst_check__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_7, (MR_Integer) 2)));
              MR_String check_hlds__inst_check__Name_12;
              MR_Word check_hlds__inst_check__FunctorNameAndArity_13;
              MR_Word check_hlds__inst_check__UserTypes_15;
              MR_Word check_hlds__inst_check__UserCharTypes_16;
              MR_Word check_hlds__inst_check__Types_17;
              MR_Word check_hlds__inst_check__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_7, (MR_Integer) 3)));
              MR_Word check_hlds__inst_check__TypeCtorDefns_14;
              MR_Integer check_hlds__inst_check__Var_67;
              MR_Word check_hlds__inst_check__Var_70;

              check_hlds__inst_check__Name_12 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__inst_check__SymName_9);
              {
                check_hlds__inst_check__FunctorNameAndArity_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_13, 0) = ((MR_Box) (check_hlds__inst_check__Name_12));
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__FunctorNameAndArity_13, 1) = ((MR_Box) (check_hlds__inst_check__Arity_10));
              }
              check_hlds__inst_check__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_type_ctor_and_defn_0, check_hlds__inst_check__FunctorsToTypesMap_4, ((MR_Box) (check_hlds__inst_check__FunctorNameAndArity_13)), &check_hlds__inst_check__TypeCtorDefns_14);
              if (check_hlds__inst_check__succeeded)
                check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__SymName_9, check_hlds__inst_check__TypeCtorDefns_14, &check_hlds__inst_check__UserTypes_15);
              else
                check_hlds__inst_check__UserTypes_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              check_hlds__inst_check__Var_67 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__Name_12);
              check_hlds__inst_check__succeeded = (check_hlds__inst_check__Var_67 == (MR_Integer) 1);
              if (check_hlds__inst_check__succeeded)
              {
                {
                  check_hlds__inst_check__UserCharTypes_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[0])));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__UserCharTypes_16, 1) = ((MR_Box) (check_hlds__inst_check__UserTypes_15));
                }
              }
              else
                check_hlds__inst_check__UserCharTypes_16 = check_hlds__inst_check__UserTypes_15;
              {
                check_hlds__inst_check__Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_70, 0) = ((MR_Box) (check_hlds__inst_check__SymName_9));
                MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_70, 1) = ((MR_Box) (check_hlds__inst_check__Arity_10));
              }
              check_hlds__inst_check__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__inst_check__Var_70);
              if (check_hlds__inst_check__succeeded)
              {
                MR_Word check_hlds__inst_check__Var_71;

                {
                  check_hlds__inst_check__Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), check_hlds__inst_check__Var_71, 0) = ((MR_Box) (check_hlds__inst_check__Arity_10));
                }
                {
                  check_hlds__inst_check__Types_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_17, 0) = ((MR_Box) (check_hlds__inst_check__Var_71));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__Types_17, 1) = ((MR_Box) (check_hlds__inst_check__UserCharTypes_16));
                }
              }
              else
                check_hlds__inst_check__Types_17 = check_hlds__inst_check__UserCharTypes_16;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_check__MaybeTypes_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Types_17));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__inst_check__Var_64;
              MR_Word check_hlds__inst_check__Var_65;
              MR_Integer check_hlds__inst_check__Arity_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_7, (MR_Integer) 1)));

              {
                check_hlds__inst_check__Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), check_hlds__inst_check__Var_65, 0) = ((MR_Box) (check_hlds__inst_check__Arity_72));
              }
              {
                check_hlds__inst_check__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_64, 0) = ((MR_Box) (check_hlds__inst_check__Var_65));
                MR_hl_field(MR_mktag(1), check_hlds__inst_check__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_check__MaybeTypes_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Var_64));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[17]);
            }
            break;
          case (MR_Integer) 6:
            {
              *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[29]);
            }
            break;
          case (MR_Integer) 7:
            {
              *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[14]);
            }
            break;
          case (MR_Integer) 8:
            {
              *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[26]);
            }
            break;
          case (MR_Integer) 9:
            {
              *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[8]);
            }
            break;
          case (MR_Integer) 10:
            {
              *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[20]);
            }
            break;
          case (MR_Integer) 11:
            {
              *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[11]);
            }
            break;
          case (MR_Integer) 12:
            {
              *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[23]);
            }
            break;
          case (MR_Integer) 13:
            *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[3]);
            break;
          case (MR_Integer) 14:
            *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[1]);
            break;
          case (MR_Integer) 15:
            *check_hlds__inst_check__MaybeTypes_6 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__inst_check_scalar_common_3[5]);
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__find_matching_user_types_3_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word * check_hlds__inst_check__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__inst_check__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word check_hlds__inst_check__TypeCtorAndDefn_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__TypeCtorAndDefns_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__MatchingUserTypes0_9;
      MR_Word check_hlds__inst_check__TypeCtor_10;
      MR_Word check_hlds__inst_check__TypeCtorSymName_12;
      MR_Word check_hlds__inst_check__TypeCtorModuleName_15;
      MR_Word check_hlds__inst_check___TypeDefn_11;
      MR_Integer check_hlds__inst_check___TypeCtorArity_13;

      check_hlds__inst_check__find_matching_user_types_3_p_0(check_hlds__inst_check__HeadVar__1_1, check_hlds__inst_check__TypeCtorAndDefns_7, &check_hlds__inst_check__MatchingUserTypes0_9);
      check_hlds__inst_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 0)));
      check_hlds__inst_check___TypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_6, (MR_Integer) 1)));
      check_hlds__inst_check__TypeCtorSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 0)));
      check_hlds__inst_check___TypeCtorArity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_10, (MR_Integer) 1)));
      if (((MR_tag((MR_Word) check_hlds__inst_check__TypeCtorSymName_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String check_hlds__inst_check__Var_16;

        check_hlds__inst_check__TypeCtorModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 0)));
        check_hlds__inst_check__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_12, (MR_Integer) 1)));
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_check", (MR_String) "predicate \140check_hlds.inst_check.find_matching_user_types\'/3", (MR_String) "TypeCtorSymName is unqualified");
          return;
        }
      }
      if (((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word check_hlds__inst_check__FunctorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
        MR_String check_hlds__inst_check__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));

        check_hlds__inst_check__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(check_hlds__inst_check__FunctorModuleName_18, check_hlds__inst_check__TypeCtorModuleName_15);
        if (check_hlds__inst_check__succeeded)
        {
          MR_Word check_hlds__inst_check__Var_23 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_check__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Var_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
          }
        }
        else
          *check_hlds__inst_check__HeadVar__3_3 = check_hlds__inst_check__MatchingUserTypes0_9;
      }
      else
      {
        MR_Word check_hlds__inst_check__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__inst_check__TypeCtorAndDefn_6);

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_check__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_check__Var_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_check__MatchingUserTypes0_9));
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_1(
  void * check_hlds__inst_check__env_ptr_arg)
{
  {
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

    MR_builtin_longjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_3(
  void * check_hlds__inst_check__env_ptr_arg)
{
  {
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

    (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_118 = ((MR_Word) (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__conv0_Constructor_118);
    check_hlds__inst_check__check_for_type_bound_insts_4_p_0_2(check_hlds__inst_check__env_ptr);
  }
}

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_2(
  void * check_hlds__inst_check__env_ptr_arg)
{
  {
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

    {
      MR_Word check_hlds__inst_check__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_118, (MR_Integer) 0)));
      MR_Word check_hlds__inst_check__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_118, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__Var_42;
      MR_Word check_hlds__inst_check__Var_44;

      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorSymName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_118, (MR_Integer) 2)));
      check_hlds__inst_check__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_118, (MR_Integer) 3)));
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorArity_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_118, (MR_Integer) 4)));
      check_hlds__inst_check__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructor_118, (MR_Integer) 5)));
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Var_123 = mdbcomp__sym_name__unqualify_name_1_f_0((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorSymName_41);
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (strcmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Var_123) == 0);
      if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
      {
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__CtorArity_43 == (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsArity_17);
        if ((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
          check_hlds__inst_check__check_for_type_bound_insts_4_p_0_1(check_hlds__inst_check__env_ptr);
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0_4(
  void * check_hlds__inst_check__env_ptr_arg)
{
  {
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s * check_hlds__inst_check__env_ptr = (struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s *) check_hlds__inst_check__env_ptr_arg;

    if (MR_builtin_setjmp((check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__conv0_Constructor_118, (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructors_22, check_hlds__inst_check__check_for_type_bound_insts_4_p_0_3, check_hlds__inst_check__env_ptr);
        }
        (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (check_hlds__inst_check__env_ptr)->check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__inst_check__check_for_type_bound_insts_4_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__HeadVar__2_2,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_4)
{
  {
    struct check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0_s check_hlds__inst_check__env;

    while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((check_hlds__inst_check__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_4 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
      else
      {
        MR_Word check_hlds__inst_check__BoundInst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__inst_check__BoundInsts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__inst_check__ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_10, (MR_Integer) 0)));
        MR_String check_hlds__inst_check__ConsIdStr_15;
        MR_Word check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116;
        MR_Word check_hlds__inst_check__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__BoundInst_10, (MR_Integer) 1)));

        check_hlds__inst_check__ConsIdStr_15 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(check_hlds__inst_check__ConsId_13);
        switch (MR_tag((MR_Word) check_hlds__inst_check__ConsId_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
            }
            break;
          case (MR_Integer) 1:
            {
              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
            }
            break;
          case (MR_Integer) 2:
            {
              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 16:
              case (MR_Integer) 17:
              case (MR_Integer) 18:
              case (MR_Integer) 19:
              case (MR_Integer) 20:
              case (MR_Integer) 21:
                {
                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__inst_check__ConsSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_check__Var_18;

                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 2)));
                  check_hlds__inst_check__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_check__ConsId_13, (MR_Integer) 3)));
                  switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 2:
                          {
                            check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                            MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Integer check_hlds__inst_check__Var_113;
                            MR_String check_hlds__inst_check__ConsName_119;

                            (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__ConsSymName_16)) == (MR_mktag((MR_Integer) 0)));
                            if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                            {
                              check_hlds__inst_check__ConsName_119 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 0)));
                              check_hlds__inst_check__Var_113 = mercury__string__count_codepoints_1_f_0(check_hlds__inst_check__ConsName_119);
                              (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__Var_113 == (MR_Integer) 1);
                            }
                            if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                            else
                              {
                                check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                                MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                              }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_check__TypeCtor_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
                        MR_Word check_hlds__inst_check__TypeDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_check__TypeDefnBody_21;

                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_20, &check_hlds__inst_check__TypeDefnBody_21);
                        switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_21)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word check_hlds__inst_check__ModuleMismatch_32;
                              MR_Word check_hlds__inst_check__ConsIdMismatch_45;
                              MR_Word check_hlds__inst_check__Var_23;
                              MR_Word check_hlds__inst_check__Var_24;
                              MR_Word check_hlds__inst_check__Var_25;
                              MR_Word check_hlds__inst_check__Var_26;
                              MR_Word check_hlds__inst_check__Var_27;
                              MR_Word check_hlds__inst_check__Var_28;
                              MR_Word check_hlds__inst_check__Var_29;
                              MR_Word check_hlds__inst_check__Var_30;

                              (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__Constructors_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 0)));
                              check_hlds__inst_check__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 1)));
                              check_hlds__inst_check__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 2)));
                              check_hlds__inst_check__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 3)));
                              check_hlds__inst_check__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 4)));
                              check_hlds__inst_check__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 5)));
                              check_hlds__inst_check__Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 6)))) & (MR_Integer) 1);
                              check_hlds__inst_check__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                              check_hlds__inst_check__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_21, (MR_Integer) 7)));
                              if (((MR_tag((MR_Word) check_hlds__inst_check__ConsSymName_16)) == (MR_mktag((MR_Integer) 1))))
                              {
                                MR_Word check_hlds__inst_check__ConsModulename_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 0)));
                                MR_Word check_hlds__inst_check__TypeCtorSymName_34;
                                MR_Integer check_hlds__inst_check__Var_35;
                                MR_Word check_hlds__inst_check__TypeCtormoduleName_36;
                                MR_String check_hlds__inst_check__Var_37;

                                (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 1)));
                                check_hlds__inst_check__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_19, (MR_Integer) 0)));
                                check_hlds__inst_check__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtor_19, (MR_Integer) 1)));
                                (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1)));
                                if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                                {
                                  check_hlds__inst_check__TypeCtormoduleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_34, (MR_Integer) 0)));
                                  check_hlds__inst_check__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeCtorSymName_34, (MR_Integer) 1)));
                                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(check_hlds__inst_check__ConsModulename_33, check_hlds__inst_check__TypeCtormoduleName_36);
                                }
                                if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                                  check_hlds__inst_check__ModuleMismatch_32 = (MR_Integer) 0;
                                else
                                  check_hlds__inst_check__ModuleMismatch_32 = (MR_Integer) 1;
                              }
                              else
                              {
                                (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__ConsName_31 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__ConsSymName_16, (MR_Integer) 0)));
                                check_hlds__inst_check__ModuleMismatch_32 = (MR_Integer) 0;
                              }
                              check_hlds__inst_check__check_for_type_bound_insts_4_p_0_4(&check_hlds__inst_check__env);
                              if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                                check_hlds__inst_check__ConsIdMismatch_45 = (MR_Integer) 0;
                              else
                                check_hlds__inst_check__ConsIdMismatch_45 = (MR_Integer) 1;
                              (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__ModuleMismatch_32 == (MR_Integer) 0);
                              if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                                (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__ConsIdMismatch_45 == (MR_Integer) 0);
                              if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                                check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                              else
                                {
                                  check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                                  MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                                }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                              MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                        MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__inst_check__Var_110;

                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                  {
                    check_hlds__inst_check__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__Var_110 == (MR_Integer) 0);
                  }
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                  else
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__inst_check__Var_108;

                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                  {
                    check_hlds__inst_check__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__Var_108 == (MR_Integer) 1);
                  }
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                  else
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__inst_check__Var_106;

                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                  {
                    check_hlds__inst_check__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__Var_106 == (MR_Integer) 2);
                  }
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                  else
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word check_hlds__inst_check__Var_104;

                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                  {
                    check_hlds__inst_check__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__Var_104 == (MR_Integer) 3);
                  }
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                  else
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word check_hlds__inst_check__Var_102;

                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                  {
                    check_hlds__inst_check__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__Var_102 == (MR_Integer) 4);
                  }
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                  else
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word check_hlds__inst_check__Var_100;

                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                  {
                    check_hlds__inst_check__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__Var_100 == (MR_Integer) 5);
                  }
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                  else
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word check_hlds__inst_check__Var_98;

                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                  {
                    check_hlds__inst_check__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__Var_98 == (MR_Integer) 6);
                  }
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                  else
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word check_hlds__inst_check__Var_96;

                  (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                  {
                    check_hlds__inst_check__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
                    (check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded = (check_hlds__inst_check__Var_96 == (MR_Integer) 7);
                  }
                  if ((check_hlds__inst_check__env).check_hlds__inst_check__check_for_type_bound_insts_4_p_0_env_0__succeeded)
                    check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                  else
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                }
                break;
              case (MR_Integer) 13:
                switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                    break;
                }
                break;
              case (MR_Integer) 14:
                switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        {
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                        }
                        break;
                      case (MR_Integer) 1:
                        check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                    break;
                }
                break;
              case (MR_Integer) 15:
                switch (MR_tag((MR_Word) check_hlds__inst_check__HeadVar__1_1)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(check_hlds__inst_check__HeadVar__1_1)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        {
                          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                          MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                        }
                        break;
                      case (MR_Integer) 2:
                        check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 0) = ((MR_Box) (check_hlds__inst_check__ConsIdStr_15));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116, 1) = ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3));
                    }
                    break;
                }
                break;
            }
            break;
        }
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__inst_check__next_value_of_HeadVar__2_2 = check_hlds__inst_check__BoundInsts_11;
          MR_Word check_hlds__inst_check__next_value_of_STATE_VARIABLE_RevMismatchConsIdStrs_0_3 = check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_116_116;

          check_hlds__inst_check__HeadVar__2_2 = check_hlds__inst_check__next_value_of_HeadVar__2_2;
          check_hlds__inst_check__STATE_VARIABLE_RevMismatchConsIdStrs_0_3 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_RevMismatchConsIdStrs_0_3;
        }
        continue;
      }
      break;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check__sym_name_for_builtin_type_2_p_0(
  MR_Word check_hlds__inst_check__SymName_3,
  MR_String check_hlds__inst_check__TypeName_4)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    if (((MR_tag((MR_Word) check_hlds__inst_check__SymName_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String check_hlds__inst_check__Var_12 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__SymName_3, (MR_Integer) 1)));
      MR_Word check_hlds__inst_check__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__SymName_3, (MR_Integer) 0)));
      MR_String check_hlds__inst_check__Var_14;

      check_hlds__inst_check__succeeded = ((MR_tag((MR_Word) check_hlds__inst_check__Var_13)) == (MR_mktag((MR_Integer) 0)));
      if (check_hlds__inst_check__succeeded)
      {
        check_hlds__inst_check__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_13, (MR_Integer) 0)));
        check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__TypeName_4, check_hlds__inst_check__Var_12) == 0);
        if (check_hlds__inst_check__succeeded)
          check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__Var_14, (MR_String) "") == 0);
        if (!(check_hlds__inst_check__succeeded))
        {
          check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__TypeName_4, check_hlds__inst_check__Var_12) == 0);
          if (check_hlds__inst_check__succeeded)
            check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__TypeName_4, check_hlds__inst_check__Var_14) == 0);
        }
      }
    }
    else
    {
      MR_String check_hlds__inst_check__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__SymName_3, (MR_Integer) 0)));

      check_hlds__inst_check__succeeded = (strcmp(check_hlds__inst_check__TypeName_4, check_hlds__inst_check__Var_8) == 0);
    }
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box * check_hlds__inst_check__wrapper_arg_3)
{
  {
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
    MR_Word check_hlds__inst_check__conv1_HeadVar__4_22;

    check_hlds__inst_check__IntroducedFrom__pred__index_visible_types_by_unqualified_functors__125__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2), &check_hlds__inst_check__conv1_HeadVar__4_22);
    *check_hlds__inst_check__wrapper_arg_3 = ((MR_Box) (check_hlds__inst_check__conv1_HeadVar__4_22));
  }
}

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_1(
  MR_Box check_hlds__inst_check__closure_arg,
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box * check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_Box check_hlds__inst_check__closure = check_hlds__inst_check__closure_arg;
    MR_Word check_hlds__inst_check__conv0_FunctorNameAndArity_4;

    check_hlds__inst_check__constructor_to_functor_name_and_arity_2_p_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), &check_hlds__inst_check__conv0_FunctorNameAndArity_4);
    *check_hlds__inst_check__wrapper_arg_2 = ((MR_Box) (check_hlds__inst_check__conv0_FunctorNameAndArity_4));
  }
}

static void MR_CALL 
check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0(
  MR_Word check_hlds__inst_check__HeadVar__1_1,
  MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2,
  MR_Word * check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__inst_check__succeeded;

      if ((check_hlds__inst_check__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_3 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2;
      else
      {
        MR_Word check_hlds__inst_check__TypeCtorDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_check__TypeCtorDefns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_check__TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorDefn_7, (MR_Integer) 0)));
        MR_Word check_hlds__inst_check__TypeDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorDefn_7, (MR_Integer) 1)));
        MR_Word check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18;
        MR_Word check_hlds__inst_check__TypeStatus_29;
        MR_Word check_hlds__inst_check__Status_34;

        hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__inst_check__TypeDefn_11, &check_hlds__inst_check__TypeStatus_29);
        check_hlds__inst_check__Status_34 = (MR_Word) check_hlds__inst_check__TypeStatus_29;
        switch (MR_tag((MR_Word) check_hlds__inst_check__Status_34)) {
          default:
            check_hlds__inst_check__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_check__Status_34)) {
              default:
                check_hlds__inst_check__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                check_hlds__inst_check__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 8:
                check_hlds__inst_check__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 2:
            check_hlds__inst_check__succeeded = MR_TRUE;
            break;
        }
        if (check_hlds__inst_check__succeeded)
        {
          MR_Word check_hlds__inst_check__TypeCtorAndDefn_12;
          MR_Word check_hlds__inst_check__Functors_13;
          MR_Word check_hlds__inst_check__Var_17;
          MR_Word check_hlds__inst_check__TypeDefnBody_39;
          MR_Box check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18;

          {
            check_hlds__inst_check__TypeCtorAndDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_12, 0) = ((MR_Box) (check_hlds__inst_check__TypeCtor_10));
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__TypeCtorAndDefn_12, 1) = ((MR_Box) (check_hlds__inst_check__TypeDefn_11));
          }
          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__inst_check__TypeDefn_11, &check_hlds__inst_check__TypeDefnBody_39);
          switch (MR_tag((MR_Word) check_hlds__inst_check__TypeDefnBody_39)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__inst_check__Constructors_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 0)));
                MR_Word check_hlds__inst_check__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 1)));
                MR_Word check_hlds__inst_check__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 2)));
                MR_Word check_hlds__inst_check__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 3)));
                MR_Word check_hlds__inst_check__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 4)));
                MR_Word check_hlds__inst_check__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 5)));
                MR_Word check_hlds__inst_check__Var_46 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 6)))) & (MR_Integer) 1);
                MR_Word check_hlds__inst_check__Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word check_hlds__inst_check__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_check__TypeDefnBody_39, (MR_Integer) 7)));

                mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[1], check_hlds__inst_check__Constructors_40, &check_hlds__inst_check__Functors_13);
              }
              break;
            case (MR_Integer) 2:
              check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 3:
              check_hlds__inst_check__Functors_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
          }
          {
            check_hlds__inst_check__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_17, 0) = ((MR_Box) (&check_hlds__inst_check_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_17, 1) = ((MR_Box) (check_hlds__inst_check__index_visible_types_by_unqualified_functors_3_p_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__inst_check__Var_17, 3) = ((MR_Box) (check_hlds__inst_check__TypeCtorAndDefn_12));
          }
          mercury__list__foldl_4_p_0((MR_Word) &check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0, (MR_Word) &check_hlds__inst_check_scalar_common_2[0], check_hlds__inst_check__Var_17, check_hlds__inst_check__Functors_13, ((MR_Box) (check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2)), &check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18);
          check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18 = ((MR_Word) check_hlds__inst_check__conv2_STATE_VARIABLE_FunctorsToTypesMap_18_18);
        }
        else
          check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2;
        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__inst_check__next_value_of_HeadVar__1_1 = check_hlds__inst_check__TypeCtorDefns_8;
          MR_Word check_hlds__inst_check__next_value_of_STATE_VARIABLE_FunctorsToTypesMap_0_2 = check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_18_18;

          check_hlds__inst_check__HeadVar__1_1 = check_hlds__inst_check__next_value_of_HeadVar__1_1;
          check_hlds__inst_check__STATE_VARIABLE_FunctorsToTypesMap_0_2 = check_hlds__inst_check__next_value_of_STATE_VARIABLE_FunctorsToTypesMap_0_2;
        }
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____for_type_kind_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____for_type_kind_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____for_type_kind_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____for_type_kind_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functor_name_and_arity_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____functor_name_and_arity_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____functor_name_and_arity_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____functor_name_and_arity_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____functors_to_types_map_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____functors_to_types_map_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____functors_to_types_map_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____functors_to_types_map_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____mismatch_from_type_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____mismatch_from_type_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____mismatch_from_type_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____mismatch_from_type_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_ctor_and_defn_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_ctor_and_defn_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_ctor_and_defn_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____type_ctor_and_defn_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____type_defn_or_builtin_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____type_defn_or_builtin_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____type_defn_or_builtin_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____type_defn_or_builtin_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_check____Unify____typeable_functors_0_0_10001(
  MR_Box check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_check__succeeded;

    check_hlds__inst_check__succeeded = check_hlds__inst_check____Unify____typeable_functors_0_0(((MR_Word) check_hlds__inst_check__wrapper_arg_1), ((MR_Word) check_hlds__inst_check__wrapper_arg_2));
    return check_hlds__inst_check__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_check____Compare____typeable_functors_0_0_10001(
  MR_Box * check_hlds__inst_check__wrapper_arg_1,
  MR_Box check_hlds__inst_check__wrapper_arg_2,
  MR_Box check_hlds__inst_check__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_check__conv0_HeadVar__1_1;

    check_hlds__inst_check____Compare____typeable_functors_0_0(&check_hlds__inst_check__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_check__wrapper_arg_2), ((MR_Word) check_hlds__inst_check__wrapper_arg_3));
    *check_hlds__inst_check__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_check__conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_for_type_kind_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functor_name_and_arity_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_functors_to_types_map_0);
	MR_register_type_ctor_info(&check_hlds__inst_check__check_hlds__inst_check__type_ctor_info_mismatch_from_type_0);
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

/* :- end_module check_hlds.inst_check. */
