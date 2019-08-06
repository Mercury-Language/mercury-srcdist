/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2019-08-06
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
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__add_foreign_enum__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__add_foreign_enum__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_EnumFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__enum_functor_desc_for_fe_or_fee_0_0;

static const MR_EnumFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__enum_functor_desc_for_fe_or_fee_0_1;

static const MR_EnumFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__enum_value_ordered_for_fe_or_fee_0[2];

static const MR_EnumFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__enum_name_ordered_for_fe_or_fee_0[2];

static const MR_Integer hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_for_fe_or_fee_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

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
hlds__add_foreign_enum__IntroducedFrom__func__report_not_enum_type__952__1_1_f_0(
  MR_Word LambdaHeadVar__1_31);

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__429__1_1_f_0(
  MR_String LambdaHeadVar__1_54);

static MR_bool MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__208__1_2_p_0(
  MR_Word MaybeRepn_43,
  MR_Word HeadVar__2_113);

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
hlds__add_foreign_enum____Compare____for_fe_or_fee_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__add_foreign_enum____Unify____for_fe_or_fee_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__add_foreign_enum__qual_ctor_to_format_component_1_f_0(
  MR_Word SymName_3);

static MR_Word MR_CALL 
hlds__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(
  MR_Word SymName_3);

static MR_Word MR_CALL 
hlds__add_foreign_enum__ctor_name_to_format_component_1_f_0(
  MR_String CtorName_3);

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
hlds__add_foreign_enum__map_cons_id_to_foreign_tag_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeModuleName_7,
  MR_Word ForeignLanguage_8,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

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
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

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
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55);

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
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

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

static void MR_CALL 
hlds__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word CtorNames0_8,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static MR_Box MR_CALL 
hlds__add_foreign_enum__ctor_names_to_line_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__add_foreign_enum__ctor_names_to_line_pieces_2_f_0(
  MR_Word CtorNames_4,
  MR_Word Final_5);

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
hlds__add_foreign_enum____Unify____for_fe_or_fee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__add_foreign_enum____Compare____for_fe_or_fee_0_0_10001(
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


static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[73][2];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[12][3];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_3[2][4];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[4][1];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_6[4][5];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_7[1][8];

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_8[1][12];


/* sealed */ struct hlds__add_foreign_enum__vector_common_type_5_0_s {
  const MR_Word hlds__add_foreign_enum__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct hlds__add_foreign_enum__vector_common_type_5_0_s hlds__add_foreign_enum_vector_common_5[4];



static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_1[73][2] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_3[0]))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not defined in this module."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is inconsistent."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "repeated:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__add_foreign_enum_scalar_common_4[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "more."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the type:"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[15])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that is not compatible with the type definition:"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[15])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a module qualification"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was here."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a builtin type."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the following"))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not have a foreign value:"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It has this non-zero arity constructor:"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It has these non-zero arity constructors:"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not an enumeration type."))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not an enumeration type;"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it is"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the specified mapping between"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the names of Mercury constructors"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and the corresponding foreign"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The following Mercury constructor"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The following foreign"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate foreign_enum pragma"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and target language"))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The first foreign_enum pragma"))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for type"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: some of the constructors of the type"))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be converted into valid identifiers for"))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The problematic"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_2[12][3] = {
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
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[0])),
    ((MR_Box) (hlds__add_foreign_enum__ctor_names_to_line_pieces_2_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[1])),
    ((MR_Box) (hlds__add_foreign_enum__add_unknown_ctors_error_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[1])),
    ((MR_Box) (hlds__add_foreign_enum__add_bad_qual_ctors_error_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[2])),
    ((MR_Box) (hlds__add_foreign_enum__report_not_enum_type_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[0])),
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

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_6[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0)),
    ((MR_Box) (&hlds__add_foreign_enum__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
};

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_7[1][8] = {
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

static /* final */ const MR_Box hlds__add_foreign_enum_scalar_common_8[1][12] = {
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


static /* final */ const struct hlds__add_foreign_enum__vector_common_type_5_0_s hlds__add_foreign_enum_vector_common_5[4] = {
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
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

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

static const MR_FA_TypeInfo_Struct2 hlds__add_foreign_enum__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_cons_id_0hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_cons_id_to_tag_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
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
  NULL
};

static const MR_EnumFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__enum_functor_desc_for_fe_or_fee_0_0 = {
  (MR_String) "for_foreign_enum",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__add_foreign_enum__hlds__add_foreign_enum__enum_functor_desc_for_fe_or_fee_0_1 = {
  (MR_String) "for_foreign_export_enum",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__enum_value_ordered_for_fe_or_fee_0[2] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__enum_functor_desc_for_fe_or_fee_0_0,
  &hlds__add_foreign_enum__hlds__add_foreign_enum__enum_functor_desc_for_fe_or_fee_0_1
};

static const MR_EnumFunctorDescPtr hlds__add_foreign_enum__hlds__add_foreign_enum__enum_name_ordered_for_fe_or_fee_0[2] = {
  &hlds__add_foreign_enum__hlds__add_foreign_enum__enum_functor_desc_for_fe_or_fee_0_0,
  &hlds__add_foreign_enum__hlds__add_foreign_enum__enum_functor_desc_for_fe_or_fee_0_1
};

static const MR_Integer hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_for_fe_or_fee_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_for_fe_or_fee_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__add_foreign_enum____Unify____for_fe_or_fee_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____for_fe_or_fee_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "for_fe_or_fee",
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__enum_name_ordered_for_fe_or_fee_0 },
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__enum_value_ordered_for_fe_or_fee_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_for_fe_or_fee_0
};

static const MR_FA_TypeInfo_Struct1 hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)
  }
};

static const MR_PseudoTypeInfo hlds__add_foreign_enum__hlds__add_foreign_enum__field_types_not_enum_info_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__add_foreign_enum__hlds__add_foreign_enum__du_stag_ordered_not_enum_info_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__add_foreign_enum____Unify____not_enum_info_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____not_enum_info_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "not_enum_info",
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_not_enum_info_0 },
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_not_enum_info_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_not_enum_info_0
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__add_foreign_enum____Unify____type_ctor_foreign_enums_0_0_10001)),
  ((MR_Box) (hlds__add_foreign_enum____Compare____type_ctor_foreign_enums_0_0_10001)),
  (MR_String) "hlds.add_foreign_enum",
  (MR_String) "type_ctor_foreign_enums",
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_name_ordered_type_ctor_foreign_enums_0 },
  {     hlds__add_foreign_enum__hlds__add_foreign_enum__du_ptag_ordered_type_ctor_foreign_enums_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__add_foreign_enum__hlds__add_foreign_enum__functor_number_map_type_ctor_foreign_enums_0
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
  UINT8_C(17),
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
  NULL
};

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__report_not_enum_type__952__1_1_f_0(
  MR_Word LambdaHeadVar__1_31)
{
  {
    MR_Word LambdaHeadVar__2_32;

    {
      LambdaHeadVar__2_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_32, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), LambdaHeadVar__2_32, 1) = ((MR_Box) (LambdaHeadVar__1_31));
    }
    return LambdaHeadVar__2_32;
  }
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__429__1_1_f_0(
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
hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__208__1_2_p_0(
  MR_Word MaybeRepn_43,
  MR_Word HeadVar__2_113)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[0]), ((MR_Box) (MaybeRepn_43)), ((MR_Box) (HeadVar__2_113)));
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
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

static void MR_CALL 
hlds__add_foreign_enum____Compare____for_fe_or_fee_0_0(
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
hlds__add_foreign_enum____Unify____for_fe_or_fee_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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

static MR_Word MR_CALL 
hlds__add_foreign_enum__qual_ctor_to_format_component_1_f_0(
  MR_Word SymName_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (SymName_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (SymName_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__ctor_name_to_format_component_1_f_0(
  MR_String CtorName_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (CtorName_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

    succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
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
    MR_Word CtorSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 2))));
    MR_String CtorName_18;
    MR_String ForeignNameTail_20;
    MR_String ForeignName_21;
    MR_Word IsValidForeignName_22;
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
    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_3[1]));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (hlds__add_foreign_enum__add_ctor_to_name_map_9_p_0_1));
            MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
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
    MR_Word FEEInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 0))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum_6, (MR_Integer) 2))));
    MR_Word Lang_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEEInfo_10, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word TypeCtor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo_10, (MR_Integer) 1))));
    MR_Word Attributes_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo_10, (MR_Integer) 2))));
    MR_Word Overrides_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo_10, (MR_Integer) 3))));
    MR_Word TypeSymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0))));
    MR_Integer TypeArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1))));
    MR_Word ContextPieces_20;
    MR_Word TypeTable_21;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_Specs_68_68;
    MR_Word STATE_VARIABLE_Specs_78_78;
    MR_Word TypeDefn_22;

    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (TypeSymName_18));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (TypeArity_19));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[7])));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[72])));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
    }
    {
      ContextPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContextPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), ContextPieces_20, 1) = ((MR_Box) (Var_52));
    }
    hlds__add_foreign_enum__report_if_builtin_type_6_p_0(Context_12, ContextPieces_20, TypeSymName_18, TypeArity_19, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_68_68);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_48, &TypeTable_21);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_21, TypeCtor_15, &TypeDefn_22);
    if (succeeded)
    {
      MR_Word TypeModuleName_23;
      MR_Word TypeBody_26;

      if (((MR_tag((MR_Word) TypeSymName_18)) == (MR_Integer) 1))
        TypeModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeSymName_18, (MR_Integer) 0))));
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "unqualified type name for foreign_export_enum");
          return;
        }
      }
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_22, &TypeBody_26);
      switch (MR_tag((MR_Word) TypeBody_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_12, ContextPieces_20, TypeSymName_18, TypeArity_19, TypeBody_26, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_78_78);
            *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ctors_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_26, (MR_Integer) 0))));
            MR_Word MaybeRepn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_26, (MR_Integer) 2))));
            MR_Word CtorRepns_36;
            MR_Word OverrideBimap_37;
            MR_Word OverrideMap_38;
            MR_Word MaybePrefix_39;
            MR_Word MakeUpperCase_40;
            MR_String Prefix_41;
            MR_Word NameMap_42;
            MR_Word Var_74;
            MR_Word STATE_VARIABLE_Specs_75_75;

            if ((MaybeRepn_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_export_enum\'/5", (MR_String) "MaybeRepn = no");
                return;
              }
            }
            else
            {
              MR_Word Repn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_33, (MR_Integer) 0))));

              CtorRepns_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_35, (MR_Integer) 0))));
            }
            Var_74 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_31);
            hlds__add_foreign_enum__build_mercury_foreign_map_11_p_0(TypeModuleName_23, TypeSymName_18, TypeArity_19, (MR_Integer) 1, Context_12, ContextPieces_20, Var_74, Overrides_17, &OverrideBimap_37, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_75_75);
            OverrideMap_38 = mercury__bimap__forward_map_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OverrideBimap_37);
            MaybePrefix_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attributes_16, (MR_Integer) 0))));
            MakeUpperCase_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Attributes_16, (MR_Integer) 1))) & (MR_Integer) 1);
            if ((MaybePrefix_39 == (MR_Word) ((MR_Unsigned) 0U)))
              Prefix_41 = (MR_String) "";
            else
              Prefix_41 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybePrefix_39, (MR_Integer) 0))));
            hlds__add_foreign_enum__build_export_enum_name_map_10_p_0(ContextPieces_20, Context_12, Lang_14, Prefix_41, MakeUpperCase_40, OverrideMap_38, CtorRepns_36, &NameMap_42, STATE_VARIABLE_Specs_75_75, &STATE_VARIABLE_Specs_78_78);
            if ((STATE_VARIABLE_Specs_78_78 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ExportedEnum_43;
              MR_Word ExportedEnums0_44;
              MR_Word ExportedEnums_45;

              {
                ExportedEnum_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 0) = ((MR_Box) (TypeCtor_15));
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 1) = ((MR_Box) (CtorRepns_36));
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 2) = (MR_Box) ((MR_Unsigned) (Lang_14));
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 3) = ((MR_Box) (NameMap_42));
                MR_hl_field(MR_mktag(0), ExportedEnum_43, 4) = ((MR_Box) (Context_12));
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
        case (MR_Integer) 2:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_12, ContextPieces_20, TypeSymName_18, TypeArity_19, TypeBody_26, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_78_78);
            *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
          }
          break;
        case (MR_Integer) 3:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_12, ContextPieces_20, TypeSymName_18, TypeArity_19, TypeBody_26, STATE_VARIABLE_Specs_68_68, &STATE_VARIABLE_Specs_78_78);
            *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
          }
          break;
      }
    }
    else
    {
      STATE_VARIABLE_Specs_78_78 = STATE_VARIABLE_Specs_68_68;
      *STATE_VARIABLE_ModuleInfo_49 = STATE_VARIABLE_ModuleInfo_0_48;
    }
    *Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_78_78, Specs0_8);
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

    conv4_LambdaHeadVar__2_55 = hlds__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__429__1_1_f_0(((MR_String) (wrapper_arg_1)));
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
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_8[0]));
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
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (LangName_24));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[11])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[70])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[69])));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
      }
      AlwaysPieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_11, Var_40);
      BadForeignPiecesList_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[2]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[11]), BadForeignNames_21);
      BadForeignPieces_29 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(BadForeignPiecesList_28, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[44])));
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
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[42])));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[71])));
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
        Msg_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_31, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Msg_31, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Msg_31));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_32, 2) = ((MR_Box) (Var_82));
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
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2(
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
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__208__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ItemForeignEnum_8,
  MR_Word STATE_VARIABLE_TypeCtorForeignEnumMap_0_62,
  MR_Word * STATE_VARIABLE_TypeCtorForeignEnumMap_63,
  MR_Word Specs0_10,
  MR_Word * Specs_11)
{
  {
    MR_bool succeeded;
    MR_Word FEInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_8, (MR_Integer) 0))));
    MR_Word ItemMercuryStatus_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_8, (MR_Integer) 1))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_8, (MR_Integer) 2))));
    MR_Integer SeqNum_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemForeignEnum_8, (MR_Integer) 3))));
    MR_Word ItemPragmaInfo_16;
    MR_Word Specs1_17;
    MR_Word PragmaStatus_18;
    MR_Word Lang_19;
    MR_Word TypeCtor_20;
    MR_Word OoMMercuryForeignTagPairs_21;
    MR_Word TypeSymName_22;
    MR_Integer TypeArity_23;
    MR_Word TypeSNA_24;
    MR_Word ContextPieces_25;
    MR_Word TypeTable_26;
    MR_Word Var_64;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word STATE_VARIABLE_Specs_83_83;
    MR_Word STATE_VARIABLE_Specs_122_122;
    MR_Word TypeDefn_27;

    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (FEInfo_12));
    }
    {
      ItemPragmaInfo_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, 2) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), ItemPragmaInfo_16, 3) = ((MR_Box) (SeqNum_15));
    }
    hlds__make_hlds_error__report_if_pragma_is_wrongly_in_interface_4_p_0(ItemMercuryStatus_13, ItemPragmaInfo_16, Specs0_10, &Specs1_17);
    hlds__status__item_mercury_status_to_type_status_2_p_0(ItemMercuryStatus_13, &PragmaStatus_18);
    Lang_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo_12, (MR_Integer) 0))) & (MR_Integer) 3);
    TypeCtor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo_12, (MR_Integer) 1))));
    OoMMercuryForeignTagPairs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo_12, (MR_Integer) 2))));
    TypeSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_20, (MR_Integer) 0))));
    TypeArity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_20, (MR_Integer) 1))));
    {
      TypeSNA_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeSNA_24, 0) = ((MR_Box) (TypeSymName_22));
      MR_hl_field(MR_mktag(0), TypeSNA_24, 1) = ((MR_Box) (TypeArity_23));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (TypeSNA_24));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[7])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      ContextPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContextPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), ContextPieces_25, 1) = ((MR_Box) (Var_68));
    }
    hlds__add_foreign_enum__report_if_builtin_type_6_p_0(Context_14, ContextPieces_25, TypeSymName_22, TypeArity_23, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_83_83);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_7, &TypeTable_26);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_26, TypeCtor_20, &TypeDefn_27);
    if (succeeded)
    {
      MR_Word TypeModuleName_28;
      MR_Word TypeStatus_31;
      MR_Word IsTypeLocal_32;
      MR_Word TypeBody_36;
      MR_Word STATE_VARIABLE_Specs_90_90;

      if (((MR_tag((MR_Word) TypeSymName_22)) == (MR_Integer) 1))
        TypeModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeSymName_22, (MR_Integer) 0))));
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "unqualified type name for foreign_export_enum");
          return;
        }
      }
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_27, &TypeStatus_31);
      IsTypeLocal_32 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_31);
      switch (IsTypeLocal_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_86;

            Var_86 = hlds__status__type_status_is_imported_1_f_0(PragmaStatus_18);
            succeeded = (Var_86 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_153 = (MR_Word) (PragmaStatus_18);

            if ((Var_153 == (MR_Word) ((MR_Unsigned) 28U)))
              succeeded = MR_TRUE;
            else
            if ((Var_153 == (MR_Word) ((MR_Unsigned) 32U)))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      if (succeeded)
        STATE_VARIABLE_Specs_90_90 = STATE_VARIABLE_Specs_83_83;
      else
      {
        MR_Word Var_89 = (MR_Word) (PragmaStatus_18);

        succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 12U));
        if (succeeded)
          hlds__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(Context_14, TypeSymName_22, TypeArity_23, STATE_VARIABLE_Specs_83_83, &STATE_VARIABLE_Specs_90_90);
        else
        {
          MR_Word NotThisModulePieces_33;
          MR_Word NotThisModuleMsg_34;
          MR_Word NotThisModuleSpec_35;
          MR_Word Var_91;
          MR_Word Var_94;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_107;

          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[9])));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_94));
          }
          NotThisModulePieces_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_25, Var_91);
          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (NotThisModulePieces_33));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            NotThisModuleMsg_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NotThisModuleMsg_34, 0) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(0), NotThisModuleMsg_34, 1) = ((MR_Box) (Var_102));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (NotThisModuleMsg_34));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            NotThisModuleSpec_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NotThisModuleSpec_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), NotThisModuleSpec_35, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(0), NotThisModuleSpec_35, 2) = ((MR_Box) (Var_107));
          }
          {
            STATE_VARIABLE_Specs_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_90_90, 0) = ((MR_Box) (NotThisModuleSpec_35));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_90_90, 1) = ((MR_Box) (STATE_VARIABLE_Specs_83_83));
          }
        }
      }
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_27, &TypeBody_36);
      switch (MR_tag((MR_Word) TypeBody_36)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_14, ContextPieces_25, TypeSymName_22, TypeArity_23, TypeBody_36, STATE_VARIABLE_Specs_90_90, &STATE_VARIABLE_Specs_122_122);
            *STATE_VARIABLE_TypeCtorForeignEnumMap_63 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_62;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ctors_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_36, (MR_Integer) 0))));
            MR_Word MaybeRepn_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_36, (MR_Integer) 2))));
            MR_Word MercuryForeignTagPairs_45;
            MR_Word MercuryForeignTagBimap_46;
            MR_Word MercuryForeignTagNames_47;
            MR_Word ConsIdForeignTags_48;
            MR_Word ConsIdToTagMap_49;
            MR_Word Globals_50;
            MR_Word TargetLanguage_51;
            MR_Word LangForForeignEnums_52;
            MR_Word MaybeTagValuesToSet_53;
            MR_Word Var_110;
            MR_Word Var_115;
            MR_Word STATE_VARIABLE_Specs_116_116;
            MR_Word Var_117;
            MR_Word TCFE0_54;
            MR_Box conv1_TCFE0_54;

            {
              Var_110 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_6[3]));
              MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_110, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_110, 3) = ((MR_Box) (MaybeRepn_43));
              MR_hl_field(MR_mktag(0), Var_110, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_110, (MR_String) "predicate \140hlds.add_foreign_enum.add_pragma_foreign_enum\'/6", (MR_String) "MaybeRepn != no");
            MercuryForeignTagPairs_45 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[0]), OoMMercuryForeignTagPairs_21);
            Var_115 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_41);
            hlds__add_foreign_enum__build_mercury_foreign_map_11_p_0(TypeModuleName_28, TypeSymName_22, TypeArity_23, (MR_Integer) 0, Context_14, ContextPieces_25, Var_115, MercuryForeignTagPairs_45, &MercuryForeignTagBimap_46, STATE_VARIABLE_Specs_90_90, &STATE_VARIABLE_Specs_116_116);
            MercuryForeignTagNames_47 = mercury__bimap__to_assoc_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryForeignTagBimap_46);
            {
              Var_117 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (&hlds__add_foreign_enum_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0_2));
              MR_hl_field(MR_mktag(0), Var_117, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), Var_117, 3) = ((MR_Box) (TypeCtor_20));
              MR_hl_field(MR_mktag(0), Var_117, 4) = ((MR_Box) (TypeModuleName_28));
              MR_hl_field(MR_mktag(0), Var_117, 5) = ((MR_Box) (Lang_19));
            }
            mercury__list__map_3_p_0((MR_Word) (&hlds__add_foreign_enum_scalar_common_2[1]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[2]), Var_117, MercuryForeignTagNames_47, &ConsIdForeignTags_48);
            mercury__map__from_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ConsIdForeignTags_48, &ConsIdToTagMap_49);
            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_50);
            libs__globals__get_target_2_p_0(Globals_50, &TargetLanguage_51);
            LangForForeignEnums_52 = hlds__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(TargetLanguage_51);
            succeeded = (Lang_19 == LangForForeignEnums_52);
            if (succeeded)
              succeeded = (STATE_VARIABLE_Specs_116_116 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Tuple Var_118;

              {
                Var_118 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (ConsIdToTagMap_49));
                MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (Lang_19));
              }
              {
                MaybeTagValuesToSet_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeTagValuesToSet_53, 0) = ((MR_Box) (Var_118));
              }
            }
            else
              MaybeTagValuesToSet_53 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), STATE_VARIABLE_TypeCtorForeignEnumMap_0_62, ((MR_Box) (TypeCtor_20)), &conv1_TCFE0_54);
            if (succeeded)
            {
              TCFE0_54 = ((MR_Word) (conv1_TCFE0_54));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word LangContextMap0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCFE0_54, (MR_Integer) 0))));
              MR_Word TCFE1_58;
              MR_Word TCFE_60;
              MR_Word OldContext_57;
              MR_Box conv2_OldContext_57;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), LangContextMap0_55, ((MR_Box) (Lang_19)), &conv2_OldContext_57);
              if (succeeded)
              {
                OldContext_57 = ((MR_Word) (conv2_OldContext_57));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                hlds__add_foreign_enum__maybe_add_duplicate_foreign_enum_error_8_p_0(TypeSymName_22, TypeArity_23, Lang_19, PragmaStatus_18, OldContext_57, Context_14, STATE_VARIABLE_Specs_116_116, &STATE_VARIABLE_Specs_122_122);
                TCFE1_58 = TCFE0_54;
              }
              else
              {
                MR_Word LangContextMap_59;
                MR_Word Var_126;

                mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Lang_19)), ((MR_Box) (Context_14)), LangContextMap0_55, &LangContextMap_59);
                Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCFE0_54, (MR_Integer) 1))));
                {
                  TCFE1_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TCFE1_58, 0) = ((MR_Box) (LangContextMap_59));
                  MR_hl_field(MR_mktag(0), TCFE1_58, 1) = ((MR_Box) (Var_126));
                }
                STATE_VARIABLE_Specs_122_122 = STATE_VARIABLE_Specs_116_116;
              }
              if ((MaybeTagValuesToSet_53 == (MR_Word) ((MR_Unsigned) 0U)))
                TCFE_60 = TCFE1_58;
              else
              {
                MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCFE1_58, (MR_Integer) 0))));

                {
                  TCFE_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TCFE_60, 0) = ((MR_Box) (Var_127));
                  MR_hl_field(MR_mktag(0), TCFE_60, 1) = ((MR_Box) (MaybeTagValuesToSet_53));
                }
              }
              mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), ((MR_Box) (TypeCtor_20)), ((MR_Box) (TCFE_60)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_62, STATE_VARIABLE_TypeCtorForeignEnumMap_63);
            }
            else
            {
              MR_Word LangContextMap_123;
              MR_Word TCFE_124;

              LangContextMap_123 = mercury__map__singleton_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Lang_19)), ((MR_Box) (Context_14)));
              {
                TCFE_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TCFE_124, 0) = ((MR_Box) (LangContextMap_123));
                MR_hl_field(MR_mktag(0), TCFE_124, 1) = ((MR_Box) (MaybeTagValuesToSet_53));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), ((MR_Box) (TypeCtor_20)), ((MR_Box) (TCFE_124)), STATE_VARIABLE_TypeCtorForeignEnumMap_0_62, STATE_VARIABLE_TypeCtorForeignEnumMap_63);
              STATE_VARIABLE_Specs_122_122 = STATE_VARIABLE_Specs_116_116;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_14, ContextPieces_25, TypeSymName_22, TypeArity_23, TypeBody_36, STATE_VARIABLE_Specs_90_90, &STATE_VARIABLE_Specs_122_122);
            *STATE_VARIABLE_TypeCtorForeignEnumMap_63 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_62;
          }
          break;
        case (MR_Integer) 3:
          {
            hlds__add_foreign_enum__report_not_du_type_7_p_0(Context_14, ContextPieces_25, TypeSymName_22, TypeArity_23, TypeBody_36, STATE_VARIABLE_Specs_90_90, &STATE_VARIABLE_Specs_122_122);
            *STATE_VARIABLE_TypeCtorForeignEnumMap_63 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_62;
          }
          break;
      }
    }
    else
    {
      STATE_VARIABLE_Specs_122_122 = STATE_VARIABLE_Specs_83_83;
      *STATE_VARIABLE_TypeCtorForeignEnumMap_63 = STATE_VARIABLE_TypeCtorForeignEnumMap_0_62;
    }
    *Specs_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_122_122, Specs1_17);
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
      case (MR_Integer) 0:
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
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_bool succeeded = (TypeArity_10 == (MR_Integer) 0);

    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(TypeSymame_9);
    if (succeeded)
    {
      MR_Word Pieces_12;
      MR_Word Msg_13;
      MR_Word Spec_14;
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_34;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (TypeSymame_9));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (TypeArity_10));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[37])));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[50])));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_8, Var_17);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Pieces_12));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_29));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Msg_13));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_34));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
      }
    }
    else
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
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
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_70;
      MR_Word Var_71;

      {
        TypeSymNameArity_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeSymNameArity_16, 0) = ((MR_Box) (TypeSymame_9));
        MR_hl_field(MR_mktag(0), TypeSymNameArity_16, 1) = ((MR_Box) (TypeArity_10));
      }
      LangStr_17 = parse_tree__mercury_to_mercury__mercury_foreign_language_to_string_1_f_0(Lang_11);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (TypeSymNameArity_16));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_37, 0) = ((MR_Box) (LangStr_17));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[11])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[64])));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[63])));
        MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        CurPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CurPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[62])));
        MR_hl_field(MR_mktag(1), CurPieces_18, 1) = ((MR_Box) (Var_28));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[35])));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[47])));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[66])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        OldPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), OldPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[65])));
        MR_hl_field(MR_mktag(1), OldPieces_19, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (CurPieces_18));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        CurMsg_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CurMsg_20, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(0), CurMsg_20, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (OldPieces_19));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        OldMsg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldMsg_21, 0) = ((MR_Box) (OldContext_13));
        MR_hl_field(MR_mktag(0), OldMsg_21, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (OldMsg_21));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (CurMsg_20));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_71));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_70));
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
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (TypeSymame_7));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (TypeArity_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[33])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[61])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      ErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[59])));
      MR_hl_field(MR_mktag(1), ErrorPieces_10, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (ErrorPieces_10));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
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
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  {
    MR_bool succeeded;
    MR_Word ValidCtorNames_22;
    MR_Word NonEnumSNAsCord_23;
    MR_Word SeenCtorNames0_25;
    MR_Word SeenForeignNames0_26;
    MR_Word BadQualCtorSymNamesCord0_27;
    MR_Word InvalidCtorSymNamesCord0_28;
    MR_Word RepeatedCtorNamesCord0_29;
    MR_Word RepeatedForeignNamesCord0_30;
    MR_Word SeenCtorNames_31;
    MR_Word BadQualCtorSymNamesCord_32;
    MR_Word InvalidCtorSymNamesCord_33;
    MR_Word RepeatedCtorNamesCord_34;
    MR_Word RepeatedForeignNamesCord_35;
    MR_Word RepeatedCtorNames_36;
    MR_Word RepeatedForeignNames_37;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_Specs_59_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_Specs_62_62;
    MR_Word STATE_VARIABLE_Specs_64_64;
    MR_Word STATE_VARIABLE_Specs_146_146;

    Var_56 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    Var_57 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0));
    hlds__add_foreign_enum__find_nonenum_ctors_build_valid_ctor_names_5_p_0(Ctors_18, Var_56, &ValidCtorNames_22, Var_57, &NonEnumSNAsCord_23);
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), NonEnumSNAsCord_23);
    if (succeeded)
      STATE_VARIABLE_Specs_59_59 = STATE_VARIABLE_Specs_0_54;
    else
    {
      MR_Word NotEnumInfo_24;
      MR_Word Var_58;

      Var_58 = mercury__cord__to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), NonEnumSNAsCord_23);
      {
        NotEnumInfo_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NotEnumInfo_24, 0) = ((MR_Box) (Var_58));
      }
      hlds__add_foreign_enum__report_not_enum_type_7_p_0(Context_16, ContextPieces_17, TypeSymName_13, TypeArity_14, NotEnumInfo_24, STATE_VARIABLE_Specs_0_54, &STATE_VARIABLE_Specs_59_59);
    }
    SeenCtorNames0_25 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    SeenForeignNames0_26 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    BadQualCtorSymNamesCord0_27 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    InvalidCtorSymNamesCord0_28 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    RepeatedCtorNamesCord0_29 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    RepeatedForeignNamesCord0_30 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    Var_60 = mercury__bimap__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    hlds__add_foreign_enum__build_ctor_name_to_foreign_name_map_loop_16_p_0(TypeModuleName_12, ValidCtorNames_22, Overrides_19, Var_60, OverrideMap_20, SeenCtorNames0_25, &SeenCtorNames_31, SeenForeignNames0_26, BadQualCtorSymNamesCord0_27, &BadQualCtorSymNamesCord_32, InvalidCtorSymNamesCord0_28, &InvalidCtorSymNamesCord_33, RepeatedCtorNamesCord0_29, &RepeatedCtorNamesCord_34, RepeatedForeignNamesCord0_30, &RepeatedForeignNamesCord_35);
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), BadQualCtorSymNamesCord_32);
    if (succeeded)
      STATE_VARIABLE_Specs_62_62 = STATE_VARIABLE_Specs_59_59;
    else
    {
      MR_Word Var_61;

      Var_61 = mercury__cord__to_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), BadQualCtorSymNamesCord_32);
      hlds__add_foreign_enum__add_bad_qual_ctors_error_5_p_0(Context_16, ContextPieces_17, Var_61, STATE_VARIABLE_Specs_59_59, &STATE_VARIABLE_Specs_62_62);
    }
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidCtorSymNamesCord_33);
    if (succeeded)
      STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_62_62;
    else
    {
      MR_Word Var_63;

      Var_63 = mercury__cord__to_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidCtorSymNamesCord_33);
      hlds__add_foreign_enum__add_unknown_ctors_error_5_p_0(Context_16, ContextPieces_17, Var_63, STATE_VARIABLE_Specs_62_62, &STATE_VARIABLE_Specs_64_64);
    }
    RepeatedCtorNames_36 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedCtorNamesCord_34);
    RepeatedForeignNames_37 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedForeignNamesCord_35);
    succeeded = (RepeatedCtorNames_36 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (RepeatedForeignNames_37 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      STATE_VARIABLE_Specs_146_146 = STATE_VARIABLE_Specs_64_64;
    else
    {
      MR_String NameOrValue_38;
      MR_String NamesOrValues_39;
      MR_Word MainPieces_40;
      MR_Word CtorNamePieces_41;
      MR_Word ForeignNamePieces_44;
      MR_Word Pieces_47;
      MR_Word Msg_48;
      MR_Word Spec_49;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_74;
      MR_Word Var_77;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_144;

      switch (ForWhat_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            NameOrValue_38 = (MR_String) "value";
            NamesOrValues_39 = (MR_String) "values";
          }
          break;
        case (MR_Integer) 1:
          {
            NameOrValue_38 = (MR_String) "name";
            NamesOrValues_39 = (MR_String) "names";
          }
          break;
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (NamesOrValues_39));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[13])));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[56])));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[55])));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[54])));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[50])));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[3])));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
      }
      MainPieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_17, Var_65);
      if ((RepeatedCtorNames_36 == (MR_Word) ((MR_Unsigned) 0U)))
        CtorNamePieces_41 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_88;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_String Var_93;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Box conv0_Var_93;

        conv0_Var_93 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedCtorNames_36, ((MR_Box) ((MR_String) "name is")), ((MR_Box) ((MR_String) "names are")));
        Var_93 = ((MR_String) (conv0_Var_93));
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_93));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[17])));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[57])));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
        }
        Var_104 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(RepeatedCtorNames_36);
        Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_104, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[20])));
        CtorNamePieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_88, Var_103);
      }
      if ((RepeatedForeignNames_37 == (MR_Word) ((MR_Unsigned) 0U)))
        ForeignNamePieces_44 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_112;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_String Var_117;
        MR_String Var_118;
        MR_String Var_120;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Box conv1_Var_117;

        Var_118 = mercury__string__f_43_43_2_f_0(NameOrValue_38, (MR_String) " is");
        Var_120 = mercury__string__f_43_43_2_f_0(NamesOrValues_39, (MR_String) " are");
        conv1_Var_117 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedForeignNames_37, ((MR_Box) (Var_118)), ((MR_Box) (Var_120)));
        Var_117 = ((MR_String) (conv1_Var_117));
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Var_117));
        }
        {
          Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (Var_116));
          MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[17])));
        }
        {
          Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[58])));
          MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_115));
        }
        Var_130 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(RepeatedForeignNames_37);
        Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_130, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[20])));
        ForeignNamePieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_112, Var_129);
      }
      Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), CtorNamePieces_41, ForeignNamePieces_44);
      Pieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MainPieces_40, Var_138);
      {
        Var_140 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_140, 0) = ((MR_Box) (Pieces_47));
      }
      {
        Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
        MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_48, 0) = ((MR_Box) (Context_16));
        MR_hl_field(MR_mktag(0), Msg_48, 1) = ((MR_Box) (Var_139));
      }
      {
        Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (Msg_48));
        MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_49, 2) = ((MR_Box) (Var_144));
      }
      {
        STATE_VARIABLE_Specs_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_146_146, 0) = ((MR_Box) (Spec_49));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_146_146, 1) = ((MR_Box) (STATE_VARIABLE_Specs_64_64));
      }
    }
    switch (ForWhat_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UnseenCtorNames_50;
          MR_Word UnseenCtorNamesList_51;

          mercury__set_tree234__difference_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ValidCtorNames_22, SeenCtorNames_31, &UnseenCtorNames_50);
          mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnseenCtorNames_50, &UnseenCtorNamesList_51);
          if ((UnseenCtorNamesList_51 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_146_146;
          else
            hlds__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(Context_16, ContextPieces_17, UnseenCtorNamesList_51, STATE_VARIABLE_Specs_146_146, STATE_VARIABLE_Specs_55);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_146_146;
        break;
    }
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
    MR_Word conv0_LambdaHeadVar__2_32;

    conv0_LambdaHeadVar__2_32 = hlds__add_foreign_enum__IntroducedFrom__func__report_not_enum_type__952__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_32));
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
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
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
      MR_Word OrderedNonEnumSNAs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NotEnumInfo_12, (MR_Integer) 0))));

      if ((OrderedNonEnumSNAs_20 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      else
      {
        MR_Word SNAPieces_23;
        MR_Word ItHasThese_25;
        MR_Word Var_29;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_53;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_66;
        MR_Word Pieces_97;
        MR_Word Msg_98;
        MR_Word Spec_99;
        MR_Box conv1_ItHasThese_25;

        Var_29 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[10]), OrderedNonEnumSNAs_20);
        SNAPieces_23 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_29);
        conv1_ItHasThese_25 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OrderedNonEnumSNAs_20, ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[48]))), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[49]))));
        ItHasThese_25 = ((MR_Word) (conv1_ItHasThese_25));
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (TypeSNA_14));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (ItHasThese_25));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[42])));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[51])));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[50])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SNAPieces_23, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[20])));
        Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_38, Var_53);
        Pieces_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9, Var_37);
        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Pieces_97));
        }
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_98, 0) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(0), Msg_98, 1) = ((MR_Box) (Var_61));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Msg_98));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_99 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_99, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_99, 2) = ((MR_Box) (Var_66));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_27 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_99));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
        }
      }
    }
    else
    {
      MR_String TypeKindDesc_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), NotEnumInfo_12, (MR_Integer) 0))));
      MR_Word Pieces_16;
      MR_Word Msg_17;
      MR_Word Spec_18;
      MR_Word Var_69;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_77;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_93;

      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (TypeSNA_14));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (TypeKindDesc_15));
      }
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[11])));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[53])));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[52])));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[50])));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
      }
      Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_9, Var_69);
      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (Pieces_16));
      }
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_17, 0) = ((MR_Box) (Context_8));
        MR_hl_field(MR_mktag(0), Msg_17, 1) = ((MR_Box) (Var_88));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Msg_17));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_18, 2) = ((MR_Box) (Var_93));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
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

    conv1_HeadVar__2_2 = hlds__add_foreign_enum__qual_ctor_to_format_component_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv0_HasOrHave_10 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Ctors_8, ((MR_Box) ((MR_String) "symbol has")), ((MR_Box) ((MR_String) "symbols have")));
    HasOrHave_10 = ((MR_String) (conv0_HasOrHave_10));
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (HasOrHave_10));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[31])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[2])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    Components_56 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[2]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[9]), Ctors_8);
    Var_36 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Components_56, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[44])));
    ErrorPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_18, Var_36);
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, ErrorPieces_11);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    conv1_HeadVar__2_2 = hlds__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    conv0_IsOrAre_10 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Ctors_8, ((MR_Box) ((MR_String) "symbol is not a constructor")), ((MR_Box) ((MR_String) "symbols are not constructors")));
    IsOrAre_10 = ((MR_String) (conv0_IsOrAre_10));
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (IsOrAre_10));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[27])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_4[1])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    Components_53 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[2]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[8]), Ctors_8);
    Var_33 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Components_53, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[44])));
    ErrorPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_18, Var_33);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, ErrorPieces_11);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (Var_40));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
    }
  }
}

static void MR_CALL 
hlds__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word CtorNames0_8,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word CtorNames_10;
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

    mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorNames0_8, &CtorNames_10);
    mercury__list__split_upto_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Integer) 10, CtorNames_10, &CtorsStart_11, &CtorsEnd_12);
    conv0_DoOrDoes_13 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorNames_10, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
    DoOrDoes_13 = ((MR_String) (conv0_DoOrDoes_13));
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (DoOrDoes_13));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[40])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    PrefixPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ContextPieces_7, Var_29);
    if ((CtorsEnd_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word CtorsPieces_15;
      MR_Word Var_83;
      MR_Word Var_84;

      Var_84 = hlds__add_foreign_enum__ctor_names_to_line_pieces_2_f_0(CtorNames_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[44])));
      Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_84, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[46])));
      CtorsPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[42])), Var_83);
      {
        CtorsComponent_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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

      mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorsEnd_12, &NumEndCtors_19);
      Var_38 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[42]));
      Var_43 = hlds__add_foreign_enum__ctor_names_to_line_pieces_2_f_0(CtorsStart_11, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[23])));
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (NumEndCtors_19));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[25])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[47])));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__add_foreign_enum_scalar_common_1[45])));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
      }
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_43, Var_51);
      NonVerboseCtorsPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_38, Var_42);
      Var_70 = hlds__add_foreign_enum__ctor_names_to_line_pieces_2_f_0(CtorNames_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[44])));
      Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_70, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__add_foreign_enum_scalar_common_1[46])));
      VerboseCtorsPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_38, Var_69);
      {
        CtorsComponent_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CtorsComponent_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), CtorsComponent_16, 1) = ((MR_Box) (VerboseCtorsPieces_21));
        MR_hl_field(MR_mktag(3), CtorsComponent_16, 2) = ((MR_Box) (NonVerboseCtorsPieces_20));
      }
    }
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (PrefixPieces_14));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (CtorsComponent_16));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Msg_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_22, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_22, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Msg_22));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_99));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
  }
}

static MR_Box MR_CALL 
hlds__add_foreign_enum__ctor_names_to_line_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__add_foreign_enum__ctor_name_to_format_component_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__add_foreign_enum__ctor_names_to_line_pieces_2_f_0(
  MR_Word CtorNames_4,
  MR_Word Final_5)
{
  {
    MR_Word Pieces_6;
    MR_Word Components_7;

    Components_7 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__add_foreign_enum_scalar_common_1[2]), (MR_Word) (&hlds__add_foreign_enum_scalar_common_2[7]), CtorNames_4);
    Pieces_6 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Components_7, Final_5);
    return Pieces_6;
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
        STATE_VARIABLE_NonEnumSNAs_24_24 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), STATE_VARIABLE_NonEnumSNAs_0_4, ((MR_Box) (CtorSNA_18)));
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

void MR_CALL 
hlds__add_foreign_enum__build_ctor_name_to_foreign_name_map_loop_16_p_0(
  MR_Word TypeModuleName_1,
  MR_Word ValidCtorNames_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_OverrideMap_0_4,
  MR_Word * STATE_VARIABLE_OverrideMap_5,
  MR_Word STATE_VARIABLE_SeenCtorNames_0_6,
  MR_Word * STATE_VARIABLE_SeenCtorNames_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_BadQualCtorSymNames_0_9,
  MR_Word * STATE_VARIABLE_BadQualCtorSymNames_10,
  MR_Word STATE_VARIABLE_InvalidCtorSymNames_0_11,
  MR_Word * STATE_VARIABLE_InvalidCtorSymNames_12,
  MR_Word STATE_VARIABLE_RepeatedCtorNames_0_13,
  MR_Word * STATE_VARIABLE_RepeatedCtorNames_14,
  MR_Word STATE_VARIABLE_RepeatedForeignNames_0_15,
  MR_Word * STATE_VARIABLE_RepeatedForeignNames_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RepeatedForeignNames_16 = STATE_VARIABLE_RepeatedForeignNames_0_15;
      *STATE_VARIABLE_RepeatedCtorNames_14 = STATE_VARIABLE_RepeatedCtorNames_0_13;
      *STATE_VARIABLE_InvalidCtorSymNames_12 = STATE_VARIABLE_InvalidCtorSymNames_0_11;
      *STATE_VARIABLE_BadQualCtorSymNames_10 = STATE_VARIABLE_BadQualCtorSymNames_0_9;
      *STATE_VARIABLE_SeenCtorNames_7 = STATE_VARIABLE_SeenCtorNames_0_6;
      *STATE_VARIABLE_OverrideMap_5 = STATE_VARIABLE_OverrideMap_0_4;
    }
    else
    {
      MR_Word Override_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Overrides_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word CtorSymName_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Override_40, (MR_Integer) 0))));
      MR_String ForeignName_50 = ((MR_String) ((MR_hl_field(MR_mktag(0), Override_40, (MR_Integer) 1))));
      MR_String CtorName_53;
      MR_Word STATE_VARIABLE_BadQualCtorSymNames_68_68;
      MR_Word STATE_VARIABLE_OK_69_69;
      MR_Word STATE_VARIABLE_InvalidCtorSymNames_70_70;
      MR_Word STATE_VARIABLE_OK_71_71;
      MR_Word STATE_VARIABLE_RepeatedCtorNames_73_73;
      MR_Word STATE_VARIABLE_OK_74_74;
      MR_Word STATE_VARIABLE_SeenCtorNames_75_75;
      MR_Word STATE_VARIABLE_RepeatedForeignNames_77_77;
      MR_Word STATE_VARIABLE_SeenForeignNames_79_79;
      MR_Word STATE_VARIABLE_OverrideMap_80_80;
      MR_Word STATE_VARIABLE_SeenCtorNames_72_72;
      MR_Word STATE_VARIABLE_SeenForeignNames_76_76;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_OverrideMap_0_4;
      MR_Word next_value_of_STATE_VARIABLE_SeenCtorNames_0_6;
      MR_Word next_value_of_HeadVar__8_8;
      MR_Word next_value_of_STATE_VARIABLE_BadQualCtorSymNames_0_9;
      MR_Word next_value_of_STATE_VARIABLE_InvalidCtorSymNames_0_11;
      MR_Word next_value_of_STATE_VARIABLE_RepeatedCtorNames_0_13;
      MR_Word next_value_of_STATE_VARIABLE_RepeatedForeignNames_0_15;

      if (((MR_tag((MR_Word) CtorSymName_49)) == (MR_Integer) 1))
      {
        MR_Word CtorModuleName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorSymName_49, (MR_Integer) 0))));

        CtorName_53 = ((MR_String) ((MR_hl_field(MR_mktag(1), CtorSymName_49, (MR_Integer) 1))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(CtorModuleName_52, TypeModuleName_1);
        if (succeeded)
        {
          STATE_VARIABLE_OK_69_69 = (MR_Integer) 1;
          STATE_VARIABLE_BadQualCtorSymNames_68_68 = STATE_VARIABLE_BadQualCtorSymNames_0_9;
        }
        else
        {
          STATE_VARIABLE_BadQualCtorSymNames_68_68 = mercury__cord__snoc_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_BadQualCtorSymNames_0_9, ((MR_Box) (CtorSymName_49)));
          STATE_VARIABLE_OK_69_69 = (MR_Integer) 0;
        }
      }
      else
      {
        CtorName_53 = ((MR_String) ((MR_hl_field(MR_mktag(0), CtorSymName_49, (MR_Integer) 0))));
        STATE_VARIABLE_BadQualCtorSymNames_68_68 = STATE_VARIABLE_BadQualCtorSymNames_0_9;
        STATE_VARIABLE_OK_69_69 = (MR_Integer) 1;
      }
      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ValidCtorNames_2, ((MR_Box) (CtorName_53)));
      if (succeeded)
      {
        STATE_VARIABLE_OK_71_71 = STATE_VARIABLE_OK_69_69;
        STATE_VARIABLE_InvalidCtorSymNames_70_70 = STATE_VARIABLE_InvalidCtorSymNames_0_11;
      }
      else
      {
        STATE_VARIABLE_InvalidCtorSymNames_70_70 = mercury__cord__snoc_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), STATE_VARIABLE_InvalidCtorSymNames_0_11, ((MR_Box) (CtorSymName_49)));
        STATE_VARIABLE_OK_71_71 = (MR_Integer) 0;
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CtorName_53)), STATE_VARIABLE_SeenCtorNames_0_6, &STATE_VARIABLE_SeenCtorNames_72_72);
      if (succeeded)
      {
        STATE_VARIABLE_SeenCtorNames_75_75 = STATE_VARIABLE_SeenCtorNames_72_72;
        STATE_VARIABLE_OK_74_74 = STATE_VARIABLE_OK_71_71;
        STATE_VARIABLE_RepeatedCtorNames_73_73 = STATE_VARIABLE_RepeatedCtorNames_0_13;
      }
      else
      {
        STATE_VARIABLE_RepeatedCtorNames_73_73 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_RepeatedCtorNames_0_13, ((MR_Box) (CtorName_53)));
        STATE_VARIABLE_OK_74_74 = (MR_Integer) 0;
        STATE_VARIABLE_SeenCtorNames_75_75 = STATE_VARIABLE_SeenCtorNames_0_6;
      }
      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ForeignName_50)), HeadVar__8_8, &STATE_VARIABLE_SeenForeignNames_76_76);
      if (succeeded)
      {
        STATE_VARIABLE_SeenForeignNames_79_79 = STATE_VARIABLE_SeenForeignNames_76_76;
        STATE_VARIABLE_RepeatedForeignNames_77_77 = STATE_VARIABLE_RepeatedForeignNames_0_15;
        switch (STATE_VARIABLE_OK_74_74) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_OverrideMap_80_80 = STATE_VARIABLE_OverrideMap_0_4;
            break;
          case (MR_Integer) 1:
            {
              mercury__bimap__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (CtorName_53)), ((MR_Box) (ForeignName_50)), STATE_VARIABLE_OverrideMap_0_4, &STATE_VARIABLE_OverrideMap_80_80);
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_RepeatedForeignNames_77_77 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_RepeatedForeignNames_0_15, ((MR_Box) (ForeignName_50)));
        STATE_VARIABLE_SeenForeignNames_79_79 = HeadVar__8_8;
        STATE_VARIABLE_OverrideMap_80_80 = STATE_VARIABLE_OverrideMap_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Overrides_41;
      next_value_of_STATE_VARIABLE_OverrideMap_0_4 = STATE_VARIABLE_OverrideMap_80_80;
      next_value_of_STATE_VARIABLE_SeenCtorNames_0_6 = STATE_VARIABLE_SeenCtorNames_75_75;
      next_value_of_HeadVar__8_8 = STATE_VARIABLE_SeenForeignNames_79_79;
      next_value_of_STATE_VARIABLE_BadQualCtorSymNames_0_9 = STATE_VARIABLE_BadQualCtorSymNames_68_68;
      next_value_of_STATE_VARIABLE_InvalidCtorSymNames_0_11 = STATE_VARIABLE_InvalidCtorSymNames_70_70;
      next_value_of_STATE_VARIABLE_RepeatedCtorNames_0_13 = STATE_VARIABLE_RepeatedCtorNames_73_73;
      next_value_of_STATE_VARIABLE_RepeatedForeignNames_0_15 = STATE_VARIABLE_RepeatedForeignNames_77_77;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_OverrideMap_0_4 = next_value_of_STATE_VARIABLE_OverrideMap_0_4;
      STATE_VARIABLE_SeenCtorNames_0_6 = next_value_of_STATE_VARIABLE_SeenCtorNames_0_6;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      STATE_VARIABLE_BadQualCtorSymNames_0_9 = next_value_of_STATE_VARIABLE_BadQualCtorSymNames_0_9;
      STATE_VARIABLE_InvalidCtorSymNames_0_11 = next_value_of_STATE_VARIABLE_InvalidCtorSymNames_0_11;
      STATE_VARIABLE_RepeatedCtorNames_0_13 = next_value_of_STATE_VARIABLE_RepeatedCtorNames_0_13;
      STATE_VARIABLE_RepeatedForeignNames_0_15 = next_value_of_STATE_VARIABLE_RepeatedForeignNames_0_15;
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
    MR_Word HeadVar__2_2 = ((&hlds__add_foreign_enum_vector_common_5[0 + HeadVar__1_1]))->hlds__add_foreign_enum__vector_common_type_5_0__vct_5_f_0;

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
hlds__add_foreign_enum____Unify____for_fe_or_fee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__add_foreign_enum____Unify____for_fe_or_fee_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__add_foreign_enum____Compare____for_fe_or_fee_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__add_foreign_enum____Compare____for_fe_or_fee_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_for_fe_or_fee_0);
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
