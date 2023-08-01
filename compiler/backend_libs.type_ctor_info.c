/*
** Automatically generated from `type_ctor_info.m'
** by the Mercury compiler,
** version rotd-2023-08-01
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "int8.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.pseudo_type_info.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
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

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

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
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__1048__1_2_p_0(
  int8_t NumSectagBits_11,
  int8_t NumSectagBits0_17);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__951__1_3_p_0(
  MR_Word LocnMap_22,
  MR_Word LambdaHeadVar__1_38,
  MR_Word * LambdaHeadVar__2_39);

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__940__1_5_p_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Integer LambdaHeadVar__2_29,
  MR_Integer * LambdaHeadVar__3_30,
  MR_Word LambdaHeadVar__4_31,
  MR_Word * LambdaHeadVar__5_32);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_functors__793__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_16);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__705__1_2_p_0(
  MR_Word Lang_1,
  MR_Word ForeignTagLang_20);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__701__1_2_p_0(
  MR_Integer Arity_18,
  MR_Integer HeadVar__2_62);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__699__1_2_p_0(
  MR_Word MaybeExistConstraints_14,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__698__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_13);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__620__1_2_p_0(
  uint32_t CurOrdinal_4,
  uint32_t ConsTagUint32_24);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__628__1_2_p_0(
  MR_Word ConsTag_19,
  MR_Word HeadVar__2_48);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__610__1_2_p_0(
  MR_Integer Arity_21,
  MR_Integer HeadVar__2_38);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__608__1_2_p_0(
  MR_Word MaybeExistConstraints_17,
  MR_Word HeadVar__2_34);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__607__1_2_p_0(
  uint32_t CurOrdinal_4,
  uint32_t Ordinal_16);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__571__1_2_p_0(
  MR_Word IsDummy_11,
  MR_Word HeadVar__2_39);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__563__1_2_p_0(
  MR_Word IsDummy_11,
  MR_Word HeadVar__2_34);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__216__1_2_p_0(
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
backend_libs__type_ctor_info__make_enum_maps_7_p_0(
  MR_Word EnumFunctor_8,
  MR_Word STATE_VARIABLE_OrdinalMap_0_15,
  MR_Word * STATE_VARIABLE_OrdinalMap_16,
  MR_Word STATE_VARIABLE_NameMap_0_17,
  MR_Word * STATE_VARIABLE_NameMap_18,
  MR_Word STATE_VARIABLE_ValueEqualsOrdinal_0_19,
  MR_Word * STATE_VARIABLE_ValueEqualsOrdinal_20);

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
backend_libs__type_ctor_info__make_du_details_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_du_details_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word MaybeSuperType_9,
  MR_Word Ctors_10,
  MR_Integer TypeArity_11,
  MR_Word EqualityAxioms_12,
  MR_Word * Details_13,
  MR_Word * IndexableByPtag_14);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word MaybeSuperType_9,
  MR_Word CtorRepns_10,
  MR_Word IsDummy_11,
  MR_Word EqualityAxioms_12,
  MR_Word * Details_13,
  MR_Word * IndexableByEnumValue_14);

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_5(
  MR_Box closure_arg);

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
  MR_Word MaybeSuperType_1,
  MR_Word HeadVar__2_2,
  MR_Word IsDummy_3,
  uint32_t CurOrdinal_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer TypeArity_10,
  MR_Word MaybeSuperType_11,
  MR_Word SymName_12,
  MR_Word ArgType_13,
  MR_Word MaybeArgName_14,
  MR_Word EqualityAxioms_15,
  MR_Word * Details_16);

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

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_4[2][1];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_6[10][5];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_7[1][10];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[4][6];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_9[2][8];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_10[2][9];


struct backend_libs__type_ctor_info__vector_common_type_5_0_s {
  const MR_String backend_libs__type_ctor_info__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_5_0_s backend_libs__type_ctor_info_vector_common_5[32];

struct backend_libs__type_ctor_info__vector_common_type_11_0_s {
  const MR_Word backend_libs__type_ctor_info__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_11_0_s backend_libs__type_ctor_info_vector_common_11[19];

struct backend_libs__type_ctor_info__vector_common_type_12_0_s {
  const MR_String backend_libs__type_ctor_info__vector_common_type_12_0__vct_12_f_0;
  const MR_Word backend_libs__type_ctor_info__vector_common_type_12_0__vct_12_f_1;
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_12_0_s backend_libs__type_ctor_info_vector_common_12[32];



static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[9]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[12]))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_2[23][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint16_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_1[0])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[8])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[10]))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[11]))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[11]))
  },
  /* row  14 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[0])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[6])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_9[0])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[6])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_9[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_functors_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[8])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_functors_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[2])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[6])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[3])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_4[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_6[10][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_maybe_dummy_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_maybe_dummy_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int8_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int8_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint32_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain___vti_tuple_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_uint16_0backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_uint16_0backend_libs__rtti__type_ctor_info_du_functor_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_9[2][8] = {
  /* row   0 */
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
  /* row   1 */
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

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_10[2][9] = {
  /* row   0 */
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
  /* row   1 */
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


static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_5_0_s backend_libs__type_ctor_info_vector_common_5[32] = {
  /* row   0 */   { NULL },
  /* row   1 */   { NULL },
  /* row   2 */   { (MR_String) "ticket" },
  /* row   3 */   { NULL },
  /* row   4 */   { (MR_String) "redofr" },
  /* row   5 */   { NULL },
  /* row   6 */   { NULL },
  /* row   7 */   { NULL },
  /* row   8 */   { NULL },
  /* row   9 */   { NULL },
  /* row  10 */   { (MR_String) "type_ctor_info" },
  /* row  11 */   { (MR_String) "maxfr" },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) "typeclass_info" },
  /* row  14 */   { (MR_String) "base_typeclass_info" },
  /* row  15 */   { NULL },
  /* row  16 */   { NULL },
  /* row  17 */   { (MR_String) "succip" },
  /* row  18 */   { (MR_String) "heap_pointer" },
  /* row  19 */   { NULL },
  /* row  20 */   { (MR_String) "type_info" },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) "curfr" },
  /* row  24 */   { (MR_String) "trail_ptr" },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_11_0_s backend_libs__type_ctor_info_vector_common_11[19] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &backend_libs__type_ctor_info_scalar_common_4[0])) },
  /* row   1 */   { (MR_Word) ((MR_Unsigned) 44U) },
  /* row   2 */   { (MR_Word) ((MR_Unsigned) 40U) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 60U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 0U) },
  /* row   5 */   { (MR_Word) ((MR_Unsigned) 16U) },
  /* row   6 */   { (MR_Word) ((MR_Unsigned) 24U) },
  /* row   7 */   { (MR_Word) ((MR_Unsigned) 32U) },
  /* row   8 */   { (MR_Word) ((MR_Unsigned) 8U) },
  /* row   9 */   { (MR_Word) ((MR_Unsigned) 56U) },
  /* row  10 */   { (MR_Word) (MR_mkword(1, &backend_libs__type_ctor_info_scalar_common_4[1])) },
  /* row  11 */   { (MR_Word) ((MR_Unsigned) 48U) },
  /* row  12 */   { (MR_Word) ((MR_Unsigned) 64U) },
  /* row  13 */   { (MR_Word) ((MR_Unsigned) 4U) },
  /* row  14 */   { (MR_Word) ((MR_Unsigned) 20U) },
  /* row  15 */   { (MR_Word) ((MR_Unsigned) 28U) },
  /* row  16 */   { (MR_Word) ((MR_Unsigned) 36U) },
  /* row  17 */   { (MR_Word) ((MR_Unsigned) 12U) },
  /* row  18 */   { (MR_Word) ((MR_Unsigned) 52U) },
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_12_0_s backend_libs__type_ctor_info_vector_common_12[32] = {
  /* row   0 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   1 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   2 */
  {
    (MR_String) "ticket",
    (MR_Integer) 6
  },
  /* row   3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    (MR_String) "redofr",
    (MR_Integer) 4
  },
  /* row   5 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   6 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   9 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    (MR_String) "type_ctor_info",
    (MR_Integer) 9
  },
  /* row  11 */
  {
    (MR_String) "maxfr",
    (MR_Integer) 2
  },
  /* row  12 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  13 */
  {
    (MR_String) "typeclass_info",
    (MR_Integer) 10
  },
  /* row  14 */
  {
    (MR_String) "base_typeclass_info",
    (MR_Integer) 11
  },
  /* row  15 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  16 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  17 */
  {
    (MR_String) "succip",
    (MR_Integer) 1
  },
  /* row  18 */
  {
    (MR_String) "heap_pointer",
    (MR_Integer) 0
  },
  /* row  19 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  20 */
  {
    (MR_String) "type_info",
    (MR_Integer) 8
  },
  /* row  21 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  22 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  23 */
  {
    (MR_String) "curfr",
    (MR_Integer) 3
  },
  /* row  24 */
  {
    (MR_String) "trail_ptr",
    (MR_Integer) 7
  },
  /* row  25 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  27 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  28 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  29 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  30 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  31 */
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
#include "io.stream_ops.mh"


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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0) }
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
  { (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_ptag_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0),
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
  { (MR_TypeInfo) (&backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0) }
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_name_sort_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "name_sort_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  { (MR_TypeInfo) (&backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0) }
};

const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_list_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_list_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_list_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_map_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_map_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__1048__1_2_p_0(
  int8_t NumSectagBits_11,
  int8_t NumSectagBits0_17)
{
  MR_bool succeeded = (NumSectagBits0_17 == NumSectagBits_11);

  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__951__1_3_p_0(
  MR_Word LocnMap_22,
  MR_Word LambdaHeadVar__1_38,
  MR_Word * LambdaHeadVar__2_39)
{
  MR_Box conv0_LambdaHeadVar__2_39;

  mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), LocnMap_22, ((MR_Box) (LambdaHeadVar__1_38)), &conv0_LambdaHeadVar__2_39);
  *LambdaHeadVar__2_39 = ((MR_Word) (conv0_LambdaHeadVar__2_39));
}

static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__940__1_5_p_0(
  MR_Word LambdaHeadVar__1_28,
  MR_Integer LambdaHeadVar__2_29,
  MR_Integer * LambdaHeadVar__3_30,
  MR_Word LambdaHeadVar__4_31,
  MR_Word * LambdaHeadVar__5_32)
{
  MR_Word Locn_17;
  uint16_t Var_33;

  Var_33 = mercury__uint16__det_from_int_1_f_0(LambdaHeadVar__2_29);
  {
    Locn_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Locn_17, 0) = ((MR_Box) (MR_Word) (Var_33));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), ((MR_Box) (LambdaHeadVar__1_28)), ((MR_Box) (Locn_17)), LambdaHeadVar__4_31, LambdaHeadVar__5_32);
  *LambdaHeadVar__3_30 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__2_29 + (MR_Unsigned) 1);
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_functors__793__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_16)
{
  MR_bool succeeded = (Ordinal_16 == CurOrdinal_3);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__705__1_2_p_0(
  MR_Word Lang_1,
  MR_Word ForeignTagLang_20)
{
  MR_bool succeeded = (Lang_1 == ForeignTagLang_20);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__701__1_2_p_0(
  MR_Integer Arity_18,
  MR_Integer HeadVar__2_62)
{
  MR_bool succeeded = (Arity_18 == HeadVar__2_62);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__699__1_2_p_0(
  MR_Word MaybeExistConstraints_14,
  MR_Word HeadVar__2_58)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_14, HeadVar__2_58);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__698__1_2_p_0(
  uint32_t CurOrdinal_3,
  uint32_t Ordinal_13)
{
  MR_bool succeeded = (Ordinal_13 == CurOrdinal_3);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__620__1_2_p_0(
  uint32_t CurOrdinal_4,
  uint32_t ConsTagUint32_24)
{
  MR_bool succeeded = (ConsTagUint32_24 == CurOrdinal_4);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__628__1_2_p_0(
  MR_Word ConsTag_19,
  MR_Word HeadVar__2_48)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_data____Unify____cons_tag_0_0(ConsTag_19, HeadVar__2_48);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__610__1_2_p_0(
  MR_Integer Arity_21,
  MR_Integer HeadVar__2_38)
{
  MR_bool succeeded = (Arity_21 == HeadVar__2_38);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__608__1_2_p_0(
  MR_Word MaybeExistConstraints_17,
  MR_Word HeadVar__2_34)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_17, HeadVar__2_34);
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__607__1_2_p_0(
  uint32_t CurOrdinal_4,
  uint32_t Ordinal_16)
{
  MR_bool succeeded = (Ordinal_16 == CurOrdinal_4);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__571__1_2_p_0(
  MR_Word IsDummy_11,
  MR_Word HeadVar__2_39)
{
  MR_bool succeeded = (IsDummy_11 == HeadVar__2_39);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__563__1_2_p_0(
  MR_Word IsDummy_11,
  MR_Word HeadVar__2_34)
{
  MR_bool succeeded = (IsDummy_11 == HeadVar__2_34);

  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__216__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word TypeModuleName_15)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeModuleName_15, HeadVar__2_2);
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[13]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[13]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info__lookup_functor_number_3_p_0(
  MR_Word CtorNameToSeqNumMap_4,
  MR_Tuple CtorName_5,
  uint32_t * SeqNumUint32_6)
{
  MR_Integer SeqNum_7;
  MR_Box conv0_SeqNum_7;

  mercury__map__lookup_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CtorNameToSeqNumMap_4, ((MR_Box) (CtorName_5)), &conv0_SeqNum_7);
  SeqNum_7 = ((MR_Integer) (conv0_SeqNum_7));
  *SeqNumUint32_6 = mercury__uint32__det_from_int_1_f_0(SeqNum_7);
}

static MR_Tuple MR_CALL 
backend_libs__type_ctor_info__ctor_name_arity_1_f_0(
  MR_Word Ctor_3)
{
  MR_Tuple HeadVar__2_2;
  MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, Ctor_3, (MR_Integer) 2))));
  MR_Integer Var_5;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Ctor_3, (MR_Integer) 4))));

  Var_5 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), Var_10);
  {
    HeadVar__2_2 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_5));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(
  MR_Word DuFunctor_4,
  MR_Word STATE_VARIABLE_NameTable_0_10,
  MR_Word * STATE_VARIABLE_NameTable_11)
{
  MR_bool succeeded;
  MR_String Name_6 = ((MR_String) ((MR_hl_field(0, DuFunctor_4, (MR_Integer) 0))));
  uint16_t Arity_7 = ((uint16_t) (MR_Word) (MR_hl_field(0, DuFunctor_4, (MR_Integer) 1)));
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

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__1048__1_2_p_0(((int8_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((int8_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 4))));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
  MR_Word DuFunctor_4,
  MR_Word STATE_VARIABLE_PtagTable_0_22,
  MR_Word * STATE_VARIABLE_PtagTable_23)
{
  MR_bool succeeded;
  MR_Word DuRep_6 = ((MR_Word) ((MR_hl_field(0, DuFunctor_4, (MR_Integer) 3))));
  MR_Word Ptag_7;
  MR_Word SectagLocn_9;
  MR_Unsigned Sectag_10;
  int8_t NumSectagBits_11;
  MR_Word SectagTable0_15;
  MR_Box conv0_SectagTable0_15;

  if (((MR_tag((MR_Word) DuRep_6)) == (MR_Integer) 1))
  {
    Sectag_10 = ((MR_Unsigned) ((MR_hl_field(1, DuRep_6, (MR_Integer) 0))));
    Ptag_7 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
    SectagLocn_9 = (MR_Word) ((MR_Unsigned) 12U);
    NumSectagBits_11 = INT8_C(-1);
  }
  else
  {
    MR_Word SectagAndLocn_8;

    Ptag_7 = ((MR_Word) ((MR_hl_field(0, DuRep_6, (MR_Integer) 0))));
    SectagAndLocn_8 = ((MR_Word) ((MR_hl_field(0, DuRep_6, (MR_Integer) 1))));
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
          Sectag_10 = ((MR_Unsigned) ((MR_hl_field(1, SectagAndLocn_8, (MR_Integer) 0))));
          SectagLocn_9 = (MR_Word) ((MR_Unsigned) 8U);
          NumSectagBits_11 = INT8_C(-1);
        }
        break;
      case (MR_Integer) 2:
        {
          uint8_t NumSectagBitsUint8_12;
          MR_Unsigned Mask_13;

          Sectag_10 = ((MR_Unsigned) ((MR_hl_field(2, SectagAndLocn_8, (MR_Integer) 0))));
          NumSectagBitsUint8_12 = ((uint8_t) (MR_Word) (MR_hl_field(2, SectagAndLocn_8, (MR_Integer) 1)));
          Mask_13 = ((MR_Unsigned) ((MR_hl_field(2, SectagAndLocn_8, (MR_Integer) 2))));
          {
            SectagLocn_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SectagLocn_9, 0) = ((MR_Box) (MR_Word) (NumSectagBitsUint8_12));
            MR_hl_field(1, SectagLocn_9, 1) = ((MR_Box) (Mask_13));
          }
          NumSectagBits_11 = mercury__int8__cast_from_uint8_1_f_0(NumSectagBitsUint8_12);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, SectagAndLocn_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Sectag_10 = ((MR_Unsigned) ((MR_hl_field(3, SectagAndLocn_8, (MR_Integer) 1))));
              SectagLocn_9 = (MR_Word) ((MR_Unsigned) 12U);
              NumSectagBits_11 = INT8_C(-1);
            }
            break;
          case (MR_Integer) 1:
            {
              uint8_t NumSectagBitsUint8_33;
              MR_Unsigned Mask_34;

              Sectag_10 = ((MR_Unsigned) ((MR_hl_field(3, SectagAndLocn_8, (MR_Integer) 1))));
              NumSectagBitsUint8_33 = ((uint8_t) (MR_Word) (MR_hl_field(3, SectagAndLocn_8, (MR_Integer) 2)));
              Mask_34 = ((MR_Unsigned) ((MR_hl_field(3, SectagAndLocn_8, (MR_Integer) 3))));
              {
                SectagLocn_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, SectagLocn_9, 0) = ((MR_Box) (MR_Word) (NumSectagBitsUint8_33));
                MR_hl_field(2, SectagLocn_9, 1) = ((MR_Box) (Mask_34));
              }
              NumSectagBits_11 = mercury__int8__cast_from_uint8_1_f_0(NumSectagBitsUint8_33);
            }
            break;
        }
        break;
    }
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), STATE_VARIABLE_PtagTable_0_22, ((MR_Box) (Ptag_7)), &conv0_SectagTable0_15);
  if (succeeded)
  {
    SectagTable0_15 = ((MR_Word) (conv0_SectagTable0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Locn0_16 = ((MR_Word) ((MR_hl_field(0, SectagTable0_15, (MR_Integer) 0))));
    int8_t NumSectagBits0_17 = ((int8_t) (MR_Word) (MR_hl_field(0, SectagTable0_15, (MR_Integer) 1)));
    uint32_t NumSharers0_18 = ((uint32_t) (MR_Word) (MR_hl_field(0, SectagTable0_15, (MR_Integer) 2)));
    MR_Word SectagMap0_19 = ((MR_Word) ((MR_hl_field(0, SectagTable0_15, (MR_Integer) 3))));
    MR_Word SectagMap_20;
    MR_Word SectagTable_21;
    MR_Word Var_25;
    uint32_t Var_28;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[9]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (MR_Word) (NumSectagBits_11));
      MR_hl_field(0, Var_25, 4) = ((MR_Box) (MR_Word) (NumSectagBits0_17));
    }
    mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "sectag num bits disagreement");
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), ((MR_Box) (Sectag_10)), ((MR_Box) (DuFunctor_4)), SectagMap0_19, &SectagMap_20);
    Var_28 = (NumSharers0_18 + UINT32_C(1));
    {
      SectagTable_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SectagTable_21, 0) = ((MR_Box) (Locn0_16));
      MR_hl_field(0, SectagTable_21, 1) = ((MR_Box) (MR_Word) (NumSectagBits0_17));
      MR_hl_field(0, SectagTable_21, 2) = ((MR_Box) (MR_Word) (Var_28));
      MR_hl_field(0, SectagTable_21, 3) = ((MR_Box) (SectagMap_20));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), ((MR_Box) (Ptag_7)), ((MR_Box) (SectagTable_21)), STATE_VARIABLE_PtagTable_0_22, STATE_VARIABLE_PtagTable_23);
  }
  else
  {
    MR_Word SectagMap_35;
    MR_Word SectagTable_36;

    SectagMap_35 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), ((MR_Box) (Sectag_10)), ((MR_Box) (DuFunctor_4)));
    {
      SectagTable_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SectagTable_36, 0) = ((MR_Box) (SectagLocn_9));
      MR_hl_field(0, SectagTable_36, 1) = ((MR_Box) (MR_Word) (NumSectagBits_11));
      MR_hl_field(0, SectagTable_36, 2) = ((MR_Box) (MR_Word) (UINT32_C(1)));
      MR_hl_field(0, SectagTable_36, 3) = ((MR_Box) (SectagMap_35));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), ((MR_Box) (Ptag_7)), ((MR_Box) (SectagTable_36)), STATE_VARIABLE_PtagTable_0_22, STATE_VARIABLE_PtagTable_23);
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
  ClassName_15 = ((MR_Word) ((MR_hl_field(0, FirstConstraint_13, (MR_Integer) 0))));
  ArgTypes_16 = ((MR_Word) ((MR_hl_field(0, FirstConstraint_13, (MR_Integer) 1))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_16, &ClassArity_17);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (ClassName_15));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (ClassArity_17));
  }
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_8, ((MR_Box) (Var_24)), &conv0_ClassDefn_18);
  ClassDefn_18 = ((MR_Word) (conv0_ClassDefn_18));
  Var_25 = ((MR_Word) ((MR_hl_field(0, ClassDefn_18, (MR_Integer) 4))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_25, &NumSuperClasses_19);
  RealTypeInfoIndex_20 = (MR_Integer) ((MR_Unsigned) TypeInfoIndex_14 + (MR_Unsigned) NumSuperClasses_19);
  Var_26 = mercury__uint16__det_from_int_1_f_0(Slot_12);
  Var_27 = mercury__uint16__det_from_int_1_f_0(RealTypeInfoIndex_20);
  {
    Locn_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Locn_21, 0) = ((MR_Box) (MR_Word) (Var_26));
    MR_hl_field(1, Locn_21, 1) = ((MR_Box) (MR_Word) (Var_27));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), ((MR_Box) (TVar_10)), ((MR_Box) (Locn_21)), STATE_VARIABLE_LocnMap_0_22, STATE_VARIABLE_LocnMap_23);
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.first_matching_type_class_info\'/6", (MR_String) "not found");
        return;
      }
    else
    {
      MR_Word Constraint_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgTypes_22 = ((MR_Word) ((MR_hl_field(0, Constraint_15, (MR_Integer) 1))));
      MR_Word TVs_23;
      MR_Integer Index_24;

      parse_tree__prog_type__type_vars_in_types_2_p_0(ArgTypes_22, &TVs_23);
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
  MR_bool succeeded;
  MR_Word MaybeCtorFieldName_12 = ((MR_Word) ((MR_hl_field(0, ConsArgRepn_9, (MR_Integer) 0))));
  MR_Word ArgType_13 = ((MR_Word) ((MR_hl_field(0, ConsArgRepn_9, (MR_Integer) 1))));
  MR_Word ArgWidth_14 = ((MR_Word) ((MR_hl_field(0, ConsArgRepn_9, (MR_Integer) 2))));
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
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, MaybeCtorFieldName_12, (MR_Integer) 0))));

    SymName_16 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
    ArgName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
    {
      MaybeArgName_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeArgName_19, 0) = ((MR_Box) (ArgName_18));
    }
  }
  backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(ArgType_13, NumUnivTVars_7, ExistTVars_8, &MaybePseudoTypeInfo_20);
  if (((MR_tag((MR_Word) MaybePseudoTypeInfo_20)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_21 = ((MR_Word) ((MR_hl_field(1, MaybePseudoTypeInfo_20, (MR_Integer) 0))));

    {
      MaybePseudoTypeInfoOrSelf_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MaybePseudoTypeInfoOrSelf_22, 0) = ((MR_Box) (TypeInfo_21));
    }
  }
  else
  {
    MR_Word PseudoTypeInfo_23 = ((MR_Word) ((MR_hl_field(0, MaybePseudoTypeInfo_20, (MR_Integer) 0))));

    {
      MaybePseudoTypeInfoOrSelf_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybePseudoTypeInfoOrSelf_22, 0) = ((MR_Box) (PseudoTypeInfo_23));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *ArgInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeArgName_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybePseudoTypeInfoOrSelf_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (ArgWidth_14));
  }
  succeeded = ((((MR_tag((MR_Word) ArgType_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgType_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    Var_32 = ((MR_Word) ((MR_hl_field(3, ArgType_13, (MR_Integer) 3))));
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

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(
  MR_Word ForeignEnumFunctor_6,
  MR_Word STATE_VARIABLE_OrdinalMap_0_12,
  MR_Word * STATE_VARIABLE_OrdinalMap_13,
  MR_Word STATE_VARIABLE_NameMap_0_14,
  MR_Word * STATE_VARIABLE_NameMap_15)
{
  MR_String FunctorName_9 = ((MR_String) ((MR_hl_field(0, ForeignEnumFunctor_6, (MR_Integer) 0))));
  uint32_t FunctorOrdinal_10 = ((uint32_t) (MR_Word) (MR_hl_field(0, ForeignEnumFunctor_6, (MR_Integer) 1)));

  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), ((MR_Box) (MR_Word) (FunctorOrdinal_10)), ((MR_Box) (ForeignEnumFunctor_6)), STATE_VARIABLE_OrdinalMap_0_12, STATE_VARIABLE_OrdinalMap_13);
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), ((MR_Box) (FunctorName_9)), ((MR_Box) (ForeignEnumFunctor_6)), STATE_VARIABLE_NameMap_0_14, STATE_VARIABLE_NameMap_15);
}

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_maps_7_p_0(
  MR_Word EnumFunctor_8,
  MR_Word STATE_VARIABLE_OrdinalMap_0_15,
  MR_Word * STATE_VARIABLE_OrdinalMap_16,
  MR_Word STATE_VARIABLE_NameMap_0_17,
  MR_Word * STATE_VARIABLE_NameMap_18,
  MR_Word STATE_VARIABLE_ValueEqualsOrdinal_0_19,
  MR_Word * STATE_VARIABLE_ValueEqualsOrdinal_20)
{
  MR_bool succeeded;
  MR_String FunctorName_12 = ((MR_String) ((MR_hl_field(0, EnumFunctor_8, (MR_Integer) 0))));
  uint32_t Ordinal_13 = ((uint32_t) (MR_Word) (MR_hl_field(0, EnumFunctor_8, (MR_Integer) 1)));
  MR_Word Value_14 = ((MR_Word) ((MR_hl_field(0, EnumFunctor_8, (MR_Integer) 2))));
  uint32_t Var_24;

  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), ((MR_Box) (MR_Word) (Ordinal_13)), ((MR_Box) (EnumFunctor_8)), STATE_VARIABLE_OrdinalMap_0_15, STATE_VARIABLE_OrdinalMap_16);
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), ((MR_Box) (FunctorName_12)), ((MR_Box) (EnumFunctor_8)), STATE_VARIABLE_NameMap_0_17, STATE_VARIABLE_NameMap_18);
  Var_24 = (uint32_t) (Value_14);
  succeeded = (Ordinal_13 == Var_24);
  if (succeeded)
    *STATE_VARIABLE_ValueEqualsOrdinal_20 = STATE_VARIABLE_ValueEqualsOrdinal_0_19;
  else
    *STATE_VARIABLE_ValueEqualsOrdinal_20 = (MR_Integer) 0;
}

uint16_t MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(
  MR_Word ArgTypes_3)
{
  uint16_t Vector_4;

  backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(ArgTypes_3, (MR_Integer) 0, UINT16_C(0), &Vector_4);
  return Vector_4;
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
      MR_Word ArgType_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      uint16_t STATE_VARIABLE_Vector_17_17;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_2;
      uint16_t next_value_of_STATE_VARIABLE_Vector_0_3;

      switch (MR_tag((MR_Word) ArgType_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer BitNum_30;
            uint16_t Var_36;

            succeeded = (ArgNum_2 >= ((MR_Integer) ((MR_Unsigned) 16 - (MR_Unsigned) 1)));
            if (succeeded)
              BitNum_30 = (MR_Integer) ((MR_Unsigned) 16 - (MR_Unsigned) 1);
            else
              BitNum_30 = ArgNum_2;
            Var_36 = mercury__uint16__f_60_60_2_f_0(UINT16_C(1), BitNum_30);
            STATE_VARIABLE_Vector_17_17 = (STATE_VARIABLE_Vector_0_3 | Var_36);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer BitNum_22;
            uint16_t Var_28;

            succeeded = (ArgNum_2 >= ((MR_Integer) ((MR_Unsigned) 16 - (MR_Unsigned) 1)));
            if (succeeded)
              BitNum_22 = (MR_Integer) ((MR_Unsigned) 16 - (MR_Unsigned) 1);
            else
              BitNum_22 = ArgNum_2;
            Var_28 = mercury__uint16__f_60_60_2_f_0(UINT16_C(1), BitNum_22);
            STATE_VARIABLE_Vector_17_17 = (STATE_VARIABLE_Vector_0_3 | Var_28);
          }
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Vector_17_17 = STATE_VARIABLE_Vector_0_3;
          break;
      }
      Var_19 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgTypes_10;
      next_value_of_ArgNum_2 = Var_19;
      next_value_of_STATE_VARIABLE_Vector_0_3 = STATE_VARIABLE_Vector_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      ArgNum_2 = next_value_of_ArgNum_2;
      STATE_VARIABLE_Vector_0_3 = next_value_of_STATE_VARIABLE_Vector_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__type_ctor_info__compute_du_ptag_layout_flags_2_p_0(
  MR_Word SectagTable_3,
  MR_Word * Flags_4)
{
  MR_bool succeeded;
  MR_Word SectagAltsIndexable_5;
  uint32_t NumSharers_8 = ((uint32_t) (MR_Word) (MR_hl_field(0, SectagTable_3, (MR_Integer) 2)));
  MR_Word SectagMap_9 = ((MR_Word) ((MR_hl_field(0, SectagTable_3, (MR_Integer) 3))));
  MR_Unsigned MaxSectag_10;
  MR_Integer Count_11;
  MR_Unsigned Var_12;
  MR_Integer Var_13;
  MR_Integer Var_14;
  MR_Unsigned Var_17;
  uint32_t Var_18;
  MR_Box conv0_Var_12;
  MR_Box conv1_MaxSectag_10;

  succeeded = mercury__map__min_key_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), SectagMap_9, &conv0_Var_12);
  if (succeeded)
  {
    Var_12 = ((MR_Unsigned) (conv0_Var_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = (Var_12 == (MR_Unsigned) 0U);
    if (succeeded)
    {
      succeeded = mercury__map__max_key_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), SectagMap_9, &conv1_MaxSectag_10);
      if (succeeded)
      {
        MaxSectag_10 = ((MR_Unsigned) (conv1_MaxSectag_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        mercury__map__count_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), SectagMap_9, &Count_11);
        Var_14 = (MR_Integer) 1;
        Var_13 = (MR_Integer) ((MR_Unsigned) Count_11 - (MR_Unsigned) Var_14);
        succeeded = mercury__uint__from_int_2_p_0(Var_13, &Var_17);
        if (succeeded)
        {
          succeeded = (MaxSectag_10 == Var_17);
          if (succeeded)
          {
            succeeded = mercury__uint32__from_int_2_p_0(Count_11, &Var_18);
            if (succeeded)
              succeeded = (NumSharers_8 == Var_18);
          }
        }
      }
    }
  }
  if (succeeded)
    SectagAltsIndexable_5 = (MR_Integer) 1;
  else
    SectagAltsIndexable_5 = (MR_Integer) 0;
  *Flags_4 = (MR_Word) (SectagAltsIndexable_5);
}

void MR_CALL 
backend_libs__type_ctor_info__generate_rtti_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * Tables_4)
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
      MR_Word TypeCtorGenInfo_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeCtorGenInfos_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeCtorCModule_19;
      MR_Word STATE_VARIABLE_Dynamic_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Dynamic_0_3;

      backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(TypeCtorGenInfo_14, HeadVar__2_2, &TypeCtorCModule_19);
      {
        STATE_VARIABLE_Dynamic_24_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Dynamic_24_24, 0) = ((MR_Box) (TypeCtorCModule_19));
        MR_hl_field(1, STATE_VARIABLE_Dynamic_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Dynamic_0_3));
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
  MR_bool succeeded;
  MR_Word TypeCtorInfo_95_95;
  MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(0, TypeCtorGenInfo_4, (MR_Integer) 1))));
  MR_String TypeName_9 = ((MR_String) ((MR_hl_field(0, TypeCtorGenInfo_4, (MR_Integer) 2))));
  MR_Integer TypeArity_10 = ((MR_Integer) ((MR_hl_field(0, TypeCtorGenInfo_4, (MR_Integer) 3))));
  MR_Word HldsDefn_12 = ((MR_Word) ((MR_hl_field(0, TypeCtorGenInfo_4, (MR_Integer) 5))));
  MR_Word UnifyPredProcId_13 = ((MR_Word) ((MR_hl_field(0, TypeCtorGenInfo_4, (MR_Integer) 6))));
  MR_Word ComparePredProcId_14 = ((MR_Word) ((MR_hl_field(0, TypeCtorGenInfo_4, (MR_Integer) 7))));
  MR_Word UnifyPredId_15 = ((MR_Word) ((MR_hl_field(0, UnifyPredProcId_13, (MR_Integer) 0))));
  MR_Integer UnifyProcId_16 = ((MR_Integer) ((MR_hl_field(0, UnifyPredProcId_13, (MR_Integer) 1))));
  MR_Word UnifyProcLabel_17;
  MR_Word ComparePredId_18;
  MR_Integer CompareProcId_19;
  MR_Word CompareProcLabel_20;
  MR_Word UnifyUniv_21;
  MR_Word CompareUniv_22;
  MR_Word TypeBody_23;
  MR_Word Details_28;
  MR_Word LayoutIndexable_29;
  MR_Word TypeCtorData_72;
  MR_Word STATE_VARIABLE_Flags_81_81;
  MR_Word STATE_VARIABLE_Flags_83_83;
  MR_Word STATE_VARIABLE_Flags_85_85;
  uint16_t Var_86;
  MR_Word BuiltinCtor_27;
  MR_String ModuleStr1_26;

  UnifyProcLabel_17 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, UnifyPredId_15, UnifyProcId_16);
  ComparePredId_18 = ((MR_Word) ((MR_hl_field(0, ComparePredProcId_14, (MR_Integer) 0))));
  CompareProcId_19 = ((MR_Integer) ((MR_hl_field(0, ComparePredProcId_14, (MR_Integer) 1))));
  CompareProcLabel_20 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, ComparePredId_18, CompareProcId_19);
  mercury__univ__type_to_univ_2_p_1((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), ((MR_Box) (UnifyProcLabel_17)), &UnifyUniv_21);
  mercury__univ__type_to_univ_2_p_1((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), ((MR_Box) (CompareProcLabel_20)), &CompareUniv_22);
  hlds__hlds_data__get_type_defn_body_2_p_0(HldsDefn_12, &TypeBody_23);
  succeeded = ((((MR_tag((MR_Word) TypeBody_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_5);
    succeeded = !(succeeded);
  }
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
      return;
    }
  succeeded = ((MR_tag((MR_Word) ModuleName_8)) == (MR_Integer) 0);
  if (succeeded)
  {
    ModuleStr1_26 = ((MR_String) ((MR_hl_field(0, ModuleName_8, (MR_Integer) 0))));
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
          BuiltinCtor_27 = ((&backend_libs__type_ctor_info_vector_common_11[0 + case_num_0]))->backend_libs__type_ctor_info__vector_common_type_11_0__vct_11_f_0;
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
    {
      Details_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Details_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Details_28, 1) = ((MR_Box) (BuiltinCtor_27));
    }
    LayoutIndexable_29 = (MR_Integer) 0;
  }
  else
  {
    MR_Word ImplCtor_31;
    MR_String ModuleStr_30;

    succeeded = (TypeArity_10 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ModuleName_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        ModuleStr_30 = ((MR_String) ((MR_hl_field(0, ModuleName_8, (MR_Integer) 0))));
        if ((strcmp(ModuleStr_30, (MR_String) "table_builtin") == 0))
        {
          succeeded = (strcmp(TypeName_9, (MR_String) "ml_subgoal") == 0);
          if (succeeded)
          {
            ImplCtor_31 = (MR_Integer) 12;
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(ModuleStr_30, (MR_String) "private_builtin") == 0))
        {
          MR_Integer slot_1 = ((MR_hash_string6(TypeName_9)) & (MR_Integer) 31);
          MR_String str_2 = ((&backend_libs__type_ctor_info_vector_common_12[0 + slot_1]))->backend_libs__type_ctor_info__vector_common_type_12_0__vct_12_f_0;

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
            ImplCtor_31 = ((&backend_libs__type_ctor_info_vector_common_12[0 + slot_1]))->backend_libs__type_ctor_info__vector_common_type_12_0__vct_12_f_1;
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
      {
        Details_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Details_28, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Details_28, 1) = (MR_Box) ((MR_Unsigned) (ImplCtor_31));
      }
      LayoutIndexable_29 = (MR_Integer) 0;
    }
    else
      switch (MR_tag((MR_Word) TypeBody_23)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeBodyDu_46 = (MR_Word) ((MR_Word) (TypeBody_23));
            MR_Word MaybeSuperType_48 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_46, (MR_Integer) 1))));
            MR_Word MaybeCanonical_49 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_46, (MR_Integer) 2))));
            MR_Word MaybeRepn_50 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_46, (MR_Integer) 3))));
            MR_Word CtorRepns_53;
            MR_Word DuTypeKind_56;
            MR_Word EqualityAxioms_59;

            if ((MaybeRepn_50 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "MaybeRepn = no");
                return;
              }
            else
            {
              MR_Word Repn_52 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_50, (MR_Integer) 0))));

              CtorRepns_53 = ((MR_Word) ((MR_hl_field(0, Repn_52, (MR_Integer) 0))));
              DuTypeKind_56 = ((MR_Word) ((MR_hl_field(0, Repn_52, (MR_Integer) 3))));
            }
            if ((MaybeCanonical_49 == (MR_Word) ((MR_Unsigned) 0U)))
              EqualityAxioms_59 = (MR_Integer) 0;
            else
              EqualityAxioms_59 = (MR_Integer) 1;
            switch (MR_tag((MR_Word) DuTypeKind_56)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DuTypeKind_56)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0(ModuleInfo_5, MaybeSuperType_48, CtorRepns_53, (MR_Integer) 0, EqualityAxioms_59, &Details_28, &LayoutIndexable_29);
                    break;
                  case (MR_Integer) 1:
                    backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0(ModuleInfo_5, MaybeSuperType_48, CtorRepns_53, (MR_Integer) 1, EqualityAxioms_59, &Details_28, &LayoutIndexable_29);
                    break;
                  case (MR_Integer) 2:
                    backend_libs__type_ctor_info__make_du_details_7_p_0(ModuleInfo_5, MaybeSuperType_48, CtorRepns_53, TypeArity_10, EqualityAxioms_59, &Details_28, &LayoutIndexable_29);
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Lang_61 = ((MR_Unsigned) ((MR_hl_field(1, DuTypeKind_56, (MR_Integer) 0))) & (MR_Integer) 3);

                  backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0(Lang_61, CtorRepns_53, EqualityAxioms_59, &Details_28);
                  LayoutIndexable_29 = (MR_Integer) 0;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word FunctorName_62 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_56, (MR_Integer) 0))));
                  MR_Word ArgType_63 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_56, (MR_Integer) 1))));
                  MR_Word MaybeArgName_64 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_56, (MR_Integer) 2))));

                  backend_libs__type_ctor_info__make_notag_details_8_p_0(ModuleInfo_5, TypeArity_10, MaybeSuperType_48, FunctorName_62, ArgType_63, MaybeArgName_64, EqualityAxioms_59, &Details_28);
                  LayoutIndexable_29 = (MR_Integer) 0;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignBody_40 = (MR_Word) (MR_body((MR_Word) (TypeBody_23), (MR_Integer) 1));
            MR_Word Assertions_43;
            MR_Word IsStable_44;
            MR_Word Var_41;
            MR_Word Var_42;

            backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(ModuleInfo_5, ForeignBody_40, &Var_41, &Var_42, &Assertions_43);
            succeeded = hlds__hlds_data__asserted_stable_1_p_0(Assertions_43);
            if (succeeded)
              IsStable_44 = (MR_Integer) 0;
            else
              IsStable_44 = (MR_Integer) 1;
            {
              Details_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Details_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Details_28, 1) = (MR_Box) ((MR_Unsigned) (IsStable_44));
            }
            LayoutIndexable_29 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_45 = ((MR_Word) ((MR_hl_field(2, TypeBody_23, (MR_Integer) 0))));
            MR_Word MaybePseudoTypeInfo_89;

            backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(Type_45, TypeArity_10, (MR_Word) ((MR_Unsigned) 0U), &MaybePseudoTypeInfo_89);
            {
              Details_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Details_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Details_28, 1) = ((MR_Box) (MaybePseudoTypeInfo_89));
            }
            LayoutIndexable_29 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeBody_23, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word DetailsSolver_33 = ((MR_Word) ((MR_hl_field(3, TypeBody_23, (MR_Integer) 1))));
                MR_Word SolverTypeDetails_34 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_33, (MR_Integer) 0))));
                MR_Word RepnType_36 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_34, (MR_Integer) 0))));
                MR_Word MaybePseudoTypeInfo_39;

                backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(RepnType_36, TypeArity_10, (MR_Word) ((MR_Unsigned) 0U), &MaybePseudoTypeInfo_39);
                {
                  Details_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Details_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, Details_28, 1) = ((MR_Box) (MaybePseudoTypeInfo_39));
                }
                LayoutIndexable_29 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
                return;
              }
              break;
          }
          break;
      }
  }
  TypeCtorInfo_95_95 = (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_type_ctor_flag_0);
  STATE_VARIABLE_Flags_81_81 = mercury__set__init_0_f_0(TypeCtorInfo_95_95);
  switch (MR_tag((MR_Word) TypeBody_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__set__insert_3_p_0(TypeCtorInfo_95_95, ((MR_Box) ((MR_Integer) 1)), STATE_VARIABLE_Flags_81_81, &STATE_VARIABLE_Flags_83_83);
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_Flags_83_83 = STATE_VARIABLE_Flags_81_81;
      break;
    case (MR_Integer) 2:
      STATE_VARIABLE_Flags_83_83 = STATE_VARIABLE_Flags_81_81;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_23, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Flags_83_83 = STATE_VARIABLE_Flags_81_81;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Flags_83_83 = STATE_VARIABLE_Flags_81_81;
          break;
      }
      break;
  }
  switch (LayoutIndexable_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Flags_85_85 = STATE_VARIABLE_Flags_83_83;
      break;
    case (MR_Integer) 1:
      mercury__set__insert_3_p_0(TypeCtorInfo_95_95, ((MR_Box) ((MR_Integer) 2)), STATE_VARIABLE_Flags_83_83, &STATE_VARIABLE_Flags_85_85);
      break;
  }
  Var_86 = mercury__uint16__det_from_int_1_f_0(TypeArity_10);
  {
    TypeCtorData_72 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtorData_72, 0) = ((MR_Box) (MR_Word) (UINT8_C(18)));
    MR_hl_field(0, TypeCtorData_72, 1) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, TypeCtorData_72, 2) = ((MR_Box) (TypeName_9));
    MR_hl_field(0, TypeCtorData_72, 3) = ((MR_Box) (MR_Word) (Var_86));
    MR_hl_field(0, TypeCtorData_72, 4) = ((MR_Box) (UnifyUniv_21));
    MR_hl_field(0, TypeCtorData_72, 5) = ((MR_Box) (CompareUniv_22));
    MR_hl_field(0, TypeCtorData_72, 6) = ((MR_Box) (STATE_VARIABLE_Flags_85_85));
    MR_hl_field(0, TypeCtorData_72, 7) = ((MR_Box) (Details_28));
  }
  *RttiData_6 = (MR_Word) ((MR_Word) (TypeCtorData_72));
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_NameTable_11;

  backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_NameTable_11);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_NameTable_11));
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  uint32_t conv5_SeqNumUint32_6;

  backend_libs__type_ctor_info__lookup_functor_number_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), &conv5_SeqNumUint32_6);
  *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv5_SeqNumUint32_6));
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_du_details_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Tuple conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = backend_libs__type_ctor_info__ctor_name_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PtagTable_23;

  backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PtagTable_23);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PtagTable_23));
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word MaybeSuperType_9,
  MR_Word Ctors_10,
  MR_Integer TypeArity_11,
  MR_Word EqualityAxioms_12,
  MR_Word * Details_13,
  MR_Word * IndexableByPtag_14)
{
  MR_bool succeeded;
  MR_Word DuFunctors_15;
  MR_Word DuPtagTable_16;
  MR_Word FunctorNumberMap_17;
  MR_Word DuNameOrderedMap_18;
  MR_Word MaybeBaseTypeCtor_19;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word OrdinalCtorNames_48;
  MR_Word LexicographicCtorNames_49;
  MR_Word LexicographicSeqNums_50;
  MR_Word CtorNameToSeqNumMap_51;
  MR_Integer Var_54;
  MR_Integer Var_55;
  MR_Word Var_57;
  MR_Box conv1_DuPtagTable_16;
  uint8_t MaxPtagUint8_38;
  MR_Integer Count_39;
  MR_Word Var_40;
  uint8_t Var_41;
  MR_Word Var_42;
  MR_Integer Var_43;
  MR_Integer Var_44;
  uint8_t Var_47;
  MR_Box conv2_Var_40;
  MR_Box conv3_Var_42;
  MR_Box conv7_DuNameOrderedMap_18;

  backend_libs__type_ctor_info__make_du_functors_5_p_0(ModuleInfo_8, Ctors_10, UINT32_C(0), TypeArity_11, &DuFunctors_15);
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0));
  mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[4]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[20]), DuFunctors_15, ((MR_Box) (Var_22)), &conv1_DuPtagTable_16);
  DuPtagTable_16 = ((MR_Word) (conv1_DuPtagTable_16));
  succeeded = mercury__map__min_key_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), DuPtagTable_16, &conv2_Var_40);
  if (succeeded)
  {
    Var_40 = ((MR_Word) (conv2_Var_40));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Var_41 = (uint8_t) (Var_40);
    succeeded = (Var_41 == UINT8_C(0));
    if (succeeded)
    {
      succeeded = mercury__map__max_key_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), DuPtagTable_16, &conv3_Var_42);
      if (succeeded)
      {
        Var_42 = ((MR_Word) (conv3_Var_42));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MaxPtagUint8_38 = (uint8_t) (Var_42);
        mercury__map__count_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0), DuPtagTable_16, &Count_39);
        Var_44 = (MR_Integer) 1;
        Var_43 = (MR_Integer) ((MR_Unsigned) Count_39 - (MR_Unsigned) Var_44);
        succeeded = mercury__uint8__from_int_2_p_0(Var_43, &Var_47);
        if (succeeded)
          succeeded = (MaxPtagUint8_38 == Var_47);
      }
    }
  }
  if (succeeded)
    *IndexableByPtag_14 = (MR_Integer) 1;
  else
    *IndexableByPtag_14 = (MR_Integer) 0;
  OrdinalCtorNames_48 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[21]), Ctors_10);
  mercury__list__sort_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), OrdinalCtorNames_48, &LexicographicCtorNames_49);
  Var_55 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), Ctors_10);
  Var_54 = (MR_Integer) ((MR_Unsigned) Var_55 - (MR_Unsigned) 1);
  LexicographicSeqNums_50 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_54);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LexicographicCtorNames_49, LexicographicSeqNums_50, &CtorNameToSeqNumMap_51);
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[0]));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_7_p_0_3));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (CtorNameToSeqNumMap_51));
  }
  mercury__list__map_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Var_57, OrdinalCtorNames_48, &FunctorNumberMap_17);
  Var_24 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[5]));
  mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[6]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[22]), DuFunctors_15, ((MR_Box) (Var_24)), &conv7_DuNameOrderedMap_18);
  DuNameOrderedMap_18 = ((MR_Word) (conv7_DuNameOrderedMap_18));
  if ((MaybeSuperType_9 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeBaseTypeCtor_19 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SuperType_62 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_9, (MR_Integer) 0))));
    MR_Word TypeTable_63;
    MR_Word BaseTypeCtor_65;
    MR_Word SuperTypeCtor_64;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_63);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_62, &SuperTypeCtor_64);
    if (succeeded)
      succeeded = check_hlds__type_util__get_base_type_ctor_3_p_0(TypeTable_63, SuperTypeCtor_64, &BaseTypeCtor_65);
    if (succeeded)
      {
        MaybeBaseTypeCtor_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBaseTypeCtor_19, 0) = ((MR_Box) (BaseTypeCtor_65));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.maybe_get_base_type_ctor\'/3", (MR_String) "cannot get base type ctor");
        return;
      }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *Details_13 = base;
    MR_hl_field(2, base, 0) = (MR_Box) ((MR_Unsigned) (EqualityAxioms_12));
    MR_hl_field(2, base, 1) = ((MR_Box) (DuFunctors_15));
    MR_hl_field(2, base, 2) = ((MR_Box) (DuPtagTable_16));
    MR_hl_field(2, base, 3) = ((MR_Box) (DuNameOrderedMap_18));
    MR_hl_field(2, base, 4) = ((MR_Box) (FunctorNumberMap_17));
    MR_hl_field(2, base, 5) = ((MR_Box) (MaybeBaseTypeCtor_19));
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_ArgInfo_10;
  MR_Word conv8_STATE_VARIABLE_FunctorSubtypeInfo_30;

  backend_libs__type_ctor_info__generate_du_arg_info_6_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv9_ArgInfo_10, ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_FunctorSubtypeInfo_30);
  *wrapper_arg_2 = ((MR_Box) (conv9_ArgInfo_10));
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_FunctorSubtypeInfo_30));
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_LambdaHeadVar__2_39;

  backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__951__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_LambdaHeadVar__2_39);
  *wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_39));
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_LocnMap_23;

  backend_libs__type_ctor_info__find_type_info_index_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_LocnMap_23);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_LocnMap_23));
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_LambdaHeadVar__3_30;
  MR_Word conv0_LambdaHeadVar__5_32;

  backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_info__940__1_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_30, ((MR_Word) (wrapper_arg_4)), &conv0_LambdaHeadVar__5_32);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_30));
  *wrapper_arg_5 = ((MR_Box) (conv0_LambdaHeadVar__5_32));
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_functors__793__1_2_p_0(((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 4))));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info__make_du_functors_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  uint32_t CurOrdinal_3,
  MR_Integer TypeArity_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word CtorRepn_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word CtorRepns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word DuFunctor_14;
    MR_Word DuFunctors_15;
    uint32_t Ordinal_16 = ((uint32_t) (MR_Word) (MR_hl_field(0, CtorRepn_10, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(0, CtorRepn_10, (MR_Integer) 1))));
    MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(0, CtorRepn_10, (MR_Integer) 2))));
    MR_Word ConsTag_19 = ((MR_Word) ((MR_hl_field(0, CtorRepn_10, (MR_Integer) 3))));
    MR_Word ConsArgRepns_20 = ((MR_Word) ((MR_hl_field(0, CtorRepn_10, (MR_Integer) 4))));
    MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_10, (MR_Integer) 5))));
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
    MR_Box conv10_FunctorSubtypeInfo_34;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[1]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_functors_5_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (MR_Word) (CurOrdinal_3));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (MR_Word) (Ordinal_16));
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
      MR_Word ExistTVars_51;
      MR_Word Constraints_52;
      MR_Word UnconstrainedTVars_53;
      MR_Word ConstrainedTVars_54;
      MR_Word LocnMap0_55;
      MR_Integer TIsPlain_56;
      MR_Word LocnMap1_57;
      MR_Integer AllTIs_58;
      MR_Integer TIsInTCIs_59;
      MR_Word LocnMap_60;
      MR_Word TCConstraints_61;
      MR_Word ExistLocns_62;
      MR_Word Var_65;
      MR_Word Var_67;
      uint16_t Var_68;
      uint16_t Var_69;
      MR_Box conv3_TIsPlain_56;
      MR_Box conv2_LocnMap1_57;
      MR_Box conv5_LocnMap_60;

      ExistTVars_25 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_27, (MR_Integer) 0))));
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_1, &ClassTable_31);
      ExistTVars_51 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_27, (MR_Integer) 0))));
      Constraints_52 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_27, (MR_Integer) 1))));
      UnconstrainedTVars_53 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_27, (MR_Integer) 2))));
      ConstrainedTVars_54 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_27, (MR_Integer) 3))));
      mercury__map__init_1_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), &LocnMap0_55);
      mercury__list__foldl2_6_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[7]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[18]), UnconstrainedTVars_53, ((MR_Box) ((MR_Integer) 0)), &conv3_TIsPlain_56, ((MR_Box) (LocnMap0_55)), &conv2_LocnMap1_57);
      TIsPlain_56 = ((MR_Integer) (conv3_TIsPlain_56));
      LocnMap1_57 = ((MR_Word) (conv2_LocnMap1_57));
      mercury__list__length_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), ExistTVars_51, &AllTIs_58);
      TIsInTCIs_59 = (MR_Integer) ((MR_Unsigned) AllTIs_58 - (MR_Unsigned) TIsPlain_56);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_65, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_10[0]));
        MR_hl_field(0, Var_65, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_functors_5_p_0_3));
        MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_65, 3) = ((MR_Box) (Constraints_52));
        MR_hl_field(0, Var_65, 4) = ((MR_Box) (ClassTable_31));
        MR_hl_field(0, Var_65, 5) = ((MR_Box) (TIsPlain_56));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[7]), Var_65, ConstrainedTVars_54, ((MR_Box) (LocnMap1_57)), &conv5_LocnMap_60);
      LocnMap_60 = ((MR_Word) (conv5_LocnMap_60));
      TCConstraints_61 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[19]), Constraints_52);
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_67, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[1]));
        MR_hl_field(0, Var_67, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_functors_5_p_0_5));
        MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_67, 3) = ((MR_Box) (LocnMap_60));
      }
      mercury__list__map_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0), Var_67, ExistTVars_51, &ExistLocns_62);
      Var_68 = mercury__uint16__det_from_int_1_f_0(TIsPlain_56);
      Var_69 = mercury__uint16__det_from_int_1_f_0(TIsInTCIs_59);
      {
        ExistInfo_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ExistInfo_32, 0) = ((MR_Box) (MR_Word) (Var_68));
        MR_hl_field(0, ExistInfo_32, 1) = ((MR_Box) (MR_Word) (Var_69));
        MR_hl_field(0, ExistInfo_32, 2) = ((MR_Box) (TCConstraints_61));
        MR_hl_field(0, ExistInfo_32, 3) = ((MR_Box) (ExistLocns_62));
      }
      {
        MaybeExistInfo_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeExistInfo_26, 0) = ((MR_Box) (ExistInfo_32));
      }
    }
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_38, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_10[1]));
      MR_hl_field(0, Var_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_functors_5_p_0_6));
      MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_38, 3) = ((MR_Box) (TypeArity_4));
      MR_hl_field(0, Var_38, 4) = ((MR_Box) (ExistTVars_25));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_functor_subtype_info_0), Var_38, ConsArgRepns_20, &ArgInfos_33, ((MR_Box) ((MR_Integer) 0)), &conv10_FunctorSubtypeInfo_34);
    FunctorSubtypeInfo_34 = ((MR_Word) (conv10_FunctorSubtypeInfo_34));
    Var_40 = mercury__uint16__det_from_int_1_f_0(Arity_21);
    {
      DuFunctor_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DuFunctor_14, 0) = ((MR_Box) (FunctorName_23));
      MR_hl_field(0, DuFunctor_14, 1) = ((MR_Box) (MR_Word) (Var_40));
      MR_hl_field(0, DuFunctor_14, 2) = ((MR_Box) (MR_Word) (CurOrdinal_3));
      MR_hl_field(0, DuFunctor_14, 3) = ((MR_Box) (DuRep_24));
      MR_hl_field(0, DuFunctor_14, 4) = ((MR_Box) (ArgInfos_33));
      MR_hl_field(0, DuFunctor_14, 5) = ((MR_Box) (MaybeExistInfo_26));
      MR_hl_field(0, DuFunctor_14, 6) = (MR_Box) ((MR_Unsigned) (FunctorSubtypeInfo_34));
    }
    Var_41 = (CurOrdinal_3 + UINT32_C(1));
    backend_libs__type_ctor_info__make_du_functors_5_p_0(ModuleInfo_1, CtorRepns_11, Var_41, TypeArity_4, &DuFunctors_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (DuFunctor_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (DuFunctors_15));
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.get_du_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.get_du_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 0))))) {
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.get_du_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LocalSectag_6 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 2))));
            MR_Word MustMask_7 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Unsigned SectagUint_8 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_6, (MR_Integer) 0))));
            MR_Word SectagBits_10 = ((MR_Word) ((MR_hl_field(0, LocalSectag_6, (MR_Integer) 2))));
            MR_Word SectagAndLocn_11;
            MR_Word Ptag_56 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));

            switch (MustMask_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SectagAndLocn_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SectagAndLocn_11, 0) = ((MR_Box) (SectagUint_8));
                }
                break;
              case (MR_Integer) 1:
                {
                  uint8_t NumBits_12 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_10, (MR_Integer) 0)));
                  MR_Unsigned Mask_13 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_10, (MR_Integer) 1))));

                  {
                    SectagAndLocn_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, SectagAndLocn_11, 0) = ((MR_Box) (SectagUint_8));
                    MR_hl_field(2, SectagAndLocn_11, 1) = ((MR_Box) (MR_Word) (NumBits_12));
                    MR_hl_field(2, SectagAndLocn_11, 2) = ((MR_Box) (Mask_13));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *DuRep_4 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Ptag_56));
              MR_hl_field(0, base, 1) = ((MR_Box) (SectagAndLocn_11));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_17 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_17)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *DuRep_4 = (MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[4]);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Ptag_70 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_17, (MR_Integer) 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *DuRep_4 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Ptag_70));
                    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word RemoteSectag_18 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_17, (MR_Integer) 1))));
                  MR_Word SectagSize_19 = ((MR_Word) ((MR_hl_field(0, RemoteSectag_18, (MR_Integer) 1))));
                  MR_Word Ptag_77 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_17, (MR_Integer) 0))));
                  MR_Unsigned SectagUint_78 = ((MR_Unsigned) ((MR_hl_field(0, RemoteSectag_18, (MR_Integer) 0))));
                  MR_Word SectagAndLocn_80;

                  if ((SectagSize_19 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      SectagAndLocn_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SectagAndLocn_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, SectagAndLocn_80, 1) = ((MR_Box) (SectagUint_78));
                    }
                  else
                  {
                    MR_Word SectagBits_71 = (MR_Word) (MR_body((MR_Word) (SectagSize_19), (MR_Integer) 1));
                    uint8_t NumSectagBits_72 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_71, (MR_Integer) 0)));
                    MR_Unsigned SectagMask_73 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_71, (MR_Integer) 1))));

                    {
                      SectagAndLocn_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, SectagAndLocn_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, SectagAndLocn_80, 1) = ((MR_Box) (SectagUint_78));
                      MR_hl_field(3, SectagAndLocn_80, 2) = ((MR_Box) (MR_Word) (NumSectagBits_72));
                      MR_hl_field(3, SectagAndLocn_80, 3) = ((MR_Box) (SectagMask_73));
                    }
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *DuRep_4 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Ptag_77));
                    MR_hl_field(0, base, 1) = ((MR_Box) (SectagAndLocn_80));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Unsigned Data_20 = ((MR_Unsigned) ((MR_hl_field(3, RemoteArgsTagInfo_17, (MR_Integer) 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *DuRep_4 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Data_20));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word LocalArgsTagInfo_14 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));
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

              Ptag_64 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_14, (MR_Integer) 0))));
              LocalSectag_58 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_14, (MR_Integer) 1))));
              SectagUint_66 = ((MR_Unsigned) ((MR_hl_field(0, LocalSectag_58, (MR_Integer) 0))));
              SectagBits_60 = ((MR_Word) ((MR_hl_field(0, LocalSectag_58, (MR_Integer) 2))));
              NumSectagBits_15 = ((uint8_t) (MR_Word) (MR_hl_field(0, SectagBits_60, (MR_Integer) 0)));
              SectagMask_16 = ((MR_Unsigned) ((MR_hl_field(0, SectagBits_60, (MR_Integer) 1))));
            }
            {
              SectagAndLocn_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, SectagAndLocn_69, 0) = ((MR_Box) (SectagUint_66));
              MR_hl_field(2, SectagAndLocn_69, 1) = ((MR_Box) (MR_Word) (NumSectagBits_15));
              MR_hl_field(2, SectagAndLocn_69, 2) = ((MR_Box) (SectagMask_16));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *DuRep_4 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Ptag_64));
              MR_hl_field(0, base, 1) = ((MR_Box) (SectagAndLocn_69));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Ptag_5 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *DuRep_4 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Ptag_5));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
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
  MR_Box closure = closure_arg;
  uint32_t conv5_SeqNumUint32_6;

  backend_libs__type_ctor_info__lookup_functor_number_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), &conv5_SeqNumUint32_6);
  *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv5_SeqNumUint32_6));
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Tuple conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = backend_libs__type_ctor_info__ctor_name_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_OrdinalMap_13;
  MR_Word conv0_STATE_VARIABLE_NameMap_15;

  backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_OrdinalMap_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_NameMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_OrdinalMap_13));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_NameMap_15));
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0(
  MR_Word Lang_5,
  MR_Word CtorRepns_6,
  MR_Word EqualityAxioms_7,
  MR_Word * Details_8)
{
  MR_Word ForeignEnumFunctors_9;
  MR_Word OrdinalMap0_10;
  MR_Word NameMap0_11;
  MR_Word OrdinalMap_12;
  MR_Word NameMap_13;
  MR_Word FunctorNumberMap_14;
  MR_Word OrdinalCtorNames_27;
  MR_Word LexicographicCtorNames_28;
  MR_Word LexicographicSeqNums_29;
  MR_Word CtorNameToSeqNumMap_30;
  MR_Integer Var_33;
  MR_Integer Var_34;
  MR_Word Var_36;
  MR_Box conv3_OrdinalMap_12;
  MR_Box conv2_NameMap_13;

  backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0(Lang_5, CtorRepns_6, UINT32_C(0), &ForeignEnumFunctors_9);
  OrdinalMap0_10 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0));
  NameMap0_11 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[2]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[3]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[16]), ForeignEnumFunctors_9, ((MR_Box) (OrdinalMap0_10)), &conv3_OrdinalMap_12, ((MR_Box) (NameMap0_11)), &conv2_NameMap_13);
  OrdinalMap_12 = ((MR_Word) (conv3_OrdinalMap_12));
  NameMap_13 = ((MR_Word) (conv2_NameMap_13));
  OrdinalCtorNames_27 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[17]), CtorRepns_6);
  mercury__list__sort_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), OrdinalCtorNames_27, &LexicographicCtorNames_28);
  Var_34 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), CtorRepns_6);
  Var_33 = (MR_Integer) ((MR_Unsigned) Var_34 - (MR_Unsigned) 1);
  LexicographicSeqNums_29 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_33);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LexicographicCtorNames_28, LexicographicSeqNums_29, &CtorNameToSeqNumMap_30);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[0]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_4_p_0_3));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (CtorNameToSeqNumMap_30));
  }
  mercury__list__map_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Var_36, OrdinalCtorNames_27, &FunctorNumberMap_14);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Details_8 = base;
    MR_hl_field(1, base, 0) = (MR_Box) (((((MR_Unsigned) (Lang_5) << 1)) | (MR_Unsigned) (EqualityAxioms_7)));
    MR_hl_field(1, base, 1) = ((MR_Box) (ForeignEnumFunctors_9));
    MR_hl_field(1, base, 2) = ((MR_Box) (OrdinalMap_12));
    MR_hl_field(1, base, 3) = ((MR_Box) (NameMap_13));
    MR_hl_field(1, base, 4) = ((MR_Box) (FunctorNumberMap_14));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__705__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__701__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__699__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__698__1_2_p_0(((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 4))));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0(
  MR_Word Lang_1,
  MR_Word HeadVar__2_2,
  uint32_t CurOrdinal_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FunctorRepn_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word FunctorRepns_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ForeignEnumFunctor_11;
    MR_Word ForeignEnumFunctors_12;
    uint32_t Ordinal_13 = ((uint32_t) (MR_Word) (MR_hl_field(0, FunctorRepn_8, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints_14 = ((MR_Word) ((MR_hl_field(0, FunctorRepn_8, (MR_Integer) 1))));
    MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, FunctorRepn_8, (MR_Integer) 2))));
    MR_Word ConsTag_16 = ((MR_Word) ((MR_hl_field(0, FunctorRepn_8, (MR_Integer) 3))));
    MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(0, FunctorRepn_8, (MR_Integer) 5))));
    MR_String ForeignTagValue_22;
    MR_String FunctorName_51;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_59;
    uint32_t Var_68;

    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_52, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[1]));
      MR_hl_field(0, Var_52, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_1));
      MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_52, 3) = ((MR_Box) (MR_Word) (CurOrdinal_3));
      MR_hl_field(0, Var_52, 4) = ((MR_Box) (MR_Word) (Ordinal_13));
    }
    mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "Ordinal != CurOrdinal");
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[2]));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_2));
      MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_55, 3) = ((MR_Box) (MaybeExistConstraints_14));
      MR_hl_field(0, Var_55, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "existential constraints in functor in enum");
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_59, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[3]));
      MR_hl_field(0, Var_59, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_3));
      MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_59, 3) = ((MR_Box) (Arity_18));
      MR_hl_field(0, Var_59, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "functor in foreign enum has nonzero arity");
    switch (MR_tag((MR_Word) ConsTag_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "non foreign tag for foreign enum functor");
          return;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "non foreign tag for foreign enum functor");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsTag_16, (MR_Integer) 0))))) {
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
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "non foreign tag for foreign enum functor");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignTagLang_20 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_16, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word Var_63;

              ForeignTagValue_22 = ((MR_String) ((MR_hl_field(3, ConsTag_16, (MR_Integer) 2))));
              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[7]));
                MR_hl_field(0, Var_63, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0_4));
                MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_63, 3) = ((MR_Box) (Lang_1));
                MR_hl_field(0, Var_63, 4) = ((MR_Box) (ForeignTagLang_20));
              }
              mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/4", (MR_String) "language mismatch between foreign tag and foreign enum");
            }
            break;
        }
        break;
    }
    FunctorName_51 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_15);
    {
      ForeignEnumFunctor_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ForeignEnumFunctor_11, 0) = ((MR_Box) (FunctorName_51));
      MR_hl_field(0, ForeignEnumFunctor_11, 1) = ((MR_Box) (MR_Word) (CurOrdinal_3));
      MR_hl_field(0, ForeignEnumFunctor_11, 2) = ((MR_Box) (ForeignTagValue_22));
    }
    Var_68 = (CurOrdinal_3 + UINT32_C(1));
    backend_libs__type_ctor_info__make_foreign_enum_functors_4_p_0(Lang_1, FunctorRepns_9, Var_68, &ForeignEnumFunctors_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ForeignEnumFunctor_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (ForeignEnumFunctors_12));
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  uint32_t conv9_SeqNumUint32_6;

  backend_libs__type_ctor_info__lookup_functor_number_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), &conv9_SeqNumUint32_6);
  *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv9_SeqNumUint32_6));
}

static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Tuple conv8_HeadVar__2_2;

  conv8_HeadVar__2_2 = backend_libs__type_ctor_info__ctor_name_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_OrdinalMap_16;
  MR_Word conv1_STATE_VARIABLE_NameMap_18;
  MR_Word conv0_STATE_VARIABLE_ValueEqualsOrdinal_20;

  backend_libs__type_ctor_info__make_enum_maps_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_OrdinalMap_16, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_NameMap_18, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_ValueEqualsOrdinal_20);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_OrdinalMap_16));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_NameMap_18));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_ValueEqualsOrdinal_20));
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__571__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_mercury_enum_details__563__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word MaybeSuperType_9,
  MR_Word CtorRepns_10,
  MR_Word IsDummy_11,
  MR_Word EqualityAxioms_12,
  MR_Word * Details_13,
  MR_Word * IndexableByEnumValue_14)
{
  MR_bool succeeded;
  MR_Word EnumFunctors_20;
  MR_Word OrdinalMap0_21;
  MR_Word NameMap0_22;
  MR_Word OrdinalMap_23;
  MR_Word NameMap_24;
  MR_Word AllValueEqualsOrdinal_25;
  MR_Word FunctorNumberMap_26;
  MR_Word MaybeBaseTypeCtor_27;
  MR_Word OrdinalCtorNames_68;
  MR_Word LexicographicCtorNames_69;
  MR_Word LexicographicSeqNums_70;
  MR_Word CtorNameToSeqNumMap_71;
  MR_Integer Var_74;
  MR_Integer Var_75;
  MR_Word Var_77;
  MR_Box conv5_OrdinalMap_23;
  MR_Box conv4_NameMap_24;
  MR_Box conv3_AllValueEqualsOrdinal_25;
  MR_Word TypeCtorInfo_10_65;
  MR_Word TypeCtorInfo_11_66;
  uint32_t MaxOrdinal_60;
  MR_Integer Count_61;
  uint32_t Var_62;
  MR_Integer Var_63;
  MR_Integer Var_64;
  uint32_t Var_67;
  MR_Box conv6_Var_62;
  MR_Box conv7_MaxOrdinal_60;

  if ((CtorRepns_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/7", (MR_String) "enum with no ctors");
      return;
    }
  else
  {
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, CtorRepns_10, (MR_Integer) 1))));

    if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((MaybeSuperType_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_31;

        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_31, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[5]));
          MR_hl_field(0, Var_31, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_1));
          MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_31, 3) = ((MR_Box) (IsDummy_11));
          MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_Integer) 1));
        }
        mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/7", (MR_String) "one ctor but not dummy");
      }
    }
    else
    {
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_36, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[5]));
        MR_hl_field(0, Var_36, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_2));
        MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_36, 3) = ((MR_Box) (IsDummy_11));
        MR_hl_field(0, Var_36, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/7", (MR_String) "more than one ctor but dummy");
    }
  }
  backend_libs__type_ctor_info__make_enum_functors_5_p_0(MaybeSuperType_9, CtorRepns_10, IsDummy_11, UINT32_C(0), &EnumFunctors_20);
  OrdinalMap0_21 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0));
  NameMap0_22 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0));
  mercury__list__foldl3_8_p_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[1]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[14]), EnumFunctors_20, ((MR_Box) (OrdinalMap0_21)), &conv5_OrdinalMap_23, ((MR_Box) (NameMap0_22)), &conv4_NameMap_24, ((MR_Box) ((MR_Integer) 1)), &conv3_AllValueEqualsOrdinal_25);
  OrdinalMap_23 = ((MR_Word) (conv5_OrdinalMap_23));
  NameMap_24 = ((MR_Word) (conv4_NameMap_24));
  AllValueEqualsOrdinal_25 = ((MR_Word) (conv3_AllValueEqualsOrdinal_25));
  succeeded = (AllValueEqualsOrdinal_25 == (MR_Integer) 1);
  if (succeeded)
  {
    TypeCtorInfo_10_65 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0);
    TypeCtorInfo_11_66 = (MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0);
    succeeded = mercury__map__min_key_1_f_0(TypeCtorInfo_10_65, TypeCtorInfo_11_66, OrdinalMap_23, &conv6_Var_62);
    if (succeeded)
    {
      Var_62 = ((uint32_t) (MR_Word) conv6_Var_62);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Var_62 == UINT32_C(0));
      if (succeeded)
      {
        succeeded = mercury__map__max_key_1_f_0(TypeCtorInfo_10_65, TypeCtorInfo_11_66, OrdinalMap_23, &conv7_MaxOrdinal_60);
        if (succeeded)
        {
          MaxOrdinal_60 = ((uint32_t) (MR_Word) conv7_MaxOrdinal_60);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          mercury__map__count_2_p_0(TypeCtorInfo_10_65, TypeCtorInfo_11_66, OrdinalMap_23, &Count_61);
          Var_64 = (MR_Integer) 1;
          Var_63 = (MR_Integer) ((MR_Unsigned) Count_61 - (MR_Unsigned) Var_64);
          succeeded = mercury__uint32__from_int_2_p_0(Var_63, &Var_67);
          if (succeeded)
            succeeded = (MaxOrdinal_60 == Var_67);
        }
      }
    }
  }
  if (succeeded)
    *IndexableByEnumValue_14 = (MR_Integer) 1;
  else
    *IndexableByEnumValue_14 = (MR_Integer) 0;
  OrdinalCtorNames_68 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&backend_libs__type_ctor_info_scalar_common_2[15]), CtorRepns_10);
  mercury__list__sort_2_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), OrdinalCtorNames_68, &LexicographicCtorNames_69);
  Var_75 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), CtorRepns_10);
  Var_74 = (MR_Integer) ((MR_Unsigned) Var_75 - (MR_Unsigned) 1);
  LexicographicSeqNums_70 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_74);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), LexicographicCtorNames_69, LexicographicSeqNums_70, &CtorNameToSeqNumMap_71);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[0]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_7_p_0_5));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (CtorNameToSeqNumMap_71));
  }
  mercury__list__map_3_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Var_77, OrdinalCtorNames_68, &FunctorNumberMap_26);
  if ((MaybeSuperType_9 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeBaseTypeCtor_27 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SuperType_82 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_9, (MR_Integer) 0))));
    MR_Word TypeTable_83;
    MR_Word BaseTypeCtor_85;
    MR_Word SuperTypeCtor_84;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_8, &TypeTable_83);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_82, &SuperTypeCtor_84);
    if (succeeded)
      succeeded = check_hlds__type_util__get_base_type_ctor_3_p_0(TypeTable_83, SuperTypeCtor_84, &BaseTypeCtor_85);
    if (succeeded)
      {
        MaybeBaseTypeCtor_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBaseTypeCtor_27, 0) = ((MR_Box) (BaseTypeCtor_85));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.maybe_get_base_type_ctor\'/3", (MR_String) "cannot get base type ctor");
        return;
      }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Details_13 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) (EqualityAxioms_12) << 1)) | (MR_Unsigned) (IsDummy_11)));
    MR_hl_field(0, base, 1) = ((MR_Box) (EnumFunctors_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (OrdinalMap_23));
    MR_hl_field(0, base, 3) = ((MR_Box) (NameMap_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (FunctorNumberMap_26));
    MR_hl_field(0, base, 5) = ((MR_Box) (MaybeBaseTypeCtor_27));
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__620__1_2_p_0(((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 4))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__628__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__610__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__608__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__607__1_2_p_0(((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 3))), ((uint32_t) (MR_Word) (MR_hl_field(0, closure, (MR_Integer) 4))));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0(
  MR_Word MaybeSuperType_1,
  MR_Word HeadVar__2_2,
  MR_Word IsDummy_3,
  uint32_t CurOrdinal_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word FunctorRepn_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word FunctorRepns_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word EnumFunctor_14;
    MR_Word EnumFunctors_15;
    uint32_t Ordinal_16 = ((uint32_t) (MR_Word) (MR_hl_field(0, FunctorRepn_10, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(0, FunctorRepn_10, (MR_Integer) 1))));
    MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(0, FunctorRepn_10, (MR_Integer) 2))));
    MR_Word ConsTag_19 = ((MR_Word) ((MR_hl_field(0, FunctorRepn_10, (MR_Integer) 3))));
    MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(0, FunctorRepn_10, (MR_Integer) 5))));
    MR_Word EnumValue_26;
    MR_String FunctorName_27;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_35;
    uint32_t Var_49;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[1]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_1));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (MR_Word) (CurOrdinal_4));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (MR_Word) (Ordinal_16));
    }
    mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "Ordinal != CurOrdinal");
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[2]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_2));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (MaybeExistConstraints_17));
      MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "existential constraints in functor in enum");
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[3]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_3));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (Arity_21));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "functor in enum has nonzero arity");
    switch (IsDummy_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_45;

          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_45, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[4]));
            MR_hl_field(0, Var_45, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_4));
            MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_45, 3) = ((MR_Box) (ConsTag_19));
            MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_45, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "dummy functor\'s tag is not dummy_tag");
          EnumValue_26 = (MR_Word) (CurOrdinal_4);
        }
        break;
      case (MR_Integer) 0:
        {
          uint32_t ConsTagUint32_24;
          MR_Integer ConsTagInt_23;
          MR_Word Var_39;

          succeeded = ((MR_tag((MR_Word) ConsTag_19)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_39 = ((MR_Word) ((MR_hl_field(1, ConsTag_19, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 0);
            if (succeeded)
              ConsTagInt_23 = ((MR_Integer) ((MR_hl_field(0, Var_39, (MR_Integer) 0))));
          }
          if (succeeded)
            ConsTagUint32_24 = mercury__uint32__det_from_int_1_f_0(ConsTagInt_23);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "enum functor\'s tag is not int_tag");
              return;
            }
          if ((MaybeSuperType_1 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_42;

            {
              Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_42, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[1]));
              MR_hl_field(0, Var_42, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_5));
              MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_42, 3) = ((MR_Box) (MR_Word) (CurOrdinal_4));
              MR_hl_field(0, Var_42, 4) = ((MR_Box) (MR_Word) (ConsTagUint32_24));
            }
            mercury__require__expect_3_p_0(Var_42, (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "enum functor\'s tag is not the expected int_tag");
          }
          EnumValue_26 = (MR_Word) (ConsTagUint32_24);
        }
        break;
    }
    FunctorName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
    {
      EnumFunctor_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, EnumFunctor_14, 0) = ((MR_Box) (FunctorName_27));
      MR_hl_field(0, EnumFunctor_14, 1) = ((MR_Box) (MR_Word) (Ordinal_16));
      MR_hl_field(0, EnumFunctor_14, 2) = ((MR_Box) (EnumValue_26));
    }
    Var_49 = (CurOrdinal_4 + UINT32_C(1));
    backend_libs__type_ctor_info__make_enum_functors_5_p_0(MaybeSuperType_1, FunctorRepns_11, IsDummy_3, Var_49, &EnumFunctors_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (EnumFunctor_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (EnumFunctors_15));
    }
  }
}

static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Integer TypeArity_10,
  MR_Word MaybeSuperType_11,
  MR_Word SymName_12,
  MR_Word ArgType_13,
  MR_Word MaybeArgName_14,
  MR_Word EqualityAxioms_15,
  MR_Word * Details_16)
{
  MR_bool succeeded;
  MR_String FunctorName_17;
  MR_Word MaybePseudoTypeInfo_20;
  MR_Word FunctorSubtypeInfo_26;
  MR_Word Functor_27;
  MR_Word MaybeBaseTypeCtor_28;
  MR_Word Var_29;

  FunctorName_17 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
  backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(ArgType_13, TypeArity_10, (MR_Word) ((MR_Unsigned) 0U), &MaybePseudoTypeInfo_20);
  succeeded = ((((MR_tag((MR_Word) ArgType_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgType_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    Var_29 = ((MR_Word) ((MR_hl_field(3, ArgType_13, (MR_Integer) 3))));
    succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  if (succeeded)
    FunctorSubtypeInfo_26 = (MR_Integer) 1;
  else
    FunctorSubtypeInfo_26 = (MR_Integer) 0;
  {
    Functor_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Functor_27, 0) = ((MR_Box) (FunctorName_17));
    MR_hl_field(0, Functor_27, 1) = ((MR_Box) (MaybePseudoTypeInfo_20));
    MR_hl_field(0, Functor_27, 2) = ((MR_Box) (MaybeArgName_14));
    MR_hl_field(0, Functor_27, 3) = (MR_Box) ((MR_Unsigned) (FunctorSubtypeInfo_26));
  }
  if ((MaybeSuperType_11 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeBaseTypeCtor_28 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SuperType_30 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_11, (MR_Integer) 0))));
    MR_Word TypeTable_31;
    MR_Word BaseTypeCtor_33;
    MR_Word SuperTypeCtor_32;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_9, &TypeTable_31);
    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_30, &SuperTypeCtor_32);
    if (succeeded)
      succeeded = check_hlds__type_util__get_base_type_ctor_3_p_0(TypeTable_31, SuperTypeCtor_32, &BaseTypeCtor_33);
    if (succeeded)
      {
        MaybeBaseTypeCtor_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeBaseTypeCtor_28, 0) = ((MR_Box) (BaseTypeCtor_33));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.maybe_get_base_type_ctor\'/3", (MR_String) "cannot get base type ctor");
        return;
      }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *Details_16 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (EqualityAxioms_15));
    MR_hl_field(3, base, 2) = ((MR_Box) (Functor_27));
    MR_hl_field(3, base, 3) = ((MR_Box) (MaybeBaseTypeCtor_28));
  }
}

void MR_CALL 
backend_libs__type_ctor_info__generate_hlds_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_bool succeeded;
  MR_Word ModuleName_4;
  MR_Word TypeTable_5;
  MR_Word TypeCtorsDefns_6;
  MR_Word LocalTypeCtorGenInfos_7;
  MR_Word AllTypeCtorGenInfos_9;
  MR_Word Var_14;

  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &ModuleName_4);
  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &TypeTable_5);
  hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_5, &TypeCtorsDefns_6);
  backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(STATE_VARIABLE_ModuleInfo_0_10, ModuleName_4, TypeCtorsDefns_6, &LocalTypeCtorGenInfos_7);
  Var_14 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_14);
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

static MR_bool MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__216__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeCtor_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TypeCtors_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TypeCtorGenInfo_11;
    MR_Word TypeCtorGenInfos_12;
    MR_Word SymName_13;
    MR_Integer TypeArity_14;

    backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(HeadVar__1_1, HeadVar__2_2, TypeCtors_10, &TypeCtorGenInfos_12);
    SymName_13 = ((MR_Word) ((MR_hl_field(0, TypeCtor_9, (MR_Integer) 0))));
    TypeArity_14 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_9, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1))
    {
      MR_Word TypeModuleName_15 = ((MR_Word) ((MR_hl_field(1, SymName_13, (MR_Integer) 0))));
      MR_String TypeName_16 = ((MR_String) ((MR_hl_field(1, SymName_13, (MR_Integer) 1))));
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word TVarSet_25;
      MR_Word Kinds_27;
      MR_Word Var_35;
      MR_Word SpecMaps_39;
      MR_Word UnifyMap_40;
      MR_Word UnifyPredId_41;
      MR_Integer UnifyProcInt_42;
      MR_Integer UnifyProcId_43;
      MR_Word Unify_44;
      MR_Word CompareMap_45;
      MR_Word ComparePredId_46;
      MR_Integer CompareProcInt_47;
      MR_Integer CompareProcId_48;
      MR_Word Compare_49;
      MR_Word Status_50;
      MR_Box conv0_UnifyPredId_41;
      MR_Box conv1_ComparePredId_46;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[0]));
        MR_hl_field(0, Var_17, 1) = ((MR_Box) (backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1));
        MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_17, 3) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(0, Var_17, 4) = ((MR_Box) (TypeModuleName_15));
      }
      mercury__require__expect_3_p_0(Var_17, (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", (MR_String) "module mismatch");
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_25);
      mercury__map__init_1_p_0((MR_Word) (&backend_libs__type_ctor_info_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &Kinds_27);
      Var_35 = mercury__term_context__dummy_context_0_f_0();
      hlds__hlds_data__create_hlds_type_defn_10_p_0(TVarSet_25, (MR_Word) ((MR_Unsigned) 0U), Kinds_27, (MR_Word) (MR_mkword(3, &backend_libs__type_ctor_info_scalar_common_1[3])), (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), (MR_Integer) 1, (MR_Integer) 0, Var_35, &Var_20);
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(HeadVar__1_1, &SpecMaps_39);
      UnifyMap_40 = ((MR_Word) ((MR_hl_field(0, SpecMaps_39, (MR_Integer) 0))));
      mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UnifyMap_40, ((MR_Box) (TypeCtor_9)), &conv0_UnifyPredId_41);
      UnifyPredId_41 = ((MR_Word) (conv0_UnifyPredId_41));
      hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &UnifyProcInt_42);
      hlds__hlds_pred__proc_id_to_int_2_p_1(&UnifyProcId_43, UnifyProcInt_42);
      {
        Unify_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Unify_44, 0) = ((MR_Box) (UnifyPredId_41));
        MR_hl_field(0, Unify_44, 1) = ((MR_Box) (UnifyProcId_43));
      }
      CompareMap_45 = ((MR_Word) ((MR_hl_field(0, SpecMaps_39, (MR_Integer) 2))));
      mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CompareMap_45, ((MR_Box) (TypeCtor_9)), &conv1_ComparePredId_46);
      ComparePredId_46 = ((MR_Word) (conv1_ComparePredId_46));
      hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &CompareProcInt_47);
      hlds__hlds_pred__proc_id_to_int_2_p_1(&CompareProcId_48, CompareProcInt_47);
      {
        Compare_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Compare_49, 0) = ((MR_Box) (ComparePredId_46));
        MR_hl_field(0, Compare_49, 1) = ((MR_Box) (CompareProcId_48));
      }
      hlds__hlds_data__get_type_defn_status_2_p_0(Var_20, &Status_50);
      {
        TypeCtorGenInfo_11 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeCtorGenInfo_11, 0) = ((MR_Box) (TypeCtor_9));
        MR_hl_field(0, TypeCtorGenInfo_11, 1) = ((MR_Box) (TypeModuleName_15));
        MR_hl_field(0, TypeCtorGenInfo_11, 2) = ((MR_Box) (TypeName_16));
        MR_hl_field(0, TypeCtorGenInfo_11, 3) = ((MR_Box) (TypeArity_14));
        MR_hl_field(0, TypeCtorGenInfo_11, 4) = ((MR_Box) (Status_50));
        MR_hl_field(0, TypeCtorGenInfo_11, 5) = ((MR_Box) (Var_20));
        MR_hl_field(0, TypeCtorGenInfo_11, 6) = ((MR_Box) (Unify_44));
        MR_hl_field(0, TypeCtorGenInfo_11, 7) = ((MR_Box) (Compare_49));
      }
    }
    else
    {
      MR_String Var_22;
      MR_String TypeName_24 = ((MR_String) ((MR_hl_field(0, SymName_13, (MR_Integer) 0))));

      Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", TypeName_24);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", Var_22);
        return;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (TypeCtorGenInfo_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (TypeCtorGenInfos_12));
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
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeCtorDefn_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TypeCtorDefns_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TypeCtorGenInfosTail_12;
    MR_Word TypeCtor_13;
    MR_Word TypeDefn_14;
    MR_Word SymName_15;
    MR_Integer TypeArity_16;

    backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(ModuleInfo_1, ModuleName_2, TypeCtorDefns_10, &TypeCtorGenInfosTail_12);
    TypeCtor_13 = ((MR_Word) ((MR_hl_field(0, TypeCtorDefn_9, (MR_Integer) 0))));
    TypeDefn_14 = ((MR_Word) ((MR_hl_field(0, TypeCtorDefn_9, (MR_Integer) 1))));
    SymName_15 = ((MR_Word) ((MR_hl_field(0, TypeCtor_13, (MR_Integer) 0))));
    TypeArity_16 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_13, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) SymName_15)) == (MR_Integer) 1))
    {
      MR_Word TypeModuleName_17 = ((MR_Word) ((MR_hl_field(1, SymName_15, (MR_Integer) 0))));
      MR_String TypeName_18 = ((MR_String) ((MR_hl_field(1, SymName_15, (MR_Integer) 1))));
      MR_Word Var_24;
      MR_Word TypeCtor_27;
      MR_Word TypeBody_28;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeModuleName_17, ModuleName_2);
      if (succeeded)
      {
        TypeCtor_27 = ((MR_Word) ((MR_hl_field(0, TypeCtorDefn_9, (MR_Integer) 0))));
        Var_24 = ((MR_Word) ((MR_hl_field(0, TypeCtorDefn_9, (MR_Integer) 1))));
        hlds__hlds_data__get_type_defn_body_2_p_0(Var_24, &TypeBody_28);
        succeeded = ((((MR_tag((MR_Word) TypeBody_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_28, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
        }
        if (!(succeeded))
          succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(TypeCtor_27, TypeBody_28);
        if (succeeded)
        {
          MR_String ModuleNameString_30;

          succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_1);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) TypeModuleName_17)) == (MR_Integer) 0);
            if (succeeded)
            {
              ModuleNameString_30 = ((MR_String) ((MR_hl_field(0, TypeModuleName_17, (MR_Integer) 0))));
              if ((strcmp(ModuleNameString_30, (MR_String) "builtin") == 0))
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
              if ((strcmp(ModuleNameString_30, (MR_String) "type_desc") == 0))
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
              if ((strcmp(ModuleNameString_30, (MR_String) "private_builtin") == 0))
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
                  if ((strcmp(ModuleNameString_30, (MR_String) "table_builtin") == 0))
                    succeeded = (strcmp(TypeName_18, (MR_String) "ml_subgoal") == 0);
                  else
                  if ((strcmp(ModuleNameString_30, (MR_String) "private_builtin") == 0))
                  {
                    MR_Integer slot_1 = ((MR_hash_string6(TypeName_18)) & (MR_Integer) 31);
                    MR_String str_2 = ((&backend_libs__type_ctor_info_vector_common_5[0 + slot_1]))->backend_libs__type_ctor_info__vector_common_type_5_0__vct_5_f_0;

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
        MR_Word SpecMaps_72;
        MR_Word UnifyMap_73;
        MR_Word UnifyPredId_74;
        MR_Integer UnifyProcInt_75;
        MR_Integer UnifyProcId_76;
        MR_Word Unify_77;
        MR_Word CompareMap_78;
        MR_Word ComparePredId_79;
        MR_Integer CompareProcInt_80;
        MR_Integer CompareProcId_81;
        MR_Word Compare_82;
        MR_Word Status_83;
        MR_Box conv0_UnifyPredId_74;
        MR_Box conv1_ComparePredId_79;

        hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_1, &SpecMaps_72);
        UnifyMap_73 = ((MR_Word) ((MR_hl_field(0, SpecMaps_72, (MR_Integer) 0))));
        mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UnifyMap_73, ((MR_Box) (TypeCtor_13)), &conv0_UnifyPredId_74);
        UnifyPredId_74 = ((MR_Word) (conv0_UnifyPredId_74));
        hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &UnifyProcInt_75);
        hlds__hlds_pred__proc_id_to_int_2_p_1(&UnifyProcId_76, UnifyProcInt_75);
        {
          Unify_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Unify_77, 0) = ((MR_Box) (UnifyPredId_74));
          MR_hl_field(0, Unify_77, 1) = ((MR_Box) (UnifyProcId_76));
        }
        CompareMap_78 = ((MR_Word) ((MR_hl_field(0, SpecMaps_72, (MR_Integer) 2))));
        mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CompareMap_78, ((MR_Box) (TypeCtor_13)), &conv1_ComparePredId_79);
        ComparePredId_79 = ((MR_Word) (conv1_ComparePredId_79));
        hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &CompareProcInt_80);
        hlds__hlds_pred__proc_id_to_int_2_p_1(&CompareProcId_81, CompareProcInt_80);
        {
          Compare_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Compare_82, 0) = ((MR_Box) (ComparePredId_79));
          MR_hl_field(0, Compare_82, 1) = ((MR_Box) (CompareProcId_81));
        }
        hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_14, &Status_83);
        {
          TypeCtorGenInfo_19 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorGenInfo_19, 0) = ((MR_Box) (TypeCtor_13));
          MR_hl_field(0, TypeCtorGenInfo_19, 1) = ((MR_Box) (TypeModuleName_17));
          MR_hl_field(0, TypeCtorGenInfo_19, 2) = ((MR_Box) (TypeName_18));
          MR_hl_field(0, TypeCtorGenInfo_19, 3) = ((MR_Box) (TypeArity_16));
          MR_hl_field(0, TypeCtorGenInfo_19, 4) = ((MR_Box) (Status_83));
          MR_hl_field(0, TypeCtorGenInfo_19, 5) = ((MR_Box) (TypeDefn_14));
          MR_hl_field(0, TypeCtorGenInfo_19, 6) = ((MR_Box) (Unify_77));
          MR_hl_field(0, TypeCtorGenInfo_19, 7) = ((MR_Box) (Compare_82));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (TypeCtorGenInfo_19));
          MR_hl_field(1, base, 1) = ((MR_Box) (TypeCtorGenInfosTail_12));
        }
      }
      else
        *HeadVar__4_4 = TypeCtorGenInfosTail_12;
    }
    else
    {
      MR_String Var_21;
      MR_String TypeName_23 = ((MR_String) ((MR_hl_field(0, SymName_15, (MR_Integer) 0))));

      Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", TypeName_23);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.type_ctor_info.gen_type_ctor_gen_infos\'/4", Var_21);
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__type_ctor_info____Unify____name_sort_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__type_ctor_info____Compare____name_sort_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__type_ctor_info____Unify____tag_list_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__type_ctor_info____Compare____tag_list_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = backend_libs__type_ctor_info____Unify____tag_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  backend_libs__type_ctor_info____Compare____tag_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
