/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2025-09-17
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
#include "libs.file_util.mih"
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
#include "parse_tree.check_type_inst_mode_defns.mih"
#include "parse_tree.d_file_deps.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_du_ctor_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_du_ctor_0hlds__hlds_data__type_ctor_info_cons_tag_0;

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
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__406__1_1_f_0(
  MR_String LambdaHeadVar__1_36);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_export_enum__327__1_2_p_0(
  MR_Word MaybeSuperType_32,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__190__1_2_p_0(
  MR_Word MaybeRepn_43,
  MR_Word HeadVar__2_128);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__188__1_2_p_0(
  MR_Word MaybeSuperType_41,
  MR_Word HeadVar__2_124);

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
hlds__add_foreign_enum__report_not_enum_type_non_du_7_p_0(
  MR_Word ForWhat_8,
  MR_Word TypeCtor_9,
  MR_Word TypeBody_10,
  MR_Word TypeDefnContext_11,
  MR_Word EnumContext_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

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
hlds__add_foreign_enum__build_mercury_foreign_map_11_p_0(
  MR_Word TypeModuleName_12,
  MR_Word TypeCtor_13,
  MR_Word TypeDefnContext_14,
  MR_Word ForWhat_15,
  MR_Word Context_16,
  MR_Word ContextPieces_17,
  MR_Word Ctors_18,
  MR_Word Overrides_19,
  MR_Word * OverrideMap_20,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
hlds__add_foreign_enum__find_non_enum_ctors_build_valid_ctor_names_5_p_0(
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


static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[62][2];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_3[2][4];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[3][5];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_6[1][12];




static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[62][2] = {
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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_3[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for type"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not defined in this module."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: some of the constructors of the type"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be converted"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "into valid identifiers"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The problematic foreign"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type constructor"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "target language"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The first foreign_enum pragma"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[7])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are not allowed"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for builtin types such as"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the Mercury definition of"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not an enumeration type, so"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "there must not be any"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations for it."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That Mercury definition is here."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[8][3] = {
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
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[2])),
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

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row   2 */
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
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__406__1_1_f_0(
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
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_export_enum__327__1_2_p_0(
  MR_Word MaybeSuperType_32,
  MR_Word HeadVar__2_77)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_32, HeadVar__2_77);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__190__1_2_p_0(
  MR_Word MaybeRepn_43,
  MR_Word HeadVar__2_128)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[0]), ((MR_Box) (MaybeRepn_43)), ((MR_Box) (HeadVar__2_128)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__188__1_2_p_0(
  MR_Word MaybeSuperType_41,
  MR_Word HeadVar__2_124)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_41, HeadVar__2_124);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
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

  succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))));
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
  MR_Word CtorSymName_17 = ((MR_Word) ((MR_hl_field(0, CtorRepn_14, 2))));
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
  MR_String CtorName_9 = ((MR_String) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_String ForeignTagName_10 = ((MR_String) ((MR_hl_field(0, HeadVar__4_4, 1))));
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

  succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_export_enum__327__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0(
  MR_Word ItemForeignExportEnum_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * STATE_VARIABLE_ModuleInfo_50,
  MR_Word Specs0_8,
  MR_Word * Specs_9)
{
  MR_bool succeeded;
  MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignExportEnum_6, 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_6, 1))));
  MR_Word Attributes_12 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_6, 2))));
  MR_Word Overrides_13 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_6, 3))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ItemForeignExportEnum_6, 4))));
  MR_Word TypeSymName_16 = ((MR_Word) ((MR_hl_field(0, TypeCtor_11, 0))));
  MR_Word ContextPieces_18;
  MR_Word TypeTable_19;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_Specs_2_69;
  MR_Word STATE_VARIABLE_Specs_3_73;
  MR_Word TypeDefn_20;

  {
    Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_60, 1) = ((MR_Box) (TypeCtor_11));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[9])));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[6])));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[16])));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
  }
  {
    ContextPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ContextPieces_18, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[4])));
    MR_hl_field(1, ContextPieces_18, 1) = ((MR_Box) (Var_53));
  }
  hlds__add_foreign_enum__report_if_builtin_type_5_p_0(Context_14, (MR_String) "foreign_export_enum", TypeCtor_11, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_2_69);
  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &TypeTable_19);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_19, TypeCtor_11, &TypeDefn_20);
  if (succeeded)
  {
    MR_Word TypeModuleName_21;
    MR_Word TypeBody_24;
    MR_Word TypeDefnContext_25;

    if (((MR_tag((MR_Word) TypeSymName_16)) == (MR_Integer) 1))
      TypeModuleName_21 = ((MR_Word) ((MR_hl_field(1, TypeSymName_16, 0))));
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "unqualified type name for foreign_export_enum");
        return;
      }
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_20, &TypeBody_24);
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_20, &TypeDefnContext_25);
    switch (MR_tag((MR_Word) TypeBody_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeBodyDu_30 = (MR_Word) ((MR_Word) (TypeBody_24));
          MR_Word Ctors_31 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_30, 0))));
          MR_Word MaybeSuperType_32 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_30, 1))));
          MR_Word MaybeRepn_34 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_30, 3))));
          MR_Word CtorRepns_37;
          MR_Word OverrideBimap_38;
          MR_Word OverrideMap_39;
          MR_Word MaybePrefix_40;
          MR_Word MakeUpperCase_41;
          MR_String Prefix_42;
          MR_Word NameMap_43;
          MR_Word Var_74;
          MR_Word Var_81;
          MR_Word STATE_VARIABLE_Specs_4_82;
          MR_Word ValidCtorNames_91;
          MR_Word NonEnumSNAsCord_92;
          MR_Word NonEnumSNAs_93;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word STATE_VARIABLE_Specs_1_98;

          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_74, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[0]));
            MR_hl_field(0, Var_74, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0_1));
            MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_74, 3) = ((MR_Box) (MaybeSuperType_32));
            MR_hl_field(0, Var_74, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "MaybeSuperType != no");
          if ((MaybeRepn_34 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "MaybeRepn = no");
              return;
            }
          else
          {
            MR_Word Repn_36 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_34, 0))));

            CtorRepns_37 = ((MR_Word) ((MR_hl_field(0, Repn_36, 0))));
          }
          Var_81 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_31);
          Var_96 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          Var_97 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0));
          hlds__add_foreign_enum__find_non_enum_ctors_build_valid_ctor_names_5_p_0(Var_81, Var_96, &ValidCtorNames_91, Var_97, &NonEnumSNAsCord_92);
          NonEnumSNAs_93 = mercury__cord__to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), NonEnumSNAsCord_92);
          if ((NonEnumSNAs_93 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Specs_1_98 = STATE_VARIABLE_Specs_2_69;
          else
            parse_tree__check_type_inst_mode_defns__report_not_enum_type_du_7_p_0((MR_Integer) 1, TypeCtor_11, TypeDefnContext_25, NonEnumSNAs_93, Context_14, STATE_VARIABLE_Specs_2_69, &STATE_VARIABLE_Specs_1_98);
          parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0((MR_Integer) 1, Context_14, ContextPieces_18, TypeModuleName_21, ValidCtorNames_91, Overrides_13, &OverrideBimap_38, STATE_VARIABLE_Specs_1_98, &STATE_VARIABLE_Specs_4_82);
          OverrideMap_39 = mercury__bimap__forward_map_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OverrideBimap_38);
          MaybePrefix_40 = ((MR_Word) ((MR_hl_field(0, Attributes_12, 0))));
          MakeUpperCase_41 = ((MR_Unsigned) ((MR_hl_field(0, Attributes_12, 1))) & (MR_Integer) 1);
          if ((MaybePrefix_40 == (MR_Word) ((MR_Unsigned) 0U)))
            Prefix_42 = (MR_String) "";
          else
            Prefix_42 = ((MR_String) ((MR_hl_field(1, MaybePrefix_40, 0))));
          hlds__add_foreign_enum__build_export_enum_name_map_10_p_0(ContextPieces_18, Context_14, Lang_10, Prefix_42, MakeUpperCase_41, OverrideMap_39, CtorRepns_37, &NameMap_43, STATE_VARIABLE_Specs_4_82, &STATE_VARIABLE_Specs_3_73);
          if ((STATE_VARIABLE_Specs_3_73 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ExportedEnum_44;
            MR_Word ExportedEnums0_45;
            MR_Word ExportedEnums_46;

            {
              ExportedEnum_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ExportedEnum_44, 0) = ((MR_Box) (TypeCtor_11));
              MR_hl_field(0, ExportedEnum_44, 1) = ((MR_Box) (CtorRepns_37));
              MR_hl_field(0, ExportedEnum_44, 2) = (MR_Box) ((MR_Unsigned) (Lang_10));
              MR_hl_field(0, ExportedEnum_44, 3) = ((MR_Box) (NameMap_43));
              MR_hl_field(0, ExportedEnum_44, 4) = ((MR_Box) (Context_14));
            }
            hlds__hlds_module__module_info_get_exported_enums_2_p_0(STATE_VARIABLE_ModuleInfo_0_49, &ExportedEnums0_45);
            {
              ExportedEnums_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ExportedEnums_46, 0) = ((MR_Box) (ExportedEnum_44));
              MR_hl_field(1, ExportedEnums_46, 1) = ((MR_Box) (ExportedEnums0_45));
            }
            hlds__hlds_module__module_info_set_exported_enums_3_p_0(ExportedEnums_46, STATE_VARIABLE_ModuleInfo_0_49, STATE_VARIABLE_ModuleInfo_50);
          }
          else
            *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          hlds__add_foreign_enum__report_not_enum_type_non_du_7_p_0((MR_Integer) 1, TypeCtor_11, TypeBody_24, TypeDefnContext_25, Context_14, STATE_VARIABLE_Specs_2_69, &STATE_VARIABLE_Specs_3_73);
          *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
        }
        break;
    }
  }
  else
  {
    STATE_VARIABLE_Specs_3_73 = STATE_VARIABLE_Specs_2_69;
    *STATE_VARIABLE_ModuleInfo_50 = STATE_VARIABLE_ModuleInfo_0_49;
  }
  *Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_3_73, Specs0_8);
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__build_export_enum_name_map_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_37;

  conv4_LambdaHeadVar__2_37 = hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__406__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

  hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NameMap_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_BadForeignNames_26);
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

    BadForeignPiecesList_27 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[2]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[7]), BadForeignNames_21);
    BadForeignPieces_28 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[18])), BadForeignPiecesList_27);
    Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[22])));
    conv5_Var_72 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BadForeignNames_21, ((MR_Box) ((MR_String) "name is:")), ((MR_Box) ((MR_String) "names are:")));
    Var_72 = ((MR_String) (conv5_Var_72));
    {
      Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_71, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[27])));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[25])));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[17])));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
    }
    Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadForeignPieces_28, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[29])));
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_79);
    Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[24])), Var_61);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_56);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[20])), Var_50);
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

  hlds__add_foreign_enum__map_du_ctor_to_foreign_tag_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__190__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__188__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Tuple ImsItem_8,
  MR_Word STATE_VARIABLE_TypeCtorForeignEnumMap_0_62,
  MR_Word * STATE_VARIABLE_TypeCtorForeignEnumMap_63,
  MR_Word Specs0_10,
  MR_Word * Specs_11)
{
  MR_bool succeeded;
  MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(0, ImsItem_8, 0))));
  MR_Word ItemForeignEnum_13 = ((MR_Word) ((MR_hl_field(0, ImsItem_8, 1))));
  MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(0, ItemForeignEnum_13, 0))) & (MR_Integer) 3);
  MR_Word TypeCtor_15 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum_13, 1))));
  MR_Word OoMMercuryForeignTagPairs_16 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum_13, 2))));
  MR_Word Context_17 = ((MR_Word) ((MR_hl_field(0, ItemForeignEnum_13, 3))));
  MR_Word PragmaStatus_19;
  MR_Word TypeSymName_20;
  MR_Integer TypeArity_21;
  MR_Word TypeSNA_22;
  MR_Word ContextPieces_23;
  MR_Word TypeTable_24;
  MR_Word Var_66;
  MR_Word Var_69;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_Specs_2_82;
  MR_Word STATE_VARIABLE_Specs_4_120;
  MR_Word TypeDefn_25;

  hlds__status__item_mercury_status_to_type_status_2_p_0(ItemMercuryStatus_12, &PragmaStatus_19);
  TypeSymName_20 = ((MR_Word) ((MR_hl_field(0, TypeCtor_15, 0))));
  TypeArity_21 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_15, 1))));
  {
    TypeSNA_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeSNA_22, 0) = ((MR_Box) (TypeSymName_20));
    MR_hl_field(0, TypeSNA_22, 1) = ((MR_Box) (TypeArity_21));
  }
  {
    Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_73, 1) = ((MR_Box) (TypeCtor_15));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[9])));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[6])));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[5])));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
  }
  {
    ContextPieces_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ContextPieces_23, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[4])));
    MR_hl_field(1, ContextPieces_23, 1) = ((MR_Box) (Var_66));
  }
  hlds__add_foreign_enum__report_if_builtin_type_5_p_0(Context_17, (MR_String) "foreign_enum", TypeCtor_15, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_2_82);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_24);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_24, TypeCtor_15, &TypeDefn_25);
  if (succeeded)
  {
    MR_Word TypeModuleName_26;
    MR_Word TypeStatus_29;
    MR_Word IsTypeLocal_30;
    MR_Word TypeBody_33;
    MR_Word TypeDefnContext_34;
    MR_Word STATE_VARIABLE_Specs_3_118;

    if (((MR_tag((MR_Word) TypeSymName_20)) == (MR_Integer) 1))
      TypeModuleName_26 = ((MR_Word) ((MR_hl_field(1, TypeSymName_20, 0))));
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
          MR_Word Var_87;

          Var_87 = hlds__status__type_status_is_imported_1_f_0(PragmaStatus_19);
          succeeded = (Var_87 == (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_168 = (MR_Word) (PragmaStatus_19);

          if ((Var_168 == (MR_Word) ((MR_Unsigned) 28U)))
            succeeded = MR_TRUE;
          else
          if ((Var_168 == (MR_Word) ((MR_Unsigned) 32U)))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
        }
        break;
    }
    if (succeeded)
      STATE_VARIABLE_Specs_3_118 = STATE_VARIABLE_Specs_2_82;
    else
    {
      MR_Word Var_88 = (MR_Word) (PragmaStatus_19);

      succeeded = (Var_88 == (MR_Word) ((MR_Unsigned) 12U));
      if (succeeded)
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "foreign_enum in the interface section");
          return;
        }
      else
      {
        MR_Word NotThisModulePieces_31;
        MR_Word NotThisModuleSpec_32;
        MR_Word Var_91;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_101;
        MR_Word Var_106;
        MR_Word Var_107;

        {
          Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, Var_99, 1) = ((MR_Box) (TypeSNA_22));
        }
        {
          Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
          MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_97 = parse_tree__error_spec__color_as_subject_1_f_0(Var_98);
        Var_107 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[15])));
        Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[7])));
        Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[13])), Var_106);
        Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_101);
        Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[11])), Var_96);
        NotThisModulePieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ContextPieces_23, Var_91);
        {
          NotThisModuleSpec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NotThisModuleSpec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6"));
          MR_hl_field(0, NotThisModuleSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, NotThisModuleSpec_32, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, NotThisModuleSpec_32, 3) = ((MR_Box) (Context_17));
          MR_hl_field(0, NotThisModuleSpec_32, 4) = ((MR_Box) (NotThisModulePieces_31));
        }
        {
          STATE_VARIABLE_Specs_3_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_3_118, 0) = ((MR_Box) (NotThisModuleSpec_32));
          MR_hl_field(1, STATE_VARIABLE_Specs_3_118, 1) = ((MR_Box) (STATE_VARIABLE_Specs_2_82));
        }
      }
    }
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_25, &TypeBody_33);
    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_25, &TypeDefnContext_34);
    switch (MR_tag((MR_Word) TypeBody_33)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeBodyDu_39 = (MR_Word) ((MR_Word) (TypeBody_33));
          MR_Word Ctors_40 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_39, 0))));
          MR_Word MaybeSuperType_41 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_39, 1))));
          MR_Word MaybeRepn_43 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_39, 3))));
          MR_Word MercuryForeignTagPairs_45;
          MR_Word MercuryForeignTagBimap_46;
          MR_Word MercuryForeignTagNames_47;
          MR_Word DuCtorForeignTags_48;
          MR_Word DuCtorToTagMap_49;
          MR_Word Globals_50;
          MR_Word TargetLanguage_51;
          MR_Word LangForForeignEnums_52;
          MR_Word MaybeTagValuesToSet_53;
          MR_Word Var_121;
          MR_Word Var_125;
          MR_Word Var_130;
          MR_Word STATE_VARIABLE_Specs_5_131;
          MR_Word Var_132;
          MR_Word TCFE0_54;
          MR_Box conv1_TCFE0_54;

          {
            Var_121 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_121, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[0]));
            MR_hl_field(0, Var_121, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1));
            MR_hl_field(0, Var_121, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_121, 3) = ((MR_Box) (MaybeSuperType_41));
            MR_hl_field(0, Var_121, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_121, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "MaybeSuperType != no");
          {
            Var_125 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_125, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_4[1]));
            MR_hl_field(0, Var_125, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2));
            MR_hl_field(0, Var_125, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_125, 3) = ((MR_Box) (MaybeRepn_43));
            MR_hl_field(0, Var_125, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_125, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "MaybeRepn != no");
          MercuryForeignTagPairs_45 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[0]), OoMMercuryForeignTagPairs_16);
          Var_130 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_40);
          hlds__add_foreign_enum__build_mercury_foreign_map_11_p_0(TypeModuleName_26, TypeCtor_15, TypeDefnContext_34, (MR_Integer) 0, Context_17, ContextPieces_23, Var_130, MercuryForeignTagPairs_45, &MercuryForeignTagBimap_46, STATE_VARIABLE_Specs_3_118, &STATE_VARIABLE_Specs_5_131);
          MercuryForeignTagNames_47 = mercury__bimap__to_assoc_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryForeignTagBimap_46);
          {
            Var_132 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_132, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_5[0]));
            MR_hl_field(0, Var_132, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_3));
            MR_hl_field(0, Var_132, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_132, 3) = ((MR_Box) (TypeCtor_15));
            MR_hl_field(0, Var_132, 4) = ((MR_Box) (TypeModuleName_26));
            MR_hl_field(0, Var_132, 5) = ((MR_Box) (Lang_14));
          }
          mercury__list__map_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[1]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[2]), Var_132, MercuryForeignTagNames_47, &DuCtorForeignTags_48);
          mercury__map__from_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_du_ctor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), DuCtorForeignTags_48, &DuCtorToTagMap_49);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_50);
          libs__globals__get_target_2_p_0(Globals_50, &TargetLanguage_51);
          LangForForeignEnums_52 = hlds__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(TargetLanguage_51);
          succeeded = (Lang_14 == LangForForeignEnums_52);
          if (succeeded)
            succeeded = (STATE_VARIABLE_Specs_5_131 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Tuple Var_133;

            {
              Var_133 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_133, 0) = ((MR_Box) (DuCtorToTagMap_49));
              MR_hl_field(0, Var_133, 1) = ((MR_Box) (Lang_14));
            }
            {
              MaybeTagValuesToSet_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeTagValuesToSet_53, 0) = ((MR_Box) (Var_133));
            }
          }
          else
            MaybeTagValuesToSet_53 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), STATE_VARIABLE_TypeCtorForeignEnumMap_0_62, ((MR_Box) (TypeCtor_15)), &conv1_TCFE0_54);
          if (succeeded)
          {
            TCFE0_54 = ((MR_Word) (conv1_TCFE0_54));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word LangContextMap0_55 = ((MR_Word) ((MR_hl_field(0, TCFE0_54, 0))));
            MR_Word TCFE1_58;
            MR_Word TCFE_60;
            MR_Word OldContext_57;
            MR_Box conv2_OldContext_57;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), LangContextMap0_55, ((MR_Box) (Lang_14)), &conv2_OldContext_57);
            if (succeeded)
            {
              OldContext_57 = ((MR_Word) (conv2_OldContext_57));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              hlds__add_foreign_enum__maybe_add_duplicate_foreign_enum_error_7_p_0(TypeCtor_15, Lang_14, PragmaStatus_19, OldContext_57, Context_17, STATE_VARIABLE_Specs_5_131, &STATE_VARIABLE_Specs_4_120);
              TCFE1_58 = TCFE0_54;
            }
            else
            {
              MR_Word LangContextMap_59;
              MR_Word Var_140;

              mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (Lang_14)), ((MR_Box) (Context_17)), LangContextMap0_55, &LangContextMap_59);
              Var_140 = ((MR_Word) ((MR_hl_field(0, TCFE0_54, 1))));
              {
                TCFE1_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TCFE1_58, 0) = ((MR_Box) (LangContextMap_59));
                MR_hl_field(0, TCFE1_58, 1) = ((MR_Box) (Var_140));
              }
              STATE_VARIABLE_Specs_4_120 = STATE_VARIABLE_Specs_5_131;
            }
            if ((MaybeTagValuesToSet_53 == (MR_Word) ((MR_Unsigned) 0U)))
              TCFE_60 = TCFE1_58;
            else
            {
              MR_Word Var_141 = ((MR_Word) ((MR_hl_field(0, TCFE1_58, 0))));

              {
                TCFE_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TCFE_60, 0) = ((MR_Box) (Var_141));
                MR_hl_field(0, TCFE_60, 1) = ((MR_Box) (MaybeTagValuesToSet_53));
              }
            }
            mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), ((MR_Box) (TypeCtor_15)), ((MR_Box) (TCFE_60)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_62, STATE_VARIABLE_TypeCtorForeignEnumMap_63);
          }
          else
          {
            MR_Word LangContextMap_137;
            MR_Word TCFE_138;

            LangContextMap_137 = mercury__map__singleton_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (Lang_14)), ((MR_Box) (Context_17)));
            {
              TCFE_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TCFE_138, 0) = ((MR_Box) (LangContextMap_137));
              MR_hl_field(0, TCFE_138, 1) = ((MR_Box) (MaybeTagValuesToSet_53));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), ((MR_Box) (TypeCtor_15)), ((MR_Box) (TCFE_138)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_62, STATE_VARIABLE_TypeCtorForeignEnumMap_63);
            STATE_VARIABLE_Specs_4_120 = STATE_VARIABLE_Specs_5_131;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          hlds__add_foreign_enum__report_not_enum_type_non_du_7_p_0((MR_Integer) 0, TypeCtor_15, TypeBody_33, TypeDefnContext_34, Context_17, STATE_VARIABLE_Specs_3_118, &STATE_VARIABLE_Specs_4_120);
          *STATE_VARIABLE_TypeCtorForeignEnumMap_63 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_62;
        }
        break;
    }
  }
  else
  {
    STATE_VARIABLE_Specs_4_120 = STATE_VARIABLE_Specs_2_82;
    *STATE_VARIABLE_TypeCtorForeignEnumMap_63 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_62;
  }
  *Specs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_4_120, Specs0_10);
}

static void MR_CALL 
hlds__add_foreign_enum__report_not_enum_type_non_du_7_p_0(
  MR_Word ForWhat_8,
  MR_Word TypeCtor_9,
  MR_Word TypeBody_10,
  MR_Word TypeDefnContext_11,
  MR_Word EnumContext_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_String TypeKindDesc_15;
  MR_String PragmaName_19;
  MR_Word EnumPieces_20;
  MR_Word Spec_22;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;

  switch (MR_tag((MR_Word) TypeBody_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      TypeKindDesc_15 = (MR_String) "a foreign type";
      break;
    case (MR_Integer) 2:
      TypeKindDesc_15 = (MR_String) "an equivalence type";
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_10, 0))))) {
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
  switch (ForWhat_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PragmaName_19 = (MR_String) "foreign_enum";
      break;
    case (MR_Integer) 1:
      PragmaName_19 = (MR_String) "foreign_export_enum";
      break;
  }
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (TypeCtor_9));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_30 = parse_tree__error_spec__color_as_subject_1_f_0(Var_31);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (TypeKindDesc_15));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[56])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[12])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(3, Var_53, 1) = ((MR_Box) (PragmaName_19));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[59])));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[57])));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_49);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[7])));
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_47);
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_34);
  EnumPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[52])), Var_29);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (EnumContext_12));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (EnumPieces_20));
  }
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (TypeDefnContext_11));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[61])));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_71));
  }
  {
    Spec_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.add_foreign_enum.report_not_enum_type_non_du\'/7"));
    MR_hl_field(2, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_22, 3) = ((MR_Box) (Var_69));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_24 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
  }
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
  MR_Word TypeSymName_10 = ((MR_Word) ((MR_hl_field(0, TypeCtor_8, 0))));
  MR_Integer TypeArity_11 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_8, 1))));

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
      MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_20, 1) = ((MR_Box) (DeclName_7));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(1, Var_19, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[46])));
    }
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[30])));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
    }
    Var_26 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[48])));
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[18])));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[7])));
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[50])), Var_36);
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
    Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[36])));
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_58, 0) = ((MR_Box) (LangStr_14));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[18])));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[41])));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[40])));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[39])));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
    }
    Var_45 = parse_tree__error_spec__color_as_subject_1_f_0(Var_46);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[7])));
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[38])), Var_44);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_39);
    CurPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[31])), Var_27);
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_58));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__add_foreign_enum_scalar_common_1[44])));
    }
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[40])));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[37])));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      OldPieces_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OldPieces_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__add_foreign_enum_scalar_common_1[42])));
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
hlds__add_foreign_enum__build_mercury_foreign_map_11_p_0(
  MR_Word TypeModuleName_12,
  MR_Word TypeCtor_13,
  MR_Word TypeDefnContext_14,
  MR_Word ForWhat_15,
  MR_Word Context_16,
  MR_Word ContextPieces_17,
  MR_Word Ctors_18,
  MR_Word Overrides_19,
  MR_Word * OverrideMap_20,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word ValidCtorNames_22;
  MR_Word NonEnumSNAsCord_23;
  MR_Word NonEnumSNAs_24;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_Specs_1_31;

  Var_29 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_30 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0));
  hlds__add_foreign_enum__find_non_enum_ctors_build_valid_ctor_names_5_p_0(Ctors_18, Var_29, &ValidCtorNames_22, Var_30, &NonEnumSNAsCord_23);
  NonEnumSNAs_24 = mercury__cord__to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), NonEnumSNAsCord_23);
  if ((NonEnumSNAs_24 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_1_31 = STATE_VARIABLE_Specs_0_27;
  else
    parse_tree__check_type_inst_mode_defns__report_not_enum_type_du_7_p_0(ForWhat_15, TypeCtor_13, TypeDefnContext_14, NonEnumSNAs_24, Context_16, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_1_31);
  parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0(ForWhat_15, Context_16, ContextPieces_17, TypeModuleName_12, ValidCtorNames_22, Overrides_19, OverrideMap_20, STATE_VARIABLE_Specs_1_31, STATE_VARIABLE_Specs_28);
}

static void MR_CALL 
hlds__add_foreign_enum__find_non_enum_ctors_build_valid_ctor_names_5_p_0(
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
      MR_Word Ctor_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Ctors_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CtorSymName_16 = ((MR_Word) ((MR_hl_field(0, Ctor_12, 2))));
      MR_Integer CtorArity_17 = ((MR_Integer) ((MR_hl_field(0, Ctor_12, 4))));
      MR_String CtorName_19;
      MR_Word STATE_VARIABLE_NonEnumSNAs_1_24;
      MR_Word STATE_VARIABLE_ValidNamesSet_1_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ValidNamesSet_0_2;
      MR_Word next_value_of_STATE_VARIABLE_NonEnumSNAs_0_4;

      succeeded = (CtorArity_17 == (MR_Integer) 0);
      if (succeeded)
        STATE_VARIABLE_NonEnumSNAs_1_24 = STATE_VARIABLE_NonEnumSNAs_0_4;
      else
      {
        MR_Word CtorSNA_18;

        {
          CtorSNA_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CtorSNA_18, 0) = ((MR_Box) (CtorSymName_16));
          MR_hl_field(0, CtorSNA_18, 1) = ((MR_Box) (CtorArity_17));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ((MR_Box) (CtorSNA_18)), STATE_VARIABLE_NonEnumSNAs_0_4, &STATE_VARIABLE_NonEnumSNAs_1_24);
      }
      CtorName_19 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_16);
      mercury__set_tree234__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CtorName_19)), STATE_VARIABLE_ValidNamesSet_0_2, &STATE_VARIABLE_ValidNamesSet_1_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ctors_13;
      next_value_of_STATE_VARIABLE_ValidNamesSet_0_2 = STATE_VARIABLE_ValidNamesSet_1_25;
      next_value_of_STATE_VARIABLE_NonEnumSNAs_0_4 = STATE_VARIABLE_NonEnumSNAs_1_24;
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
