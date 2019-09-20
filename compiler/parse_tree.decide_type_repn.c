/*
** Automatically generated from `decide_type_repn.m'
** by the Mercury compiler,
** version rotd-2019-09-20
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


// :- module parse_tree.decide_type_repn.
// :- implementation.

/*
INIT mercury__parse_tree__decide_type_repn__init
ENDINIT
*/

#include "parse_tree.decide_type_repn.mih"


#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "hlds.add_foreign_enum.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__pair__pti_pair_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_parse_tree__prog_item__type_ctor_info_foreign_type_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_one_or_more_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__pair__pti_pair_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__pair__pti_pair_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__bimap__pti_bimap_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_du_or_foreign_repn_0_0[1];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_du_or_foreign_repn_0_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_item__type_ctor_info_foreign_type_repn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_one_or_more_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_item__type_ctor_info_foreign_type_repn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_du_repn_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_du_or_foreign_repn_0_1[2];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_du_or_foreign_repn_0_1;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_du_or_foreign_repn_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_du_or_foreign_repn_0_1[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_du_or_foreign_repn_0[2];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_du_or_foreign_repn_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_du_or_foreign_repn_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_aligned_0_0;

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_aligned_0_1;

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_word_aligned_0[2];

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_word_aligned_0[2];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_word_aligned_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0;

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_unqual_type_ctor_0_0[2];

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_unqual_type_ctor_0_0;

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_unqual_type_ctor_0_0[1];

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_unqual_type_ctor_0[1];

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_unqual_type_ctor_0[1];

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_unqual_type_ctor_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0;

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__build_foreign_langs_name_map__468__1_3_p_0(
  MR_Word MercuryForeignBimap_21,
  MR_String HeadVar__2_40,
  MR_String * HeadVar__3_41);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_aligned_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_aligned_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_word_aligned_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_word_aligned_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____du_or_foreign_repn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____du_or_foreign_repn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn__record_foreign_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__decide_type_repn__record_foreign_type_3_p_0(
  MR_Word ForeignTypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_34,
  MR_Word * STATE_VARIABLE_TypeRepnMap_35);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__build_foreign_langs_name_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn__build_foreign_langs_name_map_6_p_0(
  MR_Word ModuleName_7,
  MR_Word CtorNames_8,
  MR_Word CtorNamesSet_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ForeignLangsNamesMap_0_30,
  MR_Word * STATE_VARIABLE_ForeignLangsNamesMap_31);

static void MR_CALL 
parse_tree__decide_type_repn__decide_repn_if_simple_du_type_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__decide_type_repn__decide_repn_if_simple_du_type_13_p_0(
  MR_Word ModuleName_14,
  MR_Word ForeignEnumTypeCtors_15,
  MR_Word TypeDefnInfo_16,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_70,
  MR_Word * STATE_VARIABLE_TypeRepnMap_71,
  MR_Word STATE_VARIABLE_WordAlignedMap_0_72,
  MR_Word * STATE_VARIABLE_WordAlignedMap_73,
  MR_Word STATE_VARIABLE_DeferredForeignTypeDefns_0_74,
  MR_Word * STATE_VARIABLE_DeferredForeignTypeDefns_75,
  MR_Word STATE_VARIABLE_EqvTypeMap_0_76,
  MR_Word * STATE_VARIABLE_EqvTypeMap_77,
  MR_Word STATE_VARIABLE_TypeSet_0_78,
  MR_Word * STATE_VARIABLE_TypeSet_79);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__ctor_is_constant_2_p_0(
  MR_Word Ctor_3,
  MR_String * Name_4);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__ctors_are_all_constants_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn__record_type_word_alignment_4_p_0(
  MR_Word UnqualTypeCtor_5,
  MR_Word WordAligned_6,
  MR_Word STATE_VARIABLE_WordAlignedMap_0_9,
  MR_Word * STATE_VARIABLE_WordAlignedMap_10);

static void MR_CALL 
parse_tree__decide_type_repn__add_du_repn_to_type_map_4_p_0(
  MR_Word UnqualTypeCtor_5,
  MR_Word DuRepn_6,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15);

static void MR_CALL 
parse_tree__decide_type_repn__maybe_make_word_aligned_item_5_p_0(
  MR_Word ModuleName_6,
  MR_Word UnqualTypeCtor_7,
  MR_Word WordAligned_8,
  MR_Word STATE_VARIABLE_Items_0_17,
  MR_Word * STATE_VARIABLE_Items_18);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__is_non_overridden_foreign_enum_2_p_0(
  MR_Word OverriddenLangs_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__decide_type_repn__gather_used_foreign_languages_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedLangs_0_7,
  MR_Word * STATE_VARIABLE_UsedLangs_8);

static MR_bool MR_CALL 
parse_tree__decide_type_repn__make_type_repn_item_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__decide_type_repn__make_type_repn_item_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__decide_type_repn__make_type_repn_item_5_p_0(
  MR_Word ModuleName_6,
  MR_Word UnqualTypeCtor_7,
  MR_Word Repn_8,
  MR_Word STATE_VARIABLE_Items_0_35,
  MR_Word * STATE_VARIABLE_Items_36);

static void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____du_or_foreign_repn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____du_or_foreign_repn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____foreign_enum_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____foreign_enum_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_word_aligned_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_word_aligned_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____unqual_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____unqual_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_aligned_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_aligned_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_1[12][3];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_2[10][2];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_3[1][16];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_4[3][6];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_5[2][8];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_6[1][5];

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_7[1][9];




static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_1[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_type_repn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_2[4]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_2[6]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_2[4]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_2[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_4[0])),
    ((MR_Box) (parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_4[1])),
    ((MR_Box) (parse_tree__decide_type_repn__make_type_repn_item_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_4[1])),
    ((MR_Box) (parse_tree__decide_type_repn__record_foreign_type_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_2[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_1[3]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_du_repn_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_3[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__decide_type_repn__pair__pti_pair_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_parse_tree__prog_item__type_ctor_info_foreign_type_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__decide_type_repn__bimap__pti_bimap_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__pair__pti_pair_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__decide_type_repn_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__pair__pti_pair_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_TypeInfo) (&parse_tree__decide_type_repn__list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__cord__pti_cord_1__plain_parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__pair__pti_pair_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_parse_tree__prog_item__type_ctor_info_foreign_type_repn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_type_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_one_or_more_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__pair__pti_pair_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_one_or_more_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__decide_type_repn__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__pair__pti_pair_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__tree234__pti_tree234_2__plain_libs__globals__type_ctor_info_foreign_language_0__plain_list__ti_one_or_more_1builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_one_or_more_1builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__decide_type_repn__bimap__pti_bimap_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_du_or_foreign_repn_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_du_repn_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_du_or_foreign_repn_0_0 = {
  (MR_String) "dofr_du",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_du_or_foreign_repn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_item__type_ctor_info_foreign_type_repn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_type_repn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__list__ti_one_or_more_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_item__type_ctor_info_foreign_type_repn_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_item__type_ctor_info_foreign_type_repn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__decide_type_repn__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_du_repn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_du_repn_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_du_or_foreign_repn_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__list__ti_one_or_more_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_item__type_ctor_info_foreign_type_repn_0),
  (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_du_repn_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_du_or_foreign_repn_0_1 = {
  (MR_String) "dofr_maybe_foreign",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_du_or_foreign_repn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_du_or_foreign_repn_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_du_or_foreign_repn_0_0
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_du_or_foreign_repn_0_1[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_du_or_foreign_repn_0_1
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_du_or_foreign_repn_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_du_or_foreign_repn_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_du_or_foreign_repn_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_du_or_foreign_repn_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_du_or_foreign_repn_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_du_or_foreign_repn_0_1
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_du_or_foreign_repn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____du_or_foreign_repn_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____du_or_foreign_repn_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "du_or_foreign_repn",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_du_or_foreign_repn_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_du_or_foreign_repn_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_du_or_foreign_repn_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_eqv_type_repn_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____eqv_type_repn_map_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____eqv_type_repn_map_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "eqv_type_repn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0parse_tree__prog_item__type_ctor_info_item_type_repn_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__decide_type_repn__list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_foreign_enum_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____foreign_enum_map_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____foreign_enum_map_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "foreign_enum_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0list__ti_list_1pair__ti_pair_2libs__globals__type_ctor_info_foreign_language_0list__ti_one_or_more_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_aligned_0_0 = {
  (MR_String) "not_word_aligned",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_aligned_0_1 = {
  (MR_String) "word_aligned",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_word_aligned_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_aligned_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_aligned_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_word_aligned_0[2] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_aligned_0_0,
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_functor_desc_maybe_word_aligned_0_1
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_word_aligned_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____maybe_word_aligned_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____maybe_word_aligned_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "maybe_word_aligned",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_name_ordered_maybe_word_aligned_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__enum_value_ordered_maybe_word_aligned_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_maybe_word_aligned_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_type_repn_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____type_repn_map_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____type_repn_map_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "type_repn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_unqual_type_ctor_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_unqual_type_ctor_0_0 = {
  (MR_String) "unqual_type_ctor",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__field_types_unqual_type_ctor_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_unqual_type_ctor_0_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_unqual_type_ctor_0_0
};

static const MR_DuPtagLayout parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_unqual_type_ctor_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_stag_ordered_unqual_type_ctor_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_unqual_type_ctor_0[1] = {
  &parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_functor_desc_unqual_type_ctor_0_0
};

static const MR_Integer parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_unqual_type_ctor_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____unqual_type_ctor_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____unqual_type_ctor_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "unqual_type_ctor",
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_name_ordered_unqual_type_ctor_0 },
  {     parse_tree__decide_type_repn__parse_tree__decide_type_repn__du_ptag_ordered_unqual_type_ctor_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__decide_type_repn__parse_tree__decide_type_repn__functor_number_map_unqual_type_ctor_0
};

static const MR_FA_TypeInfo_Struct2 parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_word_aligned_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__decide_type_repn____Unify____word_aligned_map_0_0_10001)),
  ((MR_Box) (parse_tree__decide_type_repn____Compare____word_aligned_map_0_0_10001)),
  (MR_String) "parse_tree.decide_type_repn",
  (MR_String) "word_aligned_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__decide_type_repn__tree234__ti_tree234_2parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_bool MR_CALL 
parse_tree__decide_type_repn__IntroducedFrom__pred__build_foreign_langs_name_map__468__1_3_p_0(
  MR_Word MercuryForeignBimap_21,
  MR_String HeadVar__2_40,
  MR_String * HeadVar__3_41)
{
  {
    MR_bool succeeded;
    MR_Box conv0_HeadVar__3_41;

    succeeded = mercury__bimap__forward_search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryForeignBimap_21, ((MR_Box) (HeadVar__2_40)), &conv0_HeadVar__3_41);
    if (succeeded)
    {
      *HeadVar__3_41 = ((MR_String) (conv0_HeadVar__3_41));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_aligned_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_aligned_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__decide_type_repn____Compare____unqual_type_ctor_0_0(
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
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____unqual_type_ctor_0_0(
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_word_aligned_0_0(
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
parse_tree__decide_type_repn____Unify____maybe_word_aligned_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__decide_type_repn____Compare____foreign_enum_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____foreign_enum_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____du_or_foreign_repn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        parse_tree__prog_item____Compare____du_repn_0_0(HeadVar__1_1, Var_22, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_14;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[8]), &SubResult1_14, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_13)));
        succeeded = (SubResult1_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY2_16)));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____du_or_foreign_repn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = parse_tree__prog_item____Unify____du_repn_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word TypeInfo_12_12;
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_12_12 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[9]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__record_foreign_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_UsedLangs_8;

    parse_tree__decide_type_repn__gather_used_foreign_languages_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_UsedLangs_8);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_UsedLangs_8));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__record_foreign_type_3_p_0(
  MR_Word ForeignTypeDefnInfo_4,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_34,
  MR_Word * STATE_VARIABLE_TypeRepnMap_35)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorSymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeDefnInfo_4, (MR_Integer) 0))));
    MR_Word TypeParams_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeDefnInfo_4, (MR_Integer) 1))));
    MR_Word ForeignTypeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeDefnInfo_4, (MR_Integer) 2))));
    MR_String TypeCtorName_12;
    MR_Word UnqualTypeCtor_13;
    MR_Integer Var_36;

    TypeCtorName_12 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeCtorSymName_6);
    Var_36 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[5]), TypeParams_7);
    {
      UnqualTypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnqualTypeCtor_13, 0) = ((MR_Box) (TypeCtorName_12));
      MR_hl_field(MR_mktag(0), UnqualTypeCtor_13, 1) = ((MR_Box) (Var_36));
    }
    switch (MR_tag((MR_Word) ForeignTypeDefn_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.record_foreign_type\'/3", (MR_String) "ForeignTypeDefnInfo not foreign");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.record_foreign_type\'/3", (MR_String) "ForeignTypeDefnInfo not foreign");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ForeignTypeDefn_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.record_foreign_type\'/3", (MR_String) "ForeignTypeDefnInfo not foreign");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignDetails_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ForeignTypeDefn_8, (MR_Integer) 1))));
              MR_Word LangType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDetails_14, (MR_Integer) 0))));
              MR_Word Assertions_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDetails_14, (MR_Integer) 2))));
              MR_String TypeName_18;
              MR_Word Lang_19;
              MR_Word Repn_20;
              MR_Word LangRepn_21;
              MR_Word OldTypeRepn_22;
              MR_Box conv0_OldTypeRepn_22;

              switch (MR_tag((MR_Word) LangType_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LangType_15, (MR_Integer) 0))));

                    TypeName_18 = (MR_String) (Var_42);
                    Lang_19 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LangType_15, (MR_Integer) 0))));

                    TypeName_18 = (MR_String) (Var_41);
                    Lang_19 = (MR_Integer) 2;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LangType_15, (MR_Integer) 0))));

                    TypeName_18 = (MR_String) (Var_40);
                    Lang_19 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    Lang_19 = (MR_Integer) 3;
                    TypeName_18 = (MR_String) "";
                  }
                  break;
              }
              {
                Repn_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Repn_20, 0) = ((MR_Box) (TypeName_18));
                MR_hl_field(MR_mktag(0), Repn_20, 1) = ((MR_Box) (Assertions_17));
              }
              {
                LangRepn_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), LangRepn_21, 0) = ((MR_Box) (Lang_19));
                MR_hl_field(MR_mktag(0), LangRepn_21, 1) = ((MR_Box) (Repn_20));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), STATE_VARIABLE_TypeRepnMap_0_34, ((MR_Box) (UnqualTypeCtor_13)), &conv0_OldTypeRepn_22);
              if (succeeded)
              {
                OldTypeRepn_22 = ((MR_Word) (conv0_OldTypeRepn_22));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word NewTypeRepn_25;

                if (((MR_tag((MR_Word) OldTypeRepn_22)) == (MR_Integer) 0))
                {
                  MR_Word DuRepn_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldTypeRepn_22, (MR_Integer) 0))));
                  MR_Word NewForeignLangRepns_24;
                  MR_Word Var_47;

                  {
                    NewForeignLangRepns_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), NewForeignLangRepns_24, 0) = ((MR_Box) (LangRepn_21));
                    MR_hl_field(MR_mktag(0), NewForeignLangRepns_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (DuRepn_23));
                  }
                  {
                    NewTypeRepn_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), NewTypeRepn_25, 0) = ((MR_Box) (NewForeignLangRepns_24));
                    MR_hl_field(MR_mktag(1), NewTypeRepn_25, 1) = ((MR_Box) (Var_47));
                  }
                }
                else
                {
                  MR_Word OldForeignLangRepns_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldTypeRepn_22, (MR_Integer) 0))));
                  MR_Word MaybeDuRepn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldTypeRepn_22, (MR_Integer) 1))));
                  MR_Word OldLangs_28;
                  MR_Word Var_44;
                  MR_Word Var_45;
                  MR_Box conv2_OldLangs_28;

                  Var_44 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[3]), OldForeignLangRepns_26);
                  Var_45 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[3]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[3]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[11]), Var_44, ((MR_Box) (Var_45)), &conv2_OldLangs_28);
                  OldLangs_28 = ((MR_Word) (conv2_OldLangs_28));
                  succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), OldLangs_28, ((MR_Box) (Lang_19)));
                  if (succeeded)
                    NewTypeRepn_25 = OldTypeRepn_22;
                  else
                  {
                    MR_Word NewForeignLangRepns_52;

                    NewForeignLangRepns_52 = mercury__list__one_or_more_cons_2_f_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[3]), ((MR_Box) (LangRepn_21)), OldForeignLangRepns_26);
                    {
                      NewTypeRepn_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NewTypeRepn_25, 0) = ((MR_Box) (NewForeignLangRepns_52));
                      MR_hl_field(MR_mktag(1), NewTypeRepn_25, 1) = ((MR_Box) (MaybeDuRepn_27));
                    }
                  }
                }
                mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), ((MR_Box) (UnqualTypeCtor_13)), ((MR_Box) (NewTypeRepn_25)), STATE_VARIABLE_TypeRepnMap_0_34, STATE_VARIABLE_TypeRepnMap_35);
              }
              else
              {
                MR_Word OoMLangRepns_29;
                MR_Word NewTypeRepn_55;

                {
                  OoMLangRepns_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), OoMLangRepns_29, 0) = ((MR_Box) (LangRepn_21));
                  MR_hl_field(MR_mktag(0), OoMLangRepns_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  NewTypeRepn_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewTypeRepn_55, 0) = ((MR_Box) (OoMLangRepns_29));
                  MR_hl_field(MR_mktag(1), NewTypeRepn_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), ((MR_Box) (UnqualTypeCtor_13)), ((MR_Box) (NewTypeRepn_55)), STATE_VARIABLE_TypeRepnMap_0_34, STATE_VARIABLE_TypeRepnMap_35);
              }
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__build_foreign_langs_name_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__3_41;

    succeeded = parse_tree__decide_type_repn__IntroducedFrom__pred__build_foreign_langs_name_map__468__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), &conv1_HeadVar__3_41);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_41));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__build_foreign_langs_name_map_6_p_0(
  MR_Word ModuleName_7,
  MR_Word CtorNames_8,
  MR_Word CtorNamesSet_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ForeignLangsNamesMap_0_30,
  MR_Word * STATE_VARIABLE_ForeignLangsNamesMap_31)
{
  {
    MR_bool succeeded;
    MR_Word Lang_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word OoMCtorSymNamesForeignNames_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_Box conv0_Var_13;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[4]), STATE_VARIABLE_ForeignLangsNamesMap_0_30, ((MR_Box) (Lang_10)), &conv0_Var_13);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
      *STATE_VARIABLE_ForeignLangsNamesMap_31 = STATE_VARIABLE_ForeignLangsNamesMap_0_30;
    else
    {
      MR_Word CtorSymNamesForeignNames_14;
      MR_Word SeenCtorNamesSet0_15;
      MR_Word SeenForeignNamesSet0_16;
      MR_Word BadQualCtorSymNamesCord0_17;
      MR_Word InvalidCtorSymNamesCord0_18;
      MR_Word RepeatedCtorNamesCord0_19;
      MR_Word RepeatedForeignNamesCord0_20;
      MR_Word MercuryForeignBimap_21;
      MR_Word SeenCtorNamesSet_22;
      MR_Word BadQualCtorSymNamesCord_23;
      MR_Word InvalidCtorSymNamesCord_24;
      MR_Word RepeatedCtorNamesCord_25;
      MR_Word RepeatedForeignNamesCord_26;
      MR_Word Var_32;
      MR_Word OoMForeignNames_29;
      MR_Word UnseenCtorNamesSet_27;
      MR_Word ForeignNames_28;
      MR_Word Var_33;

      CtorSymNamesForeignNames_14 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[5]), OoMCtorSymNamesForeignNames_11);
      SeenCtorNamesSet0_15 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      SeenForeignNamesSet0_16 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      BadQualCtorSymNamesCord0_17 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      InvalidCtorSymNamesCord0_18 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      RepeatedCtorNamesCord0_19 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      RepeatedForeignNamesCord0_20 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      Var_32 = mercury__bimap__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      hlds__add_foreign_enum__build_ctor_name_to_foreign_name_map_loop_16_p_0(ModuleName_7, CtorNamesSet_9, CtorSymNamesForeignNames_14, Var_32, &MercuryForeignBimap_21, SeenCtorNamesSet0_15, &SeenCtorNamesSet_22, SeenForeignNamesSet0_16, BadQualCtorSymNamesCord0_17, &BadQualCtorSymNamesCord_23, InvalidCtorSymNamesCord0_18, &InvalidCtorSymNamesCord_24, RepeatedCtorNamesCord0_19, &RepeatedCtorNamesCord_25, RepeatedForeignNamesCord0_20, &RepeatedForeignNamesCord_26);
      succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), BadQualCtorSymNamesCord_23);
      if (succeeded)
      {
        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), InvalidCtorSymNamesCord_24);
        if (succeeded)
        {
          succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedCtorNamesCord_25);
          if (succeeded)
          {
            succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RepeatedForeignNamesCord_26);
            if (succeeded)
            {
              mercury__set_tree234__difference_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorNamesSet_9, SeenCtorNamesSet_22, &UnseenCtorNamesSet_27);
              succeeded = mercury__set_tree234__is_non_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnseenCtorNamesSet_27);
              if (succeeded)
              {
                {
                  Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_4[2]));
                  MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__decide_type_repn__build_foreign_langs_name_map_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (MercuryForeignBimap_21));
                }
                succeeded = mercury__list__map_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_33, CtorNames_8, &ForeignNames_28);
                if (succeeded)
                  succeeded = mercury__list__list_to_one_or_more_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ForeignNames_28, &OoMForeignNames_29);
              }
            }
          }
        }
      }
      if (succeeded)
        mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[4]), ((MR_Box) (Lang_10)), ((MR_Box) (OoMForeignNames_29)), STATE_VARIABLE_ForeignLangsNamesMap_0_30, STATE_VARIABLE_ForeignLangsNamesMap_31);
      else
        *STATE_VARIABLE_ForeignLangsNamesMap_31 = STATE_VARIABLE_ForeignLangsNamesMap_0_30;
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_repn_if_simple_du_type_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ForeignLangsNamesMap_31;

    parse_tree__decide_type_repn__build_foreign_langs_name_map_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ForeignLangsNamesMap_31);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ForeignLangsNamesMap_31));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_repn_if_simple_du_type_13_p_0(
  MR_Word ModuleName_14,
  MR_Word ForeignEnumTypeCtors_15,
  MR_Word TypeDefnInfo_16,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_70,
  MR_Word * STATE_VARIABLE_TypeRepnMap_71,
  MR_Word STATE_VARIABLE_WordAlignedMap_0_72,
  MR_Word * STATE_VARIABLE_WordAlignedMap_73,
  MR_Word STATE_VARIABLE_DeferredForeignTypeDefns_0_74,
  MR_Word * STATE_VARIABLE_DeferredForeignTypeDefns_75,
  MR_Word STATE_VARIABLE_EqvTypeMap_0_76,
  MR_Word * STATE_VARIABLE_EqvTypeMap_77,
  MR_Word STATE_VARIABLE_TypeSet_0_78,
  MR_Word * STATE_VARIABLE_TypeSet_79)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_16, (MR_Integer) 0))));
    MR_Word TypeParams_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_16, (MR_Integer) 1))));
    MR_Word TypeDefn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_16, (MR_Integer) 2))));
    MR_Word TVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_16, (MR_Integer) 3))));
    MR_String TypeCtorName_30;
    MR_Integer TypeCtorArity_31;
    MR_Word UnqualTypeCtor_32;

    if (((MR_tag((MR_Word) TypeCtorSymName_22)) == (MR_Integer) 1))
      TypeCtorName_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_22, (MR_Integer) 1))));
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.decide_type_repn.decide_repn_if_simple_du_type\'/13", (MR_String) "unqualified TypeCtorSymName");
        return;
      }
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[5]), TypeParams_23, &TypeCtorArity_31);
    {
      UnqualTypeCtor_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnqualTypeCtor_32, 0) = ((MR_Box) (TypeCtorName_30));
      MR_hl_field(MR_mktag(0), UnqualTypeCtor_32, 1) = ((MR_Box) (TypeCtorArity_31));
    }
    switch (MR_tag((MR_Word) TypeDefn_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DuDetails_33 = (MR_Word) ((MR_Word) (TypeDefn_24));
          MR_Word OoMCtors_34;
          MR_Word MaybeCanonical_35;
          MR_Word HeadCtor_37;
          MR_Word TailCtors_38;
          MR_Word WordAligned_49;

          mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), ((MR_Box) (UnqualTypeCtor_32)), STATE_VARIABLE_TypeSet_0_78, STATE_VARIABLE_TypeSet_79);
          OoMCtors_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDetails_33, (MR_Integer) 0))));
          MaybeCanonical_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDetails_33, (MR_Integer) 1))));
          HeadCtor_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_34, (MR_Integer) 0))));
          TailCtors_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_34, (MR_Integer) 1))));
          if ((TailCtors_38 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MaybeExistConstraints_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_37, (MR_Integer) 1))));
            MR_Word SingleCtorSymName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_37, (MR_Integer) 2))));
            MR_Word Args_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_37, (MR_Integer) 3))));
            MR_Integer Arity_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor_37, (MR_Integer) 4))));
            MR_String SingleCtorName_46;

            succeeded = parse_tree__decide_type_repn__ctor_is_constant_2_p_0(HeadCtor_37, &SingleCtorName_46);
            if (succeeded)
            {
              MR_Word DirectDummyRepn_47 = (MR_Word) (SingleCtorName_46);
              MR_Word DuRepn_48;

              {
                DuRepn_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), DuRepn_48, 0) = ((MR_Box) (DirectDummyRepn_47));
              }
              parse_tree__decide_type_repn__add_du_repn_to_type_map_4_p_0(UnqualTypeCtor_32, DuRepn_48, STATE_VARIABLE_TypeRepnMap_0_70, STATE_VARIABLE_TypeRepnMap_71);
              WordAligned_49 = (MR_Integer) 0;
            }
            else
            {
              MR_Word Var_95;

              succeeded = (MaybeExistConstraints_41 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (Arity_44 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (MaybeCanonical_35 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (Args_43 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_43, (MR_Integer) 1))));
                      succeeded = (Var_95 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word NotagRepn_51;
                MR_String Var_96;
                MR_Word DuRepn_99;

                Var_96 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleCtorSymName_42);
                NotagRepn_51 = (MR_Word) (Var_96);
                {
                  DuRepn_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), DuRepn_99, 0) = ((MR_Box) (NotagRepn_51));
                }
                parse_tree__decide_type_repn__add_du_repn_to_type_map_4_p_0(UnqualTypeCtor_32, DuRepn_99, STATE_VARIABLE_TypeRepnMap_0_70, STATE_VARIABLE_TypeRepnMap_71);
                WordAligned_49 = (MR_Integer) 0;
              }
              else
              {
                succeeded = (TypeCtorArity_31 == (MR_Integer) 0);
                if (succeeded)
                  WordAligned_49 = (MR_Integer) 1;
                else
                  WordAligned_49 = (MR_Integer) 0;
                *STATE_VARIABLE_TypeRepnMap_71 = STATE_VARIABLE_TypeRepnMap_0_70;
              }
            }
          }
          else
          {
            MR_String HeadName_54;
            MR_Word TailNames_55;
            MR_Word Ctor_119;
            MR_Word Ctors_120;
            MR_String Name_121;
            MR_Word Names_122;
            MR_Word MaybeExistConstraints_126;
            MR_Word SymName_127;
            MR_Word Args_128;
            MR_Integer Arity_129;

            succeeded = parse_tree__decide_type_repn__ctor_is_constant_2_p_0(HeadCtor_37, &HeadName_54);
            if (succeeded)
            {
              Ctor_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_38, (MR_Integer) 0))));
              Ctors_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailCtors_38, (MR_Integer) 1))));
              MaybeExistConstraints_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_119, (MR_Integer) 1))));
              SymName_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_119, (MR_Integer) 2))));
              Args_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_119, (MR_Integer) 3))));
              Arity_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_119, (MR_Integer) 4))));
              succeeded = (MaybeExistConstraints_126 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (Args_128 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (Arity_129 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Name_121 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_127);
                    succeeded = parse_tree__decide_type_repn__ctors_are_all_constants_2_p_0(Ctors_120, &Names_122);
                    if (succeeded)
                    {
                      {
                        TailNames_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), TailNames_55, 0) = ((MR_Box) (Name_121));
                        MR_hl_field(MR_mktag(1), TailNames_55, 1) = ((MR_Box) (Names_122));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word ForeignLangsNames_60;
              MR_Word OoMNames_61;
              MR_Word EnumRepn_62;
              MR_Word DuRepn_101;
              MR_Word ForeignTypeCtorEntry_56;
              MR_Box conv0_ForeignTypeCtorEntry_56;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[7]), ForeignEnumTypeCtors_15, ((MR_Box) (UnqualTypeCtor_32)), &conv0_ForeignTypeCtorEntry_56);
              if (succeeded)
              {
                ForeignTypeCtorEntry_56 = ((MR_Word) (conv0_ForeignTypeCtorEntry_56));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Names_57;
                MR_Word NamesSet_58;
                MR_Word ForeignLangsNamesMap_59;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Box conv2_ForeignLangsNamesMap_59;

                {
                  Names_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Names_57, 0) = ((MR_Box) (HeadName_54));
                  MR_hl_field(MR_mktag(1), Names_57, 1) = ((MR_Box) (TailNames_55));
                }
                mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Names_57, &NamesSet_58);
                {
                  Var_91 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_7[0]));
                  MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (parse_tree__decide_type_repn__decide_repn_if_simple_du_type_13_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) (ModuleName_14));
                  MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) (Names_57));
                  MR_hl_field(MR_mktag(0), Var_91, 5) = ((MR_Box) (NamesSet_58));
                }
                Var_92 = mercury__map__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[4]));
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[6]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[7]), Var_91, ForeignTypeCtorEntry_56, ((MR_Box) (Var_92)), &conv2_ForeignLangsNamesMap_59);
                ForeignLangsNamesMap_59 = ((MR_Word) (conv2_ForeignLangsNamesMap_59));
                mercury__map__to_assoc_list_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[4]), ForeignLangsNamesMap_59, &ForeignLangsNames_60);
              }
              else
                ForeignLangsNames_60 = (MR_Word) ((MR_Unsigned) 0U);
              {
                OoMNames_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), OoMNames_61, 0) = ((MR_Box) (HeadName_54));
                MR_hl_field(MR_mktag(0), OoMNames_61, 1) = ((MR_Box) (TailNames_55));
              }
              {
                EnumRepn_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), EnumRepn_62, 0) = ((MR_Box) (OoMNames_61));
                MR_hl_field(MR_mktag(0), EnumRepn_62, 1) = ((MR_Box) (ForeignLangsNames_60));
              }
              DuRepn_101 = (MR_Word) ((MR_Word) (EnumRepn_62));
              parse_tree__decide_type_repn__add_du_repn_to_type_map_4_p_0(UnqualTypeCtor_32, DuRepn_101, STATE_VARIABLE_TypeRepnMap_0_70, STATE_VARIABLE_TypeRepnMap_71);
            }
            else
              *STATE_VARIABLE_TypeRepnMap_71 = STATE_VARIABLE_TypeRepnMap_0_70;
            WordAligned_49 = (MR_Integer) 0;
          }
          parse_tree__decide_type_repn__record_type_word_alignment_4_p_0(UnqualTypeCtor_32, WordAligned_49, STATE_VARIABLE_WordAlignedMap_0_72, STATE_VARIABLE_WordAlignedMap_73);
          *STATE_VARIABLE_DeferredForeignTypeDefns_75 = STATE_VARIABLE_DeferredForeignTypeDefns_0_74;
          *STATE_VARIABLE_EqvTypeMap_77 = STATE_VARIABLE_EqvTypeMap_0_76;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_TypeRepnMap_71 = STATE_VARIABLE_TypeRepnMap_0_70;
          *STATE_VARIABLE_WordAlignedMap_73 = STATE_VARIABLE_WordAlignedMap_0_72;
          *STATE_VARIABLE_DeferredForeignTypeDefns_75 = STATE_VARIABLE_DeferredForeignTypeDefns_0_74;
          *STATE_VARIABLE_EqvTypeMap_77 = STATE_VARIABLE_EqvTypeMap_0_76;
          *STATE_VARIABLE_TypeSet_79 = STATE_VARIABLE_TypeSet_0_78;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word EqvType_65;
          MR_Word TypeRepn_66;
          MR_Word EqvItem_67;
          MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn_24, (MR_Integer) 0))));
          MR_Word Var_84;
          MR_Word _MaybeOldEqvItem_68;

          EqvType_65 = (MR_Word) (Var_82);
          mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), ((MR_Box) (UnqualTypeCtor_32)), STATE_VARIABLE_TypeSet_0_78, STATE_VARIABLE_TypeSet_79);
          {
            TypeRepn_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), TypeRepn_66, 0) = ((MR_Box) (EqvType_65));
          }
          Var_84 = mercury__term__context_init_0_f_0();
          {
            EqvItem_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), EqvItem_67, 0) = ((MR_Box) (TypeCtorSymName_22));
            MR_hl_field(MR_mktag(0), EqvItem_67, 1) = ((MR_Box) (TypeParams_23));
            MR_hl_field(MR_mktag(0), EqvItem_67, 2) = ((MR_Box) (TypeRepn_66));
            MR_hl_field(MR_mktag(0), EqvItem_67, 3) = ((MR_Box) (TVarSet_25));
            MR_hl_field(MR_mktag(0), EqvItem_67, 4) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), EqvItem_67, 5) = ((MR_Box) ((MR_Integer) -1));
          }
          mercury__map__search_insert_5_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), ((MR_Box) (UnqualTypeCtor_32)), ((MR_Box) (EqvItem_67)), &_MaybeOldEqvItem_68, STATE_VARIABLE_EqvTypeMap_0_76, STATE_VARIABLE_EqvTypeMap_77);
          *STATE_VARIABLE_TypeRepnMap_71 = STATE_VARIABLE_TypeRepnMap_0_70;
          *STATE_VARIABLE_WordAlignedMap_73 = STATE_VARIABLE_WordAlignedMap_0_72;
          *STATE_VARIABLE_DeferredForeignTypeDefns_75 = STATE_VARIABLE_DeferredForeignTypeDefns_0_74;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_24, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), ((MR_Box) (UnqualTypeCtor_32)), STATE_VARIABLE_TypeSet_0_78, STATE_VARIABLE_TypeSet_79);
              *STATE_VARIABLE_TypeRepnMap_71 = STATE_VARIABLE_TypeRepnMap_0_70;
              *STATE_VARIABLE_WordAlignedMap_73 = STATE_VARIABLE_WordAlignedMap_0_72;
              *STATE_VARIABLE_DeferredForeignTypeDefns_75 = STATE_VARIABLE_DeferredForeignTypeDefns_0_74;
              *STATE_VARIABLE_EqvTypeMap_77 = STATE_VARIABLE_EqvTypeMap_0_76;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), ((MR_Box) (UnqualTypeCtor_32)), STATE_VARIABLE_TypeSet_0_78, STATE_VARIABLE_TypeSet_79);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_DeferredForeignTypeDefns_75 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeDefnInfo_16));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_DeferredForeignTypeDefns_0_74));
              }
              *STATE_VARIABLE_TypeRepnMap_71 = STATE_VARIABLE_TypeRepnMap_0_70;
              *STATE_VARIABLE_WordAlignedMap_73 = STATE_VARIABLE_WordAlignedMap_0_72;
              *STATE_VARIABLE_EqvTypeMap_77 = STATE_VARIABLE_EqvTypeMap_0_76;
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__ctor_is_constant_2_p_0(
  MR_Word Ctor_3,
  MR_String * Name_4)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 1))));
    MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 2))));
    MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 3))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 4))));

    succeeded = (MaybeExistConstraints_6 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Args_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Arity_9 == (MR_Integer) 0);
        if (succeeded)
        {
          *Name_4 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_7);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__ctors_are_all_constants_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Ctor_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Name_5;
      MR_Word Names_6;
      MR_Word MaybeExistConstraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 1))));
      MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 2))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 3))));
      MR_Integer Arity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 4))));

      succeeded = (MaybeExistConstraints_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Arity_13 == (MR_Integer) 0);
          if (succeeded)
          {
            Name_5 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
            succeeded = parse_tree__decide_type_repn__ctors_are_all_constants_2_p_0(Ctors_4, &Names_6);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_5));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Names_6));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__record_type_word_alignment_4_p_0(
  MR_Word UnqualTypeCtor_5,
  MR_Word WordAligned_6,
  MR_Word STATE_VARIABLE_WordAlignedMap_0_9,
  MR_Word * STATE_VARIABLE_WordAlignedMap_10)
{
  {
    MR_bool succeeded;
    MR_Word OldWordAligned_8;
    MR_Box conv0_OldWordAligned_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0), STATE_VARIABLE_WordAlignedMap_0_9, ((MR_Box) (UnqualTypeCtor_5)), &conv0_OldWordAligned_8);
    if (succeeded)
    {
      OldWordAligned_8 = ((MR_Word) (conv0_OldWordAligned_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (WordAligned_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (OldWordAligned_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_WordAlignedMap_10 = STATE_VARIABLE_WordAlignedMap_0_9;
              break;
            case (MR_Integer) 1:
              mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0), ((MR_Box) (UnqualTypeCtor_5)), ((MR_Box) (WordAligned_6)), STATE_VARIABLE_WordAlignedMap_0_9, STATE_VARIABLE_WordAlignedMap_10);
              break;
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_WordAlignedMap_10 = STATE_VARIABLE_WordAlignedMap_0_9;
          break;
      }
    else
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0), ((MR_Box) (UnqualTypeCtor_5)), ((MR_Box) (WordAligned_6)), STATE_VARIABLE_WordAlignedMap_0_9, STATE_VARIABLE_WordAlignedMap_10);
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__add_du_repn_to_type_map_4_p_0(
  MR_Word UnqualTypeCtor_5,
  MR_Word DuRepn_6,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_14,
  MR_Word * STATE_VARIABLE_TypeRepnMap_15)
{
  {
    MR_bool succeeded;
    MR_Word OldTypeRepn_8;
    MR_Box conv0_OldTypeRepn_8;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), STATE_VARIABLE_TypeRepnMap_0_14, ((MR_Box) (UnqualTypeCtor_5)), &conv0_OldTypeRepn_8);
    if (succeeded)
    {
      OldTypeRepn_8 = ((MR_Word) (conv0_OldTypeRepn_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      if (((MR_tag((MR_Word) OldTypeRepn_8)) == (MR_Integer) 0))
        *STATE_VARIABLE_TypeRepnMap_15 = STATE_VARIABLE_TypeRepnMap_0_14;
      else
      {
        MR_Word OldForeignLangRepns_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldTypeRepn_8, (MR_Integer) 0))));
        MR_Word OldMaybeDuRepn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldTypeRepn_8, (MR_Integer) 1))));

        if ((OldMaybeDuRepn_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word NewTypeRepn_12;
          MR_Word Var_16;

          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (DuRepn_6));
          }
          {
            NewTypeRepn_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NewTypeRepn_12, 0) = ((MR_Box) (OldForeignLangRepns_10));
            MR_hl_field(MR_mktag(1), NewTypeRepn_12, 1) = ((MR_Box) (Var_16));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), ((MR_Box) (UnqualTypeCtor_5)), ((MR_Box) (NewTypeRepn_12)), STATE_VARIABLE_TypeRepnMap_0_14, STATE_VARIABLE_TypeRepnMap_15);
        }
        else
          *STATE_VARIABLE_TypeRepnMap_15 = STATE_VARIABLE_TypeRepnMap_0_14;
      }
    else
    {
      MR_Word NewTypeRepn_19;

      {
        NewTypeRepn_19 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewTypeRepn_19, 0) = ((MR_Box) (DuRepn_6));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), ((MR_Box) (UnqualTypeCtor_5)), ((MR_Box) (NewTypeRepn_19)), STATE_VARIABLE_TypeRepnMap_0_14, STATE_VARIABLE_TypeRepnMap_15);
    }
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__maybe_make_word_aligned_item_5_p_0(
  MR_Word ModuleName_6,
  MR_Word UnqualTypeCtor_7,
  MR_Word WordAligned_8,
  MR_Word STATE_VARIABLE_Items_0_17,
  MR_Word * STATE_VARIABLE_Items_18)
{
  switch (WordAligned_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Items_18 = STATE_VARIABLE_Items_0_17;
      break;
    case (MR_Integer) 1:
      {
        MR_String TypeName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), UnqualTypeCtor_7, (MR_Integer) 0))));
        MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), UnqualTypeCtor_7, (MR_Integer) 1))));
        MR_Word TypeCtorSymName_12;
        MR_Word TVarSet0_13;
        MR_Word TypeParams_14;
        MR_Word TVarSet_15;
        MR_Word Item_16;
        MR_Word Var_20;

        {
          TypeCtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TypeCtorSymName_12, 0) = ((MR_Box) (ModuleName_6));
          MR_hl_field(MR_mktag(1), TypeCtorSymName_12, 1) = ((MR_Box) (TypeName_10));
        }
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_13);
        mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_11, &TypeParams_14, TVarSet0_13, &TVarSet_15);
        Var_20 = mercury__term__context_init_0_f_0();
        {
          Item_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Item_16, 0) = ((MR_Box) (TypeCtorSymName_12));
          MR_hl_field(MR_mktag(0), Item_16, 1) = ((MR_Box) (TypeParams_14));
          MR_hl_field(MR_mktag(0), Item_16, 2) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(0), Item_16, 3) = ((MR_Box) (TVarSet_15));
          MR_hl_field(MR_mktag(0), Item_16, 4) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), Item_16, 5) = ((MR_Box) ((MR_Integer) -1));
        }
        *STATE_VARIABLE_Items_18 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), STATE_VARIABLE_Items_0_17, ((MR_Box) (Item_16)));
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__is_non_overridden_foreign_enum_2_p_0(
  MR_Word OverriddenLangs_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Lang_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), OverriddenLangs_3, ((MR_Box) (Lang_4)));
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__gather_used_foreign_languages_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedLangs_0_7,
  MR_Word * STATE_VARIABLE_UsedLangs_8)
{
  {
    MR_Word Lang_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_4)), STATE_VARIABLE_UsedLangs_0_7, STATE_VARIABLE_UsedLangs_8);
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn__make_type_repn_item_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__decide_type_repn__is_non_overridden_foreign_enum_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__make_type_repn_item_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_UsedLangs_8;

    parse_tree__decide_type_repn__gather_used_foreign_languages_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_UsedLangs_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_UsedLangs_8));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__make_type_repn_item_5_p_0(
  MR_Word ModuleName_6,
  MR_Word UnqualTypeCtor_7,
  MR_Word Repn_8,
  MR_Word STATE_VARIABLE_Items_0_35,
  MR_Word * STATE_VARIABLE_Items_36)
{
  {
    MR_bool succeeded;
    MR_String TypeName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), UnqualTypeCtor_7, (MR_Integer) 0))));
    MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), UnqualTypeCtor_7, (MR_Integer) 1))));
    MR_Word TypeCtorSymName_12;
    MR_Word TVarSet0_13;
    MR_Word TypeParams_14;
    MR_Word TVarSet_15;
    MR_Word TypeRepn_17;
    MR_Word Item_34;
    MR_Word Var_40;

    {
      TypeCtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCtorSymName_12, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(1), TypeCtorSymName_12, 1) = ((MR_Box) (TypeName_10));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet0_13);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_11, &TypeParams_14, TVarSet0_13, &TVarSet_15);
    if (((MR_tag((MR_Word) Repn_8)) == (MR_Integer) 0))
    {
      MR_Word DuRepn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_8, (MR_Integer) 0))));

      {
        TypeRepn_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeRepn_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), TypeRepn_17, 1) = ((MR_Box) (DuRepn_16));
      }
    }
    else
    {
      MR_Word OoMLangRepns_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Repn_8, (MR_Integer) 0))));
      MR_Word MaybeDuRepn0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Repn_8, (MR_Integer) 1))));
      MR_Word MaybeDuRepn_20;

      if ((MaybeDuRepn0_19 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeDuRepn_20 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word DuRepn0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDuRepn0_19, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) DuRepn0_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word EnumRepn0_22 = (MR_Word) ((MR_Word) (DuRepn0_21));
              MR_Word HeadLangRepn_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMLangRepns_18, (MR_Integer) 0))));
              MR_Word TailLangsRepns_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMLangRepns_18, (MR_Integer) 1))));
              MR_Word UsedLangs1_25;
              MR_Word UsedLangs_26;
              MR_Word EnumFunctors_27;
              MR_Word ForeignEnums0_28;
              MR_Word ForeignEnums_29;
              MR_Word EnumRepn_30;
              MR_Word Var_37;
              MR_Word Var_39;
              MR_Word DuRepn_43;
              MR_Word Lang_60;
              MR_Box conv1_UsedLangs_26;

              Var_37 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
              Lang_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadLangRepn_23, (MR_Integer) 0))));
              mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_60)), Var_37, &UsedLangs1_25);
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[3]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[3]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[10]), TailLangsRepns_24, ((MR_Box) (UsedLangs1_25)), &conv1_UsedLangs_26);
              UsedLangs_26 = ((MR_Word) (conv1_UsedLangs_26));
              EnumFunctors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EnumRepn0_22, (MR_Integer) 0))));
              ForeignEnums0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EnumRepn0_22, (MR_Integer) 1))));
              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__decide_type_repn__make_type_repn_item_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (UsedLangs_26));
              }
              mercury__list__filter_3_p_0((MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[4]), Var_39, ForeignEnums0_28, &ForeignEnums_29);
              {
                EnumRepn_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), EnumRepn_30, 0) = ((MR_Box) (EnumFunctors_27));
                MR_hl_field(MR_mktag(0), EnumRepn_30, 1) = ((MR_Box) (ForeignEnums_29));
              }
              DuRepn_43 = (MR_Word) ((MR_Word) (EnumRepn_30));
              {
                MaybeDuRepn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeDuRepn_20, 0) = ((MR_Box) (DuRepn_43));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            MaybeDuRepn_20 = MaybeDuRepn0_19;
            break;
        }
      }
      {
        TypeRepn_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeRepn_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), TypeRepn_17, 1) = ((MR_Box) (OoMLangRepns_18));
        MR_hl_field(MR_mktag(3), TypeRepn_17, 2) = ((MR_Box) (MaybeDuRepn_20));
      }
    }
    Var_40 = mercury__term__context_init_0_f_0();
    {
      Item_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Item_34, 0) = ((MR_Box) (TypeCtorSymName_12));
      MR_hl_field(MR_mktag(0), Item_34, 1) = ((MR_Box) (TypeParams_14));
      MR_hl_field(MR_mktag(0), Item_34, 2) = ((MR_Box) (TypeRepn_17));
      MR_hl_field(MR_mktag(0), Item_34, 3) = ((MR_Box) (TVarSet_15));
      MR_hl_field(MR_mktag(0), Item_34, 4) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Item_34, 5) = ((MR_Box) ((MR_Integer) -1));
    }
    *STATE_VARIABLE_Items_36 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), STATE_VARIABLE_Items_0_35, ((MR_Box) (Item_34)));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv19_STATE_VARIABLE_Items_18;

    parse_tree__decide_type_repn__maybe_make_word_aligned_item_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv19_STATE_VARIABLE_Items_18);
    *wrapper_arg_4 = ((MR_Box) (conv19_STATE_VARIABLE_Items_18));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_STATE_VARIABLE_Items_36;

    parse_tree__decide_type_repn__make_type_repn_item_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv17_STATE_VARIABLE_Items_36);
    *wrapper_arg_4 = ((MR_Box) (conv17_STATE_VARIABLE_Items_36));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_STATE_VARIABLE_TypeRepnMap_35;

    parse_tree__decide_type_repn__record_foreign_type_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_TypeRepnMap_35);
    *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_TypeRepnMap_35));
  }
}

static void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_TypeRepnMap_71;
    MR_Word conv3_STATE_VARIABLE_WordAlignedMap_73;
    MR_Word conv2_STATE_VARIABLE_DeferredForeignTypeDefns_75;
    MR_Word conv1_STATE_VARIABLE_EqvTypeMap_77;
    MR_Word conv0_STATE_VARIABLE_TypeSet_79;

    parse_tree__decide_type_repn__decide_repn_if_simple_du_type_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_TypeRepnMap_71, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_WordAlignedMap_73, ((MR_Word) (wrapper_arg_6)), &conv2_STATE_VARIABLE_DeferredForeignTypeDefns_75, ((MR_Word) (wrapper_arg_8)), &conv1_STATE_VARIABLE_EqvTypeMap_77, ((MR_Word) (wrapper_arg_10)), &conv0_STATE_VARIABLE_TypeSet_79);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_TypeRepnMap_71));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_WordAlignedMap_73));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_DeferredForeignTypeDefns_75));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_EqvTypeMap_77));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_TypeSet_79));
  }
}

void MR_CALL 
parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0(
  MR_Word ModuleName_7,
  MR_Word IntTypeDefns_8,
  MR_Word ImpTypeDefns_9,
  MR_Word ForeignEnumTypeCtors_10,
  MR_Word * IntItems_11,
  MR_Word * NonIntItems_12)
{
  {
    MR_Word ImpDuTypeRepnMap_13;
    MR_Word ImpWordAlignedMap_14;
    MR_Word ImpForeignTypeDefns_15;
    MR_Word ImpEqvTypeMap_16;
    MR_Word DuTypeRepnMap_18;
    MR_Word WordAlignedMap_19;
    MR_Word AllForeignTypeDefns_20;
    MR_Word AllEqvTypeMap_21;
    MR_Word IntTypeSet_22;
    MR_Word DuForeignTypeRepnMap_23;
    MR_Word IntTypes_24;
    MR_Word IntDuForeignTypeRepnMap_25;
    MR_Word NonIntDuForeignTypeRepnMap_26;
    MR_Word IntWordAlignedMap_27;
    MR_Word NonIntWordAlignedMap_28;
    MR_Word IntDuForeignItemsCord0_29;
    MR_Word IntDuForeignItemsCord_30;
    MR_Word NonIntDuForeignItemsCord0_31;
    MR_Word NonIntDuForeignItemsCord_32;
    MR_Word IntDuForeignItems_33;
    MR_Word SortedDuForeignTypeCtors_35;
    MR_Word AllEqvOnlyTypeMap_37;
    MR_Word AllEqvTypeItems_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Box conv9_ImpDuTypeRepnMap_13;
    MR_Box conv8_ImpWordAlignedMap_14;
    MR_Box conv7_ImpForeignTypeDefns_15;
    MR_Box conv6_ImpEqvTypeMap_16;
    MR_Box conv5__ImpTypeSet_17;
    MR_Box conv14_DuTypeRepnMap_18;
    MR_Box conv13_WordAlignedMap_19;
    MR_Box conv12_AllForeignTypeDefns_20;
    MR_Box conv11_AllEqvTypeMap_21;
    MR_Box conv10_IntTypeSet_22;
    MR_Box conv16_DuForeignTypeRepnMap_23;
    MR_Box conv18_IntDuForeignItemsCord0_29;
    MR_Box conv20_IntDuForeignItemsCord_30;
    MR_Box conv21_NonIntDuForeignItemsCord0_31;
    MR_Box conv22_NonIntDuForeignItemsCord_32;
    MR_Word _AllDuAndEqvTypeMap_36;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (ForeignEnumTypeCtors_10));
    }
    Var_40 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0));
    Var_41 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0));
    Var_43 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0));
    Var_44 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0));
    mercury__list__foldl5_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), Var_39, ImpTypeDefns_9, ((MR_Box) (Var_40)), &conv9_ImpDuTypeRepnMap_13, ((MR_Box) (Var_41)), &conv8_ImpWordAlignedMap_14, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_ImpForeignTypeDefns_15, ((MR_Box) (Var_43)), &conv6_ImpEqvTypeMap_16, ((MR_Box) (Var_44)), &conv5__ImpTypeSet_17);
    ImpDuTypeRepnMap_13 = ((MR_Word) (conv9_ImpDuTypeRepnMap_13));
    ImpWordAlignedMap_14 = ((MR_Word) (conv8_ImpWordAlignedMap_14));
    ImpForeignTypeDefns_15 = ((MR_Word) (conv7_ImpForeignTypeDefns_15));
    ImpEqvTypeMap_16 = ((MR_Word) (conv6_ImpEqvTypeMap_16));
    Var_46 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0));
    mercury__list__foldl5_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[1]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[2]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[1]), Var_39, IntTypeDefns_8, ((MR_Box) (ImpDuTypeRepnMap_13)), &conv14_DuTypeRepnMap_18, ((MR_Box) (ImpWordAlignedMap_14)), &conv13_WordAlignedMap_19, ((MR_Box) (ImpForeignTypeDefns_15)), &conv12_AllForeignTypeDefns_20, ((MR_Box) (ImpEqvTypeMap_16)), &conv11_AllEqvTypeMap_21, ((MR_Box) (Var_46)), &conv10_IntTypeSet_22);
    DuTypeRepnMap_18 = ((MR_Word) (conv14_DuTypeRepnMap_18));
    WordAlignedMap_19 = ((MR_Word) (conv13_WordAlignedMap_19));
    AllForeignTypeDefns_20 = ((MR_Word) (conv12_AllForeignTypeDefns_20));
    AllEqvTypeMap_21 = ((MR_Word) (conv11_AllEqvTypeMap_21));
    IntTypeSet_22 = ((MR_Word) (conv10_IntTypeSet_22));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[0]), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_1[9]), AllForeignTypeDefns_20, ((MR_Box) (DuTypeRepnMap_18)), &conv16_DuForeignTypeRepnMap_23);
    DuForeignTypeRepnMap_23 = ((MR_Word) (conv16_DuForeignTypeRepnMap_23));
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), IntTypeSet_22, &IntTypes_24);
    mercury__map__select_unselect_sorted_list_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), DuForeignTypeRepnMap_23, IntTypes_24, &IntDuForeignTypeRepnMap_25, &NonIntDuForeignTypeRepnMap_26);
    mercury__map__select_unselect_sorted_list_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0), WordAlignedMap_19, IntTypes_24, &IntWordAlignedMap_27, &NonIntWordAlignedMap_28);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (ModuleName_7));
    }
    Var_49 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), Var_48, IntDuForeignTypeRepnMap_25, ((MR_Box) (Var_49)), &conv18_IntDuForeignItemsCord0_29);
    IntDuForeignItemsCord0_29 = ((MR_Word) (conv18_IntDuForeignItemsCord0_29));
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__decide_type_repn_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__decide_type_repn__decide_repns_for_simple_types_6_p_0_4));
      MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (ModuleName_7));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), Var_50, IntWordAlignedMap_27, ((MR_Box) (IntDuForeignItemsCord0_29)), &conv20_IntDuForeignItemsCord_30);
    IntDuForeignItemsCord_30 = ((MR_Word) (conv20_IntDuForeignItemsCord_30));
    Var_52 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), Var_48, NonIntDuForeignTypeRepnMap_26, ((MR_Box) (Var_52)), &conv21_NonIntDuForeignItemsCord0_31);
    NonIntDuForeignItemsCord0_31 = ((MR_Word) (conv21_NonIntDuForeignItemsCord0_31));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0), (MR_Word) (&parse_tree__decide_type_repn_scalar_common_2[2]), Var_50, NonIntWordAlignedMap_28, ((MR_Box) (NonIntDuForeignItemsCord0_31)), &conv22_NonIntDuForeignItemsCord_32);
    NonIntDuForeignItemsCord_32 = ((MR_Word) (conv22_NonIntDuForeignItemsCord_32));
    IntDuForeignItems_33 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), IntDuForeignItemsCord_30);
    *NonIntItems_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), NonIntDuForeignItemsCord_32);
    mercury__map__sorted_keys_2_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0), DuForeignTypeRepnMap_23, &SortedDuForeignTypeCtors_35);
    mercury__map__select_unselect_sorted_list_4_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), AllEqvTypeMap_21, SortedDuForeignTypeCtors_35, &_AllDuAndEqvTypeMap_36, &AllEqvOnlyTypeMap_37);
    mercury__map__values_2_p_0((MR_Word) (&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), AllEqvOnlyTypeMap_37, &AllEqvTypeItems_38);
    *IntItems_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), IntDuForeignItems_33, AllEqvTypeItems_38);
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____du_or_foreign_repn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____du_or_foreign_repn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____du_or_foreign_repn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____du_or_foreign_repn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____eqv_type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____eqv_type_repn_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____eqv_type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____eqv_type_repn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____foreign_enum_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____foreign_enum_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____foreign_enum_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____foreign_enum_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____maybe_word_aligned_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____maybe_word_aligned_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____maybe_word_aligned_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____maybe_word_aligned_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____type_repn_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____type_repn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____unqual_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____unqual_type_ctor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____unqual_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____unqual_type_ctor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__decide_type_repn____Unify____word_aligned_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__decide_type_repn____Unify____word_aligned_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__decide_type_repn____Compare____word_aligned_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__decide_type_repn____Compare____word_aligned_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__decide_type_repn__init(void)
{
}

void mercury__parse_tree__decide_type_repn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_du_or_foreign_repn_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_eqv_type_repn_map_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_foreign_enum_map_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_maybe_word_aligned_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_type_repn_map_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_unqual_type_ctor_0);
	MR_register_type_ctor_info(&parse_tree__decide_type_repn__parse_tree__decide_type_repn__type_ctor_info_word_aligned_map_0);
}

void mercury__parse_tree__decide_type_repn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__decide_type_repn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.decide_type_repn.
