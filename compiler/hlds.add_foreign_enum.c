/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version 2018-02-24
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


// :- module hlds.add_foreign_enum.
// :- implementation.

/*
INIT mercury__hlds__add_foreign_enum__init
ENDINIT
*/

#include "hlds.add_foreign_enum.mih"


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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.make_hlds_error.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum____vpti_tuple_2__plain_parse_tree__error_util__type_ctor_info_error_severity_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_0[1];

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_0;

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_1[1];

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_1;

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_1[1];

static const MR_DuPtagLayout hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_not_enum_info_0[2];

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_not_enum_info_0[2];

static const MR_Integer hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_not_enum_info_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2libs__globals__type_ctor_info_foreign_language_0term__type_ctor_info_context_0;

static const MR_VA_TypeInfo_Struct2 hlds__add_foreign_enum____vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__maybe__ti_maybe_1__vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0;

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_type_ctor_foreign_enums_0_0[2];

static const MR_ConstString hlds__add_foreign_enum__hlds__add_foreign_enum__field_names_type_ctor_foreign_enums_0_0[2];

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_type_ctor_foreign_enums_0_0;

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_type_ctor_foreign_enums_0_0[1];

static const MR_DuPtagLayout hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_type_ctor_foreign_enums_0[1];

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_type_ctor_foreign_enums_0[1];

static const MR_Integer hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_type_ctor_foreign_enums_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0;

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__717__1_1_f_0(
  MR_String LambdaHeadVar__1_54);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__180__1_2_p_0(
  MR_Word MaybeRepn_39,
  MR_Word HeadVar__2_111);

static void MR_CALL 
hlds__add_foreign_enum____Compare____not_enum_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____not_enum_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__add_foreign_enum__wrap_unqual_cons_id_and_maybe_arity_1_f_0(
  MR_Word ConsId_3);

static void MR_CALL 
hlds__add_foreign_enum__add_error_severity_pieces_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Tuple HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static MR_Word MR_CALL 
hlds__add_foreign_enum__qual_ctor_to_format_component_1_f_0(
  MR_Word SymName_3);

static MR_Word MR_CALL 
hlds__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(
  MR_Word SymName_3);

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0(
  MR_Word Lang_10,
  MR_String Prefix_11,
  MR_Word MakeUpperCase_12,
  MR_Word OverrideMap_13,
  MR_Word CtorRepn_14,
  MR_Word STATE_VARIABLE_NameMap_0_23,
  MR_Word * STATE_VARIABLE_NameMap_24,
  MR_Word STATE_VARIABLE_BadForeignNames_0_25,
  MR_Word * STATE_VARIABLE_BadForeignNames_26);

static void MR_CALL 
hlds__add_foreign_enum__make_foreign_tag_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word ForeignLanguage_10,
  MR_Word ForeignTagMap_11,
  MR_Word ConsSymName_12,
  MR_Word STATE_VARIABLE_ConsIdToTagMap_0_18,
  MR_Word * STATE_VARIABLE_ConsIdToTagMap_19,
  MR_Word STATE_VARIABLE_UnmappedCtors_0_20,
  MR_Word * STATE_VARIABLE_UnmappedCtors_21);

static void MR_CALL 
hlds__add_foreign_enum__fixup_foreign_tag_val_qualification_8_p_0(
  MR_Word CtorNameSet_9,
  MR_Word TypeModuleName_10,
  MR_Word STATE_VARIABLE_NamesAndTags_0_19,
  MR_Word * STATE_VARIABLE_NamesAndTags_20,
  MR_Word STATE_VARIABLE_BadQualCtors_0_21,
  MR_Word * STATE_VARIABLE_BadQualCtors_22,
  MR_Word STATE_VARIABLE_UnknownCtors_0_23,
  MR_Word * STATE_VARIABLE_UnknownCtors_24);

static void MR_CALL 
hlds__add_foreign_enum__gather_ctor_name_3_p_0(
  MR_Word Constructor_4,
  MR_Word STATE_VARIABLE_CtorNameSet_0_8,
  MR_Word * STATE_VARIABLE_CtorNameSet_9);

static void MR_CALL 
hlds__add_foreign_enum__constructor_to_cons_id_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word Ctor_5,
  MR_Word * ConsId_6);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__add_foreign_enum__build_export_enum_name_map_10_p_0(
  MR_Word ContextPieces_11,
  MR_Word Context_12,
  MR_Word Lang_13,
  MR_String Prefix_14,
  MR_Word MakeUpperCase_15,
  MR_Word OverrideMap_16,
  MR_Word CtorRepns_17,
  MR_Word * NameMap_18,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static void MR_CALL 
hlds__add_foreign_enum__build_export_enum_overrides_map_8_p_0(
  MR_Word TypeModuleName_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word CtorRepns_12,
  MR_Word Overrides_13,
  MR_Word * OverrideMap_14,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
hlds__add_foreign_enum__build_export_enum_overrides_map_loop_15_p_0(
  MR_Word TypeModuleName_1,
  MR_Word ValidCtorNames_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_OverrideMap_0_4,
  MR_Word * STATE_VARIABLE_OverrideMap_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_BadQualCtorSymNames_0_8,
  MR_Word * STATE_VARIABLE_BadQualCtorSymNames_9,
  MR_Word STATE_VARIABLE_InvalidCtorSymNames_0_10,
  MR_Word * STATE_VARIABLE_InvalidCtorSymNames_11,
  MR_Word STATE_VARIABLE_RepeatedCtorNames_0_12,
  MR_Word * STATE_VARIABLE_RepeatedCtorNames_13,
  MR_Word STATE_VARIABLE_RepeatedForeignNames_0_14,
  MR_Word * STATE_VARIABLE_RepeatedForeignNames_15);

static void MR_CALL 
hlds__add_foreign_enum__build_valid_ctor_names_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ValidNamesSet_0_2,
  MR_Word * STATE_VARIABLE_ValidNamesSet_3);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_5_p_0(
  MR_Word TypeSymName_6,
  MR_Integer TypeArity_7,
  MR_Word NotEnumInfo_8,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_19,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_20);

static void MR_CALL 
hlds__add_foreign_enum__report_if_builtin_type_4_p_0(
  MR_Word TypeSymame_5,
  MR_Integer TypeArity_6,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_9,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_10);

static void MR_CALL 
hlds__add_foreign_enum__maybe_add_duplicate_foreign_enum_error_8_p_0(
  MR_Word TypeSymame_9,
  MR_Integer TypeArity_10,
  MR_Word Lang_11,
  MR_Word PragmaStatus_12,
  MR_Word OldContext_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
hlds__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
  MR_Word Context_6,
  MR_Word TypeSymame_7,
  MR_Integer TypeArity_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors0_8,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static MR_Box MR_CALL 
hlds__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(
  MR_Word Ctors_4,
  MR_Word Final_5);

static void MR_CALL 
hlds__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_EnumSymNames_0_2,
  MR_Word * STATE_VARIABLE_EnumSymNames_3,
  MR_Word STATE_VARIABLE_NonEnumConsIds_0_4,
  MR_Word * STATE_VARIABLE_NonEnumConsIds_5);

static MR_Word MR_CALL 
hlds__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__add_foreign_enum__build_foreign_enum_tag_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__add_foreign_enum__build_foreign_enum_tag_map_8_p_0(
  MR_Word Context_9,
  MR_Word ContextPieces_10,
  MR_Word TypeSymName_11,
  MR_Word CtorNameSet_12,
  MR_Word ForeignTagValues0_13,
  MR_Word * MaybeForeignTagMap_14,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static MR_Box MR_CALL 
hlds__add_foreign_enum__add_bad_qual_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__add_foreign_enum__add_bad_qual_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static MR_Box MR_CALL 
hlds__add_foreign_enum__add_unknown_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__add_foreign_enum__add_unknown_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____cons_id_to_tag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__add_foreign_enum____Compare____cons_id_to_tag_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____not_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__add_foreign_enum____Compare____not_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[83][2];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[3][4];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_3[11][3];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[8][1];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_5[4][5];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_6[2][11];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_9[2][6];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_10[1][12];


/* sealed */ struct hlds__add_foreign_enum__vector_common_type_7_0_s {
  const MR_Word hlds__add_foreign_enum__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct hlds__add_foreign_enum__vector_common_type_7_0_s hlds__add_foreign_enum_vector_common_7[4];



static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[83][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_2[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign names does not form a bijection."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the user-specified mapping between Mercury and"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "repeated:"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_foreign_enum_scalar_common_4[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "more."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the type:"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[19])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that is not compatible with the type definition:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[19])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a module qualification"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign values does not form a bijection."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the mapping between Mercury enumeration values and"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a builtin type."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the following"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not have a foreign value:"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: duplicate foreign_enum pragma"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and target language"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The first foreign_enum pragma"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It has this non-zero arity constructor:"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It has these non-zero arity constructors:"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not an enumeration type."))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not an enumeration type;"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "it is"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for type"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not defined in this module."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The following Mercury constructor"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The following foreign"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: some of the constructors of the type"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be converted into valid identifiers for"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The problematic"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[3][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0)),
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_3[0])),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_3[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_5[0])),
    ((MR_Box) (hlds__add_foreign_enum__add_unknown_ctors_error_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_5[0])),
    ((MR_Box) (hlds__add_foreign_enum__add_bad_qual_ctors_error_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_5[0])),
    ((MR_Box) (hlds__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_5[1])),
    ((MR_Box) (hlds__add_foreign_enum__report_not_enum_type_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_9[1])),
    ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_5[3])),
    ((MR_Box) (hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "an abstract type"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "an equivalence type"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "a foreign type"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "a solver type"))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_6[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&hlds__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&hlds__add_foreign_enum____vpti_tuple_2__plain_parse_tree__error_util__type_ctor_info_error_severity_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_9[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_10[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_uppercase_export_enum_0)),
    ((MR_Box) (&hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct hlds__add_foreign_enum__vector_common_type_7_0_s hlds__add_foreign_enum_vector_common_7[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum____vpti_tuple_2__plain_parse_tree__error_util__type_ctor_info_error_severity_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
    (MR_PseudoTypeInfo) &hlds__add_foreign_enum__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_cons_id_to_tag_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__add_foreign_enum____Unify____cons_id_to_tag_map_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____cons_id_to_tag_map_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "cons_id_to_tag_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0
};

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_0 = {
  (MR_String) "not_enum_du",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_1 = {
  (MR_String) "not_enum_non_du",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_0[1] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_0
};

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_1[1] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_1
};

static const MR_DuPtagLayout hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_not_enum_info_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_not_enum_info_0[2] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_0,
  &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_1
};

static const MR_Integer hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_not_enum_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_not_enum_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__add_foreign_enum____Unify____not_enum_info_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____not_enum_info_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "not_enum_info",
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_not_enum_info_0 },
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_not_enum_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_not_enum_info_0
};

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2libs__globals__type_ctor_info_foreign_language_0term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__add_foreign_enum____vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0,
    (MR_TypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__maybe__ti_maybe_1__vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__add_foreign_enum____vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0
  }
};

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_type_ctor_foreign_enums_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__add_foreign_enum__tree234__ti_tree234_2libs__globals__type_ctor_info_foreign_language_0term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__add_foreign_enum__maybe__ti_maybe_1__vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0
};

static const MR_ConstString hlds__add_foreign_enum__hlds__add_foreign_enum__field_names_type_ctor_foreign_enums_0_0[2] = {
  (MR_String) "tcfe_lang_contexts",
  (MR_String) "tcfe_tag_values"
};

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_type_ctor_foreign_enums_0_0 = {
  (MR_String) "type_ctor_foreign_enums",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_type_ctor_foreign_enums_0_0,
  hlds__add_foreign_enum__hlds__add_foreign_enum__field_names_type_ctor_foreign_enums_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_type_ctor_foreign_enums_0_0[1] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_type_ctor_foreign_enums_0_0
};

static const MR_DuPtagLayout hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_type_ctor_foreign_enums_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_type_ctor_foreign_enums_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_type_ctor_foreign_enums_0[1] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_type_ctor_foreign_enums_0_0
};

static const MR_Integer hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_type_ctor_foreign_enums_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "type_ctor_foreign_enums",
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_type_ctor_foreign_enums_0 },
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_type_ctor_foreign_enums_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_type_ctor_foreign_enums_0
};

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0
  }
};

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_to_foreign_enums_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "type_ctor_to_foreign_enums_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__717__1_1_f_0(
  MR_String LambdaHeadVar__1_54)
{
  {
    MR_Word LambdaHeadVar__2_55;
    MR_Word Var_56;

    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (LambdaHeadVar__1_54));
    }
    {
      LambdaHeadVar__2_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return LambdaHeadVar__2_55;
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__180__1_2_p_0(
  MR_Word MaybeRepn_39,
  MR_Word HeadVar__2_111)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_1[2], ((MR_Box) (MaybeRepn_39)), ((MR_Box) (HeadVar__2_111)));
    return succeeded;
  }
}

void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_3[4], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_3[4], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_3[3], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_1[7], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0(
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
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_3[3], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &hlds__add_foreign_enum_scalar_common_1[7];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____not_enum_info_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_String Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____not_enum_info_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        TypeInfo_9_9 = (MR_Word) &hlds__add_foreign_enum_scalar_common_1[6];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_String ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__add_foreign_enum____Compare____cons_id_to_tag_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_3[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____cons_id_to_tag_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_3[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__wrap_unqual_cons_id_and_maybe_arity_1_f_0(
  MR_Word ConsId_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (ConsId_3));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_error_severity_pieces_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Tuple HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word Severity_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ErrorPieces_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Msg_11;
    MR_Word Spec_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_20;

    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ContextPieces_7, ErrorPieces_9);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_17));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (Severity_8));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__qual_ctor_to_format_component_1_f_0(
  MR_Word SymName_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (SymName_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(
  MR_Word SymName_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (SymName_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0(
  MR_Word Lang_10,
  MR_String Prefix_11,
  MR_Word MakeUpperCase_12,
  MR_Word OverrideMap_13,
  MR_Word CtorRepn_14,
  MR_Word STATE_VARIABLE_NameMap_0_23,
  MR_Word * STATE_VARIABLE_NameMap_24,
  MR_Word STATE_VARIABLE_BadForeignNames_0_25,
  MR_Word * STATE_VARIABLE_BadForeignNames_26)
{
  {
    MR_bool succeeded;
    MR_Word CtorSymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 1)));
    MR_String CtorName_18;
    MR_String ForeignNameTail_20;
    MR_String ForeignName_21;
    MR_Word IsValidForeignName_22;
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 0)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 2)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 3)));
    MR_Integer Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 4)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 5)));
    MR_String UserForeignName_19;
    MR_Word TypeCtorInfo_37_37;
    MR_Box conv0_UserForeignName_19;

    CtorName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_17);
    TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_37_37, TypeCtorInfo_37_37, OverrideMap_13, ((MR_Box) (CtorName_18)), &conv0_UserForeignName_19);
    if (succeeded)
    {
      UserForeignName_19 = ((MR_String) conv0_UserForeignName_19);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ForeignNameTail_20 = UserForeignName_19;
    else
      switch (MakeUpperCase_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ForeignNameTail_20 = CtorName_18;
          break;
        case (MR_Integer) 0:
          ForeignNameTail_20 = mercury__string__to_upper_1_f_0(CtorName_18);
          break;
      }
    ForeignName_21 = mercury__string__f_43_43_2_f_0(Prefix_11, ForeignNameTail_20);
    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_2[2]));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0_1));
            MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (ForeignName_21));
          }
          IsValidForeignName_22 = mercury__bool__pred_to_bool_1_f_0(Var_29);
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_ctor_to_name_map\'/9", (MR_String) "foreign_export_enum for Erlang");
            return;
          }
        }
        break;
    }
    switch (IsValidForeignName_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_BadForeignNames_26 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, STATE_VARIABLE_BadForeignNames_0_25, ((MR_Box) (ForeignName_21)));
          *STATE_VARIABLE_NameMap_24 = STATE_VARIABLE_NameMap_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

          mercury__map__det_insert_4_p_0(TypeCtorInfo_38_38, TypeCtorInfo_38_38, ((MR_Box) (CtorName_18)), ((MR_Box) (ForeignName_21)), STATE_VARIABLE_NameMap_0_23, STATE_VARIABLE_NameMap_24);
          *STATE_VARIABLE_BadForeignNames_26 = STATE_VARIABLE_BadForeignNames_0_25;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__make_foreign_tag_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word ForeignLanguage_10,
  MR_Word ForeignTagMap_11,
  MR_Word ConsSymName_12,
  MR_Word STATE_VARIABLE_ConsIdToTagMap_0_18,
  MR_Word * STATE_VARIABLE_ConsIdToTagMap_19,
  MR_Word STATE_VARIABLE_UnmappedCtors_0_20,
  MR_Word * STATE_VARIABLE_UnmappedCtors_21)
{
  {
    MR_bool succeeded;
    MR_String ForeignTagValue_15;
    MR_Box conv0_ForeignTagValue_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ForeignTagMap_11, ((MR_Box) (ConsSymName_12)), &conv0_ForeignTagValue_15);
    if (succeeded)
    {
      ForeignTagValue_15 = ((MR_String) conv0_ForeignTagValue_15);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ForeignTag_16;
      MR_Word ConsId_17;

      {
        ForeignTag_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ForeignTag_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ForeignTag_16, 1) = ((MR_Box) (ForeignLanguage_10));
        MR_hl_field(MR_mktag(3), ForeignTag_16, 2) = ((MR_Box) (ForeignTagValue_15));
      }
      {
        ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_17, 1) = ((MR_Box) (ConsSymName_12));
        MR_hl_field(MR_mktag(3), ConsId_17, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ConsId_17, 3) = ((MR_Box) (TypeCtor_9));
      }
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_17)), ((MR_Box) (ForeignTag_16)), STATE_VARIABLE_ConsIdToTagMap_0_18, STATE_VARIABLE_ConsIdToTagMap_19);
      *STATE_VARIABLE_UnmappedCtors_21 = STATE_VARIABLE_UnmappedCtors_0_20;
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_UnmappedCtors_21 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsSymName_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UnmappedCtors_0_20));
      }
      *STATE_VARIABLE_ConsIdToTagMap_19 = STATE_VARIABLE_ConsIdToTagMap_0_18;
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__fixup_foreign_tag_val_qualification_8_p_0(
  MR_Word CtorNameSet_9,
  MR_Word TypeModuleName_10,
  MR_Word STATE_VARIABLE_NamesAndTags_0_19,
  MR_Word * STATE_VARIABLE_NamesAndTags_20,
  MR_Word STATE_VARIABLE_BadQualCtors_0_21,
  MR_Word * STATE_VARIABLE_BadQualCtors_22,
  MR_Word STATE_VARIABLE_UnknownCtors_0_23,
  MR_Word * STATE_VARIABLE_UnknownCtors_24)
{
  {
    MR_bool succeeded;
    MR_Word CtorSymName0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NamesAndTags_0_19, (MR_Integer) 0)));
    MR_String ForeignTag_15 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NamesAndTags_0_19, (MR_Integer) 1)));
    MR_String Name_16;
    MR_Word CtorSymName_17;

    if (((MR_tag((MR_Word) CtorSymName0_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word CtorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorSymName0_14, (MR_Integer) 0)));

      Name_16 = ((MR_String) (MR_hl_field(MR_mktag(1), CtorSymName0_14, (MR_Integer) 1)));
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(CtorModuleName_18, TypeModuleName_10);
      if (succeeded)
      {
        {
          CtorSymName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CtorSymName_17, 0) = ((MR_Box) (TypeModuleName_10));
          MR_hl_field(MR_mktag(1), CtorSymName_17, 1) = ((MR_Box) (Name_16));
        }
        *STATE_VARIABLE_BadQualCtors_22 = STATE_VARIABLE_BadQualCtors_0_21;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_BadQualCtors_22 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorSymName0_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadQualCtors_0_21));
        }
        CtorSymName_17 = CtorSymName0_14;
      }
    }
    else
    {
      Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), CtorSymName0_14, (MR_Integer) 0)));
      {
        CtorSymName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CtorSymName_17, 0) = ((MR_Box) (TypeModuleName_10));
        MR_hl_field(MR_mktag(1), CtorSymName_17, 1) = ((MR_Box) (Name_16));
      }
      *STATE_VARIABLE_BadQualCtors_22 = STATE_VARIABLE_BadQualCtors_0_21;
    }
    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, CtorNameSet_9, ((MR_Box) (Name_16)));
    if (succeeded)
      *STATE_VARIABLE_UnknownCtors_24 = STATE_VARIABLE_UnknownCtors_0_23;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_UnknownCtors_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorSymName0_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UnknownCtors_0_23));
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NamesAndTags_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CtorSymName_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ForeignTag_15));
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__gather_ctor_name_3_p_0(
  MR_Word Constructor_4,
  MR_Word STATE_VARIABLE_CtorNameSet_0_8,
  MR_Word * STATE_VARIABLE_CtorNameSet_9)
{
  {
    MR_Word CtorSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 1)));
    MR_String Name_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 2)));
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 4)));

    Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_6);
    mercury__set_tree234__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (Name_7)), STATE_VARIABLE_CtorNameSet_0_8, STATE_VARIABLE_CtorNameSet_9);
  }
}

static void MR_CALL 
hlds__add_foreign_enum__constructor_to_cons_id_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word Ctor_5,
  MR_Word * ConsId_6)
{
  {
    MR_Word SymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 1)));
    MR_Integer Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 3)));
    MR_Word _MaybeExistConstraints_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 0)));
    MR_Word _Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 2)));
    MR_Word _Ctxt_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_5, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *ConsId_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SymName_8));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Arity_10));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TypeCtor_4));
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Specs_14;

    hlds__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ConsId_6;

    hlds__add_foreign_enum__constructor_to_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_ConsId_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_ConsId_6));
  }
}

void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0(
  MR_Word ItemForeignExportEnum_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * STATE_VARIABLE_ModuleInfo_62,
  MR_Word Specs0_8,
  MR_Word * Specs_9)
{
  {
    MR_bool succeeded;
    MR_Word FEEInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 0)));
    MR_Word Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 2)));
    MR_Word Lang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEEInfo_10, (MR_Integer) 0)));
    MR_Word TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEEInfo_10, (MR_Integer) 1)));
    MR_Word Attributes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEEInfo_10, (MR_Integer) 2)));
    MR_Word Overrides_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEEInfo_10, (MR_Integer) 3)));
    MR_Word TypeSymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0)));
    MR_Integer TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1)));
    MR_Word ContextPieces_20;
    MR_Word TypeTable_22;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_Specs_81_81;
    MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_82_82;
    MR_Word STATE_VARIABLE_Specs_93_93;
    MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_96_96;
    MR_Word STATE_VARIABLE_Specs_98_98;
    MR_Word _ItemMercuryStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 1)));
    MR_Integer _SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 3)));
    MR_Word TypeDefn_23;

    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (TypeSymName_18));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (TypeArity_19));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[10])));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[74])));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
    }
    {
      ContextPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContextPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), ContextPieces_20, 1) = ((MR_Box) (Var_65));
    }
    STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__add_foreign_enum__report_if_builtin_type_4_p_0(TypeSymName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_ErrorSeveritiesPieces_82_82);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_61, &TypeTable_22);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_15, &TypeDefn_23);
    if (succeeded)
    {
      MR_Word TypeModuleName_24;
      MR_Word TypeBody_27;

      if (((MR_tag((MR_Word) TypeSymName_18)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String _TypeName_25;

        TypeModuleName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_18, (MR_Integer) 0)));
        _TypeName_25 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_18, (MR_Integer) 1)));
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "unqualified type name for foreign_export_enum");
          return;
        }
      }
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_23, &TypeBody_27);
      switch (MR_tag((MR_Word) TypeBody_27)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[6]), STATE_VARIABLE_ErrorSeveritiesPieces_82_82, &STATE_VARIABLE_ErrorSeveritiesPieces_96_96);
            *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
            STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_81_81;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_103_103;
            MR_Word Ctors_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_27, (MR_Integer) 0)));
            MR_Word MaybeRepn_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_27, (MR_Integer) 2)));
            MR_Word Repn_37;
            MR_Word CtorRepns_38;
            MR_Word DuTypeKind_41;
            MR_Word ConsIds_43;
            MR_Word NonEnumConsIds_45;
            MR_Word MaybePrefix_50;
            MR_Word MakeUpperCase_51;
            MR_String Prefix_52;
            MR_Word OverrideBimap_53;
            MR_Word OverrideMap_54;
            MR_Word NameMap_55;
            MR_Word Var_87;
            MR_Word STATE_VARIABLE_Specs_92_92;
            MR_Word _MaybeUserEq_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_27, (MR_Integer) 1)));
            MR_Word _IsForeignType_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_27, (MR_Integer) 3)));
            MR_Word _ConsCtorMap_39;
            MR_Word _CheaperTagTest_40;
            MR_Word _MaybeDirectArgCtors_42;
            MR_Word _EnumSymNames_44;

            if ((MaybeRepn_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "MaybeRepn = no");
                return;
              }
            }
            else
              Repn_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRepn_35, (MR_Integer) 0)));
            CtorRepns_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_37, (MR_Integer) 0)));
            _ConsCtorMap_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_37, (MR_Integer) 1)));
            _CheaperTagTest_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_37, (MR_Integer) 2)));
            DuTypeKind_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_37, (MR_Integer) 3)));
            _MaybeDirectArgCtors_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Repn_37, (MR_Integer) 4)));
            {
              Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_9[0]));
              MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (TypeCtor_15));
            }
            mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, Var_87, Ctors_33, &ConsIds_43);
            hlds__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(ConsIds_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &_EnumSymNames_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &NonEnumConsIds_45);
            switch (MR_tag((MR_Word) DuTypeKind_41)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DuTypeKind_41)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_ErrorSeveritiesPieces_96_96 = STATE_VARIABLE_ErrorSeveritiesPieces_82_82;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_ErrorSeveritiesPieces_96_96 = STATE_VARIABLE_ErrorSeveritiesPieces_82_82;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_90;

                      {
                        Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (NonEnumConsIds_45));
                      }
                      hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_18, TypeArity_19, Var_90, STATE_VARIABLE_ErrorSeveritiesPieces_82_82, &STATE_VARIABLE_ErrorSeveritiesPieces_96_96);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_ErrorSeveritiesPieces_96_96 = STATE_VARIABLE_ErrorSeveritiesPieces_82_82;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_90;

                  {
                    Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (NonEnumConsIds_45));
                  }
                  hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_18, TypeArity_19, Var_90, STATE_VARIABLE_ErrorSeveritiesPieces_82_82, &STATE_VARIABLE_ErrorSeveritiesPieces_96_96);
                }
                break;
            }
            MaybePrefix_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attributes_16, (MR_Integer) 0)));
            MakeUpperCase_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attributes_16, (MR_Integer) 1)));
            if ((MaybePrefix_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              Prefix_52 = (MR_String) "";
            else
              Prefix_52 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybePrefix_50, (MR_Integer) 0)));
            hlds__add_foreign_enum__build_export_enum_overrides_map_8_p_0(TypeModuleName_24, Context_12, ContextPieces_20, CtorRepns_38, Overrides_17, &OverrideBimap_53, STATE_VARIABLE_Specs_81_81, &STATE_VARIABLE_Specs_92_92);
            TypeCtorInfo_103_103 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            OverrideMap_54 = mercury__bimap__forward_map_1_f_0(TypeCtorInfo_103_103, TypeCtorInfo_103_103, OverrideBimap_53);
            hlds__add_foreign_enum__build_export_enum_name_map_10_p_0(ContextPieces_20, Context_12, Lang_14, Prefix_52, MakeUpperCase_51, OverrideMap_54, CtorRepns_38, &NameMap_55, STATE_VARIABLE_Specs_92_92, &STATE_VARIABLE_Specs_93_93);
            succeeded = (STATE_VARIABLE_ErrorSeveritiesPieces_96_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
              succeeded = (STATE_VARIABLE_Specs_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              MR_Word ExportedEnum_56;
              MR_Word ExportedEnums0_57;
              MR_Word ExportedEnums_58;

              {
                ExportedEnum_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ExportedEnum_56, 0) = ((MR_Box) (TypeCtor_15));
                MR_hl_field(MR_mktag(0), ExportedEnum_56, 1) = ((MR_Box) (CtorRepns_38));
                MR_hl_field(MR_mktag(0), ExportedEnum_56, 2) = ((MR_Box) (Lang_14));
                MR_hl_field(MR_mktag(0), ExportedEnum_56, 3) = ((MR_Box) (NameMap_55));
                MR_hl_field(MR_mktag(0), ExportedEnum_56, 4) = ((MR_Box) (Context_12));
              }
              hlds__hlds_module__module_info_get_exported_enums_2_p_0(STATE_VARIABLE_ModuleInfo_0_61, &ExportedEnums0_57);
              {
                ExportedEnums_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ExportedEnums_58, 0) = ((MR_Box) (ExportedEnum_56));
                MR_hl_field(MR_mktag(1), ExportedEnums_58, 1) = ((MR_Box) (ExportedEnums0_57));
              }
              hlds__hlds_module__module_info_set_exported_enums_3_p_0(ExportedEnums_58, STATE_VARIABLE_ModuleInfo_0_61, STATE_VARIABLE_ModuleInfo_62);
            }
            else
              *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
          }
          break;
        case (MR_Integer) 2:
          {
            hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[5]), STATE_VARIABLE_ErrorSeveritiesPieces_82_82, &STATE_VARIABLE_ErrorSeveritiesPieces_96_96);
            *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
            STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_81_81;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_27, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[7]), STATE_VARIABLE_ErrorSeveritiesPieces_82_82, &STATE_VARIABLE_ErrorSeveritiesPieces_96_96);
                *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_81_81;
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[4]), STATE_VARIABLE_ErrorSeveritiesPieces_82_82, &STATE_VARIABLE_ErrorSeveritiesPieces_96_96);
                *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
                STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_81_81;
              }
              break;
          }
          break;
      }
    }
    else
    {
      STATE_VARIABLE_ErrorSeveritiesPieces_96_96 = STATE_VARIABLE_ErrorSeveritiesPieces_82_82;
      STATE_VARIABLE_Specs_93_93 = STATE_VARIABLE_Specs_81_81;
      *STATE_VARIABLE_ModuleInfo_62 = STATE_VARIABLE_ModuleInfo_0_61;
    }
    if ((STATE_VARIABLE_ErrorSeveritiesPieces_96_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_98_98 = STATE_VARIABLE_Specs_93_93;
    else
    {
      MR_Word Var_97;
      MR_Box conv2_STATE_VARIABLE_Specs_98_98;

      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Var_97, 4) = ((MR_Box) (ContextPieces_20));
      }
      mercury__list__foldl_4_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_1[1], Var_97, STATE_VARIABLE_ErrorSeveritiesPieces_96_96, ((MR_Box) (STATE_VARIABLE_Specs_93_93)), &conv2_STATE_VARIABLE_Specs_98_98);
      STATE_VARIABLE_Specs_98_98 = ((MR_Word) conv2_STATE_VARIABLE_Specs_98_98);
    }
    *Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, STATE_VARIABLE_Specs_98_98, Specs0_8);
  }
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_55;

    conv4_LambdaHeadVar__2_55 = hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__717__1_1_f_0(((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_55));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_NameMap_24;
    MR_Word conv0_STATE_VARIABLE_BadForeignNames_26;

    hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_NameMap_24, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_BadForeignNames_26);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NameMap_24));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_BadForeignNames_26));
  }
}

static void MR_CALL 
hlds__add_foreign_enum__build_export_enum_name_map_10_p_0(
  MR_Word ContextPieces_11,
  MR_Word Context_12,
  MR_Word Lang_13,
  MR_String Prefix_14,
  MR_Word MakeUpperCase_15,
  MR_Word OverrideMap_16,
  MR_Word CtorRepns_17,
  MR_Word * NameMap_18,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_Word TypeCtorInfo_91_91;
    MR_Word BadForeignNamesCord_20;
    MR_Word BadForeignNames_21;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Box conv3_NameMap_18;
    MR_Box conv2_BadForeignNamesCord_20;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Lang_13));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (Prefix_14));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (MakeUpperCase_15));
      MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (OverrideMap_16));
    }
    TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    Var_36 = mercury__map__init_0_f_0(TypeCtorInfo_91_91, TypeCtorInfo_91_91);
    Var_37 = mercury__cord__init_0_f_0(TypeCtorInfo_91_91);
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0, (MR_Word) &hlds__add_foreign_enum_scalar_common_3[2], (MR_Word) &hlds__add_foreign_enum_scalar_common_1[5], Var_35, CtorRepns_17, ((MR_Box) (Var_36)), &conv3_NameMap_18, ((MR_Box) (Var_37)), &conv2_BadForeignNamesCord_20);
    *NameMap_18 = ((MR_Word) conv3_NameMap_18);
    BadForeignNamesCord_20 = ((MR_Word) conv2_BadForeignNamesCord_20);
    BadForeignNames_21 = mercury__cord__to_list_1_f_0(TypeCtorInfo_91_91, BadForeignNamesCord_20);
    if ((BadForeignNames_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    else
    {
      MR_Word TypeCtorInfo_95_95;
      MR_String LangName_24;
      MR_Word AlwaysPieces_25;
      MR_Word BadForeignPiecesList_28;
      MR_Word BadForeignPieces_29;
      MR_Word VerbosePieces_30;
      MR_Word Msg_31;
      MR_Word Spec_32;
      MR_Word Var_40;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_String Var_67;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_82;
      MR_Box conv5_Var_67;

      switch (Lang_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          LangName_24 = (MR_String) "C";
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 3:
          {
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.build_export_enum_name_map\'/10", (MR_String) "foreign_export_enum pragma for unsupported language");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
          LangName_24 = (MR_String) "Java";
          break;
      }
      TypeCtorInfo_95_95 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (LangName_24));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[26])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[80])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[79])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      AlwaysPieces_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_95_95, ContextPieces_11, Var_40);
      BadForeignPiecesList_28 = mercury__list__map_2_f_0(TypeCtorInfo_91_91, (MR_Word) &hlds__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_3[10], BadForeignNames_21);
      BadForeignPieces_29 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(BadForeignPiecesList_28, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[51]));
      conv5_Var_67 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_91_91, TypeCtorInfo_91_91, BadForeignNames_21, ((MR_Box) ((MR_String) "foreign name is:")), ((MR_Box) ((MR_String) "foreign names are:")));
      Var_67 = ((MR_String) conv5_Var_67);
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[55])));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[81])));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
      }
      VerbosePieces_30 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_95_95, Var_62, BadForeignPieces_29);
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (AlwaysPieces_25));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_77, 0) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), Var_77, 1) = ((MR_Box) (VerbosePieces_30));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_76));
      }
      {
        Msg_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_31, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Msg_31, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Msg_31));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_32, 2) = ((MR_Box) (Var_82));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_34 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
      }
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__build_export_enum_overrides_map_8_p_0(
  MR_Word TypeModuleName_9,
  MR_Word Context_10,
  MR_Word ContextPieces_11,
  MR_Word CtorRepns_12,
  MR_Word Overrides_13,
  MR_Word * OverrideMap_14,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_119_119 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word TypeCtorInfo_120_120;
    MR_Word ValidCtorNames_16;
    MR_Word SeenCtorNames0_17;
    MR_Word SeenForeignNames0_18;
    MR_Word BadQualCtorSymNamesCord0_19;
    MR_Word InvalidCtorSymNamesCord0_20;
    MR_Word RepeatedCtorNamesCord0_21;
    MR_Word RepeatedForeignNamesCord0_22;
    MR_Word BadQualCtorSymNamesCord_23;
    MR_Word InvalidCtorSymNamesCord_24;
    MR_Word RepeatedCtorNamesCord_25;
    MR_Word RepeatedForeignNamesCord_26;
    MR_Word RepeatedCtorNames_27;
    MR_Word RepeatedForeignNames_28;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word STATE_VARIABLE_Specs_46_46;

    Var_41 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_119_119);
    hlds__add_foreign_enum__build_valid_ctor_names_set_3_p_0(CtorRepns_12, Var_41, &ValidCtorNames_16);
    SeenCtorNames0_17 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_119_119);
    SeenForeignNames0_18 = mercury__set_tree234__init_0_f_0(TypeCtorInfo_119_119);
    TypeCtorInfo_120_120 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    BadQualCtorSymNamesCord0_19 = mercury__cord__init_0_f_0(TypeCtorInfo_120_120);
    InvalidCtorSymNamesCord0_20 = mercury__cord__init_0_f_0(TypeCtorInfo_120_120);
    RepeatedCtorNamesCord0_21 = mercury__cord__init_0_f_0(TypeCtorInfo_119_119);
    RepeatedForeignNamesCord0_22 = mercury__cord__init_0_f_0(TypeCtorInfo_119_119);
    Var_42 = mercury__bimap__init_0_f_0(TypeCtorInfo_119_119, TypeCtorInfo_119_119);
    hlds__add_foreign_enum__build_export_enum_overrides_map_loop_15_p_0(TypeModuleName_9, ValidCtorNames_16, Overrides_13, Var_42, OverrideMap_14, SeenCtorNames0_17, SeenForeignNames0_18, BadQualCtorSymNamesCord0_19, &BadQualCtorSymNamesCord_23, InvalidCtorSymNamesCord0_20, &InvalidCtorSymNamesCord_24, RepeatedCtorNamesCord0_21, &RepeatedCtorNamesCord_25, RepeatedForeignNamesCord0_22, &RepeatedForeignNamesCord_26);
    succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_120_120, BadQualCtorSymNamesCord_23);
    if (succeeded)
      STATE_VARIABLE_Specs_44_44 = STATE_VARIABLE_Specs_0_39;
    else
    {
      MR_Word Var_43;

      Var_43 = mercury__cord__to_list_1_f_0(TypeCtorInfo_120_120, BadQualCtorSymNamesCord_23);
      hlds__add_foreign_enum__add_bad_qual_ctors_error_5_p_0(Context_10, ContextPieces_11, Var_43, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_44_44);
    }
    succeeded = mercury__cord__is_empty_1_p_0(TypeCtorInfo_120_120, InvalidCtorSymNamesCord_24);
    if (succeeded)
      STATE_VARIABLE_Specs_46_46 = STATE_VARIABLE_Specs_44_44;
    else
    {
      MR_Word Var_45;

      Var_45 = mercury__cord__to_list_1_f_0(TypeCtorInfo_120_120, InvalidCtorSymNamesCord_24);
      hlds__add_foreign_enum__add_unknown_ctors_error_5_p_0(Context_10, ContextPieces_11, Var_45, STATE_VARIABLE_Specs_44_44, &STATE_VARIABLE_Specs_46_46);
    }
    RepeatedCtorNames_27 = mercury__cord__to_list_1_f_0(TypeCtorInfo_119_119, RepeatedCtorNamesCord_25);
    RepeatedForeignNames_28 = mercury__cord__to_list_1_f_0(TypeCtorInfo_119_119, RepeatedForeignNamesCord_26);
    succeeded = (RepeatedCtorNames_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (RepeatedForeignNames_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_46_46;
    else
    {
      MR_Word TypeCtorInfo_121_121 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      MR_Word MainPieces_29;
      MR_Word CtorNamePieces_30;
      MR_Word ForeignNamePieces_33;
      MR_Word Pieces_36;
      MR_Word Msg_37;
      MR_Word Spec_38;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_116;

      MainPieces_29 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_121_121, ContextPieces_11, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[17]));
      if ((RepeatedCtorNames_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        CtorNamePieces_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_String Var_67;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Box conv0_Var_67;

        conv0_Var_67 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_119_119, TypeCtorInfo_119_119, RepeatedCtorNames_27, ((MR_Box) ((MR_String) "name is")), ((MR_Box) ((MR_String) "names are")));
        Var_67 = ((MR_String) conv0_Var_67);
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[21])));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[77])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
        }
        Var_78 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(RepeatedCtorNames_27);
        Var_77 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_121_121, Var_78, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[25]));
        CtorNamePieces_30 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_121_121, Var_62, Var_77);
      }
      if ((RepeatedForeignNames_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        ForeignNamePieces_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Var_86;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_String Var_91;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Box conv1_Var_91;

        conv1_Var_91 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_119_119, TypeCtorInfo_119_119, RepeatedForeignNames_28, ((MR_Box) ((MR_String) "name is")), ((MR_Box) ((MR_String) "names are")));
        Var_91 = ((MR_String) conv1_Var_91);
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (Var_91));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[21])));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[78])));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_89));
        }
        Var_102 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(RepeatedForeignNames_28);
        Var_101 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_121_121, Var_102, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[25]));
        ForeignNamePieces_33 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_121_121, Var_86, Var_101);
      }
      Var_110 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_121_121, CtorNamePieces_30, ForeignNamePieces_33);
      Pieces_36 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_121_121, MainPieces_29, Var_110);
      {
        Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Pieces_36));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_37, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Msg_37, 1) = ((MR_Box) (Var_111));
      }
      {
        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Msg_37));
        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_38, 2) = ((MR_Box) (Var_116));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_40 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_38));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_46_46));
      }
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__build_export_enum_overrides_map_loop_15_p_0(
  MR_Word TypeModuleName_1,
  MR_Word ValidCtorNames_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_OverrideMap_0_4,
  MR_Word * STATE_VARIABLE_OverrideMap_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_BadQualCtorSymNames_0_8,
  MR_Word * STATE_VARIABLE_BadQualCtorSymNames_9,
  MR_Word STATE_VARIABLE_InvalidCtorSymNames_0_10,
  MR_Word * STATE_VARIABLE_InvalidCtorSymNames_11,
  MR_Word STATE_VARIABLE_RepeatedCtorNames_0_12,
  MR_Word * STATE_VARIABLE_RepeatedCtorNames_13,
  MR_Word STATE_VARIABLE_RepeatedForeignNames_0_14,
  MR_Word * STATE_VARIABLE_RepeatedForeignNames_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_RepeatedForeignNames_15 = STATE_VARIABLE_RepeatedForeignNames_0_14;
      *STATE_VARIABLE_RepeatedCtorNames_13 = STATE_VARIABLE_RepeatedCtorNames_0_12;
      *STATE_VARIABLE_InvalidCtorSymNames_11 = STATE_VARIABLE_InvalidCtorSymNames_0_10;
      *STATE_VARIABLE_BadQualCtorSymNames_9 = STATE_VARIABLE_BadQualCtorSymNames_0_8;
      *STATE_VARIABLE_OverrideMap_5 = STATE_VARIABLE_OverrideMap_0_4;
    }
    else
    {
      MR_Word Override_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Overrides_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word CtorSymName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Override_37, (MR_Integer) 0)));
      MR_String ForeignName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), Override_37, (MR_Integer) 1)));
      MR_String CtorName_50;
      MR_Word STATE_VARIABLE_BadQualCtorSymNames_64_64;
      MR_Word STATE_VARIABLE_OK_65_65;
      MR_Word STATE_VARIABLE_InvalidCtorSymNames_66_66;
      MR_Word STATE_VARIABLE_OK_67_67;
      MR_Word STATE_VARIABLE_RepeatedCtorNames_69_69;
      MR_Word STATE_VARIABLE_OK_70_70;
      MR_Word STATE_VARIABLE_SeenCtorNames_71_71;
      MR_Word STATE_VARIABLE_RepeatedForeignNames_73_73;
      MR_Word STATE_VARIABLE_SeenForeignNames_75_75;
      MR_Word STATE_VARIABLE_OverrideMap_76_76;
      MR_Word STATE_VARIABLE_SeenCtorNames_68_68;
      MR_Word STATE_VARIABLE_SeenForeignNames_72_72;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_OverrideMap_0_4;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_BadQualCtorSymNames_0_8;
      MR_Word next_value_of_STATE_VARIABLE_InvalidCtorSymNames_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RepeatedCtorNames_0_12;
      MR_Word next_value_of_STATE_VARIABLE_RepeatedForeignNames_0_14;

      if (((MR_tag((MR_Word) CtorSymName_46)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word CtorModuleName_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorSymName_46, (MR_Integer) 0)));

        CtorName_50 = ((MR_String) (MR_hl_field(MR_mktag(1), CtorSymName_46, (MR_Integer) 1)));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CtorModuleName_49, TypeModuleName_1);
        if (succeeded)
        {
          STATE_VARIABLE_OK_65_65 = (MR_Integer) 1;
          STATE_VARIABLE_BadQualCtorSymNames_64_64 = STATE_VARIABLE_BadQualCtorSymNames_0_8;
        }
        else
        {
          STATE_VARIABLE_BadQualCtorSymNames_64_64 = mercury__cord__snoc_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, STATE_VARIABLE_BadQualCtorSymNames_0_8, ((MR_Box) (CtorSymName_46)));
          STATE_VARIABLE_OK_65_65 = (MR_Integer) 0;
        }
      }
      else
      {
        CtorName_50 = ((MR_String) (MR_hl_field(MR_mktag(0), CtorSymName_46, (MR_Integer) 0)));
        STATE_VARIABLE_BadQualCtorSymNames_64_64 = STATE_VARIABLE_BadQualCtorSymNames_0_8;
        STATE_VARIABLE_OK_65_65 = (MR_Integer) 1;
      }
      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ValidCtorNames_2, ((MR_Box) (CtorName_50)));
      if (succeeded)
      {
        STATE_VARIABLE_OK_67_67 = STATE_VARIABLE_OK_65_65;
        STATE_VARIABLE_InvalidCtorSymNames_66_66 = STATE_VARIABLE_InvalidCtorSymNames_0_10;
      }
      else
      {
        STATE_VARIABLE_InvalidCtorSymNames_66_66 = mercury__cord__snoc_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, STATE_VARIABLE_InvalidCtorSymNames_0_10, ((MR_Box) (CtorSymName_46)));
        STATE_VARIABLE_OK_67_67 = (MR_Integer) 0;
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (CtorName_50)), HeadVar__6_6, &STATE_VARIABLE_SeenCtorNames_68_68);
      if (succeeded)
      {
        STATE_VARIABLE_SeenCtorNames_71_71 = STATE_VARIABLE_SeenCtorNames_68_68;
        STATE_VARIABLE_OK_70_70 = STATE_VARIABLE_OK_67_67;
        STATE_VARIABLE_RepeatedCtorNames_69_69 = STATE_VARIABLE_RepeatedCtorNames_0_12;
      }
      else
      {
        STATE_VARIABLE_RepeatedCtorNames_69_69 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, STATE_VARIABLE_RepeatedCtorNames_0_12, ((MR_Box) (CtorName_50)));
        STATE_VARIABLE_OK_70_70 = (MR_Integer) 0;
        STATE_VARIABLE_SeenCtorNames_71_71 = HeadVar__6_6;
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (ForeignName_47)), HeadVar__7_7, &STATE_VARIABLE_SeenForeignNames_72_72);
      if (succeeded)
      {
        STATE_VARIABLE_SeenForeignNames_75_75 = STATE_VARIABLE_SeenForeignNames_72_72;
        STATE_VARIABLE_RepeatedForeignNames_73_73 = STATE_VARIABLE_RepeatedForeignNames_0_14;
        switch (STATE_VARIABLE_OK_70_70) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_OverrideMap_76_76 = STATE_VARIABLE_OverrideMap_0_4;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

              mercury__bimap__det_insert_4_p_0(TypeCtorInfo_89_89, TypeCtorInfo_89_89, ((MR_Box) (CtorName_50)), ((MR_Box) (ForeignName_47)), STATE_VARIABLE_OverrideMap_0_4, &STATE_VARIABLE_OverrideMap_76_76);
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_RepeatedForeignNames_73_73 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, STATE_VARIABLE_RepeatedForeignNames_0_14, ((MR_Box) (ForeignName_47)));
        STATE_VARIABLE_SeenForeignNames_75_75 = HeadVar__7_7;
        STATE_VARIABLE_OverrideMap_76_76 = STATE_VARIABLE_OverrideMap_0_4;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = Overrides_38;
      next_value_of_STATE_VARIABLE_OverrideMap_0_4 = STATE_VARIABLE_OverrideMap_76_76;
      next_value_of_HeadVar__6_6 = STATE_VARIABLE_SeenCtorNames_71_71;
      next_value_of_HeadVar__7_7 = STATE_VARIABLE_SeenForeignNames_75_75;
      next_value_of_STATE_VARIABLE_BadQualCtorSymNames_0_8 = STATE_VARIABLE_BadQualCtorSymNames_64_64;
      next_value_of_STATE_VARIABLE_InvalidCtorSymNames_0_10 = STATE_VARIABLE_InvalidCtorSymNames_66_66;
      next_value_of_STATE_VARIABLE_RepeatedCtorNames_0_12 = STATE_VARIABLE_RepeatedCtorNames_69_69;
      next_value_of_STATE_VARIABLE_RepeatedForeignNames_0_14 = STATE_VARIABLE_RepeatedForeignNames_73_73;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_OverrideMap_0_4 = next_value_of_STATE_VARIABLE_OverrideMap_0_4;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_BadQualCtorSymNames_0_8 = next_value_of_STATE_VARIABLE_BadQualCtorSymNames_0_8;
      STATE_VARIABLE_InvalidCtorSymNames_0_10 = next_value_of_STATE_VARIABLE_InvalidCtorSymNames_0_10;
      STATE_VARIABLE_RepeatedCtorNames_0_12 = next_value_of_STATE_VARIABLE_RepeatedCtorNames_0_12;
      STATE_VARIABLE_RepeatedForeignNames_0_14 = next_value_of_STATE_VARIABLE_RepeatedForeignNames_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__build_valid_ctor_names_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ValidNamesSet_0_2,
  MR_Word * STATE_VARIABLE_ValidNamesSet_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ValidNamesSet_3 = STATE_VARIABLE_ValidNamesSet_0_2;
    else
    {
      MR_Word CtorRepn_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word CtorRepns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word CtorSymName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_7, (MR_Integer) 1)));
      MR_String CtorName_11;
      MR_Word STATE_VARIABLE_ValidNamesSet_14_14;
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_7, (MR_Integer) 0)));
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_7, (MR_Integer) 2)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_7, (MR_Integer) 3)));
      MR_Integer Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CtorRepn_7, (MR_Integer) 4)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn_7, (MR_Integer) 5)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ValidNamesSet_0_2;

      CtorName_11 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_10);
      mercury__set_tree234__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (CtorName_11)), STATE_VARIABLE_ValidNamesSet_0_2, &STATE_VARIABLE_ValidNamesSet_14_14);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = CtorRepns_8;
      next_value_of_STATE_VARIABLE_ValidNamesSet_0_2 = STATE_VARIABLE_ValidNamesSet_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ValidNamesSet_0_2 = next_value_of_STATE_VARIABLE_ValidNamesSet_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_STATE_VARIABLE_Specs_14;

    hlds__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv17_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv17_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_Specs_14;

    hlds__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv15_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_Specs_14;

    hlds__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv13_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_Specs_14;

    hlds__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv9_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ConsIdToTagMap_19;
    MR_Word conv5_STATE_VARIABLE_UnmappedCtors_21;

    hlds__add_foreign_enum__make_foreign_tag_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_ConsIdToTagMap_19, ((MR_Word) wrapper_arg_4), &conv5_STATE_VARIABLE_UnmappedCtors_21);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ConsIdToTagMap_19));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_UnmappedCtors_21));
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_CtorNameSet_9;

    hlds__add_foreign_enum__gather_ctor_name_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_STATE_VARIABLE_CtorNameSet_9);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_CtorNameSet_9));
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ConsId_6;

    hlds__add_foreign_enum__constructor_to_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv2_ConsId_6);
    *wrapper_arg_2 = ((MR_Box) (conv2_ConsId_6));
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__180__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_14;

    hlds__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_14));
  }
}

void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ItemForeignExportEnum_8,
  MR_Word STATE_VARIABLE_TypeCtorForeignEnumMap_0_67,
  MR_Word * STATE_VARIABLE_TypeCtorForeignEnumMap_68,
  MR_Word Specs0_10,
  MR_Word * Specs_11)
{
  {
    MR_bool succeeded;
    MR_Word FEInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemForeignExportEnum_8, (MR_Integer) 0)));
    MR_Word ItemMercuryStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemForeignExportEnum_8, (MR_Integer) 1)));
    MR_Word Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemForeignExportEnum_8, (MR_Integer) 2)));
    MR_Integer SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemForeignExportEnum_8, (MR_Integer) 3)));
    MR_Word ItemPragmaInfo_16;
    MR_Word Specs1_17;
    MR_Word PragmaStatus_18;
    MR_Word Lang_19;
    MR_Word TypeCtor_20;
    MR_Word ForeignTagValues_21;
    MR_Word TypeSymName_22;
    MR_Integer TypeArity_23;
    MR_Word ContextPieces_24;
    MR_Word TypeTable_26;
    MR_Word Var_69;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word STATE_VARIABLE_Specs_89_89;
    MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_90_90;
    MR_Word STATE_VARIABLE_Specs_133_133;
    MR_Word TypeDefn_27;

    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (FEInfo_12));
    }
    {
      ItemPragmaInfo_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, 2) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, 3) = ((MR_Box) (SeqNum_15));
    }
    hlds__make_hlds_error__report_if_pragma_is_wrongly_in_interface_4_p_0(ItemMercuryStatus_13, ItemPragmaInfo_16, Specs0_10, &Specs1_17);
    hlds__status__item_mercury_status_to_type_status_2_p_0(ItemMercuryStatus_13, &PragmaStatus_18);
    Lang_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEInfo_12, (MR_Integer) 0)));
    TypeCtor_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEInfo_12, (MR_Integer) 1)));
    ForeignTagValues_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEInfo_12, (MR_Integer) 2)));
    TypeSymName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_20, (MR_Integer) 0)));
    TypeArity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_20, (MR_Integer) 1)));
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (TypeSymName_22));
      MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (TypeArity_23));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Var_81));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[10])));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[74])));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      ContextPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContextPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), ContextPieces_24, 1) = ((MR_Box) (Var_73));
    }
    STATE_VARIABLE_Specs_89_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__add_foreign_enum__report_if_builtin_type_4_p_0(TypeSymName_22, TypeArity_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_ErrorSeveritiesPieces_90_90);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_26);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_26, TypeCtor_20, &TypeDefn_27);
    if (succeeded)
    {
      MR_Word TypeStatus_28;
      MR_Word IsTypeLocal_29;
      MR_Word TypeBody_31;
      MR_Word STATE_VARIABLE_Specs_95_95;
      MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_105_105;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_27, &TypeStatus_28);
      IsTypeLocal_29 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_28);
      switch (IsTypeLocal_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_91;

            Var_91 = hlds__status__type_status_is_imported_1_f_0(PragmaStatus_18);
            succeeded = (Var_91 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_212 = (MR_Word) PragmaStatus_18;

            if ((Var_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
              succeeded = MR_TRUE;
            else
            if ((Var_212 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      if (succeeded)
      {
        STATE_VARIABLE_ErrorSeveritiesPieces_105_105 = STATE_VARIABLE_ErrorSeveritiesPieces_90_90;
        STATE_VARIABLE_Specs_95_95 = STATE_VARIABLE_Specs_89_89;
      }
      else
      {
        MR_Word Var_94 = (MR_Word) PragmaStatus_18;

        succeeded = (Var_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        if (succeeded)
        {
          hlds__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(Context_14, TypeSymName_22, TypeArity_23, STATE_VARIABLE_Specs_89_89, &STATE_VARIABLE_Specs_95_95);
          STATE_VARIABLE_ErrorSeveritiesPieces_105_105 = STATE_VARIABLE_ErrorSeveritiesPieces_90_90;
        }
        else
        {
          MR_Word NotThisModuleErrorPieces_30;
          MR_Word Var_98;
          MR_Tuple Var_106;

          {
            Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[76])));
          }
          {
            NotThisModuleErrorPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NotThisModuleErrorPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[67])));
            MR_hl_field(MR_mktag(1), NotThisModuleErrorPieces_30, 1) = ((MR_Box) (Var_98));
          }
          {
            Var_106 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (NotThisModuleErrorPieces_30));
          }
          {
            STATE_VARIABLE_ErrorSeveritiesPieces_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ErrorSeveritiesPieces_105_105, 0) = ((MR_Box) (Var_106));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ErrorSeveritiesPieces_105_105, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_90_90));
          }
          STATE_VARIABLE_Specs_95_95 = STATE_VARIABLE_Specs_89_89;
        }
      }
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_27, &TypeBody_31);
      switch (MR_tag((MR_Word) TypeBody_31)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_131_199;
            MR_Word Var_200;
            MR_Box conv16_STATE_VARIABLE_Specs_133_133;

            hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_22, TypeArity_23, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[6]), STATE_VARIABLE_ErrorSeveritiesPieces_105_105, &STATE_VARIABLE_ErrorSeveritiesPieces_131_199);
            {
              Var_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_200, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), Var_200, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_8));
              MR_hl_field(MR_mktag(0), Var_200, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_200, 3) = ((MR_Box) (Context_14));
              MR_hl_field(MR_mktag(0), Var_200, 4) = ((MR_Box) (ContextPieces_24));
            }
            mercury__list__foldl_4_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_1[1], Var_200, STATE_VARIABLE_ErrorSeveritiesPieces_131_199, ((MR_Box) (STATE_VARIABLE_Specs_95_95)), &conv16_STATE_VARIABLE_Specs_133_133);
            STATE_VARIABLE_Specs_133_133 = ((MR_Word) conv16_STATE_VARIABLE_Specs_133_133);
            *STATE_VARIABLE_TypeCtorForeignEnumMap_68 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_67;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_151_151;
            MR_Word TypeCtorInfo_152_152;
            MR_Word Ctors_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_31, (MR_Integer) 0)));
            MR_Word MaybeRepn_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_31, (MR_Integer) 2)));
            MR_Word ConsIds_41;
            MR_Word EnumSymNames_42;
            MR_Word NonEnumConsIds_43;
            MR_Word Globals_46;
            MR_Word TargetLanguage_47;
            MR_Word LangForForeignEnums_48;
            MR_Word CtorNameSet_49;
            MR_Word MaybeForeignTagMap_50;
            MR_Word MaybeTagValues_51;
            MR_Word MaybeTagValuesToSet_58;
            MR_Word Var_108;
            MR_Word Var_112;
            MR_Word Var_118;
            MR_Word STATE_VARIABLE_Specs_119_119;
            MR_Word STATE_VARIABLE_Specs_123_123;
            MR_Word Var_124;
            MR_Word STATE_VARIABLE_Specs_125_125;
            MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_131_136;
            MR_Word _MaybeUserEq_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_31, (MR_Integer) 1)));
            MR_Word _IsForeignType_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_31, (MR_Integer) 3)));
            MR_Box conv4_CtorNameSet_49;
            MR_Box conv10_STATE_VARIABLE_Specs_125_125;
            MR_Word TagValues_57;
            MR_Word TCFE0_59;
            MR_Box conv11_TCFE0_59;

            {
              Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_5[2]));
              MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2));
              MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (MaybeRepn_39));
              MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            mercury__require__expect_3_p_0(Var_108, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "MaybeRepn != no");
            {
              Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_9[0]));
              MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_3));
              MR_hl_field(MR_mktag(0), Var_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_112, 3) = ((MR_Box) (TypeCtor_20));
            }
            TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
            TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
            mercury__list__map_3_p_0(TypeCtorInfo_151_151, TypeCtorInfo_152_152, Var_112, Ctors_37, &ConsIds_41);
            hlds__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(ConsIds_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &EnumSymNames_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &NonEnumConsIds_43);
            if ((NonEnumConsIds_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              STATE_VARIABLE_ErrorSeveritiesPieces_131_136 = STATE_VARIABLE_ErrorSeveritiesPieces_105_105;
            else
            {
              MR_Word Var_115;

              {
                Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (NonEnumConsIds_43));
              }
              hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_22, TypeArity_23, Var_115, STATE_VARIABLE_ErrorSeveritiesPieces_105_105, &STATE_VARIABLE_ErrorSeveritiesPieces_131_136);
            }
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_46);
            libs__globals__get_target_2_p_0(Globals_46, &TargetLanguage_47);
            LangForForeignEnums_48 = hlds__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(TargetLanguage_47);
            Var_118 = mercury__set_tree234__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            mercury__list__foldl_4_p_0(TypeCtorInfo_151_151, (MR_Word) &hlds__add_foreign_enum_scalar_common_1[3], (MR_Word) &hlds__add_foreign_enum_scalar_common_3[9], Ctors_37, ((MR_Box) (Var_118)), &conv4_CtorNameSet_49);
            CtorNameSet_49 = ((MR_Word) conv4_CtorNameSet_49);
            hlds__add_foreign_enum__build_foreign_enum_tag_map_8_p_0(Context_14, ContextPieces_24, TypeSymName_22, CtorNameSet_49, ForeignTagValues_21, &MaybeForeignTagMap_50, STATE_VARIABLE_Specs_95_95, &STATE_VARIABLE_Specs_119_119);
            if ((MaybeForeignTagMap_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MaybeTagValues_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              STATE_VARIABLE_Specs_123_123 = STATE_VARIABLE_Specs_119_119;
            }
            else
            {
              MR_Word ForeignTagMap_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeForeignTagMap_50, (MR_Integer) 0)));
              MR_Word TagValues0_53;
              MR_Word UnmappedCtors_54;
              MR_Word Var_120;
              MR_Word Var_121;
              MR_Box conv8_TagValues0_53;
              MR_Box conv7_UnmappedCtors_54;

              {
                Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[1]));
                MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_5));
                MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (TypeCtor_20));
                MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) (Lang_19));
                MR_hl_field(MR_mktag(0), Var_120, 5) = ((MR_Box) (ForeignTagMap_52));
              }
              Var_121 = mercury__map__init_0_f_0(TypeCtorInfo_152_152, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0);
              mercury__list__foldl2_6_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__add_foreign_enum_scalar_common_3[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_1[4], Var_120, EnumSymNames_42, ((MR_Box) (Var_121)), &conv8_TagValues0_53, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv7_UnmappedCtors_54);
              TagValues0_53 = ((MR_Word) conv8_TagValues0_53);
              UnmappedCtors_54 = ((MR_Word) conv7_UnmappedCtors_54);
              {
                MaybeTagValues_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeTagValues_51, 0) = ((MR_Box) (TagValues0_53));
              }
              if ((UnmappedCtors_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                STATE_VARIABLE_Specs_123_123 = STATE_VARIABLE_Specs_119_119;
              else
                hlds__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(Context_14, ContextPieces_24, UnmappedCtors_54, STATE_VARIABLE_Specs_119_119, &STATE_VARIABLE_Specs_123_123);
            }
            {
              Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_6));
              MR_hl_field(MR_mktag(0), Var_124, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_124, 3) = ((MR_Box) (Context_14));
              MR_hl_field(MR_mktag(0), Var_124, 4) = ((MR_Box) (ContextPieces_24));
            }
            mercury__list__foldl_4_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_1[1], Var_124, STATE_VARIABLE_ErrorSeveritiesPieces_131_136, ((MR_Box) (STATE_VARIABLE_Specs_123_123)), &conv10_STATE_VARIABLE_Specs_125_125);
            STATE_VARIABLE_Specs_125_125 = ((MR_Word) conv10_STATE_VARIABLE_Specs_125_125);
            succeeded = (Lang_19 == LangForForeignEnums_48);
            if (succeeded)
            {
              succeeded = (STATE_VARIABLE_Specs_125_125 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) MaybeTagValues_51)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  TagValues_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTagValues_51, (MR_Integer) 0)));
              }
            }
            if (succeeded)
            {
              MR_Tuple Var_126;

              {
                Var_126 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (TagValues_57));
                MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (Lang_19));
              }
              {
                MaybeTagValuesToSet_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeTagValuesToSet_58, 0) = ((MR_Box) (Var_126));
              }
            }
            else
              MaybeTagValuesToSet_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0, STATE_VARIABLE_TypeCtorForeignEnumMap_0_67, ((MR_Box) (TypeCtor_20)), &conv11_TCFE0_59);
            if (succeeded)
            {
              TCFE0_59 = ((MR_Word) conv11_TCFE0_59);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word LangContextMap0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE0_59, (MR_Integer) 0)));
              MR_Word TCFE1_63;
              MR_Word TCFE_65;
              MR_Word _OldMaybeTagValues_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE0_59, (MR_Integer) 1)));
              MR_Word OldContext_62;
              MR_Box conv12_OldContext_62;

              succeeded = mercury__map__search_3_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &mercury__term__term__type_ctor_info_context_0, LangContextMap0_60, ((MR_Box) (Lang_19)), &conv12_OldContext_62);
              if (succeeded)
              {
                OldContext_62 = ((MR_Word) conv12_OldContext_62);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                hlds__add_foreign_enum__maybe_add_duplicate_foreign_enum_error_8_p_0(TypeSymName_22, TypeArity_23, Lang_19, PragmaStatus_18, OldContext_62, Context_14, STATE_VARIABLE_Specs_125_125, &STATE_VARIABLE_Specs_133_133);
                TCFE1_63 = TCFE0_59;
              }
              else
              {
                MR_Word LangContextMap_64;
                MR_Word Var_140;
                MR_Word Var_139;

                mercury__map__det_insert_4_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &mercury__term__term__type_ctor_info_context_0, ((MR_Box) (Lang_19)), ((MR_Box) (Context_14)), LangContextMap0_60, &LangContextMap_64);
                Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE0_59, (MR_Integer) 0)));
                Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE0_59, (MR_Integer) 1)));
                {
                  TCFE1_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TCFE1_63, 0) = ((MR_Box) (LangContextMap_64));
                  MR_hl_field(MR_mktag(0), TCFE1_63, 1) = ((MR_Box) (Var_140));
                }
                STATE_VARIABLE_Specs_133_133 = STATE_VARIABLE_Specs_125_125;
              }
              if ((MaybeTagValuesToSet_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                TCFE_65 = TCFE1_63;
              else
              {
                MR_Word Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE1_63, (MR_Integer) 0)));
                MR_Word Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), TCFE1_63, (MR_Integer) 1)));

                {
                  TCFE_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TCFE_65, 0) = ((MR_Box) (Var_141));
                  MR_hl_field(MR_mktag(0), TCFE_65, 1) = ((MR_Box) (MaybeTagValuesToSet_58));
                }
              }
              mercury__map__det_update_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0, ((MR_Box) (TypeCtor_20)), ((MR_Box) (TCFE_65)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_67, STATE_VARIABLE_TypeCtorForeignEnumMap_68);
            }
            else
            {
              MR_Word LangContextMap_134;
              MR_Word TCFE_135;

              LangContextMap_134 = mercury__map__singleton_2_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &mercury__term__term__type_ctor_info_context_0, ((MR_Box) (Lang_19)), ((MR_Box) (Context_14)));
              {
                TCFE_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TCFE_135, 0) = ((MR_Box) (LangContextMap_134));
                MR_hl_field(MR_mktag(0), TCFE_135, 1) = ((MR_Box) (MaybeTagValuesToSet_58));
              }
              mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0, ((MR_Box) (TypeCtor_20)), ((MR_Box) (TCFE_135)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_67, STATE_VARIABLE_TypeCtorForeignEnumMap_68);
              STATE_VARIABLE_Specs_133_133 = STATE_VARIABLE_Specs_125_125;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_131_190;
            MR_Word Var_191;
            MR_Box conv14_STATE_VARIABLE_Specs_133_133;

            hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_22, TypeArity_23, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[5]), STATE_VARIABLE_ErrorSeveritiesPieces_105_105, &STATE_VARIABLE_ErrorSeveritiesPieces_131_190);
            {
              Var_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_191, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_8[0]));
              MR_hl_field(MR_mktag(0), Var_191, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_7));
              MR_hl_field(MR_mktag(0), Var_191, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_191, 3) = ((MR_Box) (Context_14));
              MR_hl_field(MR_mktag(0), Var_191, 4) = ((MR_Box) (ContextPieces_24));
            }
            mercury__list__foldl_4_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_1[1], Var_191, STATE_VARIABLE_ErrorSeveritiesPieces_131_190, ((MR_Box) (STATE_VARIABLE_Specs_95_95)), &conv14_STATE_VARIABLE_Specs_133_133);
            STATE_VARIABLE_Specs_133_133 = ((MR_Word) conv14_STATE_VARIABLE_Specs_133_133);
            *STATE_VARIABLE_TypeCtorForeignEnumMap_68 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_67;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_31, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_131_208;
                MR_Word Var_209;
                MR_Box conv18_STATE_VARIABLE_Specs_133_133;

                hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_22, TypeArity_23, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[7]), STATE_VARIABLE_ErrorSeveritiesPieces_105_105, &STATE_VARIABLE_ErrorSeveritiesPieces_131_208);
                {
                  Var_209 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_209, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), Var_209, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_9));
                  MR_hl_field(MR_mktag(0), Var_209, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_209, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Var_209, 4) = ((MR_Box) (ContextPieces_24));
                }
                mercury__list__foldl_4_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_1[1], Var_209, STATE_VARIABLE_ErrorSeveritiesPieces_131_208, ((MR_Box) (STATE_VARIABLE_Specs_95_95)), &conv18_STATE_VARIABLE_Specs_133_133);
                STATE_VARIABLE_Specs_133_133 = ((MR_Word) conv18_STATE_VARIABLE_Specs_133_133);
                *STATE_VARIABLE_TypeCtorForeignEnumMap_68 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_67;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_131_131;
                MR_Word Var_132;
                MR_Box conv1_STATE_VARIABLE_Specs_133_133;

                hlds__add_foreign_enum__report_not_enum_type_5_p_0(TypeSymName_22, TypeArity_23, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[4]), STATE_VARIABLE_ErrorSeveritiesPieces_105_105, &STATE_VARIABLE_ErrorSeveritiesPieces_131_131);
                {
                  Var_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_8[0]));
                  MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (Context_14));
                  MR_hl_field(MR_mktag(0), Var_132, 4) = ((MR_Box) (ContextPieces_24));
                }
                mercury__list__foldl_4_p_0((MR_Word) &hlds__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_1[1], Var_132, STATE_VARIABLE_ErrorSeveritiesPieces_131_131, ((MR_Box) (STATE_VARIABLE_Specs_95_95)), &conv1_STATE_VARIABLE_Specs_133_133);
                STATE_VARIABLE_Specs_133_133 = ((MR_Word) conv1_STATE_VARIABLE_Specs_133_133);
                *STATE_VARIABLE_TypeCtorForeignEnumMap_68 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_67;
              }
              break;
          }
          break;
      }
    }
    else
    {
      STATE_VARIABLE_Specs_133_133 = STATE_VARIABLE_Specs_89_89;
      *STATE_VARIABLE_TypeCtorForeignEnumMap_68 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_67;
    }
    *Specs_11 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, STATE_VARIABLE_Specs_133_133, Specs1_17);
  }
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__add_foreign_enum__wrap_unqual_cons_id_and_maybe_arity_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_5_p_0(
  MR_Word TypeSymName_6,
  MR_Integer TypeArity_7,
  MR_Word NotEnumInfo_8,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_19,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_20)
{
  {
    MR_Word TypeSNA_10;

    {
      TypeSNA_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeSNA_10, 0) = ((MR_Box) (TypeSymName_6));
      MR_hl_field(MR_mktag(0), TypeSNA_10, 1) = ((MR_Box) (TypeArity_7));
    }
    if (((MR_tag((MR_Word) NotEnumInfo_8)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word TypeCtorInfo_78_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
      MR_Word NonEnumConsIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotEnumInfo_8, (MR_Integer) 0)));
      MR_Word SortedNonEnumConsIds_14;

      mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_78_78, NonEnumConsIds_13, &SortedNonEnumConsIds_14);
      if ((SortedNonEnumConsIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_ErrorSeveritiesPieces_20 = STATE_VARIABLE_ErrorSeveritiesPieces_0_19;
      else
      {
        MR_Word TypeCtorInfo_79_79 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        MR_Word ConsIdPieces_17;
        MR_Word ItHasThese_18;
        MR_Word Var_22;
        MR_Word Var_28;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_36;
        MR_Word Var_38;
        MR_Word Var_43;
        MR_Tuple Var_52;
        MR_Word ErrorPieces_75;
        MR_Box conv1_ItHasThese_18;

        Var_22 = mercury__list__map_2_f_0(TypeCtorInfo_78_78, TypeCtorInfo_79_79, (MR_Word) &hlds__add_foreign_enum_scalar_common_3[8], SortedNonEnumConsIds_14);
        ConsIdPieces_17 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_22);
        conv1_ItHasThese_18 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_78_78, TypeCtorInfo_79_79, SortedNonEnumConsIds_14, ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[68]))), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[69]))));
        ItHasThese_18 = ((MR_Word) conv1_ItHasThese_18);
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (TypeSNA_10));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (ItHasThese_18));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[55])));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[70])));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[67])));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
        }
        Var_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_79_79, ConsIdPieces_17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[25]));
        ErrorPieces_75 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_79_79, Var_28, Var_43);
        {
          Var_52 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ErrorPieces_75));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrorSeveritiesPieces_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_0_19));
        }
      }
    }
    else
    {
      MR_String TypeKind_11 = ((MR_String) (MR_hl_field(MR_mktag(1), NotEnumInfo_8, (MR_Integer) 0)));
      MR_Word ErrorPieces_12;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Tuple Var_73;

      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (TypeSNA_10));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (TypeKind_11));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[26])));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[72])));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[71])));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
      }
      {
        ErrorPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ErrorPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[67])));
        MR_hl_field(MR_mktag(1), ErrorPieces_12, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_73 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ErrorPieces_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrorSeveritiesPieces_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_0_19));
      }
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__report_if_builtin_type_4_p_0(
  MR_Word TypeSymame_5,
  MR_Integer TypeArity_6,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_9,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_10)
{
  {
    MR_bool succeeded = (TypeArity_6 == (MR_Integer) 0);

    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(TypeSymame_5);
    if (succeeded)
    {
      MR_Word BuiltinErrorPieces_8;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Tuple Var_23;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (TypeSymame_5));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (TypeArity_6));
      }
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (Var_15));
      }
      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[48])));
      }
      {
        BuiltinErrorPieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), BuiltinErrorPieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[67])));
        MR_hl_field(MR_mktag(1), BuiltinErrorPieces_8, 1) = ((MR_Box) (Var_13));
      }
      {
        Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (BuiltinErrorPieces_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrorSeveritiesPieces_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_0_9));
      }
    }
    else
      *STATE_VARIABLE_ErrorSeveritiesPieces_10 = STATE_VARIABLE_ErrorSeveritiesPieces_0_9;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__maybe_add_duplicate_foreign_enum_error_8_p_0(
  MR_Word TypeSymame_9,
  MR_Integer TypeArity_10,
  MR_Word Lang_11,
  MR_Word PragmaStatus_12,
  MR_Word OldContext_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_bool succeeded;
    MR_Word Var_25 = (MR_Word) PragmaStatus_12;

    succeeded = (Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    else
    {
      MR_Word TypeSymNameArity_16;
      MR_String LangStr_17;
      MR_Word CurPieces_18;
      MR_Word OldPieces_19;
      MR_Word CurMsg_20;
      MR_Word OldMsg_21;
      MR_Word Spec_22;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_70;
      MR_Word Var_71;

      {
        TypeSymNameArity_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeSymNameArity_16, 0) = ((MR_Box) (TypeSymame_9));
        MR_hl_field(MR_mktag(0), TypeSymNameArity_16, 1) = ((MR_Box) (TypeArity_10));
      }
      LangStr_17 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(Lang_11);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (TypeSymNameArity_16));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (LangStr_17));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[26])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[64])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[63])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        CurPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CurPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[62])));
        MR_hl_field(MR_mktag(1), CurPieces_18, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[46])));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[66])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        OldPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), OldPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[65])));
        MR_hl_field(MR_mktag(1), OldPieces_19, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (CurPieces_18));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        CurMsg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CurMsg_20, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), CurMsg_20, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (OldPieces_19));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        OldMsg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldMsg_21, 0) = ((MR_Box) (OldContext_13));
        MR_hl_field(MR_mktag(0), OldMsg_21, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (OldMsg_21));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (CurMsg_20));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_71));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_70));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
      }
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
  MR_Word Context_6,
  MR_Word TypeSymame_7,
  MR_Integer TypeArity_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word ErrorPieces_10;
    MR_Word Msg_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_37;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (TypeSymame_7));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (TypeArity_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[44])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[61])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      ErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[59])));
      MR_hl_field(MR_mktag(1), ErrorPieces_10, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (ErrorPieces_10));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors0_8,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word TypeCtorInfo_102_102 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word TypeCtorInfo_104_104;
    MR_Word Ctors_10;
    MR_Word CtorsStart_11;
    MR_Word CtorsEnd_12;
    MR_String DoOrDoes_13;
    MR_Word PrefixPieces_14;
    MR_Word CtorsComponent_16;
    MR_Word Msg_22;
    MR_Word Spec_23;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_99;
    MR_Box conv0_DoOrDoes_13;

    mercury__list__sort_2_p_0(TypeCtorInfo_102_102, Ctors0_8, &Ctors_10);
    mercury__list__split_upto_4_p_0(TypeCtorInfo_102_102, (MR_Integer) 10, Ctors_10, &CtorsStart_11, &CtorsEnd_12);
    conv0_DoOrDoes_13 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_102_102, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Ctors_10, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
    DoOrDoes_13 = ((MR_String) conv0_DoOrDoes_13);
    TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (DoOrDoes_13));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[53])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    PrefixPieces_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, ContextPieces_7, Var_29);
    if ((CtorsEnd_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word CtorsPieces_15;
      MR_Word Var_83;
      MR_Word Var_84;

      Var_84 = hlds__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(Ctors_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[51]));
      Var_83 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_84, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[57]));
      CtorsPieces_15 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[55]), Var_83);
      {
        CtorsComponent_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CtorsComponent_16, 0) = ((MR_Box) (CtorsPieces_15));
      }
    }
    else
    {
      MR_Integer NumEndCtors_19;
      MR_Word NonVerboseCtorsPieces_20;
      MR_Word VerboseCtorsPieces_21;
      MR_Word Var_38;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_69;
      MR_Word Var_70;

      mercury__list__length_2_p_0(TypeCtorInfo_102_102, CtorsEnd_12, &NumEndCtors_19);
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[55]);
      Var_43 = hlds__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(CtorsStart_11, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[29]));
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (NumEndCtors_19));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[31])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[56])));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
      }
      Var_42 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_43, Var_51);
      NonVerboseCtorsPieces_20 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_38, Var_42);
      Var_70 = hlds__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(Ctors_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[51]));
      Var_69 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_70, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[57]));
      VerboseCtorsPieces_21 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_38, Var_69);
      {
        CtorsComponent_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CtorsComponent_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), CtorsComponent_16, 1) = ((MR_Box) (VerboseCtorsPieces_21));
        MR_hl_field(MR_mktag(3), CtorsComponent_16, 2) = ((MR_Box) (NonVerboseCtorsPieces_20));
      }
    }
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (PrefixPieces_14));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (CtorsComponent_16));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Msg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_22, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_22, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Msg_22));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_99));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
  }
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(
  MR_Word Ctors_4,
  MR_Word Final_5)
{
  {
    MR_Word Pieces_6;
    MR_Word Components_7;

    Components_7 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_3[7], Ctors_4);
    Pieces_6 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Components_7, Final_5);
    return Pieces_6;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_EnumSymNames_0_2,
  MR_Word * STATE_VARIABLE_EnumSymNames_3,
  MR_Word STATE_VARIABLE_NonEnumConsIds_0_4,
  MR_Word * STATE_VARIABLE_NonEnumConsIds_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_NonEnumConsIds_5 = STATE_VARIABLE_NonEnumConsIds_0_4;
      *STATE_VARIABLE_EnumSymNames_3 = STATE_VARIABLE_EnumSymNames_0_2;
    }
    else
    {
      MR_Word ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ConsIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_EnumSymNames_23_23;
      MR_Word STATE_VARIABLE_NonEnumConsIds_24_24;
      MR_Word ConsSymName_16;
      MR_Integer Var_22;
      MR_Word Var_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_EnumSymNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_NonEnumConsIds_0_4;

      succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        ConsSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 1)));
        Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 2)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 3)));
        succeeded = (Var_22 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        {
          STATE_VARIABLE_EnumSymNames_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_EnumSymNames_23_23, 0) = ((MR_Box) (ConsSymName_16));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_EnumSymNames_23_23, 1) = ((MR_Box) (STATE_VARIABLE_EnumSymNames_0_2));
        }
        STATE_VARIABLE_NonEnumConsIds_24_24 = STATE_VARIABLE_NonEnumConsIds_0_4;
      }
      else
      {
        {
          STATE_VARIABLE_NonEnumConsIds_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonEnumConsIds_24_24, 0) = ((MR_Box) (ConsId_12));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonEnumConsIds_24_24, 1) = ((MR_Box) (STATE_VARIABLE_NonEnumConsIds_0_4));
        }
        STATE_VARIABLE_EnumSymNames_23_23 = STATE_VARIABLE_EnumSymNames_0_2;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ConsIds_13;
      next_value_of_STATE_VARIABLE_EnumSymNames_0_2 = STATE_VARIABLE_EnumSymNames_23_23;
      next_value_of_STATE_VARIABLE_NonEnumConsIds_0_4 = STATE_VARIABLE_NonEnumConsIds_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_EnumSymNames_0_2 = next_value_of_STATE_VARIABLE_EnumSymNames_0_2;
      STATE_VARIABLE_NonEnumConsIds_0_4 = next_value_of_STATE_VARIABLE_NonEnumConsIds_0_4;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&hlds__add_foreign_enum_vector_common_7[0 + HeadVar__1_1]))->hlds__add_foreign_enum__vector_common_type_7_0__vct_7_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__build_foreign_enum_tag_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_NamesAndTags_20;
    MR_Word conv1_STATE_VARIABLE_BadQualCtors_22;
    MR_Word conv0_STATE_VARIABLE_UnknownCtors_24;

    hlds__add_foreign_enum__fixup_foreign_tag_val_qualification_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_STATE_VARIABLE_NamesAndTags_20, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_BadQualCtors_22, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_UnknownCtors_24);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_NamesAndTags_20));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_BadQualCtors_22));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UnknownCtors_24));
  }
}

static void MR_CALL 
hlds__add_foreign_enum__build_foreign_enum_tag_map_8_p_0(
  MR_Word Context_9,
  MR_Word ContextPieces_10,
  MR_Word TypeSymName_11,
  MR_Word CtorNameSet_12,
  MR_Word ForeignTagValues0_13,
  MR_Word * MaybeForeignTagMap_14,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_44_44;
    MR_Word TypeInfo_45_45;
    MR_Word TypeModuleName_16;
    MR_Word ForeignTagValues_19;
    MR_Word BadQualCtors_20;
    MR_Word UnknownCtors_21;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Specs_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Box conv4_BadQualCtors_20;
    MR_Box conv3_UnknownCtors_21;
    MR_Word ForeignTagBiMap_26;

    if (((MR_tag((MR_Word) TypeSymName_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Var_17;

      TypeModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeSymName_11, (MR_Integer) 0)));
      Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeSymName_11, (MR_Integer) 1)));
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.build_foreign_enum_tag_map\'/8", (MR_String) "unqualified type name while processing foreign enum tags");
        return;
      }
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (hlds__add_foreign_enum__build_foreign_enum_tag_map_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (CtorNameSet_12));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (TypeModuleName_16));
    }
    TypeInfo_44_44 = (MR_Word) &hlds__add_foreign_enum_scalar_common_3[1];
    TypeInfo_45_45 = (MR_Word) &hlds__add_foreign_enum_scalar_common_1[4];
    mercury__list__map_foldl2_7_p_0(TypeInfo_44_44, TypeInfo_44_44, TypeInfo_45_45, TypeInfo_45_45, Var_32, ForeignTagValues0_13, &ForeignTagValues_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv4_BadQualCtors_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_UnknownCtors_21);
    BadQualCtors_20 = ((MR_Word) conv4_BadQualCtors_20);
    UnknownCtors_21 = ((MR_Word) conv3_UnknownCtors_21);
    if ((UnknownCtors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_35_35 = STATE_VARIABLE_Specs_0_28;
    else
      hlds__add_foreign_enum__add_unknown_ctors_error_5_p_0(Context_9, ContextPieces_10, UnknownCtors_21, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_35_35);
    if ((BadQualCtors_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_35_35;
    else
      hlds__add_foreign_enum__add_bad_qual_ctors_error_5_p_0(Context_9, ContextPieces_10, BadQualCtors_20, STATE_VARIABLE_Specs_35_35, &STATE_VARIABLE_Specs_36_36);
    succeeded = mercury__bimap__from_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ForeignTagValues_19, &ForeignTagBiMap_26);
    if (succeeded)
    {
      MR_Word ForeignTagMap_27;

      ForeignTagMap_27 = mercury__bimap__forward_map_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ForeignTagBiMap_26);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeForeignTagMap_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignTagMap_27));
      }
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_36_36;
    }
    else
    {
      MR_Word Msg_56;
      MR_Word Spec_57;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_75;

      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ContextPieces_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[42]));
      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_56, 0) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), Msg_56, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Msg_56));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_57, 2) = ((MR_Box) (Var_75));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_29 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_57));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_36_36));
      }
      *MaybeForeignTagMap_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__add_bad_qual_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__add_foreign_enum__qual_ctor_to_format_component_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_bad_qual_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word TypeCtorInfo_52_52;
    MR_String HasOrHave_10;
    MR_Word ErrorPieces_11;
    MR_Word Msg_12;
    MR_Word Spec_13;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_47;
    MR_Word Components_56;
    MR_Box conv0_HasOrHave_10;

    conv0_HasOrHave_10 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Ctors_8, ((MR_Box) ((MR_String) "symbol has")), ((MR_Box) ((MR_String) "symbols have")));
    HasOrHave_10 = ((MR_String) conv0_HasOrHave_10);
    TypeCtorInfo_52_52 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (HasOrHave_10));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[37])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[3])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    Components_56 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_3[6], Ctors_8);
    Var_36 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Components_56, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[51]));
    ErrorPieces_11 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_52_52, Var_18, Var_36);
    Var_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_52_52, ContextPieces_7, ErrorPieces_11);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
    }
  }
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__add_unknown_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_unknown_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word TypeCtorInfo_49_49;
    MR_String IsOrAre_10;
    MR_Word ErrorPieces_11;
    MR_Word Msg_12;
    MR_Word Spec_13;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_33;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_44;
    MR_Word Components_53;
    MR_Box conv0_IsOrAre_10;

    conv0_IsOrAre_10 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Ctors_8, ((MR_Box) ((MR_String) "symbol is not a constructor")), ((MR_Box) ((MR_String) "symbols are not constructors")));
    IsOrAre_10 = ((MR_String) conv0_IsOrAre_10);
    TypeCtorInfo_49_49 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (IsOrAre_10));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[33])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[2])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    Components_53 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__add_foreign_enum_scalar_common_3[5], Ctors_8);
    Var_33 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Components_53, (MR_Word) MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[51]));
    ErrorPieces_11 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_49, Var_18, Var_33);
    Var_40 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_49, ContextPieces_7, ErrorPieces_11);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_40));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
    }
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____cons_id_to_tag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__add_foreign_enum____Unify____cons_id_to_tag_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____cons_id_to_tag_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__add_foreign_enum____Compare____cons_id_to_tag_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____not_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__add_foreign_enum____Unify____not_enum_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____not_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__add_foreign_enum____Compare____not_enum_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__add_foreign_enum__init(void)
{
}

void mercury__hlds__add_foreign_enum__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_cons_id_to_tag_map_0);
	MR_register_type_ctor_info(&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_not_enum_info_0);
	MR_register_type_ctor_info(&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0);
	MR_register_type_ctor_info(&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_to_foreign_enums_map_0);
}

void mercury__hlds__add_foreign_enum__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__add_foreign_enum__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.add_foreign_enum.
