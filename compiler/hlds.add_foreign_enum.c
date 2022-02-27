/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version 22.01-beta-2022-02-27
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
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
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_foreign_enum.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

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
hlds__add_foreign_enum__IntroducedFrom__func__report_not_enum_type__621__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__405__1_1_f_0(
  MR_String LambdaHeadVar__1_54);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_export_enum__323__1_2_p_0(
  MR_Word MaybeSuperType_31,
  MR_Word HeadVar__2_73);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__186__1_2_p_0(
  MR_Word MaybeRepn_42,
  MR_Word HeadVar__2_111);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__184__1_2_p_0(
  MR_Word MaybeSuperType_40,
  MR_Word HeadVar__2_107);

static void MR_CALL 
hlds__add_foreign_enum____Compare____not_enum_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____not_enum_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0(
  MR_Word _Lang_10,
  MR_String Prefix_11,
  MR_Word MakeUpperCase_12,
  MR_Word OverrideMap_13,
  MR_Word CtorRepn_14,
  MR_Word STATE_VARIABLE_NameMap_0_23,
  MR_Word * STATE_VARIABLE_NameMap_24,
  MR_Word STATE_VARIABLE_BadForeignNames_0_25,
  MR_Word * STATE_VARIABLE_BadForeignNames_26);

static MR_bool MR_CALL 
hlds__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_49_93_95_48_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_49_93_95_48_9_p_0(
  MR_String Prefix_11,
  MR_Word MakeUpperCase_12,
  MR_Word OverrideMap_13,
  MR_Word CtorRepn_14,
  MR_Word STATE_VARIABLE_NameMap_0_23,
  MR_Word * STATE_VARIABLE_NameMap_24,
  MR_Word STATE_VARIABLE_BadForeignNames_0_25,
  MR_Word * STATE_VARIABLE_BadForeignNames_26);

static void MR_CALL 
hlds__add_foreign_enum__map_cons_id_to_foreign_tag_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeModuleName_7,
  MR_Word ForeignLanguage_8,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_1(
  MR_Box closure_arg);

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
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__add_foreign_enum__report_not_du_type_7_p_0(
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word TypeSymName_10,
  MR_Integer TypeArity_11,
  MR_Word TypeBody_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
hlds__add_foreign_enum__report_if_builtin_type_6_p_0(
  MR_Word Context_7,
  MR_Word ContextPieces_8,
  MR_Word TypeSymame_9,
  MR_Integer TypeArity_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

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
hlds__add_foreign_enum__build_mercury_foreign_map_11_p_0(
  MR_Word TypeModuleName_12,
  MR_Word TypeSymName_13,
  MR_Integer TypeArity_14,
  MR_Word ForWhat_15,
  MR_Word Context_16,
  MR_Word ContextPieces_17,
  MR_Word Ctors_18,
  MR_Word Overrides_19,
  MR_Word * OverrideMap_20,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static MR_Box MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_7_p_0(
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word TypeSymName_10,
  MR_Integer TypeArity_11,
  MR_Word NotEnumInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
hlds__add_foreign_enum__find_nonenum_ctors_build_valid_ctor_names_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ValidNamesSet_0_2,
  MR_Word * STATE_VARIABLE_ValidNamesSet_3,
  MR_Word STATE_VARIABLE_NonEnumSNAs_0_4,
  MR_Word * STATE_VARIABLE_NonEnumSNAs_5);

static MR_Word MR_CALL 
hlds__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
  MR_Word HeadVar__1_1);

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


static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[41][2];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[9][3];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_3[2][4];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_6[1][12];




static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[41][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_3[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for type"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not defined in this module."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: some of the constructors of the type"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be converted into valid identifiers for"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The problematic"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate foreign_enum pragma"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and target language"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The first foreign_enum pragma"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a builtin type."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It has this non-zero arity constructor:"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It has these non-zero arity constructors:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not an enumeration type."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not an enumeration type;"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it is"))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[0])),
    ((MR_Box) (hlds__add_foreign_enum__report_not_enum_type_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[3])),
    ((MR_Box) (hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_2[4])),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&hlds__add_foreign_enum__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_6[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_cons_id_to_tag_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__add_foreign_enum____Unify____cons_id_to_tag_map_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____cons_id_to_tag_map_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "cons_id_to_tag_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
  }
};

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
};

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_0 = {
  (MR_String) "not_enum_du",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_1 = {
  (MR_String) "not_enum_non_du",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_0[1] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_0
};

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_1[1] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_1
};

static const MR_DuPtagLayout hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_not_enum_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__add_foreign_enum____Unify____not_enum_info_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____not_enum_info_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "not_enum_info",
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_not_enum_info_0 },
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_not_enum_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_not_enum_info_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2libs__globals__type_ctor_info_foreign_language_0term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__add_foreign_enum____vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0),
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__maybe__ti_maybe_1__vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__add_foreign_enum____vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_type_ctor_foreign_enums_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__tree234__ti_tree234_2libs__globals__type_ctor_info_foreign_language_0term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__maybe__ti_maybe_1__vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0)
};

static const MR_ConstString hlds__add_foreign_enum__hlds__add_foreign_enum__field_names_type_ctor_foreign_enums_0_0[2] = {
  (MR_String) "tcfe_lang_contexts",
  (MR_String) "tcfe_tag_values"
};

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_type_ctor_foreign_enums_0_0 = {
  (MR_String) "type_ctor_foreign_enums",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_type_ctor_foreign_enums_0_0,
  hlds__add_foreign_enum__hlds__add_foreign_enum__field_names_type_ctor_foreign_enums_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_type_ctor_foreign_enums_0_0[1] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_type_ctor_foreign_enums_0_0
};

static const MR_DuPtagLayout hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_type_ctor_foreign_enums_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_type_ctor_foreign_enums_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "type_ctor_foreign_enums",
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_type_ctor_foreign_enums_0 },
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_type_ctor_foreign_enums_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_type_ctor_foreign_enums_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_to_foreign_enums_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "type_ctor_to_foreign_enums_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__report_not_enum_type__621__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  {
    MR_Word LambdaHeadVar__2_31;

    {
      LambdaHeadVar__2_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_31, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_31, 1) = ((MR_Box) (LambdaHeadVar__1_30));
    }
    return LambdaHeadVar__2_31;
  }
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__405__1_1_f_0(
  MR_String LambdaHeadVar__1_54)
{
  {
    MR_Word LambdaHeadVar__2_55;
    MR_Word Var_56;

    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (LambdaHeadVar__1_54));
    }
    {
      LambdaHeadVar__2_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return LambdaHeadVar__2_55;
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_export_enum__323__1_2_p_0(
  MR_Word MaybeSuperType_31,
  MR_Word HeadVar__2_73)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_31, HeadVar__2_73);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__186__1_2_p_0(
  MR_Word MaybeRepn_42,
  MR_Word HeadVar__2_111)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[0]), ((MR_Box) (MaybeRepn_42)), ((MR_Box) (HeadVar__2_111)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__184__1_2_p_0(
  MR_Word MaybeSuperType_40,
  MR_Word HeadVar__2_107)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_40, HeadVar__2_107);
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[4]);
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
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_String Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0(
  MR_Word _Lang_10,
  MR_String Prefix_11,
  MR_Word MakeUpperCase_12,
  MR_Word OverrideMap_13,
  MR_Word CtorRepn_14,
  MR_Word STATE_VARIABLE_NameMap_0_23,
  MR_Word * STATE_VARIABLE_NameMap_24,
  MR_Word STATE_VARIABLE_BadForeignNames_0_25,
  MR_Word * STATE_VARIABLE_BadForeignNames_26)
{
  hlds__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_49_93_95_48_9_p_0(Prefix_11, MakeUpperCase_12, OverrideMap_13, CtorRepn_14, STATE_VARIABLE_NameMap_0_23, STATE_VARIABLE_NameMap_24, STATE_VARIABLE_BadForeignNames_0_25, STATE_VARIABLE_BadForeignNames_26);
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_49_93_95_48_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_49_93_95_48_9_p_0(
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
    MR_Word CtorSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 2))));
    MR_String CtorName_18;
    MR_String ForeignNameTail_20;
    MR_String ForeignName_21;
    MR_Word IsValidForeignName_22;
    MR_Word Var_27;
    MR_String UserForeignName_19;
    MR_Box conv0_UserForeignName_19;

    CtorName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_17);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OverrideMap_13, ((MR_Box) (CtorName_18)), &conv0_UserForeignName_19);
    if (succeeded)
    {
      UserForeignName_19 = ((MR_String) (conv0_UserForeignName_19));
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
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (hlds__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_49_93_95_48_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (ForeignName_21));
    }
    IsValidForeignName_22 = mercury__bool__pred_to_bool_1_f_0(Var_27);
    switch (IsValidForeignName_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_BadForeignNames_26 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_BadForeignNames_0_25, ((MR_Box) (ForeignName_21)));
          *STATE_VARIABLE_NameMap_24 = STATE_VARIABLE_NameMap_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CtorName_18)), ((MR_Box) (ForeignName_21)), STATE_VARIABLE_NameMap_0_23, STATE_VARIABLE_NameMap_24);
          *STATE_VARIABLE_BadForeignNames_26 = STATE_VARIABLE_BadForeignNames_0_25;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__map_cons_id_to_foreign_tag_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeModuleName_7,
  MR_Word ForeignLanguage_8,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_String CtorName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_String ForeignTagName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word ConsId_11;
    MR_Word ForeignTag_12;
    MR_Word CtorSymName_13;

    {
      CtorSymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CtorSymName_13, 0) = ((MR_Box) (TypeModuleName_7));
      MR_hl_field(MR_mktag(1), CtorSymName_13, 1) = ((MR_Box) (CtorName_9));
    }
    {
      ConsId_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_11, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_11, 1) = ((MR_Box) (CtorSymName_13));
      MR_hl_field(MR_mktag(3), ConsId_11, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsId_11, 3) = ((MR_Box) (TypeCtor_6));
    }
    {
      ForeignTag_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ForeignTag_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), ForeignTag_12, 1) = (MR_Box) ((MR_Unsigned) (ForeignLanguage_8));
      MR_hl_field(MR_mktag(3), ForeignTag_12, 2) = ((MR_Box) (ForeignTagName_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ForeignTag_12));
    }
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_export_enum__323__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0(
  MR_Word ItemForeignExportEnum_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * STATE_VARIABLE_ModuleInfo_49,
  MR_Word Specs0_8,
  MR_Word * Specs_9)
{
  {
    MR_bool succeeded;
    MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 1))));
    MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 2))));
    MR_Word Overrides_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 3))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 4))));
    MR_Word TypeSymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0))));
    MR_Integer TypeArity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 1))));
    MR_Word ContextPieces_18;
    MR_Word TypeTable_19;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_Specs_67_67;
    MR_Word STATE_VARIABLE_Specs_81_81;
    MR_Word TypeDefn_20;

    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (TypeCtor_11));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[10])));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[7])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
    }
    {
      ContextPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContextPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[5])));
      MR_hl_field(MR_mktag(1), ContextPieces_18, 1) = ((MR_Box) (Var_52));
    }
    hlds__add_foreign_enum__report_if_builtin_type_6_p_0(Context_14, ContextPieces_18, TypeSymName_16, TypeArity_17, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_67_67);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_48, &TypeTable_19);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_19, TypeCtor_11, &TypeDefn_20);
    if (succeeded)
    {
      MR_Word TypeModuleName_21;
      MR_Word TypeBody_24;

      if (((MR_tag((MR_Word) TypeSymName_16)) == (MR_Integer) 1))
        TypeModuleName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeSymName_16, (MR_Integer) 0))));
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "unqualified type name for foreign_export_enum");
          return;
        }
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_20, &TypeBody_24);
      switch (MR_tag((MR_Word) TypeBody_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeBodyDu_29 = (MR_Word) ((MR_Word) (TypeBody_24));
            MR_Word Ctors_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_29, (MR_Integer) 0))));
            MR_Word MaybeSuperType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_29, (MR_Integer) 1))));
            MR_Word MaybeRepn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_29, (MR_Integer) 3))));
            MR_Word CtorRepns_36;
            MR_Word OverrideBimap_37;
            MR_Word OverrideMap_38;
            MR_Word MaybePrefix_39;
            MR_Word MakeUpperCase_40;
            MR_String Prefix_41;
            MR_Word NameMap_42;
            MR_Word Var_70;
            MR_Word Var_77;
            MR_Word STATE_VARIABLE_Specs_78_78;

            {
              Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (MaybeSuperType_31));
              MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_70, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "MaybeSuperType != no");
            if ((MaybeRepn_33 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "MaybeRepn = no");
                return;
              }
            else
            {
              MR_Word Repn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_33, (MR_Integer) 0))));

              CtorRepns_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_35, (MR_Integer) 0))));
            }
            Var_77 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_30);
            hlds__add_foreign_enum__build_mercury_foreign_map_11_p_0(TypeModuleName_21, TypeSymName_16, TypeArity_17, (MR_Integer) 1, Context_14, ContextPieces_18, Var_77, Overrides_13, &OverrideBimap_37, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_78_78);
            OverrideMap_38 = mercury__bimap__forward_map_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OverrideBimap_37);
            MaybePrefix_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_12, (MR_Integer) 0))));
            MakeUpperCase_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_12, (MR_Integer) 1))) & (MR_Integer) 1);
            if ((MaybePrefix_39 == (MR_Word) ((MR_Unsigned) 0U)))
              Prefix_41 = (MR_String) "";
            else
              Prefix_41 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePrefix_39, (MR_Integer) 0))));
            hlds__add_foreign_enum__build_export_enum_name_map_10_p_0(ContextPieces_18, Context_14, Lang_10, Prefix_41, MakeUpperCase_40, OverrideMap_38, CtorRepns_36, &NameMap_42, STATE_VARIABLE_Specs_78_78, &STATE_VARIABLE_Specs_81_81);
            if ((STATE_VARIABLE_Specs_81_81 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ExportedEnum_43;
              MR_Word ExportedEnums0_44;
              MR_Word ExportedEnums_45;

              {
                ExportedEnum_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 0) = ((MR_Box) (TypeCtor_11));
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 1) = ((MR_Box) (CtorRepns_36));
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 2) = (MR_Box) ((MR_Unsigned) (Lang_10));
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 3) = ((MR_Box) (NameMap_42));
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 4) = ((MR_Box) (Context_14));
              }
              hlds__hlds_module__module_info_get_exported_enums_2_p_0(STATE_VARIABLE_ModuleInfo_0_48, &ExportedEnums0_44);
              {
                ExportedEnums_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ExportedEnums_45, 0) = ((MR_Box) (ExportedEnum_43));
                MR_hl_field(MR_mktag(1), ExportedEnums_45, 1) = ((MR_Box) (ExportedEnums0_44));
              }
              hlds__hlds_module__module_info_set_exported_enums_3_p_0(ExportedEnums_45, STATE_VARIABLE_ModuleInfo_0_48, STATE_VARIABLE_ModuleInfo_49);
            }
            else
              *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
          }
          break;
        case (MR_Integer) 1:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_14, ContextPieces_18, TypeSymName_16, TypeArity_17, TypeBody_24, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_81_81);
            *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
          }
          break;
        case (MR_Integer) 2:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_14, ContextPieces_18, TypeSymName_16, TypeArity_17, TypeBody_24, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_81_81);
            *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
          }
          break;
        case (MR_Integer) 3:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_14, ContextPieces_18, TypeSymName_16, TypeArity_17, TypeBody_24, STATE_VARIABLE_Specs_67_67, &STATE_VARIABLE_Specs_81_81);
            *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
          }
          break;
      }
    }
    else
    {
      STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_67_67;
      *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
    }
    *Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_81_81, Specs0_8);
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

    conv4_LambdaHeadVar__2_55 = hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__405__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

    hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NameMap_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_BadForeignNames_26);
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
    MR_Word BadForeignNamesCord_20;
    MR_Word BadForeignNames_21;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Box conv3_NameMap_18;
    MR_Box conv2_BadForeignNamesCord_20;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Lang_13));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (Prefix_14));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) (MakeUpperCase_15));
      MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (OverrideMap_16));
    }
    Var_36 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    Var_37 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[3]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[1]), Var_35, CtorRepns_17, ((MR_Box) (Var_36)), &conv3_NameMap_18, ((MR_Box) (Var_37)), &conv2_BadForeignNamesCord_20);
    *NameMap_18 = ((MR_Word) (conv3_NameMap_18));
    BadForeignNamesCord_20 = ((MR_Word) (conv2_BadForeignNamesCord_20));
    BadForeignNames_21 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BadForeignNamesCord_20);
    if ((BadForeignNames_21 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    else
    {
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
      MR_Word Var_83;
      MR_Box conv5_Var_67;

      switch (Lang_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          LangName_24 = (MR_String) "C";
          break;
        case (MR_Integer) 1:
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.build_export_enum_name_map\'/10", (MR_String) "foreign_export_enum pragma for unsupported language");
            return;
          }
          break;
        case (MR_Integer) 2:
          LangName_24 = (MR_String) "Java";
          break;
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (LangName_24));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[18])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[16])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[15])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      AlwaysPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_40);
      BadForeignPiecesList_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[2]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[8]), BadForeignNames_21);
      BadForeignPieces_29 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(BadForeignPiecesList_28, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[19])));
      conv5_Var_67 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BadForeignNames_21, ((MR_Box) ((MR_String) "foreign name is:")), ((MR_Box) ((MR_String) "foreign names are:")));
      Var_67 = ((MR_String) (conv5_Var_67));
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[22])));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[20])));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
      }
      VerbosePieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_62, BadForeignPieces_29);
      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (AlwaysPieces_25));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_77, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(2), Var_77, 1) = ((MR_Box) (VerbosePieces_30));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_76));
      }
      {
        Msg_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Msg_31, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(2), Msg_31, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Msg_31));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.build_export_enum_name_map\'/10"));
        MR_hl_field(MR_mktag(0), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_32, 3) = ((MR_Box) (Var_83));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_34 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
      }
    }
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
    MR_Word conv0_HeadVar__5_5;

    hlds__add_foreign_enum__map_cons_id_to_foreign_tag_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__186__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__184__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Tuple ImsItem_8,
  MR_Word STATE_VARIABLE_TypeCtorForeignEnumMap_0_61,
  MR_Word * STATE_VARIABLE_TypeCtorForeignEnumMap_62,
  MR_Word Specs0_10,
  MR_Word * Specs_11)
{
  {
    MR_bool succeeded;
    MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsItem_8, (MR_Integer) 0))));
    MR_Word ItemForeignEnum_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsItem_8, (MR_Integer) 1))));
    MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_13, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_13, (MR_Integer) 1))));
    MR_Word OoMMercuryForeignTagPairs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_13, (MR_Integer) 2))));
    MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_13, (MR_Integer) 3))));
    MR_Word PragmaStatus_19;
    MR_Word TypeSymName_20;
    MR_Integer TypeArity_21;
    MR_Word TypeSNA_22;
    MR_Word ContextPieces_23;
    MR_Word TypeTable_24;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word STATE_VARIABLE_Specs_80_80;
    MR_Word STATE_VARIABLE_Specs_120_120;
    MR_Word TypeDefn_25;

    hlds__status__item_mercury_status_to_type_status_2_p_0(ItemMercuryStatus_12, &PragmaStatus_19);
    TypeSymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0))));
    TypeArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1))));
    {
      TypeSNA_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeSNA_22, 0) = ((MR_Box) (TypeSymName_20));
      MR_hl_field(MR_mktag(0), TypeSNA_22, 1) = ((MR_Box) (TypeArity_21));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (TypeCtor_15));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[10])));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[7])));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[6])));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
    }
    {
      ContextPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContextPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[5])));
      MR_hl_field(MR_mktag(1), ContextPieces_23, 1) = ((MR_Box) (Var_65));
    }
    hlds__add_foreign_enum__report_if_builtin_type_6_p_0(Context_17, ContextPieces_23, TypeSymName_20, TypeArity_21, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_80_80);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_24);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_24, TypeCtor_15, &TypeDefn_25);
    if (succeeded)
    {
      MR_Word TypeModuleName_26;
      MR_Word TypeStatus_29;
      MR_Word IsTypeLocal_30;
      MR_Word TypeBody_33;
      MR_Word STATE_VARIABLE_Specs_103_103;

      if (((MR_tag((MR_Word) TypeSymName_20)) == (MR_Integer) 1))
        TypeModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeSymName_20, (MR_Integer) 0))));
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "unqualified type name for foreign_enum");
          return;
        }
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_25, &TypeStatus_29);
      IsTypeLocal_30 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_29);
      switch (IsTypeLocal_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_83;

            Var_83 = hlds__status__type_status_is_imported_1_f_0(PragmaStatus_19);
            succeeded = (Var_83 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_152 = (MR_Word) (PragmaStatus_19);

            if ((Var_152 == (MR_Word) ((MR_Unsigned) 28U)))
              succeeded = MR_TRUE;
            else
            if ((Var_152 == (MR_Word) ((MR_Unsigned) 32U)))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      if (succeeded)
        STATE_VARIABLE_Specs_103_103 = STATE_VARIABLE_Specs_80_80;
      else
      {
        MR_Word Var_86 = (MR_Word) (PragmaStatus_19);

        succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 12U));
        if (succeeded)
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "foreign_enum in the interface section");
            return;
          }
        else
        {
          MR_Word NotThisModulePieces_31;
          MR_Word NotThisModuleSpec_32;
          MR_Word Var_89;
          MR_Word Var_92;
          MR_Word Var_93;

          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (TypeSNA_22));
          }
          {
            Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[13])));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_92));
          }
          NotThisModulePieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_23, Var_89);
          {
            NotThisModuleSpec_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NotThisModuleSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6"));
            MR_hl_field(MR_mktag(1), NotThisModuleSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), NotThisModuleSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(1), NotThisModuleSpec_32, 3) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(1), NotThisModuleSpec_32, 4) = ((MR_Box) (NotThisModulePieces_31));
          }
          {
            STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 0) = ((MR_Box) (NotThisModuleSpec_32));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_103_103, 1) = ((MR_Box) (STATE_VARIABLE_Specs_80_80));
          }
        }
      }
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_25, &TypeBody_33);
      switch (MR_tag((MR_Word) TypeBody_33)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeBodyDu_38 = (MR_Word) ((MR_Word) (TypeBody_33));
            MR_Word Ctors_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_38, (MR_Integer) 0))));
            MR_Word MaybeSuperType_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_38, (MR_Integer) 1))));
            MR_Word MaybeRepn_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_38, (MR_Integer) 3))));
            MR_Word MercuryForeignTagPairs_44;
            MR_Word MercuryForeignTagBimap_45;
            MR_Word MercuryForeignTagNames_46;
            MR_Word ConsIdForeignTags_47;
            MR_Word ConsIdToTagMap_48;
            MR_Word Globals_49;
            MR_Word TargetLanguage_50;
            MR_Word LangForForeignEnums_51;
            MR_Word MaybeTagValuesToSet_52;
            MR_Word Var_104;
            MR_Word Var_108;
            MR_Word Var_113;
            MR_Word STATE_VARIABLE_Specs_114_114;
            MR_Word Var_115;
            MR_Word TCFE0_53;
            MR_Box conv1_TCFE0_53;

            {
              Var_104 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), Var_104, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_104, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_104, 3) = ((MR_Box) (MaybeSuperType_40));
              MR_hl_field(MR_mktag(0), Var_104, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_104, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "MaybeSuperType != no");
            {
              Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2));
              MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (MaybeRepn_42));
              MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_108, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "MaybeRepn != no");
            MercuryForeignTagPairs_44 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[0]), OoMMercuryForeignTagPairs_16);
            Var_113 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_39);
            hlds__add_foreign_enum__build_mercury_foreign_map_11_p_0(TypeModuleName_26, TypeSymName_20, TypeArity_21, (MR_Integer) 0, Context_17, ContextPieces_23, Var_113, MercuryForeignTagPairs_44, &MercuryForeignTagBimap_45, STATE_VARIABLE_Specs_103_103, &STATE_VARIABLE_Specs_114_114);
            MercuryForeignTagNames_46 = mercury__bimap__to_assoc_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryForeignTagBimap_45);
            {
              Var_115 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_3));
              MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (TypeCtor_15));
              MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) (TypeModuleName_26));
              MR_hl_field(MR_mktag(0), Var_115, 5) = ((MR_Box) (Lang_14));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[1]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[2]), Var_115, MercuryForeignTagNames_46, &ConsIdForeignTags_47);
            mercury__map__from_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ConsIdForeignTags_47, &ConsIdToTagMap_48);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_49);
            libs__globals__get_target_2_p_0(Globals_49, &TargetLanguage_50);
            LangForForeignEnums_51 = hlds__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(TargetLanguage_50);
            succeeded = (Lang_14 == LangForForeignEnums_51);
            if (succeeded)
              succeeded = (STATE_VARIABLE_Specs_114_114 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Tuple Var_116;

              {
                Var_116 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_116, 0) = ((MR_Box) (ConsIdToTagMap_48));
                MR_hl_field(MR_mktag(0), Var_116, 1) = ((MR_Box) (Lang_14));
              }
              {
                MaybeTagValuesToSet_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeTagValuesToSet_52, 0) = ((MR_Box) (Var_116));
              }
            }
            else
              MaybeTagValuesToSet_52 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), STATE_VARIABLE_TypeCtorForeignEnumMap_0_61, ((MR_Box) (TypeCtor_15)), &conv1_TCFE0_53);
            if (succeeded)
            {
              TCFE0_53 = ((MR_Word) (conv1_TCFE0_53));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word LangContextMap0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCFE0_53, (MR_Integer) 0))));
              MR_Word TCFE1_57;
              MR_Word TCFE_59;
              MR_Word OldContext_56;
              MR_Box conv2_OldContext_56;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), LangContextMap0_54, ((MR_Box) (Lang_14)), &conv2_OldContext_56);
              if (succeeded)
              {
                OldContext_56 = ((MR_Word) (conv2_OldContext_56));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                hlds__add_foreign_enum__maybe_add_duplicate_foreign_enum_error_8_p_0(TypeSymName_20, TypeArity_21, Lang_14, PragmaStatus_19, OldContext_56, Context_17, STATE_VARIABLE_Specs_114_114, &STATE_VARIABLE_Specs_120_120);
                TCFE1_57 = TCFE0_53;
              }
              else
              {
                MR_Word LangContextMap_58;
                MR_Word Var_124;

                mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Lang_14)), ((MR_Box) (Context_17)), LangContextMap0_54, &LangContextMap_58);
                Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCFE0_53, (MR_Integer) 1))));
                {
                  TCFE1_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TCFE1_57, 0) = ((MR_Box) (LangContextMap_58));
                  MR_hl_field(MR_mktag(0), TCFE1_57, 1) = ((MR_Box) (Var_124));
                }
                STATE_VARIABLE_Specs_120_120 = STATE_VARIABLE_Specs_114_114;
              }
              if ((MaybeTagValuesToSet_52 == (MR_Word) ((MR_Unsigned) 0U)))
                TCFE_59 = TCFE1_57;
              else
              {
                MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCFE1_57, (MR_Integer) 0))));

                {
                  TCFE_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TCFE_59, 0) = ((MR_Box) (Var_125));
                  MR_hl_field(MR_mktag(0), TCFE_59, 1) = ((MR_Box) (MaybeTagValuesToSet_52));
                }
              }
              mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), ((MR_Box) (TypeCtor_15)), ((MR_Box) (TCFE_59)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_61, STATE_VARIABLE_TypeCtorForeignEnumMap_62);
            }
            else
            {
              MR_Word LangContextMap_121;
              MR_Word TCFE_122;

              LangContextMap_121 = mercury__map__singleton_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Lang_14)), ((MR_Box) (Context_17)));
              {
                TCFE_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TCFE_122, 0) = ((MR_Box) (LangContextMap_121));
                MR_hl_field(MR_mktag(0), TCFE_122, 1) = ((MR_Box) (MaybeTagValuesToSet_52));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), ((MR_Box) (TypeCtor_15)), ((MR_Box) (TCFE_122)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_61, STATE_VARIABLE_TypeCtorForeignEnumMap_62);
              STATE_VARIABLE_Specs_120_120 = STATE_VARIABLE_Specs_114_114;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_17, ContextPieces_23, TypeSymName_20, TypeArity_21, TypeBody_33, STATE_VARIABLE_Specs_103_103, &STATE_VARIABLE_Specs_120_120);
            *STATE_VARIABLE_TypeCtorForeignEnumMap_62 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_61;
          }
          break;
        case (MR_Integer) 2:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_17, ContextPieces_23, TypeSymName_20, TypeArity_21, TypeBody_33, STATE_VARIABLE_Specs_103_103, &STATE_VARIABLE_Specs_120_120);
            *STATE_VARIABLE_TypeCtorForeignEnumMap_62 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_61;
          }
          break;
        case (MR_Integer) 3:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_17, ContextPieces_23, TypeSymName_20, TypeArity_21, TypeBody_33, STATE_VARIABLE_Specs_103_103, &STATE_VARIABLE_Specs_120_120);
            *STATE_VARIABLE_TypeCtorForeignEnumMap_62 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_61;
          }
          break;
      }
    }
    else
    {
      STATE_VARIABLE_Specs_120_120 = STATE_VARIABLE_Specs_80_80;
      *STATE_VARIABLE_TypeCtorForeignEnumMap_62 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_61;
    }
    *Specs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_120_120, Specs0_10);
  }
}

static void MR_CALL 
hlds__add_foreign_enum__report_not_du_type_7_p_0(
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word TypeSymName_10,
  MR_Integer TypeArity_11,
  MR_Word TypeBody_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_String TypeKindDesc_15;
    MR_Word Var_21;

    switch (MR_tag((MR_Word) TypeBody_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        TypeKindDesc_15 = (MR_String) "a foreign type";
        break;
      case (MR_Integer) 2:
        TypeKindDesc_15 = (MR_String) "an equivalence type";
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            TypeKindDesc_15 = (MR_String) "a solver type";
            break;
          case (MR_Integer) 1:
            TypeKindDesc_15 = (MR_String) "an abstract type";
            break;
        }
        break;
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (TypeKindDesc_15));
    }
    hlds__add_foreign_enum__report_not_enum_type_7_p_0(Context_8, ContextPieces_9, TypeSymName_10, TypeArity_11, Var_21, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
  }
}

static void MR_CALL 
hlds__add_foreign_enum__report_if_builtin_type_6_p_0(
  MR_Word Context_7,
  MR_Word ContextPieces_8,
  MR_Word TypeSymame_9,
  MR_Integer TypeArity_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_bool succeeded = (TypeArity_10 == (MR_Integer) 0);

    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(TypeSymame_9);
    if (succeeded)
    {
      MR_Word Pieces_12;
      MR_Word Spec_13;
      MR_Word Var_16;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;

      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (TypeSymame_9));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (TypeArity_10));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Var_21));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[32])));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[11])));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
      }
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8, Var_16);
      {
        Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.report_if_builtin_type\'/6"));
        MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
      }
    }
    else
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
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
    MR_Word Var_25 = (MR_Word) (PragmaStatus_12);

    succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word Var_65;
      MR_Word Var_66;

      {
        TypeSymNameArity_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeSymNameArity_16, 0) = ((MR_Box) (TypeSymame_9));
        MR_hl_field(MR_mktag(0), TypeSymNameArity_16, 1) = ((MR_Box) (TypeArity_10));
      }
      LangStr_17 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(Lang_11);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (TypeSymNameArity_16));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (LangStr_17));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[18])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        CurPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CurPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[23])));
        MR_hl_field(MR_mktag(1), CurPieces_18, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[30])));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[28])));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[27])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        OldPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), OldPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[26])));
        MR_hl_field(MR_mktag(1), OldPieces_19, 1) = ((MR_Box) (Var_46));
      }
      {
        CurMsg_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CurMsg_20, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), CurMsg_20, 1) = ((MR_Box) (CurPieces_18));
      }
      {
        OldMsg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldMsg_21, 0) = ((MR_Box) (OldContext_13));
        MR_hl_field(MR_mktag(0), OldMsg_21, 1) = ((MR_Box) (OldPieces_19));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (OldMsg_21));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (CurMsg_20));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.maybe_add_duplicate_foreign_enum_error\'/8"));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_22, 3) = ((MR_Box) (Var_65));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
      }
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__build_mercury_foreign_map_11_p_0(
  MR_Word TypeModuleName_12,
  MR_Word TypeSymName_13,
  MR_Integer TypeArity_14,
  MR_Word ForWhat_15,
  MR_Word Context_16,
  MR_Word ContextPieces_17,
  MR_Word Ctors_18,
  MR_Word Overrides_19,
  MR_Word * OverrideMap_20,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_bool succeeded;
    MR_Word ValidCtorNames_22;
    MR_Word NonEnumSNAsCord_23;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_Specs_30_30;

    Var_27 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    Var_28 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0));
    hlds__add_foreign_enum__find_nonenum_ctors_build_valid_ctor_names_5_p_0(Ctors_18, Var_27, &ValidCtorNames_22, Var_28, &NonEnumSNAsCord_23);
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), NonEnumSNAsCord_23);
    if (succeeded)
      STATE_VARIABLE_Specs_30_30 = STATE_VARIABLE_Specs_0_25;
    else
    {
      MR_Word NotEnumInfo_24;
      MR_Word Var_29;

      Var_29 = mercury__cord__to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), NonEnumSNAsCord_23);
      {
        NotEnumInfo_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NotEnumInfo_24, 0) = ((MR_Box) (Var_29));
      }
      hlds__add_foreign_enum__report_not_enum_type_7_p_0(Context_16, ContextPieces_17, TypeSymName_13, TypeArity_14, NotEnumInfo_24, STATE_VARIABLE_Specs_0_25, &STATE_VARIABLE_Specs_30_30);
    }
    parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0(ForWhat_15, Context_16, ContextPieces_17, TypeModuleName_12, ValidCtorNames_22, Overrides_19, OverrideMap_20, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_26);
  }
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_31;

    conv0_LambdaHeadVar__2_31 = hlds__add_foreign_enum__IntroducedFrom__func__report_not_enum_type__621__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_7_p_0(
  MR_Word Context_8,
  MR_Word ContextPieces_9,
  MR_Word TypeSymName_10,
  MR_Integer TypeArity_11,
  MR_Word NotEnumInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word TypeSNA_14;

    {
      TypeSNA_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeSNA_14, 0) = ((MR_Box) (TypeSymName_10));
      MR_hl_field(MR_mktag(0), TypeSNA_14, 1) = ((MR_Box) (TypeArity_11));
    }
    if (((MR_tag((MR_Word) NotEnumInfo_12)) == (MR_Integer) 0))
    {
      MR_Word OrderedNonEnumSNAs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NotEnumInfo_12, (MR_Integer) 0))));

      if ((OrderedNonEnumSNAs_19 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      else
      {
        MR_Word SNAPieces_22;
        MR_Word ItHasThese_24;
        MR_Word Var_28;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_45;
        MR_Word Var_47;
        MR_Word Var_52;
        MR_Word Pieces_88;
        MR_Word Spec_89;
        MR_Box conv1_ItHasThese_24;

        Var_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[7]), OrderedNonEnumSNAs_19);
        SNAPieces_22 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_28);
        conv1_ItHasThese_24 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OrderedNonEnumSNAs_19, ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[33]))), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[34]))));
        ItHasThese_24 = ((MR_Word) (conv1_ItHasThese_24));
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (TypeSNA_14));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ItHasThese_24));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[22])));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[35])));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[11])));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
        }
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SNAPieces_22, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[38])));
        Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_37, Var_52);
        Pieces_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9, Var_36);
        {
          Spec_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.report_not_enum_type\'/7"));
          MR_hl_field(MR_mktag(1), Spec_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_89, 3) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(1), Spec_89, 4) = ((MR_Box) (Pieces_88));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_26 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_89));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
        }
      }
    }
    else
    {
      MR_String TypeKindDesc_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), NotEnumInfo_12, (MR_Integer) 0))));
      MR_Word Pieces_16;
      MR_Word Spec_17;
      MR_Word Var_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_72;
      MR_Word Var_75;
      MR_Word Var_76;

      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (TypeSNA_14));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (TypeKindDesc_15));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[18])));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[40])));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[39])));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[11])));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
      }
      Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9, Var_64);
      {
        Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.report_not_enum_type\'/7"));
        MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_26 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
      }
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__find_nonenum_ctors_build_valid_ctor_names_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ValidNamesSet_0_2,
  MR_Word * STATE_VARIABLE_ValidNamesSet_3,
  MR_Word STATE_VARIABLE_NonEnumSNAs_0_4,
  MR_Word * STATE_VARIABLE_NonEnumSNAs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NonEnumSNAs_5 = STATE_VARIABLE_NonEnumSNAs_0_4;
      *STATE_VARIABLE_ValidNamesSet_3 = STATE_VARIABLE_ValidNamesSet_0_2;
    }
    else
    {
      MR_Word Ctor_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CtorSymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 2))));
      MR_Integer CtorArity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 4))));
      MR_String CtorName_19;
      MR_Word STATE_VARIABLE_NonEnumSNAs_24_24;
      MR_Word STATE_VARIABLE_ValidNamesSet_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ValidNamesSet_0_2;
      MR_Word next_value_of_STATE_VARIABLE_NonEnumSNAs_0_4;

      succeeded = (CtorArity_17 == (MR_Integer) 0);
      if (succeeded)
        STATE_VARIABLE_NonEnumSNAs_24_24 = STATE_VARIABLE_NonEnumSNAs_0_4;
      else
      {
        MR_Word CtorSNA_18;

        {
          CtorSNA_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CtorSNA_18, 0) = ((MR_Box) (CtorSymName_16));
          MR_hl_field(MR_mktag(0), CtorSNA_18, 1) = ((MR_Box) (CtorArity_17));
        }
        STATE_VARIABLE_NonEnumSNAs_24_24 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), STATE_VARIABLE_NonEnumSNAs_0_4, ((MR_Box) (CtorSNA_18)));
      }
      CtorName_19 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_16);
      mercury__set_tree234__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CtorName_19)), STATE_VARIABLE_ValidNamesSet_0_2, &STATE_VARIABLE_ValidNamesSet_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ctors_13;
      next_value_of_STATE_VARIABLE_ValidNamesSet_0_2 = STATE_VARIABLE_ValidNamesSet_25_25;
      next_value_of_STATE_VARIABLE_NonEnumSNAs_0_4 = STATE_VARIABLE_NonEnumSNAs_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ValidNamesSet_0_2 = next_value_of_STATE_VARIABLE_ValidNamesSet_0_2;
      STATE_VARIABLE_NonEnumSNAs_0_4 = next_value_of_STATE_VARIABLE_NonEnumSNAs_0_4;
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
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 2;
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____cons_id_to_tag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__add_foreign_enum____Unify____cons_id_to_tag_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    hlds__add_foreign_enum____Compare____cons_id_to_tag_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = hlds__add_foreign_enum____Unify____not_enum_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    hlds__add_foreign_enum____Compare____not_enum_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
