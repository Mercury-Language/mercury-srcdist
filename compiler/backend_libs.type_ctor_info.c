/*
** Automatically generated from `type_ctor_info.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module backend_libs.type_ctor_info. */
/* :- implementation. */

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
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__1_10);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__991__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__SectagLocn_9,
  MR_Word backend_libs__type_ctor_info__Locn0_12);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__927__1_3_p_0(
  MR_Word backend_libs__type_ctor_info__LocnMap_28,
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__1_46,
  MR_Word * backend_libs__type_ctor_info__LambdaHeadVar__2_47);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__917__1_5_p_0(
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__1_37,
  MR_Integer backend_libs__type_ctor_info__LambdaHeadVar__2_38,
  MR_Integer * backend_libs__type_ctor_info__LambdaHeadVar__3_39,
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__4_40,
  MR_Word * backend_libs__type_ctor_info__LambdaHeadVar__5_41);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__909__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__1_33,
  MR_Word * backend_libs__type_ctor_info__LambdaHeadVar__2_34);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__804__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__MaybeExistInfo_34,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_60);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__803__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ArgInfos_32,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_55);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__802__1_2_p_0(
  MR_Integer backend_libs__type_ctor_info__Arity_26,
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_50);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__746__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_35);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__738__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_42);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__657__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__Lang_2,
  MR_Word backend_libs__type_ctor_info__ForeignTagLang_27);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__651__1_2_p_0(
  MR_Integer backend_libs__type_ctor_info__Arity_23,
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_76);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__649__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__Constraints_20,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_71);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__647__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ExistTvars_19,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_66);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__588__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ConsTag_23,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_45);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__584__1_2_p_0(
  MR_Integer backend_libs__type_ctor_info__Arity_20,
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_39);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__582__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__Constraints_17,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_34);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__580__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ExistTvars_16,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_29);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__208__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__TypeModuleName_15);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(
  MR_Word backend_libs__type_ctor_info__MaybeResFunctor_4,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19);

static void MR_CALL 
backend_libs__type_ctor_info__find_type_info_index_6_p_0(
  MR_Word backend_libs__type_ctor_info__Constraints_7,
  MR_Word backend_libs__type_ctor_info__ClassTable_8,
  MR_Integer backend_libs__type_ctor_info__StartSlot_9,
  MR_Word backend_libs__type_ctor_info__TVar_10,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_0_22,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_23);

static void MR_CALL 
backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__TVar_2,
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_0_3,
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_N_4,
  MR_Word * backend_libs__type_ctor_info__MatchingConstraint_5,
  MR_Integer * backend_libs__type_ctor_info__TypeInfoIndex_6);

static void MR_CALL 
backend_libs__type_ctor_info__generate_du_arg_info_6_p_0(
  MR_Integer backend_libs__type_ctor_info__NumUnivTvars_7,
  MR_Word backend_libs__type_ctor_info__ExistTvars_8,
  MR_Word backend_libs__type_ctor_info__ConstructorArg_9,
  MR_Word * backend_libs__type_ctor_info__ArgInfo_10,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_FunctorSubtypeInfo_0_29,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_FunctorSubtypeInfo_30);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_reserved_functor_1_f_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word * backend_libs__type_ctor_info__ResFunctor_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_du_functor_1_f_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word * backend_libs__type_ctor_info__DuFunctor_3);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(
  MR_Word backend_libs__type_ctor_info__ForeignEnumFunctor_6,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_0_12,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_13,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_14,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_15);

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_maps_5_p_0(
  MR_Word backend_libs__type_ctor_info__EnumFunctor_6,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_0_11,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_12,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_13,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_14);

static void MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Integer backend_libs__type_ctor_info__ArgNum_2,
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3,
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_Vector_4);

static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_4,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Static_0_5,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Static_6);

static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_4,
  MR_Word backend_libs__type_ctor_info__ModuleInfo_5,
  MR_Word * backend_libs__type_ctor_info__RttiData_6);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_7(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_6(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_5(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
  MR_Word backend_libs__type_ctor_info__Ctors_10,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
  MR_Word backend_libs__type_ctor_info__ModuleInfo_15,
  MR_Word * backend_libs__type_ctor_info__Details_16);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

static MR_Word MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0(
  MR_Word backend_libs__type_ctor_info__Ctors_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_4);

static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
  MR_Integer backend_libs__type_ctor_info__TypeArity_5,
  MR_Word backend_libs__type_ctor_info__ModuleInfo_6,
  MR_Word * backend_libs__type_ctor_info__HeadVar__7_7);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_5(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0(
  MR_Word backend_libs__type_ctor_info__ExistTVars_5,
  MR_Word backend_libs__type_ctor_info__Constraints_6,
  MR_Word backend_libs__type_ctor_info__ClassTable_7,
  MR_Word * backend_libs__type_ctor_info__ExistInfo_8);

static void MR_CALL 
backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(
  MR_Word backend_libs__type_ctor_info__ConsTag_3,
  MR_Word * backend_libs__type_ctor_info__ConsRep_4);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_8,
  MR_Word backend_libs__type_ctor_info__Lang_9,
  MR_Word backend_libs__type_ctor_info__Ctors_10,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
  MR_Word backend_libs__type_ctor_info__ReserveTag_12,
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
  MR_Word * backend_libs__type_ctor_info__Details_14);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
  MR_Word backend_libs__type_ctor_info__Lang_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_4,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_5,
  MR_Word * backend_libs__type_ctor_info__HeadVar__6_6);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5);

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_7,
  MR_Word backend_libs__type_ctor_info__Ctors_8,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_9,
  MR_Word backend_libs__type_ctor_info__ReserveTag_10,
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
  MR_Word * backend_libs__type_ctor_info__Details_12);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_5);

static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_6_p_0(
  MR_Integer backend_libs__type_ctor_info__TypeArity_7,
  MR_Word backend_libs__type_ctor_info__SymName_8,
  MR_Word backend_libs__type_ctor_info__ArgType_9,
  MR_Word backend_libs__type_ctor_info__MaybeArgName_10,
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
  MR_Word * backend_libs__type_ctor_info__Details_12);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);

static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(
  MR_Word backend_libs__type_ctor_info__ModuleInfo_1,
  MR_Word backend_libs__type_ctor_info__ModuleName_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);

static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(
  MR_Word backend_libs__type_ctor_info__ModuleInfo_8,
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
  MR_Word backend_libs__type_ctor_info__ModuleName_10,
  MR_String backend_libs__type_ctor_info__TypeName_11,
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
  MR_Word backend_libs__type_ctor_info__TypeDefn_13,
  MR_Word * backend_libs__type_ctor_info__TypeCtorGenInfo_14);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);


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
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__1_10)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__LambdaHeadVar__2_11;
    MR_Word backend_libs__type_ctor_info__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__1_10, (MR_Integer) 2)));
    MR_Integer backend_libs__type_ctor_info__Var_13;
    MR_Word backend_libs__type_ctor_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__1_10, (MR_Integer) 3)));
    MR_Word backend_libs__type_ctor_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__1_10, (MR_Integer) 0)));
    MR_Word backend_libs__type_ctor_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__1_10, (MR_Integer) 1)));
    MR_Integer backend_libs__type_ctor_info__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__1_10, (MR_Integer) 4)));
    MR_Word backend_libs__type_ctor_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__1_10, (MR_Integer) 5)));

    {
      backend_libs__type_ctor_info__Var_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, backend_libs__type_ctor_info__Var_24);
    }
    {
      backend_libs__type_ctor_info__LambdaHeadVar__2_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__2_11, 0) = ((MR_Box) (backend_libs__type_ctor_info__Var_12));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__2_11, 1) = ((MR_Box) (backend_libs__type_ctor_info__Var_13));
    }
    return backend_libs__type_ctor_info__LambdaHeadVar__2_11;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__991__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__SectagLocn_9,
  MR_Word backend_libs__type_ctor_info__Locn0_12)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__SectagLocn_9 == backend_libs__type_ctor_info__Locn0_12);

    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__927__1_3_p_0(
  MR_Word backend_libs__type_ctor_info__LocnMap_28,
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__1_46,
  MR_Word * backend_libs__type_ctor_info__LambdaHeadVar__2_47)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__conv0_LambdaHeadVar__2_47;

    {
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, backend_libs__type_ctor_info__LocnMap_28, ((MR_Box) (backend_libs__type_ctor_info__LambdaHeadVar__1_46)), &backend_libs__type_ctor_info__conv0_LambdaHeadVar__2_47);
    }
    *backend_libs__type_ctor_info__LambdaHeadVar__2_47 = ((MR_Word) backend_libs__type_ctor_info__conv0_LambdaHeadVar__2_47);
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__917__1_5_p_0(
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__1_37,
  MR_Integer backend_libs__type_ctor_info__LambdaHeadVar__2_38,
  MR_Integer * backend_libs__type_ctor_info__LambdaHeadVar__3_39,
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__4_40,
  MR_Word * backend_libs__type_ctor_info__LambdaHeadVar__5_41)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Locn_23;

    {
      backend_libs__type_ctor_info__Locn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Locn_23, 0) = ((MR_Box) (backend_libs__type_ctor_info__LambdaHeadVar__2_38));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ((MR_Box) (backend_libs__type_ctor_info__LambdaHeadVar__1_37)), ((MR_Box) (backend_libs__type_ctor_info__Locn_23)), backend_libs__type_ctor_info__LambdaHeadVar__4_40, backend_libs__type_ctor_info__LambdaHeadVar__5_41);
    }
    *backend_libs__type_ctor_info__LambdaHeadVar__3_39 = (backend_libs__type_ctor_info__LambdaHeadVar__2_38 + (MR_Integer) 1);
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__909__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__LambdaHeadVar__1_33,
  MR_Word * backend_libs__type_ctor_info__LambdaHeadVar__2_34)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__1_33, (MR_Integer) 0)));

    *backend_libs__type_ctor_info__LambdaHeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__LambdaHeadVar__1_33, (MR_Integer) 1)));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__804__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__MaybeExistInfo_34,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_60)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[4], ((MR_Box) (backend_libs__type_ctor_info__MaybeExistInfo_34)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_60)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__803__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ArgInfos_32,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_55)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[3], ((MR_Box) (backend_libs__type_ctor_info__ArgInfos_32)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_55)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__802__1_2_p_0(
  MR_Integer backend_libs__type_ctor_info__Arity_26,
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_50)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Arity_26 == backend_libs__type_ctor_info__HeadVar__2_50);

    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__746__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_35)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ReservedAddr_14 == backend_libs__type_ctor_info__HeadVar__2_35);

    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__738__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_42)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ReservedAddr_14 == backend_libs__type_ctor_info__HeadVar__2_42);

    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__657__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__Lang_2,
  MR_Word backend_libs__type_ctor_info__ForeignTagLang_27)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Lang_2 == backend_libs__type_ctor_info__ForeignTagLang_27);

    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__651__1_2_p_0(
  MR_Integer backend_libs__type_ctor_info__Arity_23,
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_76)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Arity_23 == backend_libs__type_ctor_info__HeadVar__2_76);

    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__649__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__Constraints_20,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_71)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[2], ((MR_Box) (backend_libs__type_ctor_info__Constraints_20)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_71)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__647__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ExistTvars_19,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_66)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[1], ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_19)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_66)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__588__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ConsTag_23,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_45)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = hlds__hlds_data____Unify____cons_tag_0_0(backend_libs__type_ctor_info__ConsTag_23, backend_libs__type_ctor_info__HeadVar__2_45);
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__584__1_2_p_0(
  MR_Integer backend_libs__type_ctor_info__Arity_20,
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_39)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Arity_20 == backend_libs__type_ctor_info__HeadVar__2_39);

    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__582__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__Constraints_17,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_34)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[2], ((MR_Box) (backend_libs__type_ctor_info__Constraints_17)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_34)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__580__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__ExistTvars_16,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_29)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[1], ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_16)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_29)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__208__1_2_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__TypeModuleName_15)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__type_ctor_info__TypeModuleName_15, backend_libs__type_ctor_info__HeadVar__2_2);
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[17], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[17], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[7], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[7], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[13], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[13], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[6], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

    {
      backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[6], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Integer backend_libs__type_ctor_info__CastX_12 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__2_2;
    MR_Integer backend_libs__type_ctor_info__CastY_13 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__3_3;

    backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__CastX_12 == backend_libs__type_ctor_info__CastY_13);
    if (backend_libs__type_ctor_info__succeeded)
      *backend_libs__type_ctor_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word backend_libs__type_ctor_info__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word backend_libs__type_ctor_info__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));

            {
              backend_libs__rtti____Compare____du_rep_0_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__Var_16, backend_libs__type_ctor_info__ArgY1_11);
            }
          }
        else
          *backend_libs__type_ctor_info__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *backend_libs__type_ctor_info__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word backend_libs__type_ctor_info__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));

            {
              hlds__hlds_data____Compare____reserved_address_0_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__Var_17, backend_libs__type_ctor_info__ArgY1_5);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Integer backend_libs__type_ctor_info__CastX_7 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__1_1;
    MR_Integer backend_libs__type_ctor_info__CastY_8 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__2_2;

    backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__CastX_7 == backend_libs__type_ctor_info__CastY_8);
    if (backend_libs__type_ctor_info__succeeded)
      backend_libs__type_ctor_info__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word backend_libs__type_ctor_info__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__ArgY1_6;

        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__type_ctor_info__succeeded)
          {
            backend_libs__type_ctor_info__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
            {
              backend_libs__type_ctor_info__succeeded = backend_libs__rtti____Unify____du_rep_0_0(backend_libs__type_ctor_info__ArgX1_5, backend_libs__type_ctor_info__ArgY1_6);
            }
          }
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__ArgY1_4;

        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (backend_libs__type_ctor_info__succeeded)
          {
            backend_libs__type_ctor_info__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
            {
              backend_libs__type_ctor_info__succeeded = hlds__hlds_data____Unify____reserved_address_0_0(backend_libs__type_ctor_info__ArgX1_3, backend_libs__type_ctor_info__ArgY1_4);
            }
          }
      }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(
  MR_Word backend_libs__type_ctor_info__MaybeResFunctor_4,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_String backend_libs__type_ctor_info__Name_7;
    MR_Integer backend_libs__type_ctor_info__Arity_8;
    MR_Word backend_libs__type_ctor_info__NameMap0_10;
    MR_Box backend_libs__type_ctor_info__conv0_NameMap0_10;

    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__MaybeResFunctor_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word backend_libs__type_ctor_info__DuFunctor_6 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__MaybeResFunctor_4), (MR_Integer) 1);
        MR_Integer backend_libs__type_ctor_info__Var_18;
        MR_Word backend_libs__type_ctor_info__Var_19;
        MR_Word backend_libs__type_ctor_info__Var_20;
        MR_Word backend_libs__type_ctor_info__Var_21;
        MR_Word backend_libs__type_ctor_info__Var_22;

        backend_libs__type_ctor_info__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 0)));
        backend_libs__type_ctor_info__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 1)));
        backend_libs__type_ctor_info__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 2)));
        backend_libs__type_ctor_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 3)));
        backend_libs__type_ctor_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 4)));
        backend_libs__type_ctor_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 5)));
        backend_libs__type_ctor_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 6)));
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__ResFunctor_9 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__MaybeResFunctor_4), (MR_Integer) 0);
        MR_Integer backend_libs__type_ctor_info__Var_29;
        MR_Word backend_libs__type_ctor_info__Var_30;

        backend_libs__type_ctor_info__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_9, (MR_Integer) 0)));
        backend_libs__type_ctor_info__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_9, (MR_Integer) 1)));
        backend_libs__type_ctor_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_9, (MR_Integer) 2)));
        backend_libs__type_ctor_info__Arity_8 = (MR_Integer) 0;
      }
    {
      backend_libs__type_ctor_info__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12, ((MR_Box) (backend_libs__type_ctor_info__Name_7)), &backend_libs__type_ctor_info__conv0_NameMap0_10);
    }
    if (backend_libs__type_ctor_info__succeeded)
      {
        backend_libs__type_ctor_info__NameMap0_10 = ((MR_Word) backend_libs__type_ctor_info__conv0_NameMap0_10);
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
      }
    if (backend_libs__type_ctor_info__succeeded)
      {
        MR_Word backend_libs__type_ctor_info__NameMap_11;

        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, backend_libs__type_ctor_info__Arity_8, ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctor_4)), backend_libs__type_ctor_info__NameMap0_10, &backend_libs__type_ctor_info__NameMap_11);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], ((MR_Box) (backend_libs__type_ctor_info__Name_7)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_11)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13);
        }
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__NameMap_16;

        {
          backend_libs__type_ctor_info__NameMap_16 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ((MR_Box) (backend_libs__type_ctor_info__Arity_8)), ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctor_4)));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], ((MR_Box) (backend_libs__type_ctor_info__Name_7)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_16)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13);
        }
      }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_String backend_libs__type_ctor_info__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 0)));
    MR_Integer backend_libs__type_ctor_info__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 1)));
    MR_Integer backend_libs__type_ctor_info__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 2)));
    MR_Word backend_libs__type_ctor_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 3)));
    MR_Word backend_libs__type_ctor_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 4)));
    MR_Word backend_libs__type_ctor_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 5)));
    MR_Word backend_libs__type_ctor_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 6)));
    MR_Word backend_libs__type_ctor_info__NameMap0_8;
    MR_Box backend_libs__type_ctor_info__conv0_NameMap0_8;

    {
      backend_libs__type_ctor_info__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10, ((MR_Box) (backend_libs__type_ctor_info__Name_6)), &backend_libs__type_ctor_info__conv0_NameMap0_8);
    }
    if (backend_libs__type_ctor_info__succeeded)
      {
        backend_libs__type_ctor_info__NameMap0_8 = ((MR_Word) backend_libs__type_ctor_info__conv0_NameMap0_8);
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
      }
    if (backend_libs__type_ctor_info__succeeded)
      {
        MR_Word backend_libs__type_ctor_info__NameMap_9;

        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, backend_libs__type_ctor_info__Arity_7, ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)), backend_libs__type_ctor_info__NameMap0_8, &backend_libs__type_ctor_info__NameMap_9);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], ((MR_Box) (backend_libs__type_ctor_info__Name_6)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_9)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11);
        }
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__NameMap_14;

        {
          backend_libs__type_ctor_info__NameMap_14 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ((MR_Box) (backend_libs__type_ctor_info__Arity_7)), ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], ((MR_Box) (backend_libs__type_ctor_info__Name_6)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_14)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11);
        }
      }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__991__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__DuRep_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 3)));
    MR_String backend_libs__type_ctor_info__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 0)));
    MR_Integer backend_libs__type_ctor_info__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 1)));
    MR_Integer backend_libs__type_ctor_info__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 2)));
    MR_Word backend_libs__type_ctor_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 4)));
    MR_Word backend_libs__type_ctor_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 5)));
    MR_Word backend_libs__type_ctor_info__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 6)));

    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__DuRep_6)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "du_hl_rep");
          return;
        }
      }
    else
      {
        MR_Integer backend_libs__type_ctor_info__Ptag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuRep_6, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__SectagAndLocn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuRep_6, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__SectagLocn_9;
        MR_Integer backend_libs__type_ctor_info__Sectag_10;
        MR_Word backend_libs__type_ctor_info__SectagTable0_11;
        MR_Box backend_libs__type_ctor_info__conv0_SectagTable0_11;

        switch (MR_tag((MR_Word) backend_libs__type_ctor_info__SectagAndLocn_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(backend_libs__type_ctor_info__SectagAndLocn_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 0;
                  backend_libs__type_ctor_info__Sectag_10 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 1:
                {
                  backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 1;
                  backend_libs__type_ctor_info__Sectag_10 = (MR_Integer) 0;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              backend_libs__type_ctor_info__Sectag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SectagAndLocn_8, (MR_Integer) 0)));
              backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 2;
            }
            break;
          case (MR_Integer) 2:
            {
              backend_libs__type_ctor_info__Sectag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__SectagAndLocn_8, (MR_Integer) 0)));
              backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 3;
            }
            break;
        }
        {
          backend_libs__type_ctor_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18, backend_libs__type_ctor_info__Ptag_7, &backend_libs__type_ctor_info__conv0_SectagTable0_11);
        }
        if (backend_libs__type_ctor_info__succeeded)
          {
            backend_libs__type_ctor_info__SectagTable0_11 = ((MR_Word) backend_libs__type_ctor_info__conv0_SectagTable0_11);
            backend_libs__type_ctor_info__succeeded = MR_TRUE;
          }
        if (backend_libs__type_ctor_info__succeeded)
          {
            MR_Word backend_libs__type_ctor_info__Locn0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable0_11, (MR_Integer) 0)));
            MR_Integer backend_libs__type_ctor_info__NumSharers0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable0_11, (MR_Integer) 1)));
            MR_Word backend_libs__type_ctor_info__SectagMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable0_11, (MR_Integer) 2)));
            MR_Word backend_libs__type_ctor_info__SectagMap_15;
            MR_Word backend_libs__type_ctor_info__SectagTable_16;
            MR_Word backend_libs__type_ctor_info__Var_23;
            MR_Integer backend_libs__type_ctor_info__Var_27;

            {
              backend_libs__type_ctor_info__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_23, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[14]));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_23, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_23, 3) = ((MR_Box) (backend_libs__type_ctor_info__SectagLocn_9));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_23, 4) = ((MR_Box) (backend_libs__type_ctor_info__Locn0_12));
            }
            {
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_23, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "sectag locn disagreement");
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, backend_libs__type_ctor_info__Sectag_10, ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)), backend_libs__type_ctor_info__SectagMap0_14, &backend_libs__type_ctor_info__SectagMap_15);
            }
            backend_libs__type_ctor_info__Var_27 = (backend_libs__type_ctor_info__NumSharers0_13 + (MR_Integer) 1);
            {
              backend_libs__type_ctor_info__SectagTable_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_16, 0) = ((MR_Box) (backend_libs__type_ctor_info__Locn0_12));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_16, 1) = ((MR_Box) (backend_libs__type_ctor_info__Var_27));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_16, 2) = ((MR_Box) (backend_libs__type_ctor_info__SectagMap_15));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, backend_libs__type_ctor_info__Ptag_7, ((MR_Box) (backend_libs__type_ctor_info__SectagTable_16)), backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18, backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19);
            }
          }
        else
          {
            MR_Word backend_libs__type_ctor_info__SectagMap_32;
            MR_Word backend_libs__type_ctor_info__SectagTable_33;

            {
              backend_libs__type_ctor_info__SectagMap_32 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ((MR_Box) (backend_libs__type_ctor_info__Sectag_10)), ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)));
            }
            {
              backend_libs__type_ctor_info__SectagTable_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_33, 0) = ((MR_Box) (backend_libs__type_ctor_info__SectagLocn_9));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_33, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_33, 2) = ((MR_Box) (backend_libs__type_ctor_info__SectagMap_32));
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, backend_libs__type_ctor_info__Ptag_7, ((MR_Box) (backend_libs__type_ctor_info__SectagTable_33)), backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18, backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19);
            }
          }
      }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__find_type_info_index_6_p_0(
  MR_Word backend_libs__type_ctor_info__Constraints_7,
  MR_Word backend_libs__type_ctor_info__ClassTable_8,
  MR_Integer backend_libs__type_ctor_info__StartSlot_9,
  MR_Word backend_libs__type_ctor_info__TVar_10,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_0_22,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_23)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Integer backend_libs__type_ctor_info__Slot_12;
    MR_Word backend_libs__type_ctor_info__FirstConstraint_13;
    MR_Integer backend_libs__type_ctor_info__TypeInfoIndex_14;
    MR_Word backend_libs__type_ctor_info__ClassName_15;
    MR_Word backend_libs__type_ctor_info__ArgTypes_16;
    MR_Integer backend_libs__type_ctor_info__ClassArity_17;
    MR_Word backend_libs__type_ctor_info__ClassDefn_18;
    MR_Integer backend_libs__type_ctor_info__NumSuperClasses_19;
    MR_Integer backend_libs__type_ctor_info__RealTypeInfoIndex_20;
    MR_Word backend_libs__type_ctor_info__Locn_21;
    MR_Word backend_libs__type_ctor_info__Var_24;
    MR_Word backend_libs__type_ctor_info__Var_25;
    MR_Box backend_libs__type_ctor_info__conv0_ClassDefn_18;
    MR_Word backend_libs__type_ctor_info__Var_27;
    MR_Word backend_libs__type_ctor_info__Var_28;
    MR_Word backend_libs__type_ctor_info__Var_29;
    MR_Word backend_libs__type_ctor_info__Var_30;
    MR_Word backend_libs__type_ctor_info__Var_31;
    MR_Word backend_libs__type_ctor_info__Var_32;
    MR_Word backend_libs__type_ctor_info__Var_33;
    MR_Word backend_libs__type_ctor_info__Var_34;
    MR_Word backend_libs__type_ctor_info__Var_35;

    {
      backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(backend_libs__type_ctor_info__Constraints_7, backend_libs__type_ctor_info__TVar_10, backend_libs__type_ctor_info__StartSlot_9, &backend_libs__type_ctor_info__Slot_12, &backend_libs__type_ctor_info__FirstConstraint_13, &backend_libs__type_ctor_info__TypeInfoIndex_14);
    }
    backend_libs__type_ctor_info__ClassName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__FirstConstraint_13, (MR_Integer) 0)));
    backend_libs__type_ctor_info__ArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__FirstConstraint_13, (MR_Integer) 1)));
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__type_ctor_info__ArgTypes_16, &backend_libs__type_ctor_info__ClassArity_17);
    }
    {
      backend_libs__type_ctor_info__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_24, 0) = ((MR_Box) (backend_libs__type_ctor_info__ClassName_15));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_24, 1) = ((MR_Box) (backend_libs__type_ctor_info__ClassArity_17));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, backend_libs__type_ctor_info__ClassTable_8, ((MR_Box) (backend_libs__type_ctor_info__Var_24)), &backend_libs__type_ctor_info__conv0_ClassDefn_18);
    }
    backend_libs__type_ctor_info__ClassDefn_18 = ((MR_Word) backend_libs__type_ctor_info__conv0_ClassDefn_18);
    backend_libs__type_ctor_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 0)));
    backend_libs__type_ctor_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 1)));
    backend_libs__type_ctor_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 2)));
    backend_libs__type_ctor_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 3)));
    backend_libs__type_ctor_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 4)));
    backend_libs__type_ctor_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 5)));
    backend_libs__type_ctor_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 6)));
    backend_libs__type_ctor_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 7)));
    backend_libs__type_ctor_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 8)));
    backend_libs__type_ctor_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 9)));
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, backend_libs__type_ctor_info__Var_25, &backend_libs__type_ctor_info__NumSuperClasses_19);
    }
    backend_libs__type_ctor_info__RealTypeInfoIndex_20 = (backend_libs__type_ctor_info__TypeInfoIndex_14 + backend_libs__type_ctor_info__NumSuperClasses_19);
    {
      backend_libs__type_ctor_info__Locn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Locn_21, 0) = ((MR_Box) (backend_libs__type_ctor_info__Slot_12));
      MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Locn_21, 1) = ((MR_Box) (backend_libs__type_ctor_info__RealTypeInfoIndex_20));
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ((MR_Box) (backend_libs__type_ctor_info__TVar_10)), ((MR_Box) (backend_libs__type_ctor_info__Locn_21)), backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_0_22, backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_23);
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__TVar_2,
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_0_3,
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_N_4,
  MR_Word * backend_libs__type_ctor_info__MatchingConstraint_5,
  MR_Integer * backend_libs__type_ctor_info__TypeInfoIndex_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__type_ctor_info__succeeded;

        if ((backend_libs__type_ctor_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.first_matching_type_class_info\'/6", (MR_String) "not found");
              return;
            }
          }
        else
          {
            MR_Word backend_libs__type_ctor_info__Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__type_ctor_info__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word backend_libs__type_ctor_info__ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Constraint_16, (MR_Integer) 1)));
            MR_Word backend_libs__type_ctor_info__TVs_24;
            MR_Word backend_libs__type_ctor_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Constraint_16, (MR_Integer) 0)));
            MR_Integer backend_libs__type_ctor_info__Index_25;

            {
              parse_tree__prog_type__type_vars_list_2_p_0(backend_libs__type_ctor_info__ArgTypes_23, &backend_libs__type_ctor_info__TVs_24);
            }
            {
              backend_libs__type_ctor_info__succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], backend_libs__type_ctor_info__TVs_24, ((MR_Box) (backend_libs__type_ctor_info__TVar_2)), &backend_libs__type_ctor_info__Index_25);
            }
            if (backend_libs__type_ctor_info__succeeded)
              {
                *backend_libs__type_ctor_info__MatchingConstraint_5 = backend_libs__type_ctor_info__Constraint_16;
                *backend_libs__type_ctor_info__TypeInfoIndex_6 = backend_libs__type_ctor_info__Index_25;
                *backend_libs__type_ctor_info__STATE_VARIABLE_N_4 = backend_libs__type_ctor_info__STATE_VARIABLE_N_0_3;
              }
            else
              {
                MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_28_28 = (backend_libs__type_ctor_info__STATE_VARIABLE_N_0_3 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word backend_libs__type_ctor_info__next_value_of_HeadVar__1_1 = backend_libs__type_ctor_info__Constraints_17;
                  MR_Integer backend_libs__type_ctor_info__next_value_of_STATE_VARIABLE_N_0_3 = backend_libs__type_ctor_info__STATE_VARIABLE_N_28_28;

                  backend_libs__type_ctor_info__STATE_VARIABLE_N_0_3 = backend_libs__type_ctor_info__next_value_of_STATE_VARIABLE_N_0_3;
                  backend_libs__type_ctor_info__HeadVar__1_1 = backend_libs__type_ctor_info__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_du_arg_info_6_p_0(
  MR_Integer backend_libs__type_ctor_info__NumUnivTvars_7,
  MR_Word backend_libs__type_ctor_info__ExistTvars_8,
  MR_Word backend_libs__type_ctor_info__ConstructorArg_9,
  MR_Word * backend_libs__type_ctor_info__ArgInfo_10,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_FunctorSubtypeInfo_0_29,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_FunctorSubtypeInfo_30)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__MaybeCtorFieldName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_9, (MR_Integer) 0)));
    MR_Word backend_libs__type_ctor_info__ArgType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_9, (MR_Integer) 1)));
    MR_Word backend_libs__type_ctor_info__ArgWidth_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_9, (MR_Integer) 2)));
    MR_Word backend_libs__type_ctor_info__MaybeArgName_19;
    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_20;
    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_22;
    MR_Word backend_libs__type_ctor_info___Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_9, (MR_Integer) 3)));
    MR_Word backend_libs__type_ctor_info__Var_32;
    MR_Word backend_libs__type_ctor_info__Var_24;
    MR_Word backend_libs__type_ctor_info__Var_25;
    MR_Word backend_libs__type_ctor_info__Var_27;
    MR_Word backend_libs__type_ctor_info__Var_26;

    if ((backend_libs__type_ctor_info__MaybeCtorFieldName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      backend_libs__type_ctor_info__MaybeArgName_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__type_ctor_info__SymName_16;
        MR_String backend_libs__type_ctor_info__ArgName_18;
        MR_Word backend_libs__type_ctor_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybeCtorFieldName_12, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__Var_17;

        backend_libs__type_ctor_info__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_31, (MR_Integer) 0)));
        backend_libs__type_ctor_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_31, (MR_Integer) 1)));
        {
          backend_libs__type_ctor_info__ArgName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_16);
        }
        {
          backend_libs__type_ctor_info__MaybeArgName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybeArgName_19, 0) = ((MR_Box) (backend_libs__type_ctor_info__ArgName_18));
        }
      }
    {
      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__ArgType_13, backend_libs__type_ctor_info__NumUnivTvars_7, backend_libs__type_ctor_info__ExistTvars_8, &backend_libs__type_ctor_info__MaybePseudoTypeInfo_20);
    }
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__MaybePseudoTypeInfo_20)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word backend_libs__type_ctor_info__TypeInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybePseudoTypeInfo_20, (MR_Integer) 0)));

        {
          backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_22, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeInfo_21));
        }
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__PseudoTypeInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__MaybePseudoTypeInfo_20, (MR_Integer) 0)));

        {
          backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_22, 0) = ((MR_Box) (backend_libs__type_ctor_info__PseudoTypeInfo_23));
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *backend_libs__type_ctor_info__ArgInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__MaybeArgName_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__ArgWidth_14));
    }
    backend_libs__type_ctor_info__succeeded = ((((MR_tag((MR_Word) backend_libs__type_ctor_info__ArgType_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (backend_libs__type_ctor_info__succeeded)
      {
        backend_libs__type_ctor_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_13, (MR_Integer) 1)));
        backend_libs__type_ctor_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_13, (MR_Integer) 2)));
        backend_libs__type_ctor_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_13, (MR_Integer) 3)));
        backend_libs__type_ctor_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_13, (MR_Integer) 4)));
        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Var_32)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__type_ctor_info__succeeded)
          backend_libs__type_ctor_info__Var_26 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__Var_32), (MR_Integer) 1);
      }
    if (backend_libs__type_ctor_info__succeeded)
      *backend_libs__type_ctor_info__STATE_VARIABLE_FunctorSubtypeInfo_30 = (MR_Integer) 1;
    else
      *backend_libs__type_ctor_info__STATE_VARIABLE_FunctorSubtypeInfo_30 = backend_libs__type_ctor_info__STATE_VARIABLE_FunctorSubtypeInfo_0_29;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_reserved_functor_1_f_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word * backend_libs__type_ctor_info__ResFunctor_3)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

    if (backend_libs__type_ctor_info__succeeded)
      *backend_libs__type_ctor_info__ResFunctor_3 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1), (MR_Integer) 0);
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_du_functor_1_f_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word * backend_libs__type_ctor_info__DuFunctor_3)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

    if (backend_libs__type_ctor_info__succeeded)
      *backend_libs__type_ctor_info__DuFunctor_3 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1), (MR_Integer) 1);
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(
  MR_Word backend_libs__type_ctor_info__ForeignEnumFunctor_6,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_0_12,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_13,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_14,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_15)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_19_19 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    MR_String backend_libs__type_ctor_info__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_6, (MR_Integer) 0)));
    MR_Integer backend_libs__type_ctor_info__FunctorOrdinal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_6, (MR_Integer) 1)));
    MR_String backend_libs__type_ctor_info__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_6, (MR_Integer) 2)));

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_19_19, backend_libs__type_ctor_info__FunctorOrdinal_10, ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_0_12, backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_13);
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_19_19, ((MR_Box) (backend_libs__type_ctor_info__FunctorName_9)), ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_14, backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_15);
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_maps_5_p_0(
  MR_Word backend_libs__type_ctor_info__EnumFunctor_6,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_0_11,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_12,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_13,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_14)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    MR_String backend_libs__type_ctor_info__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_6, (MR_Integer) 0)));
    MR_Integer backend_libs__type_ctor_info__Ordinal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_6, (MR_Integer) 1)));

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_18_18, backend_libs__type_ctor_info__Ordinal_10, ((MR_Box) (backend_libs__type_ctor_info__EnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_0_11, backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_12);
    }
    {
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_18_18, ((MR_Box) (backend_libs__type_ctor_info__FunctorName_9)), ((MR_Box) (backend_libs__type_ctor_info__EnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_13, backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_14);
    }
  }
}

MR_Integer MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(
  MR_Word backend_libs__type_ctor_info__ArgTypes_3)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Integer backend_libs__type_ctor_info__Vector_4;

    {
      backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(backend_libs__type_ctor_info__ArgTypes_3, (MR_Integer) 0, (MR_Integer) 0, &backend_libs__type_ctor_info__Vector_4);
    }
    return backend_libs__type_ctor_info__Vector_4;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Integer backend_libs__type_ctor_info__ArgNum_2,
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3,
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_Vector_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__type_ctor_info__succeeded;

        if ((backend_libs__type_ctor_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *backend_libs__type_ctor_info__STATE_VARIABLE_Vector_4 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3;
        else
          {
            MR_Word backend_libs__type_ctor_info__ArgType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__type_ctor_info__ArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18;
            MR_Integer backend_libs__type_ctor_info__Var_19;

            switch (MR_tag((MR_Word) backend_libs__type_ctor_info__ArgType_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer backend_libs__type_ctor_info__BitNum_39;
                  MR_Integer backend_libs__type_ctor_info__Var_46;

                  backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ArgNum_2 >= (((MR_Integer) 16 - (MR_Integer) 1)));
                  if (backend_libs__type_ctor_info__succeeded)
                    {
                      backend_libs__type_ctor_info__BitNum_39 = ((MR_Integer) 16 - (MR_Integer) 1);
                    }
                  else
                    backend_libs__type_ctor_info__BitNum_39 = backend_libs__type_ctor_info__ArgNum_2;
                  {
                    backend_libs__type_ctor_info__Var_46 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, backend_libs__type_ctor_info__BitNum_39);
                  }
                  backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18 = (backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3 | backend_libs__type_ctor_info__Var_46);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer backend_libs__type_ctor_info__BitNum_26;
                  MR_Integer backend_libs__type_ctor_info__Var_33;

                  backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ArgNum_2 >= (((MR_Integer) 16 - (MR_Integer) 1)));
                  if (backend_libs__type_ctor_info__succeeded)
                    {
                      backend_libs__type_ctor_info__BitNum_26 = ((MR_Integer) 16 - (MR_Integer) 1);
                    }
                  else
                    backend_libs__type_ctor_info__BitNum_26 = backend_libs__type_ctor_info__ArgNum_2;
                  {
                    backend_libs__type_ctor_info__Var_33 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, backend_libs__type_ctor_info__BitNum_26);
                  }
                  backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18 = (backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3 | backend_libs__type_ctor_info__Var_33);
                }
                break;
              case (MR_Integer) 2:
                backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3;
                break;
            }
            backend_libs__type_ctor_info__Var_19 = (backend_libs__type_ctor_info__ArgNum_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__type_ctor_info__next_value_of_HeadVar__1_1 = backend_libs__type_ctor_info__ArgTypes_10;
              MR_Integer backend_libs__type_ctor_info__next_value_of_ArgNum_2 = backend_libs__type_ctor_info__Var_19;
              MR_Integer backend_libs__type_ctor_info__next_value_of_STATE_VARIABLE_Vector_0_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18;

              backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3 = backend_libs__type_ctor_info__next_value_of_STATE_VARIABLE_Vector_0_3;
              backend_libs__type_ctor_info__ArgNum_2 = backend_libs__type_ctor_info__next_value_of_ArgNum_2;
              backend_libs__type_ctor_info__HeadVar__1_1 = backend_libs__type_ctor_info__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
backend_libs__type_ctor_info__generate_rtti_2_p_0(
  MR_Word backend_libs__type_ctor_info__ModuleInfo_3,
  MR_Word * backend_libs__type_ctor_info__Tables_4)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_11_11;
    MR_Word backend_libs__type_ctor_info__TypeCtorGenInfos_5;
    MR_Word backend_libs__type_ctor_info__Dynamic_6;
    MR_Word backend_libs__type_ctor_info__Static0_7;
    MR_Word backend_libs__type_ctor_info__Static_8;

    {
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(backend_libs__type_ctor_info__ModuleInfo_3, &backend_libs__type_ctor_info__TypeCtorGenInfos_5);
    }
    {
      backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(backend_libs__type_ctor_info__TypeCtorGenInfos_5, backend_libs__type_ctor_info__ModuleInfo_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__Dynamic_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__Static0_7);
    }
    backend_libs__type_ctor_info__TypeCtorInfo_11_11 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
    {
      backend_libs__type_ctor_info__Static_8 = mercury__list__remove_dups_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_11_11, backend_libs__type_ctor_info__Static0_7);
    }
    {
      mercury__list__append_3_p_1(backend_libs__type_ctor_info__TypeCtorInfo_11_11, backend_libs__type_ctor_info__Dynamic_6, backend_libs__type_ctor_info__Static_8, backend_libs__type_ctor_info__Tables_4);
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_4,
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Static_0_5,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Static_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__type_ctor_info__succeeded;

        if ((backend_libs__type_ctor_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *backend_libs__type_ctor_info__STATE_VARIABLE_Static_6 = backend_libs__type_ctor_info__STATE_VARIABLE_Static_0_5;
            *backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_4 = backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3;
          }
        else
          {
            MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word backend_libs__type_ctor_info__TypeCtorGenInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word backend_libs__type_ctor_info__TypeCtorCModule_19;
            MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24;

            {
              backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(backend_libs__type_ctor_info__TypeCtorGenInfo_14, backend_libs__type_ctor_info__HeadVar__2_2, &backend_libs__type_ctor_info__TypeCtorCModule_19);
            }
            {
              backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorCModule_19));
              MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24, 1) = ((MR_Box) (backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3));
            }
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__type_ctor_info__next_value_of_HeadVar__1_1 = backend_libs__type_ctor_info__TypeCtorGenInfos_15;
              MR_Word backend_libs__type_ctor_info__next_value_of_STATE_VARIABLE_Dynamic_0_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24;

              backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3 = backend_libs__type_ctor_info__next_value_of_STATE_VARIABLE_Dynamic_0_3;
              backend_libs__type_ctor_info__HeadVar__1_1 = backend_libs__type_ctor_info__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_4,
  MR_Word backend_libs__type_ctor_info__ModuleInfo_5,
  MR_Word * backend_libs__type_ctor_info__RttiData_6)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_92_92;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_93_93;
    MR_Word backend_libs__type_ctor_info__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 0)));
    MR_Word backend_libs__type_ctor_info__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 1)));
    MR_String backend_libs__type_ctor_info__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 2)));
    MR_Integer backend_libs__type_ctor_info__TypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 3)));
    MR_Word backend_libs__type_ctor_info__HldsDefn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 5)));
    MR_Word backend_libs__type_ctor_info__UnifyPredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 6)));
    MR_Word backend_libs__type_ctor_info__ComparePredProcId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 7)));
    MR_Word backend_libs__type_ctor_info__UnifyPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__UnifyPredProcId_13, (MR_Integer) 0)));
    MR_Integer backend_libs__type_ctor_info__UnifyProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__UnifyPredProcId_13, (MR_Integer) 1)));
    MR_Word backend_libs__type_ctor_info__UnifyProcLabel_17;
    MR_Word backend_libs__type_ctor_info__ComparePredId_18;
    MR_Integer backend_libs__type_ctor_info__CompareProcId_19;
    MR_Word backend_libs__type_ctor_info__CompareProcLabel_20;
    MR_Word backend_libs__type_ctor_info__UnifyUniv_21;
    MR_Word backend_libs__type_ctor_info__CompareUniv_22;
    MR_Word backend_libs__type_ctor_info__TypeBody_23;
    MR_Word backend_libs__type_ctor_info__Details_28;
    MR_Word backend_libs__type_ctor_info__TypeCtorData_74;
    MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Flags_81_81;
    MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85;
    MR_Word backend_libs__type_ctor_info___Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 4)));
    MR_Word backend_libs__type_ctor_info__Var_25;
    MR_Word backend_libs__type_ctor_info__BuiltinCtor_27;
    MR_String backend_libs__type_ctor_info__ModuleStr1_26;

    {
      backend_libs__type_ctor_info__UnifyProcLabel_17 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__type_ctor_info__ModuleInfo_5, backend_libs__type_ctor_info__UnifyPredId_15, backend_libs__type_ctor_info__UnifyProcId_16);
    }
    backend_libs__type_ctor_info__ComparePredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ComparePredProcId_14, (MR_Integer) 0)));
    backend_libs__type_ctor_info__CompareProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ComparePredProcId_14, (MR_Integer) 1)));
    {
      backend_libs__type_ctor_info__CompareProcLabel_20 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__type_ctor_info__ModuleInfo_5, backend_libs__type_ctor_info__ComparePredId_18, backend_libs__type_ctor_info__CompareProcId_19);
    }
    backend_libs__type_ctor_info__TypeCtorInfo_92_92 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
    {
      mercury__univ__type_to_univ_2_p_1(backend_libs__type_ctor_info__TypeCtorInfo_92_92, ((MR_Box) (backend_libs__type_ctor_info__UnifyProcLabel_17)), &backend_libs__type_ctor_info__UnifyUniv_21);
    }
    {
      mercury__univ__type_to_univ_2_p_1(backend_libs__type_ctor_info__TypeCtorInfo_92_92, ((MR_Box) (backend_libs__type_ctor_info__CompareProcLabel_20)), &backend_libs__type_ctor_info__CompareUniv_22);
    }
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__HldsDefn_12, &backend_libs__type_ctor_info__TypeBody_23);
    }
    backend_libs__type_ctor_info__succeeded = ((((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (backend_libs__type_ctor_info__succeeded)
      {
        backend_libs__type_ctor_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
        {
          backend_libs__type_ctor_info__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(backend_libs__type_ctor_info__ModuleInfo_5);
        }
        backend_libs__type_ctor_info__succeeded = !(backend_libs__type_ctor_info__succeeded);
      }
    if (backend_libs__type_ctor_info__succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
          return;
        }
      }
    else
      {
      }
    backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
    if (backend_libs__type_ctor_info__succeeded)
      {
        backend_libs__type_ctor_info__ModuleStr1_26 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ModuleName_8, (MR_Integer) 0)));
        if ((strcmp(backend_libs__type_ctor_info__ModuleStr1_26, (MR_String) "builtin") == 0))
          {
            backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_10 == (MR_Integer) 0);
            if (backend_libs__type_ctor_info__succeeded)
              {
                MR_Integer backend_libs__type_ctor_info__case_num_0 = (MR_Integer) -1;

                switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 0)) {
                  case (MR_Integer) 99:
                    switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 1)) {
                      case (MR_Integer) 95:
                        if (MR_offset_streq(2, backend_libs__type_ctor_info__TypeName_9, (MR_String) "c_pointer"))
                          backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 104:
                        if (MR_offset_streq(2, backend_libs__type_ctor_info__TypeName_9, (MR_String) "character"))
                          backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 102:
                    switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 1)) {
                      case (MR_Integer) 108:
                        if (MR_offset_streq(2, backend_libs__type_ctor_info__TypeName_9, (MR_String) "float"))
                          backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(2, backend_libs__type_ctor_info__TypeName_9, (MR_String) "func"))
                          backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 3;
                        break;
                    }
                    break;
                  case (MR_Integer) 105:
                    if (((((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 2)) == (MR_Integer) 116))))
                      switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 3)) {
                        case (MR_Integer) 0:
                          backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 4;
                          break;
                        case (MR_Integer) 49:
                          if (MR_offset_streq(4, backend_libs__type_ctor_info__TypeName_9, (MR_String) "int16"))
                            backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 5;
                          break;
                        case (MR_Integer) 51:
                          if (MR_offset_streq(4, backend_libs__type_ctor_info__TypeName_9, (MR_String) "int32"))
                            backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 6;
                          break;
                        case (MR_Integer) 56:
                          if (MR_offset_streq(4, backend_libs__type_ctor_info__TypeName_9, (MR_String) "int8"))
                            backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 7;
                          break;
                      }
                    break;
                  case (MR_Integer) 112:
                    if (MR_offset_streq(1, backend_libs__type_ctor_info__TypeName_9, (MR_String) "pred"))
                      backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 115:
                    if (((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 1)) == (MR_Integer) 116))
                      switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 2)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(3, backend_libs__type_ctor_info__TypeName_9, (MR_String) "stable_c_pointer"))
                            backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 9;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(3, backend_libs__type_ctor_info__TypeName_9, (MR_String) "string"))
                            backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 10;
                          break;
                      }
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(1, backend_libs__type_ctor_info__TypeName_9, (MR_String) "tuple"))
                      backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 11;
                    break;
                  case (MR_Integer) 117:
                    if (((((((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 3)) == (MR_Integer) 116))))
                      switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_9, 4)) {
                        case (MR_Integer) 0:
                          backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 12;
                          break;
                        case (MR_Integer) 49:
                          if (MR_offset_streq(5, backend_libs__type_ctor_info__TypeName_9, (MR_String) "uint16"))
                            backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 13;
                          break;
                        case (MR_Integer) 51:
                          if (MR_offset_streq(5, backend_libs__type_ctor_info__TypeName_9, (MR_String) "uint32"))
                            backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 14;
                          break;
                        case (MR_Integer) 56:
                          if (MR_offset_streq(5, backend_libs__type_ctor_info__TypeName_9, (MR_String) "uint8"))
                            backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 15;
                          break;
                      }
                    break;
                  case (MR_Integer) 118:
                    if (MR_offset_streq(1, backend_libs__type_ctor_info__TypeName_9, (MR_String) "void"))
                      backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 16;
                    break;
                }
                if ((backend_libs__type_ctor_info__case_num_0 < (MR_Integer) 0))
                  backend_libs__type_ctor_info__succeeded = MR_FALSE;
                else
                  {
                    /* we found a match; look up the results */
                    backend_libs__type_ctor_info__BuiltinCtor_27 = ((&backend_libs__type_ctor_info_vector_common_9[0 + backend_libs__type_ctor_info__case_num_0]))->backend_libs__type_ctor_info__vector_common_type_9_0__vct_9_f_0;
                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
                  }
              }
          }
        else
        if ((strcmp(backend_libs__type_ctor_info__ModuleStr1_26, (MR_String) "type_desc") == 0))
          {
            backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_10 == (MR_Integer) 0);
            if (backend_libs__type_ctor_info__succeeded)
              {
                if ((strcmp(backend_libs__type_ctor_info__TypeName_9, (MR_String) "type_desc") == 0))
                  {
                    backend_libs__type_ctor_info__BuiltinCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
                  }
                else
                if ((strcmp(backend_libs__type_ctor_info__TypeName_9, (MR_String) "type_ctor_desc") == 0))
                  {
                    backend_libs__type_ctor_info__BuiltinCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18));
                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
                  }
                else
                if ((strcmp(backend_libs__type_ctor_info__TypeName_9, (MR_String) "pseudo_type_desc") == 0))
                  {
                    backend_libs__type_ctor_info__BuiltinCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17));
                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
                  }
                else
                  backend_libs__type_ctor_info__succeeded = MR_FALSE;
              }
          }
        else
        if ((strcmp(backend_libs__type_ctor_info__ModuleStr1_26, (MR_String) "private_builtin") == 0))
          {
            backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__TypeName_9, (MR_String) "ref") == 0);
            if (backend_libs__type_ctor_info__succeeded)
              {
                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_10 == (MR_Integer) 1);
                if (backend_libs__type_ctor_info__succeeded)
                  {
                    backend_libs__type_ctor_info__BuiltinCtor_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15));
                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
                  }
              }
          }
        else
          backend_libs__type_ctor_info__succeeded = MR_FALSE;
      }
    if (backend_libs__type_ctor_info__succeeded)
      {
        backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__BuiltinCtor_27));
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__ImplCtor_30;
        MR_String backend_libs__type_ctor_info__ModuleStr_29;

        backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_10 == (MR_Integer) 0);
        if (backend_libs__type_ctor_info__succeeded)
          {
            backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
            if (backend_libs__type_ctor_info__succeeded)
              {
                backend_libs__type_ctor_info__ModuleStr_29 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ModuleName_8, (MR_Integer) 0)));
                if ((strcmp(backend_libs__type_ctor_info__ModuleStr_29, (MR_String) "table_builtin") == 0))
                  {
                    backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__TypeName_9, (MR_String) "ml_subgoal") == 0);
                    if (backend_libs__type_ctor_info__succeeded)
                      {
                        backend_libs__type_ctor_info__ImplCtor_30 = (MR_Integer) 12;
                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
                      }
                  }
                else
                if ((strcmp(backend_libs__type_ctor_info__ModuleStr_29, (MR_String) "private_builtin") == 0))
                  {
                    MR_Integer backend_libs__type_ctor_info__slot_1;
                    MR_String backend_libs__type_ctor_info__str_2;

                    /* hashed string simple lookup switch */
                    /* compute the hash value of the input string */
                    backend_libs__type_ctor_info__slot_1 = ((MR_hash_string6(backend_libs__type_ctor_info__TypeName_9)) & (MR_Integer) 31);
                    /* no collisions; no hash chain loop */
                    /* lookup the string for this hash slot */
                    backend_libs__type_ctor_info__str_2 = ((&backend_libs__type_ctor_info_vector_common_10[0 + backend_libs__type_ctor_info__slot_1]))->backend_libs__type_ctor_info__vector_common_type_10_0__vct_10_f_0;
                    /* did we find a match? */
                    if ((((backend_libs__type_ctor_info__str_2 != NULL)) && ((strcmp(backend_libs__type_ctor_info__str_2, backend_libs__type_ctor_info__TypeName_9) == 0))))
                      {
                        /* we found a match; look up the results */
                        backend_libs__type_ctor_info__ImplCtor_30 = ((&backend_libs__type_ctor_info_vector_common_10[0 + backend_libs__type_ctor_info__slot_1]))->backend_libs__type_ctor_info__vector_common_type_10_0__vct_10_f_1;
                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
                        /* jump out of search loop */
                        goto label_0;
                      }
                    backend_libs__type_ctor_info__succeeded = MR_FALSE;
                  label_0:;
                  }
                else
                  backend_libs__type_ctor_info__succeeded = MR_FALSE;
              }
          }
        if (backend_libs__type_ctor_info__succeeded)
          {
            backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__ImplCtor_30));
          }
        else
          switch (MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word backend_libs__type_ctor_info__ForeignBody_39 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__TypeBody_23), (MR_Integer) 0);
                MR_Word backend_libs__type_ctor_info__Assertions_42;
                MR_Word backend_libs__type_ctor_info__IsStable_43;
                MR_Word backend_libs__type_ctor_info__Var_40;
                MR_Word backend_libs__type_ctor_info__Var_41;

                {
                  backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__type_ctor_info__ModuleInfo_5, backend_libs__type_ctor_info__ForeignBody_39, &backend_libs__type_ctor_info__Var_40, &backend_libs__type_ctor_info__Var_41, &backend_libs__type_ctor_info__Assertions_42);
                }
                {
                  backend_libs__type_ctor_info__succeeded = hlds__hlds_data__asserted_stable_1_p_0(backend_libs__type_ctor_info__Assertions_42);
                }
                if (backend_libs__type_ctor_info__succeeded)
                  backend_libs__type_ctor_info__IsStable_43 = (MR_Integer) 0;
                else
                  backend_libs__type_ctor_info__IsStable_43 = (MR_Integer) 1;
                {
                  backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__IsStable_43));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word backend_libs__type_ctor_info__Ctors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)));
                MR_Word backend_libs__type_ctor_info__ConsTagMap_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
                MR_Word backend_libs__type_ctor_info__DuTypeKind_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 3)));
                MR_Word backend_libs__type_ctor_info__MaybeUserEqComp_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 4)));
                MR_Word backend_libs__type_ctor_info__ReservedTag_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
                MR_Word backend_libs__type_ctor_info__ReservedAddr_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word backend_libs__type_ctor_info__EqualityAxioms_55;
                MR_Word backend_libs__type_ctor_info___CheaperTagTest_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 2)));
                MR_Word backend_libs__type_ctor_info___MaybeDirectArgCtors_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 5)));
                MR_Word backend_libs__type_ctor_info___IsForeignType_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 7)));

                if ((backend_libs__type_ctor_info__MaybeUserEqComp_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  backend_libs__type_ctor_info__EqualityAxioms_55 = (MR_Integer) 0;
                else
                  backend_libs__type_ctor_info__EqualityAxioms_55 = (MR_Integer) 1;
                switch (MR_tag((MR_Word) backend_libs__type_ctor_info__DuTypeKind_48)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(backend_libs__type_ctor_info__DuTypeKind_48)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_45, backend_libs__type_ctor_info__ConsTagMap_46, backend_libs__type_ctor_info__ReservedTag_51, backend_libs__type_ctor_info__EqualityAxioms_55, &backend_libs__type_ctor_info__Details_28);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_45, backend_libs__type_ctor_info__ConsTagMap_46, backend_libs__type_ctor_info__ReservedTag_51, backend_libs__type_ctor_info__EqualityAxioms_55, &backend_libs__type_ctor_info__Details_28);
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          backend_libs__type_ctor_info__make_du_details_8_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_45, backend_libs__type_ctor_info__ConsTagMap_46, backend_libs__type_ctor_info__TypeArity_10, backend_libs__type_ctor_info__EqualityAxioms_55, backend_libs__type_ctor_info__ReservedAddr_52, backend_libs__type_ctor_info__ModuleInfo_5, &backend_libs__type_ctor_info__Details_28);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word backend_libs__type_ctor_info__Lang_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__DuTypeKind_48, (MR_Integer) 0)));

                      {
                        backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Lang_56, backend_libs__type_ctor_info__Ctors_45, backend_libs__type_ctor_info__ConsTagMap_46, backend_libs__type_ctor_info__ReservedTag_51, backend_libs__type_ctor_info__EqualityAxioms_55, &backend_libs__type_ctor_info__Details_28);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word backend_libs__type_ctor_info__FunctorName_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__DuTypeKind_48, (MR_Integer) 0)));
                      MR_Word backend_libs__type_ctor_info__ArgType_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__DuTypeKind_48, (MR_Integer) 1)));
                      MR_Word backend_libs__type_ctor_info__MaybeArgName_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__DuTypeKind_48, (MR_Integer) 2)));

                      {
                        backend_libs__type_ctor_info__make_notag_details_6_p_0(backend_libs__type_ctor_info__TypeArity_10, backend_libs__type_ctor_info__FunctorName_57, backend_libs__type_ctor_info__ArgType_58, backend_libs__type_ctor_info__MaybeArgName_59, backend_libs__type_ctor_info__EqualityAxioms_55, &backend_libs__type_ctor_info__Details_28);
                      }
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word backend_libs__type_ctor_info__Type_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)));
                MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_88;

                {
                  backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__Type_44, backend_libs__type_ctor_info__TypeArity_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__MaybePseudoTypeInfo_88);
                }
                {
                  backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfo_88));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word backend_libs__type_ctor_info__DetailsSolver_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
                    MR_Word backend_libs__type_ctor_info__SolverTypeDetails_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DetailsSolver_32, (MR_Integer) 0)));
                    MR_Word backend_libs__type_ctor_info__RepnType_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_33, (MR_Integer) 0)));
                    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_38;
                    MR_Word backend_libs__type_ctor_info___MaybeUserEqComp_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DetailsSolver_32, (MR_Integer) 1)));
                    MR_Word backend_libs__type_ctor_info__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_33, (MR_Integer) 1)));
                    MR_Word backend_libs__type_ctor_info__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_33, (MR_Integer) 2)));
                    MR_Word backend_libs__type_ctor_info__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_33, (MR_Integer) 3)));

                    {
                      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__RepnType_35, backend_libs__type_ctor_info__TypeArity_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__MaybePseudoTypeInfo_38);
                    }
                    {
                      backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfo_38));
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
    backend_libs__type_ctor_info__TypeCtorInfo_93_93 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_type_ctor_flag_0;
    {
      backend_libs__type_ctor_info__STATE_VARIABLE_Flags_81_81 = mercury__set__init_0_f_0(backend_libs__type_ctor_info__TypeCtorInfo_93_93);
    }
    switch (MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_81_81;
        break;
      case (MR_Integer) 1:
        {
          MR_Word backend_libs__type_ctor_info__BodyReservedTag_67 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
          MR_Word backend_libs__type_ctor_info__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)));
          MR_Word backend_libs__type_ctor_info__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
          MR_Word backend_libs__type_ctor_info__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 2)));
          MR_Word backend_libs__type_ctor_info__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 3)));
          MR_Word backend_libs__type_ctor_info__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 4)));
          MR_Word backend_libs__type_ctor_info__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 5)));
          MR_Word backend_libs__type_ctor_info__Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word backend_libs__type_ctor_info__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 7)));

          {
            mercury__set__insert_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_93_93, ((MR_Box) ((MR_Integer) 2)), backend_libs__type_ctor_info__STATE_VARIABLE_Flags_81_81, &backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83);
          }
          switch (backend_libs__type_ctor_info__BodyReservedTag_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__set__insert_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_93_93, ((MR_Box) ((MR_Integer) 0)), backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83, &backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_81_81;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_81_81;
            break;
          case (MR_Integer) 1:
            backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_81_81;
            break;
        }
        break;
    }
    {
      backend_libs__type_ctor_info__TypeCtorData_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 0) = ((MR_Box) ((MR_Integer) 17));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 1) = ((MR_Box) (backend_libs__type_ctor_info__ModuleName_8));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 2) = ((MR_Box) (backend_libs__type_ctor_info__TypeName_9));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_10));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 4) = ((MR_Box) (backend_libs__type_ctor_info__UnifyUniv_21));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 5) = ((MR_Box) (backend_libs__type_ctor_info__CompareUniv_22));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 6) = ((MR_Box) (backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 7) = ((MR_Box) (backend_libs__type_ctor_info__Details_28));
    }
    *backend_libs__type_ctor_info__RttiData_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__type_ctor_info__TypeCtorData_74);
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_7(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv6_STATE_VARIABLE_NameTable_13;

    {
      backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv6_STATE_VARIABLE_NameTable_13);
    }
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv6_STATE_VARIABLE_NameTable_13));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_6(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__746__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_5(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv4_STATE_VARIABLE_NameTable_11;

    {
      backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv4_STATE_VARIABLE_NameTable_11);
    }
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv4_STATE_VARIABLE_NameTable_11));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__738__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv2_STATE_VARIABLE_PtagTable_19;

    {
      backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv2_STATE_VARIABLE_PtagTable_19);
    }
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv2_STATE_VARIABLE_PtagTable_19));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv1_ResFunctor_3;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__is_reserved_functor_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv1_ResFunctor_3);
    }
    if (backend_libs__type_ctor_info__succeeded)
      {
        *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv1_ResFunctor_3));
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
      }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv0_DuFunctor_3;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__is_du_functor_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv0_DuFunctor_3);
    }
    if (backend_libs__type_ctor_info__succeeded)
      {
        *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv0_DuFunctor_3));
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
      }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
  MR_Word backend_libs__type_ctor_info__Ctors_10,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
  MR_Word backend_libs__type_ctor_info__ModuleInfo_15,
  MR_Word * backend_libs__type_ctor_info__Details_16)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_45_45;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_46_46;
    MR_Word backend_libs__type_ctor_info__MaybeResFunctors_17;
    MR_Word backend_libs__type_ctor_info__DuFunctors_18;
    MR_Word backend_libs__type_ctor_info__ResFunctors_19;
    MR_Word backend_libs__type_ctor_info__DuPtagTable_20;
    MR_Word backend_libs__type_ctor_info__FunctorNumberMap_21;
    MR_Word backend_libs__type_ctor_info__Var_30;
    MR_Box backend_libs__type_ctor_info__conv3_DuPtagTable_20;

    {
      backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(backend_libs__type_ctor_info__TypeCtor_9, backend_libs__type_ctor_info__Ctors_10, (MR_Integer) 0, backend_libs__type_ctor_info__ConsTagMap_11, backend_libs__type_ctor_info__TypeArity_12, backend_libs__type_ctor_info__ModuleInfo_15, &backend_libs__type_ctor_info__MaybeResFunctors_17);
    }
    backend_libs__type_ctor_info__TypeCtorInfo_45_45 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
    backend_libs__type_ctor_info__TypeCtorInfo_46_46 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
    {
      backend_libs__type_ctor_info__DuFunctors_18 = mercury__list__filter_map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_45_45, backend_libs__type_ctor_info__TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[26], backend_libs__type_ctor_info__MaybeResFunctors_17);
    }
    {
      backend_libs__type_ctor_info__ResFunctors_19 = mercury__list__filter_map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_45_45, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[27], backend_libs__type_ctor_info__MaybeResFunctors_17);
    }
    {
      backend_libs__type_ctor_info__Var_30 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0);
    }
    {
      mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[4], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[28], backend_libs__type_ctor_info__DuFunctors_18, ((MR_Box) (backend_libs__type_ctor_info__Var_30)), &backend_libs__type_ctor_info__conv3_DuPtagTable_20);
    }
    backend_libs__type_ctor_info__DuPtagTable_20 = ((MR_Word) backend_libs__type_ctor_info__conv3_DuPtagTable_20);
    {
      backend_libs__type_ctor_info__FunctorNumberMap_21 = backend_libs__type_ctor_info__make_functor_number_map_1_f_0(backend_libs__type_ctor_info__Ctors_10);
    }
    if ((backend_libs__type_ctor_info__ResFunctors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word backend_libs__type_ctor_info__DuNameOrderedMap_22;
        MR_Word backend_libs__type_ctor_info__Var_38;
        MR_Word backend_libs__type_ctor_info__Var_44;
        MR_Box backend_libs__type_ctor_info__conv5_DuNameOrderedMap_22;

        {
          backend_libs__type_ctor_info__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_38, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[13]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_4));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_38, 3) = ((MR_Box) (backend_libs__type_ctor_info__ReservedAddr_14));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_38, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_38, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_details\'/8", (MR_String) "ReservedAddr is not does_not_use_reserved_addr");
        }
        {
          backend_libs__type_ctor_info__Var_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5]);
        }
        {
          mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[6], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[29], backend_libs__type_ctor_info__DuFunctors_18, ((MR_Box) (backend_libs__type_ctor_info__Var_44)), &backend_libs__type_ctor_info__conv5_DuNameOrderedMap_22);
        }
        backend_libs__type_ctor_info__DuNameOrderedMap_22 = ((MR_Word) backend_libs__type_ctor_info__conv5_DuNameOrderedMap_22);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__type_ctor_info__Details_16 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_13));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__DuFunctors_18));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__DuPtagTable_20));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__DuNameOrderedMap_22));
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_21));
        }
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__ResNameOrderedMap_25;
        MR_Word backend_libs__type_ctor_info__Var_31;
        MR_Word backend_libs__type_ctor_info__Var_37;
        MR_Box backend_libs__type_ctor_info__conv7_ResNameOrderedMap_25;

        {
          backend_libs__type_ctor_info__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_31, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[13]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_31, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_6));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_31, 3) = ((MR_Box) (backend_libs__type_ctor_info__ReservedAddr_14));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_31, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_31, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_details\'/8", (MR_String) "ReservedAddr is not uses_reserved_addr");
        }
        {
          backend_libs__type_ctor_info__Var_37 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7]);
        }
        {
          mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_45_45, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[8], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[30], backend_libs__type_ctor_info__MaybeResFunctors_17, ((MR_Box) (backend_libs__type_ctor_info__Var_37)), &backend_libs__type_ctor_info__conv7_ResNameOrderedMap_25);
        }
        backend_libs__type_ctor_info__ResNameOrderedMap_25 = ((MR_Word) backend_libs__type_ctor_info__conv7_ResNameOrderedMap_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__type_ctor_info__Details_16 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_13));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctors_17));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__ResFunctors_19));
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__DuPtagTable_20));
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__ResNameOrderedMap_25));
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_21));
        }
      }
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv0_LambdaHeadVar__2_11;

    {
      backend_libs__type_ctor_info__conv0_LambdaHeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1053__1_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv0_LambdaHeadVar__2_11));
    return backend_libs__type_ctor_info__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0(
  MR_Word backend_libs__type_ctor_info__Ctors_3)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Map_4;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
    MR_Word backend_libs__type_ctor_info__TypeInfo_33_33 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_35_35;
    MR_Word backend_libs__type_ctor_info__CtorNames_5;
    MR_Word backend_libs__type_ctor_info__SortedNameArityMap_7;
    MR_Word backend_libs__type_ctor_info__Var_15;
    MR_Word backend_libs__type_ctor_info__Var_16;
    MR_Integer backend_libs__type_ctor_info__Var_18;
    MR_Integer backend_libs__type_ctor_info__Var_19;

    {
      backend_libs__type_ctor_info__CtorNames_5 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_32, backend_libs__type_ctor_info__TypeInfo_33_33, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[25], backend_libs__type_ctor_info__Ctors_3);
    }
    backend_libs__type_ctor_info__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      backend_libs__type_ctor_info__Var_15 = mercury__list__sort_1_f_0(backend_libs__type_ctor_info__TypeInfo_33_33, backend_libs__type_ctor_info__CtorNames_5);
    }
    {
      backend_libs__type_ctor_info__Var_19 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_32, backend_libs__type_ctor_info__Ctors_3);
    }
    backend_libs__type_ctor_info__Var_18 = (backend_libs__type_ctor_info__Var_19 - (MR_Integer) 1);
    {
      backend_libs__type_ctor_info__Var_16 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, backend_libs__type_ctor_info__Var_18);
    }
    {
      backend_libs__type_ctor_info__SortedNameArityMap_7 = mercury__map__from_corresponding_lists_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_33, backend_libs__type_ctor_info__TypeCtorInfo_35_35, backend_libs__type_ctor_info__Var_15, backend_libs__type_ctor_info__Var_16);
    }
    {
      backend_libs__type_ctor_info__Map_4 = mercury__map__apply_to_list_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_33, backend_libs__type_ctor_info__TypeCtorInfo_35_35, backend_libs__type_ctor_info__CtorNames_5, backend_libs__type_ctor_info__SortedNameArityMap_7);
    }
    return backend_libs__type_ctor_info__Map_4;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__804__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__803__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__802__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_4)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv2_ArgInfo_10;
    MR_Word backend_libs__type_ctor_info__conv1_STATE_VARIABLE_FunctorSubtypeInfo_30;

    {
      backend_libs__type_ctor_info__generate_du_arg_info_6_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv2_ArgInfo_10, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3), &backend_libs__type_ctor_info__conv1_STATE_VARIABLE_FunctorSubtypeInfo_30);
    }
    *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv2_ArgInfo_10));
    *backend_libs__type_ctor_info__wrapper_arg_4 = ((MR_Box) (backend_libs__type_ctor_info__conv1_STATE_VARIABLE_FunctorSubtypeInfo_30));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
  MR_Integer backend_libs__type_ctor_info__TypeArity_5,
  MR_Word backend_libs__type_ctor_info__ModuleInfo_6,
  MR_Word * backend_libs__type_ctor_info__HeadVar__7_7)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    if ((backend_libs__type_ctor_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__type_ctor_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_63_63;
        MR_Word backend_libs__type_ctor_info__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__Functors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__MaybeResFunctor_20;
        MR_Word backend_libs__type_ctor_info__MaybeResFunctors_21;
        MR_Word backend_libs__type_ctor_info__ExistTvars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 2)));
        MR_Word backend_libs__type_ctor_info__ConstructorArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 3)));
        MR_Integer backend_libs__type_ctor_info__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 4)));
        MR_String backend_libs__type_ctor_info__FunctorName_28;
        MR_Word backend_libs__type_ctor_info__ConsId_29;
        MR_Word backend_libs__type_ctor_info__ConsTag_30;
        MR_Word backend_libs__type_ctor_info__ConsRep_31;
        MR_Word backend_libs__type_ctor_info__ArgInfos_32;
        MR_Word backend_libs__type_ctor_info__FunctorSubtypeInfo_33;
        MR_Word backend_libs__type_ctor_info__MaybeExistInfo_34;
        MR_Integer backend_libs__type_ctor_info__Var_43;
        MR_Word backend_libs__type_ctor_info__Var_44;
        MR_Integer backend_libs__type_ctor_info__Var_61;
        MR_Word backend_libs__type_ctor_info___Ctxt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 5)));
        MR_Box backend_libs__type_ctor_info__conv0_ConsTag_30;
        MR_Box backend_libs__type_ctor_info__conv3_FunctorSubtypeInfo_33;

        {
          backend_libs__type_ctor_info__FunctorName_28 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_24);
        }
        backend_libs__type_ctor_info__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
        {
          backend_libs__type_ctor_info__Var_43 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_63_63, backend_libs__type_ctor_info__ConstructorArgs_25);
        }
        {
          backend_libs__type_ctor_info__ConsId_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 1) = ((MR_Box) (backend_libs__type_ctor_info__SymName_24));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 2) = ((MR_Box) (backend_libs__type_ctor_info__Var_43));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_1));
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__type_ctor_info__ConsTagMap_4, ((MR_Box) (backend_libs__type_ctor_info__ConsId_29)), &backend_libs__type_ctor_info__conv0_ConsTag_30);
        }
        backend_libs__type_ctor_info__ConsTag_30 = ((MR_Word) backend_libs__type_ctor_info__conv0_ConsTag_30);
        {
          backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(backend_libs__type_ctor_info__ConsTag_30, &backend_libs__type_ctor_info__ConsRep_31);
        }
        {
          backend_libs__type_ctor_info__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_44, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_44, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_44, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_5));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_44, 4) = ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_22));
        }
        {
          mercury__list__map_foldl_5_p_0(backend_libs__type_ctor_info__TypeCtorInfo_63_63, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_functor_subtype_info_0, backend_libs__type_ctor_info__Var_44, backend_libs__type_ctor_info__ConstructorArgs_25, &backend_libs__type_ctor_info__ArgInfos_32, ((MR_Box) ((MR_Integer) 0)), &backend_libs__type_ctor_info__conv3_FunctorSubtypeInfo_33);
        }
        backend_libs__type_ctor_info__FunctorSubtypeInfo_33 = ((MR_Word) backend_libs__type_ctor_info__conv3_FunctorSubtypeInfo_33);
        if ((backend_libs__type_ctor_info__ExistTvars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          backend_libs__type_ctor_info__MaybeExistInfo_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word backend_libs__type_ctor_info__ClassTable_37;
            MR_Word backend_libs__type_ctor_info__ExistInfo_38;

            {
              hlds__hlds_module__module_info_get_class_table_2_p_0(backend_libs__type_ctor_info__ModuleInfo_6, &backend_libs__type_ctor_info__ClassTable_37);
            }
            {
              backend_libs__type_ctor_info__generate_exist_into_4_p_0(backend_libs__type_ctor_info__ExistTvars_22, backend_libs__type_ctor_info__Constraints_23, backend_libs__type_ctor_info__ClassTable_37, &backend_libs__type_ctor_info__ExistInfo_38);
            }
            {
              backend_libs__type_ctor_info__MaybeExistInfo_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybeExistInfo_34, 0) = ((MR_Box) (backend_libs__type_ctor_info__ExistInfo_38));
            }
          }
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsRep_31)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word backend_libs__type_ctor_info__DuRep_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__ConsRep_31, (MR_Integer) 0)));
            MR_Word backend_libs__type_ctor_info__DuFunctor_40;

            {
              backend_libs__type_ctor_info__DuFunctor_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_40, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_28));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_40, 1) = ((MR_Box) (backend_libs__type_ctor_info__Arity_26));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_40, 2) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_40, 3) = ((MR_Box) (backend_libs__type_ctor_info__DuRep_39));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_40, 4) = ((MR_Box) (backend_libs__type_ctor_info__ArgInfos_32));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_40, 5) = ((MR_Box) (backend_libs__type_ctor_info__MaybeExistInfo_34));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_40, 6) = ((MR_Box) (backend_libs__type_ctor_info__FunctorSubtypeInfo_33));
            }
            backend_libs__type_ctor_info__MaybeResFunctor_20 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) backend_libs__type_ctor_info__DuFunctor_40);
          }
        else
          {
            MR_Word backend_libs__type_ctor_info__ResRep_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConsRep_31, (MR_Integer) 0)));
            MR_Word backend_libs__type_ctor_info__ResFunctor_42;
            MR_Word backend_libs__type_ctor_info__Var_46;
            MR_Word backend_libs__type_ctor_info__Var_51;
            MR_Word backend_libs__type_ctor_info__Var_56;

            {
              backend_libs__type_ctor_info__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_46, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[3]));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_46, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_46, 3) = ((MR_Box) (backend_libs__type_ctor_info__Arity_26));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_46, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_46, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad arity");
            }
            {
              backend_libs__type_ctor_info__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_51, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[9]));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_51, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_51, 3) = ((MR_Box) (backend_libs__type_ctor_info__ArgInfos_32));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_51, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad args");
            }
            {
              backend_libs__type_ctor_info__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_56, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[10]));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_56, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_56, 3) = ((MR_Box) (backend_libs__type_ctor_info__MaybeExistInfo_34));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_56, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_56, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad exist");
            }
            {
              backend_libs__type_ctor_info__ResFunctor_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_42, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_28));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_42, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_42, 2) = ((MR_Box) (backend_libs__type_ctor_info__ResRep_41));
            }
            backend_libs__type_ctor_info__MaybeResFunctor_20 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__type_ctor_info__ResFunctor_42);
          }
        backend_libs__type_ctor_info__Var_61 = (backend_libs__type_ctor_info__NextOrdinal_3 + (MR_Integer) 1);
        {
          backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(backend_libs__type_ctor_info__TypeCtor_1, backend_libs__type_ctor_info__Functors_15, backend_libs__type_ctor_info__Var_61, backend_libs__type_ctor_info__ConsTagMap_4, backend_libs__type_ctor_info__TypeArity_5, backend_libs__type_ctor_info__ModuleInfo_6, &backend_libs__type_ctor_info__MaybeResFunctors_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__type_ctor_info__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctor_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctors_21));
        }
      }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_5(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv8_LambdaHeadVar__2_47;

    {
      backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__927__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv8_LambdaHeadVar__2_47);
    }
    *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv8_LambdaHeadVar__2_47));
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv7_HeadVar__2_2;

    {
      backend_libs__type_ctor_info__conv7_HeadVar__2_2 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv7_HeadVar__2_2));
    return backend_libs__type_ctor_info__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv5_STATE_VARIABLE_LocnMap_23;

    {
      backend_libs__type_ctor_info__find_type_info_index_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv5_STATE_VARIABLE_LocnMap_23);
    }
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv5_STATE_VARIABLE_LocnMap_23));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Integer backend_libs__type_ctor_info__conv2_LambdaHeadVar__3_39;
    MR_Word backend_libs__type_ctor_info__conv1_LambdaHeadVar__5_41;

    {
      backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__917__1_5_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Integer) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv2_LambdaHeadVar__3_39, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_4), &backend_libs__type_ctor_info__conv1_LambdaHeadVar__5_41);
    }
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv2_LambdaHeadVar__3_39));
    *backend_libs__type_ctor_info__wrapper_arg_5 = ((MR_Box) (backend_libs__type_ctor_info__conv1_LambdaHeadVar__5_41));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv0_LambdaHeadVar__2_34;

    {
      backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__909__1_2_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv0_LambdaHeadVar__2_34);
    }
    *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv0_LambdaHeadVar__2_34));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0(
  MR_Word backend_libs__type_ctor_info__ExistTVars_5,
  MR_Word backend_libs__type_ctor_info__Constraints_6,
  MR_Word backend_libs__type_ctor_info__ClassTable_7,
  MR_Word * backend_libs__type_ctor_info__ExistInfo_8)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    MR_Word backend_libs__type_ctor_info__TypeInfo_60_60;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_61_61;
    MR_Word backend_libs__type_ctor_info__TypeInfo_65_65;
    MR_Word backend_libs__type_ctor_info__ConstrainedTVars0_12;
    MR_Word backend_libs__type_ctor_info__ConstrainedTVars1_13;
    MR_Word backend_libs__type_ctor_info__ConstrainedTVars2_14;
    MR_Word backend_libs__type_ctor_info__UnconstrainedTVars_15;
    MR_Word backend_libs__type_ctor_info__ConstrainedTVars_16;
    MR_Word backend_libs__type_ctor_info__LocnMap0_17;
    MR_Integer backend_libs__type_ctor_info__TIsPlain_24;
    MR_Word backend_libs__type_ctor_info__LocnMap1_25;
    MR_Integer backend_libs__type_ctor_info__AllTIs_26;
    MR_Integer backend_libs__type_ctor_info__TIsInTCIs_27;
    MR_Word backend_libs__type_ctor_info__LocnMap_28;
    MR_Word backend_libs__type_ctor_info__TCConstraints_29;
    MR_Word backend_libs__type_ctor_info__ExistLocns_31;
    MR_Word backend_libs__type_ctor_info__Var_43;
    MR_Word backend_libs__type_ctor_info__Var_45;
    MR_Box backend_libs__type_ctor_info__conv4_TIsPlain_24;
    MR_Box backend_libs__type_ctor_info__conv3_LocnMap1_25;
    MR_Box backend_libs__type_ctor_info__conv6_LocnMap_28;

    {
      mercury__list__map_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_57_57, (MR_Word) &backend_libs__type_ctor_info_scalar_common_1[5], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[22], backend_libs__type_ctor_info__Constraints_6, &backend_libs__type_ctor_info__ConstrainedTVars0_12);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__type_ctor_info__ConstrainedTVars0_12, &backend_libs__type_ctor_info__ConstrainedTVars1_13);
    }
    {
      parse_tree__prog_type__type_vars_list_2_p_0(backend_libs__type_ctor_info__ConstrainedTVars1_13, &backend_libs__type_ctor_info__ConstrainedTVars2_14);
    }
    backend_libs__type_ctor_info__TypeInfo_60_60 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0];
    {
      mercury__list__delete_elems_3_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__ExistTVars_5, backend_libs__type_ctor_info__ConstrainedTVars2_14, &backend_libs__type_ctor_info__UnconstrainedTVars_15);
    }
    {
      mercury__list__delete_elems_3_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__ExistTVars_5, backend_libs__type_ctor_info__UnconstrainedTVars_15, &backend_libs__type_ctor_info__ConstrainedTVars_16);
    }
    backend_libs__type_ctor_info__TypeCtorInfo_61_61 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0;
    {
      mercury__map__init_1_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__TypeCtorInfo_61_61, &backend_libs__type_ctor_info__LocnMap0_17);
    }
    backend_libs__type_ctor_info__TypeInfo_65_65 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[9];
    {
      mercury__list__foldl2_6_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__type_ctor_info__TypeInfo_65_65, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[23], backend_libs__type_ctor_info__UnconstrainedTVars_15, ((MR_Box) ((MR_Integer) 0)), &backend_libs__type_ctor_info__conv4_TIsPlain_24, ((MR_Box) (backend_libs__type_ctor_info__LocnMap0_17)), &backend_libs__type_ctor_info__conv3_LocnMap1_25);
    }
    backend_libs__type_ctor_info__TIsPlain_24 = ((MR_Integer) backend_libs__type_ctor_info__conv4_TIsPlain_24);
    backend_libs__type_ctor_info__LocnMap1_25 = ((MR_Word) backend_libs__type_ctor_info__conv3_LocnMap1_25);
    {
      mercury__list__length_2_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__ExistTVars_5, &backend_libs__type_ctor_info__AllTIs_26);
    }
    backend_libs__type_ctor_info__TIsInTCIs_27 = (backend_libs__type_ctor_info__AllTIs_26 - backend_libs__type_ctor_info__TIsPlain_24);
    {
      backend_libs__type_ctor_info__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_43, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_43, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_3));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_43, 3) = ((MR_Box) (backend_libs__type_ctor_info__Constraints_6));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_43, 4) = ((MR_Box) (backend_libs__type_ctor_info__ClassTable_7));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_43, 5) = ((MR_Box) (backend_libs__type_ctor_info__TIsPlain_24));
    }
    {
      mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__TypeInfo_65_65, backend_libs__type_ctor_info__Var_43, backend_libs__type_ctor_info__ConstrainedTVars_16, ((MR_Box) (backend_libs__type_ctor_info__LocnMap1_25)), &backend_libs__type_ctor_info__conv6_LocnMap_28);
    }
    backend_libs__type_ctor_info__LocnMap_28 = ((MR_Word) backend_libs__type_ctor_info__conv6_LocnMap_28);
    {
      backend_libs__type_ctor_info__TCConstraints_29 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_57_57, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[24], backend_libs__type_ctor_info__Constraints_6);
    }
    {
      backend_libs__type_ctor_info__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_45, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_45, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_5));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_45, 3) = ((MR_Box) (backend_libs__type_ctor_info__LocnMap_28));
    }
    {
      mercury__list__map_3_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__TypeCtorInfo_61_61, backend_libs__type_ctor_info__Var_45, backend_libs__type_ctor_info__ExistTVars_5, &backend_libs__type_ctor_info__ExistLocns_31);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *backend_libs__type_ctor_info__ExistInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TIsPlain_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__TIsInTCIs_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__TCConstraints_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__ExistLocns_31));
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(
  MR_Word backend_libs__type_ctor_info__ConsTag_3,
  MR_Word * backend_libs__type_ctor_info__ConsRep_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__type_ctor_info__succeeded;

        switch (MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(backend_libs__type_ctor_info__ConsTag_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *backend_libs__type_ctor_info__ConsRep_4 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_6[0]);
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
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 0)))) {
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
                  MR_Word backend_libs__type_ctor_info__Var_43;
                  MR_Integer backend_libs__type_ctor_info__ConsPtag_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

                  {
                    backend_libs__type_ctor_info__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_43, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_45));
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__Var_43));
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word backend_libs__type_ctor_info__Var_42;
                  MR_Integer backend_libs__type_ctor_info__ConsPtag_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

                  {
                    backend_libs__type_ctor_info__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_42, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_47));
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__Var_42));
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word backend_libs__type_ctor_info__Var_38;
                  MR_Word backend_libs__type_ctor_info__Var_39;
                  MR_Integer backend_libs__type_ctor_info__ConsPtag_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));
                  MR_Integer backend_libs__type_ctor_info__ConsStag_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 2)));

                  {
                    backend_libs__type_ctor_info__Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__Var_39, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsStag_51));
                  }
                  {
                    backend_libs__type_ctor_info__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_38, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_50));
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__Var_39));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__Var_38));
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Integer backend_libs__type_ctor_info__ConsStag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 2)));
                  MR_Word backend_libs__type_ctor_info__Var_40;
                  MR_Word backend_libs__type_ctor_info__Var_41;
                  MR_Integer backend_libs__type_ctor_info__ConsPtag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

                  {
                    backend_libs__type_ctor_info__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Var_41, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsStag_7));
                  }
                  {
                    backend_libs__type_ctor_info__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_40, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_49));
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_40, 1) = ((MR_Box) (backend_libs__type_ctor_info__Var_41));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__Var_40));
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word backend_libs__type_ctor_info__ReservedAddr_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__ReservedAddr_8));
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word backend_libs__type_ctor_info__ThisTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 2)));
                  MR_Word backend_libs__type_ctor_info___RAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word backend_libs__type_ctor_info__next_value_of_ConsTag_3 = backend_libs__type_ctor_info__ThisTag_10;

                    backend_libs__type_ctor_info__ConsTag_3 = backend_libs__type_ctor_info__next_value_of_ConsTag_3;
                  }
                  continue;
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv4_LambdaHeadVar__2_11;

    {
      backend_libs__type_ctor_info__conv4_LambdaHeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1053__1_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv4_LambdaHeadVar__2_11));
    return backend_libs__type_ctor_info__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv1_STATE_VARIABLE_OrdinalMap_13;
    MR_Word backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_15;

    {
      backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv1_STATE_VARIABLE_OrdinalMap_13, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_4), &backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_15);
    }
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv1_STATE_VARIABLE_OrdinalMap_13));
    *backend_libs__type_ctor_info__wrapper_arg_5 = ((MR_Box) (backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_15));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_8,
  MR_Word backend_libs__type_ctor_info__Lang_9,
  MR_Word backend_libs__type_ctor_info__Ctors_10,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
  MR_Word backend_libs__type_ctor_info__ReserveTag_12,
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
  MR_Word * backend_libs__type_ctor_info__Details_14)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_27_27;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_32_65;
    MR_Word backend_libs__type_ctor_info__TypeInfo_33_66;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_35_68;
    MR_Word backend_libs__type_ctor_info__ForeignEnumFunctors_15;
    MR_Word backend_libs__type_ctor_info__OrdinalMap0_16;
    MR_Word backend_libs__type_ctor_info__NameMap0_17;
    MR_Word backend_libs__type_ctor_info__OrdinalMap_18;
    MR_Word backend_libs__type_ctor_info__NameMap_19;
    MR_Word backend_libs__type_ctor_info__FunctorNumberMap_20;
    MR_Word backend_libs__type_ctor_info__CtorNames_38;
    MR_Word backend_libs__type_ctor_info__SortedNameArityMap_40;
    MR_Word backend_libs__type_ctor_info__Var_48;
    MR_Word backend_libs__type_ctor_info__Var_49;
    MR_Integer backend_libs__type_ctor_info__Var_51;
    MR_Integer backend_libs__type_ctor_info__Var_52;
    MR_Box backend_libs__type_ctor_info__conv3_OrdinalMap_18;
    MR_Box backend_libs__type_ctor_info__conv2_NameMap_19;

    switch (backend_libs__type_ctor_info__ReserveTag_12) {
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
    {
      backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(backend_libs__type_ctor_info__TypeCtor_8, backend_libs__type_ctor_info__Lang_9, backend_libs__type_ctor_info__Ctors_10, (MR_Integer) 0, backend_libs__type_ctor_info__ConsTagMap_11, &backend_libs__type_ctor_info__ForeignEnumFunctors_15);
    }
    backend_libs__type_ctor_info__TypeCtorInfo_27_27 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
    {
      backend_libs__type_ctor_info__OrdinalMap0_16 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__type_ctor_info__TypeCtorInfo_27_27);
    }
    {
      backend_libs__type_ctor_info__NameMap0_17 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_27_27);
    }
    {
      mercury__list__foldl2_6_p_0(backend_libs__type_ctor_info__TypeCtorInfo_27_27, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[2], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[3], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[20], backend_libs__type_ctor_info__ForeignEnumFunctors_15, ((MR_Box) (backend_libs__type_ctor_info__OrdinalMap0_16)), &backend_libs__type_ctor_info__conv3_OrdinalMap_18, ((MR_Box) (backend_libs__type_ctor_info__NameMap0_17)), &backend_libs__type_ctor_info__conv2_NameMap_19);
    }
    backend_libs__type_ctor_info__OrdinalMap_18 = ((MR_Word) backend_libs__type_ctor_info__conv3_OrdinalMap_18);
    backend_libs__type_ctor_info__NameMap_19 = ((MR_Word) backend_libs__type_ctor_info__conv2_NameMap_19);
    backend_libs__type_ctor_info__TypeCtorInfo_32_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
    backend_libs__type_ctor_info__TypeInfo_33_66 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
    {
      backend_libs__type_ctor_info__CtorNames_38 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_65, backend_libs__type_ctor_info__TypeInfo_33_66, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[21], backend_libs__type_ctor_info__Ctors_10);
    }
    backend_libs__type_ctor_info__TypeCtorInfo_35_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      backend_libs__type_ctor_info__Var_48 = mercury__list__sort_1_f_0(backend_libs__type_ctor_info__TypeInfo_33_66, backend_libs__type_ctor_info__CtorNames_38);
    }
    {
      backend_libs__type_ctor_info__Var_52 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_65, backend_libs__type_ctor_info__Ctors_10);
    }
    backend_libs__type_ctor_info__Var_51 = (backend_libs__type_ctor_info__Var_52 - (MR_Integer) 1);
    {
      backend_libs__type_ctor_info__Var_49 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, backend_libs__type_ctor_info__Var_51);
    }
    {
      backend_libs__type_ctor_info__SortedNameArityMap_40 = mercury__map__from_corresponding_lists_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_66, backend_libs__type_ctor_info__TypeCtorInfo_35_68, backend_libs__type_ctor_info__Var_48, backend_libs__type_ctor_info__Var_49);
    }
    {
      backend_libs__type_ctor_info__FunctorNumberMap_20 = mercury__map__apply_to_list_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_66, backend_libs__type_ctor_info__TypeCtorInfo_35_68, backend_libs__type_ctor_info__CtorNames_38, backend_libs__type_ctor_info__SortedNameArityMap_40);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *backend_libs__type_ctor_info__Details_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__Lang_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_13));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctors_15));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__OrdinalMap_18));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__NameMap_19));
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_20));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__657__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__651__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__649__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__647__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
  MR_Word backend_libs__type_ctor_info__Lang_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_4,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_5,
  MR_Word * backend_libs__type_ctor_info__HeadVar__6_6)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    if ((backend_libs__type_ctor_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__type_ctor_info__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__type_ctor_info__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__Functors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__ForeignEnumFunctor_17;
        MR_Word backend_libs__type_ctor_info__ForeignEnumFunctors_18;
        MR_Word backend_libs__type_ctor_info__ExistTvars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 2)));
        MR_Word backend_libs__type_ctor_info__FunctorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 3)));
        MR_Integer backend_libs__type_ctor_info__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 4)));
        MR_Word backend_libs__type_ctor_info__ConsId_25;
        MR_Word backend_libs__type_ctor_info__ConsTag_26;
        MR_String backend_libs__type_ctor_info__ForeignTagValue_29;
        MR_String backend_libs__type_ctor_info__FunctorName_61;
        MR_Word backend_libs__type_ctor_info__Var_62;
        MR_Word backend_libs__type_ctor_info__Var_67;
        MR_Word backend_libs__type_ctor_info__Var_72;
        MR_Integer backend_libs__type_ctor_info__Var_77;
        MR_Integer backend_libs__type_ctor_info__Var_85;
        MR_Word backend_libs__type_ctor_info___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 5)));
        MR_Box backend_libs__type_ctor_info__conv0_ConsTag_26;

        {
          backend_libs__type_ctor_info__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_62, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_62, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_62, 3) = ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_19));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_62, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "existential arguments in functor in foreign enum");
        }
        {
          backend_libs__type_ctor_info__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_67, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_67, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_67, 3) = ((MR_Box) (backend_libs__type_ctor_info__Constraints_20));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_67, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "class constraints on functor in foreign enum");
        }
        {
          backend_libs__type_ctor_info__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_72, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_72, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_72, 3) = ((MR_Box) (backend_libs__type_ctor_info__Arity_23));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_72, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_72, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "functor in foreign enum has nonzero arity");
        }
        {
          backend_libs__type_ctor_info__Var_77 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, backend_libs__type_ctor_info__FunctorArgs_22);
        }
        {
          backend_libs__type_ctor_info__ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__SymName_21));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 2) = ((MR_Box) (backend_libs__type_ctor_info__Var_77));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_1));
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__type_ctor_info__ConsTagMap_5, ((MR_Box) (backend_libs__type_ctor_info__ConsId_25)), &backend_libs__type_ctor_info__conv0_ConsTag_26);
        }
        backend_libs__type_ctor_info__ConsTag_26 = ((MR_Word) backend_libs__type_ctor_info__conv0_ConsTag_26);
        switch (MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_26)) {
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
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_26, (MR_Integer) 0)))) {
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
                  MR_Word backend_libs__type_ctor_info__ForeignTagLang_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_26, (MR_Integer) 1)));
                  MR_Word backend_libs__type_ctor_info__Var_81;

                  backend_libs__type_ctor_info__ForeignTagValue_29 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_26, (MR_Integer) 2)));
                  {
                    backend_libs__type_ctor_info__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_81, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[6]));
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_81, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4));
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_81, 3) = ((MR_Box) (backend_libs__type_ctor_info__Lang_2));
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_81, 4) = ((MR_Box) (backend_libs__type_ctor_info__ForeignTagLang_27));
                  }
                  {
                    mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_81, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "language mismatch between foreign tag and foreign enum");
                  }
                }
                break;
            }
            break;
        }
        {
          backend_libs__type_ctor_info__FunctorName_61 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_21);
        }
        {
          backend_libs__type_ctor_info__ForeignEnumFunctor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_17, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_61));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_17, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_4));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_17, 2) = ((MR_Box) (backend_libs__type_ctor_info__ForeignTagValue_29));
        }
        backend_libs__type_ctor_info__Var_85 = (backend_libs__type_ctor_info__NextOrdinal_4 + (MR_Integer) 1);
        {
          backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(backend_libs__type_ctor_info__TypeCtor_1, backend_libs__type_ctor_info__Lang_2, backend_libs__type_ctor_info__Functors_14, backend_libs__type_ctor_info__Var_85, backend_libs__type_ctor_info__ConsTagMap_5, &backend_libs__type_ctor_info__ForeignEnumFunctors_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__type_ctor_info__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctor_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctors_18));
        }
      }
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
{
  {
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv4_LambdaHeadVar__2_11;

    {
      backend_libs__type_ctor_info__conv4_LambdaHeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1053__1_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv4_LambdaHeadVar__2_11));
    return backend_libs__type_ctor_info__wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5)
{
  {
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
    MR_Word backend_libs__type_ctor_info__conv1_STATE_VARIABLE_ValueMap_12;
    MR_Word backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_14;

    {
      backend_libs__type_ctor_info__make_enum_maps_5_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv1_STATE_VARIABLE_ValueMap_12, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_4), &backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_14);
    }
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv1_STATE_VARIABLE_ValueMap_12));
    *backend_libs__type_ctor_info__wrapper_arg_5 = ((MR_Box) (backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_14));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_7,
  MR_Word backend_libs__type_ctor_info__Ctors_8,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_9,
  MR_Word backend_libs__type_ctor_info__ReserveTag_10,
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
  MR_Word * backend_libs__type_ctor_info__Details_12)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_35_35;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_32_75;
    MR_Word backend_libs__type_ctor_info__TypeInfo_33_76;
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_35_78;
    MR_Word backend_libs__type_ctor_info__EnumFunctors_13;
    MR_Word backend_libs__type_ctor_info__ValueMap0_14;
    MR_Word backend_libs__type_ctor_info__NameMap0_15;
    MR_Word backend_libs__type_ctor_info__ValueMap_16;
    MR_Word backend_libs__type_ctor_info__NameMap_17;
    MR_Word backend_libs__type_ctor_info__IsDummy_19;
    MR_Word backend_libs__type_ctor_info__FunctorNumberMap_23;
    MR_Word backend_libs__type_ctor_info__CtorNames_48;
    MR_Word backend_libs__type_ctor_info__SortedNameArityMap_50;
    MR_Word backend_libs__type_ctor_info__Var_58;
    MR_Word backend_libs__type_ctor_info__Var_59;
    MR_Integer backend_libs__type_ctor_info__Var_61;
    MR_Integer backend_libs__type_ctor_info__Var_62;
    MR_Box backend_libs__type_ctor_info__conv3_ValueMap_16;
    MR_Box backend_libs__type_ctor_info__conv2_NameMap_17;

    switch (backend_libs__type_ctor_info__ReserveTag_10) {
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
    {
      backend_libs__type_ctor_info__make_enum_functors_5_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_8, (MR_Integer) 0, backend_libs__type_ctor_info__ConsTagMap_9, &backend_libs__type_ctor_info__EnumFunctors_13);
    }
    backend_libs__type_ctor_info__TypeCtorInfo_35_35 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
    {
      backend_libs__type_ctor_info__ValueMap0_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__type_ctor_info__TypeCtorInfo_35_35);
    }
    {
      backend_libs__type_ctor_info__NameMap0_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_35_35);
    }
    {
      mercury__list__foldl2_6_p_0(backend_libs__type_ctor_info__TypeCtorInfo_35_35, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[0], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[1], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[18], backend_libs__type_ctor_info__EnumFunctors_13, ((MR_Box) (backend_libs__type_ctor_info__ValueMap0_14)), &backend_libs__type_ctor_info__conv3_ValueMap_16, ((MR_Box) (backend_libs__type_ctor_info__NameMap0_15)), &backend_libs__type_ctor_info__conv2_NameMap_17);
    }
    backend_libs__type_ctor_info__ValueMap_16 = ((MR_Word) backend_libs__type_ctor_info__conv3_ValueMap_16);
    backend_libs__type_ctor_info__NameMap_17 = ((MR_Word) backend_libs__type_ctor_info__conv2_NameMap_17);
    if ((backend_libs__type_ctor_info__Ctors_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/6", (MR_String) "enum with no ctors");
          return;
        }
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Ctors_8, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Ctors_8, (MR_Integer) 0)));

        if ((backend_libs__type_ctor_info__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          backend_libs__type_ctor_info__IsDummy_19 = (MR_Integer) 1;
        else
          backend_libs__type_ctor_info__IsDummy_19 = (MR_Integer) 0;
      }
    backend_libs__type_ctor_info__TypeCtorInfo_32_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
    backend_libs__type_ctor_info__TypeInfo_33_76 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
    {
      backend_libs__type_ctor_info__CtorNames_48 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_75, backend_libs__type_ctor_info__TypeInfo_33_76, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[19], backend_libs__type_ctor_info__Ctors_8);
    }
    backend_libs__type_ctor_info__TypeCtorInfo_35_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      backend_libs__type_ctor_info__Var_58 = mercury__list__sort_1_f_0(backend_libs__type_ctor_info__TypeInfo_33_76, backend_libs__type_ctor_info__CtorNames_48);
    }
    {
      backend_libs__type_ctor_info__Var_62 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_75, backend_libs__type_ctor_info__Ctors_8);
    }
    backend_libs__type_ctor_info__Var_61 = (backend_libs__type_ctor_info__Var_62 - (MR_Integer) 1);
    {
      backend_libs__type_ctor_info__Var_59 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, backend_libs__type_ctor_info__Var_61);
    }
    {
      backend_libs__type_ctor_info__SortedNameArityMap_50 = mercury__map__from_corresponding_lists_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_76, backend_libs__type_ctor_info__TypeCtorInfo_35_78, backend_libs__type_ctor_info__Var_58, backend_libs__type_ctor_info__Var_59);
    }
    {
      backend_libs__type_ctor_info__FunctorNumberMap_23 = mercury__map__apply_to_list_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_76, backend_libs__type_ctor_info__TypeCtorInfo_35_78, backend_libs__type_ctor_info__CtorNames_48, backend_libs__type_ctor_info__SortedNameArityMap_50);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *backend_libs__type_ctor_info__Details_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EnumFunctors_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__ValueMap_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__NameMap_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__IsDummy_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_23));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_4(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__588__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_3(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__584__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_2(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__582__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__580__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0(
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_5)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    if ((backend_libs__type_ctor_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__type_ctor_info__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__type_ctor_info__Functor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__Functors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__EnumFunctor_14;
        MR_Word backend_libs__type_ctor_info__EnumFunctors_15;
        MR_Word backend_libs__type_ctor_info__ExistTvars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 2)));
        MR_Word backend_libs__type_ctor_info__FunctorArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 3)));
        MR_Integer backend_libs__type_ctor_info__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 4)));
        MR_Word backend_libs__type_ctor_info__ConsId_22;
        MR_Word backend_libs__type_ctor_info__ConsTag_23;
        MR_String backend_libs__type_ctor_info__FunctorName_24;
        MR_Word backend_libs__type_ctor_info__Var_25;
        MR_Word backend_libs__type_ctor_info__Var_30;
        MR_Word backend_libs__type_ctor_info__Var_35;
        MR_Integer backend_libs__type_ctor_info__Var_40;
        MR_Word backend_libs__type_ctor_info__Var_41;
        MR_Word backend_libs__type_ctor_info__Var_45;
        MR_Word backend_libs__type_ctor_info__Var_46;
        MR_Integer backend_libs__type_ctor_info__Var_47;
        MR_Word backend_libs__type_ctor_info___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 5)));
        MR_Box backend_libs__type_ctor_info__conv0_ConsTag_23;

        {
          backend_libs__type_ctor_info__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_25, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_1));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_25, 3) = ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_16));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_25, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "existential arguments in functor in enum");
        }
        {
          backend_libs__type_ctor_info__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_30, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_30, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_30, 3) = ((MR_Box) (backend_libs__type_ctor_info__Constraints_17));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_30, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "class constraints on functor in enum");
        }
        {
          backend_libs__type_ctor_info__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_35, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_35, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_3));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_35, 3) = ((MR_Box) (backend_libs__type_ctor_info__Arity_20));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_35, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_35, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "functor in enum has nonzero arity");
        }
        {
          backend_libs__type_ctor_info__Var_40 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, backend_libs__type_ctor_info__FunctorArgs_19);
        }
        {
          backend_libs__type_ctor_info__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 1) = ((MR_Box) (backend_libs__type_ctor_info__SymName_18));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 2) = ((MR_Box) (backend_libs__type_ctor_info__Var_40));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_1));
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__type_ctor_info__ConsTagMap_4, ((MR_Box) (backend_libs__type_ctor_info__ConsId_22)), &backend_libs__type_ctor_info__conv0_ConsTag_23);
        }
        backend_libs__type_ctor_info__ConsTag_23 = ((MR_Word) backend_libs__type_ctor_info__conv0_ConsTag_23);
        {
          backend_libs__type_ctor_info__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_46, 0) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
        }
        {
          backend_libs__type_ctor_info__Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Var_45, 1) = ((MR_Box) (backend_libs__type_ctor_info__Var_46));
        }
        {
          backend_libs__type_ctor_info__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_41, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_41, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_4));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_41, 3) = ((MR_Box) (backend_libs__type_ctor_info__ConsTag_23));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_41, 4) = ((MR_Box) (backend_libs__type_ctor_info__Var_45));
        }
        {
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_41, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "mismatch on constant assigned to functor in enum");
        }
        {
          backend_libs__type_ctor_info__FunctorName_24 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_18);
        }
        {
          backend_libs__type_ctor_info__EnumFunctor_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_14, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_24));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_14, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
        }
        backend_libs__type_ctor_info__Var_47 = (backend_libs__type_ctor_info__NextOrdinal_3 + (MR_Integer) 1);
        {
          backend_libs__type_ctor_info__make_enum_functors_5_p_0(backend_libs__type_ctor_info__TypeCtor_1, backend_libs__type_ctor_info__Functors_11, backend_libs__type_ctor_info__Var_47, backend_libs__type_ctor_info__ConsTagMap_4, &backend_libs__type_ctor_info__EnumFunctors_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__type_ctor_info__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__EnumFunctor_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EnumFunctors_15));
        }
      }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_6_p_0(
  MR_Integer backend_libs__type_ctor_info__TypeArity_7,
  MR_Word backend_libs__type_ctor_info__SymName_8,
  MR_Word backend_libs__type_ctor_info__ArgType_9,
  MR_Word backend_libs__type_ctor_info__MaybeArgName_10,
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
  MR_Word * backend_libs__type_ctor_info__Details_12)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_String backend_libs__type_ctor_info__FunctorName_13;
    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_16;
    MR_Word backend_libs__type_ctor_info__FunctorSubtypeInfo_22;
    MR_Word backend_libs__type_ctor_info__Functor_23;
    MR_Word backend_libs__type_ctor_info__Var_24;
    MR_Word backend_libs__type_ctor_info__Var_17;
    MR_Word backend_libs__type_ctor_info__Var_18;
    MR_Word backend_libs__type_ctor_info__Var_20;
    MR_Word backend_libs__type_ctor_info__Var_19;

    {
      backend_libs__type_ctor_info__FunctorName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_8);
    }
    {
      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__ArgType_9, backend_libs__type_ctor_info__TypeArity_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__MaybePseudoTypeInfo_16);
    }
    backend_libs__type_ctor_info__succeeded = ((((MR_tag((MR_Word) backend_libs__type_ctor_info__ArgType_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (backend_libs__type_ctor_info__succeeded)
      {
        backend_libs__type_ctor_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_9, (MR_Integer) 1)));
        backend_libs__type_ctor_info__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_9, (MR_Integer) 2)));
        backend_libs__type_ctor_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_9, (MR_Integer) 3)));
        backend_libs__type_ctor_info__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ArgType_9, (MR_Integer) 4)));
        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Var_24)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__type_ctor_info__succeeded)
          backend_libs__type_ctor_info__Var_19 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__Var_24), (MR_Integer) 1);
      }
    if (backend_libs__type_ctor_info__succeeded)
      backend_libs__type_ctor_info__FunctorSubtypeInfo_22 = (MR_Integer) 1;
    else
      backend_libs__type_ctor_info__FunctorSubtypeInfo_22 = (MR_Integer) 0;
    {
      backend_libs__type_ctor_info__Functor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_23, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_13));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_23, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfo_16));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_23, 2) = ((MR_Box) (backend_libs__type_ctor_info__MaybeArgName_10));
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_23, 3) = ((MR_Box) (backend_libs__type_ctor_info__FunctorSubtypeInfo_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *backend_libs__type_ctor_info__Details_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_11));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__Functor_23));
    }
  }
}

void MR_CALL 
backend_libs__type_ctor_info__generate_hlds_2_p_0(
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_11)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__ModuleName_4;
    MR_Word backend_libs__type_ctor_info__TypeTable_5;
    MR_Word backend_libs__type_ctor_info__TypeCtorsDefns_6;
    MR_Word backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7;
    MR_Word backend_libs__type_ctor_info__AllTypeCtorGenInfos_9;
    MR_Word backend_libs__type_ctor_info__Var_15;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, &backend_libs__type_ctor_info__ModuleName_4);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, &backend_libs__type_ctor_info__TypeTable_5);
    }
    {
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(backend_libs__type_ctor_info__TypeTable_5, &backend_libs__type_ctor_info__TypeCtorsDefns_6);
    }
    {
      backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, backend_libs__type_ctor_info__ModuleName_4, backend_libs__type_ctor_info__TypeCtorsDefns_6, &backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7);
    }
    {
      backend_libs__type_ctor_info__Var_15 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      backend_libs__type_ctor_info__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__type_ctor_info__ModuleName_4, backend_libs__type_ctor_info__Var_15);
    }
    if (backend_libs__type_ctor_info__succeeded)
      {
        backend_libs__type_ctor_info__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10);
      }
    if (backend_libs__type_ctor_info__succeeded)
      {
        MR_Word backend_libs__type_ctor_info__BuiltinTypeCtorGenInfos_8;
        MR_Word backend_libs__type_ctor_info__Var_12;

        {
          backend_libs__type_ctor_info__Var_12 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
        {
          backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, backend_libs__type_ctor_info__ModuleName_4, backend_libs__type_ctor_info__Var_12, &backend_libs__type_ctor_info__BuiltinTypeCtorGenInfos_8);
        }
        {
          backend_libs__type_ctor_info__AllTypeCtorGenInfos_9 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0, backend_libs__type_ctor_info__BuiltinTypeCtorGenInfos_8, backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7);
        }
      }
    else
      backend_libs__type_ctor_info__AllTypeCtorGenInfos_9 = backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7;
    {
      hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(backend_libs__type_ctor_info__AllTypeCtorGenInfos_9, backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_11);
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1(
  MR_Box backend_libs__type_ctor_info__closure_arg)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__208__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    if ((backend_libs__type_ctor_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__type_ctor_info__TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__TypeCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_11;
        MR_Word backend_libs__type_ctor_info__TypeCtorGenInfos_12;
        MR_Word backend_libs__type_ctor_info__SymName_13;
        MR_Integer backend_libs__type_ctor_info__TypeArity_14;

        {
          backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__HeadVar__2_2, backend_libs__type_ctor_info__TypeCtors_10, &backend_libs__type_ctor_info__TypeCtorGenInfos_12);
        }
        backend_libs__type_ctor_info__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_9, (MR_Integer) 0)));
        backend_libs__type_ctor_info__TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_9, (MR_Integer) 1)));
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__SymName_13)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word backend_libs__type_ctor_info__TypeModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_13, (MR_Integer) 0)));
            MR_String backend_libs__type_ctor_info__TypeName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_13, (MR_Integer) 1)));
            MR_Word backend_libs__type_ctor_info__Var_21;
            MR_Word backend_libs__type_ctor_info__Var_25;
            MR_Word backend_libs__type_ctor_info__TVarSet_29;
            MR_Word backend_libs__type_ctor_info__Kinds_31;
            MR_Word backend_libs__type_ctor_info__Context_35;
            MR_Word backend_libs__type_ctor_info__Status_50;
            MR_Word backend_libs__type_ctor_info__Globals_51;
            MR_Word backend_libs__type_ctor_info__SpecMaps_52;
            MR_Word backend_libs__type_ctor_info__SpecialPreds_53;
            MR_Word backend_libs__type_ctor_info__Unify_60;
            MR_Word backend_libs__type_ctor_info__Compare_65;

            {
              backend_libs__type_ctor_info__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_21, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[0]));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_21, 1) = ((MR_Box) (backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_21, 3) = ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_2));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Var_21, 4) = ((MR_Box) (backend_libs__type_ctor_info__TypeModuleName_15));
            }
            {
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__Var_21, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", (MR_String) "module mismatch");
            }
            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &backend_libs__type_ctor_info__TVarSet_29);
            }
            {
              mercury__map__init_1_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &backend_libs__type_ctor_info__Kinds_31);
            }
            {
              mercury__term__context_init_1_p_0(&backend_libs__type_ctor_info__Context_35);
            }
            {
              hlds__hlds_data__create_hlds_type_defn_10_p_0(backend_libs__type_ctor_info__TVarSet_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__type_ctor_info__Kinds_31, (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__type_ctor_info_scalar_common_1[8]), (MR_Integer) 0, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), (MR_Integer) 1, (MR_Integer) 0, backend_libs__type_ctor_info__Context_35, &backend_libs__type_ctor_info__Var_25);
            }
            {
              hlds__hlds_data__get_type_defn_status_2_p_0(backend_libs__type_ctor_info__Var_25, &backend_libs__type_ctor_info__Status_50);
            }
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__type_ctor_info__HeadVar__1_1, &backend_libs__type_ctor_info__Globals_51);
            }
            {
              hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(backend_libs__type_ctor_info__HeadVar__1_1, &backend_libs__type_ctor_info__SpecMaps_52);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(backend_libs__type_ctor_info__Globals_51, (MR_Integer) 283, &backend_libs__type_ctor_info__SpecialPreds_53);
            }
            switch (backend_libs__type_ctor_info__SpecialPreds_53) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word backend_libs__type_ctor_info__Body_54;
                  MR_Word backend_libs__type_ctor_info__Var_70;
                  MR_Word backend_libs__type_ctor_info__Var_78;
                  MR_Word backend_libs__type_ctor_info__Var_79;
                  MR_Word backend_libs__type_ctor_info__Var_80;
                  MR_Word backend_libs__type_ctor_info__Var_81;
                  MR_Word backend_libs__type_ctor_info__Var_82;
                  MR_Word backend_libs__type_ctor_info__Var_83;
                  MR_Word backend_libs__type_ctor_info__Var_84;
                  MR_Word backend_libs__type_ctor_info__Var_85;
                  MR_Word backend_libs__type_ctor_info___UserDefinedEquality_55;

                  {
                    hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__Var_25, &backend_libs__type_ctor_info__Body_54);
                  }
                  backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Body_54)) == (MR_mktag((MR_Integer) 1)));
                  if (backend_libs__type_ctor_info__succeeded)
                    {
                      backend_libs__type_ctor_info__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 0)));
                      backend_libs__type_ctor_info__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 1)));
                      backend_libs__type_ctor_info__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 2)));
                      backend_libs__type_ctor_info__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 3)));
                      backend_libs__type_ctor_info__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 4)));
                      backend_libs__type_ctor_info__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 5)));
                      backend_libs__type_ctor_info__Var_83 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 6)))) & (MR_Integer) 1);
                      backend_libs__type_ctor_info__Var_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      backend_libs__type_ctor_info__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 7)));
                      backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Var_70)) == (MR_mktag((MR_Integer) 1)));
                      if (backend_libs__type_ctor_info__succeeded)
                        backend_libs__type_ctor_info___UserDefinedEquality_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Var_70, (MR_Integer) 0)));
                    }
                }
                break;
              case (MR_Integer) 1:
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
                break;
            }
            if (backend_libs__type_ctor_info__succeeded)
              {
                MR_Word backend_libs__type_ctor_info__TypeCtorInfo_55_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                MR_Word backend_libs__type_ctor_info__TypeCtorInfo_56_91 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
                MR_Word backend_libs__type_ctor_info__UnifyMap_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 0)));
                MR_Word backend_libs__type_ctor_info__UnifyPredId_57;
                MR_Integer backend_libs__type_ctor_info__UnifyProcInt_58;
                MR_Integer backend_libs__type_ctor_info__UnifyProcId_59;
                MR_Word backend_libs__type_ctor_info__CompareMap_61;
                MR_Word backend_libs__type_ctor_info__ComparePredId_62;
                MR_Integer backend_libs__type_ctor_info__CompareProcInt_63;
                MR_Integer backend_libs__type_ctor_info__CompareProcId_64;
                MR_Word backend_libs__type_ctor_info__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 1)));
                MR_Word backend_libs__type_ctor_info__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 2)));
                MR_Box backend_libs__type_ctor_info__conv0_UnifyPredId_57;
                MR_Word backend_libs__type_ctor_info__Var_88;
                MR_Word backend_libs__type_ctor_info__Var_89;
                MR_Box backend_libs__type_ctor_info__conv1_ComparePredId_62;

                {
                  mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_55_90, backend_libs__type_ctor_info__TypeCtorInfo_56_91, backend_libs__type_ctor_info__UnifyMap_56, ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9)), &backend_libs__type_ctor_info__conv0_UnifyPredId_57);
                }
                backend_libs__type_ctor_info__UnifyPredId_57 = ((MR_Word) backend_libs__type_ctor_info__conv0_UnifyPredId_57);
                {
                  hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &backend_libs__type_ctor_info__UnifyProcInt_58);
                }
                {
                  hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__UnifyProcId_59, backend_libs__type_ctor_info__UnifyProcInt_58);
                }
                {
                  backend_libs__type_ctor_info__Unify_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_60, 0) = ((MR_Box) (backend_libs__type_ctor_info__UnifyPredId_57));
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_60, 1) = ((MR_Box) (backend_libs__type_ctor_info__UnifyProcId_59));
                }
                backend_libs__type_ctor_info__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 0)));
                backend_libs__type_ctor_info__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 1)));
                backend_libs__type_ctor_info__CompareMap_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 2)));
                {
                  mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_55_90, backend_libs__type_ctor_info__TypeCtorInfo_56_91, backend_libs__type_ctor_info__CompareMap_61, ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9)), &backend_libs__type_ctor_info__conv1_ComparePredId_62);
                }
                backend_libs__type_ctor_info__ComparePredId_62 = ((MR_Word) backend_libs__type_ctor_info__conv1_ComparePredId_62);
                {
                  hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &backend_libs__type_ctor_info__CompareProcInt_63);
                }
                {
                  hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__CompareProcId_64, backend_libs__type_ctor_info__CompareProcInt_63);
                }
                {
                  backend_libs__type_ctor_info__Compare_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_65, 0) = ((MR_Box) (backend_libs__type_ctor_info__ComparePredId_62));
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_65, 1) = ((MR_Box) (backend_libs__type_ctor_info__CompareProcId_64));
                }
              }
            else
              {
                MR_Word backend_libs__type_ctor_info__PredId_66;
                MR_Integer backend_libs__type_ctor_info__ProcId_67;
                MR_Word backend_libs__type_ctor_info__Var_73;

                {
                  backend_libs__type_ctor_info__Var_73 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
                {
                  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__Var_73, (MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__PredId_66, &backend_libs__type_ctor_info__ProcId_67);
                }
                {
                  backend_libs__type_ctor_info__Unify_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_60, 0) = ((MR_Box) (backend_libs__type_ctor_info__PredId_66));
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_60, 1) = ((MR_Box) (backend_libs__type_ctor_info__ProcId_67));
                }
                backend_libs__type_ctor_info__Compare_65 = backend_libs__type_ctor_info__Unify_60;
              }
            {
              backend_libs__type_ctor_info__TypeCtorGenInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeModuleName_15));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 2) = ((MR_Box) (backend_libs__type_ctor_info__TypeName_16));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_14));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 4) = ((MR_Box) (backend_libs__type_ctor_info__Status_50));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 5) = ((MR_Box) (backend_libs__type_ctor_info__Var_25));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 6) = ((MR_Box) (backend_libs__type_ctor_info__Unify_60));
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 7) = ((MR_Box) (backend_libs__type_ctor_info__Compare_65));
            }
          }
        else
          {
            MR_String backend_libs__type_ctor_info__Var_19;
            MR_String backend_libs__type_ctor_info__TypeName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SymName_13, (MR_Integer) 0)));

            {
              backend_libs__type_ctor_info__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", backend_libs__type_ctor_info__TypeName_26);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", backend_libs__type_ctor_info__Var_19);
              return;
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__type_ctor_info__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfo_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfos_12));
        }
      }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(
  MR_Word backend_libs__type_ctor_info__ModuleInfo_1,
  MR_Word backend_libs__type_ctor_info__ModuleName_2,
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    if ((backend_libs__type_ctor_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__type_ctor_info__TypeCtorDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__TypeCtorDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__TypeCtorGenInfosTail_12;
        MR_Word backend_libs__type_ctor_info__TypeCtor_13;
        MR_Word backend_libs__type_ctor_info__TypeDefn_14;
        MR_Word backend_libs__type_ctor_info__SymName_15;
        MR_Integer backend_libs__type_ctor_info__TypeArity_16;

        {
          backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__ModuleInfo_1, backend_libs__type_ctor_info__ModuleName_2, backend_libs__type_ctor_info__TypeCtorDefns_10, &backend_libs__type_ctor_info__TypeCtorGenInfosTail_12);
        }
        backend_libs__type_ctor_info__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 0)));
        backend_libs__type_ctor_info__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 1)));
        backend_libs__type_ctor_info__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_13, (MR_Integer) 0)));
        backend_libs__type_ctor_info__TypeArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_13, (MR_Integer) 1)));
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__SymName_15)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word backend_libs__type_ctor_info__TypeModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_15, (MR_Integer) 0)));
            MR_String backend_libs__type_ctor_info__TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_15, (MR_Integer) 1)));
            MR_Word backend_libs__type_ctor_info__Var_25;
            MR_Word backend_libs__type_ctor_info__TypeCtor_33;
            MR_Word backend_libs__type_ctor_info__TypeBody_34;

            {
              backend_libs__type_ctor_info__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__type_ctor_info__TypeModuleName_17, backend_libs__type_ctor_info__ModuleName_2);
            }
            if (backend_libs__type_ctor_info__succeeded)
              {
                backend_libs__type_ctor_info__TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 0)));
                backend_libs__type_ctor_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 1)));
                {
                  hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__Var_25, &backend_libs__type_ctor_info__TypeBody_34);
                }
                {
                  MR_Word backend_libs__type_ctor_info__Var_35;

                  backend_libs__type_ctor_info__succeeded = ((((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_34, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (backend_libs__type_ctor_info__succeeded)
                    backend_libs__type_ctor_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_34, (MR_Integer) 1)));
                }
                if (!(backend_libs__type_ctor_info__succeeded))
                  {
                    backend_libs__type_ctor_info__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(backend_libs__type_ctor_info__TypeCtor_33, backend_libs__type_ctor_info__TypeBody_34);
                  }
                if (backend_libs__type_ctor_info__succeeded)
                  {
                    MR_String backend_libs__type_ctor_info__ModuleNameString_36;

                    {
                      backend_libs__type_ctor_info__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(backend_libs__type_ctor_info__ModuleInfo_1);
                    }
                    if (backend_libs__type_ctor_info__succeeded)
                      {
                        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeModuleName_17)) == (MR_mktag((MR_Integer) 0)));
                        if (backend_libs__type_ctor_info__succeeded)
                          {
                            backend_libs__type_ctor_info__ModuleNameString_36 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeModuleName_17, (MR_Integer) 0)));
                            if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "builtin") == 0))
                              {
                                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 0);
                                if (backend_libs__type_ctor_info__succeeded)
                                  {
                                    MR_Integer backend_libs__type_ctor_info__case_num_0 = (MR_Integer) -1;

                                    switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 0)) {
                                      case (MR_Integer) 99:
                                        switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 1)) {
                                          case (MR_Integer) 95:
                                            if (MR_offset_streq(2, backend_libs__type_ctor_info__TypeName_18, (MR_String) "c_pointer"))
                                              backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 0;
                                            break;
                                          case (MR_Integer) 104:
                                            if (MR_offset_streq(2, backend_libs__type_ctor_info__TypeName_18, (MR_String) "character"))
                                              backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 1;
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 102:
                                        switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 1)) {
                                          case (MR_Integer) 108:
                                            if (MR_offset_streq(2, backend_libs__type_ctor_info__TypeName_18, (MR_String) "float"))
                                              backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 2;
                                            break;
                                          case (MR_Integer) 117:
                                            if (MR_offset_streq(2, backend_libs__type_ctor_info__TypeName_18, (MR_String) "func"))
                                              backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 3;
                                            break;
                                        }
                                        break;
                                      case (MR_Integer) 105:
                                        if (((((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 2)) == (MR_Integer) 116))))
                                          switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 3)) {
                                            case (MR_Integer) 0:
                                              backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 4;
                                              break;
                                            case (MR_Integer) 49:
                                              if (MR_offset_streq(4, backend_libs__type_ctor_info__TypeName_18, (MR_String) "int16"))
                                                backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 5;
                                              break;
                                            case (MR_Integer) 51:
                                              if (MR_offset_streq(4, backend_libs__type_ctor_info__TypeName_18, (MR_String) "int32"))
                                                backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 6;
                                              break;
                                            case (MR_Integer) 56:
                                              if (MR_offset_streq(4, backend_libs__type_ctor_info__TypeName_18, (MR_String) "int8"))
                                                backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 7;
                                              break;
                                          }
                                        break;
                                      case (MR_Integer) 112:
                                        if (MR_offset_streq(1, backend_libs__type_ctor_info__TypeName_18, (MR_String) "pred"))
                                          backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 8;
                                        break;
                                      case (MR_Integer) 115:
                                        if (((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 1)) == (MR_Integer) 116))
                                          switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 2)) {
                                            case (MR_Integer) 97:
                                              if (MR_offset_streq(3, backend_libs__type_ctor_info__TypeName_18, (MR_String) "stable_c_pointer"))
                                                backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 9;
                                              break;
                                            case (MR_Integer) 114:
                                              if (MR_offset_streq(3, backend_libs__type_ctor_info__TypeName_18, (MR_String) "string"))
                                                backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 10;
                                              break;
                                          }
                                        break;
                                      case (MR_Integer) 116:
                                        if (MR_offset_streq(1, backend_libs__type_ctor_info__TypeName_18, (MR_String) "tuple"))
                                          backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 11;
                                        break;
                                      case (MR_Integer) 117:
                                        if (((((((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 3)) == (MR_Integer) 116))))
                                          switch (MR_nth_code_unit(backend_libs__type_ctor_info__TypeName_18, 4)) {
                                            case (MR_Integer) 0:
                                              backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 12;
                                              break;
                                            case (MR_Integer) 49:
                                              if (MR_offset_streq(5, backend_libs__type_ctor_info__TypeName_18, (MR_String) "uint16"))
                                                backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 13;
                                              break;
                                            case (MR_Integer) 51:
                                              if (MR_offset_streq(5, backend_libs__type_ctor_info__TypeName_18, (MR_String) "uint32"))
                                                backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 14;
                                              break;
                                            case (MR_Integer) 56:
                                              if (MR_offset_streq(5, backend_libs__type_ctor_info__TypeName_18, (MR_String) "uint8"))
                                                backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 15;
                                              break;
                                          }
                                        break;
                                      case (MR_Integer) 118:
                                        if (MR_offset_streq(1, backend_libs__type_ctor_info__TypeName_18, (MR_String) "void"))
                                          backend_libs__type_ctor_info__case_num_0 = (MR_Integer) 16;
                                        break;
                                    }
                                    if ((backend_libs__type_ctor_info__case_num_0 < (MR_Integer) 0))
                                      backend_libs__type_ctor_info__succeeded = MR_FALSE;
                                    else
                                      {
                                        /* we found a match; look up the results */
                                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                            else
                            if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "type_desc") == 0))
                              {
                                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 0);
                                if (backend_libs__type_ctor_info__succeeded)
                                  {
                                    if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "type_desc") == 0))
                                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
                                    else
                                    if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "type_ctor_desc") == 0))
                                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
                                    else
                                    if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "pseudo_type_desc") == 0))
                                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
                                    else
                                      backend_libs__type_ctor_info__succeeded = MR_FALSE;
                                  }
                              }
                            else
                            if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "private_builtin") == 0))
                              {
                                backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "ref") == 0);
                                if (backend_libs__type_ctor_info__succeeded)
                                  backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 1);
                              }
                            else
                              backend_libs__type_ctor_info__succeeded = MR_FALSE;
                            if (!(backend_libs__type_ctor_info__succeeded))
                              {
                                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 0);
                                if (backend_libs__type_ctor_info__succeeded)
                                  {
                                    if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "table_builtin") == 0))
                                      backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "ml_subgoal") == 0);
                                    else
                                    if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "private_builtin") == 0))
                                      {
                                        MR_Integer backend_libs__type_ctor_info__slot_1;
                                        MR_String backend_libs__type_ctor_info__str_2;

                                        /* hashed string simple lookup switch */
                                        /* compute the hash value of the input string */
                                        backend_libs__type_ctor_info__slot_1 = ((MR_hash_string6(backend_libs__type_ctor_info__TypeName_18)) & (MR_Integer) 31);
                                        /* no collisions; no hash chain loop */
                                        /* lookup the string for this hash slot */
                                        backend_libs__type_ctor_info__str_2 = ((&backend_libs__type_ctor_info_vector_common_3[0 + backend_libs__type_ctor_info__slot_1]))->backend_libs__type_ctor_info__vector_common_type_3_0__vct_3_f_0;
                                        /* did we find a match? */
                                        if ((((backend_libs__type_ctor_info__str_2 != NULL)) && ((strcmp(backend_libs__type_ctor_info__str_2, backend_libs__type_ctor_info__TypeName_18) == 0))))
                                          {
                                            /* we found a match; look up the results */
                                            backend_libs__type_ctor_info__succeeded = MR_TRUE;
                                            /* jump out of search loop */
                                            goto label_0;
                                          }
                                        backend_libs__type_ctor_info__succeeded = MR_FALSE;
                                      label_0:;
                                      }
                                    else
                                      backend_libs__type_ctor_info__succeeded = MR_FALSE;
                                  }
                              }
                          }
                      }
                  }
                else
                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
                if (backend_libs__type_ctor_info__succeeded)
                  {
                    backend_libs__type_ctor_info__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(backend_libs__type_ctor_info__TypeDefn_14, backend_libs__type_ctor_info__Var_25);
                  }
              }
            if (backend_libs__type_ctor_info__succeeded)
              {
                MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_19;

                {
                  backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(backend_libs__type_ctor_info__ModuleInfo_1, backend_libs__type_ctor_info__TypeCtor_13, backend_libs__type_ctor_info__TypeModuleName_17, backend_libs__type_ctor_info__TypeName_18, backend_libs__type_ctor_info__TypeArity_16, backend_libs__type_ctor_info__TypeDefn_14, &backend_libs__type_ctor_info__TypeCtorGenInfo_19);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *backend_libs__type_ctor_info__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfo_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfosTail_12));
                }
              }
            else
              *backend_libs__type_ctor_info__HeadVar__4_4 = backend_libs__type_ctor_info__TypeCtorGenInfosTail_12;
          }
        else
          {
            MR_String backend_libs__type_ctor_info__Var_22;
            MR_String backend_libs__type_ctor_info__TypeName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SymName_15, (MR_Integer) 0)));

            {
              backend_libs__type_ctor_info__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", backend_libs__type_ctor_info__TypeName_24);
            }
            {
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_type_ctor_gen_infos\'/4", backend_libs__type_ctor_info__Var_22);
              return;
            }
          }
      }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(
  MR_Word backend_libs__type_ctor_info__ModuleInfo_8,
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
  MR_Word backend_libs__type_ctor_info__ModuleName_10,
  MR_String backend_libs__type_ctor_info__TypeName_11,
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
  MR_Word backend_libs__type_ctor_info__TypeDefn_13,
  MR_Word * backend_libs__type_ctor_info__TypeCtorGenInfo_14)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;
    MR_Word backend_libs__type_ctor_info__Status_15;
    MR_Word backend_libs__type_ctor_info__Globals_16;
    MR_Word backend_libs__type_ctor_info__SpecMaps_17;
    MR_Word backend_libs__type_ctor_info__SpecialPreds_18;
    MR_Word backend_libs__type_ctor_info__Unify_25;
    MR_Word backend_libs__type_ctor_info__Compare_30;

    {
      hlds__hlds_data__get_type_defn_status_2_p_0(backend_libs__type_ctor_info__TypeDefn_13, &backend_libs__type_ctor_info__Status_15);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__type_ctor_info__ModuleInfo_8, &backend_libs__type_ctor_info__Globals_16);
    }
    {
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(backend_libs__type_ctor_info__ModuleInfo_8, &backend_libs__type_ctor_info__SpecMaps_17);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__type_ctor_info__Globals_16, (MR_Integer) 283, &backend_libs__type_ctor_info__SpecialPreds_18);
    }
    switch (backend_libs__type_ctor_info__SpecialPreds_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word backend_libs__type_ctor_info__Body_19;
          MR_Word backend_libs__type_ctor_info__Var_35;
          MR_Word backend_libs__type_ctor_info__Var_43;
          MR_Word backend_libs__type_ctor_info__Var_44;
          MR_Word backend_libs__type_ctor_info__Var_45;
          MR_Word backend_libs__type_ctor_info__Var_46;
          MR_Word backend_libs__type_ctor_info__Var_47;
          MR_Word backend_libs__type_ctor_info__Var_48;
          MR_Word backend_libs__type_ctor_info__Var_49;
          MR_Word backend_libs__type_ctor_info__Var_50;
          MR_Word backend_libs__type_ctor_info___UserDefinedEquality_20;

          {
            hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__TypeDefn_13, &backend_libs__type_ctor_info__Body_19);
          }
          backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Body_19)) == (MR_mktag((MR_Integer) 1)));
          if (backend_libs__type_ctor_info__succeeded)
            {
              backend_libs__type_ctor_info__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 0)));
              backend_libs__type_ctor_info__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 1)));
              backend_libs__type_ctor_info__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 2)));
              backend_libs__type_ctor_info__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 3)));
              backend_libs__type_ctor_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 4)));
              backend_libs__type_ctor_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 5)));
              backend_libs__type_ctor_info__Var_48 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 6)))) & (MR_Integer) 1);
              backend_libs__type_ctor_info__Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              backend_libs__type_ctor_info__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 7)));
              backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Var_35)) == (MR_mktag((MR_Integer) 1)));
              if (backend_libs__type_ctor_info__succeeded)
                backend_libs__type_ctor_info___UserDefinedEquality_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Var_35, (MR_Integer) 0)));
            }
        }
        break;
      case (MR_Integer) 1:
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
        break;
    }
    if (backend_libs__type_ctor_info__succeeded)
      {
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_56_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        MR_Word backend_libs__type_ctor_info__UnifyMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 0)));
        MR_Word backend_libs__type_ctor_info__UnifyPredId_22;
        MR_Integer backend_libs__type_ctor_info__UnifyProcInt_23;
        MR_Integer backend_libs__type_ctor_info__UnifyProcId_24;
        MR_Word backend_libs__type_ctor_info__CompareMap_26;
        MR_Word backend_libs__type_ctor_info__ComparePredId_27;
        MR_Integer backend_libs__type_ctor_info__CompareProcInt_28;
        MR_Integer backend_libs__type_ctor_info__CompareProcId_29;
        MR_Word backend_libs__type_ctor_info__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 1)));
        MR_Word backend_libs__type_ctor_info__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 2)));
        MR_Box backend_libs__type_ctor_info__conv0_UnifyPredId_22;
        MR_Word backend_libs__type_ctor_info__Var_53;
        MR_Word backend_libs__type_ctor_info__Var_54;
        MR_Box backend_libs__type_ctor_info__conv1_ComparePredId_27;

        {
          mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_55_55, backend_libs__type_ctor_info__TypeCtorInfo_56_56, backend_libs__type_ctor_info__UnifyMap_21, ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9)), &backend_libs__type_ctor_info__conv0_UnifyPredId_22);
        }
        backend_libs__type_ctor_info__UnifyPredId_22 = ((MR_Word) backend_libs__type_ctor_info__conv0_UnifyPredId_22);
        {
          hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &backend_libs__type_ctor_info__UnifyProcInt_23);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__UnifyProcId_24, backend_libs__type_ctor_info__UnifyProcInt_23);
        }
        {
          backend_libs__type_ctor_info__Unify_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_25, 0) = ((MR_Box) (backend_libs__type_ctor_info__UnifyPredId_22));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__UnifyProcId_24));
        }
        backend_libs__type_ctor_info__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 0)));
        backend_libs__type_ctor_info__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 1)));
        backend_libs__type_ctor_info__CompareMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 2)));
        {
          mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_55_55, backend_libs__type_ctor_info__TypeCtorInfo_56_56, backend_libs__type_ctor_info__CompareMap_26, ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9)), &backend_libs__type_ctor_info__conv1_ComparePredId_27);
        }
        backend_libs__type_ctor_info__ComparePredId_27 = ((MR_Word) backend_libs__type_ctor_info__conv1_ComparePredId_27);
        {
          hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &backend_libs__type_ctor_info__CompareProcInt_28);
        }
        {
          hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__CompareProcId_29, backend_libs__type_ctor_info__CompareProcInt_28);
        }
        {
          backend_libs__type_ctor_info__Compare_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_30, 0) = ((MR_Box) (backend_libs__type_ctor_info__ComparePredId_27));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_30, 1) = ((MR_Box) (backend_libs__type_ctor_info__CompareProcId_29));
        }
      }
    else
      {
        MR_Word backend_libs__type_ctor_info__PredId_31;
        MR_Integer backend_libs__type_ctor_info__ProcId_32;
        MR_Word backend_libs__type_ctor_info__Var_38;

        {
          backend_libs__type_ctor_info__Var_38 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
        {
          hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(backend_libs__type_ctor_info__ModuleInfo_8, backend_libs__type_ctor_info__Var_38, (MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__PredId_31, &backend_libs__type_ctor_info__ProcId_32);
        }
        {
          backend_libs__type_ctor_info__Unify_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_25, 0) = ((MR_Box) (backend_libs__type_ctor_info__PredId_31));
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__ProcId_32));
        }
        backend_libs__type_ctor_info__Compare_30 = backend_libs__type_ctor_info__Unify_25;
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *backend_libs__type_ctor_info__TypeCtorGenInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__TypeName_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__Status_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__TypeDefn_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__type_ctor_info__Unify_25));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__type_ctor_info__Compare_30));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
{
  {
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

    {
      backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____name_sort_info_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
{
  {
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

    {
      backend_libs__type_ctor_info____Compare____name_sort_info_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
{
  {
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

    {
      backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____tag_list_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
{
  {
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

    {
      backend_libs__type_ctor_info____Compare____tag_list_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0_10001(
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
{
  {
    MR_bool backend_libs__type_ctor_info__succeeded;

    {
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____tag_map_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
    return backend_libs__type_ctor_info__succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0_10001(
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
{
  {
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

    {
      backend_libs__type_ctor_info____Compare____tag_map_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
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

/* :- end_module backend_libs.type_ctor_info. */
