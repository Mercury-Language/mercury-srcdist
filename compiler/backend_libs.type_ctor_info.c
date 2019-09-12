/*
** Automatically generated from `type_ctor_info.m'
** by the Mercury compiler,
** version rotd-2019-09-12
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "int8.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0;

static const MR_VA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0;

static const MR_VA_TypeInfo_Struct2 backend_libs__type_ctor_info____vti_tuple_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain___vti_tuple_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_uint16_0backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_uint16_0backend_libs__rtti__type_ctor_info_du_functor_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__970__1_2_p_0(
  int8_t NumSectagBits_11,
  int8_t NumSectagBits0_17);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__873__1_3_p_0(
  MR_Word LocnMap_22,
  MR_Word LambdaHeadVar__1_38,
  MR_Word * LambdaHeadVar__2_39);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__862__1_5_p_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Integer LambdaHeadVar__2_29,
  MR_Integer * LambdaHeadVar__3_30,
  MR_Word LambdaHeadVar__4_31,
  MR_Word * LambdaHeadVar__5_32);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_functors__715__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_16);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__634__1_2_p_0(
  MR_Word Lang_1,
  MR_Word ForeignTagLang_20);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__630__1_2_p_0(
  MR_Integer Arity_18,
  MR_Integer HeadVar__2_62);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__628__1_2_p_0(
  MR_Word MaybeExistConstraints_14,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__627__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_13);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__571__1_2_p_0(
  MR_Word ConsTag_16,
  MR_Word HeadVar__2_40);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__575__1_2_p_0(
  MR_Word ConsTag_16,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__567__1_2_p_0(
  MR_Integer Arity_18,
  MR_Integer HeadVar__2_32);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__565__1_2_p_0(
  MR_Word MaybeExistConstraints_14,
  MR_Word HeadVar__2_28);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__564__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_13);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__535__1_2_p_0(
  MR_Word IsDummy_6,
  MR_Word HeadVar__2_23);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__532__1_2_p_0(
  MR_Word IsDummy_6,
  MR_Word HeadVar__2_28);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__211__1_2_p_0(
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
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
backend_libs__type_ctor_info__lookup_functor_number_3_p_0(
  MR_Word CtorNameToSeqNumMap_4,
  MR_Tuple CtorName_5,
  uint32_t * SeqNumUint32_6);

static MR_Tuple MR_CALL 
backend_libs__type_ctor_info__ctor_name_arity_1_f_0(
  MR_Word Ctor_3);

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
  MR_Word STATE_VARIABLE_PtagTable_0_22,
  MR_Word * STATE_VARIABLE_PtagTable_23);

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
  MR_Integer NumUnivTVars_7,
  MR_Word ExistTVars_8,
  MR_Word ConsArgRepn_9,
  MR_Word * ArgInfo_10,
  MR_Word STATE_VARIABLE_FunctorSubtypeInfo_0_29,
  MR_Word * STATE_VARIABLE_FunctorSubtypeInfo_30);

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
  uint16_t STATE_VARIABLE_Vector_0_3,
  uint16_t * STATE_VARIABLE_Vector_4);

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
backend_libs__type_ctor_info__make_du_details_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_du_details_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Ctors_7,
  MR_Integer TypeArity_8,
  MR_Word EqualityAxioms_9,
  MR_Word * Details_10);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  uint32_t CurOrdinal_3,
  MR_Integer TypeArity_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0(
  MR_Word ExistConstraints_4,
  MR_Word ClassTable_5,
  MR_Word * ExistInfo_6);

static void MR_CALL 
backend_libs__type_ctor_info__get_du_rep_2_p_0(
  MR_Word ConsTag_3,
  MR_Word * DuRep_4);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0(
  MR_Word Lang_5,
  MR_Word CtorRepns_6,
  MR_Word EqualityAxioms_7,
  MR_Word * Details_8);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0(
  MR_Word Lang_1,
  MR_Word HeadVar__2_2,
  uint32_t CurOrdinal_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0(
  MR_Word CtorRepns_5,
  MR_Word IsDummy_6,
  MR_Word EqualityAxioms_7,
  MR_Word * Details_8);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IsDummy_2,
  uint32_t CurOrdinal_3,
  MR_Word * HeadVar__4_4);

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
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
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


static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_1[5][2];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_2[23][3];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_3[1][4];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_5[10][5];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_6[3][8];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_7[4][6];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[2][9];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_9[2][1];


/* sealed */ struct backend_libs__type_ctor_info__vector_common_type_4_0_s {
  const MR_String backend_libs__type_ctor_info__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_4_0_s backend_libs__type_ctor_info_vector_common_4[32];

/* sealed */ struct backend_libs__type_ctor_info__vector_common_type_10_0_s {
  const MR_Word backend_libs__type_ctor_info__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_10_0_s backend_libs__type_ctor_info_vector_common_10[19];

/* sealed */ struct backend_libs__type_ctor_info__vector_common_type_11_0_s {
  const MR_String backend_libs__type_ctor_info__vector_common_type_11_0__vct_11_f_0;
  const MR_Word backend_libs__type_ctor_info__vector_common_type_11_0__vct_11_f_1;
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_11_0_s backend_libs__type_ctor_info_vector_common_11[32];



static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[9]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[12]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_2[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint16_0)),
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
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_1[0])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[8])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[10]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[11]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[11]))
  },
  /* row 14 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[0])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[6])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[6])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[2])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_info_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[8])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_info_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[2])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[6])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[3])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_5[10][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_maybe_dummy_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_maybe_dummy_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int8_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int8_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_6[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_7[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain___vti_tuple_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_uint16_0backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_uint16_0backend_libs__rtti__type_ctor_info_du_functor_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_functor_subtype_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_functor_subtype_info_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_9[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};


static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_4_0_s backend_libs__type_ctor_info_vector_common_4[32] = {
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

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_10_0_s backend_libs__type_ctor_info_vector_common_10[19] = {
  /* row 0 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_9[0])) },
  /* row 1 */   {     (MR_Word) ((MR_Unsigned) 44U) },
  /* row 2 */   {     (MR_Word) ((MR_Unsigned) 40U) },
  /* row 3 */   {     (MR_Word) ((MR_Unsigned) 60U) },
  /* row 4 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 5 */   {     (MR_Word) ((MR_Unsigned) 16U) },
  /* row 6 */   {     (MR_Word) ((MR_Unsigned) 24U) },
  /* row 7 */   {     (MR_Word) ((MR_Unsigned) 32U) },
  /* row 8 */   {     (MR_Word) ((MR_Unsigned) 8U) },
  /* row 9 */   {     (MR_Word) ((MR_Unsigned) 56U) },
  /* row 10 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_9[1])) },
  /* row 11 */   {     (MR_Word) ((MR_Unsigned) 48U) },
  /* row 12 */   {     (MR_Word) ((MR_Unsigned) 64U) },
  /* row 13 */   {     (MR_Word) ((MR_Unsigned) 4U) },
  /* row 14 */   {     (MR_Word) ((MR_Unsigned) 20U) },
  /* row 15 */   {     (MR_Word) ((MR_Unsigned) 28U) },
  /* row 16 */   {     (MR_Word) ((MR_Unsigned) 36U) },
  /* row 17 */   {     (MR_Word) ((MR_Unsigned) 12U) },
  /* row 18 */   {     (MR_Word) ((MR_Unsigned) 52U) },
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_11_0_s backend_libs__type_ctor_info_vector_common_11[32] = {
  /* row 0 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 2 */
  {
    (MR_String) "ticket",
    (MR_Integer) 6
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 4 */
  {
    (MR_String) "redofr",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
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
    (MR_Word) ((MR_Integer) 0)
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
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
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
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 20 */
  {
    (MR_String) "type_info",
    (MR_Integer) 8
  },
  /* row 21 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 22 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
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
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 26 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 28 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_VA_TypeInfo_Struct2 backend_libs__type_ctor_info____vti_tuple_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain___vti_tuple_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info____vti_tuple_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0),
    (MR_PseudoTypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_uint16_0backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0),
    (MR_TypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_uint16_0backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_uint16_0backend_libs__rtti__type_ctor_info_du_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_name_sort_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "name_sort_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0),
    (MR_TypeInfo) (&backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_list_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_list_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_list_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)
  }
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_map_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_map_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__970__1_2_p_0(
  int8_t NumSectagBits_11,
  int8_t NumSectagBits0_17)
{
  {
    MR_bool succeeded = (NumSectagBits0_17 == NumSectagBits_11);

    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__873__1_3_p_0(
  MR_Word LocnMap_22,
  MR_Word LambdaHeadVar__1_38,
  MR_Word * LambdaHeadVar__2_39)
{
  {
    MR_Box conv0_LambdaHeadVar__2_39;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), LocnMap_22, ((MR_Box) (LambdaHeadVar__1_38)), &conv0_LambdaHeadVar__2_39);
    *LambdaHeadVar__2_39 = ((MR_Word) (conv0_LambdaHeadVar__2_39));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__862__1_5_p_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Integer LambdaHeadVar__2_29,
  MR_Integer * LambdaHeadVar__3_30,
  MR_Word LambdaHeadVar__4_31,
  MR_Word * LambdaHeadVar__5_32)
{
  {
    MR_Word Locn_17;
    uint16_t Var_33;

    Var_33 = mercury__uint16__det_from_int_1_f_0(LambdaHeadVar__2_29);
    {
      Locn_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Locn_17, 0) = ((MR_Box) (MR_Word) (Var_33));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), ((MR_Box) (LambdaHeadVar__1_28)), ((MR_Box) (Locn_17)), LambdaHeadVar__4_31, LambdaHeadVar__5_32);
    *LambdaHeadVar__3_30 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__2_29 + (MR_Unsigned) 1);
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_functors__715__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_16)
{
  {
    MR_bool succeeded = (Ordinal_16 == CurOrdinal_3);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__634__1_2_p_0(
  MR_Word Lang_1,
  MR_Word ForeignTagLang_20)
{
  {
    MR_bool succeeded = (Lang_1 == ForeignTagLang_20);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__630__1_2_p_0(
  MR_Integer Arity_18,
  MR_Integer HeadVar__2_62)
{
  {
    MR_bool succeeded = (Arity_18 == HeadVar__2_62);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__628__1_2_p_0(
  MR_Word MaybeExistConstraints_14,
  MR_Word HeadVar__2_58)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_14, HeadVar__2_58);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__627__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_13)
{
  {
    MR_bool succeeded = (Ordinal_13 == CurOrdinal_3);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__571__1_2_p_0(
  MR_Word ConsTag_16,
  MR_Word HeadVar__2_40)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_data____Unify____cons_tag_0_0(ConsTag_16, HeadVar__2_40);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__575__1_2_p_0(
  MR_Word ConsTag_16,
  MR_Word HeadVar__2_36)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_data____Unify____cons_tag_0_0(ConsTag_16, HeadVar__2_36);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__567__1_2_p_0(
  MR_Integer Arity_18,
  MR_Integer HeadVar__2_32)
{
  {
    MR_bool succeeded = (Arity_18 == HeadVar__2_32);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__565__1_2_p_0(
  MR_Word MaybeExistConstraints_14,
  MR_Word HeadVar__2_28)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_14, HeadVar__2_28);
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__564__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_13)
{
  {
    MR_bool succeeded = (Ordinal_13 == CurOrdinal_3);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__535__1_2_p_0(
  MR_Word IsDummy_6,
  MR_Word HeadVar__2_23)
{
  {
    MR_bool succeeded = (IsDummy_6 == HeadVar__2_23);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__532__1_2_p_0(
  MR_Word IsDummy_6,
  MR_Word HeadVar__2_28)
{
  {
    MR_bool succeeded = (IsDummy_6 == HeadVar__2_28);

    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__211__1_2_p_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[13]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[13]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__lookup_functor_number_3_p_0(
  MR_Word CtorNameToSeqNumMap_4,
  MR_Tuple CtorName_5,
  uint32_t * SeqNumUint32_6)
{
  {
    MR_Integer SeqNum_7;
    MR_Box conv0_SeqNum_7;

    mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CtorNameToSeqNumMap_4, ((MR_Box) (CtorName_5)), &conv0_SeqNum_7);
    SeqNum_7 = ((MR_Integer) (conv0_SeqNum_7));
    *SeqNumUint32_6 = mercury__uint32__det_from_int_1_f_0(SeqNum_7);
  }
}

static MR_Tuple MR_CALL 
backend_libs__type_ctor_info__ctor_name_arity_1_f_0(
  MR_Word Ctor_3)
{
  {
    MR_Tuple HeadVar__2_2;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 2))));
    MR_Integer Var_5;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 4))));

    Var_5 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), Var_10);
    {
      HeadVar__2_2 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    }
    return HeadVar__2_2;
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
    MR_String Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 0))));
    uint16_t Arity_7 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 1)));
    MR_Word NameMap0_8;
    MR_Box conv0_NameMap0_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[5]), STATE_VARIABLE_NameTable_0_10, ((MR_Box) (Name_6)), &conv0_NameMap0_8);
    if (succeeded)
    {
      NameMap0_8 = ((MR_Word) (conv0_NameMap0_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NameMap_9;

      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), ((MR_Box) (MR_Word) (Arity_7)), ((MR_Box) (DuFunctor_4)), NameMap0_8, &NameMap_9);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[5]), ((MR_Box) (Name_6)), ((MR_Box) (NameMap_9)), STATE_VARIABLE_NameTable_0_10, STATE_VARIABLE_NameTable_11);
    }
    else
    {
      MR_Word NameMap_14;

      NameMap_14 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), ((MR_Box) (MR_Word) (Arity_7)), ((MR_Box) (DuFunctor_4)));
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[5]), ((MR_Box) (Name_6)), ((MR_Box) (NameMap_14)), STATE_VARIABLE_NameTable_0_10, STATE_VARIABLE_NameTable_11);
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

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__970__1_2_p_0(((int8_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
  MR_Word DuFunctor_4,
  MR_Word STATE_VARIABLE_PtagTable_0_22,
  MR_Word * STATE_VARIABLE_PtagTable_23)
{
  {
    MR_bool succeeded;
    MR_Word DuRep_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuFunctor_4, (MR_Integer) 3))));
    MR_Word Ptag_7;
    MR_Word SectagLocn_9;
    MR_Unsigned Sectag_10;
    int8_t NumSectagBits_11;
    MR_Word SectagTable0_15;
    MR_Box conv0_SectagTable0_15;

    if (((MR_tag((MR_Word) DuRep_6)) == (MR_Integer) 1))
    {
      Sectag_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), DuRep_6, (MR_Integer) 0))));
      Ptag_7 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
      SectagLocn_9 = (MR_Word) ((MR_Unsigned) 12U);
      NumSectagBits_11 = INT8_C(-1);
    }
    else
    {
      MR_Word SectagAndLocn_8;

      Ptag_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuRep_6, (MR_Integer) 0))));
      SectagAndLocn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuRep_6, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) SectagAndLocn_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(SectagAndLocn_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                SectagLocn_9 = (MR_Word) ((MR_Unsigned) 0U);
                Sectag_10 = (MR_Unsigned) 0U;
                NumSectagBits_11 = INT8_C(-1);
              }
              break;
            case (MR_Integer) 1:
              {
                SectagLocn_9 = (MR_Word) ((MR_Unsigned) 4U);
                Sectag_10 = (MR_Unsigned) 0U;
                NumSectagBits_11 = INT8_C(-1);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            Sectag_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), SectagAndLocn_8, (MR_Integer) 0))));
            SectagLocn_9 = (MR_Word) ((MR_Unsigned) 8U);
            NumSectagBits_11 = INT8_C(-1);
          }
          break;
        case (MR_Integer) 2:
          {
            uint8_t NumSectagBitsUint8_12;
            MR_Unsigned Mask_13;

            Sectag_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SectagAndLocn_8, (MR_Integer) 0))));
            NumSectagBitsUint8_12 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(2), SectagAndLocn_8, (MR_Integer) 1)));
            Mask_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SectagAndLocn_8, (MR_Integer) 2))));
            {
              SectagLocn_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SectagLocn_9, 0) = ((MR_Box) (MR_Word) (NumSectagBitsUint8_12));
              MR_hl_field(MR_mktag(1), SectagLocn_9, 1) = ((MR_Box) (Mask_13));
            }
            NumSectagBits_11 = mercury__int8__cast_from_uint8_1_f_0(NumSectagBitsUint8_12);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SectagAndLocn_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Sectag_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SectagAndLocn_8, (MR_Integer) 1))));
                SectagLocn_9 = (MR_Word) ((MR_Unsigned) 12U);
                NumSectagBits_11 = INT8_C(-1);
              }
              break;
            case (MR_Integer) 1:
              {
                uint8_t NumSectagBitsUint8_33;
                MR_Unsigned Mask_34;

                Sectag_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SectagAndLocn_8, (MR_Integer) 1))));
                NumSectagBitsUint8_33 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), SectagAndLocn_8, (MR_Integer) 2)));
                Mask_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SectagAndLocn_8, (MR_Integer) 3))));
                {
                  SectagLocn_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), SectagLocn_9, 0) = ((MR_Box) (MR_Word) (NumSectagBitsUint8_33));
                  MR_hl_field(MR_mktag(2), SectagLocn_9, 1) = ((MR_Box) (Mask_34));
                }
                NumSectagBits_11 = mercury__int8__cast_from_uint8_1_f_0(NumSectagBitsUint8_33);
              }
              break;
          }
          break;
      }
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), STATE_VARIABLE_PtagTable_0_22, ((MR_Box) (Ptag_7)), &conv0_SectagTable0_15);
    if (succeeded)
    {
      SectagTable0_15 = ((MR_Word) (conv0_SectagTable0_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Locn0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectagTable0_15, (MR_Integer) 0))));
      int8_t NumSectagBits0_17 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagTable0_15, (MR_Integer) 1)));
      uint32_t NumSharers0_18 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagTable0_15, (MR_Integer) 2)));
      MR_Word SectagMap0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectagTable0_15, (MR_Integer) 3))));
      MR_Word SectagMap_20;
      MR_Word SectagTable_21;
      MR_Word Var_25;
      uint32_t Var_28;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[9]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (MR_Word) (NumSectagBits_11));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (MR_Word) (NumSectagBits0_17));
      }
      mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "sectag num bits disagreement");
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), ((MR_Box) (Sectag_10)), ((MR_Box) (DuFunctor_4)), SectagMap0_19, &SectagMap_20);
      Var_28 = (NumSharers0_18 + UINT32_C(1));
      {
        SectagTable_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SectagTable_21, 0) = ((MR_Box) (Locn0_16));
        MR_hl_field(MR_mktag(0), SectagTable_21, 1) = ((MR_Box) (MR_Word) (NumSectagBits0_17));
        MR_hl_field(MR_mktag(0), SectagTable_21, 2) = ((MR_Box) (MR_Word) (Var_28));
        MR_hl_field(MR_mktag(0), SectagTable_21, 3) = ((MR_Box) (SectagMap_20));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), ((MR_Box) (Ptag_7)), ((MR_Box) (SectagTable_21)), STATE_VARIABLE_PtagTable_0_22, STATE_VARIABLE_PtagTable_23);
    }
    else
    {
      MR_Word SectagMap_35;
      MR_Word SectagTable_36;

      SectagMap_35 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), ((MR_Box) (Sectag_10)), ((MR_Box) (DuFunctor_4)));
      {
        SectagTable_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SectagTable_36, 0) = ((MR_Box) (SectagLocn_9));
        MR_hl_field(MR_mktag(0), SectagTable_36, 1) = ((MR_Box) (MR_Word) (NumSectagBits_11));
        MR_hl_field(MR_mktag(0), SectagTable_36, 2) = ((MR_Box) (MR_Word) (UINT32_C(1)));
        MR_hl_field(MR_mktag(0), SectagTable_36, 3) = ((MR_Box) (SectagMap_35));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), ((MR_Box) (Ptag_7)), ((MR_Box) (SectagTable_36)), STATE_VARIABLE_PtagTable_0_22, STATE_VARIABLE_PtagTable_23);
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
    uint16_t Var_26;
    uint16_t Var_27;
    MR_Box conv0_ClassDefn_18;

    backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(Constraints_7, TVar_10, StartSlot_9, &Slot_12, &FirstConstraint_13, &TypeInfoIndex_14);
    ClassName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstConstraint_13, (MR_Integer) 0))));
    ArgTypes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstConstraint_13, (MR_Integer) 1))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_16, &ClassArity_17);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (ClassName_15));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ClassArity_17));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_8, ((MR_Box) (Var_24)), &conv0_ClassDefn_18);
    ClassDefn_18 = ((MR_Word) (conv0_ClassDefn_18));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_18, (MR_Integer) 1))));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_25, &NumSuperClasses_19);
    RealTypeInfoIndex_20 = (MR_Integer) ((MR_Unsigned) TypeInfoIndex_14 + (MR_Unsigned) NumSuperClasses_19);
    Var_26 = mercury__uint16__det_from_int_1_f_0(Slot_12);
    Var_27 = mercury__uint16__det_from_int_1_f_0(RealTypeInfoIndex_20);
    {
      Locn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Locn_21, 0) = ((MR_Box) (MR_Word) (Var_26));
      MR_hl_field(MR_mktag(1), Locn_21, 1) = ((MR_Box) (MR_Word) (Var_27));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), ((MR_Box) (TVar_10)), ((MR_Box) (Locn_21)), STATE_VARIABLE_LocnMap_0_22, STATE_VARIABLE_LocnMap_23);
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

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.first_matching_type_class_info\'/6", (MR_String) "not found");
        return;
      }
    }
    else
    {
      MR_Word Constraint_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgTypes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_15, (MR_Integer) 1))));
      MR_Word TVs_23;
      MR_Integer Index_24;

      parse_tree__prog_type__type_vars_list_2_p_0(ArgTypes_22, &TVs_23);
      succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), TVs_23, ((MR_Box) (TVar_2)), &Index_24);
      if (succeeded)
      {
        *MatchingConstraint_5 = Constraint_15;
        *TypeInfoIndex_6 = Index_24;
        *STATE_VARIABLE_N_4 = STATE_VARIABLE_N_0_3;
      }
      else
      {
        MR_Integer STATE_VARIABLE_N_27_27 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_3 + (MR_Unsigned) 1);
        MR_Word next_value_of_HeadVar__1_1 = Constraints_16;
        MR_Integer next_value_of_STATE_VARIABLE_N_0_3 = STATE_VARIABLE_N_27_27;

        // direct tailcall eliminated
        ;
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
  MR_Integer NumUnivTVars_7,
  MR_Word ExistTVars_8,
  MR_Word ConsArgRepn_9,
  MR_Word * ArgInfo_10,
  MR_Word STATE_VARIABLE_FunctorSubtypeInfo_0_29,
  MR_Word * STATE_VARIABLE_FunctorSubtypeInfo_30)
{
  {
    MR_bool succeeded;
    MR_Word MaybeCtorFieldName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArgRepn_9, (MR_Integer) 0))));
    MR_Word ArgType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArgRepn_9, (MR_Integer) 1))));
    MR_Word ArgWidth_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArgRepn_9, (MR_Integer) 2))));
    MR_Word MaybeArgName_19;
    MR_Word MaybePseudoTypeInfo_20;
    MR_Word MaybePseudoTypeInfoOrSelf_22;
    MR_Word Var_32;

    if ((MaybeCtorFieldName_12 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeArgName_19 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SymName_16;
      MR_String ArgName_18;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorFieldName_12, (MR_Integer) 0))));

      SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
      ArgName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
      {
        MaybeArgName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeArgName_19, 0) = ((MR_Box) (ArgName_18));
      }
    }
    backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(ArgType_13, NumUnivTVars_7, ExistTVars_8, &MaybePseudoTypeInfo_20);
    if (((MR_tag((MR_Word) MaybePseudoTypeInfo_20)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePseudoTypeInfo_20, (MR_Integer) 0))));

      {
        MaybePseudoTypeInfoOrSelf_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MaybePseudoTypeInfoOrSelf_22, 0) = ((MR_Box) (TypeInfo_21));
      }
    }
    else
    {
      MR_Word PseudoTypeInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybePseudoTypeInfo_20, (MR_Integer) 0))));

      {
        MaybePseudoTypeInfoOrSelf_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybePseudoTypeInfoOrSelf_22, 0) = ((MR_Box) (PseudoTypeInfo_23));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ArgInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeArgName_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybePseudoTypeInfoOrSelf_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgWidth_14));
    }
    succeeded = ((((MR_tag((MR_Word) ArgType_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgType_13, (MR_Integer) 3))));
      succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      *STATE_VARIABLE_FunctorSubtypeInfo_30 = (MR_Integer) 1;
    else
      *STATE_VARIABLE_FunctorSubtypeInfo_30 = STATE_VARIABLE_FunctorSubtypeInfo_0_29;
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
    MR_String FunctorName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignEnumFunctor_6, (MR_Integer) 0))));
    uint32_t FunctorOrdinal_10 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), ForeignEnumFunctor_6, (MR_Integer) 1)));

    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), ((MR_Box) (MR_Word) (FunctorOrdinal_10)), ((MR_Box) (ForeignEnumFunctor_6)), STATE_VARIABLE_OrdinalMap_0_12, STATE_VARIABLE_OrdinalMap_13);
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), ((MR_Box) (FunctorName_9)), ((MR_Box) (ForeignEnumFunctor_6)), STATE_VARIABLE_NameMap_0_14, STATE_VARIABLE_NameMap_15);
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
    MR_String FunctorName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), EnumFunctor_6, (MR_Integer) 0))));
    uint32_t Ordinal_10 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), EnumFunctor_6, (MR_Integer) 1)));

    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), ((MR_Box) (MR_Word) (Ordinal_10)), ((MR_Box) (EnumFunctor_6)), STATE_VARIABLE_ValueMap_0_11, STATE_VARIABLE_ValueMap_12);
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), ((MR_Box) (FunctorName_9)), ((MR_Box) (EnumFunctor_6)), STATE_VARIABLE_NameMap_0_13, STATE_VARIABLE_NameMap_14);
  }
}

uint16_t MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(
  MR_Word ArgTypes_3)
{
  {
    uint16_t Vector_4;

    backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(ArgTypes_3, (MR_Integer) 0, UINT16_C(0), &Vector_4);
    return Vector_4;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer ArgNum_2,
  uint16_t STATE_VARIABLE_Vector_0_3,
  uint16_t * STATE_VARIABLE_Vector_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vector_4 = STATE_VARIABLE_Vector_0_3;
    else
    {
      MR_Word ArgType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      uint16_t STATE_VARIABLE_Vector_18_18;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_2;
      uint16_t next_value_of_STATE_VARIABLE_Vector_0_3;

      switch (MR_tag((MR_Word) ArgType_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer BitNum_39;
            uint16_t Var_46;

            succeeded = (ArgNum_2 >= ((MR_Integer) ((MR_Unsigned) 16 - (MR_Unsigned) 1)));
            if (succeeded)
            {
              BitNum_39 = (MR_Integer) ((MR_Unsigned) 16 - (MR_Unsigned) 1);
            }
            else
              BitNum_39 = ArgNum_2;
            Var_46 = mercury__uint16__f_60_60_2_f_0(UINT16_C(1), BitNum_39);
            STATE_VARIABLE_Vector_18_18 = (STATE_VARIABLE_Vector_0_3 | Var_46);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer BitNum_26;
            uint16_t Var_33;

            succeeded = (ArgNum_2 >= ((MR_Integer) ((MR_Unsigned) 16 - (MR_Unsigned) 1)));
            if (succeeded)
            {
              BitNum_26 = (MR_Integer) ((MR_Unsigned) 16 - (MR_Unsigned) 1);
            }
            else
              BitNum_26 = ArgNum_2;
            Var_33 = mercury__uint16__f_60_60_2_f_0(UINT16_C(1), BitNum_26);
            STATE_VARIABLE_Vector_18_18 = (STATE_VARIABLE_Vector_0_3 | Var_33);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Vector_18_18 = STATE_VARIABLE_Vector_0_3;
          break;
      }
      Var_19 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
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
    MR_Word TypeCtorGenInfos_5;
    MR_Word Dynamic_6;
    MR_Word Static0_7;
    MR_Word Static_8;

    hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(ModuleInfo_3, &TypeCtorGenInfos_5);
    backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(TypeCtorGenInfos_5, ModuleInfo_3, (MR_Word) ((MR_Unsigned) 0U), &Dynamic_6, (MR_Word) ((MR_Unsigned) 0U), &Static0_7);
    Static_8 = mercury__list__remove_dups_1_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), Static0_7);
    mercury__list__append_3_p_1((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), Dynamic_6, Static_8, Tables_4);
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
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Static_6 = STATE_VARIABLE_Static_0_5;
      *STATE_VARIABLE_Dynamic_4 = STATE_VARIABLE_Dynamic_0_3;
    }
    else
    {
      MR_Word TypeCtorGenInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeCtorGenInfos_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeCtorCModule_19;
      MR_Word STATE_VARIABLE_Dynamic_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Dynamic_0_3;

      backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(TypeCtorGenInfo_14, HeadVar__2_2, &TypeCtorCModule_19);
      {
        STATE_VARIABLE_Dynamic_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Dynamic_24_24, 0) = ((MR_Box) (TypeCtorCModule_19));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Dynamic_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Dynamic_0_3));
      }
      // direct tailcall eliminated
      ;
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
    MR_Word TypeCtorInfo_90_90;
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 1))));
    MR_String TypeName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 2))));
    MR_Integer TypeArity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 3))));
    MR_Word HldsDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 5))));
    MR_Word UnifyPredProcId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 6))));
    MR_Word ComparePredProcId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorGenInfo_4, (MR_Integer) 7))));
    MR_Word UnifyPredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UnifyPredProcId_13, (MR_Integer) 0))));
    MR_Integer UnifyProcId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), UnifyPredProcId_13, (MR_Integer) 1))));
    MR_Word UnifyProcLabel_17;
    MR_Word ComparePredId_18;
    MR_Integer CompareProcId_19;
    MR_Word CompareProcLabel_20;
    MR_Word UnifyUniv_21;
    MR_Word CompareUniv_22;
    MR_Word TypeBody_23;
    MR_Word Details_28;
    MR_Word TypeCtorData_70;
    MR_Word STATE_VARIABLE_Flags_79_79;
    MR_Word STATE_VARIABLE_Flags_81_81;
    uint16_t Var_82;
    MR_Word BuiltinCtor_27;
    MR_String ModuleStr1_26;

    UnifyProcLabel_17 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, UnifyPredId_15, UnifyProcId_16);
    ComparePredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ComparePredProcId_14, (MR_Integer) 0))));
    CompareProcId_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ComparePredProcId_14, (MR_Integer) 1))));
    CompareProcLabel_20 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, ComparePredId_18, CompareProcId_19);
    mercury__univ__type_to_univ_2_p_1((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), ((MR_Box) (UnifyProcLabel_17)), &UnifyUniv_21);
    mercury__univ__type_to_univ_2_p_1((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), ((MR_Box) (CompareProcLabel_20)), &CompareUniv_22);
    hlds__hlds_data__get_type_defn_body_2_p_0(HldsDefn_12, &TypeBody_23);
    succeeded = ((((MR_tag((MR_Word) TypeBody_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_5);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
        return;
      }
    }
    succeeded = ((MR_tag((MR_Word) ModuleName_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      ModuleStr1_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_8, (MR_Integer) 0))));
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
                  case (MR_Integer) 54:
                    if (MR_offset_streq(4, TypeName_9, (MR_String) "int64"))
                      case_num_0 = (MR_Integer) 7;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(4, TypeName_9, (MR_String) "int8"))
                      case_num_0 = (MR_Integer) 8;
                    break;
                }
              break;
            case (MR_Integer) 112:
              if (MR_offset_streq(1, TypeName_9, (MR_String) "pred"))
                case_num_0 = (MR_Integer) 9;
              break;
            case (MR_Integer) 115:
              if (((MR_nth_code_unit(TypeName_9, 1)) == (MR_Integer) 116))
                switch (MR_nth_code_unit(TypeName_9, 2)) {
                  case (MR_Integer) 97:
                    if (MR_offset_streq(3, TypeName_9, (MR_String) "stable_c_pointer"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                  case (MR_Integer) 114:
                    if (MR_offset_streq(3, TypeName_9, (MR_String) "string"))
                      case_num_0 = (MR_Integer) 11;
                    break;
                }
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(1, TypeName_9, (MR_String) "tuple"))
                case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 117:
              if (((((((MR_nth_code_unit(TypeName_9, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(TypeName_9, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(TypeName_9, 3)) == (MR_Integer) 116))))
                switch (MR_nth_code_unit(TypeName_9, 4)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 13;
                    break;
                  case (MR_Integer) 49:
                    if (MR_offset_streq(5, TypeName_9, (MR_String) "uint16"))
                      case_num_0 = (MR_Integer) 14;
                    break;
                  case (MR_Integer) 51:
                    if (MR_offset_streq(5, TypeName_9, (MR_String) "uint32"))
                      case_num_0 = (MR_Integer) 15;
                    break;
                  case (MR_Integer) 54:
                    if (MR_offset_streq(5, TypeName_9, (MR_String) "uint64"))
                      case_num_0 = (MR_Integer) 16;
                    break;
                  case (MR_Integer) 56:
                    if (MR_offset_streq(5, TypeName_9, (MR_String) "uint8"))
                      case_num_0 = (MR_Integer) 17;
                    break;
                }
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(1, TypeName_9, (MR_String) "void"))
                case_num_0 = (MR_Integer) 18;
              break;
          }
          if ((case_num_0 < (MR_Integer) 0))
            succeeded = MR_FALSE;
          else
          {
            // we found a match; look up the results
            ;
            BuiltinCtor_27 = ((&backend_libs__type_ctor_info_vector_common_10[0 + case_num_0]))->backend_libs__type_ctor_info__vector_common_type_10_0__vct_10_f_0;
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
            BuiltinCtor_27 = (MR_Word) ((MR_Unsigned) 72U);
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(TypeName_9, (MR_String) "type_ctor_desc") == 0))
          {
            BuiltinCtor_27 = (MR_Word) ((MR_Unsigned) 80U);
            succeeded = MR_TRUE;
          }
          else
          if ((strcmp(TypeName_9, (MR_String) "pseudo_type_desc") == 0))
          {
            BuiltinCtor_27 = (MR_Word) ((MR_Unsigned) 76U);
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
            BuiltinCtor_27 = (MR_Word) ((MR_Unsigned) 68U);
            succeeded = MR_TRUE;
          }
        }
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      {
        Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), Details_28, 1) = ((MR_Box) (BuiltinCtor_27));
      }
    else
    {
      MR_Word ImplCtor_30;
      MR_String ModuleStr_29;

      succeeded = (TypeArity_10 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ModuleName_8)) == (MR_Integer) 0);
        if (succeeded)
        {
          ModuleStr_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_8, (MR_Integer) 0))));
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
            MR_String str_2 = ((&backend_libs__type_ctor_info_vector_common_11[0 + slot_1]))->backend_libs__type_ctor_info__vector_common_type_11_0__vct_11_f_0;

            // hashed string simple lookup switch
            ;
            // compute the hash value of the input string
            ;
            // no collisions; no hash chain loop
            ;
            // lookup the string for this hash slot
            ;
            // did we find a match?
            ;
            if ((((str_2 != NULL)) && ((strcmp(str_2, TypeName_9) == 0))))
            {
              // we found a match; look up the results
              ;
              ImplCtor_30 = ((&backend_libs__type_ctor_info_vector_common_11[0 + slot_1]))->backend_libs__type_ctor_info__vector_common_type_11_0__vct_11_f_1;
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
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
          Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Details_28, 1) = (MR_Box) ((MR_Unsigned) (ImplCtor_30));
        }
      else
        switch (MR_tag((MR_Word) TypeBody_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ForeignBody_39 = (MR_Word) ((MR_Word) (TypeBody_23));
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
                Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Details_28, 1) = (MR_Box) ((MR_Unsigned) (IsStable_43));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeCanonical_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 1))));
              MR_Word MaybeRepn_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_23, (MR_Integer) 2))));
              MR_Word CtorRepns_50;
              MR_Word DuTypeKind_53;
              MR_Word EqualityAxioms_56;

              if ((MaybeRepn_47 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "MaybeRepn = no");
                  return;
                }
              }
              else
              {
                MR_Word Repn_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_47, (MR_Integer) 0))));

                CtorRepns_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_49, (MR_Integer) 0))));
                DuTypeKind_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_49, (MR_Integer) 3))));
              }
              if ((MaybeCanonical_46 == (MR_Word) ((MR_Unsigned) 0U)))
                EqualityAxioms_56 = (MR_Integer) 0;
              else
                EqualityAxioms_56 = (MR_Integer) 1;
              switch (MR_tag((MR_Word) DuTypeKind_53)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(DuTypeKind_53)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0(CtorRepns_50, (MR_Integer) 0, EqualityAxioms_56, &Details_28);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0(CtorRepns_50, (MR_Integer) 1, EqualityAxioms_56, &Details_28);
                      }
                      break;
                    case (MR_Integer) 2:
                      backend_libs__type_ctor_info__make_du_details_5_p_0(ModuleInfo_5, CtorRepns_50, TypeArity_10, EqualityAxioms_56, &Details_28);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Lang_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), DuTypeKind_53, (MR_Integer) 0))) & (MR_Integer) 3);

                    backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0(Lang_57, CtorRepns_50, EqualityAxioms_56, &Details_28);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word FunctorName_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_53, (MR_Integer) 0))));
                    MR_Word ArgType_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_53, (MR_Integer) 1))));
                    MR_Word MaybeArgName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_53, (MR_Integer) 2))));

                    backend_libs__type_ctor_info__make_notag_details_6_p_0(TypeArity_10, FunctorName_58, ArgType_59, MaybeArgName_60, EqualityAxioms_56, &Details_28);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_23, (MR_Integer) 0))));
              MR_Word MaybePseudoTypeInfo_85;

              backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(Type_44, TypeArity_10, (MR_Word) ((MR_Unsigned) 0U), &MaybePseudoTypeInfo_85);
              {
                Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Details_28, 1) = ((MR_Box) (MaybePseudoTypeInfo_85));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_23, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word DetailsSolver_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeBody_23, (MR_Integer) 1))));
                  MR_Word SolverTypeDetails_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver_32, (MR_Integer) 0))));
                  MR_Word RepnType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_33, (MR_Integer) 0))));
                  MR_Word MaybePseudoTypeInfo_38;

                  backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(RepnType_35, TypeArity_10, (MR_Word) ((MR_Unsigned) 0U), &MaybePseudoTypeInfo_38);
                  {
                    Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Details_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Details_28, 1) = ((MR_Box) (MaybePseudoTypeInfo_38));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
                    return;
                  }
                }
                break;
            }
            break;
        }
    }
    TypeCtorInfo_90_90 = (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_type_ctor_flag_0);
    STATE_VARIABLE_Flags_79_79 = mercury__set__init_0_f_0(TypeCtorInfo_90_90);
    switch (MR_tag((MR_Word) TypeBody_23)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Flags_81_81 = STATE_VARIABLE_Flags_79_79;
        break;
      case (MR_Integer) 1:
        {
          mercury__set__insert_3_p_0(TypeCtorInfo_90_90, ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_Flags_79_79, &STATE_VARIABLE_Flags_81_81);
        }
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Flags_81_81 = STATE_VARIABLE_Flags_79_79;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_23, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Flags_81_81 = STATE_VARIABLE_Flags_79_79;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Flags_81_81 = STATE_VARIABLE_Flags_79_79;
            break;
        }
        break;
    }
    Var_82 = mercury__uint16__det_from_int_1_f_0(TypeArity_10);
    {
      TypeCtorData_70 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorData_70, 0) = ((MR_Box) (MR_Word) (UINT8_C(17)));
      MR_hl_field(MR_mktag(0), TypeCtorData_70, 1) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), TypeCtorData_70, 2) = ((MR_Box) (TypeName_9));
      MR_hl_field(MR_mktag(0), TypeCtorData_70, 3) = ((MR_Box) (MR_Word) (Var_82));
      MR_hl_field(MR_mktag(0), TypeCtorData_70, 4) = ((MR_Box) (UnifyUniv_21));
      MR_hl_field(MR_mktag(0), TypeCtorData_70, 5) = ((MR_Box) (CompareUniv_22));
      MR_hl_field(MR_mktag(0), TypeCtorData_70, 6) = ((MR_Box) (STATE_VARIABLE_Flags_81_81));
      MR_hl_field(MR_mktag(0), TypeCtorData_70, 7) = ((MR_Box) (Details_28));
    }
    *RttiData_6 = (MR_Word) ((MR_Word) (TypeCtorData_70));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_NameTable_11;

    backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_NameTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_NameTable_11));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    uint32_t conv3_SeqNumUint32_6;

    backend_libs__type_ctor_info__lookup_functor_number_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), &conv3_SeqNumUint32_6);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv3_SeqNumUint32_6));
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_du_details_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Tuple conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = backend_libs__type_ctor_info__ctor_name_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_PtagTable_23;

    backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PtagTable_23);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PtagTable_23));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Ctors_7,
  MR_Integer TypeArity_8,
  MR_Word EqualityAxioms_9,
  MR_Word * Details_10)
{
  {
    MR_Word DuFunctors_11;
    MR_Word DuPtagTable_12;
    MR_Word FunctorNumberMap_13;
    MR_Word DuNameOrderedMap_14;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word OrdinalCtorNames_35;
    MR_Word LexicographicCtorNames_36;
    MR_Word LexicographicSeqNums_37;
    MR_Word CtorNameToSeqNumMap_38;
    MR_Integer Var_41;
    MR_Integer Var_42;
    MR_Word Var_44;
    MR_Box conv1_DuPtagTable_12;
    MR_Box conv5_DuNameOrderedMap_14;

    backend_libs__type_ctor_info__make_du_functors_5_p_0(ModuleInfo_6, Ctors_7, UINT32_C(0), TypeArity_8, &DuFunctors_11);
    Var_17 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0));
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[4]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[20]), DuFunctors_11, ((MR_Box) (Var_17)), &conv1_DuPtagTable_12);
    DuPtagTable_12 = ((MR_Word) (conv1_DuPtagTable_12));
    OrdinalCtorNames_35 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[21]), Ctors_7);
    mercury__list__sort_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), OrdinalCtorNames_35, &LexicographicCtorNames_36);
    Var_42 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), Ctors_7);
    Var_41 = (MR_Integer) ((MR_Unsigned) Var_42 - (MR_Unsigned) 1);
    LexicographicSeqNums_37 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_41);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LexicographicCtorNames_36, LexicographicSeqNums_37, &CtorNameToSeqNumMap_38);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_5_p_0_3));
      MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (CtorNameToSeqNumMap_38));
    }
    mercury__list__map_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Var_44, OrdinalCtorNames_35, &FunctorNumberMap_13);
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[5]));
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[6]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[22]), DuFunctors_11, ((MR_Box) (Var_19)), &conv5_DuNameOrderedMap_14);
    DuNameOrderedMap_14 = ((MR_Word) (conv5_DuNameOrderedMap_14));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *Details_10 = base;
      MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (EqualityAxioms_9));
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (DuFunctors_11));
      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (DuPtagTable_12));
      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (DuNameOrderedMap_14));
      MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (FunctorNumberMap_13));
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ArgInfo_10;
    MR_Word conv0_STATE_VARIABLE_FunctorSubtypeInfo_30;

    backend_libs__type_ctor_info__generate_du_arg_info_6_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_ArgInfo_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_FunctorSubtypeInfo_30);
    *wrapper_arg_2 = ((MR_Box) (conv1_ArgInfo_10));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_FunctorSubtypeInfo_30));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_functors__715__1_2_p_0(((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  uint32_t CurOrdinal_3,
  MR_Integer TypeArity_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word CtorRepn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word CtorRepns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word DuFunctor_14;
      MR_Word DuFunctors_15;
      uint32_t Ordinal_16 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 0)));
      MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 1))));
      MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 2))));
      MR_Word ConsTag_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 3))));
      MR_Word ConsArgRepns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 4))));
      MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn_10, (MR_Integer) 5))));
      MR_String FunctorName_23;
      MR_Word DuRep_24;
      MR_Word ExistTVars_25;
      MR_Word MaybeExistInfo_26;
      MR_Word ArgInfos_33;
      MR_Word FunctorSubtypeInfo_34;
      MR_Word Var_35;
      MR_Word Var_38;
      uint16_t Var_40;
      uint32_t Var_41;
      MR_Box conv2_FunctorSubtypeInfo_34;

      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_functors_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (MR_Word) (CurOrdinal_3));
        MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (MR_Word) (Ordinal_16));
      }
      mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_functors\'/5", (MR_String) "Ordinal != CurOrdinal");
      FunctorName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
      backend_libs__type_ctor_info__get_du_rep_2_p_0(ConsTag_19, &DuRep_24);
      if ((MaybeExistConstraints_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ExistTVars_25 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeExistInfo_26 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word ExistConstraints_27 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_17), (MR_Integer) 1));
        MR_Word ClassTable_31;
        MR_Word ExistInfo_32;

        ExistTVars_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_27, (MR_Integer) 0))));
        hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_1, &ClassTable_31);
        backend_libs__type_ctor_info__generate_exist_info_3_p_0(ExistConstraints_27, ClassTable_31, &ExistInfo_32);
        {
          MaybeExistInfo_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeExistInfo_26, 0) = ((MR_Box) (ExistInfo_32));
        }
      }
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[1]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_functors_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (TypeArity_4));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (ExistTVars_25));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_functor_subtype_info_0), Var_38, ConsArgRepns_20, &ArgInfos_33, ((MR_Box) ((MR_Integer) 0)), &conv2_FunctorSubtypeInfo_34);
      FunctorSubtypeInfo_34 = ((MR_Word) (conv2_FunctorSubtypeInfo_34));
      Var_40 = mercury__uint16__det_from_int_1_f_0(Arity_21);
      {
        DuFunctor_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DuFunctor_14, 0) = ((MR_Box) (FunctorName_23));
        MR_hl_field(MR_mktag(0), DuFunctor_14, 1) = ((MR_Box) (MR_Word) (Var_40));
        MR_hl_field(MR_mktag(0), DuFunctor_14, 2) = ((MR_Box) (MR_Word) (CurOrdinal_3));
        MR_hl_field(MR_mktag(0), DuFunctor_14, 3) = ((MR_Box) (DuRep_24));
        MR_hl_field(MR_mktag(0), DuFunctor_14, 4) = ((MR_Box) (ArgInfos_33));
        MR_hl_field(MR_mktag(0), DuFunctor_14, 5) = ((MR_Box) (MaybeExistInfo_26));
        MR_hl_field(MR_mktag(0), DuFunctor_14, 6) = (MR_Box) ((MR_Unsigned) (FunctorSubtypeInfo_34));
      }
      Var_41 = (CurOrdinal_3 + UINT32_C(1));
      backend_libs__type_ctor_info__make_du_functors_5_p_0(ModuleInfo_1, CtorRepns_11, Var_41, TypeArity_4, &DuFunctors_15);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DuFunctor_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DuFunctors_15));
      }
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_LambdaHeadVar__2_39;

    backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__873__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_LambdaHeadVar__2_39);
    *wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_39));
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_LocnMap_23;

    backend_libs__type_ctor_info__find_type_info_index_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_LocnMap_23);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_LocnMap_23));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_LambdaHeadVar__3_30;
    MR_Word conv0_LambdaHeadVar__5_32;

    backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__862__1_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_30, ((MR_Word) (wrapper_arg_4)), &conv0_LambdaHeadVar__5_32);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_30));
    *wrapper_arg_5 = ((MR_Box) (conv0_LambdaHeadVar__5_32));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_info_3_p_0(
  MR_Word ExistConstraints_4,
  MR_Word ClassTable_5,
  MR_Word * ExistInfo_6)
{
  {
    MR_Word ExistTVars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_4, (MR_Integer) 0))));
    MR_Word Constraints_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_4, (MR_Integer) 1))));
    MR_Word UnconstrainedTVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_4, (MR_Integer) 2))));
    MR_Word ConstrainedTVars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_4, (MR_Integer) 3))));
    MR_Word LocnMap0_11;
    MR_Integer TIsPlain_18;
    MR_Word LocnMap1_19;
    MR_Integer AllTIs_20;
    MR_Integer TIsInTCIs_21;
    MR_Word LocnMap_22;
    MR_Word TCConstraints_23;
    MR_Word ExistLocns_25;
    MR_Word Var_35;
    MR_Word Var_37;
    uint16_t Var_40;
    uint16_t Var_41;
    MR_Box conv3_TIsPlain_18;
    MR_Box conv2_LocnMap1_19;
    MR_Box conv5_LocnMap_22;

    mercury__map__init_1_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), &LocnMap0_11);
    mercury__list__foldl2_6_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[7]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[18]), UnconstrainedTVars_9, ((MR_Box) ((MR_Integer) 0)), &conv3_TIsPlain_18, ((MR_Box) (LocnMap0_11)), &conv2_LocnMap1_19);
    TIsPlain_18 = ((MR_Integer) (conv3_TIsPlain_18));
    LocnMap1_19 = ((MR_Word) (conv2_LocnMap1_19));
    mercury__list__length_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), ExistTVars_7, &AllTIs_20);
    TIsInTCIs_21 = (MR_Integer) ((MR_Unsigned) AllTIs_20 - (MR_Unsigned) TIsPlain_18);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_info_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Constraints_8));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (ClassTable_5));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (TIsPlain_18));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[7]), Var_35, ConstrainedTVars_10, ((MR_Box) (LocnMap1_19)), &conv5_LocnMap_22);
    LocnMap_22 = ((MR_Word) (conv5_LocnMap_22));
    TCConstraints_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[19]), Constraints_8);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_info_3_p_0_4));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (LocnMap_22));
    }
    mercury__list__map_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), Var_37, ExistTVars_7, &ExistLocns_25);
    Var_40 = mercury__uint16__det_from_int_1_f_0(TIsPlain_18);
    Var_41 = mercury__uint16__det_from_int_1_f_0(TIsInTCIs_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *ExistInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_Word) (Var_40));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_Word) (Var_41));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TCConstraints_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ExistLocns_25));
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__get_du_rep_2_p_0(
  MR_Word ConsTag_3,
  MR_Word * DuRep_4)
{
  switch (MR_tag((MR_Word) ConsTag_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *DuRep_4 = (MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[4]);
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.get_du_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.get_du_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
          return;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 14:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.get_du_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LocalSectag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 2))));
            MR_Word MustMask_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Unsigned SectagUint_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_6, (MR_Integer) 0))));
            MR_Word SectagBits_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_6, (MR_Integer) 2))));
            MR_Word SectagAndLocn_11;
            MR_Word Ptag_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));

            switch (MustMask_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SectagAndLocn_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SectagAndLocn_11, 0) = ((MR_Box) (SectagUint_8));
                }
                break;
              case (MR_Integer) 1:
                {
                  uint8_t NumBits_12 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_10, (MR_Integer) 0)));
                  MR_Unsigned Mask_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectagBits_10, (MR_Integer) 1))));

                  {
                    SectagAndLocn_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), SectagAndLocn_11, 0) = ((MR_Box) (SectagUint_8));
                    MR_hl_field(MR_mktag(2), SectagAndLocn_11, 1) = ((MR_Box) (MR_Word) (NumBits_12));
                    MR_hl_field(MR_mktag(2), SectagAndLocn_11, 2) = ((MR_Box) (Mask_13));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *DuRep_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_56));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SectagAndLocn_11));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_17)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *DuRep_4 = (MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[4]);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Ptag_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_17, (MR_Integer) 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *DuRep_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_70));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_17, (MR_Integer) 1))));
                  MR_Word SectagSize_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_18, (MR_Integer) 1))));
                  MR_Word Ptag_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_17, (MR_Integer) 0))));
                  MR_Unsigned SectagUint_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_18, (MR_Integer) 0))));
                  MR_Word SectagAndLocn_80;

                  if ((SectagSize_19 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      SectagAndLocn_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SectagAndLocn_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), SectagAndLocn_80, 1) = ((MR_Box) (SectagUint_78));
                    }
                  else
                  {
                    MR_Word SectagBits_71 = (MR_Word) (MR_body((MR_Word) (SectagSize_19), (MR_Integer) 1));
                    uint8_t NumSectagBits_72 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_71, (MR_Integer) 0)));
                    MR_Unsigned SectagMask_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectagBits_71, (MR_Integer) 1))));

                    {
                      SectagAndLocn_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), SectagAndLocn_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), SectagAndLocn_80, 1) = ((MR_Box) (SectagUint_78));
                      MR_hl_field(MR_mktag(3), SectagAndLocn_80, 2) = ((MR_Box) (MR_Word) (NumSectagBits_72));
                      MR_hl_field(MR_mktag(3), SectagAndLocn_80, 3) = ((MR_Box) (SectagMask_73));
                    }
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *DuRep_4 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_77));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SectagAndLocn_80));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Unsigned Data_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), RemoteArgsTagInfo_17, (MR_Integer) 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *DuRep_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Data_20));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));
            uint8_t NumSectagBits_15;
            MR_Unsigned SectagMask_16;
            MR_Word Ptag_64;
            MR_Unsigned SectagUint_66;
            MR_Word SectagAndLocn_69;

            if ((LocalArgsTagInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Ptag_64 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
              SectagUint_66 = (MR_Unsigned) 0U;
              NumSectagBits_15 = UINT8_C(0);
              SectagMask_16 = (MR_Unsigned) 0U;
            }
            else
            {
              MR_Word LocalSectag_58;
              MR_Word SectagBits_60;

              Ptag_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_14, (MR_Integer) 0))));
              LocalSectag_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_14, (MR_Integer) 1))));
              SectagUint_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 0))));
              SectagBits_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_58, (MR_Integer) 2))));
              NumSectagBits_15 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_60, (MR_Integer) 0)));
              SectagMask_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectagBits_60, (MR_Integer) 1))));
            }
            {
              SectagAndLocn_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), SectagAndLocn_69, 0) = ((MR_Box) (SectagUint_66));
              MR_hl_field(MR_mktag(2), SectagAndLocn_69, 1) = ((MR_Box) (MR_Word) (NumSectagBits_15));
              MR_hl_field(MR_mktag(2), SectagAndLocn_69, 2) = ((MR_Box) (SectagMask_16));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *DuRep_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_64));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SectagAndLocn_69));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Ptag_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *DuRep_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ptag_5));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    uint32_t conv5_SeqNumUint32_6;

    backend_libs__type_ctor_info__lookup_functor_number_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), &conv5_SeqNumUint32_6);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv5_SeqNumUint32_6));
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Tuple conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = backend_libs__type_ctor_info__ctor_name_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_1(
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

    backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_OrdinalMap_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_NameMap_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_OrdinalMap_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NameMap_15));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0(
  MR_Word Lang_5,
  MR_Word CtorRepns_6,
  MR_Word EqualityAxioms_7,
  MR_Word * Details_8)
{
  {
    MR_Word ForeignEnumFunctors_9;
    MR_Word OrdinalMap0_10;
    MR_Word NameMap0_11;
    MR_Word OrdinalMap_12;
    MR_Word NameMap_13;
    MR_Word FunctorNumberMap_14;
    MR_Word OrdinalCtorNames_29;
    MR_Word LexicographicCtorNames_30;
    MR_Word LexicographicSeqNums_31;
    MR_Word CtorNameToSeqNumMap_32;
    MR_Integer Var_35;
    MR_Integer Var_36;
    MR_Word Var_38;
    MR_Box conv3_OrdinalMap_12;
    MR_Box conv2_NameMap_13;

    backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0(Lang_5, CtorRepns_6, UINT32_C(0), &ForeignEnumFunctors_9);
    OrdinalMap0_10 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0));
    NameMap0_11 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[2]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[3]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[16]), ForeignEnumFunctors_9, ((MR_Box) (OrdinalMap0_10)), &conv3_OrdinalMap_12, ((MR_Box) (NameMap0_11)), &conv2_NameMap_13);
    OrdinalMap_12 = ((MR_Word) (conv3_OrdinalMap_12));
    NameMap_13 = ((MR_Word) (conv2_NameMap_13));
    OrdinalCtorNames_29 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[17]), CtorRepns_6);
    mercury__list__sort_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), OrdinalCtorNames_29, &LexicographicCtorNames_30);
    Var_36 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), CtorRepns_6);
    Var_35 = (MR_Integer) ((MR_Unsigned) Var_36 - (MR_Unsigned) 1);
    LexicographicSeqNums_31 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_35);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LexicographicCtorNames_30, LexicographicSeqNums_31, &CtorNameToSeqNumMap_32);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (CtorNameToSeqNumMap_32));
    }
    mercury__list__map_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Var_38, OrdinalCtorNames_29, &FunctorNumberMap_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *Details_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) (((((MR_Unsigned) (Lang_5) << 1)) | (MR_Unsigned) (EqualityAxioms_7)));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ForeignEnumFunctors_9));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (OrdinalMap_12));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NameMap_13));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (FunctorNumberMap_14));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__634__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__630__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__628__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__627__1_2_p_0(((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0(
  MR_Word Lang_1,
  MR_Word HeadVar__2_2,
  uint32_t CurOrdinal_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FunctorRepn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word FunctorRepns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ForeignEnumFunctor_11;
      MR_Word ForeignEnumFunctors_12;
      uint32_t Ordinal_13 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), FunctorRepn_8, (MR_Integer) 0)));
      MR_Word MaybeExistConstraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorRepn_8, (MR_Integer) 1))));
      MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorRepn_8, (MR_Integer) 2))));
      MR_Word ConsTag_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorRepn_8, (MR_Integer) 3))));
      MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FunctorRepn_8, (MR_Integer) 5))));
      MR_String ForeignTagValue_22;
      MR_String FunctorName_51;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_59;
      uint32_t Var_68;

      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (MR_Word) (CurOrdinal_3));
        MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (MR_Word) (Ordinal_13));
      }
      mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "Ordinal != CurOrdinal");
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (MaybeExistConstraints_14));
        MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "existential constraints in functor in enum");
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_3));
        MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Arity_18));
        MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "functor in foreign enum has nonzero arity");
      switch (MR_tag((MR_Word) ConsTag_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "non foreign tag for foreign enum functor");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "non foreign tag for foreign enum functor");
              return;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_16, (MR_Integer) 0))))) {
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
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "non foreign tag for foreign enum functor");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ForeignTagLang_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ConsTag_16, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word Var_65;

                ForeignTagValue_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsTag_16, (MR_Integer) 2))));
                {
                  Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[7]));
                  MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Lang_1));
                  MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (ForeignTagLang_20));
                }
                mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "language mismatch between foreign tag and foreign enum");
              }
              break;
          }
          break;
      }
      FunctorName_51 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_15);
      {
        ForeignEnumFunctor_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignEnumFunctor_11, 0) = ((MR_Box) (FunctorName_51));
        MR_hl_field(MR_mktag(0), ForeignEnumFunctor_11, 1) = ((MR_Box) (MR_Word) (CurOrdinal_3));
        MR_hl_field(MR_mktag(0), ForeignEnumFunctor_11, 2) = ((MR_Box) (ForeignTagValue_22));
      }
      Var_68 = (CurOrdinal_3 + UINT32_C(1));
      backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0(Lang_1, FunctorRepns_9, Var_68, &ForeignEnumFunctors_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignEnumFunctor_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ForeignEnumFunctors_12));
      }
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    uint32_t conv5_SeqNumUint32_6;

    backend_libs__type_ctor_info__lookup_functor_number_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), &conv5_SeqNumUint32_6);
    *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv5_SeqNumUint32_6));
  }
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Tuple conv4_HeadVar__2_2;

    conv4_HeadVar__2_2 = backend_libs__type_ctor_info__ctor_name_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_3(
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

    backend_libs__type_ctor_info__make_enum_maps_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ValueMap_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_NameMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ValueMap_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NameMap_14));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__535__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__532__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0(
  MR_Word CtorRepns_5,
  MR_Word IsDummy_6,
  MR_Word EqualityAxioms_7,
  MR_Word * Details_8)
{
  {
    MR_bool succeeded;
    MR_Word EnumFunctors_13;
    MR_Word ValueMap0_14;
    MR_Word NameMap0_15;
    MR_Word ValueMap_16;
    MR_Word NameMap_17;
    MR_Word FunctorNumberMap_18;
    MR_Word OrdinalCtorNames_49;
    MR_Word LexicographicCtorNames_50;
    MR_Word LexicographicSeqNums_51;
    MR_Word CtorNameToSeqNumMap_52;
    MR_Integer Var_55;
    MR_Integer Var_56;
    MR_Word Var_58;
    MR_Box conv3_ValueMap_16;
    MR_Box conv2_NameMap_17;

    if ((CtorRepns_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/4", (MR_String) "enum with no ctors");
        return;
      }
    }
    else
    {
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_5, (MR_Integer) 1))));

      if ((Var_45 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[5]));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (IsDummy_6));
          MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/4", (MR_String) "one ctor but not dummy");
      }
      else
      {
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[5]));
          MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_2));
          MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (IsDummy_6));
          MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_20, (MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/4", (MR_String) "more than one ctor but dummy");
      }
    }
    backend_libs__type_ctor_info__make_enum_functors_4_p_0(CtorRepns_5, IsDummy_6, UINT32_C(0), &EnumFunctors_13);
    ValueMap0_14 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0));
    NameMap0_15 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[1]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[14]), EnumFunctors_13, ((MR_Box) (ValueMap0_14)), &conv3_ValueMap_16, ((MR_Box) (NameMap0_15)), &conv2_NameMap_17);
    ValueMap_16 = ((MR_Word) (conv3_ValueMap_16));
    NameMap_17 = ((MR_Word) (conv2_NameMap_17));
    OrdinalCtorNames_49 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[15]), CtorRepns_5);
    mercury__list__sort_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), OrdinalCtorNames_49, &LexicographicCtorNames_50);
    Var_56 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), CtorRepns_5);
    Var_55 = (MR_Integer) ((MR_Unsigned) Var_56 - (MR_Unsigned) 1);
    LexicographicSeqNums_51 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_55);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LexicographicCtorNames_50, LexicographicSeqNums_51, &CtorNameToSeqNumMap_52);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_4_p_0_5));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (CtorNameToSeqNumMap_52));
    }
    mercury__list__map_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Var_58, OrdinalCtorNames_49, &FunctorNumberMap_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Details_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) (EqualityAxioms_7) << 1)) | (MR_Unsigned) (IsDummy_6)));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (EnumFunctors_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ValueMap_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NameMap_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FunctorNumberMap_18));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__571__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__575__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__567__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__565__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__564__1_2_p_0(((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word IsDummy_2,
  uint32_t CurOrdinal_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FunctorRepn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word FunctorRepns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word EnumFunctor_11;
      MR_Word EnumFunctors_12;
      uint32_t Ordinal_13 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), FunctorRepn_7, (MR_Integer) 0)));
      MR_Word MaybeExistConstraints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorRepn_7, (MR_Integer) 1))));
      MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorRepn_7, (MR_Integer) 2))));
      MR_Word ConsTag_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctorRepn_7, (MR_Integer) 3))));
      MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FunctorRepn_7, (MR_Integer) 5))));
      MR_String FunctorName_21;
      MR_Word Var_22;
      MR_Word Var_25;
      MR_Word Var_29;
      uint32_t Var_42;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (MR_Word) (CurOrdinal_3));
        MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (MR_Word) (Ordinal_13));
      }
      mercury__require__expect_3_p_0(Var_22, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/4", (MR_String) "Ordinal != CurOrdinal");
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (MaybeExistConstraints_14));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/4", (MR_String) "existential constraints in functor in enum");
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_4_p_0_3));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Arity_18));
        MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/4", (MR_String) "functor in enum has nonzero arity");
      switch (IsDummy_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_33;

            {
              Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[4]));
              MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_4_p_0_4));
              MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ConsTag_16));
              MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/4", (MR_String) "dummy functor\'s tag is not dummy_tag");
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Integer CurOrdinalInt_20;
            MR_Word Var_37;
            MR_Word Var_40;
            MR_Word Var_41;

            CurOrdinalInt_20 = mercury__uint32__cast_to_int_1_f_0(CurOrdinal_3);
            {
              Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (CurOrdinalInt_20));
            }
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
            }
            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[4]));
              MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_4_p_0_5));
              MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ConsTag_16));
              MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (Var_40));
            }
            mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/4", (MR_String) "enum functor\'s tag is not the expected int_tag");
          }
          break;
      }
      FunctorName_21 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_15);
      {
        EnumFunctor_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), EnumFunctor_11, 0) = ((MR_Box) (FunctorName_21));
        MR_hl_field(MR_mktag(0), EnumFunctor_11, 1) = ((MR_Box) (MR_Word) (CurOrdinal_3));
      }
      Var_42 = (CurOrdinal_3 + UINT32_C(1));
      backend_libs__type_ctor_info__make_enum_functors_4_p_0(FunctorRepns_8, IsDummy_2, Var_42, &EnumFunctors_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EnumFunctor_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (EnumFunctors_12));
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

    FunctorName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_8);
    backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(ArgType_9, TypeArity_7, (MR_Word) ((MR_Unsigned) 0U), &MaybePseudoTypeInfo_16);
    succeeded = ((((MR_tag((MR_Word) ArgType_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgType_9, (MR_Integer) 3))));
      succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      FunctorSubtypeInfo_22 = (MR_Integer) 1;
    else
      FunctorSubtypeInfo_22 = (MR_Integer) 0;
    {
      Functor_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Functor_23, 0) = ((MR_Box) (FunctorName_13));
      MR_hl_field(MR_mktag(0), Functor_23, 1) = ((MR_Box) (MaybePseudoTypeInfo_16));
      MR_hl_field(MR_mktag(0), Functor_23, 2) = ((MR_Box) (MaybeArgName_10));
      MR_hl_field(MR_mktag(0), Functor_23, 3) = (MR_Box) ((MR_Unsigned) (FunctorSubtypeInfo_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Details_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (EqualityAxioms_11));
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
      AllTypeCtorGenInfos_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0), BuiltinTypeCtorGenInfos_8, LocalTypeCtorGenInfos_7);
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

    succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__211__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeCtor_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TypeCtors_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeCtorGenInfo_11;
      MR_Word TypeCtorGenInfos_12;
      MR_Word SymName_13;
      MR_Integer TypeArity_14;

      backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtors_10, &TypeCtorGenInfos_12);
      SymName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 0))));
      TypeArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
      {
        MR_Word TypeModuleName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 0))));
        MR_String TypeName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_13, (MR_Integer) 1))));
        MR_Word Var_20;
        MR_Word Var_23;
        MR_Word TVarSet_27;
        MR_Word Kinds_29;
        MR_Word Context_33;
        MR_Word SpecMaps_48;
        MR_Word UnifyMap_49;
        MR_Word UnifyPredId_50;
        MR_Integer UnifyProcInt_51;
        MR_Integer UnifyProcId_52;
        MR_Word Unify_53;
        MR_Word CompareMap_54;
        MR_Word ComparePredId_55;
        MR_Integer CompareProcInt_56;
        MR_Integer CompareProcId_57;
        MR_Word Compare_58;
        MR_Word Status_59;
        MR_Box conv0_UnifyPredId_50;
        MR_Box conv1_ComparePredId_55;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (TypeModuleName_15));
        }
        mercury__require__expect_3_p_0(Var_20, (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", (MR_String) "module mismatch");
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_27);
        mercury__map__init_1_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &Kinds_29);
        mercury__term__context_init_1_p_0(&Context_33);
        hlds__hlds_data__create_hlds_type_defn_10_p_0(TVarSet_27, (MR_Word) ((MR_Unsigned) 0U), Kinds_29, (MR_Word) (MR_mkword(MR_mktag(3), &backend_libs__type_ctor_info_scalar_common_1[3])), (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), (MR_Integer) 1, (MR_Integer) 0, Context_33, &Var_23);
        hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(HeadVar__1_1, &SpecMaps_48);
        UnifyMap_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecMaps_48, (MR_Integer) 0))));
        mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UnifyMap_49, ((MR_Box) (TypeCtor_9)), &conv0_UnifyPredId_50);
        UnifyPredId_50 = ((MR_Word) (conv0_UnifyPredId_50));
        hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &UnifyProcInt_51);
        hlds__hlds_pred__proc_id_to_int_2_p_1(&UnifyProcId_52, UnifyProcInt_51);
        {
          Unify_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Unify_53, 0) = ((MR_Box) (UnifyPredId_50));
          MR_hl_field(MR_mktag(0), Unify_53, 1) = ((MR_Box) (UnifyProcId_52));
        }
        CompareMap_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecMaps_48, (MR_Integer) 2))));
        mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CompareMap_54, ((MR_Box) (TypeCtor_9)), &conv1_ComparePredId_55);
        ComparePredId_55 = ((MR_Word) (conv1_ComparePredId_55));
        hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &CompareProcInt_56);
        hlds__hlds_pred__proc_id_to_int_2_p_1(&CompareProcId_57, CompareProcInt_56);
        {
          Compare_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Compare_58, 0) = ((MR_Box) (ComparePredId_55));
          MR_hl_field(MR_mktag(0), Compare_58, 1) = ((MR_Box) (CompareProcId_57));
        }
        hlds__hlds_data__get_type_defn_status_2_p_0(Var_23, &Status_59);
        {
          TypeCtorGenInfo_11 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 0) = ((MR_Box) (TypeCtor_9));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 1) = ((MR_Box) (TypeModuleName_15));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 2) = ((MR_Box) (TypeName_16));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 3) = ((MR_Box) (TypeArity_14));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 4) = ((MR_Box) (Status_59));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 5) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 6) = ((MR_Box) (Unify_53));
          MR_hl_field(MR_mktag(0), TypeCtorGenInfo_11, 7) = ((MR_Box) (Compare_58));
        }
      }
      else
      {
        MR_String Var_18;
        MR_String TypeName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_13, (MR_Integer) 0))));

        Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", TypeName_24);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", Var_18);
          return;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeCtorDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TypeCtorDefns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeCtorGenInfosTail_12;
      MR_Word TypeCtor_13;
      MR_Word TypeDefn_14;
      MR_Word SymName_15;
      MR_Integer TypeArity_16;

      backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(ModuleInfo_1, ModuleName_2, TypeCtorDefns_10, &TypeCtorGenInfosTail_12);
      TypeCtor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorDefn_9, (MR_Integer) 0))));
      TypeDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorDefn_9, (MR_Integer) 1))));
      SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
      TypeArity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1))
      {
        MR_Word TypeModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 0))));
        MR_String TypeName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_15, (MR_Integer) 1))));
        MR_Word Var_24;
        MR_Word TypeCtor_32;
        MR_Word TypeBody_33;

        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeModuleName_17, ModuleName_2);
        if (succeeded)
        {
          TypeCtor_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorDefn_9, (MR_Integer) 0))));
          Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorDefn_9, (MR_Integer) 1))));
          hlds__hlds_data__get_type_defn_body_2_p_0(Var_24, &TypeBody_33);
          succeeded = ((((MR_tag((MR_Word) TypeBody_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_33, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
          }
          if (!(succeeded))
            succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(TypeCtor_32, TypeBody_33);
          if (succeeded)
          {
            MR_String ModuleNameString_35;

            succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_1);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TypeModuleName_17)) == (MR_Integer) 0);
              if (succeeded)
              {
                ModuleNameString_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeModuleName_17, (MR_Integer) 0))));
                if ((strcmp(ModuleNameString_35, (MR_String) "builtin") == 0))
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
                            case (MR_Integer) 54:
                              if (MR_offset_streq(4, TypeName_18, (MR_String) "int64"))
                                case_num_0 = (MR_Integer) 7;
                              break;
                            case (MR_Integer) 56:
                              if (MR_offset_streq(4, TypeName_18, (MR_String) "int8"))
                                case_num_0 = (MR_Integer) 8;
                              break;
                          }
                        break;
                      case (MR_Integer) 112:
                        if (MR_offset_streq(1, TypeName_18, (MR_String) "pred"))
                          case_num_0 = (MR_Integer) 9;
                        break;
                      case (MR_Integer) 115:
                        if (((MR_nth_code_unit(TypeName_18, 1)) == (MR_Integer) 116))
                          switch (MR_nth_code_unit(TypeName_18, 2)) {
                            case (MR_Integer) 97:
                              if (MR_offset_streq(3, TypeName_18, (MR_String) "stable_c_pointer"))
                                case_num_0 = (MR_Integer) 10;
                              break;
                            case (MR_Integer) 114:
                              if (MR_offset_streq(3, TypeName_18, (MR_String) "string"))
                                case_num_0 = (MR_Integer) 11;
                              break;
                          }
                        break;
                      case (MR_Integer) 116:
                        if (MR_offset_streq(1, TypeName_18, (MR_String) "tuple"))
                          case_num_0 = (MR_Integer) 12;
                        break;
                      case (MR_Integer) 117:
                        if (((((((MR_nth_code_unit(TypeName_18, 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(TypeName_18, 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(TypeName_18, 3)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(TypeName_18, 4)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 13;
                              break;
                            case (MR_Integer) 49:
                              if (MR_offset_streq(5, TypeName_18, (MR_String) "uint16"))
                                case_num_0 = (MR_Integer) 14;
                              break;
                            case (MR_Integer) 51:
                              if (MR_offset_streq(5, TypeName_18, (MR_String) "uint32"))
                                case_num_0 = (MR_Integer) 15;
                              break;
                            case (MR_Integer) 54:
                              if (MR_offset_streq(5, TypeName_18, (MR_String) "uint64"))
                                case_num_0 = (MR_Integer) 16;
                              break;
                            case (MR_Integer) 56:
                              if (MR_offset_streq(5, TypeName_18, (MR_String) "uint8"))
                                case_num_0 = (MR_Integer) 17;
                              break;
                          }
                        break;
                      case (MR_Integer) 118:
                        if (MR_offset_streq(1, TypeName_18, (MR_String) "void"))
                          case_num_0 = (MR_Integer) 18;
                        break;
                    }
                    if ((case_num_0 < (MR_Integer) 0))
                      succeeded = MR_FALSE;
                    else
                    {
                      // we found a match; look up the results
                      ;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                else
                if ((strcmp(ModuleNameString_35, (MR_String) "type_desc") == 0))
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
                if ((strcmp(ModuleNameString_35, (MR_String) "private_builtin") == 0))
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
                    if ((strcmp(ModuleNameString_35, (MR_String) "table_builtin") == 0))
                      succeeded = (strcmp(TypeName_18, (MR_String) "ml_subgoal") == 0);
                    else
                    if ((strcmp(ModuleNameString_35, (MR_String) "private_builtin") == 0))
                    {
                      MR_Integer slot_1 = ((MR_hash_string6(TypeName_18)) & (MR_Integer) 31);
                      MR_String str_2 = ((&backend_libs__type_ctor_info_vector_common_4[0 + slot_1]))->backend_libs__type_ctor_info__vector_common_type_4_0__vct_4_f_0;

                      // hashed string simple lookup switch
                      ;
                      // compute the hash value of the input string
                      ;
                      // no collisions; no hash chain loop
                      ;
                      // lookup the string for this hash slot
                      ;
                      // did we find a match?
                      ;
                      if ((((str_2 != NULL)) && ((strcmp(str_2, TypeName_18) == 0))))
                      {
                        // we found a match; look up the results
                        ;
                        succeeded = MR_TRUE;
                        // jump out of search loop
                        ;
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
            succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(TypeDefn_14, Var_24);
        }
        if (succeeded)
        {
          MR_Word TypeCtorGenInfo_19;

          backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(ModuleInfo_1, TypeCtor_13, TypeModuleName_17, TypeName_18, TypeArity_16, TypeDefn_14, &TypeCtorGenInfo_19);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
        MR_String Var_21;
        MR_String TypeName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_15, (MR_Integer) 0))));

        Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", TypeName_23);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.gen_type_ctor_gen_infos\'/4", Var_21);
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
    MR_Word SpecMaps_15;
    MR_Word UnifyMap_16;
    MR_Word UnifyPredId_17;
    MR_Integer UnifyProcInt_18;
    MR_Integer UnifyProcId_19;
    MR_Word Unify_20;
    MR_Word CompareMap_21;
    MR_Word ComparePredId_22;
    MR_Integer CompareProcInt_23;
    MR_Integer CompareProcId_24;
    MR_Word Compare_25;
    MR_Word Status_26;
    MR_Box conv0_UnifyPredId_17;
    MR_Box conv1_ComparePredId_22;

    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_8, &SpecMaps_15);
    UnifyMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecMaps_15, (MR_Integer) 0))));
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UnifyMap_16, ((MR_Box) (TypeCtor_9)), &conv0_UnifyPredId_17);
    UnifyPredId_17 = ((MR_Word) (conv0_UnifyPredId_17));
    hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &UnifyProcInt_18);
    hlds__hlds_pred__proc_id_to_int_2_p_1(&UnifyProcId_19, UnifyProcInt_18);
    {
      Unify_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unify_20, 0) = ((MR_Box) (UnifyPredId_17));
      MR_hl_field(MR_mktag(0), Unify_20, 1) = ((MR_Box) (UnifyProcId_19));
    }
    CompareMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecMaps_15, (MR_Integer) 2))));
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CompareMap_21, ((MR_Box) (TypeCtor_9)), &conv1_ComparePredId_22);
    ComparePredId_22 = ((MR_Word) (conv1_ComparePredId_22));
    hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &CompareProcInt_23);
    hlds__hlds_pred__proc_id_to_int_2_p_1(&CompareProcId_24, CompareProcInt_23);
    {
      Compare_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Compare_25, 0) = ((MR_Box) (ComparePredId_22));
      MR_hl_field(MR_mktag(0), Compare_25, 1) = ((MR_Box) (CompareProcId_24));
    }
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_13, &Status_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorGenInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeName_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (TypeArity_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Status_26));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (TypeDefn_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Unify_20));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Compare_25));
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__type_ctor_info____Unify____name_sort_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    backend_libs__type_ctor_info____Compare____name_sort_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = backend_libs__type_ctor_info____Unify____tag_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    backend_libs__type_ctor_info____Compare____tag_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = backend_libs__type_ctor_info____Unify____tag_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    backend_libs__type_ctor_info____Compare____tag_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_name_sort_info_0);
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
