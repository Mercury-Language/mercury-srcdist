/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2024-08-18
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_foreign_enum.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_du_ctor_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0;

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

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2libs__globals__type_ctor_info_foreign_language_0term_context__type_ctor_info_term_context_0;

static const MR_VA_TypeInfo_Struct2 hlds__add_foreign_enum____vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__maybe__ti_maybe_1__vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0;

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_type_ctor_foreign_enums_0_0[2];

static const MR_ConstString hlds__add_foreign_enum__hlds__add_foreign_enum__field_names_type_ctor_foreign_enums_0_0[2];

static const MR_DuFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_type_ctor_foreign_enums_0_0;

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_type_ctor_foreign_enums_0_0[1];

static const MR_DuPtagLayout hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_type_ctor_foreign_enums_0[1];

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_type_ctor_foreign_enums_0[1];

static const MR_Integer hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_type_ctor_foreign_enums_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0;

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__report_not_enum_type__628__1_1_f_0(
  MR_Word LambdaHeadVar__1_62);

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__403__1_1_f_0(
  MR_String LambdaHeadVar__1_36);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_export_enum__324__1_2_p_0(
  MR_Word MaybeSuperType_31,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__188__1_2_p_0(
  MR_Word MaybeRepn_42,
  MR_Word HeadVar__2_126);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__186__1_2_p_0(
  MR_Word MaybeSuperType_40,
  MR_Word HeadVar__2_122);

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
hlds__add_foreign_enum__map_du_ctor_to_foreign_tag_5_p_0(
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
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

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
hlds__add_foreign_enum__report_not_du_type_6_p_0(
  MR_Word Context_7,
  MR_Word ContextPieces_8,
  MR_Word TypeCtor_9,
  MR_Word TypeBody_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
hlds__add_foreign_enum__report_if_builtin_type_5_p_0(
  MR_Word Context_6,
  MR_String DeclName_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__add_foreign_enum__maybe_add_duplicate_foreign_enum_error_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Lang_9,
  MR_Word PragmaStatus_10,
  MR_Word OldContext_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
hlds__add_foreign_enum__build_mercury_foreign_map_10_p_0(
  MR_Word TypeModuleName_11,
  MR_Word TypeCtor_12,
  MR_Word ForWhat_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word Ctors_16,
  MR_Word Overrides_17,
  MR_Word * OverrideMap_18,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static MR_Box MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_6_p_0(
  MR_Word Context_7,
  MR_Word ContextPieces_8,
  MR_Word TypeCtor_9,
  MR_Word NotEnumInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

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
hlds__add_foreign_enum____Unify____du_ctor_to_tag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__add_foreign_enum____Compare____du_ctor_to_tag_map_0_0_10001(
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


static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[60][2];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[9][3];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_3[2][4];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_6[1][12];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_7[4][1];




static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[60][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_3[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for type"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not defined in this module."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: some of the constructors of the type"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "cannot be converted"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "into valid identifiers"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The problematic foreign"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type constructor"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "target language"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The first foreign_enum pragma"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[8])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are not allowed"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for builtin types such as"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It has this non-zero arity constructor:"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It has these non-zero arity constructors:"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not an enumeration type."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not an enumeration type;"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[56]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it is"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[8])))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[0])),
    ((MR_Box) (hlds__add_foreign_enum__report_not_enum_type_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[3])),
    ((MR_Box) (hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_2[4])),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&hlds__add_foreign_enum__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_du_ctor_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_6[1][12] = {
  /* row   0 */
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

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_7[4][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "an abstract type")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "an equivalence type")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "a foreign type")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "a solver type")) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_du_ctor_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0),
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
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_du_ctor_to_tag_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__add_foreign_enum____Unify____du_ctor_to_tag_map_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____du_ctor_to_tag_map_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "du_ctor_to_tag_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0) }
};

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0) };

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

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_0[1] = { &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_0 };

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_1[1] = { &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_not_enum_info_0_1 };

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
  { hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_not_enum_info_0 },
  { hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_not_enum_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_not_enum_info_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2libs__globals__type_ctor_info_foreign_language_0term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__add_foreign_enum____vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0),
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__maybe__ti_maybe_1__vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__add_foreign_enum____vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_type_ctor_foreign_enums_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__tree234__ti_tree234_2libs__globals__type_ctor_info_foreign_language_0term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__maybe__ti_maybe_1__vti_tuple_2tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0libs__globals__type_ctor_info_foreign_language_0)
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

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_type_ctor_foreign_enums_0_0[1] = { &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_type_ctor_foreign_enums_0_0 };

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

static const MR_DuFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_type_ctor_foreign_enums_0[1] = { &hlds__add_foreign_enum__hlds__add_foreign_enum__du_functor_desc_type_ctor_foreign_enums_0_0 };

static const MR_Integer hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_type_ctor_foreign_enums_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "type_ctor_foreign_enums",
  { hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_type_ctor_foreign_enums_0 },
  { hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_type_ctor_foreign_enums_0 },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__report_not_enum_type__628__1_1_f_0(
  MR_Word LambdaHeadVar__1_62)
{
  MR_Word LambdaHeadVar__2_63;

  {
    LambdaHeadVar__2_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_63, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, LambdaHeadVar__2_63, 1) = ((MR_Box) (LambdaHeadVar__1_62));
  }
  return LambdaHeadVar__2_63;
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__403__1_1_f_0(
  MR_String LambdaHeadVar__1_36)
{
  MR_Word LambdaHeadVar__2_37;
  MR_Word Var_38;

  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (LambdaHeadVar__1_36));
  }
  {
    LambdaHeadVar__2_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, LambdaHeadVar__2_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return LambdaHeadVar__2_37;
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_export_enum__324__1_2_p_0(
  MR_Word MaybeSuperType_31,
  MR_Word HeadVar__2_75)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_31, HeadVar__2_75);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__188__1_2_p_0(
  MR_Word MaybeRepn_42,
  MR_Word HeadVar__2_126)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[0]), ((MR_Box) (MaybeRepn_42)), ((MR_Box) (HeadVar__2_126)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__186__1_2_p_0(
  MR_Word MaybeSuperType_40,
  MR_Word HeadVar__2_122)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_40, HeadVar__2_122);
  return succeeded;
}

void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____not_enum_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____not_enum_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__add_foreign_enum____Compare____du_ctor_to_tag_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____du_ctor_to_tag_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
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
  MR_bool succeeded;
  MR_Word CtorSymName_17 = ((MR_Word) ((MR_hl_field(0, CtorRepn_14, (MR_Integer) 2))));
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
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_3[1]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_49_93_95_48_9_p_0_1));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (ForeignName_21));
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

static void MR_CALL 
hlds__add_foreign_enum__map_du_ctor_to_foreign_tag_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeModuleName_7,
  MR_Word ForeignLanguage_8,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_String CtorName_9 = ((MR_String) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_String ForeignTagName_10 = ((MR_String) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Word DuCtor_11;
  MR_Word ForeignTag_12;
  MR_Word CtorSymName_13;

  {
    CtorSymName_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CtorSymName_13, 0) = ((MR_Box) (TypeModuleName_7));
    MR_hl_field(1, CtorSymName_13, 1) = ((MR_Box) (CtorName_9));
  }
  {
    DuCtor_11 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtor_11, 0) = ((MR_Box) (CtorSymName_13));
    MR_hl_field(0, DuCtor_11, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtor_11, 2) = ((MR_Box) (TypeCtor_6));
  }
  {
    ForeignTag_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ForeignTag_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, ForeignTag_12, 1) = (MR_Box) ((MR_Unsigned) (ForeignLanguage_8));
    MR_hl_field(3, ForeignTag_12, 2) = ((MR_Box) (ForeignTagName_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__5_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (DuCtor_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (ForeignTag_12));
  }
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_export_enum__324__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0(
  MR_Word ItemForeignExportEnum_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * STATE_VARIABLE_ModuleInfo_49,
  MR_Word Specs0_8,
  MR_Word * Specs_9)
{
  MR_bool succeeded;
  MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignExportEnum_6, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_6, (MR_Integer) 1))));
  MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_6, (MR_Integer) 2))));
  MR_Word Overrides_13 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_6, (MR_Integer) 3))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_6, (MR_Integer) 4))));
  MR_Word TypeSymName_16 = ((MR_Word) ((MR_hl_field(0, TypeCtor_11, (MR_Integer) 0))));
  MR_Word ContextPieces_18;
  MR_Word TypeTable_19;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word STATE_VARIABLE_Specs_68_68;
  MR_Word STATE_VARIABLE_Specs_71_71;
  MR_Word TypeDefn_20;

  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (TypeCtor_11));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[10])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[7])));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[17])));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    ContextPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ContextPieces_18, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[5])));
    MR_hl_field(1, ContextPieces_18, 1) = ((MR_Box) (Var_52));
  }
  hlds__add_foreign_enum__report_if_builtin_type_5_p_0(Context_14, (MR_String) "foreign_export_enum", TypeCtor_11, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_68_68);
  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_48, &TypeTable_19);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_19, TypeCtor_11, &TypeDefn_20);
  if (succeeded)
  {
    MR_Word TypeModuleName_21;
    MR_Word TypeBody_24;

    if (((MR_tag((MR_Word) TypeSymName_16)) == (MR_Integer) 1))
      TypeModuleName_21 = ((MR_Word) ((MR_hl_field(1, TypeSymName_16, (MR_Integer) 0))));
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
          MR_Word Ctors_30 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_29, (MR_Integer) 0))));
          MR_Word MaybeSuperType_31 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_29, (MR_Integer) 1))));
          MR_Word MaybeRepn_33 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_29, (MR_Integer) 3))));
          MR_Word CtorRepns_36;
          MR_Word OverrideBimap_37;
          MR_Word OverrideMap_38;
          MR_Word MaybePrefix_39;
          MR_Word MakeUpperCase_40;
          MR_String Prefix_41;
          MR_Word NameMap_42;
          MR_Word Var_72;
          MR_Word Var_79;
          MR_Word STATE_VARIABLE_Specs_80_80;
          MR_Word ValidCtorNames_95;
          MR_Word NonEnumSNAsCord_96;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word STATE_VARIABLE_Specs_28_101;

          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[1]));
            MR_hl_field(0, Var_72, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_1));
            MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_72, 3) = ((MR_Box) (MaybeSuperType_31));
            MR_hl_field(0, Var_72, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "MaybeSuperType != no");
          if ((MaybeRepn_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "MaybeRepn = no");
              return;
            }
          else
          {
            MR_Word Repn_35 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_33, (MR_Integer) 0))));

            CtorRepns_36 = ((MR_Word) ((MR_hl_field(0, Repn_35, (MR_Integer) 0))));
          }
          Var_79 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_30);
          Var_98 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          Var_99 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0));
          hlds__add_foreign_enum__find_nonenum_ctors_build_valid_ctor_names_5_p_0(Var_79, Var_98, &ValidCtorNames_95, Var_99, &NonEnumSNAsCord_96);
          succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), NonEnumSNAsCord_96);
          if (succeeded)
            STATE_VARIABLE_Specs_28_101 = STATE_VARIABLE_Specs_68_68;
          else
          {
            MR_Word NotEnumInfo_97;
            MR_Word Var_100;

            Var_100 = mercury__cord__to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), NonEnumSNAsCord_96);
            {
              NotEnumInfo_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NotEnumInfo_97, 0) = ((MR_Box) (Var_100));
            }
            hlds__add_foreign_enum__report_not_enum_type_6_p_0(Context_14, ContextPieces_18, TypeCtor_11, NotEnumInfo_97, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_28_101);
          }
          parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0((MR_Integer) 1, Context_14, ContextPieces_18, TypeModuleName_21, ValidCtorNames_95, Overrides_13, &OverrideBimap_37, STATE_VARIABLE_Specs_28_101, &STATE_VARIABLE_Specs_80_80);
          OverrideMap_38 = mercury__bimap__forward_map_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OverrideBimap_37);
          MaybePrefix_39 = ((MR_Word) ((MR_hl_field(0, Attributes_12, (MR_Integer) 0))));
          MakeUpperCase_40 = ((MR_Unsigned) ((MR_hl_field(0, Attributes_12, (MR_Integer) 1))) & (MR_Integer) 1);
          if ((MaybePrefix_39 == (MR_Word) ((MR_Unsigned) 0U)))
            Prefix_41 = (MR_String) "";
          else
            Prefix_41 = ((MR_String) ((MR_hl_field(1, MaybePrefix_39, (MR_Integer) 0))));
          hlds__add_foreign_enum__build_export_enum_name_map_10_p_0(ContextPieces_18, Context_14, Lang_10, Prefix_41, MakeUpperCase_40, OverrideMap_38, CtorRepns_36, &NameMap_42, STATE_VARIABLE_Specs_80_80, &STATE_VARIABLE_Specs_71_71);
          if ((STATE_VARIABLE_Specs_71_71 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ExportedEnum_43;
            MR_Word ExportedEnums0_44;
            MR_Word ExportedEnums_45;

            {
              ExportedEnum_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ExportedEnum_43, 0) = ((MR_Box) (TypeCtor_11));
              MR_hl_field(0, ExportedEnum_43, 1) = ((MR_Box) (CtorRepns_36));
              MR_hl_field(0, ExportedEnum_43, 2) = (MR_Box) ((MR_Unsigned) (Lang_10));
              MR_hl_field(0, ExportedEnum_43, 3) = ((MR_Box) (NameMap_42));
              MR_hl_field(0, ExportedEnum_43, 4) = ((MR_Box) (Context_14));
            }
            hlds__hlds_module__module_info_get_exported_enums_2_p_0(STATE_VARIABLE_ModuleInfo_0_48, &ExportedEnums0_44);
            {
              ExportedEnums_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ExportedEnums_45, 0) = ((MR_Box) (ExportedEnum_43));
              MR_hl_field(1, ExportedEnums_45, 1) = ((MR_Box) (ExportedEnums0_44));
            }
            hlds__hlds_module__module_info_set_exported_enums_3_p_0(ExportedEnums_45, STATE_VARIABLE_ModuleInfo_0_48, STATE_VARIABLE_ModuleInfo_49);
          }
          else
            *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__add_foreign_enum__report_not_enum_type_6_p_0(Context_14, ContextPieces_18, TypeCtor_11, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_7[2])), STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_71_71);
          *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
        }
        break;
      case (MR_Integer) 2:
        {
          hlds__add_foreign_enum__report_not_enum_type_6_p_0(Context_14, ContextPieces_18, TypeCtor_11, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_7[1])), STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_71_71);
          *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeBody_24, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__add_foreign_enum__report_not_enum_type_6_p_0(Context_14, ContextPieces_18, TypeCtor_11, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_7[3])), STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_71_71);
              *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
            }
            break;
          case (MR_Integer) 1:
            {
              hlds__add_foreign_enum__report_not_enum_type_6_p_0(Context_14, ContextPieces_18, TypeCtor_11, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_7[0])), STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_71_71);
              *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
            }
            break;
        }
        break;
    }
  }
  else
  {
    STATE_VARIABLE_Specs_71_71 = STATE_VARIABLE_Specs_68_68;
    *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
  }
  *Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_71_71, Specs0_8);
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_37;

  conv4_LambdaHeadVar__2_37 = hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__403__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_37));
  return wrapper_arg_2;
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NameMap_24;
  MR_Word conv0_STATE_VARIABLE_BadForeignNames_26;

  hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NameMap_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_BadForeignNames_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NameMap_24));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_BadForeignNames_26));
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
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  MR_Word BadForeignNamesCord_20;
  MR_Word BadForeignNames_21;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Box conv3_NameMap_18;
  MR_Box conv2_BadForeignNamesCord_20;

  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[0]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Lang_13));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (Prefix_14));
    MR_hl_field(0, Var_33, 5) = ((MR_Box) (MakeUpperCase_15));
    MR_hl_field(0, Var_33, 6) = ((MR_Box) (OverrideMap_16));
  }
  Var_34 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_35 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[3]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[1]), Var_33, CtorRepns_17, ((MR_Box) (Var_34)), &conv3_NameMap_18, ((MR_Box) (Var_35)), &conv2_BadForeignNamesCord_20);
  *NameMap_18 = ((MR_Word) (conv3_NameMap_18));
  BadForeignNamesCord_20 = ((MR_Word) (conv2_BadForeignNamesCord_20));
  BadForeignNames_21 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BadForeignNamesCord_20);
  if ((BadForeignNames_21 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
  else
  {
    MR_Word BadForeignPiecesList_27;
    MR_Word BadForeignPieces_28;
    MR_Word Pieces_29;
    MR_Word Spec_30;
    MR_Word Var_45;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_56;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_String Var_72;
    MR_Word Var_79;
    MR_Box conv5_Var_72;

    BadForeignPiecesList_27 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[2]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[8]), BadForeignNames_21);
    BadForeignPieces_28 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[19])), BadForeignPiecesList_27);
    Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[23])));
    conv5_Var_72 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BadForeignNames_21, ((MR_Box) ((MR_String) "name is:")), ((MR_Box) ((MR_String) "names are:")));
    Var_72 = ((MR_String) (conv5_Var_72));
    {
      Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_71, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[28])));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[26])));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[18])));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
    }
    Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadForeignPieces_28, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[30])));
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_79);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[25])), Var_61);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_56);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[21])), Var_50);
    Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_11, Var_45);
    {
      Spec_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.build_export_enum_name_map\'/10"));
      MR_hl_field(0, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_30, 3) = ((MR_Box) (Context_12));
      MR_hl_field(0, Spec_30, 4) = ((MR_Box) (Pieces_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_32 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_30));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  hlds__add_foreign_enum__map_du_ctor_to_foreign_tag_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__188__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__186__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_bool succeeded;
  MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(0, ImsItem_8, (MR_Integer) 0))));
  MR_Word ItemForeignEnum_13 = ((MR_Word) ((MR_hl_field(0, ImsItem_8, (MR_Integer) 1))));
  MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnum_13, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_15 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum_13, (MR_Integer) 1))));
  MR_Word OoMMercuryForeignTagPairs_16 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum_13, (MR_Integer) 2))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum_13, (MR_Integer) 3))));
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
  MR_Word STATE_VARIABLE_Specs_81_81;
  MR_Word STATE_VARIABLE_Specs_118_118;
  MR_Word TypeDefn_25;

  hlds__status__item_mercury_status_to_type_status_2_p_0(ItemMercuryStatus_12, &PragmaStatus_19);
  TypeSymName_20 = ((MR_Word) ((MR_hl_field(0, TypeCtor_15, (MR_Integer) 0))));
  TypeArity_21 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_15, (MR_Integer) 1))));
  {
    TypeSNA_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeSNA_22, 0) = ((MR_Box) (TypeSymName_20));
    MR_hl_field(0, TypeSNA_22, 1) = ((MR_Box) (TypeArity_21));
  }
  {
    Var_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_72, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Var_72, 1) = ((MR_Box) (TypeCtor_15));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[10])));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[7])));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[6])));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
  }
  {
    ContextPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ContextPieces_23, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[5])));
    MR_hl_field(1, ContextPieces_23, 1) = ((MR_Box) (Var_65));
  }
  hlds__add_foreign_enum__report_if_builtin_type_5_p_0(Context_17, (MR_String) "foreign_enum", TypeCtor_15, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_81_81);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_24);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_24, TypeCtor_15, &TypeDefn_25);
  if (succeeded)
  {
    MR_Word TypeModuleName_26;
    MR_Word TypeStatus_29;
    MR_Word IsTypeLocal_30;
    MR_Word TypeBody_33;
    MR_Word STATE_VARIABLE_Specs_117_117;

    if (((MR_tag((MR_Word) TypeSymName_20)) == (MR_Integer) 1))
      TypeModuleName_26 = ((MR_Word) ((MR_hl_field(1, TypeSymName_20, (MR_Integer) 0))));
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
          MR_Word Var_86;

          Var_86 = hlds__status__type_status_is_imported_1_f_0(PragmaStatus_19);
          succeeded = (Var_86 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_166 = (MR_Word) (PragmaStatus_19);

          if ((Var_166 == (MR_Word) ((MR_Unsigned) 28U)))
            succeeded = MR_TRUE;
          else
          if ((Var_166 == (MR_Word) ((MR_Unsigned) 32U)))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        }
        break;
    }
    if (succeeded)
      STATE_VARIABLE_Specs_117_117 = STATE_VARIABLE_Specs_81_81;
    else
    {
      MR_Word Var_87 = (MR_Word) (PragmaStatus_19);

      succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 12U));
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "foreign_enum in the interface section");
          return;
        }
      else
      {
        MR_Word NotThisModulePieces_31;
        MR_Word NotThisModuleSpec_32;
        MR_Word Var_90;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_100;
        MR_Word Var_105;
        MR_Word Var_106;

        {
          Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_98, 1) = ((MR_Box) (TypeSNA_22));
        }
        {
          Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
          MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_96 = parse_tree__error_spec__color_as_subject_1_f_0(Var_97);
        Var_106 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[16])));
        Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[8])));
        Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[14])), Var_105);
        Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_100);
        Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[12])), Var_95);
        NotThisModulePieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_23, Var_90);
        {
          NotThisModuleSpec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NotThisModuleSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6"));
          MR_hl_field(0, NotThisModuleSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, NotThisModuleSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, NotThisModuleSpec_32, 3) = ((MR_Box) (Context_17));
          MR_hl_field(0, NotThisModuleSpec_32, 4) = ((MR_Box) (NotThisModulePieces_31));
        }
        {
          STATE_VARIABLE_Specs_117_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_117_117, 0) = ((MR_Box) (NotThisModuleSpec_32));
          MR_hl_field(1, STATE_VARIABLE_Specs_117_117, 1) = ((MR_Box) (STATE_VARIABLE_Specs_81_81));
        }
      }
    }
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_25, &TypeBody_33);
    switch (MR_tag((MR_Word) TypeBody_33)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeBodyDu_38 = (MR_Word) ((MR_Word) (TypeBody_33));
          MR_Word Ctors_39 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_38, (MR_Integer) 0))));
          MR_Word MaybeSuperType_40 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_38, (MR_Integer) 1))));
          MR_Word MaybeRepn_42 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_38, (MR_Integer) 3))));
          MR_Word MercuryForeignTagPairs_44;
          MR_Word MercuryForeignTagBimap_45;
          MR_Word MercuryForeignTagNames_46;
          MR_Word DuCtorForeignTags_47;
          MR_Word DuCtorToTagMap_48;
          MR_Word Globals_49;
          MR_Word TargetLanguage_50;
          MR_Word LangForForeignEnums_51;
          MR_Word MaybeTagValuesToSet_52;
          MR_Word Var_119;
          MR_Word Var_123;
          MR_Word Var_128;
          MR_Word STATE_VARIABLE_Specs_129_129;
          MR_Word Var_130;
          MR_Word TCFE0_53;
          MR_Box conv1_TCFE0_53;

          {
            Var_119 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_119, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[1]));
            MR_hl_field(0, Var_119, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1));
            MR_hl_field(0, Var_119, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_119, 3) = ((MR_Box) (MaybeSuperType_40));
            MR_hl_field(0, Var_119, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_119, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "MaybeSuperType != no");
          {
            Var_123 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_123, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[2]));
            MR_hl_field(0, Var_123, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2));
            MR_hl_field(0, Var_123, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_123, 3) = ((MR_Box) (MaybeRepn_42));
            MR_hl_field(0, Var_123, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_123, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "MaybeRepn != no");
          MercuryForeignTagPairs_44 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[0]), OoMMercuryForeignTagPairs_16);
          Var_128 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_39);
          hlds__add_foreign_enum__build_mercury_foreign_map_10_p_0(TypeModuleName_26, TypeCtor_15, (MR_Integer) 0, Context_17, ContextPieces_23, Var_128, MercuryForeignTagPairs_44, &MercuryForeignTagBimap_45, STATE_VARIABLE_Specs_117_117, &STATE_VARIABLE_Specs_129_129);
          MercuryForeignTagNames_46 = mercury__bimap__to_assoc_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryForeignTagBimap_45);
          {
            Var_130 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_130, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_5[0]));
            MR_hl_field(0, Var_130, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_3));
            MR_hl_field(0, Var_130, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_130, 3) = ((MR_Box) (TypeCtor_15));
            MR_hl_field(0, Var_130, 4) = ((MR_Box) (TypeModuleName_26));
            MR_hl_field(0, Var_130, 5) = ((MR_Box) (Lang_14));
          }
          mercury__list__map_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[1]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[2]), Var_130, MercuryForeignTagNames_46, &DuCtorForeignTags_47);
          mercury__map__from_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), DuCtorForeignTags_47, &DuCtorToTagMap_48);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_49);
          libs__globals__get_target_2_p_0(Globals_49, &TargetLanguage_50);
          LangForForeignEnums_51 = hlds__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(TargetLanguage_50);
          succeeded = (Lang_14 == LangForForeignEnums_51);
          if (succeeded)
            succeeded = (STATE_VARIABLE_Specs_129_129 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Tuple Var_131;

            {
              Var_131 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_131, 0) = ((MR_Box) (DuCtorToTagMap_48));
              MR_hl_field(0, Var_131, 1) = ((MR_Box) (Lang_14));
            }
            {
              MaybeTagValuesToSet_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeTagValuesToSet_52, 0) = ((MR_Box) (Var_131));
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
            MR_Word LangContextMap0_54 = ((MR_Word) ((MR_hl_field(0, TCFE0_53, (MR_Integer) 0))));
            MR_Word TCFE1_57;
            MR_Word TCFE_59;
            MR_Word OldContext_56;
            MR_Box conv2_OldContext_56;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), LangContextMap0_54, ((MR_Box) (Lang_14)), &conv2_OldContext_56);
            if (succeeded)
            {
              OldContext_56 = ((MR_Word) (conv2_OldContext_56));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              hlds__add_foreign_enum__maybe_add_duplicate_foreign_enum_error_7_p_0(TypeCtor_15, Lang_14, PragmaStatus_19, OldContext_56, Context_17, STATE_VARIABLE_Specs_129_129, &STATE_VARIABLE_Specs_118_118);
              TCFE1_57 = TCFE0_53;
            }
            else
            {
              MR_Word LangContextMap_58;
              MR_Word Var_138;

              mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (Lang_14)), ((MR_Box) (Context_17)), LangContextMap0_54, &LangContextMap_58);
              Var_138 = ((MR_Word) ((MR_hl_field(0, TCFE0_53, (MR_Integer) 1))));
              {
                TCFE1_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TCFE1_57, 0) = ((MR_Box) (LangContextMap_58));
                MR_hl_field(0, TCFE1_57, 1) = ((MR_Box) (Var_138));
              }
              STATE_VARIABLE_Specs_118_118 = STATE_VARIABLE_Specs_129_129;
            }
            if ((MaybeTagValuesToSet_52 == (MR_Word) ((MR_Unsigned) 0U)))
              TCFE_59 = TCFE1_57;
            else
            {
              MR_Word Var_139 = ((MR_Word) ((MR_hl_field(0, TCFE1_57, (MR_Integer) 0))));

              {
                TCFE_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TCFE_59, 0) = ((MR_Box) (Var_139));
                MR_hl_field(0, TCFE_59, 1) = ((MR_Box) (MaybeTagValuesToSet_52));
              }
            }
            mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), ((MR_Box) (TypeCtor_15)), ((MR_Box) (TCFE_59)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_61, STATE_VARIABLE_TypeCtorForeignEnumMap_62);
          }
          else
          {
            MR_Word LangContextMap_135;
            MR_Word TCFE_136;

            LangContextMap_135 = mercury__map__singleton_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (Lang_14)), ((MR_Box) (Context_17)));
            {
              TCFE_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TCFE_136, 0) = ((MR_Box) (LangContextMap_135));
              MR_hl_field(0, TCFE_136, 1) = ((MR_Box) (MaybeTagValuesToSet_52));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), ((MR_Box) (TypeCtor_15)), ((MR_Box) (TCFE_136)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_61, STATE_VARIABLE_TypeCtorForeignEnumMap_62);
            STATE_VARIABLE_Specs_118_118 = STATE_VARIABLE_Specs_129_129;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          hlds__add_foreign_enum__report_not_du_type_6_p_0(Context_17, ContextPieces_23, TypeCtor_15, TypeBody_33, STATE_VARIABLE_Specs_117_117, &STATE_VARIABLE_Specs_118_118);
          *STATE_VARIABLE_TypeCtorForeignEnumMap_62 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_61;
        }
        break;
    }
  }
  else
  {
    STATE_VARIABLE_Specs_118_118 = STATE_VARIABLE_Specs_81_81;
    *STATE_VARIABLE_TypeCtorForeignEnumMap_62 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_61;
  }
  *Specs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_118_118, Specs0_10);
}

static void MR_CALL 
hlds__add_foreign_enum__report_not_du_type_6_p_0(
  MR_Word Context_7,
  MR_Word ContextPieces_8,
  MR_Word TypeCtor_9,
  MR_Word TypeBody_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_String TypeKindDesc_13;
  MR_Word Var_19;

  switch (MR_tag((MR_Word) TypeBody_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      TypeKindDesc_13 = (MR_String) "a foreign type";
      break;
    case (MR_Integer) 2:
      TypeKindDesc_13 = (MR_String) "an equivalence type";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          TypeKindDesc_13 = (MR_String) "a solver type";
          break;
        case (MR_Integer) 1:
          TypeKindDesc_13 = (MR_String) "an abstract type";
          break;
      }
      break;
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (TypeKindDesc_13));
  }
  hlds__add_foreign_enum__report_not_enum_type_6_p_0(Context_7, ContextPieces_8, TypeCtor_9, Var_19, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
}

static void MR_CALL 
hlds__add_foreign_enum__report_if_builtin_type_5_p_0(
  MR_Word Context_6,
  MR_String DeclName_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_bool succeeded;
  MR_Word TypeSymName_10 = ((MR_Word) ((MR_hl_field(0, TypeCtor_8, (MR_Integer) 0))));
  MR_Integer TypeArity_11 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_8, (MR_Integer) 1))));

  succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(TypeSymName_10);
  if (succeeded)
    succeeded = (TypeArity_11 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Pieces_12;
    MR_Word Spec_13;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    {
      Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 33U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (DeclName_7));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[47])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[31])));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
    }
    Var_26 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[49])));
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[19])));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[8])));
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[51])), Var_36);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_31);
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_25);
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.report_if_builtin_type\'/5"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_6));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
    }
  }
  else
    *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
}

static void MR_CALL 
hlds__add_foreign_enum__maybe_add_duplicate_foreign_enum_error_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Lang_9,
  MR_Word PragmaStatus_10,
  MR_Word OldContext_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_Word Var_22 = (MR_Word) (PragmaStatus_10);

  succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
  else
  {
    MR_String LangStr_14;
    MR_Word CurPieces_15;
    MR_Word OldPieces_16;
    MR_Word CurMsg_17;
    MR_Word OldMsg_18;
    MR_Word Spec_19;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_39;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_87;
    MR_Word Var_88;

    LangStr_14 = parse_tree__parse_tree_out_misc__mercury_foreign_language_to_string_1_f_0(Lang_9);
    Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[37])));
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_58, 0) = ((MR_Box) (LangStr_14));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[19])));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[42])));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[41])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[40])));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
    }
    Var_45 = parse_tree__error_spec__color_as_subject_1_f_0(Var_46);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[8])));
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[39])), Var_44);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_39);
    CurPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[32])), Var_27);
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_58));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[45])));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[41])));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[38])));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      OldPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OldPieces_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[43])));
      MR_hl_field(1, OldPieces_16, 1) = ((MR_Box) (Var_68));
    }
    {
      CurMsg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CurMsg_17, 0) = ((MR_Box) (Context_12));
      MR_hl_field(0, CurMsg_17, 1) = ((MR_Box) (CurPieces_15));
    }
    {
      OldMsg_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, OldMsg_18, 0) = ((MR_Box) (OldContext_11));
      MR_hl_field(0, OldMsg_18, 1) = ((MR_Box) (OldPieces_16));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (OldMsg_18));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (CurMsg_17));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Spec_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.maybe_add_duplicate_foreign_enum_error\'/7"));
      MR_hl_field(2, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(2, Spec_19, 3) = ((MR_Box) (Var_87));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__build_mercury_foreign_map_10_p_0(
  MR_Word TypeModuleName_11,
  MR_Word TypeCtor_12,
  MR_Word ForWhat_13,
  MR_Word Context_14,
  MR_Word ContextPieces_15,
  MR_Word Ctors_16,
  MR_Word Overrides_17,
  MR_Word * OverrideMap_18,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;
  MR_Word ValidCtorNames_20;
  MR_Word NonEnumSNAsCord_21;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_Specs_28_28;

  Var_25 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_26 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0));
  hlds__add_foreign_enum__find_nonenum_ctors_build_valid_ctor_names_5_p_0(Ctors_16, Var_25, &ValidCtorNames_20, Var_26, &NonEnumSNAsCord_21);
  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), NonEnumSNAsCord_21);
  if (succeeded)
    STATE_VARIABLE_Specs_28_28 = STATE_VARIABLE_Specs_0_23;
  else
  {
    MR_Word NotEnumInfo_22;
    MR_Word Var_27;

    Var_27 = mercury__cord__to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), NonEnumSNAsCord_21);
    {
      NotEnumInfo_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NotEnumInfo_22, 0) = ((MR_Box) (Var_27));
    }
    hlds__add_foreign_enum__report_not_enum_type_6_p_0(Context_14, ContextPieces_15, TypeCtor_12, NotEnumInfo_22, STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_28_28);
  }
  parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0(ForWhat_13, Context_14, ContextPieces_15, TypeModuleName_11, ValidCtorNames_20, Overrides_17, OverrideMap_18, STATE_VARIABLE_Specs_28_28, STATE_VARIABLE_Specs_24);
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_63;

  conv0_LambdaHeadVar__2_63 = hlds__add_foreign_enum__IntroducedFrom__func__report_not_enum_type__628__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_63));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_6_p_0(
  MR_Word Context_7,
  MR_Word ContextPieces_8,
  MR_Word TypeCtor_9,
  MR_Word NotEnumInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  if (((MR_tag((MR_Word) NotEnumInfo_10)) == (MR_Integer) 0))
  {
    MR_Word OrderedNonEnumSNAs_16 = ((MR_Word) ((MR_hl_field(0, NotEnumInfo_10, (MR_Integer) 0))));

    if ((OrderedNonEnumSNAs_16 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    else
    {
      MR_Word SNAPieces_19;
      MR_Word SNAsPieces_21;
      MR_Word ItHasThese_22;
      MR_Word Var_74;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_84;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_98;
      MR_Word Var_103;
      MR_Word Pieces_113;
      MR_Word Spec_114;
      MR_Box conv1_ItHasThese_22;

      SNAPieces_19 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[7]), OrderedNonEnumSNAs_16);
      SNAsPieces_21 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[19])), SNAPieces_19);
      conv1_ItHasThese_22 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OrderedNonEnumSNAs_16, ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[52]))), ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[53]))));
      ItHasThese_22 = ((MR_Word) (conv1_ItHasThese_22));
      {
        Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(3, Var_82, 1) = ((MR_Box) (TypeCtor_9));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_80 = parse_tree__error_spec__color_as_subject_1_f_0(Var_81);
      Var_90 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[55])));
      {
        Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_98, 0) = ((MR_Box) (ItHasThese_22));
        MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[28])));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_98));
      }
      Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SNAsPieces_21, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[30])));
      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_103);
      Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_95);
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[14])), Var_89);
      Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_84);
      Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[12])), Var_79);
      Pieces_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8, Var_74);
      {
        Spec_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_114, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.report_not_enum_type\'/6"));
        MR_hl_field(0, Spec_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_114, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_114, 3) = ((MR_Box) (Context_7));
        MR_hl_field(0, Spec_114, 4) = ((MR_Box) (Pieces_113));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_24 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_114));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
      }
    }
  }
  else
  {
    MR_String TypeKindDesc_12 = ((MR_String) ((MR_hl_field(1, NotEnumInfo_10, (MR_Integer) 0))));
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_50;

    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (TypeCtor_9));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_31 = parse_tree__error_spec__color_as_subject_1_f_0(Var_32);
    Var_41 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[57])));
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (TypeKindDesc_12));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[59])));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[58])));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
    }
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_46);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[14])), Var_40);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_35);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[12])), Var_30);
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_8, Var_25);
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.report_not_enum_type\'/6"));
      MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_7));
      MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_24 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
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
      MR_Word Ctor_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CtorSymName_16 = ((MR_Word) ((MR_hl_field(0, Ctor_12, (MR_Integer) 2))));
      MR_Integer CtorArity_17 = ((MR_Integer) ((MR_hl_field(0, Ctor_12, (MR_Integer) 4))));
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
          MR_hl_field(0, CtorSNA_18, 0) = ((MR_Box) (CtorSymName_16));
          MR_hl_field(0, CtorSNA_18, 1) = ((MR_Box) (CtorArity_17));
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

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____du_ctor_to_tag_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__add_foreign_enum____Unify____du_ctor_to_tag_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____du_ctor_to_tag_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__add_foreign_enum____Compare____du_ctor_to_tag_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____not_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__add_foreign_enum____Unify____not_enum_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____not_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__add_foreign_enum____Compare____not_enum_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__add_foreign_enum____Unify____type_ctor_to_foreign_enums_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__add_foreign_enum____Compare____type_ctor_to_foreign_enums_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__add_foreign_enum__init(void)
{
}

void mercury__hlds__add_foreign_enum__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_du_ctor_to_tag_map_0);
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
