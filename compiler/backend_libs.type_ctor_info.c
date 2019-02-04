/*
** Automatically generated from `type_ctor_info.m'
** by the Mercury compiler,
** version rotd-2017-09-03
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


// :- module backend_libs.type_ctor_info.
// :- implementation.

/*
INIT mercury__backend_libs__type_ctor_info__init
ENDINIT
*/

#include "backend_libs.type_ctor_info.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.pseudo_type_info.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "mdbcomp.builtin_modules.mih"
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




static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_0[1];

static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0;

static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_1[1];

static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1;

static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_0[1];

static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_1[1];

static const MR_DuPtagLayout backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_ptag_ordered_maybe_reserved_rep_0[2];

static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_name_ordered_maybe_reserved_rep_0[2];

static const MR_Integer backend_libs__type_ctor_info__backend_libs__type_ctor_info__functor_number_map_maybe_reserved_rep_0[2];

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_reserved_address_0backend_libs__rtti__type_ctor_info_rtti_data_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static MR_Word MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1053__1_1_f_0(
  MR_Word LambdaHeadVar__1_10);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__991__1_2_p_0(
  MR_Word SectagLocn_9,
  MR_Word Locn0_12);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__927__1_3_p_0(
  MR_Word LocnMap_28,
  MR_Word LambdaHeadVar__1_46,
  MR_Word * LambdaHeadVar__2_47);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__917__1_5_p_0(
  MR_Word LambdaHeadVar__1_37,
  MR_Integer LambdaHeadVar__2_38,
  MR_Integer * LambdaHeadVar__3_39,
  MR_Word LambdaHeadVar__4_40,
  MR_Word * LambdaHeadVar__5_41);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__909__1_2_p_0(
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__804__1_2_p_0(
  MR_Word MaybeExistInfo_34,
  MR_Word HeadVar__2_60);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__803__1_2_p_0(
  MR_Word ArgInfos_32,
  MR_Word HeadVar__2_55);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__802__1_2_p_0(
  MR_Integer Arity_26,
  MR_Integer HeadVar__2_50);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__746__1_2_p_0(
  MR_Word ReservedAddr_14,
  MR_Word HeadVar__2_35);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__738__1_2_p_0(
  MR_Word ReservedAddr_14,
  MR_Word HeadVar__2_42);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__657__1_2_p_0(
  MR_Word Lang_2,
  MR_Word ForeignTagLang_27);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__651__1_2_p_0(
  MR_Integer Arity_23,
  MR_Integer HeadVar__2_76);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__649__1_2_p_0(
  MR_Word Constraints_20,
  MR_Word HeadVar__2_71);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__647__1_2_p_0(
  MR_Word ExistTvars_19,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__588__1_2_p_0(
  MR_Word ConsTag_23,
  MR_Word HeadVar__2_45);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__584__1_2_p_0(
  MR_Integer Arity_20,
  MR_Integer HeadVar__2_39);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__582__1_2_p_0(
  MR_Word Constraints_17,
  MR_Word HeadVar__2_34);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__580__1_2_p_0(
  MR_Word ExistTvars_16,
  MR_Word HeadVar__2_29);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__208__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word TypeModuleName_15);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(
  MR_Word MaybeResFunctor_4,
  MR_Word STATE_VARIABLE_NameTable_0_12,
  MR_Word * STATE_VARIABLE_NameTable_13);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(
  MR_Word DuFunctor_4,
  MR_Word STATE_VARIABLE_NameTable_0_10,
  MR_Word * STATE_VARIABLE_NameTable_11);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
  MR_Word DuFunctor_4,
  MR_Word STATE_VARIABLE_PtagTable_0_18,
  MR_Word * STATE_VARIABLE_PtagTable_19);

static void MR_CALL 
backend_libs__type_ctor_info__find_type_info_index_6_p_0(
  MR_Word Constraints_7,
  MR_Word ClassTable_8,
  MR_Integer StartSlot_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_LocnMap_0_22,
  MR_Word * STATE_VARIABLE_LocnMap_23);

static void MR_CALL 
backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TVar_2,
  MR_Integer STATE_VARIABLE_N_0_3,
  MR_Integer * STATE_VARIABLE_N_4,
  MR_Word * MatchingConstraint_5,
  MR_Integer * TypeInfoIndex_6);

static void MR_CALL 
backend_libs__type_ctor_info__generate_du_arg_info_6_p_0(
  MR_Integer NumUnivTvars_7,
  MR_Word ExistTvars_8,
  MR_Word ConstructorArg_9,
  MR_Word * ArgInfo_10,
  MR_Word STATE_VARIABLE_FunctorSubtypeInfo_0_29,
  MR_Word * STATE_VARIABLE_FunctorSubtypeInfo_30);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_reserved_functor_1_f_0(
  MR_Word HeadVar__1_1,
  MR_Word * ResFunctor_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_du_functor_1_f_0(
  MR_Word HeadVar__1_1,
  MR_Word * DuFunctor_3);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(
  MR_Word ForeignEnumFunctor_6,
  MR_Word STATE_VARIABLE_OrdinalMap_0_12,
  MR_Word * STATE_VARIABLE_OrdinalMap_13,
  MR_Word STATE_VARIABLE_NameMap_0_14,
  MR_Word * STATE_VARIABLE_NameMap_15);

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_maps_5_p_0(
  MR_Word EnumFunctor_6,
  MR_Word STATE_VARIABLE_ValueMap_0_11,
  MR_Word * STATE_VARIABLE_ValueMap_12,
  MR_Word STATE_VARIABLE_NameMap_0_13,
  MR_Word * STATE_VARIABLE_NameMap_14);

static void MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Integer STATE_VARIABLE_Vector_0_3,
  MR_Integer * STATE_VARIABLE_Vector_4);

static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Dynamic_0_3,
  MR_Word * STATE_VARIABLE_Dynamic_4,
  MR_Word STATE_VARIABLE_Static_0_5,
  MR_Word * STATE_VARIABLE_Static_6);

static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(
  MR_Word TypeCtorGenInfo_4,
  MR_Word ModuleInfo_5,
  MR_Word * RttiData_6);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_6(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word Ctors_10,
  MR_Word ConsTagMap_11,
  MR_Integer TypeArity_12,
  MR_Word EqualityAxioms_13,
  MR_Word ReservedAddr_14,
  MR_Word ModuleInfo_15,
  MR_Word * Details_16);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0(
  MR_Word Ctors_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer NextOrdinal_3,
  MR_Word ConsTagMap_4,
  MR_Integer TypeArity_5,
  MR_Word ModuleInfo_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0(
  MR_Word ExistTVars_5,
  MR_Word Constraints_6,
  MR_Word ClassTable_7,
  MR_Word * ExistInfo_8);

static void MR_CALL 
backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(
  MR_Word ConsTag_3,
  MR_Word * ConsRep_4);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Lang_9,
  MR_Word Ctors_10,
  MR_Word ConsTagMap_11,
  MR_Word ReserveTag_12,
  MR_Word EqualityAxioms_13,
  MR_Word * Details_14);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word Lang_2,
  MR_Word HeadVar__3_3,
  MR_Integer NextOrdinal_4,
  MR_Word ConsTagMap_5,
  MR_Word * HeadVar__6_6);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Ctors_8,
  MR_Word ConsTagMap_9,
  MR_Word ReserveTag_10,
  MR_Word EqualityAxioms_11,
  MR_Word * Details_12);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer NextOrdinal_3,
  MR_Word ConsTagMap_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_6_p_0(
  MR_Integer TypeArity_7,
  MR_Word SymName_8,
  MR_Word ArgType_9,
  MR_Word MaybeArgName_10,
  MR_Word EqualityAxioms_11,
  MR_Word * Details_12);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ModuleName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_9,
  MR_Word ModuleName_10,
  MR_String TypeName_11,
  MR_Integer TypeArity_12,
  MR_Word TypeDefn_13,
  MR_Word * TypeCtorGenInfo_14);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_1[10][2];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_2[31][3];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_4[15][5];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_5[3][8];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_6[3][1];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_7[2][9];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[4][6];


/* sealed */ struct backend_libs__type_ctor_info__vector_common_type_3_0_s {
  const MR_String backend_libs__type_ctor_info__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_3_0_s backend_libs__type_ctor_info_vector_common_3[32];

/* sealed */ struct backend_libs__type_ctor_info__vector_common_type_9_0_s {
  const MR_Word backend_libs__type_ctor_info__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_9_0_s backend_libs__type_ctor_info_vector_common_9[17];

/* sealed */ struct backend_libs__type_ctor_info__vector_common_type_10_0_s {
  const MR_String backend_libs__type_ctor_info__vector_common_type_10_0__vct_10_f_0;
  const MR_Word backend_libs__type_ctor_info__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_10_0_s backend_libs__type_ctor_info_vector_common_10[32];



static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[12]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[16]))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_2[31][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_1[0])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[11])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[14]))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[15]))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[15]))
  },
  /* row 18 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[0])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[5])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[5])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[7])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[2])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[8])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[5])),
    ((MR_Box) (backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[11])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[12])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[2])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[3])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_4[15][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uses_reserved_address_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uses_reserved_address_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_6[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_1[9]))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_7[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_functor_subtype_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_functor_subtype_info_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
};


static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_3_0_s backend_libs__type_ctor_info_vector_common_3[32] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     NULL },
  /* row 2 */   {     (MR_String) "ticket" },
  /* row 3 */   {     NULL },
  /* row 4 */   {     (MR_String) "redofr" },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     NULL },
  /* row 10 */   {     (MR_String) "type_ctor_info" },
  /* row 11 */   {     (MR_String) "maxfr" },
  /* row 12 */   {     NULL },
  /* row 13 */   {     (MR_String) "typeclass_info" },
  /* row 14 */   {     (MR_String) "base_typeclass_info" },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     (MR_String) "succip" },
  /* row 18 */   {     (MR_String) "heap_pointer" },
  /* row 19 */   {     NULL },
  /* row 20 */   {     (MR_String) "type_info" },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     (MR_String) "curfr" },
  /* row 24 */   {     (MR_String) "trail_ptr" },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_9_0_s backend_libs__type_ctor_info_vector_common_9[17] = {
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_6[1]) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)) },
  /* row 4 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 5 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)) },
  /* row 6 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)) },
  /* row 7 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)) },
  /* row 8 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)) },
  /* row 9 */   {     (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_6[2]) },
  /* row 10 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)) },
  /* row 11 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)) },
  /* row 12 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)) },
  /* row 13 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)) },
  /* row 14 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)) },
  /* row 15 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)) },
  /* row 16 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)) },
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_10_0_s backend_libs__type_ctor_info_vector_common_10[32] = {
  /* row 0 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "ticket",
    (MR_Integer) 6
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    (MR_String) "redofr",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    (MR_String) "type_ctor_info",
    (MR_Integer) 9
  },
  /* row 11 */
  {
    (MR_String) "maxfr",
    (MR_Integer) 2
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    (MR_String) "typeclass_info",
    (MR_Integer) 10
  },
  /* row 14 */
  {
    (MR_String) "base_typeclass_info",
    (MR_Integer) 11
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    (MR_String) "succip",
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_String) "heap_pointer",
    (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    (MR_String) "type_info",
    (MR_Integer) 8
  },
  /* row 21 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 22 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 23 */
  {
    (MR_String) "curfr",
    (MR_Integer) 3
  },
  /* row 24 */
  {
    (MR_String) "trail_ptr",
    (MR_Integer) 7
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0
};

static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0 = {
  (MR_String) "reserved_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_rep_0
};

static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1 = {
  (MR_String) "du_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_0[1] = {
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0
};

static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_1[1] = {
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1
};

static const MR_DuPtagLayout backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_ptag_ordered_maybe_reserved_rep_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_1
  }
};

static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_name_ordered_maybe_reserved_rep_0[2] = {
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1,
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0
};

static const MR_Integer backend_libs__type_ctor_info__backend_libs__type_ctor_info__functor_number_map_maybe_reserved_rep_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_maybe_reserved_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "maybe_reserved_rep",
  {     backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_name_ordered_maybe_reserved_rep_0 },
  {     backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_ptag_ordered_maybe_reserved_rep_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__type_ctor_info__backend_libs__type_ctor_info__functor_number_map_maybe_reserved_rep_0
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_name_sort_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "name_sort_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_reserved_address_0backend_libs__rtti__type_ctor_info_rtti_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0
  }
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_reserved_addr_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "reserved_addr_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_reserved_address_0backend_libs__rtti__type_ctor_info_rtti_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
    (MR_TypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_list_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_list_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_map_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_map_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Word MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1053__1_1_f_0(
  MR_Word LambdaHeadVar__1_10)
{
  {
    MR_Word LambdaHeadVar__2_11;
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_10, (MR_Integer) 2)));
    MR_Integer Var_13;
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_10, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_10, (MR_Integer) 0)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_10, (MR_Integer) 1)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_10, (MR_Integer) 4)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_10, (MR_Integer) 5)));

    Var_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, Var_24);
    {
      LambdaHeadVar__2_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_11, 1) = ((MR_Box) (Var_13));
    }
    return LambdaHeadVar__2_11;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__991__1_2_p_0(
  MR_Word SectagLocn_9,
  MR_Word Locn0_12)
{
  {
    MR_bool succeeded = (SectagLocn_9 == Locn0_12);

    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__927__1_3_p_0(
  MR_Word LocnMap_28,
  MR_Word LambdaHeadVar__1_46,
  MR_Word * LambdaHeadVar__2_47)
{
  {
    MR_Box conv0_LambdaHeadVar__2_47;

    mercury__map__lookup_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, LocnMap_28, ((MR_Box) (LambdaHeadVar__1_46)), &conv0_LambdaHeadVar__2_47);
    *LambdaHeadVar__2_47 = ((MR_Word) conv0_LambdaHeadVar__2_47);
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__917__1_5_p_0(
  MR_Word LambdaHeadVar__1_37,
  MR_Integer LambdaHeadVar__2_38,
  MR_Integer * LambdaHeadVar__3_39,
  MR_Word LambdaHeadVar__4_40,
  MR_Word * LambdaHeadVar__5_41)
{
  {
    MR_Word Locn_23;

    {
      Locn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Locn_23, 0) = ((MR_Box) (LambdaHeadVar__2_38));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ((MR_Box) (LambdaHeadVar__1_37)), ((MR_Box) (Locn_23)), LambdaHeadVar__4_40, LambdaHeadVar__5_41);
    *LambdaHeadVar__3_39 = (LambdaHeadVar__2_38 + (MR_Integer) 1);
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__909__1_2_p_0(
  MR_Word LambdaHeadVar__1_33,
  MR_Word * LambdaHeadVar__2_34)
{
  {
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 0)));

    *LambdaHeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 1)));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__804__1_2_p_0(
  MR_Word MaybeExistInfo_34,
  MR_Word HeadVar__2_60)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[4], ((MR_Box) (MaybeExistInfo_34)), ((MR_Box) (HeadVar__2_60)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__803__1_2_p_0(
  MR_Word ArgInfos_32,
  MR_Word HeadVar__2_55)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[3], ((MR_Box) (ArgInfos_32)), ((MR_Box) (HeadVar__2_55)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__802__1_2_p_0(
  MR_Integer Arity_26,
  MR_Integer HeadVar__2_50)
{
  {
    MR_bool succeeded = (Arity_26 == HeadVar__2_50);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__746__1_2_p_0(
  MR_Word ReservedAddr_14,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (ReservedAddr_14 == HeadVar__2_35);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__738__1_2_p_0(
  MR_Word ReservedAddr_14,
  MR_Word HeadVar__2_42)
{
  {
    MR_bool succeeded = (ReservedAddr_14 == HeadVar__2_42);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__657__1_2_p_0(
  MR_Word Lang_2,
  MR_Word ForeignTagLang_27)
{
  {
    MR_bool succeeded = (Lang_2 == ForeignTagLang_27);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__651__1_2_p_0(
  MR_Integer Arity_23,
  MR_Integer HeadVar__2_76)
{
  {
    MR_bool succeeded = (Arity_23 == HeadVar__2_76);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__649__1_2_p_0(
  MR_Word Constraints_20,
  MR_Word HeadVar__2_71)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[2], ((MR_Box) (Constraints_20)), ((MR_Box) (HeadVar__2_71)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__647__1_2_p_0(
  MR_Word ExistTvars_19,
  MR_Word HeadVar__2_66)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[1], ((MR_Box) (ExistTvars_19)), ((MR_Box) (HeadVar__2_66)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__588__1_2_p_0(
  MR_Word ConsTag_23,
  MR_Word HeadVar__2_45)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_data____Unify____cons_tag_0_0(ConsTag_23, HeadVar__2_45);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__584__1_2_p_0(
  MR_Integer Arity_20,
  MR_Integer HeadVar__2_39)
{
  {
    MR_bool succeeded = (Arity_20 == HeadVar__2_39);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__582__1_2_p_0(
  MR_Word Constraints_17,
  MR_Word HeadVar__2_34)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[2], ((MR_Box) (Constraints_17)), ((MR_Box) (HeadVar__2_34)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__580__1_2_p_0(
  MR_Word ExistTvars_16,
  MR_Word HeadVar__2_29)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[1], ((MR_Box) (ExistTvars_16)), ((MR_Box) (HeadVar__2_29)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__208__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word TypeModuleName_15)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeModuleName_15, HeadVar__2_2);
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[17], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[17], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[7], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[7], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[13], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[13], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[6], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        backend_libs__rtti____Compare____du_rep_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        hlds__hlds_data____Compare____reserved_address_0_0(HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = backend_libs__rtti____Unify____du_rep_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = hlds__hlds_data____Unify____reserved_address_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(
  MR_Word MaybeResFunctor_4,
  MR_Word STATE_VARIABLE_NameTable_0_12,
  MR_Word * STATE_VARIABLE_NameTable_13)
{
  {
    MR_bool succeeded;
    MR_String Name_7;
    MR_Integer Arity_8;
    MR_Word NameMap0_10;
    MR_Box conv0_NameMap0_10;

    if (((MR_tag((MR_Word) MaybeResFunctor_4)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word DuFunctor_6 = (MR_Word) MR_body(((MR_Word) MaybeResFunctor_4), (MR_Integer) 1);
      MR_Integer Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;

      Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), DuFunctor_6, (MR_Integer) 0)));
      Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_6, (MR_Integer) 1)));
      Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_6, (MR_Integer) 2)));
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_6, (MR_Integer) 3)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_6, (MR_Integer) 4)));
      Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_6, (MR_Integer) 5)));
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_6, (MR_Integer) 6)));
    }
    else
    {
      MR_Word ResFunctor_9 = (MR_Word) MR_body(((MR_Word) MaybeResFunctor_4), (MR_Integer) 0);
      MR_Integer Var_29;
      MR_Word Var_30;

      Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ResFunctor_9, (MR_Integer) 0)));
      Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ResFunctor_9, (MR_Integer) 1)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResFunctor_9, (MR_Integer) 2)));
      Arity_8 = (MR_Integer) 0;
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], STATE_VARIABLE_NameTable_0_12, ((MR_Box) (Name_7)), &conv0_NameMap0_10);
    if (succeeded)
    {
      NameMap0_10 = ((MR_Word) conv0_NameMap0_10);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NameMap_11;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, Arity_8, ((MR_Box) (MaybeResFunctor_4)), NameMap0_10, &NameMap_11);
      mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], ((MR_Box) (Name_7)), ((MR_Box) (NameMap_11)), STATE_VARIABLE_NameTable_0_12, STATE_VARIABLE_NameTable_13);
    }
    else
    {
      MR_Word NameMap_16;

      NameMap_16 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ((MR_Box) (Arity_8)), ((MR_Box) (MaybeResFunctor_4)));
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], ((MR_Box) (Name_7)), ((MR_Box) (NameMap_16)), STATE_VARIABLE_NameTable_0_12, STATE_VARIABLE_NameTable_13);
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(
  MR_Word DuFunctor_4,
  MR_Word STATE_VARIABLE_NameTable_0_10,
  MR_Word * STATE_VARIABLE_NameTable_11)
{
  {
    MR_bool succeeded;
    MR_String Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 0)));
    MR_Integer Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 1)));
    MR_Integer Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 3)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 6)));
    MR_Word NameMap0_8;
    MR_Box conv0_NameMap0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], STATE_VARIABLE_NameTable_0_10, ((MR_Box) (Name_6)), &conv0_NameMap0_8);
    if (succeeded)
    {
      NameMap0_8 = ((MR_Word) conv0_NameMap0_8);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NameMap_9;

      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, Arity_7, ((MR_Box) (DuFunctor_4)), NameMap0_8, &NameMap_9);
      mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], ((MR_Box) (Name_6)), ((MR_Box) (NameMap_9)), STATE_VARIABLE_NameTable_0_10, STATE_VARIABLE_NameTable_11);
    }
    else
    {
      MR_Word NameMap_14;

      NameMap_14 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ((MR_Box) (Arity_7)), ((MR_Box) (DuFunctor_4)));
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], ((MR_Box) (Name_6)), ((MR_Box) (NameMap_14)), STATE_VARIABLE_NameTable_0_10, STATE_VARIABLE_NameTable_11);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__991__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
  MR_Word DuFunctor_4,
  MR_Word STATE_VARIABLE_PtagTable_0_18,
  MR_Word * STATE_VARIABLE_PtagTable_19)
{
  {
    MR_bool succeeded;
    MR_Word DuRep_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 3)));
    MR_String Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 0)));
    MR_Integer Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 1)));
    MR_Integer Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 2)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 4)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 5)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 6)));

    if (((MR_tag((MR_Word) DuRep_6)) == (MR_mktag((MR_Integer) 1))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "du_hl_rep");
        return;
      }
    }
    else
    {
      MR_Integer Ptag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), DuRep_6, (MR_Integer) 0)));
      MR_Word SectagAndLocn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), DuRep_6, (MR_Integer) 1)));
      MR_Word SectagLocn_9;
      MR_Integer Sectag_10;
      MR_Word SectagTable0_11;
      MR_Box conv0_SectagTable0_11;

      switch (MR_tag((MR_Word) SectagAndLocn_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(SectagAndLocn_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                SectagLocn_9 = (MR_Integer) 0;
                Sectag_10 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              {
                SectagLocn_9 = (MR_Integer) 1;
                Sectag_10 = (MR_Integer) 0;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            Sectag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SectagAndLocn_8, (MR_Integer) 0)));
            SectagLocn_9 = (MR_Integer) 2;
          }
          break;
        case (MR_Integer) 2:
          {
            Sectag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), SectagAndLocn_8, (MR_Integer) 0)));
            SectagLocn_9 = (MR_Integer) 3;
          }
          break;
      }
      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, STATE_VARIABLE_PtagTable_0_18, Ptag_7, &conv0_SectagTable0_11);
      if (succeeded)
      {
        SectagTable0_11 = ((MR_Word) conv0_SectagTable0_11);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Locn0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectagTable0_11, (MR_Integer) 0)));
        MR_Integer NumSharers0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), SectagTable0_11, (MR_Integer) 1)));
        MR_Word SectagMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectagTable0_11, (MR_Integer) 2)));
        MR_Word SectagMap_15;
        MR_Word SectagTable_16;
        MR_Word Var_23;
        MR_Integer Var_27;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[14]));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (SectagLocn_9));
          MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Locn0_12));
        }
        mercury__require__expect_4_p_0(Var_23, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "sectag locn disagreement");
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, Sectag_10, ((MR_Box) (DuFunctor_4)), SectagMap0_14, &SectagMap_15);
        Var_27 = (NumSharers0_13 + (MR_Integer) 1);
        {
          SectagTable_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectagTable_16, 0) = ((MR_Box) (Locn0_12));
          MR_hl_field(MR_mktag(0), SectagTable_16, 1) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(0), SectagTable_16, 2) = ((MR_Box) (SectagMap_15));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, Ptag_7, ((MR_Box) (SectagTable_16)), STATE_VARIABLE_PtagTable_0_18, STATE_VARIABLE_PtagTable_19);
      }
      else
      {
        MR_Word SectagMap_32;
        MR_Word SectagTable_33;

        SectagMap_32 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ((MR_Box) (Sectag_10)), ((MR_Box) (DuFunctor_4)));
        {
          SectagTable_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SectagTable_33, 0) = ((MR_Box) (SectagLocn_9));
          MR_hl_field(MR_mktag(0), SectagTable_33, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), SectagTable_33, 2) = ((MR_Box) (SectagMap_32));
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, Ptag_7, ((MR_Box) (SectagTable_33)), STATE_VARIABLE_PtagTable_0_18, STATE_VARIABLE_PtagTable_19);
      }
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__find_type_info_index_6_p_0(
  MR_Word Constraints_7,
  MR_Word ClassTable_8,
  MR_Integer StartSlot_9,
  MR_Word TVar_10,
  MR_Word STATE_VARIABLE_LocnMap_0_22,
  MR_Word * STATE_VARIABLE_LocnMap_23)
{
  {
    MR_Integer Slot_12;
    MR_Word FirstConstraint_13;
    MR_Integer TypeInfoIndex_14;
    MR_Word ClassName_15;
    MR_Word ArgTypes_16;
    MR_Integer ClassArity_17;
    MR_Word ClassDefn_18;
    MR_Integer NumSuperClasses_19;
    MR_Integer RealTypeInfoIndex_20;
    MR_Word Locn_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Box conv0_ClassDefn_18;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(Constraints_7, TVar_10, StartSlot_9, &Slot_12, &FirstConstraint_13, &TypeInfoIndex_14);
    ClassName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstConstraint_13, (MR_Integer) 0)));
    ArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FirstConstraint_13, (MR_Integer) 1)));
    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ArgTypes_16, &ClassArity_17);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (ClassName_15));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ClassArity_17));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, ClassTable_8, ((MR_Box) (Var_24)), &conv0_ClassDefn_18);
    ClassDefn_18 = ((MR_Word) conv0_ClassDefn_18);
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 0)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 1)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 2)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 3)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 4)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 5)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 6)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 7)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 8)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 9)));
    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, Var_25, &NumSuperClasses_19);
    RealTypeInfoIndex_20 = (TypeInfoIndex_14 + NumSuperClasses_19);
    {
      Locn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Locn_21, 0) = ((MR_Box) (Slot_12));
      MR_hl_field(MR_mktag(1), Locn_21, 1) = ((MR_Box) (RealTypeInfoIndex_20));
    }
    mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ((MR_Box) (TVar_10)), ((MR_Box) (Locn_21)), STATE_VARIABLE_LocnMap_0_22, STATE_VARIABLE_LocnMap_23);
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TVar_2,
  MR_Integer STATE_VARIABLE_N_0_3,
  MR_Integer * STATE_VARIABLE_N_4,
  MR_Word * MatchingConstraint_5,
  MR_Integer * TypeInfoIndex_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.first_matching_type_class_info\'/6", (MR_String) "not found");
        return;
      }
    }
    else
    {
      MR_Word Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_16, (MR_Integer) 1)));
      MR_Word TVs_24;
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constraint_16, (MR_Integer) 0)));
      MR_Integer Index_25;

      parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_23, &TVs_24);
      succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], TVs_24, ((MR_Box) (TVar_2)), &Index_25);
      if (succeeded)
      {
        *MatchingConstraint_5 = Constraint_16;
        *TypeInfoIndex_6 = Index_25;
        *STATE_VARIABLE_N_4 = STATE_VARIABLE_N_0_3;
      }
      else
      {
        MR_Integer STATE_VARIABLE_N_28_28 = (STATE_VARIABLE_N_0_3 + (MR_Integer) 1);
        MR_Word next_value_of_HeadVar__1_1 = Constraints_17;
        MR_Integer next_value_of_STATE_VARIABLE_N_0_3 = STATE_VARIABLE_N_28_28;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_N_0_3 = next_value_of_STATE_VARIABLE_N_0_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_du_arg_info_6_p_0(
  MR_Integer NumUnivTvars_7,
  MR_Word ExistTvars_8,
  MR_Word ConstructorArg_9,
  MR_Word * ArgInfo_10,
  MR_Word STATE_VARIABLE_FunctorSubtypeInfo_0_29,
  MR_Word * STATE_VARIABLE_FunctorSubtypeInfo_30)
{
  {
    MR_bool succeeded;
    MR_Word MaybeCtorFieldName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstructorArg_9, (MR_Integer) 0)));
    MR_Word ArgType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstructorArg_9, (MR_Integer) 1)));
    MR_Word ArgWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstructorArg_9, (MR_Integer) 2)));
    MR_Word MaybeArgName_19;
    MR_Word MaybePseudoTypeInfo_20;
    MR_Word MaybePseudoTypeInfoOrSelf_22;
    MR_Word _Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConstructorArg_9, (MR_Integer) 3)));
    MR_Word Var_32;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_26;

    if ((MaybeCtorFieldName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      MaybeArgName_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word SymName_16;
      MR_String ArgName_18;
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCtorFieldName_12, (MR_Integer) 0)));
      MR_Word Var_17;

      SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0)));
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1)));
      ArgName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
      {
        MaybeArgName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeArgName_19, 0) = ((MR_Box) (ArgName_18));
      }
    }
    backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(ArgType_13, NumUnivTvars_7, ExistTvars_8, &MaybePseudoTypeInfo_20);
    if (((MR_tag((MR_Word) MaybePseudoTypeInfo_20)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word TypeInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePseudoTypeInfo_20, (MR_Integer) 0)));

      {
        MaybePseudoTypeInfoOrSelf_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MaybePseudoTypeInfoOrSelf_22, 0) = ((MR_Box) (TypeInfo_21));
      }
    }
    else
    {
      MR_Word PseudoTypeInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybePseudoTypeInfo_20, (MR_Integer) 0)));

      {
        MaybePseudoTypeInfoOrSelf_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybePseudoTypeInfoOrSelf_22, 0) = ((MR_Box) (PseudoTypeInfo_23));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ArgInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeArgName_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybePseudoTypeInfoOrSelf_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgWidth_14));
    }
    succeeded = ((((MR_tag((MR_Word) ArgType_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgType_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgType_13, (MR_Integer) 1)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgType_13, (MR_Integer) 2)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgType_13, (MR_Integer) 3)));
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgType_13, (MR_Integer) 4)));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        Var_26 = (MR_Word) MR_body(((MR_Word) Var_32), (MR_Integer) 1);
    }
    if (succeeded)
      *STATE_VARIABLE_FunctorSubtypeInfo_30 = (MR_Integer) 1;
    else
      *STATE_VARIABLE_FunctorSubtypeInfo_30 = STATE_VARIABLE_FunctorSubtypeInfo_0_29;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_reserved_functor_1_f_0(
  MR_Word HeadVar__1_1,
  MR_Word * ResFunctor_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

    if (succeeded)
      *ResFunctor_3 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 0);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_du_functor_1_f_0(
  MR_Word HeadVar__1_1,
  MR_Word * DuFunctor_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

    if (succeeded)
      *DuFunctor_3 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 1);
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(
  MR_Word ForeignEnumFunctor_6,
  MR_Word STATE_VARIABLE_OrdinalMap_0_12,
  MR_Word * STATE_VARIABLE_OrdinalMap_13,
  MR_Word STATE_VARIABLE_NameMap_0_14,
  MR_Word * STATE_VARIABLE_NameMap_15)
{
  {
    MR_Word TypeCtorInfo_19_19 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    MR_String FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ForeignEnumFunctor_6, (MR_Integer) 0)));
    MR_Integer FunctorOrdinal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ForeignEnumFunctor_6, (MR_Integer) 1)));
    MR_String Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ForeignEnumFunctor_6, (MR_Integer) 2)));

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeCtorInfo_19_19, FunctorOrdinal_10, ((MR_Box) (ForeignEnumFunctor_6)), STATE_VARIABLE_OrdinalMap_0_12, STATE_VARIABLE_OrdinalMap_13);
    mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_19_19, ((MR_Box) (FunctorName_9)), ((MR_Box) (ForeignEnumFunctor_6)), STATE_VARIABLE_NameMap_0_14, STATE_VARIABLE_NameMap_15);
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_maps_5_p_0(
  MR_Word EnumFunctor_6,
  MR_Word STATE_VARIABLE_ValueMap_0_11,
  MR_Word * STATE_VARIABLE_ValueMap_12,
  MR_Word STATE_VARIABLE_NameMap_0_13,
  MR_Word * STATE_VARIABLE_NameMap_14)
{
  {
    MR_Word TypeCtorInfo_18_18 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    MR_String FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), EnumFunctor_6, (MR_Integer) 0)));
    MR_Integer Ordinal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), EnumFunctor_6, (MR_Integer) 1)));

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(TypeCtorInfo_18_18, Ordinal_10, ((MR_Box) (EnumFunctor_6)), STATE_VARIABLE_ValueMap_0_11, STATE_VARIABLE_ValueMap_12);
    mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_18_18, ((MR_Box) (FunctorName_9)), ((MR_Box) (EnumFunctor_6)), STATE_VARIABLE_NameMap_0_13, STATE_VARIABLE_NameMap_14);
  }
}

MR_Integer MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(
  MR_Word ArgTypes_3)
{
  {
    MR_Integer Vector_4;

    backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(ArgTypes_3, (MR_Integer) 0, (MR_Integer) 0, &Vector_4);
    return Vector_4;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  MR_Integer STATE_VARIABLE_Vector_0_3,
  MR_Integer * STATE_VARIABLE_Vector_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Vector_4 = STATE_VARIABLE_Vector_0_3;
    else
    {
      MR_Word ArgType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer STATE_VARIABLE_Vector_18_18;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_2;
      MR_Integer next_value_of_STATE_VARIABLE_Vector_0_3;

      switch (MR_tag((MR_Word) ArgType_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer BitNum_39;
            MR_Integer Var_46;

            succeeded = (ArgNum_2 >= (((MR_Integer) 16 - (MR_Integer) 1)));
            if (succeeded)
            {
              BitNum_39 = ((MR_Integer) 16 - (MR_Integer) 1);
            }
            else
              BitNum_39 = ArgNum_2;
            Var_46 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, BitNum_39);
            STATE_VARIABLE_Vector_18_18 = (STATE_VARIABLE_Vector_0_3 | Var_46);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer BitNum_26;
            MR_Integer Var_33;

            succeeded = (ArgNum_2 >= (((MR_Integer) 16 - (MR_Integer) 1)));
            if (succeeded)
            {
              BitNum_26 = ((MR_Integer) 16 - (MR_Integer) 1);
            }
            else
              BitNum_26 = ArgNum_2;
            Var_33 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, BitNum_26);
            STATE_VARIABLE_Vector_18_18 = (STATE_VARIABLE_Vector_0_3 | Var_33);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Vector_18_18 = STATE_VARIABLE_Vector_0_3;
          break;
      }
      Var_19 = (ArgNum_2 + (MR_Integer) 1);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ArgTypes_10;
      next_value_of_ArgNum_2 = Var_19;
      next_value_of_STATE_VARIABLE_Vector_0_3 = STATE_VARIABLE_Vector_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      ArgNum_2 = next_value_of_ArgNum_2;
      STATE_VARIABLE_Vector_0_3 = next_value_of_STATE_VARIABLE_Vector_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__type_ctor_info__generate_rtti_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Tables_4)
{
  {
    MR_Word TypeCtorInfo_11_11;
    MR_Word TypeCtorGenInfos_5;
    MR_Word Dynamic_6;
    MR_Word Static0_7;
    MR_Word Static_8;

    hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(ModuleInfo_3, &TypeCtorGenInfos_5);
    backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(TypeCtorGenInfos_5, ModuleInfo_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Dynamic_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Static0_7);
    TypeCtorInfo_11_11 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
    Static_8 = mercury__list__remove_dups_1_f_0(TypeCtorInfo_11_11, Static0_7);
    mercury__list__append_3_p_1(TypeCtorInfo_11_11, Dynamic_6, Static_8, Tables_4);
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Dynamic_0_3,
  MR_Word * STATE_VARIABLE_Dynamic_4,
  MR_Word STATE_VARIABLE_Static_0_5,
  MR_Word * STATE_VARIABLE_Static_6)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Static_6 = STATE_VARIABLE_Static_0_5;
      *STATE_VARIABLE_Dynamic_4 = STATE_VARIABLE_Dynamic_0_3;
    }
    else
    {
      MR_Word TypeCtorGenInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word TypeCtorGenInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word TypeCtorCModule_19;
      MR_Word STATE_VARIABLE_Dynamic_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Dynamic_0_3;

      backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(TypeCtorGenInfo_14, HeadVar__2_2, &TypeCtorCModule_19);
      {
        STATE_VARIABLE_Dynamic_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Dynamic_24_24, 0) = ((MR_Box) (TypeCtorCModule_19));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Dynamic_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Dynamic_0_3));
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = TypeCtorGenInfos_15;
      next_value_of_STATE_VARIABLE_Dynamic_0_3 = STATE_VARIABLE_Dynamic_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Dynamic_0_3 = next_value_of_STATE_VARIABLE_Dynamic_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(
  MR_Word TypeCtorGenInfo_4,
  MR_Word ModuleInfo_5,
  MR_Word * RttiData_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_92_92;
    MR_Word TypeCtorInfo_93_93;
    MR_Word TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 0)));
    MR_Word ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 1)));
    MR_String TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 2)));
    MR_Integer TypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 3)));
    MR_Word HldsDefn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 5)));
    MR_Word UnifyPredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 6)));
    MR_Word ComparePredProcId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 7)));
    MR_Word UnifyPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), UnifyPredProcId_13, (MR_Integer) 0)));
    MR_Integer UnifyProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), UnifyPredProcId_13, (MR_Integer) 1)));
    MR_Word UnifyProcLabel_17;
    MR_Word ComparePredId_18;
    MR_Integer CompareProcId_19;
    MR_Word CompareProcLabel_20;
    MR_Word UnifyUniv_21;
    MR_Word CompareUniv_22;
    MR_Word TypeBody_23;
    MR_Word Details_28;
    MR_Word TypeCtorData_74;
    MR_Word STATE_VARIABLE_Flags_81_81;
    MR_Word STATE_VARIABLE_Flags_85_85;
    MR_Word _Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 4)));
    MR_Word Var_25;
    MR_Word BuiltinCtor_27;
    MR_String ModuleStr1_26;

    UnifyProcLabel_17 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, UnifyPredId_15, UnifyProcId_16);
    ComparePredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ComparePredProcId_14, (MR_Integer) 0)));
    CompareProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ComparePredProcId_14, (MR_Integer) 1)));
    CompareProcLabel_20 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, ComparePredId_18, CompareProcId_19);
    TypeCtorInfo_92_92 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
    mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_92_92, ((MR_Box) (UnifyProcLabel_17)), &UnifyUniv_21);
    mercury__univ__type_to_univ_2_p_1(TypeCtorInfo_92_92, ((MR_Box) (CompareProcLabel_20)), &CompareUniv_22);
    hlds__hlds_data__get_type_defn_body_2_p_0(HldsDefn_12, &TypeBody_23);
    succeeded = ((((MR_tag((MR_Word) TypeBody_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_23, (MR_Integer) 1)));
      succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_5);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
        return;
      }
    }
    else
    {
    }
    succeeded = ((MR_tag((MR_Word) ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      ModuleStr1_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleName_8, (MR_Integer) 0)));
      if ((strcmp(ModuleStr1_26, (MR_String) "builtin") == 0))
      {
        succeeded = (TypeArity_10 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Integer case_num_0 = (MR_Integer) -1;

          switch (MR_nth_code_unit(TypeName_9, 0)) {
            case (MR_Integer) 99:
              switch (MR_nth_code_unit(TypeName_9, 1)) {
                case (MR_Integer) 95:
                  if (MR_offset_streq(2, TypeName_9, (MR_String) "c_pointer"))
                    case_num_0 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 104:
                  if (MR_offset_streq(2, TypeName_9, (MR_String) "character"))
                    case_num_0 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 102:
              switch (MR_nth_code_unit(TypeName_9, 1)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(2, TypeName_9, (MR_String) "float"))
                    case_num_0 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(2, TypeName_9, (MR_String) "func"))
                    case_num_0 = (MR_Integer) 3;
                  break;
              }
              break;
            case (MR_Integer) 105:
              if (((((MR_nth_code_unit(TypeName_9, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(TypeName_9, 2)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(TypeName_9, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 4;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(4, TypeName_9, (MR_String) "int16"))
                      case_num_0 = (MR_Integer) 5;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(4, TypeName_9, (MR_String) "int32"))
                      case_num_0 = (MR_Integer) 6;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(4, TypeName_9, (MR_String) "int8"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                }
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(1, TypeName_9, (MR_String) "pred"))
                case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 115:
              if (((MR_nth_code_unit(TypeName_9, 1)) == (MR_Integer) 116))
                switch (MR_nth_code_unit(TypeName_9, 2)) {
                  case (MR_Integer) 97:
                    if (MR_offset_streq(3, TypeName_9, (MR_String) "stable_c_pointer"))
                      case_num_0 = (MR_Integer) 9;
                    break;
                  case (MR_Integer) 114:
                    if (MR_offset_streq(3, TypeName_9, (MR_String) "string"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                }
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(1, TypeName_9, (MR_String) "tuple"))
                case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 117:
              if (((((((MR_nth_code_unit(TypeName_9, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(TypeName_9, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(TypeName_9, 3)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(TypeName_9, 4)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 12;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(5, TypeName_9, (MR_String) "uint16"))
                      case_num_0 = (MR_Integer) 13;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(5, TypeName_9, (MR_String) "uint32"))
                      case_num_0 = (MR_Integer) 14;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(5, TypeName_9, (MR_String) "uint8"))
                      case_num_0 = (MR_Integer) 15;
                    break;
                }
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(1, TypeName_9, (MR_String) "void"))
                case_num_0 = (MR_Integer) 16;
              break;
          }
          if ((case_num_0 < (MR_Integer) 0))
            succeeded = MR_FALSE;
          else
          {
            // we found a match; look up the results
            BuiltinCtor_27 = ((&backend_libs__type_ctor_info_vector_common_9[0 + case_num_0]))->backend_libs__type_ctor_info__vector_common_type_9_0__vct_9_f_0;
            succeeded = MR_TRUE;
          }
        }
      }
      else
      if ((strcmp(ModuleStr1_26, (MR_String) "type_desc") == 0))
      {
        succeeded = (TypeArity_10 == (MR_Integer) 0);
        if (succeeded)
        {
          if ((strcmp(TypeName_9, (MR_String) "type_desc") == 0))
          {
            BuiltinCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(TypeName_9, (MR_String) "type_ctor_desc") == 0))
          {
            BuiltinCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18));
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(TypeName_9, (MR_String) "pseudo_type_desc") == 0))
          {
            BuiltinCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17));
            succeeded = MR_TRUE;
          }
          else
            succeeded = MR_FALSE;
        }
      }
      else
      if ((strcmp(ModuleStr1_26, (MR_String) "private_builtin") == 0))
      {
        succeeded = (strcmp(TypeName_9, (MR_String) "ref") == 0);
        if (succeeded)
        {
          succeeded = (TypeArity_10 == (MR_Integer) 1);
          if (succeeded)
          {
            BuiltinCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15));
            succeeded = MR_TRUE;
          }
        }
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      {
        Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Details_28, 1) = ((MR_Box) (BuiltinCtor_27));
      }
    else
    {
      MR_Word ImplCtor_30;
      MR_String ModuleStr_29;

      succeeded = (TypeArity_10 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          ModuleStr_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleName_8, (MR_Integer) 0)));
          if ((strcmp(ModuleStr_29, (MR_String) "table_builtin") == 0))
          {
            succeeded = (strcmp(TypeName_9, (MR_String) "ml_subgoal") == 0);
            if (succeeded)
            {
              ImplCtor_30 = (MR_Integer) 12;
              succeeded = MR_TRUE;
            }
          }
          else
          if ((strcmp(ModuleStr_29, (MR_String) "private_builtin") == 0))
          {
            MR_Integer slot_1 = ((MR_hash_string6(TypeName_9)) & (MR_Integer) 31);
            MR_String str_2 = ((&backend_libs__type_ctor_info_vector_common_10[0 + slot_1]))->backend_libs__type_ctor_info__vector_common_type_10_0__vct_10_f_0;

            // hashed string simple lookup switch
            // compute the hash value of the input string
            // no collisions; no hash chain loop
            // lookup the string for this hash slot
            // did we find a match?
            if ((((str_2 != NULL)) && ((strcmp(str_2, TypeName_9) == 0))))
            {
              // we found a match; look up the results
              ImplCtor_30 = ((&backend_libs__type_ctor_info_vector_common_10[0 + slot_1]))->backend_libs__type_ctor_info__vector_common_type_10_0__vct_10_f_1;
              succeeded = MR_TRUE;
              // jump out of search loop
              goto label_0;
            }
            succeeded = MR_FALSE;
          label_0:;
          }
          else
            succeeded = MR_FALSE;
        }
      }
      if (succeeded)
        {
          Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), Details_28, 1) = ((MR_Box) (ImplCtor_30));
        }
      else
        switch (MR_tag((MR_Word) TypeBody_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ForeignBody_39 = (MR_Word) MR_body(((MR_Word) TypeBody_23), (MR_Integer) 0);
              MR_Word Assertions_42;
              MR_Word IsStable_43;
              MR_Word Var_40;
              MR_Word Var_41;

              backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(ModuleInfo_5, ForeignBody_39, &Var_40, &Var_41, &Assertions_42);
              succeeded = hlds__hlds_data__asserted_stable_1_p_0(Assertions_42);
              if (succeeded)
                IsStable_43 = (MR_Integer) 0;
              else
                IsStable_43 = (MR_Integer) 1;
              {
                Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Details_28, 1) = ((MR_Box) (IsStable_43));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Ctors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 0)));
              MR_Word ConsTagMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 1)));
              MR_Word DuTypeKind_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 3)));
              MR_Word MaybeUserEqComp_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 4)));
              MR_Word ReservedTag_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
              MR_Word ReservedAddr_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word EqualityAxioms_55;
              MR_Word _CheaperTagTest_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 2)));
              MR_Word _MaybeDirectArgCtors_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 5)));
              MR_Word _IsForeignType_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 7)));

              if ((MaybeUserEqComp_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                EqualityAxioms_55 = (MR_Integer) 0;
              else
                EqualityAxioms_55 = (MR_Integer) 1;
              switch (MR_tag((MR_Word) DuTypeKind_48)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(DuTypeKind_48)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(TypeCtor_7, Ctors_45, ConsTagMap_46, ReservedTag_51, EqualityAxioms_55, &Details_28);
                      break;
                    case (MR_Integer) 1:
                      backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(TypeCtor_7, Ctors_45, ConsTagMap_46, ReservedTag_51, EqualityAxioms_55, &Details_28);
                      break;
                    case (MR_Integer) 2:
                      backend_libs__type_ctor_info__make_du_details_8_p_0(TypeCtor_7, Ctors_45, ConsTagMap_46, TypeArity_10, EqualityAxioms_55, ReservedAddr_52, ModuleInfo_5, &Details_28);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Lang_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), DuTypeKind_48, (MR_Integer) 0)));

                    backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(TypeCtor_7, Lang_56, Ctors_45, ConsTagMap_46, ReservedTag_51, EqualityAxioms_55, &Details_28);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word FunctorName_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_48, (MR_Integer) 0)));
                    MR_Word ArgType_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_48, (MR_Integer) 1)));
                    MR_Word MaybeArgName_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), DuTypeKind_48, (MR_Integer) 2)));

                    backend_libs__type_ctor_info__make_notag_details_6_p_0(TypeArity_10, FunctorName_57, ArgType_58, MaybeArgName_59, EqualityAxioms_55, &Details_28);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), TypeBody_23, (MR_Integer) 0)));
              MR_Word MaybePseudoTypeInfo_88;

              backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(Type_44, TypeArity_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybePseudoTypeInfo_88);
              {
                Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Details_28, 1) = ((MR_Box) (MaybePseudoTypeInfo_88));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_23, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word DetailsSolver_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_23, (MR_Integer) 1)));
                  MR_Word SolverTypeDetails_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_32, (MR_Integer) 0)));
                  MR_Word RepnType_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails_33, (MR_Integer) 0)));
                  MR_Word MaybePseudoTypeInfo_38;
                  MR_Word _MaybeUserEqComp_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), DetailsSolver_32, (MR_Integer) 1)));
                  MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails_33, (MR_Integer) 1)));
                  MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails_33, (MR_Integer) 2)));
                  MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails_33, (MR_Integer) 3)));

                  backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(RepnType_35, TypeArity_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybePseudoTypeInfo_38);
                  {
                    Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Details_28, 1) = ((MR_Box) (MaybePseudoTypeInfo_38));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
                    return;
                  }
                }
                break;
            }
            break;
        }
    }
    TypeCtorInfo_93_93 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_type_ctor_flag_0;
    STATE_VARIABLE_Flags_81_81 = mercury__set__init_0_f_0(TypeCtorInfo_93_93);
    switch (MR_tag((MR_Word) TypeBody_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Flags_85_85 = STATE_VARIABLE_Flags_81_81;
        break;
      case (MR_Integer) 1:
        {
          MR_Word BodyReservedTag_67 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word STATE_VARIABLE_Flags_83_83;
          MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 0)));
          MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 1)));
          MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 2)));
          MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 3)));
          MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 4)));
          MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 5)));
          MR_Word Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 7)));

          mercury__set__insert_3_p_0(TypeCtorInfo_93_93, ((MR_Box) ((MR_Integer) 2)), STATE_VARIABLE_Flags_81_81, &STATE_VARIABLE_Flags_83_83);
          switch (BodyReservedTag_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              STATE_VARIABLE_Flags_85_85 = STATE_VARIABLE_Flags_83_83;
              break;
            case (MR_Integer) 0:
              {
                mercury__set__insert_3_p_0(TypeCtorInfo_93_93, ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_Flags_83_83, &STATE_VARIABLE_Flags_85_85);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Flags_85_85 = STATE_VARIABLE_Flags_81_81;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_23, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Flags_85_85 = STATE_VARIABLE_Flags_81_81;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Flags_85_85 = STATE_VARIABLE_Flags_81_81;
            break;
        }
        break;
    }
    {
      TypeCtorData_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorData_74, 0) = ((MR_Box) ((MR_Integer) 17));
      MR_hl_field(MR_mktag(0), TypeCtorData_74, 1) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), TypeCtorData_74, 2) = ((MR_Box) (TypeName_9));
      MR_hl_field(MR_mktag(0), TypeCtorData_74, 3) = ((MR_Box) (TypeArity_10));
      MR_hl_field(MR_mktag(0), TypeCtorData_74, 4) = ((MR_Box) (UnifyUniv_21));
      MR_hl_field(MR_mktag(0), TypeCtorData_74, 5) = ((MR_Box) (CompareUniv_22));
      MR_hl_field(MR_mktag(0), TypeCtorData_74, 6) = ((MR_Box) (STATE_VARIABLE_Flags_85_85));
      MR_hl_field(MR_mktag(0), TypeCtorData_74, 7) = ((MR_Box) (Details_28));
    }
    *RttiData_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) TypeCtorData_74);
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_NameTable_13;

    backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_NameTable_13);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_NameTable_13));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_6(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__746__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_NameTable_11;

    backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_NameTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_NameTable_11));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__738__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_PtagTable_19;

    backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_PtagTable_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PtagTable_19));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_ResFunctor_3;

    succeeded = backend_libs__type_ctor_info__is_reserved_functor_1_f_0(((MR_Word) wrapper_arg_1), &conv1_ResFunctor_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_ResFunctor_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_DuFunctor_3;

    succeeded = backend_libs__type_ctor_info__is_du_functor_1_f_0(((MR_Word) wrapper_arg_1), &conv0_DuFunctor_3);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_DuFunctor_3));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word Ctors_10,
  MR_Word ConsTagMap_11,
  MR_Integer TypeArity_12,
  MR_Word EqualityAxioms_13,
  MR_Word ReservedAddr_14,
  MR_Word ModuleInfo_15,
  MR_Word * Details_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_45_45;
    MR_Word TypeCtorInfo_46_46;
    MR_Word MaybeResFunctors_17;
    MR_Word DuFunctors_18;
    MR_Word ResFunctors_19;
    MR_Word DuPtagTable_20;
    MR_Word FunctorNumberMap_21;
    MR_Word Var_30;
    MR_Box conv3_DuPtagTable_20;

    backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(TypeCtor_9, Ctors_10, (MR_Integer) 0, ConsTagMap_11, TypeArity_12, ModuleInfo_15, &MaybeResFunctors_17);
    TypeCtorInfo_45_45 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
    TypeCtorInfo_46_46 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
    DuFunctors_18 = mercury__list__filter_map_2_f_0(TypeCtorInfo_45_45, TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[26], MaybeResFunctors_17);
    ResFunctors_19 = mercury__list__filter_map_2_f_0(TypeCtorInfo_45_45, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[27], MaybeResFunctors_17);
    Var_30 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0);
    mercury__list__foldl_4_p_0(TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[4], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[28], DuFunctors_18, ((MR_Box) (Var_30)), &conv3_DuPtagTable_20);
    DuPtagTable_20 = ((MR_Word) conv3_DuPtagTable_20);
    FunctorNumberMap_21 = backend_libs__type_ctor_info__make_functor_number_map_1_f_0(Ctors_10);
    if ((ResFunctors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word DuNameOrderedMap_22;
      MR_Word Var_38;
      MR_Word Var_44;
      MR_Box conv5_DuNameOrderedMap_22;

      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[13]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_4));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ReservedAddr_14));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_4_p_0(Var_38, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_details\'/8", (MR_String) "ReservedAddr is not does_not_use_reserved_addr");
      Var_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5]);
      mercury__list__foldl_4_p_0(TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[6], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[29], DuFunctors_18, ((MR_Box) (Var_44)), &conv5_DuNameOrderedMap_22);
      DuNameOrderedMap_22 = ((MR_Word) conv5_DuNameOrderedMap_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
        *Details_16 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (EqualityAxioms_13));
        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (DuFunctors_18));
        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (DuPtagTable_20));
        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (DuNameOrderedMap_22));
        MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (FunctorNumberMap_21));
      }
    }
    else
    {
      MR_Word ResNameOrderedMap_25;
      MR_Word Var_31;
      MR_Word Var_37;
      MR_Box conv7_ResNameOrderedMap_25;

      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[13]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_6));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (ReservedAddr_14));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_4_p_0(Var_31, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_details\'/8", (MR_String) "ReservedAddr is not uses_reserved_addr");
      Var_37 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7]);
      mercury__list__foldl_4_p_0(TypeCtorInfo_45_45, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[8], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[30], MaybeResFunctors_17, ((MR_Box) (Var_37)), &conv7_ResNameOrderedMap_25);
      ResNameOrderedMap_25 = ((MR_Word) conv7_ResNameOrderedMap_25);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
        *Details_16 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (EqualityAxioms_13));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeResFunctors_17));
        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ResFunctors_19));
        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (DuPtagTable_20));
        MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ResNameOrderedMap_25));
        MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (FunctorNumberMap_21));
      }
    }
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_11;

    conv0_LambdaHeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1053__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_11));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0(
  MR_Word Ctors_3)
{
  {
    MR_Word Map_4;
    MR_Word TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
    MR_Word TypeInfo_33_33 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
    MR_Word TypeCtorInfo_35_35;
    MR_Word CtorNames_5;
    MR_Word SortedNameArityMap_7;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Integer Var_18;
    MR_Integer Var_19;

    CtorNames_5 = mercury__list__map_2_f_0(TypeCtorInfo_32_32, TypeInfo_33_33, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[25], Ctors_3);
    TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_15 = mercury__list__sort_1_f_0(TypeInfo_33_33, CtorNames_5);
    Var_19 = mercury__list__length_1_f_0(TypeCtorInfo_32_32, Ctors_3);
    Var_18 = (Var_19 - (MR_Integer) 1);
    Var_16 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_18);
    SortedNameArityMap_7 = mercury__map__from_corresponding_lists_2_f_0(TypeInfo_33_33, TypeCtorInfo_35_35, Var_15, Var_16);
    Map_4 = mercury__map__apply_to_list_2_f_0(TypeInfo_33_33, TypeCtorInfo_35_35, CtorNames_5, SortedNameArityMap_7);
    return Map_4;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__804__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__803__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__802__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ArgInfo_10;
    MR_Word conv1_STATE_VARIABLE_FunctorSubtypeInfo_30;

    backend_libs__type_ctor_info__generate_du_arg_info_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_ArgInfo_10, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_FunctorSubtypeInfo_30);
    *wrapper_arg_2 = ((MR_Box) (conv2_ArgInfo_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_FunctorSubtypeInfo_30));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer NextOrdinal_3,
  MR_Word ConsTagMap_4,
  MR_Integer TypeArity_5,
  MR_Word ModuleInfo_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TypeCtorInfo_63_63;
      MR_Word Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Functors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word MaybeResFunctor_20;
      MR_Word MaybeResFunctors_21;
      MR_Word ExistTvars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 0)));
      MR_Word Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 1)));
      MR_Word SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 2)));
      MR_Word ConstructorArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 3)));
      MR_Integer Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 4)));
      MR_String FunctorName_28;
      MR_Word ConsId_29;
      MR_Word ConsTag_30;
      MR_Word ConsRep_31;
      MR_Word ArgInfos_32;
      MR_Word FunctorSubtypeInfo_33;
      MR_Word MaybeExistInfo_34;
      MR_Integer Var_43;
      MR_Word Var_44;
      MR_Integer Var_61;
      MR_Word _Ctxt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_14, (MR_Integer) 5)));
      MR_Box conv0_ConsTag_30;
      MR_Box conv3_FunctorSubtypeInfo_33;

      FunctorName_28 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_24);
      TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
      Var_43 = mercury__list__length_1_f_0(TypeCtorInfo_63_63, ConstructorArgs_25);
      {
        ConsId_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_29, 1) = ((MR_Box) (SymName_24));
        MR_hl_field(MR_mktag(3), ConsId_29, 2) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(3), ConsId_29, 3) = ((MR_Box) (TypeCtor_1));
      }
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagMap_4, ((MR_Box) (ConsId_29)), &conv0_ConsTag_30);
      ConsTag_30 = ((MR_Word) conv0_ConsTag_30);
      backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(ConsTag_30, &ConsRep_31);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (TypeArity_5));
        MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) (ExistTvars_22));
      }
      mercury__list__map_foldl_5_p_0(TypeCtorInfo_63_63, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_functor_subtype_info_0, Var_44, ConstructorArgs_25, &ArgInfos_32, ((MR_Box) ((MR_Integer) 0)), &conv3_FunctorSubtypeInfo_33);
      FunctorSubtypeInfo_33 = ((MR_Word) conv3_FunctorSubtypeInfo_33);
      if ((ExistTvars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        MaybeExistInfo_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word ClassTable_37;
        MR_Word ExistInfo_38;

        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_6, &ClassTable_37);
        backend_libs__type_ctor_info__generate_exist_into_4_p_0(ExistTvars_22, Constraints_23, ClassTable_37, &ExistInfo_38);
        {
          MaybeExistInfo_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeExistInfo_34, 0) = ((MR_Box) (ExistInfo_38));
        }
      }
      if (((MR_tag((MR_Word) ConsRep_31)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word DuRep_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ConsRep_31, (MR_Integer) 0)));
        MR_Word DuFunctor_40;

        {
          DuFunctor_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DuFunctor_40, 0) = ((MR_Box) (FunctorName_28));
          MR_hl_field(MR_mktag(0), DuFunctor_40, 1) = ((MR_Box) (Arity_26));
          MR_hl_field(MR_mktag(0), DuFunctor_40, 2) = ((MR_Box) (NextOrdinal_3));
          MR_hl_field(MR_mktag(0), DuFunctor_40, 3) = ((MR_Box) (DuRep_39));
          MR_hl_field(MR_mktag(0), DuFunctor_40, 4) = ((MR_Box) (ArgInfos_32));
          MR_hl_field(MR_mktag(0), DuFunctor_40, 5) = ((MR_Box) (MaybeExistInfo_34));
          MR_hl_field(MR_mktag(0), DuFunctor_40, 6) = ((MR_Box) (FunctorSubtypeInfo_33));
        }
        MaybeResFunctor_20 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) DuFunctor_40);
      }
      else
      {
        MR_Word ResRep_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ConsRep_31, (MR_Integer) 0)));
        MR_Word ResFunctor_42;
        MR_Word Var_46;
        MR_Word Var_51;
        MR_Word Var_56;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (Arity_26));
          MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_4_p_0(Var_46, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad arity");
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[9]));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3));
          MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ArgInfos_32));
          MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__require__expect_4_p_0(Var_51, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad args");
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[10]));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4));
          MR_hl_field(MR_mktag(0), Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_56, 3) = ((MR_Box) (MaybeExistInfo_34));
          MR_hl_field(MR_mktag(0), Var_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        mercury__require__expect_4_p_0(Var_56, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad exist");
        {
          ResFunctor_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ResFunctor_42, 0) = ((MR_Box) (FunctorName_28));
          MR_hl_field(MR_mktag(0), ResFunctor_42, 1) = ((MR_Box) (NextOrdinal_3));
          MR_hl_field(MR_mktag(0), ResFunctor_42, 2) = ((MR_Box) (ResRep_41));
        }
        MaybeResFunctor_20 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ResFunctor_42);
      }
      Var_61 = (NextOrdinal_3 + (MR_Integer) 1);
      backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(TypeCtor_1, Functors_15, Var_61, ConsTagMap_4, TypeArity_5, ModuleInfo_6, &MaybeResFunctors_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MaybeResFunctor_20));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeResFunctors_21));
      }
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__2_47;

    backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__927__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv8_LambdaHeadVar__2_47);
    *wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_47));
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__2_2;

    conv7_HeadVar__2_2 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_LocnMap_23;

    backend_libs__type_ctor_info__find_type_info_index_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_STATE_VARIABLE_LocnMap_23);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_LocnMap_23));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv2_LambdaHeadVar__3_39;
    MR_Word conv1_LambdaHeadVar__5_41;

    backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__917__1_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Integer) wrapper_arg_2), &conv2_LambdaHeadVar__3_39, ((MR_Word) wrapper_arg_4), &conv1_LambdaHeadVar__5_41);
    *wrapper_arg_3 = ((MR_Box) (conv2_LambdaHeadVar__3_39));
    *wrapper_arg_5 = ((MR_Box) (conv1_LambdaHeadVar__5_41));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_34;

    backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__909__1_2_p_0(((MR_Word) wrapper_arg_1), &conv0_LambdaHeadVar__2_34);
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_34));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0(
  MR_Word ExistTVars_5,
  MR_Word Constraints_6,
  MR_Word ClassTable_7,
  MR_Word * ExistInfo_8)
{
  {
    MR_Word TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    MR_Word TypeInfo_60_60;
    MR_Word TypeCtorInfo_61_61;
    MR_Word TypeInfo_65_65;
    MR_Word ConstrainedTVars0_12;
    MR_Word ConstrainedTVars1_13;
    MR_Word ConstrainedTVars2_14;
    MR_Word UnconstrainedTVars_15;
    MR_Word ConstrainedTVars_16;
    MR_Word LocnMap0_17;
    MR_Integer TIsPlain_24;
    MR_Word LocnMap1_25;
    MR_Integer AllTIs_26;
    MR_Integer TIsInTCIs_27;
    MR_Word LocnMap_28;
    MR_Word TCConstraints_29;
    MR_Word ExistLocns_31;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Box conv4_TIsPlain_24;
    MR_Box conv3_LocnMap1_25;
    MR_Box conv6_LocnMap_28;

    mercury__list__map_3_p_0(TypeCtorInfo_57_57, (MR_Word) &backend_libs__type_ctor_info_scalar_common_1[5], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[22], Constraints_6, &ConstrainedTVars0_12);
    mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ConstrainedTVars0_12, &ConstrainedTVars1_13);
    parse_tree__prog_type__type_vars_list_2_p_0(ConstrainedTVars1_13, &ConstrainedTVars2_14);
    TypeInfo_60_60 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0];
    mercury__list__delete_elems_3_p_0(TypeInfo_60_60, ExistTVars_5, ConstrainedTVars2_14, &UnconstrainedTVars_15);
    mercury__list__delete_elems_3_p_0(TypeInfo_60_60, ExistTVars_5, UnconstrainedTVars_15, &ConstrainedTVars_16);
    TypeCtorInfo_61_61 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0;
    mercury__map__init_1_p_0(TypeInfo_60_60, TypeCtorInfo_61_61, &LocnMap0_17);
    TypeInfo_65_65 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[9];
    mercury__list__foldl2_6_p_0(TypeInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeInfo_65_65, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[23], UnconstrainedTVars_15, ((MR_Box) ((MR_Integer) 0)), &conv4_TIsPlain_24, ((MR_Box) (LocnMap0_17)), &conv3_LocnMap1_25);
    TIsPlain_24 = ((MR_Integer) conv4_TIsPlain_24);
    LocnMap1_25 = ((MR_Word) conv3_LocnMap1_25);
    mercury__list__length_2_p_0(TypeInfo_60_60, ExistTVars_5, &AllTIs_26);
    TIsInTCIs_27 = (AllTIs_26 - TIsPlain_24);
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Constraints_6));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (ClassTable_7));
      MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) (TIsPlain_24));
    }
    mercury__list__foldl_4_p_0(TypeInfo_60_60, TypeInfo_65_65, Var_43, ConstrainedTVars_16, ((MR_Box) (LocnMap1_25)), &conv6_LocnMap_28);
    LocnMap_28 = ((MR_Word) conv6_LocnMap_28);
    TCConstraints_29 = mercury__list__map_2_f_0(TypeCtorInfo_57_57, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[24], Constraints_6);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (LocnMap_28));
    }
    mercury__list__map_3_p_0(TypeInfo_60_60, TypeCtorInfo_61_61, Var_45, ExistTVars_5, &ExistLocns_31);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ExistInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TIsPlain_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TIsInTCIs_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TCConstraints_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ExistLocns_31));
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(
  MR_Word ConsTag_3,
  MR_Word * ConsRep_4)
{
  while (MR_TRUE)
  {
    // setup for tailcalls optimized into a loop
    switch (MR_tag((MR_Word) ConsTag_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ConsRep_4 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_6[0]);
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.get_maybe_reserved_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.get_maybe_reserved_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.get_maybe_reserved_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Var_43;
              MR_Integer ConsPtag_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1)));

              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (ConsPtag_45));
                MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ConsRep_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_43));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_42;
              MR_Integer ConsPtag_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1)));

              {
                Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (ConsPtag_47));
                MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ConsRep_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Integer ConsPtag_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1)));
              MR_Integer ConsStag_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2)));

              {
                Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (ConsStag_51));
              }
              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (ConsPtag_50));
                MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Var_39));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ConsRep_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_38));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Integer ConsStag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2)));
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Integer ConsPtag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1)));

              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ConsStag_7));
              }
              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (ConsPtag_49));
                MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Var_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ConsRep_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ReservedAddr_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *ConsRep_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ReservedAddr_8));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ThisTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2)));
              MR_Word _RAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1)));
              MR_Word next_value_of_ConsTag_3 = ThisTag_10;

              // direct tailcall eliminated
              ConsTag_3 = next_value_of_ConsTag_3;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_11;

    conv4_LambdaHeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1053__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_11));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_OrdinalMap_13;
    MR_Word conv0_STATE_VARIABLE_NameMap_15;

    backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_OrdinalMap_13, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_NameMap_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_OrdinalMap_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NameMap_15));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Lang_9,
  MR_Word Ctors_10,
  MR_Word ConsTagMap_11,
  MR_Word ReserveTag_12,
  MR_Word EqualityAxioms_13,
  MR_Word * Details_14)
{
  {
    MR_Word TypeCtorInfo_27_27;
    MR_Word TypeCtorInfo_32_65;
    MR_Word TypeInfo_33_66;
    MR_Word TypeCtorInfo_35_68;
    MR_Word ForeignEnumFunctors_15;
    MR_Word OrdinalMap0_16;
    MR_Word NameMap0_17;
    MR_Word OrdinalMap_18;
    MR_Word NameMap_19;
    MR_Word FunctorNumberMap_20;
    MR_Word CtorNames_38;
    MR_Word SortedNameArityMap_40;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Integer Var_51;
    MR_Integer Var_52;
    MR_Box conv3_OrdinalMap_18;
    MR_Box conv2_NameMap_19;

    switch (ReserveTag_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_details\'/7", (MR_String) "foreign enum with reserved tag");
            return;
          }
        }
        break;
    }
    backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(TypeCtor_8, Lang_9, Ctors_10, (MR_Integer) 0, ConsTagMap_11, &ForeignEnumFunctors_15);
    TypeCtorInfo_27_27 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    OrdinalMap0_16 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_27_27);
    NameMap0_17 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_27_27);
    mercury__list__foldl2_6_p_0(TypeCtorInfo_27_27, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[2], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[3], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[20], ForeignEnumFunctors_15, ((MR_Box) (OrdinalMap0_16)), &conv3_OrdinalMap_18, ((MR_Box) (NameMap0_17)), &conv2_NameMap_19);
    OrdinalMap_18 = ((MR_Word) conv3_OrdinalMap_18);
    NameMap_19 = ((MR_Word) conv2_NameMap_19);
    TypeCtorInfo_32_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
    TypeInfo_33_66 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
    CtorNames_38 = mercury__list__map_2_f_0(TypeCtorInfo_32_65, TypeInfo_33_66, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[21], Ctors_10);
    TypeCtorInfo_35_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_48 = mercury__list__sort_1_f_0(TypeInfo_33_66, CtorNames_38);
    Var_52 = mercury__list__length_1_f_0(TypeCtorInfo_32_65, Ctors_10);
    Var_51 = (Var_52 - (MR_Integer) 1);
    Var_49 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_51);
    SortedNameArityMap_40 = mercury__map__from_corresponding_lists_2_f_0(TypeInfo_33_66, TypeCtorInfo_35_68, Var_48, Var_49);
    FunctorNumberMap_20 = mercury__map__apply_to_list_2_f_0(TypeInfo_33_66, TypeCtorInfo_35_68, CtorNames_38, SortedNameArityMap_40);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *Details_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Lang_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (EqualityAxioms_13));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ForeignEnumFunctors_15));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (OrdinalMap_18));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (NameMap_19));
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (FunctorNumberMap_20));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__657__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__651__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__649__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__647__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word Lang_2,
  MR_Word HeadVar__3_3,
  MR_Integer NextOrdinal_4,
  MR_Word ConsTagMap_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Functors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ForeignEnumFunctor_17;
      MR_Word ForeignEnumFunctors_18;
      MR_Word ExistTvars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_13, (MR_Integer) 0)));
      MR_Word Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_13, (MR_Integer) 1)));
      MR_Word SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_13, (MR_Integer) 2)));
      MR_Word FunctorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_13, (MR_Integer) 3)));
      MR_Integer Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Functor_13, (MR_Integer) 4)));
      MR_Word ConsId_25;
      MR_Word ConsTag_26;
      MR_String ForeignTagValue_29;
      MR_String FunctorName_61;
      MR_Word Var_62;
      MR_Word Var_67;
      MR_Word Var_72;
      MR_Integer Var_77;
      MR_Integer Var_85;
      MR_Word _Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_13, (MR_Integer) 5)));
      MR_Box conv0_ConsTag_26;

      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ExistTvars_19));
        MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_4_p_0(Var_62, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "existential arguments in functor in foreign enum");
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Constraints_20));
        MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_4_p_0(Var_67, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "class constraints on functor in foreign enum");
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Arity_23));
        MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_4_p_0(Var_72, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "functor in foreign enum has nonzero arity");
      Var_77 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, FunctorArgs_22);
      {
        ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_25, 1) = ((MR_Box) (SymName_21));
        MR_hl_field(MR_mktag(3), ConsId_25, 2) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(3), ConsId_25, 3) = ((MR_Box) (TypeCtor_1));
      }
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagMap_5, ((MR_Box) (ConsId_25)), &conv0_ConsTag_26);
      ConsTag_26 = ((MR_Word) conv0_ConsTag_26);
      switch (MR_tag((MR_Word) ConsTag_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "non foreign tag for foreign enum functor");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "non foreign tag for foreign enum functor");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 4:
            case (MR_Integer) 5:
            case (MR_Integer) 6:
            case (MR_Integer) 7:
            case (MR_Integer) 8:
            case (MR_Integer) 9:
            case (MR_Integer) 10:
            case (MR_Integer) 11:
            case (MR_Integer) 12:
            case (MR_Integer) 13:
            case (MR_Integer) 14:
            case (MR_Integer) 15:
            case (MR_Integer) 16:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "non foreign tag for foreign enum functor");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForeignTagLang_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 1)));
                MR_Word Var_81;

                ForeignTagValue_29 = ((MR_String) (MR_hl_field(MR_mktag(3), ConsTag_26, (MR_Integer) 2)));
                {
                  Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[6]));
                  MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (Lang_2));
                  MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) (ForeignTagLang_27));
                }
                mercury__require__expect_4_p_0(Var_81, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "language mismatch between foreign tag and foreign enum");
              }
              break;
          }
          break;
      }
      FunctorName_61 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_21);
      {
        ForeignEnumFunctor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignEnumFunctor_17, 0) = ((MR_Box) (FunctorName_61));
        MR_hl_field(MR_mktag(0), ForeignEnumFunctor_17, 1) = ((MR_Box) (NextOrdinal_4));
        MR_hl_field(MR_mktag(0), ForeignEnumFunctor_17, 2) = ((MR_Box) (ForeignTagValue_29));
      }
      Var_85 = (NextOrdinal_4 + (MR_Integer) 1);
      backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(TypeCtor_1, Lang_2, Functors_14, Var_85, ConsTagMap_5, &ForeignEnumFunctors_18);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignEnumFunctor_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ForeignEnumFunctors_18));
      }
    }
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_11;

    conv4_LambdaHeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1053__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_11));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ValueMap_12;
    MR_Word conv0_STATE_VARIABLE_NameMap_14;

    backend_libs__type_ctor_info__make_enum_maps_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_ValueMap_12, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_NameMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ValueMap_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NameMap_14));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Ctors_8,
  MR_Word ConsTagMap_9,
  MR_Word ReserveTag_10,
  MR_Word EqualityAxioms_11,
  MR_Word * Details_12)
{
  {
    MR_Word TypeCtorInfo_35_35;
    MR_Word TypeCtorInfo_32_75;
    MR_Word TypeInfo_33_76;
    MR_Word TypeCtorInfo_35_78;
    MR_Word EnumFunctors_13;
    MR_Word ValueMap0_14;
    MR_Word NameMap0_15;
    MR_Word ValueMap_16;
    MR_Word NameMap_17;
    MR_Word IsDummy_19;
    MR_Word FunctorNumberMap_23;
    MR_Word CtorNames_48;
    MR_Word SortedNameArityMap_50;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Integer Var_61;
    MR_Integer Var_62;
    MR_Box conv3_ValueMap_16;
    MR_Box conv2_NameMap_17;

    switch (ReserveTag_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/6", (MR_String) "enum with reserved tag");
            return;
          }
        }
        break;
    }
    backend_libs__type_ctor_info__make_enum_functors_5_p_0(TypeCtor_7, Ctors_8, (MR_Integer) 0, ConsTagMap_9, &EnumFunctors_13);
    TypeCtorInfo_35_35 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    ValueMap0_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_35_35);
    NameMap0_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeCtorInfo_35_35);
    mercury__list__foldl2_6_p_0(TypeCtorInfo_35_35, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[0], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[1], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[18], EnumFunctors_13, ((MR_Box) (ValueMap0_14)), &conv3_ValueMap_16, ((MR_Box) (NameMap0_15)), &conv2_NameMap_17);
    ValueMap_16 = ((MR_Word) conv3_ValueMap_16);
    NameMap_17 = ((MR_Word) conv2_NameMap_17);
    if ((Ctors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/6", (MR_String) "enum with no ctors");
        return;
      }
    }
    else
    {
      MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_8, (MR_Integer) 1)));
      MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Ctors_8, (MR_Integer) 0)));

      if ((Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        IsDummy_19 = (MR_Integer) 1;
      else
        IsDummy_19 = (MR_Integer) 0;
    }
    TypeCtorInfo_32_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
    TypeInfo_33_76 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
    CtorNames_48 = mercury__list__map_2_f_0(TypeCtorInfo_32_75, TypeInfo_33_76, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[19], Ctors_8);
    TypeCtorInfo_35_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    Var_58 = mercury__list__sort_1_f_0(TypeInfo_33_76, CtorNames_48);
    Var_62 = mercury__list__length_1_f_0(TypeCtorInfo_32_75, Ctors_8);
    Var_61 = (Var_62 - (MR_Integer) 1);
    Var_59 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_61);
    SortedNameArityMap_50 = mercury__map__from_corresponding_lists_2_f_0(TypeInfo_33_76, TypeCtorInfo_35_78, Var_58, Var_59);
    FunctorNumberMap_23 = mercury__map__apply_to_list_2_f_0(TypeInfo_33_76, TypeCtorInfo_35_78, CtorNames_48, SortedNameArityMap_50);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *Details_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (EqualityAxioms_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EnumFunctors_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ValueMap_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NameMap_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (IsDummy_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FunctorNumberMap_23));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__588__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__584__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__582__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__580__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Integer NextOrdinal_3,
  MR_Word ConsTagMap_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Functor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Functors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word EnumFunctor_14;
      MR_Word EnumFunctors_15;
      MR_Word ExistTvars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_10, (MR_Integer) 0)));
      MR_Word Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_10, (MR_Integer) 1)));
      MR_Word SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_10, (MR_Integer) 2)));
      MR_Word FunctorArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_10, (MR_Integer) 3)));
      MR_Integer Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Functor_10, (MR_Integer) 4)));
      MR_Word ConsId_22;
      MR_Word ConsTag_23;
      MR_String FunctorName_24;
      MR_Word Var_25;
      MR_Word Var_30;
      MR_Word Var_35;
      MR_Integer Var_40;
      MR_Word Var_41;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Integer Var_47;
      MR_Word _Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Functor_10, (MR_Integer) 5)));
      MR_Box conv0_ConsTag_23;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (ExistTvars_16));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_4_p_0(Var_25, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "existential arguments in functor in enum");
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Constraints_17));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      mercury__require__expect_4_p_0(Var_30, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "class constraints on functor in enum");
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Arity_20));
        MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_4_p_0(Var_35, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "functor in enum has nonzero arity");
      Var_40 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, FunctorArgs_19);
      {
        ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_22, 1) = ((MR_Box) (SymName_18));
        MR_hl_field(MR_mktag(3), ConsId_22, 2) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(3), ConsId_22, 3) = ((MR_Box) (TypeCtor_1));
      }
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagMap_4, ((MR_Box) (ConsId_22)), &conv0_ConsTag_23);
      ConsTag_23 = ((MR_Word) conv0_ConsTag_23);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (NextOrdinal_3));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[4]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_4));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ConsTag_23));
        MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Var_45));
      }
      mercury__require__expect_4_p_0(Var_41, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "mismatch on constant assigned to functor in enum");
      FunctorName_24 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
      {
        EnumFunctor_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EnumFunctor_14, 0) = ((MR_Box) (FunctorName_24));
        MR_hl_field(MR_mktag(0), EnumFunctor_14, 1) = ((MR_Box) (NextOrdinal_3));
      }
      Var_47 = (NextOrdinal_3 + (MR_Integer) 1);
      backend_libs__type_ctor_info__make_enum_functors_5_p_0(TypeCtor_1, Functors_11, Var_47, ConsTagMap_4, &EnumFunctors_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EnumFunctor_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (EnumFunctors_15));
      }
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_6_p_0(
  MR_Integer TypeArity_7,
  MR_Word SymName_8,
  MR_Word ArgType_9,
  MR_Word MaybeArgName_10,
  MR_Word EqualityAxioms_11,
  MR_Word * Details_12)
{
  {
    MR_bool succeeded;
    MR_String FunctorName_13;
    MR_Word MaybePseudoTypeInfo_16;
    MR_Word FunctorSubtypeInfo_22;
    MR_Word Functor_23;
    MR_Word Var_24;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_19;

    FunctorName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_8);
    backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(ArgType_9, TypeArity_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybePseudoTypeInfo_16);
    succeeded = ((((MR_tag((MR_Word) ArgType_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgType_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgType_9, (MR_Integer) 1)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgType_9, (MR_Integer) 2)));
      Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgType_9, (MR_Integer) 3)));
      Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ArgType_9, (MR_Integer) 4)));
      succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        Var_19 = (MR_Word) MR_body(((MR_Word) Var_24), (MR_Integer) 1);
    }
    if (succeeded)
      FunctorSubtypeInfo_22 = (MR_Integer) 1;
    else
      FunctorSubtypeInfo_22 = (MR_Integer) 0;
    {
      Functor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Functor_23, 0) = ((MR_Box) (FunctorName_13));
      MR_hl_field(MR_mktag(0), Functor_23, 1) = ((MR_Box) (MaybePseudoTypeInfo_16));
      MR_hl_field(MR_mktag(0), Functor_23, 2) = ((MR_Box) (MaybeArgName_10));
      MR_hl_field(MR_mktag(0), Functor_23, 3) = ((MR_Box) (FunctorSubtypeInfo_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *Details_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (EqualityAxioms_11));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Functor_23));
    }
  }
}

void MR_CALL 
backend_libs__type_ctor_info__generate_hlds_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_4;
    MR_Word TypeTable_5;
    MR_Word TypeCtorsDefns_6;
    MR_Word LocalTypeCtorGenInfos_7;
    MR_Word AllTypeCtorGenInfos_9;
    MR_Word Var_15;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &ModuleName_4);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &TypeTable_5);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_5, &TypeCtorsDefns_6);
    backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(STATE_VARIABLE_ModuleInfo_0_10, ModuleName_4, TypeCtorsDefns_6, &LocalTypeCtorGenInfos_7);
    Var_15 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_15);
    if (succeeded)
      succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(STATE_VARIABLE_ModuleInfo_0_10);
    if (succeeded)
    {
      MR_Word BuiltinTypeCtorGenInfos_8;
      MR_Word Var_12;

      Var_12 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
      backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(STATE_VARIABLE_ModuleInfo_0_10, ModuleName_4, Var_12, &BuiltinTypeCtorGenInfos_8);
      AllTypeCtorGenInfos_9 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0, BuiltinTypeCtorGenInfos_8, LocalTypeCtorGenInfos_7);
    }
    else
      AllTypeCtorGenInfos_9 = LocalTypeCtorGenInfos_7;
    hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(AllTypeCtorGenInfos_9, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__208__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word TypeCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word TypeCtorGenInfo_11;
      MR_Word TypeCtorGenInfos_12;
      MR_Word SymName_13;
      MR_Integer TypeArity_14;

      backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtors_10, &TypeCtorGenInfos_12);
      SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 0)));
      TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 1)));
      if (((MR_tag((MR_Word) SymName_13)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word TypeModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 0)));
        MR_String TypeName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 1)));
        MR_Word Var_21;
        MR_Word Var_25;
        MR_Word TVarSet_29;
        MR_Word Kinds_31;
        MR_Word Context_35;
        MR_Word Status_50;
        MR_Word Globals_51;
        MR_Word SpecMaps_52;
        MR_Word SpecialPreds_53;
        MR_Word Unify_60;
        MR_Word Compare_65;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (TypeModuleName_15));
        }
        mercury__require__expect_4_p_0(Var_21, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", (MR_String) "module mismatch");
        mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &TVarSet_29);
        mercury__map__init_1_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &Kinds_31);
        mercury__term__context_init_1_p_0(&Context_35);
        hlds__hlds_data__create_hlds_type_defn_10_p_0(TVarSet_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Kinds_31, (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__type_ctor_info_scalar_common_1[8]), (MR_Integer) 0, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), (MR_Integer) 1, (MR_Integer) 0, Context_35, &Var_25);
        hlds__hlds_data__get_type_defn_status_2_p_0(Var_25, &Status_50);
        hlds__hlds_module__module_info_get_globals_2_p_0(HeadVar__1_1, &Globals_51);
        hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(HeadVar__1_1, &SpecMaps_52);
        libs__globals__lookup_bool_option_3_p_0(Globals_51, (MR_Integer) 284, &SpecialPreds_53);
        switch (SpecialPreds_53) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Body_54;
              MR_Word Var_70;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_85;
              MR_Word _UserDefinedEquality_55;

              hlds__hlds_data__get_type_defn_body_2_p_0(Var_25, &Body_54);
              succeeded = ((MR_tag((MR_Word) Body_54)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_54, (MR_Integer) 0)));
                Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_54, (MR_Integer) 1)));
                Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_54, (MR_Integer) 2)));
                Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_54, (MR_Integer) 3)));
                Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_54, (MR_Integer) 4)));
                Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_54, (MR_Integer) 5)));
                Var_83 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body_54, (MR_Integer) 6)))) & (MR_Integer) 1);
                Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body_54, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_54, (MR_Integer) 7)));
                succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  _UserDefinedEquality_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          MR_Word TypeCtorInfo_55_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
          MR_Word TypeCtorInfo_56_91 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          MR_Word UnifyMap_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_52, (MR_Integer) 0)));
          MR_Word UnifyPredId_57;
          MR_Integer UnifyProcInt_58;
          MR_Integer UnifyProcId_59;
          MR_Word CompareMap_61;
          MR_Word ComparePredId_62;
          MR_Integer CompareProcInt_63;
          MR_Integer CompareProcId_64;
          MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_52, (MR_Integer) 1)));
          MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_52, (MR_Integer) 2)));
          MR_Box conv0_UnifyPredId_57;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Box conv1_ComparePredId_62;

          mercury__map__lookup_3_p_0(TypeCtorInfo_55_90, TypeCtorInfo_56_91, UnifyMap_56, ((MR_Box) (TypeCtor_9)), &conv0_UnifyPredId_57);
          UnifyPredId_57 = ((MR_Word) conv0_UnifyPredId_57);
          hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &UnifyProcInt_58);
          hlds__hlds_pred__proc_id_to_int_2_p_1(&UnifyProcId_59, UnifyProcInt_58);
          {
            Unify_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Unify_60, 0) = ((MR_Box) (UnifyPredId_57));
            MR_hl_field(MR_mktag(0), Unify_60, 1) = ((MR_Box) (UnifyProcId_59));
          }
          Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_52, (MR_Integer) 0)));
          Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_52, (MR_Integer) 1)));
          CompareMap_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_52, (MR_Integer) 2)));
          mercury__map__lookup_3_p_0(TypeCtorInfo_55_90, TypeCtorInfo_56_91, CompareMap_61, ((MR_Box) (TypeCtor_9)), &conv1_ComparePredId_62);
          ComparePredId_62 = ((MR_Word) conv1_ComparePredId_62);
          hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &CompareProcInt_63);
          hlds__hlds_pred__proc_id_to_int_2_p_1(&CompareProcId_64, CompareProcInt_63);
          {
            Compare_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Compare_65, 0) = ((MR_Box) (ComparePredId_62));
            MR_hl_field(MR_mktag(0), Compare_65, 1) = ((MR_Box) (CompareProcId_64));
          }
        }
        else
        {
          MR_Word PredId_66;
          MR_Integer ProcId_67;
          MR_Word Var_73;

          Var_73 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(HeadVar__1_1, Var_73, (MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &PredId_66, &ProcId_67);
          {
            Unify_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Unify_60, 0) = ((MR_Box) (PredId_66));
            MR_hl_field(MR_mktag(0), Unify_60, 1) = ((MR_Box) (ProcId_67));
          }
          Compare_65 = Unify_60;
        }
        {
          TypeCtorGenInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 0) = ((MR_Box) (TypeCtor_9));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 1) = ((MR_Box) (TypeModuleName_15));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 2) = ((MR_Box) (TypeName_16));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 3) = ((MR_Box) (TypeArity_14));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 4) = ((MR_Box) (Status_50));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 5) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 6) = ((MR_Box) (Unify_60));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 7) = ((MR_Box) (Compare_65));
        }
      }
      else
      {
        MR_String Var_19;
        MR_String TypeName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), SymName_13, (MR_Integer) 0)));

        Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", TypeName_26);
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", Var_19);
          return;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorGenInfo_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeCtorGenInfos_12));
      }
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ModuleName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TypeCtorDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word TypeCtorDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word TypeCtorGenInfosTail_12;
      MR_Word TypeCtor_13;
      MR_Word TypeDefn_14;
      MR_Word SymName_15;
      MR_Integer TypeArity_16;

      backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(ModuleInfo_1, ModuleName_2, TypeCtorDefns_10, &TypeCtorGenInfosTail_12);
      TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDefn_9, (MR_Integer) 0)));
      TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDefn_9, (MR_Integer) 1)));
      SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0)));
      TypeArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1)));
      if (((MR_tag((MR_Word) SymName_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word TypeModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 0)));
        MR_String TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 1)));
        MR_Word Var_25;
        MR_Word TypeCtor_33;
        MR_Word TypeBody_34;

        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeModuleName_17, ModuleName_2);
        if (succeeded)
        {
          TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDefn_9, (MR_Integer) 0)));
          Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtorDefn_9, (MR_Integer) 1)));
          hlds__hlds_data__get_type_defn_body_2_p_0(Var_25, &TypeBody_34);
          {
            MR_Word Var_35;

            succeeded = ((((MR_tag((MR_Word) TypeBody_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_34, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
              Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_34, (MR_Integer) 1)));
          }
          if (!(succeeded))
            succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(TypeCtor_33, TypeBody_34);
          if (succeeded)
          {
            MR_String ModuleNameString_36;

            succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_1);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TypeModuleName_17)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                ModuleNameString_36 = ((MR_String) (MR_hl_field(MR_mktag(0), TypeModuleName_17, (MR_Integer) 0)));
                if ((strcmp(ModuleNameString_36, (MR_String) "builtin") == 0))
                {
                  succeeded = (TypeArity_16 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    MR_Integer case_num_0 = (MR_Integer) -1;

                    switch (MR_nth_code_unit(TypeName_18, 0)) {
                      case (MR_Integer) 99:
                        switch (MR_nth_code_unit(TypeName_18, 1)) {
                          case (MR_Integer) 95:
                            if (MR_offset_streq(2, TypeName_18, (MR_String) "c_pointer"))
                              case_num_0 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 104:
                            if (MR_offset_streq(2, TypeName_18, (MR_String) "character"))
                              case_num_0 = (MR_Integer) 1;
                            break;
                        }
                        break;
                      case (MR_Integer) 102:
                        switch (MR_nth_code_unit(TypeName_18, 1)) {
                          case (MR_Integer) 108:
                            if (MR_offset_streq(2, TypeName_18, (MR_String) "float"))
                              case_num_0 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 117:
                            if (MR_offset_streq(2, TypeName_18, (MR_String) "func"))
                              case_num_0 = (MR_Integer) 3;
                            break;
                        }
                        break;
                      case (MR_Integer) 105:
                        if (((((MR_nth_code_unit(TypeName_18, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(TypeName_18, 2)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(TypeName_18, 3)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 4;
                              break;
                            case (MR_Integer) 49:
                              if (MR_offset_streq(4, TypeName_18, (MR_String) "int16"))
                                case_num_0 = (MR_Integer) 5;
                              break;
                            case (MR_Integer) 51:
                              if (MR_offset_streq(4, TypeName_18, (MR_String) "int32"))
                                case_num_0 = (MR_Integer) 6;
                              break;
                            case (MR_Integer) 56:
                              if (MR_offset_streq(4, TypeName_18, (MR_String) "int8"))
                                case_num_0 = (MR_Integer) 7;
                              break;
                          }
                        break;
                      case (MR_Integer) 112:
                        if (MR_offset_streq(1, TypeName_18, (MR_String) "pred"))
                          case_num_0 = (MR_Integer) 8;
                        break;
                      case (MR_Integer) 115:
                        if (((MR_nth_code_unit(TypeName_18, 1)) == (MR_Integer) 116))
                          switch (MR_nth_code_unit(TypeName_18, 2)) {
                            case (MR_Integer) 97:
                              if (MR_offset_streq(3, TypeName_18, (MR_String) "stable_c_pointer"))
                                case_num_0 = (MR_Integer) 9;
                              break;
                            case (MR_Integer) 114:
                              if (MR_offset_streq(3, TypeName_18, (MR_String) "string"))
                                case_num_0 = (MR_Integer) 10;
                              break;
                          }
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(1, TypeName_18, (MR_String) "tuple"))
                          case_num_0 = (MR_Integer) 11;
                        break;
                      case (MR_Integer) 117:
                        if (((((((MR_nth_code_unit(TypeName_18, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(TypeName_18, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(TypeName_18, 3)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(TypeName_18, 4)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 12;
                              break;
                            case (MR_Integer) 49:
                              if (MR_offset_streq(5, TypeName_18, (MR_String) "uint16"))
                                case_num_0 = (MR_Integer) 13;
                              break;
                            case (MR_Integer) 51:
                              if (MR_offset_streq(5, TypeName_18, (MR_String) "uint32"))
                                case_num_0 = (MR_Integer) 14;
                              break;
                            case (MR_Integer) 56:
                              if (MR_offset_streq(5, TypeName_18, (MR_String) "uint8"))
                                case_num_0 = (MR_Integer) 15;
                              break;
                          }
                        break;
                      case (MR_Integer) 118:
                        if (MR_offset_streq(1, TypeName_18, (MR_String) "void"))
                          case_num_0 = (MR_Integer) 16;
                        break;
                    }
                    if ((case_num_0 < (MR_Integer) 0))
                      succeeded = MR_FALSE;
                    else
                    {
                      // we found a match; look up the results
                      succeeded = MR_TRUE;
                    }
                  }
                }
                else
                if ((strcmp(ModuleNameString_36, (MR_String) "type_desc") == 0))
                {
                  succeeded = (TypeArity_16 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    if ((strcmp(TypeName_18, (MR_String) "type_desc") == 0))
                      succeeded = MR_TRUE;
                    else
                    if ((strcmp(TypeName_18, (MR_String) "type_ctor_desc") == 0))
                      succeeded = MR_TRUE;
                    else
                    if ((strcmp(TypeName_18, (MR_String) "pseudo_type_desc") == 0))
                      succeeded = MR_TRUE;
                    else
                      succeeded = MR_FALSE;
                  }
                }
                else
                if ((strcmp(ModuleNameString_36, (MR_String) "private_builtin") == 0))
                {
                  succeeded = (strcmp(TypeName_18, (MR_String) "ref") == 0);
                  if (succeeded)
                    succeeded = (TypeArity_16 == (MR_Integer) 1);
                }
                else
                  succeeded = MR_FALSE;
                if (!(succeeded))
                {
                  succeeded = (TypeArity_16 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    if ((strcmp(ModuleNameString_36, (MR_String) "table_builtin") == 0))
                      succeeded = (strcmp(TypeName_18, (MR_String) "ml_subgoal") == 0);
                    else
                    if ((strcmp(ModuleNameString_36, (MR_String) "private_builtin") == 0))
                    {
                      MR_Integer slot_1 = ((MR_hash_string6(TypeName_18)) & (MR_Integer) 31);
                      MR_String str_2 = ((&backend_libs__type_ctor_info_vector_common_3[0 + slot_1]))->backend_libs__type_ctor_info__vector_common_type_3_0__vct_3_f_0;

                      // hashed string simple lookup switch
                      // compute the hash value of the input string
                      // no collisions; no hash chain loop
                      // lookup the string for this hash slot
                      // did we find a match?
                      if ((((str_2 != NULL)) && ((strcmp(str_2, TypeName_18) == 0))))
                      {
                        // we found a match; look up the results
                        succeeded = MR_TRUE;
                        // jump out of search loop
                        goto label_0;
                      }
                      succeeded = MR_FALSE;
                    label_0:;
                    }
                    else
                      succeeded = MR_FALSE;
                  }
                }
              }
            }
          }
          else
            succeeded = MR_TRUE;
          if (succeeded)
            succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(TypeDefn_14, Var_25);
        }
        if (succeeded)
        {
          MR_Word TypeCtorGenInfo_19;

          backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(ModuleInfo_1, TypeCtor_13, TypeModuleName_17, TypeName_18, TypeArity_16, TypeDefn_14, &TypeCtorGenInfo_19);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtorGenInfo_19));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypeCtorGenInfosTail_12));
          }
        }
        else
          *HeadVar__4_4 = TypeCtorGenInfosTail_12;
      }
      else
      {
        MR_String Var_22;
        MR_String TypeName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), SymName_15, (MR_Integer) 0)));

        Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", TypeName_24);
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_type_ctor_gen_infos\'/4", Var_22);
          return;
        }
      }
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word TypeCtor_9,
  MR_Word ModuleName_10,
  MR_String TypeName_11,
  MR_Integer TypeArity_12,
  MR_Word TypeDefn_13,
  MR_Word * TypeCtorGenInfo_14)
{
  {
    MR_bool succeeded;
    MR_Word Status_15;
    MR_Word Globals_16;
    MR_Word SpecMaps_17;
    MR_Word SpecialPreds_18;
    MR_Word Unify_25;
    MR_Word Compare_30;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_13, &Status_15);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_16);
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_8, &SpecMaps_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 284, &SpecialPreds_18);
    switch (SpecialPreds_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Body_19;
          MR_Word Var_35;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word _UserDefinedEquality_20;

          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_13, &Body_19);
          succeeded = ((MR_tag((MR_Word) Body_19)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 0)));
            Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 1)));
            Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 2)));
            Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 3)));
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 4)));
            Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 5)));
            Var_48 = ((((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 6)))) & (MR_Integer) 1);
            Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), Body_19, (MR_Integer) 7)));
            succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              _UserDefinedEquality_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0)));
          }
        }
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
      MR_Word TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
      MR_Word UnifyMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_17, (MR_Integer) 0)));
      MR_Word UnifyPredId_22;
      MR_Integer UnifyProcInt_23;
      MR_Integer UnifyProcId_24;
      MR_Word CompareMap_26;
      MR_Word ComparePredId_27;
      MR_Integer CompareProcInt_28;
      MR_Integer CompareProcId_29;
      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_17, (MR_Integer) 1)));
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_17, (MR_Integer) 2)));
      MR_Box conv0_UnifyPredId_22;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Box conv1_ComparePredId_27;

      mercury__map__lookup_3_p_0(TypeCtorInfo_55_55, TypeCtorInfo_56_56, UnifyMap_21, ((MR_Box) (TypeCtor_9)), &conv0_UnifyPredId_22);
      UnifyPredId_22 = ((MR_Word) conv0_UnifyPredId_22);
      hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &UnifyProcInt_23);
      hlds__hlds_pred__proc_id_to_int_2_p_1(&UnifyProcId_24, UnifyProcInt_23);
      {
        Unify_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unify_25, 0) = ((MR_Box) (UnifyPredId_22));
        MR_hl_field(MR_mktag(0), Unify_25, 1) = ((MR_Box) (UnifyProcId_24));
      }
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_17, (MR_Integer) 0)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_17, (MR_Integer) 1)));
      CompareMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), SpecMaps_17, (MR_Integer) 2)));
      mercury__map__lookup_3_p_0(TypeCtorInfo_55_55, TypeCtorInfo_56_56, CompareMap_26, ((MR_Box) (TypeCtor_9)), &conv1_ComparePredId_27);
      ComparePredId_27 = ((MR_Word) conv1_ComparePredId_27);
      hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &CompareProcInt_28);
      hlds__hlds_pred__proc_id_to_int_2_p_1(&CompareProcId_29, CompareProcInt_28);
      {
        Compare_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Compare_30, 0) = ((MR_Box) (ComparePredId_27));
        MR_hl_field(MR_mktag(0), Compare_30, 1) = ((MR_Box) (CompareProcId_29));
      }
    }
    else
    {
      MR_Word PredId_31;
      MR_Integer ProcId_32;
      MR_Word Var_38;

      Var_38 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_8, Var_38, (MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &PredId_31, &ProcId_32);
      {
        Unify_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Unify_25, 0) = ((MR_Box) (PredId_31));
        MR_hl_field(MR_mktag(0), Unify_25, 1) = ((MR_Box) (ProcId_32));
      }
      Compare_30 = Unify_25;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorGenInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeName_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TypeArity_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Status_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TypeDefn_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Unify_25));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Compare_30));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__type_ctor_info____Unify____name_sort_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__type_ctor_info____Compare____name_sort_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__type_ctor_info____Unify____tag_list_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__type_ctor_info____Compare____tag_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__type_ctor_info____Unify____tag_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__type_ctor_info____Compare____tag_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__backend_libs__type_ctor_info__init(void)
{
}

void mercury__backend_libs__type_ctor_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_maybe_reserved_rep_0);
	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_name_sort_info_0);
	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_reserved_addr_map_0);
	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_list_0);
	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_map_0);
}

void mercury__backend_libs__type_ctor_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__type_ctor_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.type_ctor_info.
