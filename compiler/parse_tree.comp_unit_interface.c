/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version rotd-2023-07-25
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


// :- module parse_tree.comp_unit_interface.
// :- implementation.

/*
INIT mercury__parse_tree__comp_unit_interface__init
ENDINIT
*/

#include "parse_tree.comp_unit_interface.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
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
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.check_type_inst_mode_defns.mih"
#include "parse_tree.convert_parse_tree.mih"
#include "parse_tree.decide_type_repn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"



struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Type_9;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeCtor_10;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeArgs_11;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12;
  MR_bool parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded;
  jmp_buf parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTypeParams_16;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTVarSet_18;
  MR_Box parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__conv0_ItemTypeDefnInfo_14;
  jmp_buf parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_1;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__BaseType_29;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Var_32;
};

struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9;
  MR_bool parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15;
  jmp_buf parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_0;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_37;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTypeParams_39;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_40;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTVarSet_41;
  MR_Box parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__conv0_ItemTypeDefnInfo_37;
  jmp_buf parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_1;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__BaseType_52;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Var_55;
};

struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s {
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8;
  MR_Word * parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9;
  MR_Cont parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont;
  void * parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTypeParams_19;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_20;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTVarSet_21;
  MR_Word parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__STATE_VARIABLE_SeenTypes_30_30;
  MR_Box parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__conv0_ItemTypeDefnInfo_17;
};


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_include_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_section_import_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0;

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1;

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_ordinal_ordered_maybe_unqual_symnames_0[2];

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_unqual_symnames_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_unqual_symnames_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_c_java_csharp_1maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0;

static const MR_PseudoTypeInfo parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_non_sub_du_extras_0_0[3];

static const MR_DuFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_c_java_csharp_1maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_PseudoTypeInfo parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_non_sub_du_extras_0_1[1];

static const MR_DuFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_1;

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_non_sub_du_extras_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_non_sub_du_extras_0_1[1];

static const MR_DuPtagLayout parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_ptag_ordered_non_sub_du_extras_0[2];

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_name_ordered_non_sub_du_extras_0[2];

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_non_sub_du_extras_0[2];

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_int2_items_from_int1_int_instance__2536__1_2_p_0(
  MR_Word InstanceBody0_26,
  MR_Word HeadVar__2_42);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_mode_ctor_checked_defn__777__1_2_p_0(
  MR_Word MaybeImpDefn_13,
  MR_Word HeadVar__2_23);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_inst_ctor_checked_defn__744__1_2_p_0(
  MR_Word MaybeImpDefn_13,
  MR_Word HeadVar__2_23);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__generate_private_interface_int0__519__1_3_p_0(
  MR_Word OutInfo_57,
  MR_Word IntInstanceStrSet_60,
  MR_Word LambdaHeadVar__1_76);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____non_sub_du_extras_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_qual_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_qual_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_qual_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Modules_0_22,
  MR_Word * STATE_VARIABLE_Modules_23);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_qual_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Modules_0_2,
  MR_Word * STATE_VARIABLE_Modules_3);

static void MR_CALL 
parse_tree__comp_unit_interface__record_foreign_lang_in_foreign_enum_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_11,
  MR_Word * STATE_VARIABLE_Langs_12);

static void MR_CALL 
parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_20,
  MR_Word * STATE_VARIABLE_Langs_21);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__check_instance_is_abstract_1_f_0(
  MR_Word InstanceInfo_3);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(
  MR_Word InstanceInfo_3);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_1_f_0(
  MR_Word TypeClassInfo_3);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_mode_defn_abstract_1_f_0(
  MR_Word ModeDefn_3);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_inst_defn_abstract_1_f_0(
  MR_Word InstDefn_3);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4);

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_mode_ctor_checked_defn_for_int2_5_p_0(
  MR_Word ModeCtorCheckedDefn_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_21,
  MR_Word * STATE_VARIABLE_MaybeUnqual_22,
  MR_Word STATE_VARIABLE_ModuleNames_0_23,
  MR_Word * STATE_VARIABLE_ModuleNames_24);

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_inst_ctor_checked_defn_for_int2_5_p_0(
  MR_Word InstCtorCheckedDefn_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_25,
  MR_Word * STATE_VARIABLE_MaybeUnqual_26,
  MR_Word STATE_VARIABLE_ModuleNames_0_27,
  MR_Word * STATE_VARIABLE_ModuleNames_28);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(
  MR_Word tscc_proc_1_input_1_Inst_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_18,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_20);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_name_5_p_0(
  MR_Word tscc_proc_2_input_1_InstName_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_18,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_20);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_module_5_p_0(
  MR_Word SymName_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_12,
  MR_Word * STATE_VARIABLE_MaybeUnqual_13,
  MR_Word STATE_VARIABLE_ModuleNames_0_14,
  MR_Word * STATE_VARIABLE_ModuleNames_15);

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_type_ctor_int_defn_for_int2_8_p_0(
  MR_Word TypeDefnInfo0_9,
  MR_Word * TypeDefnInfo_10,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_29,
  MR_Word * STATE_VARIABLE_MaybeUnqual_30,
  MR_Word STATE_VARIABLE_ModuleNames_0_31,
  MR_Word * STATE_VARIABLE_ModuleNames_32,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_33,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_34);

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0(
  MR_Word TypeCtor_13,
  MR_Word TypeCtorCheckedDefn0_14,
  MR_Word STATE_VARIABLE_ShortTypeCtorCheckedMap_0_36,
  MR_Word * STATE_VARIABLE_ShortTypeCtorCheckedMap_37,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_38,
  MR_Word * STATE_VARIABLE_MaybeUnqual_39,
  MR_Word STATE_VARIABLE_ModuleNames_0_40,
  MR_Word * STATE_VARIABLE_ModuleNames_41,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_42,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_43,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_44,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_45);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_langs_from_int1_imp_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_3);

static void MR_CALL 
parse_tree__comp_unit_interface__make_imports_into_uses_int_only_6_p_0(
  MR_Word UnqualSymNames_7,
  MR_Word UsedModuleNames_8,
  MR_Word ModuleName_9,
  MR_Word ImportUse0_10,
  MR_Word STATE_VARIABLE_ShortUseOnlyMap_0_16,
  MR_Word * STATE_VARIABLE_ShortUseOnlyMap_17);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(
  MR_Word NeededLangs_3,
  MR_Word FIMSpec_4);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_imp_details_for_int1_8_p_0(
  MR_Word BothTypesMap_9,
  MR_Word NeededImpTypeCtors_10,
  MR_Word TypeCtor_11,
  MR_Word TypeCtorCheckedDefn0_12,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_19,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_20,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_21,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_22);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0(
  MR_Word BothTypesMap_9,
  MR_Word NeededImpTypeCtors_10,
  MR_Word TypeCtor_11,
  MR_Word TypeCtorCheckedDefn0_12,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_50,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_51,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_52,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_53);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_any_foreign_enum_from_extras_2_p_0(
  MR_Word Extras0_3,
  MR_Word * MaybeCJCsDefn_4);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_any_foreign_type_defn_from_extras_2_p_0(
  MR_Word Extras0_3,
  MR_Word * Extras_4);

static void MR_CALL 
parse_tree__comp_unit_interface__wrap_cjcs_foreign_type_no_enums_2_p_0(
  MR_Word CJCsMaybeDefn_3,
  MR_Word * CJCsMaybeDefnOrEnum_4);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_subtype_defn_abstract_1_f_0(
  MR_Word SubDefn_3);

static void MR_CALL 
parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(
  MR_Word BothTypesMap_4,
  MR_Word DuDefnInfo_5,
  MR_Word * MaybeAbstractDefnInfo_6);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0(
  MR_Word ImpTypesMap_9,
  MR_Word ImpItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_36,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_37,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_38,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_39);

static void MR_CALL 
parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_args_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3);

static void MR_CALL 
parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_TypeCtors_0_13,
  MR_Word * STATE_VARIABLE_TypeCtors_14);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(
  MR_Word ImpTypesMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_17,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_18,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_19,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_20);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(
  MR_Word BothTypesMap_8,
  MR_Word TypeCtor_9,
  MR_Word ItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31,
  MR_Word STATE_VARIABLE_Seen_0_32,
  MR_Word * STATE_VARIABLE_Seen_33);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfos_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_24,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_25,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_26,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_27);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfo_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_45,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_46,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_47,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_48);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_2_6_p_0(
  MR_Word TypeDefnMap_7,
  MR_Word TVarSet_8,
  MR_Word OoMCtors_9,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word CoveredTypes_10);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_7(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(
  MR_Word TypeDefnMap_7,
  MR_Word TVarSet_8,
  MR_Word Type_9,
  MR_Word TypeCtor_10,
  MR_Word TypeArgs_11,
  MR_Word CoveredTypes0_12);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_5(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_6(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_7(
  void * env_ptr_arg);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word Type_8,
  MR_Word CoveredTypes0_9);

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word Type_8,
  MR_Word * BaseType_9,
  MR_Word STATE_VARIABLE_SeenTypes_0_29,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
parse_tree__comp_unit_interface__merge_tvarsets_and_subst_type_args_6_p_0(
  MR_Word TVarSet_7,
  MR_Word TypeArgs_8,
  MR_Word TVarSet0_9,
  MR_Word TypeParams0_10,
  MR_Word Type0_11,
  MR_Word * Type_12);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_6_p_0(
  MR_Word BothTypesMap_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_12,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_13,
  MR_Word STATE_VARIABLE_Seen_0_14,
  MR_Word * STATE_VARIABLE_Seen_15);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__keep_promise_item_int_1_p_0(
  MR_Word ItemPromise_2);

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0(
  MR_Word ItemTypeClass_4,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_7,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8);

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_imp_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_21,
  MR_Word * STATE_VARIABLE_ImpTypesMap_22);

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_int_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_IntTypesMap_0_13,
  MR_Word * STATE_VARIABLE_IntTypesMap_14);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__make_imports_into_uses_maybe_implicit_4_p_0(
  MR_Word ImpNeededModules_5,
  MR_Word ModuleName_6,
  MR_Word ImportUse_7,
  MR_Word * SectionUseOnly_8);

static void MR_CALL 
parse_tree__comp_unit_interface__add_self_fim_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_FIMSpecs_0_9,
  MR_Word * STATE_VARIABLE_FIMSpecs_10);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word CheckedDefn0_6,
  MR_Word STATE_VARIABLE_ModeCtorCheckedMap_0_18,
  MR_Word * STATE_VARIABLE_ModeCtorCheckedMap_19);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn0_6,
  MR_Word STATE_VARIABLE_InstCtorCheckedMap_0_18,
  MR_Word * STATE_VARIABLE_InstCtorCheckedMap_19);

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0(
  MR_Word CheckedDefn0_3,
  MR_Word * CheckedDefn_4);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_2_p_0(
  MR_Word CJCsMaybeDefn0_3,
  MR_Word * CJCsMaybeDefn_4);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_or_enum_2_p_0(
  MR_Word CJCsMaybeDefnOrEnum0_3,
  MR_Word * CJCsMaybeDefnOrEnum_4);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_du_type_defn_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_for_int3_1_f_0(
  MR_Word OrigTypeClass_3);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word CheckedModeDefn0_6,
  MR_Word STATE_VARIABLE_CheckedModeMap_0_20,
  MR_Word * STATE_VARIABLE_CheckedModeMap_21);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedInstDefn0_6,
  MR_Word STATE_VARIABLE_CheckedInstMap_0_20,
  MR_Word * STATE_VARIABLE_CheckedInstMap_21);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedTypeDefn0_6,
  MR_Word STATE_VARIABLE_CheckedTypeMap_0_51,
  MR_Word * STATE_VARIABLE_CheckedTypeMap_52);

static void MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__302__1_2_p_0(
  MR_Word LambdaHeadVar__1_73,
  MR_Word * LambdaHeadVar__2_74);

static void MR_CALL 
parse_tree__comp_unit_interface__make_sub_type_abstract_2_p_0(
  MR_Word DetailsSub_3,
  MR_Word * DetailsAbstract_4);

static void MR_CALL 
parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(
  MR_Word DetailsDu_3,
  MR_Word * DetailsAbstract_4);

static void MR_CALL 
parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0(
  MR_Word CJCsMaybeDefn_3,
  MR_Word * CJCsDefns_4);

static void MR_CALL 
parse_tree__comp_unit_interface__acc_int_imports_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportUseInfo_6,
  MR_Word STATE_VARIABLE_ContextMap_0_22,
  MR_Word * STATE_VARIABLE_ContextMap_23);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0(
  MR_Word AugMakeIntUnit_9,
  MR_Word IntExplicitFIMSpecs_10,
  MR_Word ImpExplicitFIMSpecs_11,
  MR_Word TypeCtorCheckedMap_12,
  MR_Word InstCtorCheckedMap_13,
  MR_Word ModeCtorCheckedMap_14,
  MR_Word TypeCtorRepnMap_15,
  MR_Word * ParseTreeInt2_16);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntInstancesCord_0_6,
  MR_Word * STATE_VARIABLE_IntInstancesCord_7);

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntTypeClassesCord_0_6,
  MR_Word * STATE_VARIABLE_IntTypeClassesCord_7);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_21,
  MR_Word * STATE_VARIABLE_MaybeUnqual_22,
  MR_Word STATE_VARIABLE_ModuleNames_0_23,
  MR_Word * STATE_VARIABLE_ModuleNames_24);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0(
  MR_Word Globals_12,
  MR_Word AugMakeIntUnit_13,
  MR_Word * IntExplicitFIMSpecs_14,
  MR_Word * ImpExplicitFIMSpecs_15,
  MR_Word * IntTypeCtorCheckedMap_16,
  MR_Word * IntInstCtorCheckedMap_17,
  MR_Word * IntModeCtorCheckedMap_18,
  MR_Word * TypeCtorRepnMap_19,
  MR_Word * ParseTreeInt1_20,
  MR_Word STATE_VARIABLE_Specs_0_85,
  MR_Word * STATE_VARIABLE_Specs_86);

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(
  MR_Word IntTypesMap_6,
  MR_Word ImpTypesMap_7,
  MR_Word BothTypesMap_8,
  MR_Word * NeededImpTypeCtors_9,
  MR_Word * ModulesNeededByTypeDefns_10);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____non_sub_du_extras_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[61][3];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[23][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][4];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[2][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[7][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[11][5];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[11][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][13];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[4][11];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][15];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[2][8];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[1][9];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_13[1][10];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[61][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[3]))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[6])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[8])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[8])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  41 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[8])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  42 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[8])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  43 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[8])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  44 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[6])),
    ((MR_Box) (parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  45 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  46 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[8])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  47 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[8])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  48 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[8])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  49 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  50 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[10])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  51 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[10])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  52 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[10])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  53 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[10])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  54 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[10])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  55 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[10])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  56 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[10])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  57 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[10])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  58 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[10])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  59 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  60 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[23][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[4]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[5]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[3]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[2]))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[15]))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[18]))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__comp_unit_interface_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[2][1] = {
  /* row   0 */
  { ((MR_Box) (MR_mkword(3, &parse_tree__comp_unit_interface_scalar_common_2[22]))) },
  /* row   1 */
  { ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8])) },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[7][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_include_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_section_import_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_section_import_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[11][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_body_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[11][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_merc_out_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[2][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[4][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[1][15] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_13[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_include_module_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_int_section_import_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__pti_one_or_more_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_section_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0 = {
  (MR_String) "no_unqual_symnames",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1 = {
  (MR_String) "some_unqual_symnames",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_ordinal_ordered_maybe_unqual_symnames_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_unqual_symnames_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_functor_desc_maybe_unqual_symnames_0_1
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_unqual_symnames_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "maybe_unqual_symnames",
  { parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_unqual_symnames_0 },
  { parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_ordinal_ordered_maybe_unqual_symnames_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_unqual_symnames_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_c_java_csharp_1maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  { (MR_TypeInfo) (&parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0) }
};

static const MR_PseudoTypeInfo parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_non_sub_du_extras_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_c_java_csharp_1maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0)
};

static const MR_DuFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_0 = {
  (MR_String) "extras_enum",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_non_sub_du_extras_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_c_java_csharp_1maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  { (MR_TypeInfo) (&parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_non_sub_du_extras_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_c_java_csharp_1maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) };

static const MR_DuFunctorDesc parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_1 = {
  (MR_String) "extras_non_enum",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_non_sub_du_extras_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_non_sub_du_extras_0_0[1] = { &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_0 };

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_non_sub_du_extras_0_1[1] = { &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_1 };

static const MR_DuPtagLayout parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_ptag_ordered_non_sub_du_extras_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_non_sub_du_extras_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_non_sub_du_extras_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_name_ordered_non_sub_du_extras_0[2] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_0,
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_1
};

static const MR_Integer parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_non_sub_du_extras_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_non_sub_du_extras_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____non_sub_du_extras_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "non_sub_du_extras",
  { parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_name_ordered_non_sub_du_extras_0 },
  { parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_ptag_ordered_non_sub_du_extras_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_non_sub_du_extras_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_type_defn_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____type_defn_map_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____type_defn_map_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "type_defn_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_type_defn_pair_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0_10001)),
  ((MR_Box) (parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0_10001)),
  (MR_String) "parse_tree.comp_unit_interface",
  (MR_String) "type_defn_pair",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__get_int2_items_from_int1_int_instance__2536__1_2_p_0(
  MR_Word InstanceBody0_26,
  MR_Word HeadVar__2_42)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____instance_body_0_0(InstanceBody0_26, HeadVar__2_42);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_mode_ctor_checked_defn__777__1_2_p_0(
  MR_Word MaybeImpDefn_13,
  MR_Word HeadVar__2_23)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), ((MR_Box) (MaybeImpDefn_13)), ((MR_Box) (HeadVar__2_23)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_inst_ctor_checked_defn__744__1_2_p_0(
  MR_Word MaybeImpDefn_13,
  MR_Word HeadVar__2_23)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), ((MR_Box) (MaybeImpDefn_13)), ((MR_Box) (HeadVar__2_23)));
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__generate_private_interface_int0__519__1_3_p_0(
  MR_Word OutInfo_57,
  MR_Word IntInstanceStrSet_60,
  MR_Word LambdaHeadVar__1_76)
{
  MR_bool succeeded;
  MR_String Str_64;

  Str_64 = parse_tree__parse_tree_out__item_abstract_instance_to_string_2_f_0(OutInfo_57, LambdaHeadVar__1_76);
  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntInstanceStrSet_60, ((MR_Box) (Str_64)));
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____non_sub_du_extras_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_30 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_30, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[17]), &SubResult2_9, ((MR_Box) (Var_29)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[19]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY3_11)));
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[16]), HeadVar__1_1, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_21)));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_qual_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12)
{
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, TypeCtor_4, (MR_Integer) 0))));

  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(1, SymName_6, (MR_Integer) 0))));

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_8)), STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
  }
  else
    *STATE_VARIABLE_Modules_12 = STATE_VARIABLE_Modules_0_11;
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_qual_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12)
{
  MR_Word ClassSymName_6 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 0))));
  MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(0, Constraint_4, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_Modules_13_13;

  if (((MR_tag((MR_Word) ClassSymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(1, ClassSymName_6, (MR_Integer) 0))));

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_8)), STATE_VARIABLE_Modules_0_11, &STATE_VARIABLE_Modules_13_13);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.accumulate_modules_in_qual_constraint\'/3", (MR_String) "unknown typeclass in constraint");
      return;
    }
  parse_tree__comp_unit_interface__accumulate_modules_in_qual_types_3_p_0(ArgTypes_7, STATE_VARIABLE_Modules_13_13, STATE_VARIABLE_Modules_12);
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_qual_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Modules_0_22,
  MR_Word * STATE_VARIABLE_Modules_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Modules_23 = STATE_VARIABLE_Modules_0_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeName_9 = ((MR_Word) ((MR_hl_field(1, Type_4, (MR_Integer) 0))));
          MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(1, Type_4, (MR_Integer) 1))));
          MR_Word ModuleName_12;
          MR_Word STATE_VARIABLE_Modules_24_24;

          mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeName_9, &ModuleName_12);
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_12)), STATE_VARIABLE_Modules_0_22, &STATE_VARIABLE_Modules_24_24);
          parse_tree__comp_unit_interface__accumulate_modules_in_qual_types_3_p_0(ArgTypes_10, STATE_VARIABLE_Modules_24_24, STATE_VARIABLE_Modules_23);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Modules_23 = STATE_VARIABLE_Modules_0_22;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_31 = ((MR_Word) ((MR_hl_field(3, Type_4, (MR_Integer) 1))));

              parse_tree__comp_unit_interface__accumulate_modules_in_qual_types_3_p_0(ArgTypes_31, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_30 = ((MR_Word) ((MR_hl_field(3, Type_4, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_qual_types_3_p_0(ArgTypes_30, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_28 = ((MR_Word) ((MR_hl_field(3, Type_4, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_qual_types_3_p_0(ArgTypes_28, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word KindedType_13 = ((MR_Word) ((MR_hl_field(3, Type_4, (MR_Integer) 1))));
              MR_Word next_value_of_Type_4 = KindedType_13;

              // direct tailcall eliminated
              ;
              Type_4 = next_value_of_Type_4;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_qual_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Modules_0_2,
  MR_Word * STATE_VARIABLE_Modules_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Modules_3 = STATE_VARIABLE_Modules_0_2;
    else
    {
      MR_Word Type_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Modules_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_2;

      parse_tree__comp_unit_interface__accumulate_modules_in_qual_type_3_p_0(Type_7, STATE_VARIABLE_Modules_0_2, &STATE_VARIABLE_Modules_12_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Types_8;
      next_value_of_STATE_VARIABLE_Modules_0_2 = STATE_VARIABLE_Modules_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Modules_0_2 = next_value_of_STATE_VARIABLE_Modules_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_foreign_lang_in_foreign_enum_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_11,
  MR_Word * STATE_VARIABLE_Langs_12)
{
  MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(0, ForeignEnumInfo_4, (MR_Integer) 0))) & (MR_Integer) 3);

  mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_6)), STATE_VARIABLE_Langs_0_11, STATE_VARIABLE_Langs_12);
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_20,
  MR_Word * STATE_VARIABLE_Langs_21)
{
  MR_Word TypeDefn_6 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_4, (MR_Integer) 2))));

  switch (MR_tag((MR_Word) TypeDefn_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Langs_21 = STATE_VARIABLE_Langs_0_20;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Langs_21 = STATE_VARIABLE_Langs_0_20;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Langs_21 = STATE_VARIABLE_Langs_0_20;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Langs_21 = STATE_VARIABLE_Langs_0_20;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Langs_21 = STATE_VARIABLE_Langs_0_20;
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign_12 = ((MR_Word) ((MR_hl_field(3, TypeDefn_6, (MR_Integer) 1))));
            MR_Word LangType_13 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_12, (MR_Integer) 0))));
            MR_Word Lang_17;

            switch (MR_tag((MR_Word) LangType_13)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Lang_17 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                Lang_17 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                Lang_17 = (MR_Integer) 1;
                break;
            }
            mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_17)), STATE_VARIABLE_Langs_0_20, STATE_VARIABLE_Langs_21);
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__check_instance_is_abstract_1_f_0(
  MR_Word InstanceInfo_3)
{
  MR_Word AbstractInstanceInfo_4;
  MR_Word ClassName_5 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 0))));
  MR_Word Types_6 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 1))));
  MR_Word OrigTypes_7 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 2))));
  MR_Word Constraints_8 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 3))));
  MR_Word Methods_9 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 4))));
  MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 5))));
  MR_Word Module_11 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 6))));
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 7))));
  MR_Word SeqNum_13 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 8))));

  if ((Methods_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      AbstractInstanceInfo_4 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AbstractInstanceInfo_4, 0) = ((MR_Box) (ClassName_5));
      MR_hl_field(0, AbstractInstanceInfo_4, 1) = ((MR_Box) (Types_6));
      MR_hl_field(0, AbstractInstanceInfo_4, 2) = ((MR_Box) (OrigTypes_7));
      MR_hl_field(0, AbstractInstanceInfo_4, 3) = ((MR_Box) (Constraints_8));
      MR_hl_field(0, AbstractInstanceInfo_4, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, AbstractInstanceInfo_4, 5) = ((MR_Box) (TVarSet_10));
      MR_hl_field(0, AbstractInstanceInfo_4, 6) = ((MR_Box) (Module_11));
      MR_hl_field(0, AbstractInstanceInfo_4, 7) = ((MR_Box) (Context_12));
      MR_hl_field(0, AbstractInstanceInfo_4, 8) = ((MR_Box) (SeqNum_13));
    }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.check_instance_is_abstract\'/1", (MR_String) "instance_body_concrete");
  return AbstractInstanceInfo_4;
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(
  MR_Word InstanceInfo_3)
{
  MR_Word AbstractInstanceInfo_4;
  MR_Word ClassName_5 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 0))));
  MR_Word Types_6 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 1))));
  MR_Word OrigTypes_7 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 2))));
  MR_Word Constraints_8 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 3))));
  MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 5))));
  MR_Word Module_11 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 6))));
  MR_Word Context_12 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 7))));
  MR_Word SeqNum_13 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_3, (MR_Integer) 8))));

  {
    AbstractInstanceInfo_4 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AbstractInstanceInfo_4, 0) = ((MR_Box) (ClassName_5));
    MR_hl_field(0, AbstractInstanceInfo_4, 1) = ((MR_Box) (Types_6));
    MR_hl_field(0, AbstractInstanceInfo_4, 2) = ((MR_Box) (OrigTypes_7));
    MR_hl_field(0, AbstractInstanceInfo_4, 3) = ((MR_Box) (Constraints_8));
    MR_hl_field(0, AbstractInstanceInfo_4, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, AbstractInstanceInfo_4, 5) = ((MR_Box) (TVarSet_10));
    MR_hl_field(0, AbstractInstanceInfo_4, 6) = ((MR_Box) (Module_11));
    MR_hl_field(0, AbstractInstanceInfo_4, 7) = ((MR_Box) (Context_12));
    MR_hl_field(0, AbstractInstanceInfo_4, 8) = ((MR_Box) (SeqNum_13));
  }
  return AbstractInstanceInfo_4;
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_1_f_0(
  MR_Word TypeClassInfo_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_3, (MR_Integer) 0))));
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_3, (MR_Integer) 1))));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_3, (MR_Integer) 2))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_3, (MR_Integer) 5))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_3, (MR_Integer) 6))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_3, (MR_Integer) 7))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__2_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 5) = ((MR_Box) (Var_10));
    MR_hl_field(0, HeadVar__2_2, 6) = ((MR_Box) (Var_11));
    MR_hl_field(0, HeadVar__2_2, 7) = ((MR_Box) (Var_12));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_mode_defn_abstract_1_f_0(
  MR_Word ModeDefn_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, ModeDefn_3, (MR_Integer) 0))));
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, ModeDefn_3, (MR_Integer) 1))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, ModeDefn_3, (MR_Integer) 3))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, ModeDefn_3, (MR_Integer) 4))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, ModeDefn_3, (MR_Integer) 5))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__2_2, 4) = ((MR_Box) (Var_9));
    MR_hl_field(0, HeadVar__2_2, 5) = ((MR_Box) (Var_10));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_inst_defn_abstract_1_f_0(
  MR_Word InstDefn_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, InstDefn_3, (MR_Integer) 0))));
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, InstDefn_3, (MR_Integer) 1))));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, InstDefn_3, (MR_Integer) 2))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, InstDefn_3, (MR_Integer) 4))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, InstDefn_3, (MR_Integer) 5))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, InstDefn_3, (MR_Integer) 6))));

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (Var_7));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 4) = ((MR_Box) (Var_9));
    MR_hl_field(0, HeadVar__2_2, 5) = ((MR_Box) (Var_10));
    MR_hl_field(0, HeadVar__2_2, 6) = ((MR_Box) (Var_11));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4)
{
  MR_Word TypeDefn0_5 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 2))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 3))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 4))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 5))));

  switch (MR_tag((MR_Word) TypeDefn0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu0_6 = (MR_Word) ((MR_Word) (TypeDefn0_5));
        MR_Word DetailsDu_7;
        MR_Word TypeDefn_8;
        MR_Word MaybeCanonical_42 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_6, (MR_Integer) 1))));
        MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_6, (MR_Integer) 0))));
        MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_6, (MR_Integer) 2))));

        if ((MaybeCanonical_42 == (MR_Word) ((MR_Unsigned) 0U)))
          DetailsDu_7 = DetailsDu0_6;
        else
          {
            DetailsDu_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DetailsDu_7, 0) = ((MR_Box) (Var_47));
            MR_hl_field(0, DetailsDu_7, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
            MR_hl_field(0, DetailsDu_7, 2) = ((MR_Box) (Var_48));
          }
        TypeDefn_8 = (MR_Word) ((MR_Word) (DetailsDu_7));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *ItemTypeDefn_4 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
          MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_8));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_22));
        }
      }
      break;
    case (MR_Integer) 1:
      *ItemTypeDefn_4 = ItemTypeDefn0_3;
      break;
    case (MR_Integer) 2:
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *ItemTypeDefn_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
        MR_hl_field(0, base, 2) = ((MR_Box) (MR_mkword(2, ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[21])))));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_22));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *ItemTypeDefn_4 = ItemTypeDefn0_3;
          break;
        case (MR_Integer) 1:
          *ItemTypeDefn_4 = ItemTypeDefn0_3;
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign0_13 = ((MR_Word) ((MR_hl_field(3, TypeDefn0_5, (MR_Integer) 1))));
            MR_Word DetailsForeign_14;
            MR_Word TypeDefn_17;
            MR_Word MaybeCanonical0_52 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_13, (MR_Integer) 1))));
            MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_13, (MR_Integer) 0))));
            MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_13, (MR_Integer) 2))));

            if ((MaybeCanonical0_52 == (MR_Word) ((MR_Unsigned) 0U)))
              DetailsForeign_14 = DetailsForeign0_13;
            else
              {
                DetailsForeign_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DetailsForeign_14, 0) = ((MR_Box) (Var_57));
                MR_hl_field(0, DetailsForeign_14, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
                MR_hl_field(0, DetailsForeign_14, 2) = ((MR_Box) (Var_58));
              }
            {
              TypeDefn_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, TypeDefn_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, TypeDefn_17, 1) = ((MR_Box) (DetailsForeign_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *ItemTypeDefn_4 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_19));
              MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_17));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_22));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_mode_ctor_checked_defn_for_int2_5_p_0(
  MR_Word ModeCtorCheckedDefn_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_21,
  MR_Word * STATE_VARIABLE_MaybeUnqual_22,
  MR_Word STATE_VARIABLE_ModuleNames_0_23,
  MR_Word * STATE_VARIABLE_ModuleNames_24)
{
  MR_Word StdDefn_9 = ((MR_Word) ((MR_hl_field(0, ModeCtorCheckedDefn_6, (MR_Integer) 0))));
  MR_Word ModeDefnInfo_12 = ((MR_Word) ((MR_hl_field(0, StdDefn_9, (MR_Integer) 1))));
  MR_Word MaybeAbstractModeDefn_15 = ((MR_Word) ((MR_hl_field(0, ModeDefnInfo_12, (MR_Integer) 2))));

  if ((MaybeAbstractModeDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_MaybeUnqual_22 = STATE_VARIABLE_MaybeUnqual_0_21;
    *STATE_VARIABLE_ModuleNames_24 = STATE_VARIABLE_ModuleNames_0_23;
  }
  else
  {
    MR_Word ModeDefn_19 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractModeDefn_15, (MR_Integer) 0))));
    MR_Word Mode_20 = (MR_Word) (ModeDefn_19);

    if (((MR_tag((MR_Word) Mode_20)) == (MR_Integer) 0))
    {
      MR_Word InstA_25 = ((MR_Word) ((MR_hl_field(0, Mode_20, (MR_Integer) 0))));
      MR_Word InstB_26 = ((MR_Word) ((MR_hl_field(0, Mode_20, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_17_29;
      MR_Word STATE_VARIABLE_ModuleNames_18_30;

      parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(InstA_25, STATE_VARIABLE_MaybeUnqual_0_21, &STATE_VARIABLE_MaybeUnqual_17_29, STATE_VARIABLE_ModuleNames_0_23, &STATE_VARIABLE_ModuleNames_18_30);
      parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(InstB_26, STATE_VARIABLE_MaybeUnqual_17_29, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_18_30, STATE_VARIABLE_ModuleNames_24);
    }
    else
    {
      MR_Word SymName_27 = ((MR_Word) ((MR_hl_field(1, Mode_20, (MR_Integer) 0))));
      MR_Word ArgInsts_28 = ((MR_Word) ((MR_hl_field(1, Mode_20, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_21_31;
      MR_Word STATE_VARIABLE_ModuleNames_22_32;

      if (((MR_tag((MR_Word) SymName_27)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_34 = ((MR_Word) ((MR_hl_field(1, SymName_27, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_34)), STATE_VARIABLE_ModuleNames_0_23, &STATE_VARIABLE_ModuleNames_22_32);
        STATE_VARIABLE_MaybeUnqual_21_31 = STATE_VARIABLE_MaybeUnqual_0_21;
      }
      else
      {
        STATE_VARIABLE_MaybeUnqual_21_31 = (MR_Integer) 1;
        STATE_VARIABLE_ModuleNames_22_32 = STATE_VARIABLE_ModuleNames_0_23;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_28, STATE_VARIABLE_MaybeUnqual_21_31, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_22_32, STATE_VARIABLE_ModuleNames_24);
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_inst_ctor_checked_defn_for_int2_5_p_0(
  MR_Word InstCtorCheckedDefn_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_25,
  MR_Word * STATE_VARIABLE_MaybeUnqual_26,
  MR_Word STATE_VARIABLE_ModuleNames_0_27,
  MR_Word * STATE_VARIABLE_ModuleNames_28)
{
  MR_Word StdDefn_9 = ((MR_Word) ((MR_hl_field(0, InstCtorCheckedDefn_6, (MR_Integer) 0))));
  MR_Word InstDefnInfo_12 = ((MR_Word) ((MR_hl_field(0, StdDefn_9, (MR_Integer) 1))));
  MR_Word MaybeForTypeCtor_15 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_12, (MR_Integer) 2))));
  MR_Word MaybeAbstractInstDefn_16 = ((MR_Word) ((MR_hl_field(0, InstDefnInfo_12, (MR_Integer) 3))));
  MR_Word STATE_VARIABLE_MaybeUnqual_29_29;
  MR_Word STATE_VARIABLE_ModuleNames_30_30;

  if ((MaybeForTypeCtor_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    STATE_VARIABLE_MaybeUnqual_29_29 = STATE_VARIABLE_MaybeUnqual_0_25;
    STATE_VARIABLE_ModuleNames_30_30 = STATE_VARIABLE_ModuleNames_0_27;
  }
  else
  {
    MR_Word TypeCtor_20 = ((MR_Word) ((MR_hl_field(1, MaybeForTypeCtor_15, (MR_Integer) 0))));
    MR_Word TypeCtorSymName_21 = ((MR_Word) ((MR_hl_field(0, TypeCtor_20, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) TypeCtorSymName_21)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_32 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_21, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_32)), STATE_VARIABLE_ModuleNames_0_27, &STATE_VARIABLE_ModuleNames_30_30);
      STATE_VARIABLE_MaybeUnqual_29_29 = STATE_VARIABLE_MaybeUnqual_0_25;
    }
    else
    {
      STATE_VARIABLE_MaybeUnqual_29_29 = (MR_Integer) 1;
      STATE_VARIABLE_ModuleNames_30_30 = STATE_VARIABLE_ModuleNames_0_27;
    }
  }
  if ((MaybeAbstractInstDefn_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_MaybeUnqual_26 = STATE_VARIABLE_MaybeUnqual_29_29;
    *STATE_VARIABLE_ModuleNames_28 = STATE_VARIABLE_ModuleNames_30_30;
  }
  else
  {
    MR_Word InstDefn_23 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractInstDefn_16, (MR_Integer) 0))));
    MR_Word Inst_24 = (MR_Word) (InstDefn_23);

    parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_24, STATE_VARIABLE_MaybeUnqual_29_29, STATE_VARIABLE_MaybeUnqual_26, STATE_VARIABLE_ModuleNames_30_30, STATE_VARIABLE_ModuleNames_28);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(
  MR_Word tscc_proc_1_input_1_Inst_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_18,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_20)
{
  MR_Word tscc_proc_2_input_1_InstName_6;
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
  MR_Word tscc_output_1_STATE_VARIABLE_MaybeUnqual_18;
  MR_Word tscc_output_2_STATE_VARIABLE_ModuleNames_20;

  // The code for TSCC PROC 1: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst/5-0
  ;
  // proc 2 in TSCC: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst_name/5-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Inst_6 = tscc_proc_1_input_1_Inst_6;
    MR_Word STATE_VARIABLE_MaybeUnqual_0_17 = tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
    MR_Word STATE_VARIABLE_MaybeUnqual_18;
    MR_Word STATE_VARIABLE_ModuleNames_0_19 = tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;
    MR_Word STATE_VARIABLE_ModuleNames_20;

    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
          STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundInsts_13 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));

          parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(BoundInsts_13, STATE_VARIABLE_MaybeUnqual_0_17, &STATE_VARIABLE_MaybeUnqual_18, STATE_VARIABLE_ModuleNames_0_19, &STATE_VARIABLE_ModuleNames_20);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_16 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = InstName_16;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgInst_15 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Inst_6 = ArgInst_15;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = STATE_VARIABLE_MaybeUnqual_0_17;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = STATE_VARIABLE_ModuleNames_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
              tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
              tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
            }
            break;
          case (MR_Integer) 3:
            {
              STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_18;
    tscc_output_2_STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_20;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word InstName_6 = tscc_proc_2_input_1_InstName_6;
    MR_Word STATE_VARIABLE_MaybeUnqual_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
    MR_Word STATE_VARIABLE_MaybeUnqual_19;
    MR_Word STATE_VARIABLE_ModuleNames_0_20 = tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
    MR_Word STATE_VARIABLE_ModuleNames_21;

    switch (MR_tag((MR_Word) InstName_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(0, InstName_6, (MR_Integer) 0))));
          MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(0, InstName_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_MaybeUnqual_22_22;
          MR_Word STATE_VARIABLE_ModuleNames_23_23;

          if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_61 = ((MR_Word) ((MR_hl_field(1, SymName_9, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_61)), STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_23_23);
            STATE_VARIABLE_MaybeUnqual_22_22 = STATE_VARIABLE_MaybeUnqual_0_18;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_22_22 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_23_23 = STATE_VARIABLE_ModuleNames_0_20;
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_10, STATE_VARIABLE_MaybeUnqual_22_22, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_23_23, &STATE_VARIABLE_ModuleNames_21);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgInstB_56 = ((MR_Word) ((MR_hl_field(1, InstName_6, (MR_Integer) 2))));
          MR_Word Inst_104 = ((MR_Word) ((MR_hl_field(1, InstName_6, (MR_Integer) 1))));
          MR_Word Insts_105;
          MR_Word STATE_VARIABLE_MaybeUnqual_20_110;
          MR_Word STATE_VARIABLE_ModuleNames_21_111;
          MR_Word Inst_116;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;

          {
            Insts_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Insts_105, 0) = ((MR_Box) (ArgInstB_56));
            MR_hl_field(1, Insts_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_104, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_110, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_111);
          Inst_116 = ((MR_Word) ((MR_hl_field(1, Insts_105, (MR_Integer) 0))));
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_116;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = STATE_VARIABLE_MaybeUnqual_20_110;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = STATE_VARIABLE_ModuleNames_21_111;
          tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
          tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
          tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgInstB_14 = ((MR_Word) ((MR_hl_field(2, InstName_6, (MR_Integer) 1))));
          MR_Word Inst_68 = ((MR_Word) ((MR_hl_field(2, InstName_6, (MR_Integer) 0))));
          MR_Word Insts_69;
          MR_Word STATE_VARIABLE_MaybeUnqual_20_74;
          MR_Word STATE_VARIABLE_ModuleNames_21_75;
          MR_Word Inst_80;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;

          {
            Insts_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Insts_69, 0) = ((MR_Box) (ArgInstB_14));
            MR_hl_field(1, Insts_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_68, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_74, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_75);
          Inst_80 = ((MR_Word) ((MR_hl_field(1, Insts_69, (MR_Integer) 0))));
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_80;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = STATE_VARIABLE_MaybeUnqual_20_74;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = STATE_VARIABLE_ModuleNames_21_75;
          tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
          tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
          tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgInstName_52 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_52;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgInstName_15 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_15;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgInstName_54 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_54;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgInstName_53 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_53;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_17 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_17, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_MaybeUnqual_35_35;
              MR_Word STATE_VARIABLE_ModuleNames_36_36;
              MR_Word ArgInstName_50 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 2))));
              MR_Word Type_51 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;

              parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_51, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_35_35, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_36_36);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_50;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_35_35;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_36_36;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_19;
    tscc_output_2_STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_21;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_18 = tscc_output_1_STATE_VARIABLE_MaybeUnqual_18;
  *tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_20 = tscc_output_2_STATE_VARIABLE_ModuleNames_20;
  return;
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_name_5_p_0(
  MR_Word tscc_proc_2_input_1_InstName_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_18,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_20)
{
  MR_Word tscc_proc_1_input_1_Inst_6;
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;
  MR_Word tscc_output_1_STATE_VARIABLE_MaybeUnqual_18;
  MR_Word tscc_output_2_STATE_VARIABLE_ModuleNames_20;

  // The code for TSCC PROC 2: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst_name/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst/5-0
  ;
  // proc 2 in TSCC: pred parse_tree.comp_unit_interface.accumulate_modules_in_inst_name/5-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Inst_6 = tscc_proc_1_input_1_Inst_6;
    MR_Word STATE_VARIABLE_MaybeUnqual_0_17 = tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
    MR_Word STATE_VARIABLE_MaybeUnqual_18;
    MR_Word STATE_VARIABLE_ModuleNames_0_19 = tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;
    MR_Word STATE_VARIABLE_ModuleNames_20;

    switch (MR_tag((MR_Word) Inst_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
          STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BoundInsts_13 = ((MR_Word) ((MR_hl_field(2, Inst_6, (MR_Integer) 2))));

          parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(BoundInsts_13, STATE_VARIABLE_MaybeUnqual_0_17, &STATE_VARIABLE_MaybeUnqual_18, STATE_VARIABLE_ModuleNames_0_19, &STATE_VARIABLE_ModuleNames_20);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Inst_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstName_16 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = InstName_16;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgInst_15 = ((MR_Word) ((MR_hl_field(3, Inst_6, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Inst_6 = ArgInst_15;
              MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = STATE_VARIABLE_MaybeUnqual_0_17;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = STATE_VARIABLE_ModuleNames_0_19;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
              tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
              tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 2:
            {
              STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
            }
            break;
          case (MR_Integer) 3:
            {
              STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_0_17;
              STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_0_19;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_18;
    tscc_output_2_STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_20;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word InstName_6 = tscc_proc_2_input_1_InstName_6;
    MR_Word STATE_VARIABLE_MaybeUnqual_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
    MR_Word STATE_VARIABLE_MaybeUnqual_19;
    MR_Word STATE_VARIABLE_ModuleNames_0_20 = tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
    MR_Word STATE_VARIABLE_ModuleNames_21;

    switch (MR_tag((MR_Word) InstName_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(0, InstName_6, (MR_Integer) 0))));
          MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(0, InstName_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_MaybeUnqual_22_22;
          MR_Word STATE_VARIABLE_ModuleNames_23_23;

          if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_61 = ((MR_Word) ((MR_hl_field(1, SymName_9, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_61)), STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_23_23);
            STATE_VARIABLE_MaybeUnqual_22_22 = STATE_VARIABLE_MaybeUnqual_0_18;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_22_22 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_23_23 = STATE_VARIABLE_ModuleNames_0_20;
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_10, STATE_VARIABLE_MaybeUnqual_22_22, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_23_23, &STATE_VARIABLE_ModuleNames_21);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgInstB_56 = ((MR_Word) ((MR_hl_field(1, InstName_6, (MR_Integer) 2))));
          MR_Word Inst_104 = ((MR_Word) ((MR_hl_field(1, InstName_6, (MR_Integer) 1))));
          MR_Word Insts_105;
          MR_Word STATE_VARIABLE_MaybeUnqual_20_110;
          MR_Word STATE_VARIABLE_ModuleNames_21_111;
          MR_Word Inst_116;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;

          {
            Insts_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Insts_105, 0) = ((MR_Box) (ArgInstB_56));
            MR_hl_field(1, Insts_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_104, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_110, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_111);
          Inst_116 = ((MR_Word) ((MR_hl_field(1, Insts_105, (MR_Integer) 0))));
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_116;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = STATE_VARIABLE_MaybeUnqual_20_110;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = STATE_VARIABLE_ModuleNames_21_111;
          tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
          tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
          tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgInstB_14 = ((MR_Word) ((MR_hl_field(2, InstName_6, (MR_Integer) 1))));
          MR_Word Inst_68 = ((MR_Word) ((MR_hl_field(2, InstName_6, (MR_Integer) 0))));
          MR_Word Insts_69;
          MR_Word STATE_VARIABLE_MaybeUnqual_20_74;
          MR_Word STATE_VARIABLE_ModuleNames_21_75;
          MR_Word Inst_80;
          MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
          MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;

          {
            Insts_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Insts_69, 0) = ((MR_Box) (ArgInstB_14));
            MR_hl_field(1, Insts_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_68, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_74, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_75);
          Inst_80 = ((MR_Word) ((MR_hl_field(1, Insts_69, (MR_Integer) 0))));
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_80;
          next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = STATE_VARIABLE_MaybeUnqual_20_74;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = STATE_VARIABLE_ModuleNames_21_75;
          tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
          tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_17;
          tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_19;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, InstName_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgInstName_52 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_52;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgInstName_15 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_15;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgInstName_54 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_54;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgInstName_53 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_53;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_20;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Type_17 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_17, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word STATE_VARIABLE_MaybeUnqual_35_35;
              MR_Word STATE_VARIABLE_ModuleNames_36_36;
              MR_Word ArgInstName_50 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 2))));
              MR_Word Type_51 = ((MR_Word) ((MR_hl_field(3, InstName_6, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_InstName_6;
              MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;

              parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_51, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_35_35, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_36_36);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_50;
              next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_35_35;
              next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_36_36;
              tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
              tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
              tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_MaybeUnqual_18 = STATE_VARIABLE_MaybeUnqual_19;
    tscc_output_2_STATE_VARIABLE_ModuleNames_20 = STATE_VARIABLE_ModuleNames_21;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_18 = tscc_output_1_STATE_VARIABLE_MaybeUnqual_18;
  *tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_20 = tscc_output_2_STATE_VARIABLE_ModuleNames_20;
  return;
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word BoundInst_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word ConsId_22 = ((MR_Word) ((MR_hl_field(0, BoundInst_12, (MR_Integer) 0))));
      MR_Word ArgInsts_23 = ((MR_Word) ((MR_hl_field(0, BoundInst_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_22_31;
      MR_Word STATE_VARIABLE_ModuleNames_23_32;
      MR_Word SymName_24;
      MR_Word TypeCtor_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      succeeded = ((((MR_tag((MR_Word) ConsId_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_22, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        SymName_24 = ((MR_Word) ((MR_hl_field(3, ConsId_22, (MR_Integer) 1))));
        TypeCtor_26 = ((MR_Word) ((MR_hl_field(3, ConsId_22, (MR_Integer) 3))));
        {
          MR_Word TypeCtorSymName_27;
          MR_Word STATE_VARIABLE_MaybeUnqual_20_29;
          MR_Word STATE_VARIABLE_ModuleNames_21_30;

          parse_tree__comp_unit_interface__accumulate_module_5_p_0(SymName_24, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_20_29, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_21_30);
          TypeCtorSymName_27 = ((MR_Word) ((MR_hl_field(0, TypeCtor_26, (MR_Integer) 0))));
          parse_tree__comp_unit_interface__accumulate_module_5_p_0(TypeCtorSymName_27, STATE_VARIABLE_MaybeUnqual_20_29, &STATE_VARIABLE_MaybeUnqual_22_31, STATE_VARIABLE_ModuleNames_21_30, &STATE_VARIABLE_ModuleNames_23_32);
        }
      }
      else
      {
        STATE_VARIABLE_ModuleNames_23_32 = STATE_VARIABLE_ModuleNames_0_4;
        STATE_VARIABLE_MaybeUnqual_22_31 = STATE_VARIABLE_MaybeUnqual_0_2;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_23, STATE_VARIABLE_MaybeUnqual_22_31, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_23_32, &STATE_VARIABLE_ModuleNames_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = BoundInsts_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_20_20;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word Inst_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_12, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Insts_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_20_20;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_module_5_p_0(
  MR_Word SymName_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_12,
  MR_Word * STATE_VARIABLE_MaybeUnqual_13,
  MR_Word STATE_VARIABLE_ModuleNames_0_14,
  MR_Word * STATE_VARIABLE_ModuleNames_15)
{
  if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(1, SymName_6, (MR_Integer) 0))));

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_10)), STATE_VARIABLE_ModuleNames_0_14, STATE_VARIABLE_ModuleNames_15);
    *STATE_VARIABLE_MaybeUnqual_13 = STATE_VARIABLE_MaybeUnqual_0_12;
  }
  else
  {
    *STATE_VARIABLE_MaybeUnqual_13 = (MR_Integer) 1;
    *STATE_VARIABLE_ModuleNames_15 = STATE_VARIABLE_ModuleNames_0_14;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_type_ctor_int_defn_for_int2_8_p_0(
  MR_Word TypeDefnInfo0_9,
  MR_Word * TypeDefnInfo_10,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_29,
  MR_Word * STATE_VARIABLE_MaybeUnqual_30,
  MR_Word STATE_VARIABLE_ModuleNames_0_31,
  MR_Word * STATE_VARIABLE_ModuleNames_32,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_33,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_34)
{
  MR_Word TypeDefn0_14 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_9, (MR_Integer) 2))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_9, (MR_Integer) 0))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_9, (MR_Integer) 1))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_9, (MR_Integer) 3))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_9, (MR_Integer) 4))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo0_9, (MR_Integer) 5))));

  switch (MR_tag((MR_Word) TypeDefn0_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu0_15 = (MR_Word) ((MR_Word) (TypeDefn0_14));
        MR_Word DetailsDu_16;
        MR_Word TypeDefn_17;
        MR_Word MaybeCanonical_60 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_15, (MR_Integer) 1))));
        MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_15, (MR_Integer) 0))));
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_15, (MR_Integer) 2))));

        if ((MaybeCanonical_60 == (MR_Word) ((MR_Unsigned) 0U)))
          DetailsDu_16 = DetailsDu0_15;
        else
          {
            DetailsDu_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DetailsDu_16, 0) = ((MR_Box) (Var_65));
            MR_hl_field(0, DetailsDu_16, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
            MR_hl_field(0, DetailsDu_16, 2) = ((MR_Box) (Var_66));
          }
        TypeDefn_17 = (MR_Word) ((MR_Word) (DetailsDu_16));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *TypeDefnInfo_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_42));
          MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_17));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_43));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_44));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_45));
        }
        *STATE_VARIABLE_MaybeUnqual_30 = STATE_VARIABLE_MaybeUnqual_0_29;
        *STATE_VARIABLE_ModuleNames_32 = STATE_VARIABLE_ModuleNames_0_31;
        *STATE_VARIABLE_IntImplicitFIMLangs_34 = STATE_VARIABLE_IntImplicitFIMLangs_0_33;
      }
      break;
    case (MR_Integer) 1:
      {
        *TypeDefnInfo_10 = TypeDefnInfo0_9;
        *STATE_VARIABLE_MaybeUnqual_30 = STATE_VARIABLE_MaybeUnqual_0_29;
        *STATE_VARIABLE_ModuleNames_32 = STATE_VARIABLE_ModuleNames_0_31;
        *STATE_VARIABLE_IntImplicitFIMLangs_34 = STATE_VARIABLE_IntImplicitFIMLangs_0_33;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.restrict_type_ctor_int_defn_for_int2\'/8", (MR_String) "parse_tree_abstract_type");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn0_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv0_27 = ((MR_Word) ((MR_hl_field(3, TypeDefn0_14, (MR_Integer) 1))));
            MR_Word EqvType0_28;

            *TypeDefnInfo_10 = TypeDefnInfo0_9;
            EqvType0_28 = (MR_Word) (DetailsEqv0_27);
            parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(EqvType0_28, STATE_VARIABLE_MaybeUnqual_0_29, STATE_VARIABLE_MaybeUnqual_30, STATE_VARIABLE_ModuleNames_0_31, STATE_VARIABLE_ModuleNames_32);
            *STATE_VARIABLE_IntImplicitFIMLangs_34 = STATE_VARIABLE_IntImplicitFIMLangs_0_33;
          }
          break;
        case (MR_Integer) 1:
          {
            *TypeDefnInfo_10 = TypeDefnInfo0_9;
            *STATE_VARIABLE_MaybeUnqual_30 = STATE_VARIABLE_MaybeUnqual_0_29;
            *STATE_VARIABLE_ModuleNames_32 = STATE_VARIABLE_ModuleNames_0_31;
            *STATE_VARIABLE_IntImplicitFIMLangs_34 = STATE_VARIABLE_IntImplicitFIMLangs_0_33;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DetailsForeign0_21 = ((MR_Word) ((MR_hl_field(3, TypeDefn0_14, (MR_Integer) 1))));
            MR_Word DetailsForeign_22;
            MR_Word ForeignType_23;
            MR_Word Lang_26;
            MR_Word TypeDefn_40;
            MR_Word MaybeCanonical0_70 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_21, (MR_Integer) 1))));
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_21, (MR_Integer) 0))));
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_21, (MR_Integer) 2))));

            if ((MaybeCanonical0_70 == (MR_Word) ((MR_Unsigned) 0U)))
              DetailsForeign_22 = DetailsForeign0_21;
            else
              {
                DetailsForeign_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, DetailsForeign_22, 0) = ((MR_Box) (Var_75));
                MR_hl_field(0, DetailsForeign_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
                MR_hl_field(0, DetailsForeign_22, 2) = ((MR_Box) (Var_76));
              }
            {
              TypeDefn_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, TypeDefn_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, TypeDefn_40, 1) = ((MR_Box) (DetailsForeign_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *TypeDefnInfo_10 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
              MR_hl_field(0, base, 1) = ((MR_Box) (Var_42));
              MR_hl_field(0, base, 2) = ((MR_Box) (TypeDefn_40));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_43));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_44));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_45));
            }
            ForeignType_23 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_22, (MR_Integer) 0))));
            Lang_26 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_23);
            mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_26)), STATE_VARIABLE_IntImplicitFIMLangs_0_33, STATE_VARIABLE_IntImplicitFIMLangs_34);
            *STATE_VARIABLE_MaybeUnqual_30 = STATE_VARIABLE_MaybeUnqual_0_29;
            *STATE_VARIABLE_ModuleNames_32 = STATE_VARIABLE_ModuleNames_0_31;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_TypeDefnInfo_10;
  MR_Word conv9_STATE_VARIABLE_MaybeUnqual_30;
  MR_Word conv8_STATE_VARIABLE_ModuleNames_32;
  MR_Word conv7_STATE_VARIABLE_IntImplicitFIMLangs_34;

  parse_tree__comp_unit_interface__restrict_type_ctor_int_defn_for_int2_8_p_0(((MR_Word) (wrapper_arg_1)), &conv10_TypeDefnInfo_10, ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_MaybeUnqual_30, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_ModuleNames_32, ((MR_Word) (wrapper_arg_7)), &conv7_STATE_VARIABLE_IntImplicitFIMLangs_34);
  *wrapper_arg_2 = ((MR_Box) (conv10_TypeDefnInfo_10));
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_MaybeUnqual_30));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleNames_32));
  *wrapper_arg_8 = ((MR_Box) (conv7_STATE_VARIABLE_IntImplicitFIMLangs_34));
}

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_TypeDefnInfo_10;
  MR_Word conv2_STATE_VARIABLE_MaybeUnqual_30;
  MR_Word conv1_STATE_VARIABLE_ModuleNames_32;
  MR_Word conv0_STATE_VARIABLE_IntImplicitFIMLangs_34;

  parse_tree__comp_unit_interface__restrict_type_ctor_int_defn_for_int2_8_p_0(((MR_Word) (wrapper_arg_1)), &conv3_TypeDefnInfo_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_MaybeUnqual_30, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ModuleNames_32, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_IntImplicitFIMLangs_34);
  *wrapper_arg_2 = ((MR_Box) (conv3_TypeDefnInfo_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_MaybeUnqual_30));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleNames_32));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_IntImplicitFIMLangs_34));
}

static void MR_CALL 
parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0(
  MR_Word TypeCtor_13,
  MR_Word TypeCtorCheckedDefn0_14,
  MR_Word STATE_VARIABLE_ShortTypeCtorCheckedMap_0_36,
  MR_Word * STATE_VARIABLE_ShortTypeCtorCheckedMap_37,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_38,
  MR_Word * STATE_VARIABLE_MaybeUnqual_39,
  MR_Word STATE_VARIABLE_ModuleNames_0_40,
  MR_Word * STATE_VARIABLE_ModuleNames_41,
  MR_Word STATE_VARIABLE_IntImplicitFIMLangs_0_42,
  MR_Word * STATE_VARIABLE_IntImplicitFIMLangs_43,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_44,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_45)
{
  MR_Word TypeCtorCheckedDefn_27;

  if (((MR_tag((MR_Word) TypeCtorCheckedDefn0_14)) == (MR_Integer) 0))
  {
    MR_Word SrcDefnsSolver0_21 = ((MR_Word) ((MR_hl_field(0, TypeCtorCheckedDefn0_14, (MR_Integer) 1))));
    MR_Word SolverTypeDefn_22 = ((MR_Word) ((MR_hl_field(0, TypeCtorCheckedDefn0_14, (MR_Integer) 0))));
    MR_Word MaybeIntDefn0_23 = ((MR_Word) ((MR_hl_field(0, SrcDefnsSolver0_21, (MR_Integer) 0))));
    MR_Word MaybeImpDefn_24 = ((MR_Word) ((MR_hl_field(0, SrcDefnsSolver0_21, (MR_Integer) 1))));
    MR_Word MaybeIntDefn_25;
    MR_Word SrcDefnsSolver_26;
    MR_Box conv6_STATE_VARIABLE_MaybeUnqual_39;
    MR_Box conv5_STATE_VARIABLE_ModuleNames_41;
    MR_Box conv4_STATE_VARIABLE_IntImplicitFIMLangs_43;

    mercury__maybe__map_fold3_maybe_9_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[59]), MaybeIntDefn0_23, &MaybeIntDefn_25, ((MR_Box) (STATE_VARIABLE_MaybeUnqual_0_38)), &conv6_STATE_VARIABLE_MaybeUnqual_39, ((MR_Box) (STATE_VARIABLE_ModuleNames_0_40)), &conv5_STATE_VARIABLE_ModuleNames_41, ((MR_Box) (STATE_VARIABLE_IntImplicitFIMLangs_0_42)), &conv4_STATE_VARIABLE_IntImplicitFIMLangs_43);
    *STATE_VARIABLE_MaybeUnqual_39 = ((MR_Word) (conv6_STATE_VARIABLE_MaybeUnqual_39));
    *STATE_VARIABLE_ModuleNames_41 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleNames_41));
    *STATE_VARIABLE_IntImplicitFIMLangs_43 = ((MR_Word) (conv4_STATE_VARIABLE_IntImplicitFIMLangs_43));
    {
      SrcDefnsSolver_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefnsSolver_26, 0) = ((MR_Box) (MaybeIntDefn_25));
      MR_hl_field(0, SrcDefnsSolver_26, 1) = ((MR_Box) (MaybeImpDefn_24));
    }
    {
      TypeCtorCheckedDefn_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtorCheckedDefn_27, 0) = ((MR_Box) (SolverTypeDefn_22));
      MR_hl_field(0, TypeCtorCheckedDefn_27, 1) = ((MR_Box) (SrcDefnsSolver_26));
    }
    *STATE_VARIABLE_ImpImplicitFIMLangs_45 = STATE_VARIABLE_ImpImplicitFIMLangs_0_44;
  }
  else
  {
    MR_Word SrcDefnsStd0_29 = ((MR_Word) ((MR_hl_field(1, TypeCtorCheckedDefn0_14, (MR_Integer) 1))));
    MR_Word StdTypeDefn_30 = ((MR_Word) ((MR_hl_field(1, TypeCtorCheckedDefn0_14, (MR_Integer) 0))));
    MR_Word IntTypeDefns0_31 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd0_29, (MR_Integer) 0))));
    MR_Word ImpTypeDefns_32 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd0_29, (MR_Integer) 1))));
    MR_Word IntTypeDefns_34;
    MR_Word SrcDefnsStd_35;
    MR_Box conv13_STATE_VARIABLE_MaybeUnqual_39;
    MR_Box conv12_STATE_VARIABLE_ModuleNames_41;
    MR_Box conv11_STATE_VARIABLE_IntImplicitFIMLangs_43;

    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[60]), IntTypeDefns0_31, &IntTypeDefns_34, ((MR_Box) (STATE_VARIABLE_MaybeUnqual_0_38)), &conv13_STATE_VARIABLE_MaybeUnqual_39, ((MR_Box) (STATE_VARIABLE_ModuleNames_0_40)), &conv12_STATE_VARIABLE_ModuleNames_41, ((MR_Box) (STATE_VARIABLE_IntImplicitFIMLangs_0_42)), &conv11_STATE_VARIABLE_IntImplicitFIMLangs_43);
    *STATE_VARIABLE_MaybeUnqual_39 = ((MR_Word) (conv13_STATE_VARIABLE_MaybeUnqual_39));
    *STATE_VARIABLE_ModuleNames_41 = ((MR_Word) (conv12_STATE_VARIABLE_ModuleNames_41));
    *STATE_VARIABLE_IntImplicitFIMLangs_43 = ((MR_Word) (conv11_STATE_VARIABLE_IntImplicitFIMLangs_43));
    parse_tree__comp_unit_interface__get_int2_langs_from_int1_imp_types_3_p_0(ImpTypeDefns_32, STATE_VARIABLE_ImpImplicitFIMLangs_0_44, STATE_VARIABLE_ImpImplicitFIMLangs_45);
    {
      SrcDefnsStd_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SrcDefnsStd_35, 0) = ((MR_Box) (IntTypeDefns_34));
      MR_hl_field(0, SrcDefnsStd_35, 1) = ((MR_Box) (ImpTypeDefns_32));
      MR_hl_field(0, SrcDefnsStd_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeCtorCheckedDefn_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TypeCtorCheckedDefn_27, 0) = ((MR_Box) (StdTypeDefn_30));
      MR_hl_field(1, TypeCtorCheckedDefn_27, 1) = ((MR_Box) (SrcDefnsStd_35));
    }
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (TypeCtorCheckedDefn_27)), STATE_VARIABLE_ShortTypeCtorCheckedMap_0_36, STATE_VARIABLE_ShortTypeCtorCheckedMap_37);
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_langs_from_int1_imp_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_2,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImpImplicitFIMLangs_3 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
    else
    {
      MR_Word ImpTypeDefn_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImpTypeDefns_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeDefn_10 = ((MR_Word) ((MR_hl_field(0, ImpTypeDefn_7, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_18_18;
      MR_Word DetailsForeign_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2;

      succeeded = ((((MR_tag((MR_Word) TypeDefn_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeDefn_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        DetailsForeign_11 = ((MR_Word) ((MR_hl_field(3, TypeDefn_10, (MR_Integer) 1))));
        {
          MR_Word ForeignType_12 = ((MR_Word) ((MR_hl_field(0, DetailsForeign_11, (MR_Integer) 0))));
          MR_Word Lang_15;

          Lang_15 = parse_tree__prog_foreign__foreign_type_language_1_f_0(ForeignType_12);
          mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_15)), STATE_VARIABLE_ImpImplicitFIMLangs_0_2, &STATE_VARIABLE_ImpImplicitFIMLangs_18_18);
        }
      }
      else
        STATE_VARIABLE_ImpImplicitFIMLangs_18_18 = STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImpTypeDefns_8;
      next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2 = STATE_VARIABLE_ImpImplicitFIMLangs_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ImpImplicitFIMLangs_0_2 = next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_imports_into_uses_int_only_6_p_0(
  MR_Word UnqualSymNames_7,
  MR_Word UsedModuleNames_8,
  MR_Word ModuleName_9,
  MR_Word ImportUse0_10,
  MR_Word STATE_VARIABLE_ShortUseOnlyMap_0_16,
  MR_Word * STATE_VARIABLE_ShortUseOnlyMap_17)
{
  MR_bool succeeded = (UnqualSymNames_7 == (MR_Integer) 0);
  MR_Word TypeCtorInfo_23_23;

  if (succeeded)
  {
    TypeCtorInfo_23_23 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_23_23, UsedModuleNames_8, ((MR_Box) (ModuleName_9)));
    succeeded = !(succeeded);
  }
  if (succeeded)
    *STATE_VARIABLE_ShortUseOnlyMap_17 = STATE_VARIABLE_ShortUseOnlyMap_0_16;
  else
  if (((MR_tag((MR_Word) ImportUse0_10)) == (MR_Integer) 0))
  {
    MR_Word Explicit0_12 = ((MR_Word) ((MR_hl_field(0, ImportUse0_10, (MR_Integer) 0))));
    MR_Word Explicit_13;

    switch (MR_tag((MR_Word) Explicit0_12)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word IntContext_28 = ((MR_Word) ((MR_hl_field(0, Explicit0_12, (MR_Integer) 0))));

          {
            Explicit_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Explicit_13, 0) = ((MR_Box) (IntContext_28));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntContext_32 = ((MR_Word) ((MR_hl_field(1, Explicit0_12, (MR_Integer) 0))));

          {
            Explicit_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Explicit_13, 0) = ((MR_Box) (IntContext_32));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Explicit0_12, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntContext_33 = ((MR_Word) ((MR_hl_field(3, Explicit0_12, (MR_Integer) 1))));

              {
                Explicit_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Explicit_13, 0) = ((MR_Box) (IntContext_33));
              }
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (Explicit_13)), STATE_VARIABLE_ShortUseOnlyMap_0_16, STATE_VARIABLE_ShortUseOnlyMap_17);
    else
      *STATE_VARIABLE_ShortUseOnlyMap_17 = STATE_VARIABLE_ShortUseOnlyMap_0_16;
  }
  else
  {
    MR_Word MaybeExplicit0_15 = ((MR_Word) ((MR_hl_field(1, ImportUse0_10, (MR_Integer) 1))));
    MR_Word Explicit_22;
    MR_Word Explicit0_20;

    succeeded = (MaybeExplicit0_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Explicit0_20 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit0_15, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) Explicit0_20)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word IntContext_34 = ((MR_Word) ((MR_hl_field(0, Explicit0_20, (MR_Integer) 0))));

            {
              Explicit_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Explicit_22, 0) = ((MR_Box) (IntContext_34));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntContext_38 = ((MR_Word) ((MR_hl_field(1, Explicit0_20, (MR_Integer) 0))));

            {
              Explicit_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Explicit_22, 0) = ((MR_Box) (IntContext_38));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Explicit0_20, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_39 = ((MR_Word) ((MR_hl_field(3, Explicit0_20, (MR_Integer) 1))));

                {
                  Explicit_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Explicit_22, 0) = ((MR_Box) (IntContext_39));
                }
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
    }
    if (succeeded)
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (Explicit_22)), STATE_VARIABLE_ShortUseOnlyMap_0_16, STATE_VARIABLE_ShortUseOnlyMap_17);
    else
      *STATE_VARIABLE_ShortUseOnlyMap_17 = STATE_VARIABLE_ShortUseOnlyMap_0_16;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(
  MR_Word NeededLangs_3,
  MR_Word FIMSpec_4)
{
  MR_bool succeeded;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_4, (MR_Integer) 0))) & (MR_Integer) 3);

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), NeededLangs_3, ((MR_Box) (Lang_5)));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_imp_details_for_int1_8_p_0(
  MR_Word BothTypesMap_9,
  MR_Word NeededImpTypeCtors_10,
  MR_Word TypeCtor_11,
  MR_Word TypeCtorCheckedDefn0_12,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_19,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_20,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_21,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_22)
{
  if (((MR_tag((MR_Word) TypeCtorCheckedDefn0_12)) == (MR_Integer) 0))
  {
    MR_Word SolverTypeDefn0_23 = ((MR_Word) ((MR_hl_field(0, TypeCtorCheckedDefn0_12, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SolverTypeDefn0_23)) == (MR_Integer) 0))
    {
      MR_Word AbstractSolverStatus_25 = ((MR_Unsigned) ((MR_hl_field(0, SolverTypeDefn0_23, (MR_Integer) 0))) & (MR_Integer) 1);

      switch (AbstractSolverStatus_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_19, STATE_VARIABLE_TypeCtorCheckedMap_20);
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_TypeCtorCheckedMap_20 = STATE_VARIABLE_TypeCtorCheckedMap_0_19;
          break;
      }
    }
    else
    {
      MR_Word MaybeAbstractDefn_27 = ((MR_Word) ((MR_hl_field(1, SolverTypeDefn0_23, (MR_Integer) 0))));

      if ((MaybeAbstractDefn_27 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_TypeCtorCheckedMap_20 = STATE_VARIABLE_TypeCtorCheckedMap_0_19;
      else
      {
        MR_Word AbstractDefn_29 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractDefn_27, (MR_Integer) 0))));
        MR_Word SolverTypeDefn_30;
        MR_Word SrcDefnsSolver_31;
        MR_Word TypeCtorCheckedDefn_32;
        MR_Word Var_34;
        MR_Word Var_35;

        {
          SolverTypeDefn_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SolverTypeDefn_30, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, SolverTypeDefn_30, 1) = ((MR_Box) (AbstractDefn_29));
        }
        Var_35 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_29);
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
        }
        {
          SrcDefnsSolver_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefnsSolver_31, 0) = ((MR_Box) (Var_34));
          MR_hl_field(0, SrcDefnsSolver_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorCheckedDefn_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtorCheckedDefn_32, 0) = ((MR_Box) (SolverTypeDefn_30));
          MR_hl_field(0, TypeCtorCheckedDefn_32, 1) = ((MR_Box) (SrcDefnsSolver_31));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_32)), STATE_VARIABLE_TypeCtorCheckedMap_0_19, STATE_VARIABLE_TypeCtorCheckedMap_20);
      }
    }
    *STATE_VARIABLE_ImpImplicitFIMLangs_22 = STATE_VARIABLE_ImpImplicitFIMLangs_0_21;
  }
  else
    parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0(BothTypesMap_9, NeededImpTypeCtors_10, TypeCtor_11, TypeCtorCheckedDefn0_12, STATE_VARIABLE_TypeCtorCheckedMap_0_19, STATE_VARIABLE_TypeCtorCheckedMap_20, STATE_VARIABLE_ImpImplicitFIMLangs_0_21, STATE_VARIABLE_ImpImplicitFIMLangs_22);
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv18_STATE_VARIABLE_Langs_21;

  parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_Langs_21);
  *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_Langs_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_Langs_21;

  parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_Langs_21);
  *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_Langs_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_Langs_21;

  parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_Langs_21);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_Langs_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Langs_21;

  parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Langs_21);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Langs_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Langs_21;

  parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Langs_21);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Langs_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Langs_21;

  parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Langs_21);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Langs_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Langs_21;

  parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Langs_21);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Langs_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Langs_21;

  parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Langs_21);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Langs_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Langs_21;

  parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Langs_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Langs_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Langs_12;

  parse_tree__comp_unit_interface__record_foreign_lang_in_foreign_enum_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Langs_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Langs_12));
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0(
  MR_Word BothTypesMap_9,
  MR_Word NeededImpTypeCtors_10,
  MR_Word TypeCtor_11,
  MR_Word TypeCtorCheckedDefn0_12,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_50,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_51,
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_0_52,
  MR_Word * STATE_VARIABLE_ImpImplicitFIMLangs_53)
{
  MR_bool succeeded;
  MR_Word StdTypeDefn0_15 = ((MR_Word) ((MR_hl_field(1, TypeCtorCheckedDefn0_12, (MR_Integer) 0))));
  MR_Word SrcDefnsStd0_16 = ((MR_Word) ((MR_hl_field(1, TypeCtorCheckedDefn0_12, (MR_Integer) 1))));
  MR_Word SrcIntDefns0_17 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd0_16, (MR_Integer) 0))));
  MR_Word SrcImpDefns0_18 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd0_16, (MR_Integer) 1))));
  MR_Word SrcImpForeignEnums_19 = ((MR_Word) ((MR_hl_field(0, SrcDefnsStd0_16, (MR_Integer) 2))));
  MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
  MR_Box conv1_STATE_VARIABLE_ImpImplicitFIMLangs_55_55;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[49]), SrcImpForeignEnums_19, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_0_52)), &conv1_STATE_VARIABLE_ImpImplicitFIMLangs_55_55);
  STATE_VARIABLE_ImpImplicitFIMLangs_55_55 = ((MR_Word) (conv1_STATE_VARIABLE_ImpImplicitFIMLangs_55_55));
  switch (MR_tag((MR_Word) StdTypeDefn0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word EqvStatus_20 = ((MR_Unsigned) ((MR_hl_field(0, StdTypeDefn0_15, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word EqvDefn_21 = ((MR_Word) ((MR_hl_field(0, StdTypeDefn0_15, (MR_Integer) 1))));

        succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
        if (succeeded)
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
        else
          switch (EqvStatus_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word AbstractDefn_23;
                MR_Word StdTypeDefn_25;
                MR_Word SrcDefnsStd_26;
                MR_Word TypeCtorCheckedDefn_27;
                MR_Word Var_62;
                MR_Word Var_63;
                MR_Word Var_343 = ((MR_Word) ((MR_hl_field(0, EqvDefn_21, (MR_Integer) 0))));
                MR_Word Var_344 = ((MR_Word) ((MR_hl_field(0, EqvDefn_21, (MR_Integer) 1))));
                MR_Word Var_346 = ((MR_Word) ((MR_hl_field(0, EqvDefn_21, (MR_Integer) 3))));
                MR_Word Var_347 = ((MR_Word) ((MR_hl_field(0, EqvDefn_21, (MR_Integer) 4))));
                MR_Word Var_348 = ((MR_Word) ((MR_hl_field(0, EqvDefn_21, (MR_Integer) 5))));

                {
                  AbstractDefn_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, AbstractDefn_23, 0) = ((MR_Box) (Var_343));
                  MR_hl_field(0, AbstractDefn_23, 1) = ((MR_Box) (Var_344));
                  MR_hl_field(0, AbstractDefn_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, AbstractDefn_23, 3) = ((MR_Box) (Var_346));
                  MR_hl_field(0, AbstractDefn_23, 4) = ((MR_Box) (Var_347));
                  MR_hl_field(0, AbstractDefn_23, 5) = ((MR_Box) (Var_348));
                }
                {
                  StdTypeDefn_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, StdTypeDefn_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, StdTypeDefn_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, StdTypeDefn_25, 2) = ((MR_Box) (AbstractDefn_23));
                  MR_hl_field(3, StdTypeDefn_25, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                }
                Var_63 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_23);
                {
                  Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
                  MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SrcDefnsStd_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefnsStd_26, 0) = ((MR_Box) (Var_62));
                  MR_hl_field(0, SrcDefnsStd_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, SrcDefnsStd_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  TypeCtorCheckedDefn_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, TypeCtorCheckedDefn_27, 0) = ((MR_Box) (StdTypeDefn_25));
                  MR_hl_field(1, TypeCtorCheckedDefn_27, 1) = ((MR_Box) (SrcDefnsStd_26));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_27)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_TypeCtorCheckedMap_51 = STATE_VARIABLE_TypeCtorCheckedMap_0_50;
              break;
            case (MR_Integer) 0:
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
              break;
          }
        *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SubStatus_28 = ((MR_Unsigned) ((MR_hl_field(1, StdTypeDefn0_15, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word SubDefn_29 = ((MR_Word) ((MR_hl_field(1, StdTypeDefn0_15, (MR_Integer) 1))));

        switch (SubStatus_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word SrcImpDefns_30;
              MR_Word AbstractDefn_142;
              MR_Word StdTypeDefn_144;
              MR_Word SrcDefnsStd_145;
              MR_Word TypeCtorCheckedDefn_146;

              AbstractDefn_142 = parse_tree__comp_unit_interface__make_subtype_defn_abstract_1_f_0(SubDefn_29);
              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
              if (succeeded)
              {
                MR_Word Var_69;

                Var_69 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_142);
                {
                  SrcImpDefns_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SrcImpDefns_30, 0) = ((MR_Box) (Var_69));
                  MR_hl_field(1, SrcImpDefns_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
                SrcImpDefns_30 = (MR_Word) ((MR_Unsigned) 0U);
              {
                StdTypeDefn_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, StdTypeDefn_144, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, StdTypeDefn_144, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(3, StdTypeDefn_144, 2) = ((MR_Box) (AbstractDefn_142));
                MR_hl_field(3, StdTypeDefn_144, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
              }
              {
                SrcDefnsStd_145 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SrcDefnsStd_145, 0) = ((MR_Box) (SrcIntDefns0_17));
                MR_hl_field(0, SrcDefnsStd_145, 1) = ((MR_Box) (SrcImpDefns_30));
                MR_hl_field(0, SrcDefnsStd_145, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                TypeCtorCheckedDefn_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, TypeCtorCheckedDefn_146, 0) = ((MR_Box) (StdTypeDefn_144));
                MR_hl_field(1, TypeCtorCheckedDefn_146, 1) = ((MR_Box) (SrcDefnsStd_145));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_146)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
            }
            break;
          case (MR_Integer) 2:
            {
              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
              if (succeeded)
              {
                MR_Word Var_79;
                MR_Word AbstractDefn_148;
                MR_Word StdTypeDefn_150;
                MR_Word SrcDefnsStd_151;
                MR_Word TypeCtorCheckedDefn_152;
                MR_Word SrcImpDefns_153;

                AbstractDefn_148 = parse_tree__comp_unit_interface__make_subtype_defn_abstract_1_f_0(SubDefn_29);
                {
                  StdTypeDefn_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, StdTypeDefn_150, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, StdTypeDefn_150, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  MR_hl_field(3, StdTypeDefn_150, 2) = ((MR_Box) (AbstractDefn_148));
                  MR_hl_field(3, StdTypeDefn_150, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                }
                Var_79 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_148);
                {
                  SrcImpDefns_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SrcImpDefns_153, 0) = ((MR_Box) (Var_79));
                  MR_hl_field(1, SrcImpDefns_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SrcDefnsStd_151 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefnsStd_151, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, SrcDefnsStd_151, 1) = ((MR_Box) (SrcImpDefns_153));
                  MR_hl_field(0, SrcDefnsStd_151, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  TypeCtorCheckedDefn_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, TypeCtorCheckedDefn_152, 0) = ((MR_Box) (StdTypeDefn_150));
                  MR_hl_field(1, TypeCtorCheckedDefn_152, 1) = ((MR_Box) (SrcDefnsStd_151));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_152)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
              }
              else
                *STATE_VARIABLE_TypeCtorCheckedMap_51 = STATE_VARIABLE_TypeCtorCheckedMap_0_50;
            }
            break;
          case (MR_Integer) 0:
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
            break;
        }
        *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word DuStatus_31 = ((MR_Unsigned) ((MR_hl_field(2, StdTypeDefn0_15, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word DuDefn_32 = ((MR_Word) ((MR_hl_field(2, StdTypeDefn0_15, (MR_Integer) 1))));
        MR_String HeadCtor0_33 = ((MR_String) ((MR_hl_field(2, StdTypeDefn0_15, (MR_Integer) 2))));
        MR_Word TailCtors0_34 = ((MR_Word) ((MR_hl_field(2, StdTypeDefn0_15, (MR_Integer) 3))));
        MR_Word MaybeCJCsDefnOrEnum0_35 = ((MR_Word) ((MR_hl_field(2, StdTypeDefn0_15, (MR_Integer) 4))));
        MR_Word Extras0_36;

        {
          Extras0_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Extras0_36, 0) = ((MR_Box) (HeadCtor0_33));
          MR_hl_field(0, Extras0_36, 1) = ((MR_Box) (TailCtors0_34));
          MR_hl_field(0, Extras0_36, 2) = ((MR_Box) (MaybeCJCsDefnOrEnum0_35));
        }
        switch (DuStatus_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              MR_Word MaybeCJCsDefn1_42;

              parse_tree__comp_unit_interface__delete_any_foreign_enum_from_extras_2_p_0(Extras0_36, &MaybeCJCsDefn1_42);
              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
              if (succeeded)
              {
                MR_Word Var_91 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_42, (MR_Integer) 0))));
                MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_42, (MR_Integer) 1))));
                MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_42, (MR_Integer) 2))));

                succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                    succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                {
                  MR_Word MaybeAbstractDefn_43;
                  MR_Word StdTypeDefn_220;
                  MR_Word SrcDefnsStd_221;
                  MR_Word TypeCtorCheckedDefn_222;
                  MR_Word SrcImpDefns_223;

                  parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(BothTypesMap_9, DuDefn_32, &MaybeAbstractDefn_43);
                  if ((MaybeAbstractDefn_43 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_94;
                    MR_String HeadCtor_202 = ((MR_String) ((MR_hl_field(0, Extras0_36, (MR_Integer) 0))));
                    MR_Word TailCtors_203 = ((MR_Word) ((MR_hl_field(0, Extras0_36, (MR_Integer) 1))));
                    MR_Word MaybeCJCsDefnOrEnum_204;

                    parse_tree__comp_unit_interface__wrap_cjcs_foreign_type_no_enums_2_p_0(MaybeCJCsDefn1_42, &MaybeCJCsDefnOrEnum_204);
                    {
                      StdTypeDefn_220 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, StdTypeDefn_220, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_31));
                      MR_hl_field(2, StdTypeDefn_220, 1) = ((MR_Box) (DuDefn_32));
                      MR_hl_field(2, StdTypeDefn_220, 2) = ((MR_Box) (HeadCtor_202));
                      MR_hl_field(2, StdTypeDefn_220, 3) = ((MR_Box) (TailCtors_203));
                      MR_hl_field(2, StdTypeDefn_220, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_204));
                    }
                    Var_94 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_32);
                    {
                      SrcImpDefns_223 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SrcImpDefns_223, 0) = ((MR_Box) (Var_94));
                      MR_hl_field(1, SrcImpDefns_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  else
                  {
                    MR_Word DetailsAbs_46;
                    MR_Word AbstractDefn_212 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractDefn_43, (MR_Integer) 0))));

                    {
                      StdTypeDefn_220 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdTypeDefn_220, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, StdTypeDefn_220, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, StdTypeDefn_220, 2) = ((MR_Box) (AbstractDefn_212));
                      MR_hl_field(3, StdTypeDefn_220, 3) = ((MR_Box) (MaybeCJCsDefn1_42));
                    }
                    DetailsAbs_46 = ((MR_Word) ((MR_hl_field(0, AbstractDefn_212, (MR_Integer) 2))));
                    succeeded = (DetailsAbs_46 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      SrcImpDefns_223 = (MR_Word) ((MR_Unsigned) 0U);
                    else
                    {
                      MR_Word Var_96;

                      Var_96 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_212);
                      {
                        SrcImpDefns_223 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SrcImpDefns_223, 0) = ((MR_Box) (Var_96));
                        MR_hl_field(1, SrcImpDefns_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                  }
                  {
                    SrcDefnsStd_221 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, SrcDefnsStd_221, 0) = ((MR_Box) (SrcIntDefns0_17));
                    MR_hl_field(0, SrcDefnsStd_221, 1) = ((MR_Box) (SrcImpDefns_223));
                    MR_hl_field(0, SrcDefnsStd_221, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    TypeCtorCheckedDefn_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, TypeCtorCheckedDefn_222, 0) = ((MR_Box) (StdTypeDefn_220));
                    MR_hl_field(1, TypeCtorCheckedDefn_222, 1) = ((MR_Box) (SrcDefnsStd_221));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_222)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                  *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                }
                else
                {
                  MR_String HeadCtor_227 = ((MR_String) ((MR_hl_field(0, Extras0_36, (MR_Integer) 0))));
                  MR_Word TailCtors_228 = ((MR_Word) ((MR_hl_field(0, Extras0_36, (MR_Integer) 1))));
                  MR_Word MaybeCJCsDefnOrEnum_229;
                  MR_Word StdTypeDefn_233;
                  MR_Word SrcDefnsStd_234;
                  MR_Word TypeCtorCheckedDefn_235;
                  MR_Box conv9_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                  parse_tree__comp_unit_interface__wrap_cjcs_foreign_type_no_enums_2_p_0(MaybeCJCsDefn1_42, &MaybeCJCsDefnOrEnum_229);
                  {
                    StdTypeDefn_233 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, StdTypeDefn_233, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_31));
                    MR_hl_field(2, StdTypeDefn_233, 1) = ((MR_Box) (DuDefn_32));
                    MR_hl_field(2, StdTypeDefn_233, 2) = ((MR_Box) (HeadCtor_227));
                    MR_hl_field(2, StdTypeDefn_233, 3) = ((MR_Box) (TailCtors_228));
                    MR_hl_field(2, StdTypeDefn_233, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_229));
                  }
                  {
                    SrcDefnsStd_234 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, SrcDefnsStd_234, 0) = ((MR_Box) (SrcIntDefns0_17));
                    MR_hl_field(0, SrcDefnsStd_234, 1) = ((MR_Box) (SrcImpDefns0_18));
                    MR_hl_field(0, SrcDefnsStd_234, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[53]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv9_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                  *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv9_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                  {
                    TypeCtorCheckedDefn_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, TypeCtorCheckedDefn_235, 0) = ((MR_Box) (StdTypeDefn_233));
                    MR_hl_field(1, TypeCtorCheckedDefn_235, 1) = ((MR_Box) (SrcDefnsStd_234));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_235)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                }
              }
              else
              {
                MR_Word AbstractDefn_249;
                MR_Word StdTypeDefn_251;
                MR_Word SrcDefnsStd_252;
                MR_Word TypeCtorCheckedDefn_253;
                MR_Word SrcImpDefns_254;
                MR_Word MaybeAbstractDefn_255;

                parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(BothTypesMap_9, DuDefn_32, &MaybeAbstractDefn_255);
                if ((MaybeAbstractDefn_255 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_105;
                  MR_Word Var_354 = ((MR_Word) ((MR_hl_field(0, DuDefn_32, (MR_Integer) 0))));
                  MR_Word Var_355 = ((MR_Word) ((MR_hl_field(0, DuDefn_32, (MR_Integer) 1))));
                  MR_Word Var_357 = ((MR_Word) ((MR_hl_field(0, DuDefn_32, (MR_Integer) 3))));
                  MR_Word Var_358 = ((MR_Word) ((MR_hl_field(0, DuDefn_32, (MR_Integer) 4))));
                  MR_Word Var_359 = ((MR_Word) ((MR_hl_field(0, DuDefn_32, (MR_Integer) 5))));

                  {
                    AbstractDefn_249 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, AbstractDefn_249, 0) = ((MR_Box) (Var_354));
                    MR_hl_field(0, AbstractDefn_249, 1) = ((MR_Box) (Var_355));
                    MR_hl_field(0, AbstractDefn_249, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, AbstractDefn_249, 3) = ((MR_Box) (Var_357));
                    MR_hl_field(0, AbstractDefn_249, 4) = ((MR_Box) (Var_358));
                    MR_hl_field(0, AbstractDefn_249, 5) = ((MR_Box) (Var_359));
                  }
                  Var_105 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_32);
                  {
                    SrcImpDefns_254 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SrcImpDefns_254, 0) = ((MR_Box) (Var_105));
                    MR_hl_field(1, SrcImpDefns_254, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  AbstractDefn_249 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractDefn_255, (MR_Integer) 0))));
                  SrcImpDefns_254 = (MR_Word) ((MR_Unsigned) 0U);
                }
                {
                  StdTypeDefn_251 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, StdTypeDefn_251, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, StdTypeDefn_251, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, StdTypeDefn_251, 2) = ((MR_Box) (AbstractDefn_249));
                  MR_hl_field(3, StdTypeDefn_251, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                }
                {
                  SrcDefnsStd_252 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefnsStd_252, 0) = ((MR_Box) (SrcIntDefns0_17));
                  MR_hl_field(0, SrcDefnsStd_252, 1) = ((MR_Box) (SrcImpDefns_254));
                  MR_hl_field(0, SrcDefnsStd_252, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  TypeCtorCheckedDefn_253 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, TypeCtorCheckedDefn_253, 0) = ((MR_Box) (StdTypeDefn_251));
                  MR_hl_field(1, TypeCtorCheckedDefn_253, 1) = ((MR_Box) (SrcDefnsStd_252));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_253)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word MaybeCJCsDefn1_309;

              parse_tree__comp_unit_interface__delete_any_foreign_enum_from_extras_2_p_0(Extras0_36, &MaybeCJCsDefn1_309);
              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
              if (succeeded)
              {
                MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_309, (MR_Integer) 0))));
                MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_309, (MR_Integer) 1))));
                MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_309, (MR_Integer) 2))));

                succeeded = (Var_112 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (Var_113 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                    succeeded = (Var_114 == (MR_Word) ((MR_Unsigned) 0U));
                }
                if (succeeded)
                {
                  MR_Word StdTypeDefn_282;
                  MR_Word SrcDefnsStd_283;
                  MR_Word TypeCtorCheckedDefn_284;
                  MR_Word SrcImpDefns_285;
                  MR_Word MaybeAbstractDefn_286;

                  parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(BothTypesMap_9, DuDefn_32, &MaybeAbstractDefn_286);
                  if ((MaybeAbstractDefn_286 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_115;

                    StdTypeDefn_282 = StdTypeDefn0_15;
                    Var_115 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_32);
                    {
                      SrcImpDefns_285 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SrcImpDefns_285, 0) = ((MR_Box) (Var_115));
                      MR_hl_field(1, SrcImpDefns_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  else
                  {
                    MR_Word Var_117;
                    MR_Word AbstractDefn_277 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractDefn_286, (MR_Integer) 0))));

                    {
                      StdTypeDefn_282 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdTypeDefn_282, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, StdTypeDefn_282, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, StdTypeDefn_282, 2) = ((MR_Box) (AbstractDefn_277));
                      MR_hl_field(3, StdTypeDefn_282, 3) = ((MR_Box) (MaybeCJCsDefn1_309));
                    }
                    Var_117 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_277);
                    {
                      SrcImpDefns_285 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, SrcImpDefns_285, 0) = ((MR_Box) (Var_117));
                      MR_hl_field(1, SrcImpDefns_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  {
                    SrcDefnsStd_283 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, SrcDefnsStd_283, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, SrcDefnsStd_283, 1) = ((MR_Box) (SrcImpDefns_285));
                    MR_hl_field(0, SrcDefnsStd_283, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    TypeCtorCheckedDefn_284 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, TypeCtorCheckedDefn_284, 0) = ((MR_Box) (StdTypeDefn_282));
                    MR_hl_field(1, TypeCtorCheckedDefn_284, 1) = ((MR_Box) (SrcDefnsStd_283));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_284)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                  *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                }
                else
                {
                  MR_Word SrcDefnsStd_287;
                  MR_Word TypeCtorCheckedDefn_288;
                  MR_Box conv11_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                  {
                    SrcDefnsStd_287 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, SrcDefnsStd_287, 0) = ((MR_Box) (SrcIntDefns0_17));
                    MR_hl_field(0, SrcDefnsStd_287, 1) = ((MR_Box) (SrcImpDefns0_18));
                    MR_hl_field(0, SrcDefnsStd_287, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[54]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv11_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                  *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv11_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                  {
                    TypeCtorCheckedDefn_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, TypeCtorCheckedDefn_288, 0) = ((MR_Box) (StdTypeDefn0_15));
                    MR_hl_field(1, TypeCtorCheckedDefn_288, 1) = ((MR_Box) (SrcDefnsStd_287));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_288)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                }
              }
              else
              {
                *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                *STATE_VARIABLE_TypeCtorCheckedMap_51 = STATE_VARIABLE_TypeCtorCheckedMap_0_50;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
              if (succeeded)
              {
                MR_Box conv13_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[55]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv13_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv13_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
              }
              else
              {
                MR_Word Extras_38;

                parse_tree__comp_unit_interface__delete_any_foreign_type_defn_from_extras_2_p_0(Extras0_36, &Extras_38);
                succeeded = parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0(Extras_38, Extras0_36);
                if (succeeded)
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                else
                {
                  MR_Word StdTypeDefn_183;
                  MR_Word SrcDefnsStd_184;
                  MR_Word TypeCtorCheckedDefn_185;

                  if (((MR_tag((MR_Word) Extras_38)) == (MR_Integer) 0))
                  {
                    MR_String HeadCtor_39 = ((MR_String) ((MR_hl_field(0, Extras_38, (MR_Integer) 0))));
                    MR_Word TailCtors_40 = ((MR_Word) ((MR_hl_field(0, Extras_38, (MR_Integer) 1))));
                    MR_Word MaybeCJCsDefnOrEnum_41 = ((MR_Word) ((MR_hl_field(0, Extras_38, (MR_Integer) 2))));

                    {
                      StdTypeDefn_183 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, StdTypeDefn_183, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_31));
                      MR_hl_field(2, StdTypeDefn_183, 1) = ((MR_Box) (DuDefn_32));
                      MR_hl_field(2, StdTypeDefn_183, 2) = ((MR_Box) (HeadCtor_39));
                      MR_hl_field(2, StdTypeDefn_183, 3) = ((MR_Box) (TailCtors_40));
                      MR_hl_field(2, StdTypeDefn_183, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_41));
                    }
                  }
                  else
                  {
                    MR_Word MaybeCJCsDefn_180 = ((MR_Word) ((MR_hl_field(1, Extras_38, (MR_Integer) 0))));

                    {
                      StdTypeDefn_183 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdTypeDefn_183, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, StdTypeDefn_183, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_31));
                      MR_hl_field(3, StdTypeDefn_183, 2) = ((MR_Box) (DuDefn_32));
                      MR_hl_field(3, StdTypeDefn_183, 3) = ((MR_Box) (MaybeCJCsDefn_180));
                    }
                  }
                  {
                    SrcDefnsStd_184 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, SrcDefnsStd_184, 0) = ((MR_Box) (SrcIntDefns0_17));
                    MR_hl_field(0, SrcDefnsStd_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, SrcDefnsStd_184, 2) = ((MR_Box) (SrcImpForeignEnums_19));
                  }
                  {
                    TypeCtorCheckedDefn_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, TypeCtorCheckedDefn_185, 0) = ((MR_Box) (StdTypeDefn_183));
                    MR_hl_field(1, TypeCtorCheckedDefn_185, 1) = ((MR_Box) (SrcDefnsStd_184));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_185)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                }
                *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
              *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, StdTypeDefn0_15, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeCJCsDefn0_37 = ((MR_Word) ((MR_hl_field(3, StdTypeDefn0_15, (MR_Integer) 3))));
            MR_Word DuStatus_1096 = ((MR_Unsigned) ((MR_hl_field(3, StdTypeDefn0_15, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word DuDefn_1097 = ((MR_Word) ((MR_hl_field(3, StdTypeDefn0_15, (MR_Integer) 2))));
            MR_Word Extras0_1098;

            {
              Extras0_1098 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Extras0_1098, 0) = ((MR_Box) (MaybeCJCsDefn0_37));
            }
            switch (DuStatus_1096) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                {
                  MR_Word MaybeCJCsDefn1_707;

                  parse_tree__comp_unit_interface__delete_any_foreign_enum_from_extras_2_p_0(Extras0_1098, &MaybeCJCsDefn1_707);
                  succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
                  if (succeeded)
                  {
                    MR_Word Var_436 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_707, (MR_Integer) 0))));
                    MR_Word Var_437 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_707, (MR_Integer) 1))));
                    MR_Word Var_438 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_707, (MR_Integer) 2))));

                    succeeded = (Var_436 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Var_437 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        succeeded = (Var_438 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                    if (succeeded)
                    {
                      MR_Word MaybeAbstractDefn_494;
                      MR_Word StdTypeDefn_508;
                      MR_Word SrcDefnsStd_509;
                      MR_Word TypeCtorCheckedDefn_510;
                      MR_Word SrcImpDefns_511;

                      parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(BothTypesMap_9, DuDefn_1097, &MaybeAbstractDefn_494);
                      if ((MaybeAbstractDefn_494 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Var_453;

                        {
                          StdTypeDefn_508 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, StdTypeDefn_508, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, StdTypeDefn_508, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_1096));
                          MR_hl_field(3, StdTypeDefn_508, 2) = ((MR_Box) (DuDefn_1097));
                          MR_hl_field(3, StdTypeDefn_508, 3) = ((MR_Box) (MaybeCJCsDefn1_707));
                        }
                        Var_453 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_1097);
                        {
                          SrcImpDefns_511 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, SrcImpDefns_511, 0) = ((MR_Box) (Var_453));
                          MR_hl_field(1, SrcImpDefns_511, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      else
                      {
                        MR_Word DetailsAbs_467;
                        MR_Word AbstractDefn_471 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractDefn_494, (MR_Integer) 0))));

                        {
                          StdTypeDefn_508 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, StdTypeDefn_508, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, StdTypeDefn_508, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                          MR_hl_field(3, StdTypeDefn_508, 2) = ((MR_Box) (AbstractDefn_471));
                          MR_hl_field(3, StdTypeDefn_508, 3) = ((MR_Box) (MaybeCJCsDefn1_707));
                        }
                        DetailsAbs_467 = ((MR_Word) ((MR_hl_field(0, AbstractDefn_471, (MR_Integer) 2))));
                        succeeded = (DetailsAbs_467 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                          SrcImpDefns_511 = (MR_Word) ((MR_Unsigned) 0U);
                        else
                        {
                          MR_Word Var_463;

                          Var_463 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_471);
                          {
                            SrcImpDefns_511 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, SrcImpDefns_511, 0) = ((MR_Box) (Var_463));
                            MR_hl_field(1, SrcImpDefns_511, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                      }
                      {
                        SrcDefnsStd_509 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, SrcDefnsStd_509, 0) = ((MR_Box) (SrcIntDefns0_17));
                        MR_hl_field(0, SrcDefnsStd_509, 1) = ((MR_Box) (SrcImpDefns_511));
                        MR_hl_field(0, SrcDefnsStd_509, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        TypeCtorCheckedDefn_510 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TypeCtorCheckedDefn_510, 0) = ((MR_Box) (StdTypeDefn_508));
                        MR_hl_field(1, TypeCtorCheckedDefn_510, 1) = ((MR_Box) (SrcDefnsStd_509));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_510)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                      *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                    }
                    else
                    {
                      MR_Word StdTypeDefn_541;
                      MR_Word SrcDefnsStd_542;
                      MR_Word TypeCtorCheckedDefn_543;
                      MR_Box conv15_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                      {
                        StdTypeDefn_541 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, StdTypeDefn_541, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, StdTypeDefn_541, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_1096));
                        MR_hl_field(3, StdTypeDefn_541, 2) = ((MR_Box) (DuDefn_1097));
                        MR_hl_field(3, StdTypeDefn_541, 3) = ((MR_Box) (MaybeCJCsDefn1_707));
                      }
                      {
                        SrcDefnsStd_542 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, SrcDefnsStd_542, 0) = ((MR_Box) (SrcIntDefns0_17));
                        MR_hl_field(0, SrcDefnsStd_542, 1) = ((MR_Box) (SrcImpDefns0_18));
                        MR_hl_field(0, SrcDefnsStd_542, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[56]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv15_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                      *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv15_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                      {
                        TypeCtorCheckedDefn_543 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TypeCtorCheckedDefn_543, 0) = ((MR_Box) (StdTypeDefn_541));
                        MR_hl_field(1, TypeCtorCheckedDefn_543, 1) = ((MR_Box) (SrcDefnsStd_542));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_543)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                    }
                  }
                  else
                  {
                    MR_Word AbstractDefn_627;
                    MR_Word StdTypeDefn_629;
                    MR_Word SrcDefnsStd_630;
                    MR_Word TypeCtorCheckedDefn_631;
                    MR_Word SrcImpDefns_632;
                    MR_Word MaybeAbstractDefn_633;

                    parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(BothTypesMap_9, DuDefn_1097, &MaybeAbstractDefn_633);
                    if ((MaybeAbstractDefn_633 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word Var_602;
                      MR_Word Var_589 = ((MR_Word) ((MR_hl_field(0, DuDefn_1097, (MR_Integer) 0))));
                      MR_Word Var_590 = ((MR_Word) ((MR_hl_field(0, DuDefn_1097, (MR_Integer) 1))));
                      MR_Word Var_592 = ((MR_Word) ((MR_hl_field(0, DuDefn_1097, (MR_Integer) 3))));
                      MR_Word Var_593 = ((MR_Word) ((MR_hl_field(0, DuDefn_1097, (MR_Integer) 4))));
                      MR_Word Var_594 = ((MR_Word) ((MR_hl_field(0, DuDefn_1097, (MR_Integer) 5))));

                      {
                        AbstractDefn_627 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, AbstractDefn_627, 0) = ((MR_Box) (Var_589));
                        MR_hl_field(0, AbstractDefn_627, 1) = ((MR_Box) (Var_590));
                        MR_hl_field(0, AbstractDefn_627, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, AbstractDefn_627, 3) = ((MR_Box) (Var_592));
                        MR_hl_field(0, AbstractDefn_627, 4) = ((MR_Box) (Var_593));
                        MR_hl_field(0, AbstractDefn_627, 5) = ((MR_Box) (Var_594));
                      }
                      Var_602 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_1097);
                      {
                        SrcImpDefns_632 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SrcImpDefns_632, 0) = ((MR_Box) (Var_602));
                        MR_hl_field(1, SrcImpDefns_632, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    else
                    {
                      AbstractDefn_627 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractDefn_633, (MR_Integer) 0))));
                      SrcImpDefns_632 = (MR_Word) ((MR_Unsigned) 0U);
                    }
                    {
                      StdTypeDefn_629 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdTypeDefn_629, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, StdTypeDefn_629, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, StdTypeDefn_629, 2) = ((MR_Box) (AbstractDefn_627));
                      MR_hl_field(3, StdTypeDefn_629, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                    }
                    {
                      SrcDefnsStd_630 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefnsStd_630, 0) = ((MR_Box) (SrcIntDefns0_17));
                      MR_hl_field(0, SrcDefnsStd_630, 1) = ((MR_Box) (SrcImpDefns_632));
                      MR_hl_field(0, SrcDefnsStd_630, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      TypeCtorCheckedDefn_631 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, TypeCtorCheckedDefn_631, 0) = ((MR_Box) (StdTypeDefn_629));
                      MR_hl_field(1, TypeCtorCheckedDefn_631, 1) = ((MR_Box) (SrcDefnsStd_630));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_631)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word MaybeCJCsDefn1_885;

                  parse_tree__comp_unit_interface__delete_any_foreign_enum_from_extras_2_p_0(Extras0_1098, &MaybeCJCsDefn1_885);
                  succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
                  if (succeeded)
                  {
                    MR_Word Var_774 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_885, (MR_Integer) 0))));
                    MR_Word Var_775 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_885, (MR_Integer) 1))));
                    MR_Word Var_776 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefn1_885, (MR_Integer) 2))));

                    succeeded = (Var_774 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = (Var_775 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        succeeded = (Var_776 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                    if (succeeded)
                    {
                      MR_Word StdTypeDefn_797;
                      MR_Word SrcDefnsStd_798;
                      MR_Word TypeCtorCheckedDefn_799;
                      MR_Word SrcImpDefns_800;
                      MR_Word MaybeAbstractDefn_801;

                      parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(BothTypesMap_9, DuDefn_1097, &MaybeAbstractDefn_801);
                      if ((MaybeAbstractDefn_801 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Var_777;

                        StdTypeDefn_797 = StdTypeDefn0_15;
                        Var_777 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_1097);
                        {
                          SrcImpDefns_800 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, SrcImpDefns_800, 0) = ((MR_Box) (Var_777));
                          MR_hl_field(1, SrcImpDefns_800, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      else
                      {
                        MR_Word Var_779;
                        MR_Word AbstractDefn_782 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractDefn_801, (MR_Integer) 0))));

                        {
                          StdTypeDefn_797 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, StdTypeDefn_797, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(3, StdTypeDefn_797, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                          MR_hl_field(3, StdTypeDefn_797, 2) = ((MR_Box) (AbstractDefn_782));
                          MR_hl_field(3, StdTypeDefn_797, 3) = ((MR_Box) (MaybeCJCsDefn1_885));
                        }
                        Var_779 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_782);
                        {
                          SrcImpDefns_800 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, SrcImpDefns_800, 0) = ((MR_Box) (Var_779));
                          MR_hl_field(1, SrcImpDefns_800, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      {
                        SrcDefnsStd_798 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, SrcDefnsStd_798, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, SrcDefnsStd_798, 1) = ((MR_Box) (SrcImpDefns_800));
                        MR_hl_field(0, SrcDefnsStd_798, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        TypeCtorCheckedDefn_799 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TypeCtorCheckedDefn_799, 0) = ((MR_Box) (StdTypeDefn_797));
                        MR_hl_field(1, TypeCtorCheckedDefn_799, 1) = ((MR_Box) (SrcDefnsStd_798));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_799)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                      *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                    }
                    else
                    {
                      MR_Word SrcDefnsStd_809;
                      MR_Word TypeCtorCheckedDefn_810;
                      MR_Box conv17_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                      {
                        SrcDefnsStd_809 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, SrcDefnsStd_809, 0) = ((MR_Box) (SrcIntDefns0_17));
                        MR_hl_field(0, SrcDefnsStd_809, 1) = ((MR_Box) (SrcImpDefns0_18));
                        MR_hl_field(0, SrcDefnsStd_809, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[57]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv17_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                      *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv17_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                      {
                        TypeCtorCheckedDefn_810 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TypeCtorCheckedDefn_810, 0) = ((MR_Box) (StdTypeDefn0_15));
                        MR_hl_field(1, TypeCtorCheckedDefn_810, 1) = ((MR_Box) (SrcDefnsStd_809));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_810)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                    }
                  }
                  else
                  {
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                    *STATE_VARIABLE_TypeCtorCheckedMap_51 = STATE_VARIABLE_TypeCtorCheckedMap_0_50;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
                  if (succeeded)
                  {
                    MR_Box conv19_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[58]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv19_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv19_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                  }
                  else
                  {
                    MR_Word Extras_932;

                    parse_tree__comp_unit_interface__delete_any_foreign_type_defn_from_extras_2_p_0(Extras0_1098, &Extras_932);
                    succeeded = parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0(Extras_932, Extras0_1098);
                    if (succeeded)
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                    else
                    {
                      MR_Word StdTypeDefn_915;
                      MR_Word SrcDefnsStd_916;
                      MR_Word TypeCtorCheckedDefn_917;

                      if (((MR_tag((MR_Word) Extras_932)) == (MR_Integer) 0))
                      {
                        MR_String HeadCtor_902 = ((MR_String) ((MR_hl_field(0, Extras_932, (MR_Integer) 0))));
                        MR_Word TailCtors_903 = ((MR_Word) ((MR_hl_field(0, Extras_932, (MR_Integer) 1))));
                        MR_Word MaybeCJCsDefnOrEnum_904 = ((MR_Word) ((MR_hl_field(0, Extras_932, (MR_Integer) 2))));

                        {
                          StdTypeDefn_915 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, StdTypeDefn_915, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_1096));
                          MR_hl_field(2, StdTypeDefn_915, 1) = ((MR_Box) (DuDefn_1097));
                          MR_hl_field(2, StdTypeDefn_915, 2) = ((MR_Box) (HeadCtor_902));
                          MR_hl_field(2, StdTypeDefn_915, 3) = ((MR_Box) (TailCtors_903));
                          MR_hl_field(2, StdTypeDefn_915, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_904));
                        }
                      }
                      else
                      {
                        MR_Word MaybeCJCsDefn_905 = ((MR_Word) ((MR_hl_field(1, Extras_932, (MR_Integer) 0))));

                        {
                          StdTypeDefn_915 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, StdTypeDefn_915, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(3, StdTypeDefn_915, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_1096));
                          MR_hl_field(3, StdTypeDefn_915, 2) = ((MR_Box) (DuDefn_1097));
                          MR_hl_field(3, StdTypeDefn_915, 3) = ((MR_Box) (MaybeCJCsDefn_905));
                        }
                      }
                      {
                        SrcDefnsStd_916 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, SrcDefnsStd_916, 0) = ((MR_Box) (SrcIntDefns0_17));
                        MR_hl_field(0, SrcDefnsStd_916, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(0, SrcDefnsStd_916, 2) = ((MR_Box) (SrcImpForeignEnums_19));
                      }
                      {
                        TypeCtorCheckedDefn_917 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TypeCtorCheckedDefn_917, 0) = ((MR_Box) (StdTypeDefn_915));
                        MR_hl_field(1, TypeCtorCheckedDefn_917, 1) = ((MR_Box) (SrcDefnsStd_916));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_917)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                    }
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                  *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word AbstractStatus_341 = ((MR_Unsigned) ((MR_hl_field(3, StdTypeDefn0_15, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word AbstractDefn_342 = ((MR_Word) ((MR_hl_field(3, StdTypeDefn0_15, (MR_Integer) 2))));

            switch (AbstractStatus_341) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
                  if (succeeded)
                  {
                    MR_Box conv3_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[50]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv3_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv3_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                  }
                  else
                  {
                    MR_Word StdTypeDefn_326;
                    MR_Word SrcDefnsStd_327;
                    MR_Word TypeCtorCheckedDefn_328;

                    {
                      StdTypeDefn_326 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdTypeDefn_326, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, StdTypeDefn_326, 1) = (MR_Box) ((MR_Unsigned) (AbstractStatus_341));
                      MR_hl_field(3, StdTypeDefn_326, 2) = ((MR_Box) (AbstractDefn_342));
                      MR_hl_field(3, StdTypeDefn_326, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                    }
                    {
                      SrcDefnsStd_327 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefnsStd_327, 0) = ((MR_Box) (SrcIntDefns0_17));
                      MR_hl_field(0, SrcDefnsStd_327, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, SrcDefnsStd_327, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      TypeCtorCheckedDefn_328 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, TypeCtorCheckedDefn_328, 0) = ((MR_Box) (StdTypeDefn_326));
                      MR_hl_field(1, TypeCtorCheckedDefn_328, 1) = ((MR_Box) (SrcDefnsStd_327));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_328)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
                  if (succeeded)
                  {
                    MR_Box conv5_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[51]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv5_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv5_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                  }
                  else
                  {
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                    *STATE_VARIABLE_TypeCtorCheckedMap_51 = STATE_VARIABLE_TypeCtorCheckedMap_0_50;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Box conv7_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[52]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv7_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                  *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv7_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[17]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[19]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_15_15 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[16]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_any_foreign_enum_from_extras_2_p_0(
  MR_Word Extras0_3,
  MR_Word * MaybeCJCsDefn_4)
{
  if (((MR_tag((MR_Word) Extras0_3)) == (MR_Integer) 0))
  {
    MR_Word MaybeCJCsDefnOrEnum0_7 = ((MR_Word) ((MR_hl_field(0, Extras0_3, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumC0_8 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefnOrEnum0_7, (MR_Integer) 0))));
    MR_Word MaybeDefnOrEnumJava0_9 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefnOrEnum0_7, (MR_Integer) 1))));
    MR_Word MaybeDefnOrEnumCsharp0_10 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefnOrEnum0_7, (MR_Integer) 2))));
    MR_Word MaybeDefnC_11;
    MR_Word MaybeDefnJava_12;
    MR_Word MaybeDefnCsharp_13;

    if ((MaybeDefnOrEnumC0_8 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnC_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_14 = ((MR_Word) ((MR_hl_field(1, MaybeDefnOrEnumC0_8, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_14)) == (MR_Integer) 0))
        MaybeDefnC_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Defn_15 = ((MR_Word) ((MR_hl_field(1, DefnOrEnum0_14, (MR_Integer) 0))));

        {
          MaybeDefnC_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDefnC_11, 0) = ((MR_Box) (Defn_15));
        }
      }
    }
    if ((MaybeDefnOrEnumJava0_9 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnJava_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_17 = ((MR_Word) ((MR_hl_field(1, MaybeDefnOrEnumJava0_9, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_17)) == (MR_Integer) 0))
        MaybeDefnJava_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Defn_18 = ((MR_Word) ((MR_hl_field(1, DefnOrEnum0_17, (MR_Integer) 0))));

        {
          MaybeDefnJava_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDefnJava_12, 0) = ((MR_Box) (Defn_18));
        }
      }
    }
    if ((MaybeDefnOrEnumCsharp0_10 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnCsharp_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_20 = ((MR_Word) ((MR_hl_field(1, MaybeDefnOrEnumCsharp0_10, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_20)) == (MR_Integer) 0))
        MaybeDefnCsharp_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Defn_21 = ((MR_Word) ((MR_hl_field(1, DefnOrEnum0_20, (MR_Integer) 0))));

        {
          MaybeDefnCsharp_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDefnCsharp_13, 0) = ((MR_Box) (Defn_21));
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCJCsDefn_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (MaybeDefnC_11));
      MR_hl_field(0, base, 1) = ((MR_Box) (MaybeDefnJava_12));
      MR_hl_field(0, base, 2) = ((MR_Box) (MaybeDefnCsharp_13));
    }
  }
  else
    *MaybeCJCsDefn_4 = ((MR_Word) ((MR_hl_field(1, Extras0_3, (MR_Integer) 0))));
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_any_foreign_type_defn_from_extras_2_p_0(
  MR_Word Extras0_3,
  MR_Word * Extras_4)
{
  if (((MR_tag((MR_Word) Extras0_3)) == (MR_Integer) 0))
  {
    MR_String HeadCtor_5 = ((MR_String) ((MR_hl_field(0, Extras0_3, (MR_Integer) 0))));
    MR_Word TailCtors_6 = ((MR_Word) ((MR_hl_field(0, Extras0_3, (MR_Integer) 1))));
    MR_Word MaybeCJCsDefnOrEnum0_7 = ((MR_Word) ((MR_hl_field(0, Extras0_3, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumC0_8 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefnOrEnum0_7, (MR_Integer) 0))));
    MR_Word MaybeDefnOrEnumJava0_9 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefnOrEnum0_7, (MR_Integer) 1))));
    MR_Word MaybeDefnOrEnumCsharp0_10 = ((MR_Word) ((MR_hl_field(0, MaybeCJCsDefnOrEnum0_7, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumC_11;
    MR_Word MaybeDefnOrEnumJava_12;
    MR_Word MaybeDefnOrEnumCsharp_13;
    MR_Word MaybeCJCsDefnOrEnum_14;

    if ((MaybeDefnOrEnumC0_8 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumC_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_20 = ((MR_Word) ((MR_hl_field(1, MaybeDefnOrEnumC0_8, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_20)) == (MR_Integer) 0))
        MaybeDefnOrEnumC_11 = MaybeDefnOrEnumC0_8;
      else
        MaybeDefnOrEnumC_11 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((MaybeDefnOrEnumJava0_9 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumJava_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_23 = ((MR_Word) ((MR_hl_field(1, MaybeDefnOrEnumJava0_9, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_23)) == (MR_Integer) 0))
        MaybeDefnOrEnumJava_12 = MaybeDefnOrEnumJava0_9;
      else
        MaybeDefnOrEnumJava_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((MaybeDefnOrEnumCsharp0_10 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumCsharp_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_26 = ((MR_Word) ((MR_hl_field(1, MaybeDefnOrEnumCsharp0_10, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_26)) == (MR_Integer) 0))
        MaybeDefnOrEnumCsharp_13 = MaybeDefnOrEnumCsharp0_10;
      else
        MaybeDefnOrEnumCsharp_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    {
      MaybeCJCsDefnOrEnum_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MaybeCJCsDefnOrEnum_14, 0) = ((MR_Box) (MaybeDefnOrEnumC_11));
      MR_hl_field(0, MaybeCJCsDefnOrEnum_14, 1) = ((MR_Box) (MaybeDefnOrEnumJava_12));
      MR_hl_field(0, MaybeCJCsDefnOrEnum_14, 2) = ((MR_Box) (MaybeDefnOrEnumCsharp_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Extras_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (HeadCtor_5));
      MR_hl_field(0, base, 1) = ((MR_Box) (TailCtors_6));
      MR_hl_field(0, base, 2) = ((MR_Box) (MaybeCJCsDefnOrEnum_14));
    }
  }
  else
    *Extras_4 = (MR_Word) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[1]));
}

static void MR_CALL 
parse_tree__comp_unit_interface__wrap_cjcs_foreign_type_no_enums_2_p_0(
  MR_Word CJCsMaybeDefn_3,
  MR_Word * CJCsMaybeDefnOrEnum_4)
{
  MR_Word MaybeDefnC_5 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefn_3, (MR_Integer) 0))));
  MR_Word MaybeDefnJava_6 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefn_3, (MR_Integer) 1))));
  MR_Word MaybeDefnCsharp_7 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefn_3, (MR_Integer) 2))));
  MR_Word MaybeDefnOrEnumC_8;
  MR_Word MaybeDefnOrEnumJava_9;
  MR_Word MaybeDefnOrEnumCsharp_10;

  if ((MaybeDefnC_5 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDefnOrEnumC_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Defn_11 = ((MR_Word) ((MR_hl_field(1, MaybeDefnC_5, (MR_Integer) 0))));
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) (Defn_11));
    }
    {
      MaybeDefnOrEnumC_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDefnOrEnumC_8, 0) = ((MR_Box) (Var_12));
    }
  }
  if ((MaybeDefnJava_6 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDefnOrEnumJava_9 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Defn_13 = ((MR_Word) ((MR_hl_field(1, MaybeDefnJava_6, (MR_Integer) 0))));
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (Defn_13));
    }
    {
      MaybeDefnOrEnumJava_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDefnOrEnumJava_9, 0) = ((MR_Box) (Var_14));
    }
  }
  if ((MaybeDefnCsharp_7 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDefnOrEnumCsharp_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Defn_15 = ((MR_Word) ((MR_hl_field(1, MaybeDefnCsharp_7, (MR_Integer) 0))));
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Defn_15));
    }
    {
      MaybeDefnOrEnumCsharp_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDefnOrEnumCsharp_10, 0) = ((MR_Box) (Var_16));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *CJCsMaybeDefnOrEnum_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeDefnOrEnumC_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeDefnOrEnumJava_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeDefnOrEnumCsharp_10));
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_subtype_defn_abstract_1_f_0(
  MR_Word SubDefn_3)
{
  MR_Word AbstractDefn_4;
  MR_Word TypeDefn_5 = ((MR_Word) ((MR_hl_field(0, SubDefn_3, (MR_Integer) 2))));
  MR_Word SuperType_6 = ((MR_Word) ((MR_hl_field(0, TypeDefn_5, (MR_Integer) 0))));
  MR_Word SuperTypeCtor_7;
  MR_Word Var_8;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(SuperType_6, &SuperTypeCtor_7);
  Var_8 = (MR_Word) (MR_mkword(1, (MR_Word) (SuperTypeCtor_7)));
  Var_15 = ((MR_Word) ((MR_hl_field(0, SubDefn_3, (MR_Integer) 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, SubDefn_3, (MR_Integer) 1))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, SubDefn_3, (MR_Integer) 3))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, SubDefn_3, (MR_Integer) 4))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, SubDefn_3, (MR_Integer) 5))));
  {
    AbstractDefn_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, AbstractDefn_4, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, AbstractDefn_4, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, AbstractDefn_4, 2) = ((MR_Box) (Var_8));
    MR_hl_field(0, AbstractDefn_4, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, AbstractDefn_4, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, AbstractDefn_4, 5) = ((MR_Box) (Var_20));
  }
  return AbstractDefn_4;
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(
  MR_Word BothTypesMap_4,
  MR_Word DuDefnInfo_5,
  MR_Word * MaybeAbstractDefnInfo_6)
{
  MR_bool succeeded;
  MR_Word DetailsDu_9 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_5, (MR_Integer) 2))));
  MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_5, (MR_Integer) 3))));
  MR_Word OoMCtors_13 = ((MR_Word) ((MR_hl_field(0, DetailsDu_9, (MR_Integer) 0))));
  MR_Word MaybeEqCmp_14 = ((MR_Word) ((MR_hl_field(0, DetailsDu_9, (MR_Integer) 1))));
  MR_Word MaybeDirectArgCtors_15 = ((MR_Word) ((MR_hl_field(0, DetailsDu_9, (MR_Integer) 2))));
  MR_Word Var_26;
  MR_Word Ctor_27;
  MR_Word MaybeExistConstraints_29;
  MR_Word CtorArgs_31;
  MR_Word Var_37;

  succeeded = (MaybeEqCmp_14 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (MaybeDirectArgCtors_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_26 = (MR_Word) ((MR_Unsigned) 0U);
      Ctor_27 = ((MR_Word) ((MR_hl_field(0, OoMCtors_13, (MR_Integer) 0))));
      Var_37 = ((MR_Word) ((MR_hl_field(0, OoMCtors_13, (MR_Integer) 1))));
      succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeExistConstraints_29 = ((MR_Word) ((MR_hl_field(0, Ctor_27, (MR_Integer) 1))));
        CtorArgs_31 = ((MR_Word) ((MR_hl_field(0, Ctor_27, (MR_Integer) 3))));
        succeeded = (MaybeExistConstraints_29 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if ((CtorArgs_31 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = MR_TRUE;
          else
          {
            MR_Word ArgType_35;
            MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, CtorArgs_31, (MR_Integer) 0))));
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, CtorArgs_31, (MR_Integer) 1))));

            succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgType_35 = ((MR_Word) ((MR_hl_field(0, Var_38, (MR_Integer) 1))));
              if (((MR_tag((MR_Word) ArgType_35)) == (MR_Integer) 1))
              {
                MR_Word SymName_41 = ((MR_Word) ((MR_hl_field(1, ArgType_35, (MR_Integer) 0))));
                MR_Word TypeArgs_42 = ((MR_Word) ((MR_hl_field(1, ArgType_35, (MR_Integer) 1))));

                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_35)), Var_26);
                if (succeeded)
                  succeeded = MR_FALSE;
                else
                {
                  MR_Integer Arity_44;
                  MR_Word TypeCtor_45;

                  Arity_44 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_42);
                  {
                    TypeCtor_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeCtor_45, 0) = ((MR_Box) (SymName_41));
                    MR_hl_field(0, TypeCtor_45, 1) = ((MR_Box) (Arity_44));
                  }
                  {
                    MR_Word Var_61;

                    Var_61 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_45);
                    succeeded = (Var_61 == (MR_Integer) 0);
                  }
                  if (!(succeeded))
                    succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(BothTypesMap_4, TVarSet_10, ArgType_35, TypeCtor_45, TypeArgs_42, Var_26);
                }
              }
              else
              if (((((MR_tag((MR_Word) ArgType_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgType_35, (MR_Integer) 0)))) == (MR_Integer) 3))))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/4", (MR_String) "kinded_type");
                  return;
                }
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
            }
          }
        }
      }
    }
  }
  if (succeeded)
    *MaybeAbstractDefnInfo_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DetailsAbs_18;
    MR_Word AbstractDefnInfo_19;
    MR_Integer NumFunctors_16;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    succeeded = parse_tree__prog_type__non_sub_du_type_is_enum_2_p_0(DetailsDu_9, &NumFunctors_16);
    if (succeeded)
    {
      MR_Integer NumBits_17;

      parse_tree__prog_type__num_bits_needed_for_n_dense_values_2_p_0(NumFunctors_16, &NumBits_17);
      {
        DetailsAbs_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, DetailsAbs_18, 0) = ((MR_Box) (NumBits_17));
      }
    }
    else
      DetailsAbs_18 = (MR_Word) ((MR_Unsigned) 0U);
    Var_20 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_5, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_5, (MR_Integer) 1))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_5, (MR_Integer) 3))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_5, (MR_Integer) 4))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, DuDefnInfo_5, (MR_Integer) 5))));
    {
      AbstractDefnInfo_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AbstractDefnInfo_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(0, AbstractDefnInfo_19, 1) = ((MR_Box) (Var_21));
      MR_hl_field(0, AbstractDefnInfo_19, 2) = ((MR_Box) (DetailsAbs_18));
      MR_hl_field(0, AbstractDefnInfo_19, 3) = ((MR_Box) (Var_23));
      MR_hl_field(0, AbstractDefnInfo_19, 4) = ((MR_Box) (Var_24));
      MR_hl_field(0, AbstractDefnInfo_19, 5) = ((MR_Box) (Var_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeAbstractDefnInfo_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (AbstractDefnInfo_19));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Modules_12;

  parse_tree__comp_unit_interface__accumulate_modules_in_qual_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Modules_12);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Modules_12));
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3(
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
  MR_Word conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16;
  MR_Word conv5_STATE_VARIABLE_DuArgTypeCtors_18;
  MR_Word conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20;

  parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_DuArgTypeCtors_18));
  *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20));
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Modules_12;

  parse_tree__comp_unit_interface__accumulate_modules_in_qual_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Modules_12);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Modules_12));
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Modules_12;

  parse_tree__comp_unit_interface__accumulate_modules_in_qual_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_12));
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0(
  MR_Word ImpTypesMap_9,
  MR_Word ImpItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_36,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_37,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_38,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_39)
{
  MR_Word ImpTypeDefn_16 = ((MR_Word) ((MR_hl_field(0, ImpItemTypeDefnInfo_10, (MR_Integer) 2))));

  switch (MR_tag((MR_Word) ImpTypeDefn_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_25 = (MR_Word) ((MR_Word) (ImpTypeDefn_16));
        MR_Word OoMCtors_26 = ((MR_Word) ((MR_hl_field(0, DetailsDu_25, (MR_Integer) 0))));
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word RhsTypeCtors_53;
        MR_Box conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39;

        Var_48 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_26);
        Var_49 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(Var_48, Var_49, &RhsTypeCtors_53);
        mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_53, STATE_VARIABLE_DuArgTypeCtors_0_36, STATE_VARIABLE_DuArgTypeCtors_37);
        mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[46]), RhsTypeCtors_53, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_38)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39);
        *STATE_VARIABLE_ModulesNeededByTypeDefns_39 = ((MR_Word) (conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39));
        *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub_29 = (MR_Word) (MR_body((MR_Word) (ImpTypeDefn_16), (MR_Integer) 1));
        MR_Word OoMCtors_76 = ((MR_Word) ((MR_hl_field(0, DetailsSub_29, (MR_Integer) 1))));
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word RhsTypeCtors_80;
        MR_Box conv11_STATE_VARIABLE_ModulesNeededByTypeDefns_39;

        Var_77 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_76);
        Var_78 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(Var_77, Var_78, &RhsTypeCtors_80);
        mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_80, STATE_VARIABLE_DuArgTypeCtors_0_36, STATE_VARIABLE_DuArgTypeCtors_37);
        mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[48]), RhsTypeCtors_80, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_38)), &conv11_STATE_VARIABLE_ModulesNeededByTypeDefns_39);
        *STATE_VARIABLE_ModulesNeededByTypeDefns_39 = ((MR_Word) (conv11_STATE_VARIABLE_ModulesNeededByTypeDefns_39));
        *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34;
        *STATE_VARIABLE_DuArgTypeCtors_37 = STATE_VARIABLE_DuArgTypeCtors_0_36;
        *STATE_VARIABLE_ModulesNeededByTypeDefns_39 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_38;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImpTypeDefn_16, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv_20 = ((MR_Word) ((MR_hl_field(3, ImpTypeDefn_16, (MR_Integer) 1))));
            MR_Word RhsType_21 = (MR_Word) (DetailsEqv_20);
            MR_Word RhsTypeCtors_22;
            MR_Word NewRhsTypeCtors_23;
            MR_Word Var_40;
            MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_41_41;
            MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_43_43;
            MR_Word Var_44;
            MR_Word Var_46;
            MR_Box conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_43_43;
            MR_Box conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35;
            MR_Box conv8_Var_24;
            MR_Box conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_39;

            Var_40 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(RhsType_21, Var_40, &RhsTypeCtors_22);
            mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_22, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34, &NewRhsTypeCtors_23);
            mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewRhsTypeCtors_23, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34, &STATE_VARIABLE_AbsExpEqvRhsTypeCtors_41_41);
            mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[47]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_38)), &conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_43_43);
            STATE_VARIABLE_ModulesNeededByTypeDefns_43_43 = ((MR_Word) (conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_43_43));
            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
              MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3));
              MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_44, 3) = ((MR_Box) (ImpTypesMap_9));
            }
            Var_46 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), Var_44, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_41_41)), &conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35, ((MR_Box) (Var_46)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_43_43)), &conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_39);
            *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35 = ((MR_Word) (conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35));
            *STATE_VARIABLE_ModulesNeededByTypeDefns_39 = ((MR_Word) (conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_39));
            *STATE_VARIABLE_DuArgTypeCtors_37 = STATE_VARIABLE_DuArgTypeCtors_0_36;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34;
            *STATE_VARIABLE_DuArgTypeCtors_37 = STATE_VARIABLE_DuArgTypeCtors_0_36;
            *STATE_VARIABLE_ModulesNeededByTypeDefns_39 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_38;
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34;
            *STATE_VARIABLE_DuArgTypeCtors_37 = STATE_VARIABLE_DuArgTypeCtors_0_36;
            *STATE_VARIABLE_ModulesNeededByTypeDefns_39 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_38;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeCtors_3 = STATE_VARIABLE_TypeCtors_0_2;
    else
    {
      MR_Word Ctor_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CtorArgs_13 = ((MR_Word) ((MR_hl_field(0, Ctor_7, (MR_Integer) 3))));
      MR_Word STATE_VARIABLE_TypeCtors_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeCtors_0_2;

      parse_tree__comp_unit_interface__ctor_args_to_user_type_ctor_set_3_p_0(CtorArgs_13, STATE_VARIABLE_TypeCtors_0_2, &STATE_VARIABLE_TypeCtors_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ctors_8;
      next_value_of_STATE_VARIABLE_TypeCtors_0_2 = STATE_VARIABLE_TypeCtors_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeCtors_0_2 = next_value_of_STATE_VARIABLE_TypeCtors_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_args_to_user_type_ctor_set_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeCtors_0_2,
  MR_Word * STATE_VARIABLE_TypeCtors_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeCtors_3 = STATE_VARIABLE_TypeCtors_0_2;
    else
    {
      MR_Word Arg_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_11 = ((MR_Word) ((MR_hl_field(0, Arg_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeCtors_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeCtors_0_2;

      parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(Type_11, STATE_VARIABLE_TypeCtors_0_2, &STATE_VARIABLE_TypeCtors_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_8;
      next_value_of_STATE_VARIABLE_TypeCtors_0_2 = STATE_VARIABLE_TypeCtors_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeCtors_0_2 = next_value_of_STATE_VARIABLE_TypeCtors_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeCtors_14;

  parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtors_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeCtors_14));
}

static void MR_CALL 
parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_TypeCtors_0_13,
  MR_Word * STATE_VARIABLE_TypeCtors_14)
{
  MR_bool succeeded;
  MR_Word TypeCtor_6;
  MR_Word ArgTypes_7;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_4, &TypeCtor_6, &ArgTypes_7);
  if (succeeded)
  {
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_TypeCtors_15_15;
    MR_Box conv1_STATE_VARIABLE_TypeCtors_14;

    succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_8);
    if (!(succeeded))
    {
      {
        MR_Word Var_10;
        MR_Word Var_11;

        succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(TypeCtor_6, &Var_10, &Var_11);
      }
      if (!(succeeded))
        succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_6);
    }
    if (succeeded)
      STATE_VARIABLE_TypeCtors_15_15 = STATE_VARIABLE_TypeCtors_0_13;
    else
      mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_6)), STATE_VARIABLE_TypeCtors_0_13, &STATE_VARIABLE_TypeCtors_15_15);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[45]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
    *STATE_VARIABLE_TypeCtors_14 = ((MR_Word) (conv1_STATE_VARIABLE_TypeCtors_14));
  }
  else
    *STATE_VARIABLE_TypeCtors_14 = STATE_VARIABLE_TypeCtors_0_13;
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1(
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
  MR_Word conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35;
  MR_Word conv2_STATE_VARIABLE_DuArgTypeCtors_37;
  MR_Word conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39;

  parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_DuArgTypeCtors_37, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_DuArgTypeCtors_37));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39));
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(
  MR_Word ImpTypesMap_9,
  MR_Word TypeCtor_10,
  MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15,
  MR_Word * STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16,
  MR_Word STATE_VARIABLE_DuArgTypeCtors_0_17,
  MR_Word * STATE_VARIABLE_DuArgTypeCtors_18,
  MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_0_19,
  MR_Word * STATE_VARIABLE_ModulesNeededByTypeDefns_20)
{
  MR_bool succeeded;
  MR_Word ImpTypeDefns_14;
  MR_Box conv0_ImpTypeDefns_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), ImpTypesMap_9, ((MR_Box) (TypeCtor_10)), &conv0_ImpTypeDefns_14);
  if (succeeded)
  {
    ImpTypeDefns_14 = ((MR_Word) (conv0_ImpTypeDefns_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_21;
    MR_Box conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16;
    MR_Box conv5_STATE_VARIABLE_DuArgTypeCtors_18;
    MR_Box conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[2]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (ImpTypesMap_9));
    }
    mercury__one_or_more__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), Var_21, ImpTypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_DuArgTypeCtors_0_17)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_19)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
    *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16 = ((MR_Word) (conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16));
    *STATE_VARIABLE_DuArgTypeCtors_18 = ((MR_Word) (conv5_STATE_VARIABLE_DuArgTypeCtors_18));
    *STATE_VARIABLE_ModulesNeededByTypeDefns_20 = ((MR_Word) (conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20));
  }
  else
  {
    *STATE_VARIABLE_ModulesNeededByTypeDefns_20 = STATE_VARIABLE_ModulesNeededByTypeDefns_0_19;
    *STATE_VARIABLE_DuArgTypeCtors_18 = STATE_VARIABLE_DuArgTypeCtors_0_17;
    *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
  MR_Word conv6_STATE_VARIABLE_Seen_33;

  parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_Seen_33);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Seen_33));
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
  MR_Word conv1_STATE_VARIABLE_Seen_33;

  parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Seen_33);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Seen_33));
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(
  MR_Word BothTypesMap_8,
  MR_Word TypeCtor_9,
  MR_Word ItemTypeDefnInfo_10,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31,
  MR_Word STATE_VARIABLE_Seen_0_32,
  MR_Word * STATE_VARIABLE_Seen_33)
{
  MR_bool succeeded;
  MR_Word TypeDefn_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefnInfo_10, (MR_Integer) 2))));

  switch (MR_tag((MR_Word) TypeDefn_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30;
        *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_0_32;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub_22 = (MR_Word) (MR_body((MR_Word) (TypeDefn_15), (MR_Integer) 1));
        MR_Word SuperType_23 = ((MR_Word) ((MR_hl_field(0, DetailsSub_22, (MR_Integer) 0))));
        MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37_37;
        MR_Word SuperTypeCtor_25;

        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_9)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37_37);
        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_23, &SuperTypeCtor_25);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Seen_16_50;

          succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_25)), STATE_VARIABLE_Seen_0_32, &STATE_VARIABLE_Seen_16_50);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_51;
            MR_Word ItemTypeDefnInfos_49;
            MR_Box conv5_ItemTypeDefnInfos_49;

            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_25)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37_37, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_51);
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), BothTypesMap_8, ((MR_Box) (SuperTypeCtor_25)), &conv5_ItemTypeDefnInfos_49);
            if (succeeded)
            {
              ItemTypeDefnInfos_49 = ((MR_Word) (conv5_ItemTypeDefnInfos_49));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_52;
              MR_Box conv9_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
              MR_Box conv8_STATE_VARIABLE_Seen_33;

              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
                MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_2));
                MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_52, 3) = ((MR_Box) (BothTypesMap_8));
                MR_hl_field(0, Var_52, 4) = ((MR_Box) (SuperTypeCtor_25));
              }
              mercury__one_or_more__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), Var_52, ItemTypeDefnInfos_49, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_51)), &conv9_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Box) (STATE_VARIABLE_Seen_16_50)), &conv8_STATE_VARIABLE_Seen_33);
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = ((MR_Word) (conv9_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
              *STATE_VARIABLE_Seen_33 = ((MR_Word) (conv8_STATE_VARIABLE_Seen_33));
            }
            else
            {
              *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_16_50;
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_51;
            }
          }
          else
          {
            *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_0_32;
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37_37;
          }
        }
        else
        {
          *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_0_32;
          *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37_37;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30;
        *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_0_32;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_15, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DetailsEqv_19 = ((MR_Word) ((MR_hl_field(3, TypeDefn_15, (MR_Integer) 1))));
            MR_Word RhsType_20;
            MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_34_34;
            MR_Word RhsTypeCtor_21;

            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_9)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_34_34);
            RhsType_20 = (MR_Word) (DetailsEqv_19);
            succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(RhsType_20, &RhsTypeCtor_21);
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_Seen_16_41;

              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (RhsTypeCtor_21)), STATE_VARIABLE_Seen_0_32, &STATE_VARIABLE_Seen_16_41);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_42;
                MR_Word ItemTypeDefnInfos_40;
                MR_Box conv0_ItemTypeDefnInfos_40;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (RhsTypeCtor_21)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_34_34, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_42);
                succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), BothTypesMap_8, ((MR_Box) (RhsTypeCtor_21)), &conv0_ItemTypeDefnInfos_40);
                if (succeeded)
                {
                  ItemTypeDefnInfos_40 = ((MR_Word) (conv0_ItemTypeDefnInfos_40));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Var_43;
                  MR_Box conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
                  MR_Box conv3_STATE_VARIABLE_Seen_33;

                  {
                    Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
                    MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_1));
                    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_43, 3) = ((MR_Box) (BothTypesMap_8));
                    MR_hl_field(0, Var_43, 4) = ((MR_Box) (RhsTypeCtor_21));
                  }
                  mercury__one_or_more__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), Var_43, ItemTypeDefnInfos_40, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_42)), &conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Box) (STATE_VARIABLE_Seen_16_41)), &conv3_STATE_VARIABLE_Seen_33);
                  *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = ((MR_Word) (conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
                  *STATE_VARIABLE_Seen_33 = ((MR_Word) (conv3_STATE_VARIABLE_Seen_33));
                }
                else
                {
                  *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_16_41;
                  *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_42;
                }
              }
              else
              {
                *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_0_32;
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_34_34;
              }
            }
            else
            {
              *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_0_32;
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_34_34;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30;
            *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_0_32;
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30;
            *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_0_32;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44;
  MR_Word conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_46;
  MR_Word conv0_STATE_VARIABLE_DirectDummyTypeCtors_48;

  parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_46, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_DirectDummyTypeCtors_48);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_46));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_DirectDummyTypeCtors_48));
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfos_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_24,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_25,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_26,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_27)
{
  MR_Word HeadImpItemTypeDefnInfo_18 = ((MR_Word) ((MR_hl_field(0, ImpItemTypeDefnInfos_14, (MR_Integer) 0))));
  MR_Word TailImpItemTypeDefnInfos_19 = ((MR_Word) ((MR_hl_field(0, ImpItemTypeDefnInfos_14, (MR_Integer) 1))));

  if ((TailImpItemTypeDefnInfos_19 == (MR_Word) ((MR_Unsigned) 0U)))
    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(IntTypesMap_11, BothTypesMap_12, TypeCtor_13, HeadImpItemTypeDefnInfo_18, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, STATE_VARIABLE_AbsExpEnumTypeCtors_0_24, STATE_VARIABLE_AbsExpEnumTypeCtors_25, STATE_VARIABLE_DirectDummyTypeCtors_0_26, STATE_VARIABLE_DirectDummyTypeCtors_27);
  else
  {
    MR_Word Var_31;
    MR_Box conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23;
    MR_Box conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25;
    MR_Box conv3_STATE_VARIABLE_DirectDummyTypeCtors_27;

    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[1]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (IntTypesMap_11));
      MR_hl_field(0, Var_31, 4) = ((MR_Box) (BothTypesMap_12));
      MR_hl_field(0, Var_31, 5) = ((MR_Box) (TypeCtor_13));
    }
    mercury__one_or_more__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), Var_31, ImpItemTypeDefnInfos_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22)), &conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEnumTypeCtors_0_24)), &conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Box) (STATE_VARIABLE_DirectDummyTypeCtors_0_26)), &conv3_STATE_VARIABLE_DirectDummyTypeCtors_27);
    *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23 = ((MR_Word) (conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23));
    *STATE_VARIABLE_AbsExpEnumTypeCtors_25 = ((MR_Word) (conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25));
    *STATE_VARIABLE_DirectDummyTypeCtors_27 = ((MR_Word) (conv3_STATE_VARIABLE_DirectDummyTypeCtors_27));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(
  MR_Word IntTypesMap_11,
  MR_Word BothTypesMap_12,
  MR_Word TypeCtor_13,
  MR_Word ImpItemTypeDefnInfo_14,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44,
  MR_Word STATE_VARIABLE_AbsExpEnumTypeCtors_0_45,
  MR_Word * STATE_VARIABLE_AbsExpEnumTypeCtors_46,
  MR_Word STATE_VARIABLE_DirectDummyTypeCtors_0_47,
  MR_Word * STATE_VARIABLE_DirectDummyTypeCtors_48)
{
  MR_bool succeeded;
  MR_Word ImpTypeDefn_20 = ((MR_Word) ((MR_hl_field(0, ImpItemTypeDefnInfo_14, (MR_Integer) 2))));
  MR_Word TVarSet_21 = ((MR_Word) ((MR_hl_field(0, ImpItemTypeDefnInfo_14, (MR_Integer) 3))));

  switch (MR_tag((MR_Word) ImpTypeDefn_20)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_28 = (MR_Word) ((MR_Word) (ImpTypeDefn_20));
        MR_Word OoMCtors_29 = ((MR_Word) ((MR_hl_field(0, DetailsDu_28, (MR_Integer) 0))));
        MR_Word MaybeEqCmp_30 = ((MR_Word) ((MR_hl_field(0, DetailsDu_28, (MR_Integer) 1))));
        MR_Word MaybeDirectArgCtors_31 = ((MR_Word) ((MR_hl_field(0, DetailsDu_28, (MR_Integer) 2))));
        MR_Box conv0_Var_32;
        MR_Integer _NumFunctors_33;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv0_Var_32);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
          succeeded = parse_tree__prog_type__non_sub_du_type_is_enum_2_p_0(DetailsDu_28, &_NumFunctors_33);
        if (succeeded)
        {
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEnumTypeCtors_0_45, STATE_VARIABLE_AbsExpEnumTypeCtors_46);
          *STATE_VARIABLE_DirectDummyTypeCtors_48 = STATE_VARIABLE_DirectDummyTypeCtors_0_47;
        }
        else
        {
          MR_Word Var_67;
          MR_Word Ctor_68;
          MR_Word MaybeExistConstraints_70;
          MR_Word CtorArgs_72;
          MR_Word Var_78;

          succeeded = (MaybeEqCmp_30 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (MaybeDirectArgCtors_31 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_67 = (MR_Word) ((MR_Unsigned) 0U);
              Ctor_68 = ((MR_Word) ((MR_hl_field(0, OoMCtors_29, (MR_Integer) 0))));
              Var_78 = ((MR_Word) ((MR_hl_field(0, OoMCtors_29, (MR_Integer) 1))));
              succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeExistConstraints_70 = ((MR_Word) ((MR_hl_field(0, Ctor_68, (MR_Integer) 1))));
                CtorArgs_72 = ((MR_Word) ((MR_hl_field(0, Ctor_68, (MR_Integer) 3))));
                succeeded = (MaybeExistConstraints_70 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  if ((CtorArgs_72 == (MR_Word) ((MR_Unsigned) 0U)))
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word ArgType_76;
                    MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, CtorArgs_72, (MR_Integer) 0))));
                    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(1, CtorArgs_72, (MR_Integer) 1))));

                    succeeded = (Var_80 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgType_76 = ((MR_Word) ((MR_hl_field(0, Var_79, (MR_Integer) 1))));
                      if (((MR_tag((MR_Word) ArgType_76)) == (MR_Integer) 1))
                      {
                        MR_Word SymName_82 = ((MR_Word) ((MR_hl_field(1, ArgType_76, (MR_Integer) 0))));
                        MR_Word TypeArgs_83 = ((MR_Word) ((MR_hl_field(1, ArgType_76, (MR_Integer) 1))));

                        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_76)), Var_67);
                        if (succeeded)
                          succeeded = MR_FALSE;
                        else
                        {
                          MR_Integer Arity_85;
                          MR_Word TypeCtor_86;

                          Arity_85 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_83);
                          {
                            TypeCtor_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, TypeCtor_86, 0) = ((MR_Box) (SymName_82));
                            MR_hl_field(0, TypeCtor_86, 1) = ((MR_Box) (Arity_85));
                          }
                          {
                            MR_Word Var_102;

                            Var_102 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_86);
                            succeeded = (Var_102 == (MR_Integer) 0);
                          }
                          if (!(succeeded))
                            succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(BothTypesMap_12, TVarSet_21, ArgType_76, TypeCtor_86, TypeArgs_83, Var_67);
                        }
                      }
                      else
                      if (((((MR_tag((MR_Word) ArgType_76)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgType_76, (MR_Integer) 0)))) == (MR_Integer) 3))))
                      {
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/4", (MR_String) "kinded_type");
                          return;
                        }
                        succeeded = MR_TRUE;
                      }
                      else
                        succeeded = MR_FALSE;
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_DirectDummyTypeCtors_0_47, STATE_VARIABLE_DirectDummyTypeCtors_48);
          else
            *STATE_VARIABLE_DirectDummyTypeCtors_48 = STATE_VARIABLE_DirectDummyTypeCtors_0_47;
          *STATE_VARIABLE_AbsExpEnumTypeCtors_46 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_45;
        }
        *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSub_34 = (MR_Word) (MR_body((MR_Word) (ImpTypeDefn_20), (MR_Integer) 1));
        MR_Word SuperType_35 = ((MR_Word) ((MR_hl_field(0, DetailsSub_34, (MR_Integer) 0))));
        MR_Box conv3_Var_37;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv3_Var_37);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_53_53;
          MR_Word SuperTypeCtor_38;

          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_53_53);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_35, &SuperTypeCtor_38);
          if (succeeded)
          {
            MR_Word Seen0_39;
            MR_Word _Seen_40;

            mercury__set__singleton_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), &Seen0_39);
            parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_6_p_0(BothTypesMap_12, SuperTypeCtor_38, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_53_53, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44, Seen0_39, &_Seen_40);
          }
          else
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_53_53;
        }
        else
          *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43;
        *STATE_VARIABLE_AbsExpEnumTypeCtors_46 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_45;
        *STATE_VARIABLE_DirectDummyTypeCtors_48 = STATE_VARIABLE_DirectDummyTypeCtors_0_47;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43;
        *STATE_VARIABLE_AbsExpEnumTypeCtors_46 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_45;
        *STATE_VARIABLE_DirectDummyTypeCtors_48 = STATE_VARIABLE_DirectDummyTypeCtors_0_47;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ImpTypeDefn_20, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box conv1_Var_25;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv1_Var_25);
            if (succeeded)
              succeeded = MR_TRUE;
            if (succeeded)
              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44);
            else
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43;
            *STATE_VARIABLE_AbsExpEnumTypeCtors_46 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_45;
            *STATE_VARIABLE_DirectDummyTypeCtors_48 = STATE_VARIABLE_DirectDummyTypeCtors_0_47;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43;
            *STATE_VARIABLE_AbsExpEnumTypeCtors_46 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_45;
            *STATE_VARIABLE_DirectDummyTypeCtors_48 = STATE_VARIABLE_DirectDummyTypeCtors_0_47;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box conv2_Var_27;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv2_Var_27);
            if (succeeded)
              succeeded = MR_TRUE;
            if (succeeded)
              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44);
            else
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43;
            *STATE_VARIABLE_AbsExpEnumTypeCtors_46 = STATE_VARIABLE_AbsExpEnumTypeCtors_0_45;
            *STATE_VARIABLE_DirectDummyTypeCtors_48 = STATE_VARIABLE_DirectDummyTypeCtors_0_47;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_2_6_p_0(
  MR_Word TypeDefnMap_7,
  MR_Word TVarSet_8,
  MR_Word OoMCtors_9,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word CoveredTypes_10)
{
  MR_bool succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Ctor_11;
  MR_Word MaybeExistConstraints_13;
  MR_Word CtorArgs_15;
  MR_Word Var_21;

  if (succeeded)
  {
    succeeded = (HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Ctor_11 = ((MR_Word) ((MR_hl_field(0, OoMCtors_9, (MR_Integer) 0))));
      Var_21 = ((MR_Word) ((MR_hl_field(0, OoMCtors_9, (MR_Integer) 1))));
      succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeExistConstraints_13 = ((MR_Word) ((MR_hl_field(0, Ctor_11, (MR_Integer) 1))));
        CtorArgs_15 = ((MR_Word) ((MR_hl_field(0, Ctor_11, (MR_Integer) 3))));
        succeeded = (MaybeExistConstraints_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          if ((CtorArgs_15 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = MR_TRUE;
          else
          {
            MR_Word ArgType_19;
            MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, CtorArgs_15, (MR_Integer) 0))));
            MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, CtorArgs_15, (MR_Integer) 1))));

            succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgType_19 = ((MR_Word) ((MR_hl_field(0, Var_22, (MR_Integer) 1))));
              if (((MR_tag((MR_Word) ArgType_19)) == (MR_Integer) 1))
              {
                MR_Word SymName_25 = ((MR_Word) ((MR_hl_field(1, ArgType_19, (MR_Integer) 0))));
                MR_Word TypeArgs_26 = ((MR_Word) ((MR_hl_field(1, ArgType_19, (MR_Integer) 1))));

                succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_19)), CoveredTypes_10);
                if (succeeded)
                  succeeded = MR_FALSE;
                else
                {
                  MR_Integer Arity_28;
                  MR_Word TypeCtor_29;

                  Arity_28 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_26);
                  {
                    TypeCtor_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeCtor_29, 0) = ((MR_Box) (SymName_25));
                    MR_hl_field(0, TypeCtor_29, 1) = ((MR_Box) (Arity_28));
                  }
                  {
                    MR_Word Var_45;

                    Var_45 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_29);
                    succeeded = (Var_45 == (MR_Integer) 0);
                  }
                  if (!(succeeded))
                    succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(TypeDefnMap_7, TVarSet_8, ArgType_19, TypeCtor_29, TypeArgs_26, CoveredTypes_10);
                }
              }
              else
              if (((((MR_tag((MR_Word) ArgType_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgType_19, (MR_Integer) 0)))) == (MR_Integer) 3))))
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/4", (MR_String) "kinded_type");
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__conv0_ItemTypeDefnInfo_14));
  parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_5(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Var_32 = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__BaseType_29, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12);
  (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Var_32 == (MR_Integer) 1);
  if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
    parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_4(env_ptr);
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_6(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_1) == 0)
    {
      {
        MR_Word DetailsSub_25 = (MR_Word) (MR_body((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17), (MR_Integer) 1));
        MR_Word SuperType0_26 = ((MR_Word) ((MR_hl_field(0, DetailsSub_25, (MR_Integer) 0))));
        MR_Word SuperType_28;
        MR_Word Var_31;
        MR_Word Renaming_76;
        MR_Word TypeParams_77;
        MR_Word TSubst_78;
        MR_Word Type1_79;
        MR_Word _OoMCtors_27 = ((MR_Word) ((MR_hl_field(0, DetailsSub_25, (MR_Integer) 1))));
        MR_Word _MergedTVarSet_75;

        parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTVarSet_18, &_MergedTVarSet_75, &Renaming_76);
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_76, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTypeParams_16, &TypeParams_77);
        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_77, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeArgs_11, &TSubst_78);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_76, SuperType0_26, &Type1_79);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_78, Type1_79, &SuperType_28);
        Var_31 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
        parse_tree__comp_unit_interface__get_base_type_5_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, SuperType_28, &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__BaseType_29, Var_31, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_5, env_ptr);
      }
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _TypeCtor_15 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 0))));
    MR_Word _Context_19;
    MR_Word _SeqNum_20;

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTypeParams_16 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 1))));
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 2))));
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTVarSet_18 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 3))));
    _Context_19 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 4))));
    _SeqNum_20 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 5))));
    if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17)) == (MR_Integer) 0))
    {
      MR_Word DetailsDu_21 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17));
      MR_Word OoMCtors_22 = ((MR_Word) ((MR_hl_field(0, DetailsDu_21, (MR_Integer) 0))));
      MR_Word MaybeEqCmp_23 = ((MR_Word) ((MR_hl_field(0, DetailsDu_21, (MR_Integer) 1))));
      MR_Word MaybeDirectArgCtors_24 = ((MR_Word) ((MR_hl_field(0, DetailsDu_21, (MR_Integer) 2))));
      MR_Word Var_30;
      MR_Word Ctor_36;
      MR_Word MaybeExistConstraints_38;
      MR_Word CtorArgs_40;
      MR_Word Var_46;
      uint32_t _Ordinal_37;
      MR_Word _Name_39;
      MR_Integer _Arity_41;
      MR_Word _Context_42;

      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (MaybeEqCmp_23 == (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
      {
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (MaybeDirectArgCtors_24 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
        {
          Ctor_36 = ((MR_Word) ((MR_hl_field(0, OoMCtors_22, (MR_Integer) 0))));
          Var_46 = ((MR_Word) ((MR_hl_field(0, OoMCtors_22, (MR_Integer) 1))));
          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
          if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
          {
            _Ordinal_37 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor_36, (MR_Integer) 0)));
            MaybeExistConstraints_38 = ((MR_Word) ((MR_hl_field(0, Ctor_36, (MR_Integer) 1))));
            _Name_39 = ((MR_Word) ((MR_hl_field(0, Ctor_36, (MR_Integer) 2))));
            CtorArgs_40 = ((MR_Word) ((MR_hl_field(0, Ctor_36, (MR_Integer) 3))));
            _Arity_41 = ((MR_Integer) ((MR_hl_field(0, Ctor_36, (MR_Integer) 4))));
            _Context_42 = ((MR_Word) ((MR_hl_field(0, Ctor_36, (MR_Integer) 5))));
            (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (MaybeExistConstraints_38 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
            {
              {
                Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_30, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Type_9));
                MR_hl_field(1, Var_30, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12));
              }
              if ((CtorArgs_40 == (MR_Word) ((MR_Unsigned) 0U)))
                (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
              else
              {
                MR_Word ArgType_44;
                MR_Word Var_47 = ((MR_Word) ((MR_hl_field(1, CtorArgs_40, (MR_Integer) 0))));
                MR_Word Var_48 = ((MR_Word) ((MR_hl_field(1, CtorArgs_40, (MR_Integer) 1))));
                MR_Word Var_43;
                MR_Word Var_45;

                (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
                {
                  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 0))));
                  ArgType_44 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 1))));
                  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_47, (MR_Integer) 2))));
                  if (((MR_tag((MR_Word) ArgType_44)) == (MR_Integer) 1))
                  {
                    MR_Word SymName_50 = ((MR_Word) ((MR_hl_field(1, ArgType_44, (MR_Integer) 0))));
                    MR_Word TypeArgs_51 = ((MR_Word) ((MR_hl_field(1, ArgType_44, (MR_Integer) 1))));
                    MR_Word _Kind_52 = ((MR_Word) ((MR_hl_field(1, ArgType_44, (MR_Integer) 2))));

                    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_44)), Var_30);
                    if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
                      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
                    else
                    {
                      MR_Integer Arity_53;
                      MR_Word TypeCtor_54;

                      Arity_53 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_51);
                      {
                        TypeCtor_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, TypeCtor_54, 0) = ((MR_Box) (SymName_50));
                        MR_hl_field(0, TypeCtor_54, 1) = ((MR_Box) (Arity_53));
                      }
                      {
                        MR_Word Var_70;

                        Var_70 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_54);
                        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (Var_70 == (MR_Integer) 0);
                      }
                      if (!((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded))
                        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, ArgType_44, TypeCtor_54, TypeArgs_51, Var_30);
                    }
                  }
                  else
                  if (((((MR_tag((MR_Word) ArgType_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgType_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/4", (MR_String) "kinded_type");
                      return;
                    }
                    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
                  }
                  else
                    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
                }
              }
            }
          }
        }
      }
    }
    else
    if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17)) == (MR_Integer) 1))
      parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_6(env_ptr);
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
    if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
      parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_7(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word ItemTypeDefnInfos_13;

        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeCtor_10)), &ItemTypeDefnInfos_13);
        if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
          mercury__one_or_more__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__conv0_ItemTypeDefnInfo_14, ItemTypeDefnInfos_13, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_3, env_ptr);
      }
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(
  MR_Word TypeDefnMap_7,
  MR_Word TVarSet_8,
  MR_Word Type_9,
  MR_Word TypeCtor_10,
  MR_Word TypeArgs_11,
  MR_Word CoveredTypes0_12)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s env;

  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7 = TypeDefnMap_7;
  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8 = TVarSet_8;
  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Type_9 = Type_9;
  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeCtor_10 = TypeCtor_10;
  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeArgs_11 = TypeArgs_11;
  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12 = CoveredTypes0_12;
  parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_7(&env);
  return (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_37 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__conv0_ItemTypeDefnInfo_37));
  parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_1, 1);
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_5(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Var_55 = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__BaseType_52, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9);
  (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Var_55 == (MR_Integer) 1);
  if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
    parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_4(env_ptr);
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_6(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_1) == 0)
    {
      {
        MR_Word DetailsSub_48 = (MR_Word) (MR_body((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_40), (MR_Integer) 1));
        MR_Word SuperType0_49 = ((MR_Word) ((MR_hl_field(0, DetailsSub_48, (MR_Integer) 0))));
        MR_Word SuperType_51;
        MR_Word Var_54;
        MR_Word _OoMCtors_50 = ((MR_Word) ((MR_hl_field(0, DetailsSub_48, (MR_Integer) 1))));

        parse_tree__comp_unit_interface__merge_tvarsets_and_subst_type_args_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTVarSet_41, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTypeParams_39, SuperType0_49, &SuperType_51);
        Var_54 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
        parse_tree__comp_unit_interface__get_base_type_5_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, SuperType_51, &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__BaseType_52, Var_54, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_5, env_ptr);
      }
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _TypeCtor_38 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 0))));
    MR_Word _Context_42;
    MR_Word _SeqNum_43;

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTypeParams_39 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 1))));
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_40 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 2))));
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTVarSet_41 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 3))));
    _Context_42 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 4))));
    _SeqNum_43 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_37, (MR_Integer) 5))));
    if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_40)) == (MR_Integer) 0))
    {
      MR_Word DetailsDu_44 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_40));
      MR_Word OoMCtors_45 = ((MR_Word) ((MR_hl_field(0, DetailsDu_44, (MR_Integer) 0))));
      MR_Word MaybeEqCmp_46 = ((MR_Word) ((MR_hl_field(0, DetailsDu_44, (MR_Integer) 1))));
      MR_Word MaybeDirectArgCtors_47 = ((MR_Word) ((MR_hl_field(0, DetailsDu_44, (MR_Integer) 2))));
      MR_Word Var_53;

      {
        Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_53, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8));
        MR_hl_field(1, Var_53, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9));
      }
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_2_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, OoMCtors_45, MaybeEqCmp_46, MaybeDirectArgCtors_47, Var_53);
    }
    else
    if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_40)) == (MR_Integer) 1))
      parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_6(env_ptr);
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_FALSE;
    if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
      parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_7(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_0) == 0)
    {
      {
        MR_Word ItemTypeDefnInfos_36;

        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15)), &ItemTypeDefnInfos_36);
        if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
          mercury__one_or_more__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__conv0_ItemTypeDefnInfo_37, ItemTypeDefnInfos_36, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_3, env_ptr);
      }
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_TRUE;
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word Type_8,
  MR_Word CoveredTypes0_9)
{
  struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s env;

  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6 = TypeDefnMap_6;
  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7 = TVarSet_7;
  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8 = Type_8;
  (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9 = CoveredTypes0_9;
  {
    MR_Word IsDummyType_10;

    switch (MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        IsDummyType_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(1, (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 0))));
          MR_Word _Kind_13;

          (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12 = ((MR_Word) ((MR_hl_field(1, (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 1))));
          _Kind_13 = ((MR_Word) ((MR_hl_field(1, (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 2))));
          (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) ((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8)), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9);
          if ((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
            IsDummyType_10 = (MR_Integer) 0;
          else
          {
            MR_Integer Arity_14;

            Arity_14 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (SymName_11));
              MR_hl_field(0, base, 1) = ((MR_Box) (Arity_14));
            }
            {
              MR_Word Var_31;

              Var_31 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15);
              (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = (Var_31 == (MR_Integer) 0);
            }
            if (!((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded))
              parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_7(&env);
            if ((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
              IsDummyType_10 = (MR_Integer) 1;
            else
              IsDummyType_10 = (MR_Integer) 0;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            IsDummyType_10 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            mercury__require__unexpected_2_p_0((MR_String) "function \140parse_tree.comp_unit_interface.ctor_arg_is_dummy_type\'/4", (MR_String) "kinded_type");
            break;
        }
        break;
    }
    return IsDummyType_10;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__conv0_ItemTypeDefnInfo_17));
  parse_tree__comp_unit_interface__get_base_type_5_p_0_1(env_ptr);
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word _TypeCtor_18 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 0))));
    MR_Word _Context_22;
    MR_Word _SeqNum_23;

    (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTypeParams_19 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 1))));
    (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_20 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 2))));
    (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTVarSet_21 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 3))));
    _Context_22 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 4))));
    _SeqNum_23 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 5))));
    if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_20)) == (MR_Integer) 0))
    {
      *((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9) = (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8;
      ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont)((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr);
    }
    else
    if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_20)) == (MR_Integer) 1))
    {
      MR_Word DetailsSub_25 = (MR_Word) (MR_body((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_20), (MR_Integer) 1));
      MR_Word SuperType0_26 = ((MR_Word) ((MR_hl_field(0, DetailsSub_25, (MR_Integer) 0))));
      MR_Word SuperType_28;
      MR_Word Renaming_35;
      MR_Word TypeParams_36;
      MR_Word TSubst_37;
      MR_Word Type1_38;
      MR_Word _OoMCtors_27 = ((MR_Word) ((MR_hl_field(0, DetailsSub_25, (MR_Integer) 1))));
      MR_Word _MergedTVarSet_34;

      parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTVarSet_21, &_MergedTVarSet_34, &Renaming_35);
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_35, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTypeParams_19, &TypeParams_36);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_36, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12, &TSubst_37);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_35, SuperType0_26, &Type1_38);
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_37, Type1_38, &SuperType_28);
      parse_tree__comp_unit_interface__get_base_type_5_p_0((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7, SuperType_28, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__STATE_VARIABLE_SeenTypes_30_30, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr);
    }
    else
    {
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word Type_8,
  MR_Word * BaseType_9,
  MR_Word STATE_VARIABLE_SeenTypes_0_29,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s env;

  (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6 = TypeDefnMap_6;
  (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7 = TVarSet_7;
  (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8 = Type_8;
  (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9 = BaseType_9;
  (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont = cont;
  (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded = ((MR_tag((MR_Word) (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8)) == (MR_Integer) 1);
    MR_Word TypeCtorInfo_31_31;
    MR_Word TypeCtorInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word SymName_11;
    MR_Integer Arity_14;
    MR_Word TypeCtor_15;
    MR_Word ItemTypeDefnInfos_16;
    MR_Word _Kind_13;

    if (succeeded)
    {
      SymName_11 = ((MR_Word) ((MR_hl_field(1, (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8, (MR_Integer) 0))));
      (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12 = ((MR_Word) ((MR_hl_field(1, (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8, (MR_Integer) 1))));
      _Kind_13 = ((MR_Word) ((MR_hl_field(1, (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8, (MR_Integer) 2))));
      TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      succeeded = mercury__set__insert_new_3_p_0(TypeCtorInfo_31_31, ((MR_Box) ((env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8)), STATE_VARIABLE_SeenTypes_0_29, &(env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__STATE_VARIABLE_SeenTypes_30_30);
      if (succeeded)
      {
        Arity_14 = mercury__list__length_1_f_0(TypeCtorInfo_31_31, (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12);
        TypeCtorInfo_32_32 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
        TypeInfo_33_33 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]);
        {
          TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_15, 0) = ((MR_Box) (SymName_11));
          MR_hl_field(0, TypeCtor_15, 1) = ((MR_Box) (Arity_14));
        }
        succeeded = mercury__one_or_more_map__search_3_p_0(TypeCtorInfo_32_32, TypeInfo_33_33, (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6, ((MR_Box) (TypeCtor_15)), &ItemTypeDefnInfos_16);
        if (succeeded)
          mercury__one_or_more__member_2_p_1(TypeInfo_33_33, &(env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__conv0_ItemTypeDefnInfo_17, ItemTypeDefnInfos_16, parse_tree__comp_unit_interface__get_base_type_5_p_0_2, &env);
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__merge_tvarsets_and_subst_type_args_6_p_0(
  MR_Word TVarSet_7,
  MR_Word TypeArgs_8,
  MR_Word TVarSet0_9,
  MR_Word TypeParams0_10,
  MR_Word Type0_11,
  MR_Word * Type_12)
{
  MR_Word Renaming_14;
  MR_Word TypeParams_15;
  MR_Word TSubst_16;
  MR_Word Type1_17;
  MR_Word _MergedTVarSet_13;

  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_7, TVarSet0_9, &_MergedTVarSet_13, &Renaming_14);
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_14, TypeParams0_10, &TypeParams_15);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_15, TypeArgs_8, &TSubst_16);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_14, Type0_11, &Type1_17);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_16, Type1_17, Type_12);
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
  MR_Word conv1_STATE_VARIABLE_Seen_33;

  parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Seen_33);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Seen_33));
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_6_p_0(
  MR_Word BothTypesMap_7,
  MR_Word TypeCtor_8,
  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_12,
  MR_Word * STATE_VARIABLE_AbsExpEqvLhsTypeCtors_13,
  MR_Word STATE_VARIABLE_Seen_0_14,
  MR_Word * STATE_VARIABLE_Seen_15)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Seen_16_16;

  succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_8)), STATE_VARIABLE_Seen_0_14, &STATE_VARIABLE_Seen_16_16);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_17;
    MR_Word ItemTypeDefnInfos_11;
    MR_Box conv0_ItemTypeDefnInfos_11;

    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_8)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_12, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_17);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), BothTypesMap_7, ((MR_Box) (TypeCtor_8)), &conv0_ItemTypeDefnInfos_11);
    if (succeeded)
    {
      ItemTypeDefnInfos_11 = ((MR_Word) (conv0_ItemTypeDefnInfos_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_18;
      MR_Box conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_13;
      MR_Box conv3_STATE_VARIABLE_Seen_15;

      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
        MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_6_p_0_1));
        MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_18, 3) = ((MR_Box) (BothTypesMap_7));
        MR_hl_field(0, Var_18, 4) = ((MR_Box) (TypeCtor_8));
      }
      mercury__one_or_more__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), Var_18, ItemTypeDefnInfos_11, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_17)), &conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_13, ((MR_Box) (STATE_VARIABLE_Seen_16_16)), &conv3_STATE_VARIABLE_Seen_15);
      *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_13 = ((MR_Word) (conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_13));
      *STATE_VARIABLE_Seen_15 = ((MR_Word) (conv3_STATE_VARIABLE_Seen_15));
    }
    else
    {
      *STATE_VARIABLE_Seen_15 = STATE_VARIABLE_Seen_16_16;
      *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_13 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_17;
    }
  }
  else
  {
    *STATE_VARIABLE_Seen_15 = STATE_VARIABLE_Seen_0_14;
    *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_13 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_12;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__keep_promise_item_int_1_p_0(
  MR_Word ItemPromise_2)
{
  MR_bool succeeded;
  MR_Word PromiseType_3 = ((MR_Unsigned) ((MR_hl_field(0, ItemPromise_2, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (PromiseType_3) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Modules_12;

  parse_tree__comp_unit_interface__accumulate_modules_in_qual_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_12));
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0(
  MR_Word ItemTypeClass_4,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_7,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8)
{
  MR_Word Constraints_6 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_4, (MR_Integer) 2))));
  MR_Box conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8;

  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[44]), Constraints_6, ((MR_Box) (STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_7)), &conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8);
  *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8 = ((MR_Word) (conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8));
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_imp_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_21,
  MR_Word * STATE_VARIABLE_ImpTypesMap_22)
{
  MR_Word Name_6 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 0))));
  MR_Word TypeParams_7 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 1))));
  MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 2))));
  MR_Word TypeCtor_12;
  MR_Word ItemTypeDefn1_15;
  MR_Integer Var_23;

  Var_23 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), TypeParams_7);
  {
    TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_12, 0) = ((MR_Box) (Name_6));
    MR_hl_field(0, TypeCtor_12, 1) = ((MR_Box) (Var_23));
  }
  switch (MR_tag((MR_Word) TypeDefn_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      ItemTypeDefn1_15 = ItemTypeDefn_4;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 0))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 1))));
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 3))));
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 4))));
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 5))));

        {
          ItemTypeDefn1_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemTypeDefn1_15, 0) = ((MR_Box) (Var_25));
          MR_hl_field(0, ItemTypeDefn1_15, 1) = ((MR_Box) (Var_26));
          MR_hl_field(0, ItemTypeDefn1_15, 2) = ((MR_Box) (MR_mkword(3, &parse_tree__comp_unit_interface_scalar_common_2[20])));
          MR_hl_field(0, ItemTypeDefn1_15, 3) = ((MR_Box) (Var_28));
          MR_hl_field(0, ItemTypeDefn1_15, 4) = ((MR_Box) (Var_29));
          MR_hl_field(0, ItemTypeDefn1_15, 5) = ((MR_Box) (Var_30));
        }
      }
      break;
    case (MR_Integer) 3:
      ItemTypeDefn1_15 = ItemTypeDefn_4;
      break;
  }
  mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (ItemTypeDefn1_15)), STATE_VARIABLE_ImpTypesMap_0_21, STATE_VARIABLE_ImpTypesMap_22);
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_int_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_IntTypesMap_0_13,
  MR_Word * STATE_VARIABLE_IntTypesMap_14)
{
  MR_Word Name_6 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 0))));
  MR_Word TypeParams_7 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_4, (MR_Integer) 1))));
  MR_Word TypeCtor_12;
  MR_Integer Var_15;

  Var_15 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), TypeParams_7);
  {
    TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_12, 0) = ((MR_Box) (Name_6));
    MR_hl_field(0, TypeCtor_12, 1) = ((MR_Box) (Var_15));
  }
  mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (ItemTypeDefn_4)), STATE_VARIABLE_IntTypesMap_0_13, STATE_VARIABLE_IntTypesMap_14);
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__make_imports_into_uses_maybe_implicit_4_p_0(
  MR_Word ImpNeededModules_5,
  MR_Word ModuleName_6,
  MR_Word ImportUse_7,
  MR_Word * SectionUseOnly_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) ImportUse_7)) == (MR_Integer) 0))
  {
    MR_Word Explicit_9 = ((MR_Word) ((MR_hl_field(0, ImportUse_7, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Explicit_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IntContext_13 = ((MR_Word) ((MR_hl_field(0, Explicit_9, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *SectionUseOnly_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (IntContext_13));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntContext_21 = ((MR_Word) ((MR_hl_field(1, Explicit_9, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *SectionUseOnly_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (IntContext_21));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ImpContext_15 = ((MR_Word) ((MR_hl_field(2, Explicit_9, (MR_Integer) 0))));

          succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SectionUseOnly_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ImpContext_15));
            }
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Explicit_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ImpContext_19 = ((MR_Word) ((MR_hl_field(3, Explicit_9, (MR_Integer) 1))));

              succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *SectionUseOnly_8 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (ImpContext_19));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IntContext_22 = ((MR_Word) ((MR_hl_field(3, Explicit_9, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *SectionUseOnly_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (IntContext_22));
              }
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word MaybeExplicit_11 = ((MR_Word) ((MR_hl_field(1, ImportUse_7, (MR_Integer) 1))));
    MR_Word Explicit_12;

    succeeded = (MaybeExplicit_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Explicit_12 = ((MR_Word) ((MR_hl_field(1, MaybeExplicit_11, (MR_Integer) 0))));
      switch (MR_tag((MR_Word) Explicit_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word IntContext_23 = ((MR_Word) ((MR_hl_field(0, Explicit_12, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *SectionUseOnly_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (IntContext_23));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntContext_31 = ((MR_Word) ((MR_hl_field(1, Explicit_12, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *SectionUseOnly_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (IntContext_31));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ImpContext_25 = ((MR_Word) ((MR_hl_field(2, Explicit_12, (MR_Integer) 0))));

            succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *SectionUseOnly_8 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (ImpContext_25));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Explicit_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ImpContext_29 = ((MR_Word) ((MR_hl_field(3, Explicit_12, (MR_Integer) 1))));

                succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *SectionUseOnly_8 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (ImpContext_29));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_32 = ((MR_Word) ((MR_hl_field(3, Explicit_12, (MR_Integer) 1))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *SectionUseOnly_8 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (IntContext_32));
                }
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_self_fim_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_FIMSpecs_0_9,
  MR_Word * STATE_VARIABLE_FIMSpecs_10)
{
  MR_Word FIMSpec_8;

  {
    FIMSpec_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FIMSpec_8, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
    MR_hl_field(0, FIMSpec_8, 1) = ((MR_Box) (ModuleName_5));
  }
  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ((MR_Box) (FIMSpec_8)), STATE_VARIABLE_FIMSpecs_0_9, STATE_VARIABLE_FIMSpecs_10);
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_mode_ctor_checked_defn__777__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word CheckedDefn0_6,
  MR_Word STATE_VARIABLE_ModeCtorCheckedMap_0_18,
  MR_Word * STATE_VARIABLE_ModeCtorCheckedMap_19)
{
  MR_bool succeeded;
  MR_Word StdDefn0_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_6, (MR_Integer) 0))));
  MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_6, (MR_Integer) 1))));
  MR_Word Status_10 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn0_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MaybeIntDefn_12 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, (MR_Integer) 0))));
  MR_Word MaybeImpDefn_13 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, (MR_Integer) 1))));

  switch (Status_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((MaybeIntDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.pre_grab_pre_qual_mode_ctor_checked_defn\'/4", (MR_String) "std_mode_abstract_exported but no int defn");
          return;
        }
      else
      {
        MR_Word IntDefn_14 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn_12, (MR_Integer) 0))));
        MR_Word StdDefn_15;
        MR_Word SrcDefns_16;
        MR_Word CheckedDefn_17;

        {
          StdDefn_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StdDefn_15, 0) = (MR_Box) ((MR_Unsigned) (Status_10));
          MR_hl_field(0, StdDefn_15, 1) = ((MR_Box) (IntDefn_14));
        }
        {
          SrcDefns_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefns_16, 0) = ((MR_Box) (MaybeIntDefn_12));
          MR_hl_field(0, SrcDefns_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CheckedDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CheckedDefn_17, 0) = ((MR_Box) (StdDefn_15));
          MR_hl_field(0, CheckedDefn_17, 1) = ((MR_Box) (SrcDefns_16));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_5)), ((MR_Box) (CheckedDefn_17)), STATE_VARIABLE_ModeCtorCheckedMap_0_18, STATE_VARIABLE_ModeCtorCheckedMap_19);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_ModeCtorCheckedMap_19 = STATE_VARIABLE_ModeCtorCheckedMap_0_18;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[10]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (MaybeImpDefn_13));
          MR_hl_field(0, Var_20, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_20, (MR_String) "predicate \140parse_tree.comp_unit_interface.pre_grab_pre_qual_mode_ctor_checked_defn\'/4", (MR_String) "exported but has imp defn");
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_5)), ((MR_Box) (CheckedDefn0_6)), STATE_VARIABLE_ModeCtorCheckedMap_0_18, STATE_VARIABLE_ModeCtorCheckedMap_19);
      }
      break;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_inst_ctor_checked_defn__744__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn0_6,
  MR_Word STATE_VARIABLE_InstCtorCheckedMap_0_18,
  MR_Word * STATE_VARIABLE_InstCtorCheckedMap_19)
{
  MR_bool succeeded;
  MR_Word StdDefn0_8 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_6, (MR_Integer) 0))));
  MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_6, (MR_Integer) 1))));
  MR_Word Status_10 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn0_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MaybeIntDefn_12 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, (MR_Integer) 0))));
  MR_Word MaybeImpDefn_13 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, (MR_Integer) 1))));

  switch (Status_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((MaybeIntDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.pre_grab_pre_qual_inst_ctor_checked_defn\'/4", (MR_String) "std_inst_abstract_exported but no int defn");
          return;
        }
      else
      {
        MR_Word IntDefn_14 = ((MR_Word) ((MR_hl_field(1, MaybeIntDefn_12, (MR_Integer) 0))));
        MR_Word StdDefn_15;
        MR_Word SrcDefns_16;
        MR_Word CheckedDefn_17;

        {
          StdDefn_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StdDefn_15, 0) = (MR_Box) ((MR_Unsigned) (Status_10));
          MR_hl_field(0, StdDefn_15, 1) = ((MR_Box) (IntDefn_14));
        }
        {
          SrcDefns_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefns_16, 0) = ((MR_Box) (MaybeIntDefn_12));
          MR_hl_field(0, SrcDefns_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CheckedDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CheckedDefn_17, 0) = ((MR_Box) (StdDefn_15));
          MR_hl_field(0, CheckedDefn_17, 1) = ((MR_Box) (SrcDefns_16));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (CheckedDefn_17)), STATE_VARIABLE_InstCtorCheckedMap_0_18, STATE_VARIABLE_InstCtorCheckedMap_19);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_InstCtorCheckedMap_19 = STATE_VARIABLE_InstCtorCheckedMap_0_18;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[9]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (MaybeImpDefn_13));
          MR_hl_field(0, Var_20, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_20, (MR_String) "predicate \140parse_tree.comp_unit_interface.pre_grab_pre_qual_inst_ctor_checked_defn\'/4", (MR_String) "exported but has imp defn");
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (CheckedDefn0_6)), STATE_VARIABLE_InstCtorCheckedMap_0_18, STATE_VARIABLE_InstCtorCheckedMap_19);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_ItemTypeDefn_4;

  parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_ItemTypeDefn_4);
  *wrapper_arg_2 = ((MR_Box) (conv4_ItemTypeDefn_4));
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_ItemTypeDefn_4;

  parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_ItemTypeDefn_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_ItemTypeDefn_4));
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_ItemTypeDefn_4;

  parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_ItemTypeDefn_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_ItemTypeDefn_4));
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ItemTypeDefn_4;

  parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_ItemTypeDefn_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_ItemTypeDefn_4));
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ItemTypeDefn_4;

  parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ItemTypeDefn_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_ItemTypeDefn_4));
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0(
  MR_Word CheckedDefn0_3,
  MR_Word * CheckedDefn_4)
{
  if (((MR_tag((MR_Word) CheckedDefn0_3)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn0_5 = ((MR_Word) ((MR_hl_field(0, CheckedDefn0_3, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SolverDefn0_5)) == (MR_Integer) 0))
      *CheckedDefn_4 = CheckedDefn0_3;
    else
    {
      MR_Word MaybeAbstractDefn0_9 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_5, (MR_Integer) 0))));
      MR_Word FullDefn0_10 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_5, (MR_Integer) 1))));
      MR_Word SolverDefn_13;
      MR_Word SrcDefns_15;

      if ((MaybeAbstractDefn0_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word AbstractDefn_16;
        MR_Word WrapAbstractDefn_17;
        MR_Word Var_40;
        MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, FullDefn0_10, (MR_Integer) 0))));
        MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, FullDefn0_10, (MR_Integer) 1))));
        MR_Word Var_91 = ((MR_Word) ((MR_hl_field(0, FullDefn0_10, (MR_Integer) 3))));
        MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, FullDefn0_10, (MR_Integer) 4))));
        MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, FullDefn0_10, (MR_Integer) 5))));

        {
          AbstractDefn_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AbstractDefn_16, 0) = ((MR_Box) (Var_88));
          MR_hl_field(0, AbstractDefn_16, 1) = ((MR_Box) (Var_89));
          MR_hl_field(0, AbstractDefn_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(0, AbstractDefn_16, 3) = ((MR_Box) (Var_91));
          MR_hl_field(0, AbstractDefn_16, 4) = ((MR_Box) (Var_92));
          MR_hl_field(0, AbstractDefn_16, 5) = ((MR_Box) (Var_93));
        }
        {
          SolverDefn_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SolverDefn_13, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, SolverDefn_13, 1) = ((MR_Box) (AbstractDefn_16));
        }
        WrapAbstractDefn_17 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_16);
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (WrapAbstractDefn_17));
        }
        {
          SrcDefns_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefns_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SrcDefns_15, 1) = ((MR_Box) (Var_40));
        }
      }
      else
      {
        MR_Word AbstractDefn0_11 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractDefn0_9, (MR_Integer) 0))));
        MR_Word WrapAbstractDefn0_14;
        MR_Word Var_36;

        {
          SolverDefn_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SolverDefn_13, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, SolverDefn_13, 1) = ((MR_Box) (AbstractDefn0_11));
        }
        WrapAbstractDefn0_14 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn0_11);
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (WrapAbstractDefn0_14));
        }
        {
          SrcDefns_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefns_15, 0) = ((MR_Box) (Var_36));
          MR_hl_field(0, SrcDefns_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *CheckedDefn_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (SolverDefn_13));
        MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefns_15));
      }
    }
  }
  else
  {
    MR_Word StdDefn0_18 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_3, (MR_Integer) 0))));
    MR_Word SrcDefns0_19 = ((MR_Word) ((MR_hl_field(1, CheckedDefn0_3, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) StdDefn0_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *CheckedDefn_4 = CheckedDefn0_3;
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuDefn0_22 = ((MR_Word) ((MR_hl_field(2, StdDefn0_18, (MR_Integer) 1))));
          MR_String HeadCtor_23 = ((MR_String) ((MR_hl_field(2, StdDefn0_18, (MR_Integer) 2))));
          MR_Word TailCtors_24 = ((MR_Word) ((MR_hl_field(2, StdDefn0_18, (MR_Integer) 3))));
          MR_Word MaybeCJCsDefnOrEnum0_25 = ((MR_Word) ((MR_hl_field(2, StdDefn0_18, (MR_Integer) 4))));
          MR_Word IntDefns0_26 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_19, (MR_Integer) 0))));
          MR_Word ImpDefns0_27 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_19, (MR_Integer) 1))));
          MR_Word ImpForeignEnums0_28 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_19, (MR_Integer) 2))));
          MR_Word StdDefn_29;
          MR_Word Status_53 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn0_18, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word SrcDefns_54;

          switch (Status_53) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word DuDefn_32;
                MR_Word MaybeCJCsDefnOrEnum_51;
                MR_Word ImpDefns_52;
                MR_Word DetailsDu0_109 = ((MR_Word) ((MR_hl_field(0, DuDefn0_22, (MR_Integer) 2))));
                MR_Word DetailsDu_110;
                MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, DuDefn0_22, (MR_Integer) 0))));
                MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, DuDefn0_22, (MR_Integer) 1))));
                MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, DuDefn0_22, (MR_Integer) 3))));
                MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, DuDefn0_22, (MR_Integer) 4))));
                MR_Word Var_115 = ((MR_Word) ((MR_hl_field(0, DuDefn0_22, (MR_Integer) 5))));
                MR_Word MaybeCanonical_122 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_109, (MR_Integer) 1))));
                MR_Word Var_127 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_109, (MR_Integer) 0))));
                MR_Word Var_128 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_109, (MR_Integer) 2))));

                if ((MaybeCanonical_122 == (MR_Word) ((MR_Unsigned) 0U)))
                  DetailsDu_110 = DetailsDu0_109;
                else
                  {
                    DetailsDu_110 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, DetailsDu_110, 0) = ((MR_Box) (Var_127));
                    MR_hl_field(0, DetailsDu_110, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
                    MR_hl_field(0, DetailsDu_110, 2) = ((MR_Box) (Var_128));
                  }
                {
                  DuDefn_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, DuDefn_32, 0) = ((MR_Box) (Var_111));
                  MR_hl_field(0, DuDefn_32, 1) = ((MR_Box) (Var_112));
                  MR_hl_field(0, DuDefn_32, 2) = ((MR_Box) (DetailsDu_110));
                  MR_hl_field(0, DuDefn_32, 3) = ((MR_Box) (Var_113));
                  MR_hl_field(0, DuDefn_32, 4) = ((MR_Box) (Var_114));
                  MR_hl_field(0, DuDefn_32, 5) = ((MR_Box) (Var_115));
                }
                parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_or_enum_2_p_0(MaybeCJCsDefnOrEnum0_25, &MaybeCJCsDefnOrEnum_51);
                {
                  StdDefn_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, StdDefn_29, 0) = (MR_Box) ((MR_Unsigned) (Status_53));
                  MR_hl_field(2, StdDefn_29, 1) = ((MR_Box) (DuDefn_32));
                  MR_hl_field(2, StdDefn_29, 2) = ((MR_Box) (HeadCtor_23));
                  MR_hl_field(2, StdDefn_29, 3) = ((MR_Box) (TailCtors_24));
                  MR_hl_field(2, StdDefn_29, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_51));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[40]), ImpDefns0_27, &ImpDefns_52);
                {
                  SrcDefns_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefns_54, 0) = ((MR_Box) (IntDefns0_26));
                  MR_hl_field(0, SrcDefns_54, 1) = ((MR_Box) (ImpDefns_52));
                  MR_hl_field(0, SrcDefns_54, 2) = ((MR_Box) (ImpForeignEnums0_28));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeCJCsDefnOrEnum_30;
                MR_Word ImpDefns_31;

                parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_or_enum_2_p_0(MaybeCJCsDefnOrEnum0_25, &MaybeCJCsDefnOrEnum_30);
                {
                  StdDefn_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, StdDefn_29, 0) = (MR_Box) ((MR_Unsigned) (Status_53));
                  MR_hl_field(2, StdDefn_29, 1) = ((MR_Box) (DuDefn0_22));
                  MR_hl_field(2, StdDefn_29, 2) = ((MR_Box) (HeadCtor_23));
                  MR_hl_field(2, StdDefn_29, 3) = ((MR_Box) (TailCtors_24));
                  MR_hl_field(2, StdDefn_29, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_30));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[41]), ImpDefns0_27, &ImpDefns_31);
                {
                  SrcDefns_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefns_54, 0) = ((MR_Box) (IntDefns0_26));
                  MR_hl_field(0, SrcDefns_54, 1) = ((MR_Box) (ImpDefns_31));
                  MR_hl_field(0, SrcDefns_54, 2) = ((MR_Box) (ImpForeignEnums0_28));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                StdDefn_29 = StdDefn0_18;
                SrcDefns_54 = SrcDefns0_19;
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CheckedDefn_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (StdDefn_29));
            MR_hl_field(1, base, 1) = ((MR_Box) (SrcDefns_54));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MaybeCJCsDefn0_33 = ((MR_Word) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 3))));
              MR_Word Status_61 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word SrcDefns_62;
              MR_Word DuDefn0_63 = ((MR_Word) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 2))));
              MR_Word IntDefns0_64 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_19, (MR_Integer) 0))));
              MR_Word ImpDefns0_65 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_19, (MR_Integer) 1))));
              MR_Word ImpForeignEnums0_66 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_19, (MR_Integer) 2))));
              MR_Word StdDefn_67;

              switch (Status_61) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  {
                    MR_Word ImpDefns_56;
                    MR_Word DuDefn_57;
                    MR_Word MaybeCJCsDefn_58;

                    parse_tree__comp_unit_interface__delete_uc_preds_from_du_type_defn_2_p_0(DuDefn0_63, &DuDefn_57);
                    parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_2_p_0(MaybeCJCsDefn0_33, &MaybeCJCsDefn_58);
                    {
                      StdDefn_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdDefn_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, StdDefn_67, 1) = (MR_Box) ((MR_Unsigned) (Status_61));
                      MR_hl_field(3, StdDefn_67, 2) = ((MR_Box) (DuDefn_57));
                      MR_hl_field(3, StdDefn_67, 3) = ((MR_Box) (MaybeCJCsDefn_58));
                    }
                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[42]), ImpDefns0_65, &ImpDefns_56);
                    {
                      SrcDefns_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefns_62, 0) = ((MR_Box) (IntDefns0_64));
                      MR_hl_field(0, SrcDefns_62, 1) = ((MR_Box) (ImpDefns_56));
                      MR_hl_field(0, SrcDefns_62, 2) = ((MR_Box) (ImpForeignEnums0_66));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MaybeCJCsDefn_34;
                    MR_Word ImpDefns_55;

                    parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_2_p_0(MaybeCJCsDefn0_33, &MaybeCJCsDefn_34);
                    {
                      StdDefn_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdDefn_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, StdDefn_67, 1) = (MR_Box) ((MR_Unsigned) (Status_61));
                      MR_hl_field(3, StdDefn_67, 2) = ((MR_Box) (DuDefn0_63));
                      MR_hl_field(3, StdDefn_67, 3) = ((MR_Box) (MaybeCJCsDefn_34));
                    }
                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[43]), ImpDefns0_65, &ImpDefns_55);
                    {
                      SrcDefns_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefns_62, 0) = ((MR_Box) (IntDefns0_64));
                      MR_hl_field(0, SrcDefns_62, 1) = ((MR_Box) (ImpDefns_55));
                      MR_hl_field(0, SrcDefns_62, 2) = ((MR_Box) (ImpForeignEnums0_66));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    StdDefn_67 = StdDefn0_18;
                    SrcDefns_62 = SrcDefns0_19;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *CheckedDefn_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (StdDefn_67));
                MR_hl_field(1, base, 1) = ((MR_Box) (SrcDefns_62));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbsDefn_35 = ((MR_Word) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 2))));
              MR_Word Status_80 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word SrcDefns_81;
              MR_Word StdDefn_85;
              MR_Word MaybeCJCsDefn0_87 = ((MR_Word) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 3))));

              switch (Status_80) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    MR_Word IntDefns0_70;
                    MR_Word ImpDefns0_71;
                    MR_Word ImpForeignEnums0_72;
                    MR_Word ImpDefns_73;
                    MR_Word MaybeCJCsDefn_74;

                    parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_2_p_0(MaybeCJCsDefn0_87, &MaybeCJCsDefn_74);
                    {
                      StdDefn_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdDefn_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, StdDefn_85, 1) = (MR_Box) ((MR_Unsigned) (Status_80));
                      MR_hl_field(3, StdDefn_85, 2) = ((MR_Box) (AbsDefn_35));
                      MR_hl_field(3, StdDefn_85, 3) = ((MR_Box) (MaybeCJCsDefn_74));
                    }
                    IntDefns0_70 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_19, (MR_Integer) 0))));
                    ImpDefns0_71 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_19, (MR_Integer) 1))));
                    ImpForeignEnums0_72 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_19, (MR_Integer) 2))));
                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[39]), ImpDefns0_71, &ImpDefns_73);
                    {
                      SrcDefns_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefns_81, 0) = ((MR_Box) (IntDefns0_70));
                      MR_hl_field(0, SrcDefns_81, 1) = ((MR_Box) (ImpDefns_73));
                      MR_hl_field(0, SrcDefns_81, 2) = ((MR_Box) (ImpForeignEnums0_72));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    StdDefn_85 = StdDefn0_18;
                    SrcDefns_81 = SrcDefns0_19;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *CheckedDefn_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (StdDefn_85));
                MR_hl_field(1, base, 1) = ((MR_Box) (SrcDefns_81));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_2_p_0(
  MR_Word CJCsMaybeDefn0_3,
  MR_Word * CJCsMaybeDefn_4)
{
  MR_Word MaybeDefnC0_5 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefn0_3, (MR_Integer) 0))));
  MR_Word MaybeDefnJ0_6 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefn0_3, (MR_Integer) 1))));
  MR_Word MaybeDefnCs0_7 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefn0_3, (MR_Integer) 2))));
  MR_Word MaybeDefnC_8;
  MR_Word MaybeDefnJ_9;
  MR_Word MaybeDefnCs_10;

  if ((MaybeDefnC0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDefnC_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ItemTypeDefn0_11 = ((MR_Word) ((MR_hl_field(1, MaybeDefnC0_5, (MR_Integer) 0))));
    MR_Word DetailsForeign0_12 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 2))));
    MR_Word DetailsForeign_13;
    MR_Word ItemTypeDefn_14;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 1))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 3))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 4))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_11, (MR_Integer) 5))));
    MR_Word MaybeCanonical0_27 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_12, (MR_Integer) 1))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_12, (MR_Integer) 0))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_12, (MR_Integer) 2))));

    if ((MaybeCanonical0_27 == (MR_Word) ((MR_Unsigned) 0U)))
      DetailsForeign_13 = DetailsForeign0_12;
    else
      {
        DetailsForeign_13 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DetailsForeign_13, 0) = ((MR_Box) (Var_32));
        MR_hl_field(0, DetailsForeign_13, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
        MR_hl_field(0, DetailsForeign_13, 2) = ((MR_Box) (Var_33));
      }
    {
      ItemTypeDefn_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemTypeDefn_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(0, ItemTypeDefn_14, 1) = ((MR_Box) (Var_16));
      MR_hl_field(0, ItemTypeDefn_14, 2) = ((MR_Box) (DetailsForeign_13));
      MR_hl_field(0, ItemTypeDefn_14, 3) = ((MR_Box) (Var_17));
      MR_hl_field(0, ItemTypeDefn_14, 4) = ((MR_Box) (Var_18));
      MR_hl_field(0, ItemTypeDefn_14, 5) = ((MR_Box) (Var_19));
    }
    {
      MaybeDefnC_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDefnC_8, 0) = ((MR_Box) (ItemTypeDefn_14));
    }
  }
  if ((MaybeDefnJ0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDefnJ_9 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ItemTypeDefn0_37 = ((MR_Word) ((MR_hl_field(1, MaybeDefnJ0_6, (MR_Integer) 0))));
    MR_Word DetailsForeign0_38 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_37, (MR_Integer) 2))));
    MR_Word DetailsForeign_39;
    MR_Word ItemTypeDefn_40;
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_37, (MR_Integer) 0))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_37, (MR_Integer) 1))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_37, (MR_Integer) 3))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_37, (MR_Integer) 4))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_37, (MR_Integer) 5))));
    MR_Word MaybeCanonical0_53 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_38, (MR_Integer) 1))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_38, (MR_Integer) 0))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_38, (MR_Integer) 2))));

    if ((MaybeCanonical0_53 == (MR_Word) ((MR_Unsigned) 0U)))
      DetailsForeign_39 = DetailsForeign0_38;
    else
      {
        DetailsForeign_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DetailsForeign_39, 0) = ((MR_Box) (Var_58));
        MR_hl_field(0, DetailsForeign_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
        MR_hl_field(0, DetailsForeign_39, 2) = ((MR_Box) (Var_59));
      }
    {
      ItemTypeDefn_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemTypeDefn_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(0, ItemTypeDefn_40, 1) = ((MR_Box) (Var_42));
      MR_hl_field(0, ItemTypeDefn_40, 2) = ((MR_Box) (DetailsForeign_39));
      MR_hl_field(0, ItemTypeDefn_40, 3) = ((MR_Box) (Var_43));
      MR_hl_field(0, ItemTypeDefn_40, 4) = ((MR_Box) (Var_44));
      MR_hl_field(0, ItemTypeDefn_40, 5) = ((MR_Box) (Var_45));
    }
    {
      MaybeDefnJ_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDefnJ_9, 0) = ((MR_Box) (ItemTypeDefn_40));
    }
  }
  if ((MaybeDefnCs0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDefnCs_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ItemTypeDefn0_63 = ((MR_Word) ((MR_hl_field(1, MaybeDefnCs0_7, (MR_Integer) 0))));
    MR_Word DetailsForeign0_64 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_63, (MR_Integer) 2))));
    MR_Word DetailsForeign_65;
    MR_Word ItemTypeDefn_66;
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_63, (MR_Integer) 0))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_63, (MR_Integer) 1))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_63, (MR_Integer) 3))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_63, (MR_Integer) 4))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_63, (MR_Integer) 5))));
    MR_Word MaybeCanonical0_79 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_64, (MR_Integer) 1))));
    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_64, (MR_Integer) 0))));
    MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_64, (MR_Integer) 2))));

    if ((MaybeCanonical0_79 == (MR_Word) ((MR_Unsigned) 0U)))
      DetailsForeign_65 = DetailsForeign0_64;
    else
      {
        DetailsForeign_65 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DetailsForeign_65, 0) = ((MR_Box) (Var_84));
        MR_hl_field(0, DetailsForeign_65, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
        MR_hl_field(0, DetailsForeign_65, 2) = ((MR_Box) (Var_85));
      }
    {
      ItemTypeDefn_66 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ItemTypeDefn_66, 0) = ((MR_Box) (Var_67));
      MR_hl_field(0, ItemTypeDefn_66, 1) = ((MR_Box) (Var_68));
      MR_hl_field(0, ItemTypeDefn_66, 2) = ((MR_Box) (DetailsForeign_65));
      MR_hl_field(0, ItemTypeDefn_66, 3) = ((MR_Box) (Var_69));
      MR_hl_field(0, ItemTypeDefn_66, 4) = ((MR_Box) (Var_70));
      MR_hl_field(0, ItemTypeDefn_66, 5) = ((MR_Box) (Var_71));
    }
    {
      MaybeDefnCs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDefnCs_10, 0) = ((MR_Box) (ItemTypeDefn_66));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *CJCsMaybeDefn_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeDefnC_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeDefnJ_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeDefnCs_10));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_or_enum_2_p_0(
  MR_Word CJCsMaybeDefnOrEnum0_3,
  MR_Word * CJCsMaybeDefnOrEnum_4)
{
  MR_Word MaybeDefnOrEnumC0_5 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefnOrEnum0_3, (MR_Integer) 0))));
  MR_Word MaybeDefnOrEnumJ0_6 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefnOrEnum0_3, (MR_Integer) 1))));
  MR_Word MaybeDefnOrEnumCs0_7 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefnOrEnum0_3, (MR_Integer) 2))));
  MR_Word MaybeDefnOrEnumC_8;
  MR_Word MaybeDefnOrEnumJ_9;
  MR_Word MaybeDefnOrEnumCs_10;

  if ((MaybeDefnOrEnumC0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDefnOrEnumC_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DefnOrEnum0_11 = ((MR_Word) ((MR_hl_field(1, MaybeDefnOrEnumC0_5, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) DefnOrEnum0_11)) == (MR_Integer) 0))
      MaybeDefnOrEnumC_8 = MaybeDefnOrEnumC0_5;
    else
    {
      MR_Word ItemTypeDefn0_13 = ((MR_Word) ((MR_hl_field(1, DefnOrEnum0_11, (MR_Integer) 0))));
      MR_Word DetailsForeign0_14 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_13, (MR_Integer) 2))));
      MR_Word DetailsForeign_15;
      MR_Word ItemTypeDefn_16;
      MR_Word DefnOrEnum_17;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_13, (MR_Integer) 0))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_13, (MR_Integer) 1))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_13, (MR_Integer) 3))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_13, (MR_Integer) 4))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_13, (MR_Integer) 5))));
      MR_Word MaybeCanonical0_30 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_14, (MR_Integer) 1))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_14, (MR_Integer) 0))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_14, (MR_Integer) 2))));

      if ((MaybeCanonical0_30 == (MR_Word) ((MR_Unsigned) 0U)))
        DetailsForeign_15 = DetailsForeign0_14;
      else
        {
          DetailsForeign_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DetailsForeign_15, 0) = ((MR_Box) (Var_35));
          MR_hl_field(0, DetailsForeign_15, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
          MR_hl_field(0, DetailsForeign_15, 2) = ((MR_Box) (Var_36));
        }
      {
        ItemTypeDefn_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemTypeDefn_16, 0) = ((MR_Box) (Var_18));
        MR_hl_field(0, ItemTypeDefn_16, 1) = ((MR_Box) (Var_19));
        MR_hl_field(0, ItemTypeDefn_16, 2) = ((MR_Box) (DetailsForeign_15));
        MR_hl_field(0, ItemTypeDefn_16, 3) = ((MR_Box) (Var_20));
        MR_hl_field(0, ItemTypeDefn_16, 4) = ((MR_Box) (Var_21));
        MR_hl_field(0, ItemTypeDefn_16, 5) = ((MR_Box) (Var_22));
      }
      {
        DefnOrEnum_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DefnOrEnum_17, 0) = ((MR_Box) (ItemTypeDefn_16));
      }
      {
        MaybeDefnOrEnumC_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDefnOrEnumC_8, 0) = ((MR_Box) (DefnOrEnum_17));
      }
    }
  }
  if ((MaybeDefnOrEnumJ0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDefnOrEnumJ_9 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DefnOrEnum0_40 = ((MR_Word) ((MR_hl_field(1, MaybeDefnOrEnumJ0_6, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) DefnOrEnum0_40)) == (MR_Integer) 0))
      MaybeDefnOrEnumJ_9 = MaybeDefnOrEnumJ0_6;
    else
    {
      MR_Word ItemTypeDefn0_42 = ((MR_Word) ((MR_hl_field(1, DefnOrEnum0_40, (MR_Integer) 0))));
      MR_Word DetailsForeign0_43 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_42, (MR_Integer) 2))));
      MR_Word DetailsForeign_44;
      MR_Word ItemTypeDefn_45;
      MR_Word DefnOrEnum_46;
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_42, (MR_Integer) 0))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_42, (MR_Integer) 1))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_42, (MR_Integer) 3))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_42, (MR_Integer) 4))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_42, (MR_Integer) 5))));
      MR_Word MaybeCanonical0_59 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_43, (MR_Integer) 1))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_43, (MR_Integer) 0))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_43, (MR_Integer) 2))));

      if ((MaybeCanonical0_59 == (MR_Word) ((MR_Unsigned) 0U)))
        DetailsForeign_44 = DetailsForeign0_43;
      else
        {
          DetailsForeign_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DetailsForeign_44, 0) = ((MR_Box) (Var_64));
          MR_hl_field(0, DetailsForeign_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
          MR_hl_field(0, DetailsForeign_44, 2) = ((MR_Box) (Var_65));
        }
      {
        ItemTypeDefn_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemTypeDefn_45, 0) = ((MR_Box) (Var_47));
        MR_hl_field(0, ItemTypeDefn_45, 1) = ((MR_Box) (Var_48));
        MR_hl_field(0, ItemTypeDefn_45, 2) = ((MR_Box) (DetailsForeign_44));
        MR_hl_field(0, ItemTypeDefn_45, 3) = ((MR_Box) (Var_49));
        MR_hl_field(0, ItemTypeDefn_45, 4) = ((MR_Box) (Var_50));
        MR_hl_field(0, ItemTypeDefn_45, 5) = ((MR_Box) (Var_51));
      }
      {
        DefnOrEnum_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DefnOrEnum_46, 0) = ((MR_Box) (ItemTypeDefn_45));
      }
      {
        MaybeDefnOrEnumJ_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDefnOrEnumJ_9, 0) = ((MR_Box) (DefnOrEnum_46));
      }
    }
  }
  if ((MaybeDefnOrEnumCs0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeDefnOrEnumCs_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DefnOrEnum0_69 = ((MR_Word) ((MR_hl_field(1, MaybeDefnOrEnumCs0_7, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) DefnOrEnum0_69)) == (MR_Integer) 0))
      MaybeDefnOrEnumCs_10 = MaybeDefnOrEnumCs0_7;
    else
    {
      MR_Word ItemTypeDefn0_71 = ((MR_Word) ((MR_hl_field(1, DefnOrEnum0_69, (MR_Integer) 0))));
      MR_Word DetailsForeign0_72 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_71, (MR_Integer) 2))));
      MR_Word DetailsForeign_73;
      MR_Word ItemTypeDefn_74;
      MR_Word DefnOrEnum_75;
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_71, (MR_Integer) 0))));
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_71, (MR_Integer) 1))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_71, (MR_Integer) 3))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_71, (MR_Integer) 4))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_71, (MR_Integer) 5))));
      MR_Word MaybeCanonical0_88 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_72, (MR_Integer) 1))));
      MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_72, (MR_Integer) 0))));
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, DetailsForeign0_72, (MR_Integer) 2))));

      if ((MaybeCanonical0_88 == (MR_Word) ((MR_Unsigned) 0U)))
        DetailsForeign_73 = DetailsForeign0_72;
      else
        {
          DetailsForeign_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DetailsForeign_73, 0) = ((MR_Box) (Var_93));
          MR_hl_field(0, DetailsForeign_73, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
          MR_hl_field(0, DetailsForeign_73, 2) = ((MR_Box) (Var_94));
        }
      {
        ItemTypeDefn_74 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemTypeDefn_74, 0) = ((MR_Box) (Var_76));
        MR_hl_field(0, ItemTypeDefn_74, 1) = ((MR_Box) (Var_77));
        MR_hl_field(0, ItemTypeDefn_74, 2) = ((MR_Box) (DetailsForeign_73));
        MR_hl_field(0, ItemTypeDefn_74, 3) = ((MR_Box) (Var_78));
        MR_hl_field(0, ItemTypeDefn_74, 4) = ((MR_Box) (Var_79));
        MR_hl_field(0, ItemTypeDefn_74, 5) = ((MR_Box) (Var_80));
      }
      {
        DefnOrEnum_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DefnOrEnum_75, 0) = ((MR_Box) (ItemTypeDefn_74));
      }
      {
        MaybeDefnOrEnumCs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDefnOrEnumCs_10, 0) = ((MR_Box) (DefnOrEnum_75));
      }
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *CJCsMaybeDefnOrEnum_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeDefnOrEnumC_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeDefnOrEnumJ_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeDefnOrEnumCs_10));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_du_type_defn_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4)
{
  MR_Word DetailsDu0_5 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 2))));
  MR_Word DetailsDu_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 4))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn0_3, (MR_Integer) 5))));
  MR_Word MaybeCanonical_18 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_5, (MR_Integer) 1))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_5, (MR_Integer) 0))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, DetailsDu0_5, (MR_Integer) 2))));

  if ((MaybeCanonical_18 == (MR_Word) ((MR_Unsigned) 0U)))
    DetailsDu_6 = DetailsDu0_5;
  else
    {
      DetailsDu_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DetailsDu_6, 0) = ((MR_Box) (Var_23));
      MR_hl_field(0, DetailsDu_6, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__comp_unit_interface_scalar_common_4[0])));
      MR_hl_field(0, DetailsDu_6, 2) = ((MR_Box) (Var_24));
    }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ItemTypeDefn_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (DetailsDu_6));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_11));
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_for_int3_1_f_0(
  MR_Word OrigTypeClass_3)
{
  MR_Word TypeClass_4;
  MR_Word ClassName_5 = ((MR_Word) ((MR_hl_field(0, OrigTypeClass_3, (MR_Integer) 0))));
  MR_Word ParamsTVars_6 = ((MR_Word) ((MR_hl_field(0, OrigTypeClass_3, (MR_Integer) 1))));
  MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(0, OrigTypeClass_3, (MR_Integer) 5))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, OrigTypeClass_3, (MR_Integer) 6))));
  MR_Word SeqNum_12 = ((MR_Word) ((MR_hl_field(0, OrigTypeClass_3, (MR_Integer) 7))));

  {
    TypeClass_4 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeClass_4, 0) = ((MR_Box) (ClassName_5));
    MR_hl_field(0, TypeClass_4, 1) = ((MR_Box) (ParamsTVars_6));
    MR_hl_field(0, TypeClass_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, TypeClass_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, TypeClass_4, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, TypeClass_4, 5) = ((MR_Box) (TVarSet_10));
    MR_hl_field(0, TypeClass_4, 6) = ((MR_Box) (Context_11));
    MR_hl_field(0, TypeClass_4, 7) = ((MR_Box) (SeqNum_12));
  }
  return TypeClass_4;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__comp_unit_interface__make_mode_defn_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word CheckedModeDefn0_6,
  MR_Word STATE_VARIABLE_CheckedModeMap_0_20,
  MR_Word * STATE_VARIABLE_CheckedModeMap_21)
{
  MR_Word StdDefn0_8 = ((MR_Word) ((MR_hl_field(0, CheckedModeDefn0_6, (MR_Integer) 0))));
  MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(0, CheckedModeDefn0_6, (MR_Integer) 1))));
  MR_Word Status0_10 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn0_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MaybeAbstractDefn_11 = ((MR_Word) ((MR_hl_field(0, StdDefn0_8, (MR_Integer) 1))));

  switch (Status0_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word AbstractDefn_13;
        MR_Word StdDefn_14;
        MR_Word MaybeIntDefn0_15;
        MR_Word MaybeIntDefn_17;
        MR_Word SrcDefns_18;
        MR_Word CheckedModeDefn_19;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 0))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 1))));
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 3))));
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 4))));
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 5))));

        {
          AbstractDefn_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AbstractDefn_13, 0) = ((MR_Box) (Var_25));
          MR_hl_field(0, AbstractDefn_13, 1) = ((MR_Box) (Var_26));
          MR_hl_field(0, AbstractDefn_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, AbstractDefn_13, 3) = ((MR_Box) (Var_28));
          MR_hl_field(0, AbstractDefn_13, 4) = ((MR_Box) (Var_29));
          MR_hl_field(0, AbstractDefn_13, 5) = ((MR_Box) (Var_30));
        }
        {
          StdDefn_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StdDefn_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, StdDefn_14, 1) = ((MR_Box) (AbstractDefn_13));
        }
        MaybeIntDefn0_15 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, (MR_Integer) 0))));
        MaybeIntDefn_17 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[38]), MaybeIntDefn0_15);
        {
          SrcDefns_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefns_18, 0) = ((MR_Box) (MaybeIntDefn_17));
          MR_hl_field(0, SrcDefns_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CheckedModeDefn_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CheckedModeDefn_19, 0) = ((MR_Box) (StdDefn_14));
          MR_hl_field(0, CheckedModeDefn_19, 1) = ((MR_Box) (SrcDefns_18));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_5)), ((MR_Box) (CheckedModeDefn_19)), STATE_VARIABLE_CheckedModeMap_0_20, STATE_VARIABLE_CheckedModeMap_21);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_CheckedModeMap_21 = STATE_VARIABLE_CheckedModeMap_0_20;
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__comp_unit_interface__make_inst_defn_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedInstDefn0_6,
  MR_Word STATE_VARIABLE_CheckedInstMap_0_20,
  MR_Word * STATE_VARIABLE_CheckedInstMap_21)
{
  MR_Word StdDefn0_8 = ((MR_Word) ((MR_hl_field(0, CheckedInstDefn0_6, (MR_Integer) 0))));
  MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(0, CheckedInstDefn0_6, (MR_Integer) 1))));
  MR_Word Status0_10 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn0_8, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word MaybeAbstractDefn_11 = ((MR_Word) ((MR_hl_field(0, StdDefn0_8, (MR_Integer) 1))));

  switch (Status0_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word AbstractDefn_13;
        MR_Word StdDefn_14;
        MR_Word MaybeIntDefn0_15;
        MR_Word MaybeIntDefn_17;
        MR_Word SrcDefns_18;
        MR_Word CheckedInstDefn_19;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 0))));
        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 1))));
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 2))));
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 4))));
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 5))));
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, MaybeAbstractDefn_11, (MR_Integer) 6))));

        {
          AbstractDefn_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, AbstractDefn_13, 0) = ((MR_Box) (Var_25));
          MR_hl_field(0, AbstractDefn_13, 1) = ((MR_Box) (Var_26));
          MR_hl_field(0, AbstractDefn_13, 2) = ((MR_Box) (Var_27));
          MR_hl_field(0, AbstractDefn_13, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, AbstractDefn_13, 4) = ((MR_Box) (Var_29));
          MR_hl_field(0, AbstractDefn_13, 5) = ((MR_Box) (Var_30));
          MR_hl_field(0, AbstractDefn_13, 6) = ((MR_Box) (Var_31));
        }
        {
          StdDefn_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, StdDefn_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(0, StdDefn_14, 1) = ((MR_Box) (AbstractDefn_13));
        }
        MaybeIntDefn0_15 = ((MR_Word) ((MR_hl_field(0, SrcDefns0_9, (MR_Integer) 0))));
        MaybeIntDefn_17 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[37]), MaybeIntDefn0_15);
        {
          SrcDefns_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefns_18, 0) = ((MR_Box) (MaybeIntDefn_17));
          MR_hl_field(0, SrcDefns_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CheckedInstDefn_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CheckedInstDefn_19, 0) = ((MR_Box) (StdDefn_14));
          MR_hl_field(0, CheckedInstDefn_19, 1) = ((MR_Box) (SrcDefns_18));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (CheckedInstDefn_19)), STATE_VARIABLE_CheckedInstMap_0_20, STATE_VARIABLE_CheckedInstMap_21);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_CheckedInstMap_21 = STATE_VARIABLE_CheckedInstMap_0_20;
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedTypeDefn0_6,
  MR_Word STATE_VARIABLE_CheckedTypeMap_0_51,
  MR_Word * STATE_VARIABLE_CheckedTypeMap_52)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) CheckedTypeDefn0_6)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn0_8 = ((MR_Word) ((MR_hl_field(0, CheckedTypeDefn0_6, (MR_Integer) 0))));
    MR_Word AbstractSolverDefn_11;

    if (((MR_tag((MR_Word) SolverDefn0_8)) == (MR_Integer) 0))
    {
      MR_Word AbstractStatus_10 = ((MR_Unsigned) ((MR_hl_field(0, SolverDefn0_8, (MR_Integer) 0))) & (MR_Integer) 1);

      AbstractSolverDefn_11 = ((MR_Word) ((MR_hl_field(0, SolverDefn0_8, (MR_Integer) 1))));
      succeeded = (AbstractStatus_10 == (MR_Integer) 0);
    }
    else
    {
      MR_Word MaybeAbstractSolverDefn_12 = ((MR_Word) ((MR_hl_field(1, SolverDefn0_8, (MR_Integer) 0))));

      succeeded = (MaybeAbstractSolverDefn_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        AbstractSolverDefn_11 = ((MR_Word) ((MR_hl_field(1, MaybeAbstractSolverDefn_12, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word SolverDefn_14;
      MR_Word IntDefn_15;
      MR_Word SrcDefns_16;
      MR_Word CheckedTypeDefn_17;
      MR_Word Var_54;

      {
        SolverDefn_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SolverDefn_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, SolverDefn_14, 1) = ((MR_Box) (AbstractSolverDefn_11));
      }
      IntDefn_15 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractSolverDefn_11);
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (IntDefn_15));
      }
      {
        SrcDefns_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SrcDefns_16, 0) = ((MR_Box) (Var_54));
        MR_hl_field(0, SrcDefns_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        CheckedTypeDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CheckedTypeDefn_17, 0) = ((MR_Box) (SolverDefn_14));
        MR_hl_field(0, CheckedTypeDefn_17, 1) = ((MR_Box) (SrcDefns_16));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_17)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
    }
    else
      *STATE_VARIABLE_CheckedTypeMap_52 = STATE_VARIABLE_CheckedTypeMap_0_51;
  }
  else
  {
    MR_Word StdDefn0_18 = ((MR_Word) ((MR_hl_field(1, CheckedTypeDefn0_6, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) StdDefn0_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_19 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn0_18, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word EqvDefn0_20 = ((MR_Word) ((MR_hl_field(0, StdDefn0_18, (MR_Integer) 1))));

          switch (EqvStatus_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              {
                MR_Word AbsDefn_23;
                MR_Word StdDefn_25;
                MR_Word Var_60;
                MR_Word IntDefn_95;
                MR_Word SrcDefns_96;
                MR_Word CheckedTypeDefn_97;
                MR_Word Var_173 = ((MR_Word) ((MR_hl_field(0, EqvDefn0_20, (MR_Integer) 0))));
                MR_Word Var_174 = ((MR_Word) ((MR_hl_field(0, EqvDefn0_20, (MR_Integer) 1))));
                MR_Word Var_176 = ((MR_Word) ((MR_hl_field(0, EqvDefn0_20, (MR_Integer) 3))));
                MR_Word Var_177 = ((MR_Word) ((MR_hl_field(0, EqvDefn0_20, (MR_Integer) 4))));
                MR_Word Var_178 = ((MR_Word) ((MR_hl_field(0, EqvDefn0_20, (MR_Integer) 5))));

                {
                  AbsDefn_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, AbsDefn_23, 0) = ((MR_Box) (Var_173));
                  MR_hl_field(0, AbsDefn_23, 1) = ((MR_Box) (Var_174));
                  MR_hl_field(0, AbsDefn_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, AbsDefn_23, 3) = ((MR_Box) (Var_176));
                  MR_hl_field(0, AbsDefn_23, 4) = ((MR_Box) (Var_177));
                  MR_hl_field(0, AbsDefn_23, 5) = ((MR_Box) (Var_178));
                }
                {
                  StdDefn_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, StdDefn_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, StdDefn_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, StdDefn_25, 2) = ((MR_Box) (AbsDefn_23));
                  MR_hl_field(3, StdDefn_25, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                }
                IntDefn_95 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_23);
                {
                  Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_60, 0) = ((MR_Box) (IntDefn_95));
                  MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SrcDefns_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefns_96, 0) = ((MR_Box) (Var_60));
                  MR_hl_field(0, SrcDefns_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, SrcDefns_96, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  CheckedTypeDefn_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CheckedTypeDefn_97, 0) = ((MR_Box) (StdDefn_25));
                  MR_hl_field(1, CheckedTypeDefn_97, 1) = ((MR_Box) (SrcDefns_96));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_97)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_CheckedTypeMap_52 = STATE_VARIABLE_CheckedTypeMap_0_51;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStatus_26 = ((MR_Unsigned) ((MR_hl_field(1, StdDefn0_18, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word SubDefn0_27 = ((MR_Word) ((MR_hl_field(1, StdDefn0_18, (MR_Integer) 1))));

          switch (SubStatus_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              {
                MR_Word DetailsSub_28 = ((MR_Word) ((MR_hl_field(0, SubDefn0_27, (MR_Integer) 2))));
                MR_Word Var_68;
                MR_Word IntDefn_104;
                MR_Word SrcDefns_105;
                MR_Word CheckedTypeDefn_106;
                MR_Word DetailsAbstract_108;
                MR_Word AbsDefn_109;
                MR_Word StdDefn_110;
                MR_Word Var_184;
                MR_Word Var_185;
                MR_Word Var_187;
                MR_Word Var_188;
                MR_Word Var_189;

                parse_tree__comp_unit_interface__make_sub_type_abstract_2_p_0(DetailsSub_28, &DetailsAbstract_108);
                Var_184 = ((MR_Word) ((MR_hl_field(0, SubDefn0_27, (MR_Integer) 0))));
                Var_185 = ((MR_Word) ((MR_hl_field(0, SubDefn0_27, (MR_Integer) 1))));
                Var_187 = ((MR_Word) ((MR_hl_field(0, SubDefn0_27, (MR_Integer) 3))));
                Var_188 = ((MR_Word) ((MR_hl_field(0, SubDefn0_27, (MR_Integer) 4))));
                Var_189 = ((MR_Word) ((MR_hl_field(0, SubDefn0_27, (MR_Integer) 5))));
                {
                  AbsDefn_109 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, AbsDefn_109, 0) = ((MR_Box) (Var_184));
                  MR_hl_field(0, AbsDefn_109, 1) = ((MR_Box) (Var_185));
                  MR_hl_field(0, AbsDefn_109, 2) = ((MR_Box) (DetailsAbstract_108));
                  MR_hl_field(0, AbsDefn_109, 3) = ((MR_Box) (Var_187));
                  MR_hl_field(0, AbsDefn_109, 4) = ((MR_Box) (Var_188));
                  MR_hl_field(0, AbsDefn_109, 5) = ((MR_Box) (Var_189));
                }
                {
                  StdDefn_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, StdDefn_110, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, StdDefn_110, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, StdDefn_110, 2) = ((MR_Box) (AbsDefn_109));
                  MR_hl_field(3, StdDefn_110, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                }
                IntDefn_104 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_109);
                {
                  Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_68, 0) = ((MR_Box) (IntDefn_104));
                  MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SrcDefns_105 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefns_105, 0) = ((MR_Box) (Var_68));
                  MR_hl_field(0, SrcDefns_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, SrcDefns_105, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  CheckedTypeDefn_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CheckedTypeDefn_106, 0) = ((MR_Box) (StdDefn_110));
                  MR_hl_field(1, CheckedTypeDefn_106, 1) = ((MR_Box) (SrcDefns_105));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_106)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_CheckedTypeMap_52 = STATE_VARIABLE_CheckedTypeMap_0_51;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuStatus_30 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn0_18, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word DuDefn0_31 = ((MR_Word) ((MR_hl_field(2, StdDefn0_18, (MR_Integer) 1))));
          MR_Word CJCsMaybeDefnOrEnum_34 = ((MR_Word) ((MR_hl_field(2, StdDefn0_18, (MR_Integer) 4))));
          MR_Word MaybeDefnOrEnumC_35 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefnOrEnum_34, (MR_Integer) 0))));
          MR_Word MaybeDefnOrEnumJava_36 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefnOrEnum_34, (MR_Integer) 1))));
          MR_Word MaybeDefnOrEnumCsharp_37 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefnOrEnum_34, (MR_Integer) 2))));
          MR_Word MaybeDefnC0_44;
          MR_Word MaybeDefnJava0_45;
          MR_Word MaybeDefnCsharp0_46;
          MR_Word CJCsMaybeDefn0_47;

          parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__302__1_2_p_0(MaybeDefnOrEnumC_35, &MaybeDefnC0_44);
          parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__302__1_2_p_0(MaybeDefnOrEnumJava_36, &MaybeDefnJava0_45);
          parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__302__1_2_p_0(MaybeDefnOrEnumCsharp_37, &MaybeDefnCsharp0_46);
          {
            CJCsMaybeDefn0_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CJCsMaybeDefn0_47, 0) = ((MR_Box) (MaybeDefnC0_44));
            MR_hl_field(0, CJCsMaybeDefn0_47, 1) = ((MR_Box) (MaybeDefnJava0_45));
            MR_hl_field(0, CJCsMaybeDefn0_47, 2) = ((MR_Box) (MaybeDefnCsharp0_46));
          }
          switch (DuStatus_30) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_Word Var_82;
                MR_Word IntDefn_127;
                MR_Word SrcDefns_128;
                MR_Word CheckedTypeDefn_129;
                MR_Word AbsDefn_132;
                MR_Word StdDefn_133;
                MR_Word Var_190 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 0))));
                MR_Word Var_191 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 1))));
                MR_Word Var_192 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 3))));
                MR_Word Var_193 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 4))));
                MR_Word Var_194 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 5))));

                {
                  AbsDefn_132 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, AbsDefn_132, 0) = ((MR_Box) (Var_190));
                  MR_hl_field(0, AbsDefn_132, 1) = ((MR_Box) (Var_191));
                  MR_hl_field(0, AbsDefn_132, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, AbsDefn_132, 3) = ((MR_Box) (Var_192));
                  MR_hl_field(0, AbsDefn_132, 4) = ((MR_Box) (Var_193));
                  MR_hl_field(0, AbsDefn_132, 5) = ((MR_Box) (Var_194));
                }
                {
                  StdDefn_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, StdDefn_133, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, StdDefn_133, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, StdDefn_133, 2) = ((MR_Box) (AbsDefn_132));
                  MR_hl_field(3, StdDefn_133, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                }
                IntDefn_127 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_132);
                {
                  Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_82, 0) = ((MR_Box) (IntDefn_127));
                  MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SrcDefns_128 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefns_128, 0) = ((MR_Box) (Var_82));
                  MR_hl_field(0, SrcDefns_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, SrcDefns_128, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  CheckedTypeDefn_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CheckedTypeDefn_129, 0) = ((MR_Box) (StdDefn_133));
                  MR_hl_field(1, CheckedTypeDefn_129, 1) = ((MR_Box) (SrcDefns_128));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_129)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word DetailsDu_387 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 2))));
                MR_Word Var_389;
                MR_Word IntDefn_391;
                MR_Word SrcDefns_392;
                MR_Word CheckedTypeDefn_393;
                MR_Word DetailsAbstract_395;
                MR_Word AbsDefn_396;
                MR_Word StdDefn_397;
                MR_Word Var_399 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 0))));
                MR_Word Var_400 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 1))));
                MR_Word Var_401 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 3))));
                MR_Word Var_402 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 4))));
                MR_Word Var_403 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 5))));

                parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(DetailsDu_387, &DetailsAbstract_395);
                {
                  AbsDefn_396 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, AbsDefn_396, 0) = ((MR_Box) (Var_399));
                  MR_hl_field(0, AbsDefn_396, 1) = ((MR_Box) (Var_400));
                  MR_hl_field(0, AbsDefn_396, 2) = ((MR_Box) (DetailsAbstract_395));
                  MR_hl_field(0, AbsDefn_396, 3) = ((MR_Box) (Var_401));
                  MR_hl_field(0, AbsDefn_396, 4) = ((MR_Box) (Var_402));
                  MR_hl_field(0, AbsDefn_396, 5) = ((MR_Box) (Var_403));
                }
                {
                  StdDefn_397 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, StdDefn_397, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, StdDefn_397, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(3, StdDefn_397, 2) = ((MR_Box) (AbsDefn_396));
                  MR_hl_field(3, StdDefn_397, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                }
                IntDefn_391 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_396);
                {
                  Var_389 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_389, 0) = ((MR_Box) (IntDefn_391));
                  MR_hl_field(1, Var_389, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SrcDefns_392 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefns_392, 0) = ((MR_Box) (Var_389));
                  MR_hl_field(0, SrcDefns_392, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, SrcDefns_392, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  CheckedTypeDefn_393 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CheckedTypeDefn_393, 0) = ((MR_Box) (StdDefn_397));
                  MR_hl_field(1, CheckedTypeDefn_393, 1) = ((MR_Box) (SrcDefns_392));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_393)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word CJCsDefns_49;
                MR_Word DetailsDu_406 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 2))));
                MR_Word IntCJCsDefns_407;
                MR_Word Var_408;
                MR_Word IntDefn_410;
                MR_Word SrcDefns_411;
                MR_Word CheckedTypeDefn_412;
                MR_Word DetailsAbstract_414;
                MR_Word AbsDefn_415;
                MR_Word StdDefn_416;
                MR_Word Var_418 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 0))));
                MR_Word Var_419 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 1))));
                MR_Word Var_420 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 3))));
                MR_Word Var_421 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 4))));
                MR_Word Var_422 = ((MR_Word) ((MR_hl_field(0, DuDefn0_31, (MR_Integer) 5))));

                parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(DetailsDu_406, &DetailsAbstract_414);
                parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0(CJCsMaybeDefn0_47, &CJCsDefns_49);
                IntCJCsDefns_407 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[35]), CJCsDefns_49);
                {
                  AbsDefn_415 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, AbsDefn_415, 0) = ((MR_Box) (Var_418));
                  MR_hl_field(0, AbsDefn_415, 1) = ((MR_Box) (Var_419));
                  MR_hl_field(0, AbsDefn_415, 2) = ((MR_Box) (DetailsAbstract_414));
                  MR_hl_field(0, AbsDefn_415, 3) = ((MR_Box) (Var_420));
                  MR_hl_field(0, AbsDefn_415, 4) = ((MR_Box) (Var_421));
                  MR_hl_field(0, AbsDefn_415, 5) = ((MR_Box) (Var_422));
                }
                {
                  StdDefn_416 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, StdDefn_416, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, StdDefn_416, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(3, StdDefn_416, 2) = ((MR_Box) (AbsDefn_415));
                  MR_hl_field(3, StdDefn_416, 3) = ((MR_Box) (CJCsMaybeDefn0_47));
                }
                IntDefn_410 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_415);
                {
                  Var_408 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_408, 0) = ((MR_Box) (IntDefn_410));
                  MR_hl_field(1, Var_408, 1) = ((MR_Box) (IntCJCsDefns_407));
                }
                {
                  SrcDefns_411 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefns_411, 0) = ((MR_Box) (Var_408));
                  MR_hl_field(0, SrcDefns_411, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(0, SrcDefns_411, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  CheckedTypeDefn_412 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CheckedTypeDefn_412, 0) = ((MR_Box) (StdDefn_416));
                  MR_hl_field(1, CheckedTypeDefn_412, 1) = ((MR_Box) (SrcDefns_411));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_412)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
              }
              break;
            case (MR_Integer) 3:
              *STATE_VARIABLE_CheckedTypeMap_52 = STATE_VARIABLE_CheckedTypeMap_0_51;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DuStatus_348 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word DuDefn0_349 = ((MR_Word) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 2))));
              MR_Word CJCsMaybeDefn0_350 = ((MR_Word) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 3))));

              switch (DuStatus_348) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    MR_Word Var_236 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 0))));
                    MR_Word Var_237 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 1))));
                    MR_Word Var_238 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 3))));
                    MR_Word Var_239 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 4))));
                    MR_Word Var_240 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 5))));
                    MR_Word Var_286;
                    MR_Word IntDefn_289;
                    MR_Word SrcDefns_290;
                    MR_Word CheckedTypeDefn_291;
                    MR_Word AbsDefn_294;
                    MR_Word StdDefn_295;

                    {
                      AbsDefn_294 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, AbsDefn_294, 0) = ((MR_Box) (Var_236));
                      MR_hl_field(0, AbsDefn_294, 1) = ((MR_Box) (Var_237));
                      MR_hl_field(0, AbsDefn_294, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, AbsDefn_294, 3) = ((MR_Box) (Var_238));
                      MR_hl_field(0, AbsDefn_294, 4) = ((MR_Box) (Var_239));
                      MR_hl_field(0, AbsDefn_294, 5) = ((MR_Box) (Var_240));
                    }
                    {
                      StdDefn_295 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdDefn_295, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, StdDefn_295, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, StdDefn_295, 2) = ((MR_Box) (AbsDefn_294));
                      MR_hl_field(3, StdDefn_295, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                    }
                    IntDefn_289 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_294);
                    {
                      Var_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_286, 0) = ((MR_Box) (IntDefn_289));
                      MR_hl_field(1, Var_286, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      SrcDefns_290 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefns_290, 0) = ((MR_Box) (Var_286));
                      MR_hl_field(0, SrcDefns_290, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, SrcDefns_290, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      CheckedTypeDefn_291 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, CheckedTypeDefn_291, 0) = ((MR_Box) (StdDefn_295));
                      MR_hl_field(1, CheckedTypeDefn_291, 1) = ((MR_Box) (SrcDefns_290));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_291)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_425 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 0))));
                    MR_Word Var_426 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 1))));
                    MR_Word Var_427 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 3))));
                    MR_Word Var_428 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 4))));
                    MR_Word Var_429 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 5))));
                    MR_Word DetailsDu_430 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 2))));
                    MR_Word Var_432;
                    MR_Word IntDefn_434;
                    MR_Word SrcDefns_435;
                    MR_Word CheckedTypeDefn_436;
                    MR_Word DetailsAbstract_438;
                    MR_Word AbsDefn_439;
                    MR_Word StdDefn_440;

                    parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(DetailsDu_430, &DetailsAbstract_438);
                    {
                      AbsDefn_439 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, AbsDefn_439, 0) = ((MR_Box) (Var_425));
                      MR_hl_field(0, AbsDefn_439, 1) = ((MR_Box) (Var_426));
                      MR_hl_field(0, AbsDefn_439, 2) = ((MR_Box) (DetailsAbstract_438));
                      MR_hl_field(0, AbsDefn_439, 3) = ((MR_Box) (Var_427));
                      MR_hl_field(0, AbsDefn_439, 4) = ((MR_Box) (Var_428));
                      MR_hl_field(0, AbsDefn_439, 5) = ((MR_Box) (Var_429));
                    }
                    {
                      StdDefn_440 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdDefn_440, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, StdDefn_440, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                      MR_hl_field(3, StdDefn_440, 2) = ((MR_Box) (AbsDefn_439));
                      MR_hl_field(3, StdDefn_440, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                    }
                    IntDefn_434 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_439);
                    {
                      Var_432 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_432, 0) = ((MR_Box) (IntDefn_434));
                      MR_hl_field(1, Var_432, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      SrcDefns_435 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefns_435, 0) = ((MR_Box) (Var_432));
                      MR_hl_field(0, SrcDefns_435, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, SrcDefns_435, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      CheckedTypeDefn_436 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, CheckedTypeDefn_436, 0) = ((MR_Box) (StdDefn_440));
                      MR_hl_field(1, CheckedTypeDefn_436, 1) = ((MR_Box) (SrcDefns_435));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_436)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word CJCsDefns_249;
                    MR_Word Var_444 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 0))));
                    MR_Word Var_445 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 1))));
                    MR_Word Var_446 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 3))));
                    MR_Word Var_447 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 4))));
                    MR_Word Var_448 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 5))));
                    MR_Word DetailsDu_449 = ((MR_Word) ((MR_hl_field(0, DuDefn0_349, (MR_Integer) 2))));
                    MR_Word IntCJCsDefns_450;
                    MR_Word Var_451;
                    MR_Word IntDefn_453;
                    MR_Word SrcDefns_454;
                    MR_Word CheckedTypeDefn_455;
                    MR_Word DetailsAbstract_457;
                    MR_Word AbsDefn_458;
                    MR_Word StdDefn_459;

                    parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(DetailsDu_449, &DetailsAbstract_457);
                    parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0(CJCsMaybeDefn0_350, &CJCsDefns_249);
                    IntCJCsDefns_450 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[36]), CJCsDefns_249);
                    {
                      AbsDefn_458 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, AbsDefn_458, 0) = ((MR_Box) (Var_444));
                      MR_hl_field(0, AbsDefn_458, 1) = ((MR_Box) (Var_445));
                      MR_hl_field(0, AbsDefn_458, 2) = ((MR_Box) (DetailsAbstract_457));
                      MR_hl_field(0, AbsDefn_458, 3) = ((MR_Box) (Var_446));
                      MR_hl_field(0, AbsDefn_458, 4) = ((MR_Box) (Var_447));
                      MR_hl_field(0, AbsDefn_458, 5) = ((MR_Box) (Var_448));
                    }
                    {
                      StdDefn_459 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdDefn_459, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, StdDefn_459, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(3, StdDefn_459, 2) = ((MR_Box) (AbsDefn_458));
                      MR_hl_field(3, StdDefn_459, 3) = ((MR_Box) (CJCsMaybeDefn0_350));
                    }
                    IntDefn_453 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_458);
                    {
                      Var_451 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_451, 0) = ((MR_Box) (IntDefn_453));
                      MR_hl_field(1, Var_451, 1) = ((MR_Box) (IntCJCsDefns_450));
                    }
                    {
                      SrcDefns_454 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefns_454, 0) = ((MR_Box) (Var_451));
                      MR_hl_field(0, SrcDefns_454, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, SrcDefns_454, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      CheckedTypeDefn_455 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, CheckedTypeDefn_455, 0) = ((MR_Box) (StdDefn_459));
                      MR_hl_field(1, CheckedTypeDefn_455, 1) = ((MR_Box) (SrcDefns_454));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_455)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
                  }
                  break;
                case (MR_Integer) 3:
                  *STATE_VARIABLE_CheckedTypeMap_52 = STATE_VARIABLE_CheckedTypeMap_0_51;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbsStatus_168 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word AbsDefn_169 = ((MR_Word) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 2))));
              MR_Word CJCsMaybeDefn0_172 = ((MR_Word) ((MR_hl_field(3, StdDefn0_18, (MR_Integer) 3))));

              switch (AbsStatus_168) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_90;
                    MR_Word IntDefn_151;
                    MR_Word SrcDefns_152;
                    MR_Word CheckedTypeDefn_153;
                    MR_Word StdDefn_154;
                    MR_Word CJCsDefns_156;
                    MR_Word IntCJCsDefns_157;

                    parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), &CJCsDefns_156);
                    IntCJCsDefns_157 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[33]), CJCsDefns_156);
                    {
                      StdDefn_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, StdDefn_154, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, StdDefn_154, 1) = (MR_Box) ((MR_Unsigned) (AbsStatus_168));
                      MR_hl_field(3, StdDefn_154, 2) = ((MR_Box) (AbsDefn_169));
                      MR_hl_field(3, StdDefn_154, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[8]));
                    }
                    IntDefn_151 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_169);
                    {
                      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_90, 0) = ((MR_Box) (IntDefn_151));
                      MR_hl_field(1, Var_90, 1) = ((MR_Box) (IntCJCsDefns_157));
                    }
                    {
                      SrcDefns_152 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefns_152, 0) = ((MR_Box) (Var_90));
                      MR_hl_field(0, SrcDefns_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, SrcDefns_152, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      CheckedTypeDefn_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, CheckedTypeDefn_153, 0) = ((MR_Box) (StdDefn_154));
                      MR_hl_field(1, CheckedTypeDefn_153, 1) = ((MR_Box) (SrcDefns_152));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_153)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_CheckedTypeMap_52 = STATE_VARIABLE_CheckedTypeMap_0_51;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word Var_222;
                    MR_Word IntDefn_225;
                    MR_Word SrcDefns_226;
                    MR_Word CheckedTypeDefn_227;
                    MR_Word CJCsDefns_230;
                    MR_Word IntCJCsDefns_231;

                    parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0(CJCsMaybeDefn0_172, &CJCsDefns_230);
                    IntCJCsDefns_231 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[34]), CJCsDefns_230);
                    IntDefn_225 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_169);
                    {
                      Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_222, 0) = ((MR_Box) (IntDefn_225));
                      MR_hl_field(1, Var_222, 1) = ((MR_Box) (IntCJCsDefns_231));
                    }
                    {
                      SrcDefns_226 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SrcDefns_226, 0) = ((MR_Box) (Var_222));
                      MR_hl_field(0, SrcDefns_226, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, SrcDefns_226, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      CheckedTypeDefn_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, CheckedTypeDefn_227, 0) = ((MR_Box) (StdDefn0_18));
                      MR_hl_field(1, CheckedTypeDefn_227, 1) = ((MR_Box) (SrcDefns_226));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_227)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__302__1_2_p_0(
  MR_Word LambdaHeadVar__1_73,
  MR_Word * LambdaHeadVar__2_74)
{
  if ((LambdaHeadVar__1_73 == (MR_Word) ((MR_Unsigned) 0U)))
    *LambdaHeadVar__2_74 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DorE_41 = ((MR_Word) ((MR_hl_field(1, LambdaHeadVar__1_73, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) DorE_41)) == (MR_Integer) 0))
      *LambdaHeadVar__2_74 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FT_43 = ((MR_Word) ((MR_hl_field(1, DorE_41, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *LambdaHeadVar__2_74 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FT_43));
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_sub_type_abstract_2_p_0(
  MR_Word DetailsSub_3,
  MR_Word * DetailsAbstract_4)
{
  MR_Word SuperType_5 = ((MR_Word) ((MR_hl_field(0, DetailsSub_3, (MR_Integer) 0))));
  MR_Word SuperTypeCtor_7;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(SuperType_5, &SuperTypeCtor_7);
  *DetailsAbstract_4 = (MR_Word) (MR_mkword(1, (MR_Word) (SuperTypeCtor_7)));
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(
  MR_Word DetailsDu_3,
  MR_Word * DetailsAbstract_4)
{
  MR_bool succeeded;
  MR_Word Ctors_5 = ((MR_Word) ((MR_hl_field(0, DetailsDu_3, (MR_Integer) 0))));
  MR_Word MaybeCanonical_6 = ((MR_Word) ((MR_hl_field(0, DetailsDu_3, (MR_Integer) 1))));
  MR_Integer NumFunctors_8;

  succeeded = parse_tree__prog_type__non_sub_du_type_is_enum_2_p_0(DetailsDu_3, &NumFunctors_8);
  if (succeeded)
  {
    MR_Integer NumBits_9;

    parse_tree__prog_type__num_bits_needed_for_n_dense_values_2_p_0(NumFunctors_8, &NumBits_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *DetailsAbstract_4 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (NumBits_9));
    }
  }
  else
  {
    succeeded = parse_tree__prog_type__non_sub_du_type_is_notag_2_p_0(Ctors_5, MaybeCanonical_6);
    if (succeeded)
      *DetailsAbstract_4 = (MR_Word) ((MR_Unsigned) 8U);
    else
    {
      succeeded = parse_tree__prog_type__non_sub_du_type_is_dummy_1_p_0(DetailsDu_3);
      if (succeeded)
        *DetailsAbstract_4 = (MR_Word) ((MR_Unsigned) 4U);
      else
        *DetailsAbstract_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0(
  MR_Word CJCsMaybeDefn_3,
  MR_Word * CJCsDefns_4)
{
  MR_Word MaybeDefnC_5 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefn_3, (MR_Integer) 0))));
  MR_Word MaybeDefnJava_6 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefn_3, (MR_Integer) 1))));
  MR_Word MaybeDefnCsharp_7 = ((MR_Word) ((MR_hl_field(0, CJCsMaybeDefn_3, (MR_Integer) 2))));
  MR_Word DefnsC_12;
  MR_Word DefnsJava_13;
  MR_Word DefnsCsharp_14;
  MR_Word Var_18;

  if ((MaybeDefnC_5 == (MR_Word) ((MR_Unsigned) 0U)))
    DefnsC_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Defn_22 = ((MR_Word) ((MR_hl_field(1, MaybeDefnC_5, (MR_Integer) 0))));

    {
      DefnsC_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DefnsC_12, 0) = ((MR_Box) (Defn_22));
      MR_hl_field(1, DefnsC_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeDefnJava_6 == (MR_Word) ((MR_Unsigned) 0U)))
    DefnsJava_13 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Defn_24 = ((MR_Word) ((MR_hl_field(1, MaybeDefnJava_6, (MR_Integer) 0))));

    {
      DefnsJava_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DefnsJava_13, 0) = ((MR_Box) (Defn_24));
      MR_hl_field(1, DefnsJava_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeDefnCsharp_7 == (MR_Word) ((MR_Unsigned) 0U)))
    DefnsCsharp_14 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Defn_26 = ((MR_Word) ((MR_hl_field(1, MaybeDefnCsharp_7, (MR_Integer) 0))));

    {
      DefnsCsharp_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DefnsCsharp_14, 0) = ((MR_Box) (Defn_26));
      MR_hl_field(1, DefnsCsharp_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), DefnsJava_13, DefnsCsharp_14);
  *CJCsDefns_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), DefnsC_12, Var_18);
}

static void MR_CALL 
parse_tree__comp_unit_interface__acc_int_imports_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ImportUseInfo_6,
  MR_Word STATE_VARIABLE_ContextMap_0_22,
  MR_Word * STATE_VARIABLE_ContextMap_23)
{
  if (((MR_tag((MR_Word) ImportUseInfo_6)) == (MR_Integer) 0))
  {
    MR_Word SectionImportAndOrUse_30 = ((MR_Word) ((MR_hl_field(0, ImportUseInfo_6, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) SectionImportAndOrUse_30)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_26;
          MR_Word Context_28 = ((MR_Word) ((MR_hl_field(0, SectionImportAndOrUse_30, (MR_Integer) 0))));

          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (Context_28));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (Var_26)), STATE_VARIABLE_ContextMap_0_22, STATE_VARIABLE_ContextMap_23);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_ContextMap_23 = STATE_VARIABLE_ContextMap_0_22;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_ContextMap_23 = STATE_VARIABLE_ContextMap_0_22;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, SectionImportAndOrUse_30, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ContextMap_23 = STATE_VARIABLE_ContextMap_0_22;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ContextMap_23 = STATE_VARIABLE_ContextMap_0_22;
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word MaybeSectionImportAndOrUse_9 = ((MR_Word) ((MR_hl_field(1, ImportUseInfo_6, (MR_Integer) 1))));

    if ((MaybeSectionImportAndOrUse_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ContextMap_23 = STATE_VARIABLE_ContextMap_0_22;
    else
    {
      MR_Word SectionImportAndOrUse_10 = ((MR_Word) ((MR_hl_field(1, MaybeSectionImportAndOrUse_9, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) SectionImportAndOrUse_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, SectionImportAndOrUse_10, (MR_Integer) 0))));
            MR_Word Var_24;

            {
              Var_24 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_24, 0) = ((MR_Box) (Context_11));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (Var_24)), STATE_VARIABLE_ContextMap_0_22, STATE_VARIABLE_ContextMap_23);
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_ContextMap_23 = STATE_VARIABLE_ContextMap_0_22;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_ContextMap_23 = STATE_VARIABLE_ContextMap_0_22;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, SectionImportAndOrUse_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_ContextMap_23 = STATE_VARIABLE_ContextMap_0_22;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_ContextMap_23 = STATE_VARIABLE_ContextMap_0_22;
              break;
          }
          break;
      }
    }
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_6_p_0(
  MR_Word Globals_7,
  MR_Word AugMakeIntUnit_8,
  MR_Word * ParseTreeInt1_9,
  MR_Word * ParseTreeInt2_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_Word IntExplicitFIMSpecs_12;
  MR_Word ImpExplicitFIMSpecs_13;
  MR_Word TypeCtorCheckedMap_14;
  MR_Word InstCtorCheckedMap_15;
  MR_Word ModeCtorCheckedMap_16;
  MR_Word TypeCtorRepnMap_17;

  parse_tree__comp_unit_interface__generate_interface_int1_11_p_0(Globals_7, AugMakeIntUnit_8, &IntExplicitFIMSpecs_12, &ImpExplicitFIMSpecs_13, &TypeCtorCheckedMap_14, &InstCtorCheckedMap_15, &ModeCtorCheckedMap_16, &TypeCtorRepnMap_17, ParseTreeInt1_9, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
  parse_tree__comp_unit_interface__generate_interface_int2_8_p_0(AugMakeIntUnit_8, IntExplicitFIMSpecs_12, ImpExplicitFIMSpecs_13, TypeCtorCheckedMap_14, InstCtorCheckedMap_15, ModeCtorCheckedMap_16, TypeCtorRepnMap_17, ParseTreeInt2_10);
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_STATE_VARIABLE_FIMSpecs_10;

  parse_tree__comp_unit_interface__add_self_fim_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_STATE_VARIABLE_FIMSpecs_10);
  *wrapper_arg_3 = ((MR_Box) (conv22_STATE_VARIABLE_FIMSpecs_10));
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_STATE_VARIABLE_ShortUseOnlyMap_17;

  parse_tree__comp_unit_interface__make_imports_into_uses_int_only_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv20_STATE_VARIABLE_ShortUseOnlyMap_17);
  *wrapper_arg_4 = ((MR_Box) (conv20_STATE_VARIABLE_ShortUseOnlyMap_17));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv17_STATE_VARIABLE_MaybeUnqual_22;
  MR_Word conv16_STATE_VARIABLE_ModuleNames_24;

  parse_tree__comp_unit_interface__restrict_mode_ctor_checked_defn_for_int2_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_STATE_VARIABLE_MaybeUnqual_22, ((MR_Word) (wrapper_arg_4)), &conv16_STATE_VARIABLE_ModuleNames_24);
  *wrapper_arg_3 = ((MR_Box) (conv17_STATE_VARIABLE_MaybeUnqual_22));
  *wrapper_arg_5 = ((MR_Box) (conv16_STATE_VARIABLE_ModuleNames_24));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_MaybeUnqual_26;
  MR_Word conv12_STATE_VARIABLE_ModuleNames_28;

  parse_tree__comp_unit_interface__restrict_inst_ctor_checked_defn_for_int2_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_MaybeUnqual_26, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_ModuleNames_28);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_MaybeUnqual_26));
  *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_ModuleNames_28));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10,
  MR_Box wrapper_arg_11,
  MR_Box * wrapper_arg_12)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_ShortTypeCtorCheckedMap_37;
  MR_Word conv5_STATE_VARIABLE_MaybeUnqual_39;
  MR_Word conv4_STATE_VARIABLE_ModuleNames_41;
  MR_Word conv3_STATE_VARIABLE_IntImplicitFIMLangs_43;
  MR_Word conv2_STATE_VARIABLE_ImpImplicitFIMLangs_45;

  parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_ShortTypeCtorCheckedMap_37, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_MaybeUnqual_39, ((MR_Word) (wrapper_arg_7)), &conv4_STATE_VARIABLE_ModuleNames_41, ((MR_Word) (wrapper_arg_9)), &conv3_STATE_VARIABLE_IntImplicitFIMLangs_43, ((MR_Word) (wrapper_arg_11)), &conv2_STATE_VARIABLE_ImpImplicitFIMLangs_45);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_ShortTypeCtorCheckedMap_37));
  *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_MaybeUnqual_39));
  *wrapper_arg_8 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleNames_41));
  *wrapper_arg_10 = ((MR_Box) (conv3_STATE_VARIABLE_IntImplicitFIMLangs_43));
  *wrapper_arg_12 = ((MR_Box) (conv2_STATE_VARIABLE_ImpImplicitFIMLangs_45));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__item_util__add_only_int_include_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_8_p_0(
  MR_Word AugMakeIntUnit_9,
  MR_Word IntExplicitFIMSpecs_10,
  MR_Word ImpExplicitFIMSpecs_11,
  MR_Word TypeCtorCheckedMap_12,
  MR_Word InstCtorCheckedMap_13,
  MR_Word ModeCtorCheckedMap_14,
  MR_Word TypeCtorRepnMap_15,
  MR_Word * ParseTreeInt2_16)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_17 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_9, (MR_Integer) 0))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_17, (MR_Integer) 0))));
  MR_Word ModuleNameContext_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_17, (MR_Integer) 1))));
  MR_Word InclMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_17, (MR_Integer) 2))));
  MR_Word ShortIntInclMap_25;
  MR_Word IntTypeClasses_26;
  MR_Word IntInstances_27;
  MR_Word UnqualSymNames_28;
  MR_Word UsedModuleNames_29;
  MR_Word ShortTypeCtorCheckedMap_30;
  MR_Word ShortIntImplicitFIMLangs_31;
  MR_Word ShortImpImplicitFIMLangs_32;
  MR_Word ShortIntTypeClassesCord_33;
  MR_Word ShortIntInstancesCord_34;
  MR_Word ShortIntTypeClasses_35;
  MR_Word ShortIntInstances_36;
  MR_Word ImportUseMap_37;
  MR_Word ShortUseOnlyMap_38;
  MR_Word ShortIntExplicitFIMSpecs_39;
  MR_Word ShortIntFIMSpecs_40;
  MR_Word ExplicitFIMSpecs_41;
  MR_Word ShortImpExplicitFIMSpecs_42;
  MR_Word ShortImpFIMSpecs0_43;
  MR_Word ShortImpFIMSpecs_44;
  MR_Word Var_47;
  MR_Word STATE_VARIABLE_UsedModuleNames_49_49;
  MR_Word Var_51;
  MR_Word STATE_VARIABLE_UnqualSymNames_52_52;
  MR_Word STATE_VARIABLE_UsedModuleNames_53_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_UnqualSymNames_57_57;
  MR_Word STATE_VARIABLE_UsedModuleNames_58_58;
  MR_Word STATE_VARIABLE_UnqualSymNames_60_60;
  MR_Word STATE_VARIABLE_UsedModuleNames_61_61;
  MR_Word STATE_VARIABLE_UnqualSymNames_62_62;
  MR_Word STATE_VARIABLE_UsedModuleNames_63_63;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Box conv1_ShortIntInclMap_25;
  MR_Box conv11_ShortTypeCtorCheckedMap_30;
  MR_Box conv10_STATE_VARIABLE_UnqualSymNames_52_52;
  MR_Box conv9_STATE_VARIABLE_UsedModuleNames_53_53;
  MR_Box conv8_ShortIntImplicitFIMLangs_31;
  MR_Box conv7_ShortImpImplicitFIMLangs_32;
  MR_Box conv15_STATE_VARIABLE_UnqualSymNames_57_57;
  MR_Box conv14_STATE_VARIABLE_UsedModuleNames_58_58;
  MR_Box conv19_STATE_VARIABLE_UnqualSymNames_60_60;
  MR_Box conv18_STATE_VARIABLE_UsedModuleNames_61_61;
  MR_Box conv21_ShortUseOnlyMap_38;
  MR_Box conv23_ShortIntFIMSpecs_40;
  MR_Box conv24_ShortImpFIMSpecs0_43;

  Var_47 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[29]), InclMap_24, ((MR_Box) (Var_47)), &conv1_ShortIntInclMap_25);
  ShortIntInclMap_25 = ((MR_Word) (conv1_ShortIntInclMap_25));
  IntTypeClasses_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_17, (MR_Integer) 13))));
  IntInstances_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_17, (MR_Integer) 14))));
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_UsedModuleNames_49_49);
  Var_51 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0));
  Var_54 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
  Var_55 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
  mercury__map__foldl5_12_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[30]), TypeCtorCheckedMap_12, ((MR_Box) (Var_51)), &conv11_ShortTypeCtorCheckedMap_30, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_UnqualSymNames_52_52, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_49_49)), &conv9_STATE_VARIABLE_UsedModuleNames_53_53, ((MR_Box) (Var_54)), &conv8_ShortIntImplicitFIMLangs_31, ((MR_Box) (Var_55)), &conv7_ShortImpImplicitFIMLangs_32);
  ShortTypeCtorCheckedMap_30 = ((MR_Word) (conv11_ShortTypeCtorCheckedMap_30));
  STATE_VARIABLE_UnqualSymNames_52_52 = ((MR_Word) (conv10_STATE_VARIABLE_UnqualSymNames_52_52));
  STATE_VARIABLE_UsedModuleNames_53_53 = ((MR_Word) (conv9_STATE_VARIABLE_UsedModuleNames_53_53));
  ShortIntImplicitFIMLangs_31 = ((MR_Word) (conv8_ShortIntImplicitFIMLangs_31));
  ShortImpImplicitFIMLangs_32 = ((MR_Word) (conv7_ShortImpImplicitFIMLangs_32));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[31]), InstCtorCheckedMap_13, ((MR_Box) (STATE_VARIABLE_UnqualSymNames_52_52)), &conv15_STATE_VARIABLE_UnqualSymNames_57_57, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_53_53)), &conv14_STATE_VARIABLE_UsedModuleNames_58_58);
  STATE_VARIABLE_UnqualSymNames_57_57 = ((MR_Word) (conv15_STATE_VARIABLE_UnqualSymNames_57_57));
  STATE_VARIABLE_UsedModuleNames_58_58 = ((MR_Word) (conv14_STATE_VARIABLE_UsedModuleNames_58_58));
  mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[32]), ModeCtorCheckedMap_14, ((MR_Box) (STATE_VARIABLE_UnqualSymNames_57_57)), &conv19_STATE_VARIABLE_UnqualSymNames_60_60, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_58_58)), &conv18_STATE_VARIABLE_UsedModuleNames_61_61);
  STATE_VARIABLE_UnqualSymNames_60_60 = ((MR_Word) (conv19_STATE_VARIABLE_UnqualSymNames_60_60));
  STATE_VARIABLE_UsedModuleNames_61_61 = ((MR_Word) (conv18_STATE_VARIABLE_UsedModuleNames_61_61));
  Var_64 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
  parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(IntTypeClasses_26, STATE_VARIABLE_UnqualSymNames_60_60, &STATE_VARIABLE_UnqualSymNames_62_62, STATE_VARIABLE_UsedModuleNames_61_61, &STATE_VARIABLE_UsedModuleNames_63_63, Var_64, &ShortIntTypeClassesCord_33);
  Var_67 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0));
  parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(IntInstances_27, STATE_VARIABLE_UnqualSymNames_62_62, &UnqualSymNames_28, STATE_VARIABLE_UsedModuleNames_63_63, &UsedModuleNames_29, Var_67, &ShortIntInstancesCord_34);
  ShortIntTypeClasses_35 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ShortIntTypeClassesCord_33);
  ShortIntInstances_36 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), ShortIntInstancesCord_34);
  ImportUseMap_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_17, (MR_Integer) 3))));
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[0]));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_5));
    MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_68, 3) = ((MR_Box) (UnqualSymNames_28));
    MR_hl_field(0, Var_68, 4) = ((MR_Box) (UsedModuleNames_29));
  }
  Var_69 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), Var_68, ImportUseMap_37, ((MR_Box) (Var_69)), &conv21_ShortUseOnlyMap_38);
  ShortUseOnlyMap_38 = ((MR_Word) (conv21_ShortUseOnlyMap_38));
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_6));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (ShortIntImplicitFIMLangs_31));
  }
  mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_70, IntExplicitFIMSpecs_10, &ShortIntExplicitFIMSpecs_39);
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[6]));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_7));
    MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_71, 3) = ((MR_Box) (ModuleName_22));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), Var_71, ShortIntImplicitFIMLangs_31, ((MR_Box) (ShortIntExplicitFIMSpecs_39)), &conv23_ShortIntFIMSpecs_40);
  ShortIntFIMSpecs_40 = ((MR_Word) (conv23_ShortIntFIMSpecs_40));
  mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntExplicitFIMSpecs_10, ImpExplicitFIMSpecs_11, &ExplicitFIMSpecs_41);
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4]));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_8_p_0_8));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (ShortImpImplicitFIMLangs_32));
  }
  mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_72, ExplicitFIMSpecs_41, &ShortImpExplicitFIMSpecs_42);
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), Var_71, ShortImpImplicitFIMLangs_32, ((MR_Box) (ShortImpExplicitFIMSpecs_42)), &conv24_ShortImpFIMSpecs0_43);
  ShortImpFIMSpecs0_43 = ((MR_Word) (conv24_ShortImpFIMSpecs0_43));
  mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ShortImpFIMSpecs0_43, ShortIntFIMSpecs_40, &ShortImpFIMSpecs_44);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt2_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_23));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (ShortIntInclMap_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (ShortUseOnlyMap_38));
    MR_hl_field(0, base, 5) = ((MR_Box) (ShortIntFIMSpecs_40));
    MR_hl_field(0, base, 6) = ((MR_Box) (ShortImpFIMSpecs_44));
    MR_hl_field(0, base, 7) = ((MR_Box) (ShortTypeCtorCheckedMap_30));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstCtorCheckedMap_13));
    MR_hl_field(0, base, 9) = ((MR_Box) (ModeCtorCheckedMap_14));
    MR_hl_field(0, base, 10) = ((MR_Box) (ShortIntTypeClasses_35));
    MR_hl_field(0, base, 11) = ((MR_Box) (ShortIntInstances_36));
    MR_hl_field(0, base, 12) = ((MR_Box) (TypeCtorRepnMap_15));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__get_int2_items_from_int1_int_instance__2536__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntInstancesCord_0_6,
  MR_Word * STATE_VARIABLE_IntInstancesCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntInstancesCord_7 = STATE_VARIABLE_IntInstancesCord_0_6;
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word InstanceInfo_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstanceInfos_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ClassSymName_22 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_17, (MR_Integer) 0))));
      MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_17, (MR_Integer) 1))));
      MR_Word OrigArgTypes_24 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_17, (MR_Integer) 2))));
      MR_Word ClassConstraints_25 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_17, (MR_Integer) 3))));
      MR_Word InstanceBody0_26 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_17, (MR_Integer) 4))));
      MR_Word TVarSet_27 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_17, (MR_Integer) 5))));
      MR_Word ContainingModuleName_28 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_17, (MR_Integer) 6))));
      MR_Word Context_29 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_17, (MR_Integer) 7))));
      MR_Word SeqNum_30 = ((MR_Word) ((MR_hl_field(0, InstanceInfo_17, (MR_Integer) 8))));
      MR_Word AbstractInstanceInfo_32;
      MR_Word Var_39;
      MR_Word STATE_VARIABLE_MaybeUnqual_43_43;
      MR_Word STATE_VARIABLE_ModuleNames_44_44;
      MR_Word STATE_VARIABLE_MaybeUnqual_45_45;
      MR_Word STATE_VARIABLE_ModuleNames_46_46;
      MR_Word STATE_VARIABLE_MaybeUnqual_47_47;
      MR_Word STATE_VARIABLE_ModuleNames_48_48;
      MR_Word STATE_VARIABLE_MaybeUnqual_49_49;
      MR_Word STATE_VARIABLE_ModuleNames_50_50;
      MR_Word STATE_VARIABLE_IntInstancesCord_51_51;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntInstancesCord_0_6;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[3]));
        MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0_1));
        MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_39, 3) = ((MR_Box) (InstanceBody0_26));
        MR_hl_field(0, Var_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_39, (MR_String) "predicate \140parse_tree.comp_unit_interface.get_int2_items_from_int1_int_instance\'/7", (MR_String) "instance_body_abstract");
      if (((MR_tag((MR_Word) ClassSymName_22)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_55 = ((MR_Word) ((MR_hl_field(1, ClassSymName_22, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_55)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_44_44);
        STATE_VARIABLE_MaybeUnqual_43_43 = STATE_VARIABLE_MaybeUnqual_0_2;
      }
      else
      {
        STATE_VARIABLE_MaybeUnqual_43_43 = (MR_Integer) 1;
        STATE_VARIABLE_ModuleNames_44_44 = STATE_VARIABLE_ModuleNames_0_4;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_23, STATE_VARIABLE_MaybeUnqual_43_43, &STATE_VARIABLE_MaybeUnqual_45_45, STATE_VARIABLE_ModuleNames_44_44, &STATE_VARIABLE_ModuleNames_46_46);
      parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(OrigArgTypes_24, STATE_VARIABLE_MaybeUnqual_45_45, &STATE_VARIABLE_MaybeUnqual_47_47, STATE_VARIABLE_ModuleNames_46_46, &STATE_VARIABLE_ModuleNames_48_48);
      parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(ClassConstraints_25, STATE_VARIABLE_MaybeUnqual_47_47, &STATE_VARIABLE_MaybeUnqual_49_49, STATE_VARIABLE_ModuleNames_48_48, &STATE_VARIABLE_ModuleNames_50_50);
      {
        AbstractInstanceInfo_32 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AbstractInstanceInfo_32, 0) = ((MR_Box) (ClassSymName_22));
        MR_hl_field(0, AbstractInstanceInfo_32, 1) = ((MR_Box) (ArgTypes_23));
        MR_hl_field(0, AbstractInstanceInfo_32, 2) = ((MR_Box) (OrigArgTypes_24));
        MR_hl_field(0, AbstractInstanceInfo_32, 3) = ((MR_Box) (ClassConstraints_25));
        MR_hl_field(0, AbstractInstanceInfo_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, AbstractInstanceInfo_32, 5) = ((MR_Box) (TVarSet_27));
        MR_hl_field(0, AbstractInstanceInfo_32, 6) = ((MR_Box) (ContainingModuleName_28));
        MR_hl_field(0, AbstractInstanceInfo_32, 7) = ((MR_Box) (Context_29));
        MR_hl_field(0, AbstractInstanceInfo_32, 8) = ((MR_Box) (SeqNum_30));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), ((MR_Box) (AbstractInstanceInfo_32)), STATE_VARIABLE_IntInstancesCord_0_6, &STATE_VARIABLE_IntInstancesCord_51_51);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = InstanceInfos_18;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_49_49;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_50_50;
      next_value_of_STATE_VARIABLE_IntInstancesCord_0_6 = STATE_VARIABLE_IntInstancesCord_51_51;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      STATE_VARIABLE_IntInstancesCord_0_6 = next_value_of_STATE_VARIABLE_IntInstancesCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5,
  MR_Word STATE_VARIABLE_IntTypeClassesCord_0_6,
  MR_Word * STATE_VARIABLE_IntTypeClassesCord_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IntTypeClassesCord_7 = STATE_VARIABLE_IntTypeClassesCord_0_6;
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word TypeClassInfo_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeClassInfos_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ClassSymName_22 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_17, (MR_Integer) 0))));
      MR_Word TypeParams_23 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_17, (MR_Integer) 1))));
      MR_Word SuperclassConstraints_24 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_17, (MR_Integer) 2))));
      MR_Word FunDeps_25 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_17, (MR_Integer) 3))));
      MR_Word TVarSet_27 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_17, (MR_Integer) 5))));
      MR_Word Context_28 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_17, (MR_Integer) 6))));
      MR_Word SeqNum_29 = ((MR_Word) ((MR_hl_field(0, TypeClassInfo_17, (MR_Integer) 7))));
      MR_Word AbstractTypeClassInfo_31;
      MR_Word STATE_VARIABLE_MaybeUnqual_38_38;
      MR_Word STATE_VARIABLE_ModuleNames_39_39;
      MR_Word STATE_VARIABLE_IntTypeClassesCord_40_40;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_6;

      parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(SuperclassConstraints_24, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_38_38, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_39_39);
      {
        AbstractTypeClassInfo_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AbstractTypeClassInfo_31, 0) = ((MR_Box) (ClassSymName_22));
        MR_hl_field(0, AbstractTypeClassInfo_31, 1) = ((MR_Box) (TypeParams_23));
        MR_hl_field(0, AbstractTypeClassInfo_31, 2) = ((MR_Box) (SuperclassConstraints_24));
        MR_hl_field(0, AbstractTypeClassInfo_31, 3) = ((MR_Box) (FunDeps_25));
        MR_hl_field(0, AbstractTypeClassInfo_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, AbstractTypeClassInfo_31, 5) = ((MR_Box) (TVarSet_27));
        MR_hl_field(0, AbstractTypeClassInfo_31, 6) = ((MR_Box) (Context_28));
        MR_hl_field(0, AbstractTypeClassInfo_31, 7) = ((MR_Box) (SeqNum_29));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ((MR_Box) (AbstractTypeClassInfo_31)), STATE_VARIABLE_IntTypeClassesCord_0_6, &STATE_VARIABLE_IntTypeClassesCord_40_40);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeClassInfos_18;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_38_38;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_39_39;
      next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_6 = STATE_VARIABLE_IntTypeClassesCord_40_40;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      STATE_VARIABLE_IntTypeClassesCord_0_6 = next_value_of_STATE_VARIABLE_IntTypeClassesCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word Constraint_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word ClassSymName_22 = ((MR_Word) ((MR_hl_field(0, Constraint_12, (MR_Integer) 0))));
      MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(0, Constraint_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_15_24;
      MR_Word STATE_VARIABLE_ModuleNames_16_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      if (((MR_tag((MR_Word) ClassSymName_22)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(1, ClassSymName_22, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_27)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_16_25);
        STATE_VARIABLE_MaybeUnqual_15_24 = STATE_VARIABLE_MaybeUnqual_0_2;
      }
      else
      {
        STATE_VARIABLE_MaybeUnqual_15_24 = (MR_Integer) 1;
        STATE_VARIABLE_ModuleNames_16_25 = STATE_VARIABLE_ModuleNames_0_4;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_23, STATE_VARIABLE_MaybeUnqual_15_24, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_16_25, &STATE_VARIABLE_ModuleNames_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Constraints_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_20_20;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_21,
  MR_Word * STATE_VARIABLE_MaybeUnqual_22,
  MR_Word STATE_VARIABLE_ModuleNames_0_23,
  MR_Word * STATE_VARIABLE_ModuleNames_24)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_MaybeUnqual_22 = STATE_VARIABLE_MaybeUnqual_0_21;
          *STATE_VARIABLE_ModuleNames_24 = STATE_VARIABLE_ModuleNames_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(1, Type_6, (MR_Integer) 0))));
          MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(1, Type_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_MaybeUnqual_25_25;
          MR_Word STATE_VARIABLE_ModuleNames_26_26;

          if (((MR_tag((MR_Word) SymName_12)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_42 = ((MR_Word) ((MR_hl_field(1, SymName_12, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_42)), STATE_VARIABLE_ModuleNames_0_23, &STATE_VARIABLE_ModuleNames_26_26);
            STATE_VARIABLE_MaybeUnqual_25_25 = STATE_VARIABLE_MaybeUnqual_0_21;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_25_25 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_26_26 = STATE_VARIABLE_ModuleNames_0_23;
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_13, STATE_VARIABLE_MaybeUnqual_25_25, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_26_26, STATE_VARIABLE_ModuleNames_24);
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_MaybeUnqual_22 = STATE_VARIABLE_MaybeUnqual_0_21;
          *STATE_VARIABLE_ModuleNames_24 = STATE_VARIABLE_ModuleNames_0_23;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_40 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));

              parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_40, STATE_VARIABLE_MaybeUnqual_0_21, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_0_23, STATE_VARIABLE_ModuleNames_24);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_39 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_39, STATE_VARIABLE_MaybeUnqual_0_21, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_0_23, STATE_VARIABLE_ModuleNames_24);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_36 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_36, STATE_VARIABLE_MaybeUnqual_0_21, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_0_23, STATE_VARIABLE_ModuleNames_24);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgType_20 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_Type_6 = ArgType_20;

              // direct tailcall eliminated
              ;
              Type_6 = next_value_of_Type_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleNames_5 = STATE_VARIABLE_ModuleNames_0_4;
      *STATE_VARIABLE_MaybeUnqual_3 = STATE_VARIABLE_MaybeUnqual_0_2;
    }
    else
    {
      MR_Word Type_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_12, STATE_VARIABLE_MaybeUnqual_0_2, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Types_13;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_20_20;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeUnqual_0_2 = next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      STATE_VARIABLE_ModuleNames_0_4 = next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__comp_unit_interface__keep_promise_item_int_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv14_AbstractInstanceInfo_4;

  conv14_AbstractInstanceInfo_4 = parse_tree__comp_unit_interface__check_instance_is_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv14_AbstractInstanceInfo_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_FIMSpecs_10;

  parse_tree__comp_unit_interface__add_self_fim_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_FIMSpecs_10);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_FIMSpecs_10));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_TypeCtorCheckedMap_20;
  MR_Word conv7_STATE_VARIABLE_ImpImplicitFIMLangs_22;

  parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_imp_details_for_int1_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_TypeCtorCheckedMap_20, ((MR_Word) (wrapper_arg_5)), &conv7_STATE_VARIABLE_ImpImplicitFIMLangs_22);
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_TypeCtorCheckedMap_20));
  *wrapper_arg_6 = ((MR_Box) (conv7_STATE_VARIABLE_ImpImplicitFIMLangs_22));
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv6_SectionUseOnly_8;

  succeeded = parse_tree__comp_unit_interface__make_imports_into_uses_maybe_implicit_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_SectionUseOnly_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv6_SectionUseOnly_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8;

  parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImpTypesMap_22;

  parse_tree__comp_unit_interface__record_type_defn_imp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImpTypesMap_22);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImpTypesMap_22));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_IntTypesMap_14;

  parse_tree__comp_unit_interface__record_type_defn_int_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IntTypesMap_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IntTypesMap_14));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_11_p_0(
  MR_Word Globals_12,
  MR_Word AugMakeIntUnit_13,
  MR_Word * IntExplicitFIMSpecs_14,
  MR_Word * ImpExplicitFIMSpecs_15,
  MR_Word * IntTypeCtorCheckedMap_16,
  MR_Word * IntInstCtorCheckedMap_17,
  MR_Word * IntModeCtorCheckedMap_18,
  MR_Word * TypeCtorRepnMap_19,
  MR_Word * ParseTreeInt1_20,
  MR_Word STATE_VARIABLE_Specs_0_85,
  MR_Word * STATE_VARIABLE_Specs_86)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_22 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_13, (MR_Integer) 0))));
  MR_Word DirectIntSpecs_24 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_13, (MR_Integer) 2))));
  MR_Word IndirectIntSpecs_25 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_13, (MR_Integer) 3))));
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 0))));
  MR_Word ModuleNameContext_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 1))));
  MR_Word InclMap_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 2))));
  MR_Word ImportUseMap_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 3))));
  MR_Word IntFIMSpecMap_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 4))));
  MR_Word ImpFIMSpecMap_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 5))));
  MR_Word IntSelfFIMLangs_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 6))));
  MR_Word TypeCtorCheckedMap0_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 8))));
  MR_Word InstCtorCheckedMap0_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 9))));
  MR_Word ModeCtorCheckedMap0_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 10))));
  MR_Word IntTypeClasses_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 13))));
  MR_Word IntInstances0_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 14))));
  MR_Word IntPredDecls_42 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 15))));
  MR_Word IntModeDecls_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 16))));
  MR_Word IntDeclPragmas_44 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 17))));
  MR_Word IntPromises0_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 18))));
  MR_Word ImpTypeClasses_47 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_22, (MR_Integer) 20))));
  MR_Word IntTypeDefns0_59;
  MR_Word ImpTypeDefns0_60;
  MR_Word IntTypesMap_62;
  MR_Word ImpTypesMap_63;
  MR_Word BothTypesMap_64;
  MR_Word NeededImpTypeCtors_65;
  MR_Word ImpModulesNeededByTypeDefns_66;
  MR_Word ImpModulesNeededByTypeClassDefns_67;
  MR_Word ImpNeededModules_68;
  MR_Word SectionUseOnlyMap_69;
  MR_Word ImpSelfFIMLangs_70;
  MR_Word IntFIMSpecs_71;
  MR_Word ImpFIMSpecs0_72;
  MR_Word ImpFIMSpecs_73;
  MR_Word IntInstDefns_74;
  MR_Word IntInstDefnMap_76;
  MR_Word IntModeDefns_77;
  MR_Word IntModeDefnMap_79;
  MR_Word Experiment1_80;
  MR_Word IntInstances_82;
  MR_Word IntPromises_83;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_100;
  MR_Word STATE_VARIABLE_Specs_101_101;
  MR_Word Var_103;
  MR_Word STATE_VARIABLE_Specs_104_104;
  MR_Word _ImpForeignEnums0_61;
  MR_Box conv1_IntTypesMap_62;
  MR_Box conv3_ImpTypesMap_63;
  MR_Box conv5_ImpModulesNeededByTypeClassDefns_67;
  MR_Box conv10_IntTypeCtorCheckedMap_16;
  MR_Box conv9_ImpSelfFIMLangs_70;
  MR_Box conv12_IntFIMSpecs_71;
  MR_Box conv13_ImpFIMSpecs0_72;
  MR_Word _ImpInstDefns_75;
  MR_Word _ImpModeDefns_78;

  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap0_35, &IntTypeDefns0_59, &ImpTypeDefns0_60, &_ImpForeignEnums0_61);
  Var_88 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[24]), IntTypeDefns0_59, ((MR_Box) (Var_88)), &conv1_IntTypesMap_62);
  IntTypesMap_62 = ((MR_Word) (conv1_IntTypesMap_62));
  Var_90 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[25]), ImpTypeDefns0_60, ((MR_Box) (Var_90)), &conv3_ImpTypesMap_63);
  ImpTypesMap_63 = ((MR_Word) (conv3_ImpTypesMap_63));
  BothTypesMap_64 = mercury__one_or_more_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), IntTypesMap_62, ImpTypesMap_63);
  parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(IntTypesMap_62, ImpTypesMap_63, BothTypesMap_64, &NeededImpTypeCtors_65, &ImpModulesNeededByTypeDefns_66);
  Var_92 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[26]), ImpTypeClasses_47, ((MR_Box) (Var_92)), &conv5_ImpModulesNeededByTypeClassDefns_67);
  ImpModulesNeededByTypeClassDefns_67 = ((MR_Word) (conv5_ImpModulesNeededByTypeClassDefns_67));
  mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpModulesNeededByTypeClassDefns_67, ImpModulesNeededByTypeDefns_66, &ImpNeededModules_68);
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[5]));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_4));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_93, 3) = ((MR_Box) (ImpNeededModules_68));
  }
  mercury__map__filter_map_values_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_use_0), Var_93, ImportUseMap_30, &SectionUseOnlyMap_69);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_31, IntExplicitFIMSpecs_14);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpFIMSpecMap_32, ImpExplicitFIMSpecs_15);
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[1]));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_5));
    MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_94, 3) = ((MR_Box) (BothTypesMap_64));
    MR_hl_field(0, Var_94, 4) = ((MR_Box) (NeededImpTypeCtors_65));
  }
  Var_95 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0));
  Var_96 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
  mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), Var_94, TypeCtorCheckedMap0_35, ((MR_Box) (Var_95)), &conv10_IntTypeCtorCheckedMap_16, ((MR_Box) (Var_96)), &conv9_ImpSelfFIMLangs_70);
  *IntTypeCtorCheckedMap_16 = ((MR_Word) (conv10_IntTypeCtorCheckedMap_16));
  ImpSelfFIMLangs_70 = ((MR_Word) (conv9_ImpSelfFIMLangs_70));
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[6]));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_11_p_0_6));
    MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_97, 3) = ((MR_Box) (ModuleName_27));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), Var_97, IntSelfFIMLangs_33, ((MR_Box) (*IntExplicitFIMSpecs_14)), &conv12_IntFIMSpecs_71);
  IntFIMSpecs_71 = ((MR_Word) (conv12_IntFIMSpecs_71));
  mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), Var_97, ImpSelfFIMLangs_70, ((MR_Box) (*ImpExplicitFIMSpecs_15)), &conv13_ImpFIMSpecs0_72);
  ImpFIMSpecs0_72 = ((MR_Word) (conv13_ImpFIMSpecs0_72));
  mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs0_72, IntFIMSpecs_71, &ImpFIMSpecs_73);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap0_36, &IntInstDefns_74, &_ImpInstDefns_75);
  IntInstDefnMap_76 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_74);
  Var_100 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0));
  parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_76, Var_100, IntInstCtorCheckedMap_17, STATE_VARIABLE_Specs_0_85, &STATE_VARIABLE_Specs_101_101);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap0_37, &IntModeDefns_77, &_ImpModeDefns_78);
  IntModeDefnMap_79 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_77);
  Var_103 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0));
  parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_79, Var_103, IntModeCtorCheckedMap_18, STATE_VARIABLE_Specs_101_101, &STATE_VARIABLE_Specs_104_104);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 710, &Experiment1_80);
  switch (Experiment1_80) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[12]), TypeCtorRepnMap_19);
        *STATE_VARIABLE_Specs_86 = STATE_VARIABLE_Specs_104_104;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RepnSpecs_81;

        parse_tree__decide_type_repn__decide_repns_for_all_types_for_int1_7_p_0(Globals_12, ModuleName_27, TypeCtorCheckedMap0_35, DirectIntSpecs_24, IndirectIntSpecs_25, TypeCtorRepnMap_19, &RepnSpecs_81);
        *STATE_VARIABLE_Specs_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_104_104, RepnSpecs_81);
      }
      break;
  }
  IntInstances_82 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[27]), IntInstances0_41);
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[28]), IntPromises0_45, &IntPromises_83);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (18 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt1_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_27));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_28));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_29));
    MR_hl_field(0, base, 4) = ((MR_Box) (SectionUseOnlyMap_69));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_71));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_73));
    MR_hl_field(0, base, 7) = ((MR_Box) (*IntTypeCtorCheckedMap_16));
    MR_hl_field(0, base, 8) = ((MR_Box) (*IntInstCtorCheckedMap_17));
    MR_hl_field(0, base, 9) = ((MR_Box) (*IntModeCtorCheckedMap_18));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_40));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_82));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_42));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_43));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_44));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntPromises_83));
    MR_hl_field(0, base, 16) = ((MR_Box) (*TypeCtorRepnMap_19));
    MR_hl_field(0, base, 17) = ((MR_Box) (ImpTypeClasses_47));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_2(
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
  MR_Word conv8_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16;
  MR_Word conv7_STATE_VARIABLE_DuArgTypeCtors_18;
  MR_Word conv6_STATE_VARIABLE_ModulesNeededByTypeDefns_20;

  parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16));
  *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_DuArgTypeCtors_18));
  *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_ModulesNeededByTypeDefns_20));
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23;
  MR_Word conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25;
  MR_Word conv0_STATE_VARIABLE_DirectDummyTypeCtors_27;

  parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_DirectDummyTypeCtors_27);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_DirectDummyTypeCtors_27));
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(
  MR_Word IntTypesMap_6,
  MR_Word ImpTypesMap_7,
  MR_Word BothTypesMap_8,
  MR_Word * NeededImpTypeCtors_9,
  MR_Word * ModulesNeededByTypeDefns_10)
{
  MR_Word AbsExpEqvLhsTypeCtors_11;
  MR_Word AbsExpEnumTypeCtors_12;
  MR_Word DirectDummyTypeCtors_13;
  MR_Word AbsExpEqvRhsTypeCtors_14;
  MR_Word DuArgTypeCtors_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Box conv5_AbsExpEqvLhsTypeCtors_11;
  MR_Box conv4_AbsExpEnumTypeCtors_12;
  MR_Box conv3_DirectDummyTypeCtors_13;
  MR_Box conv11_AbsExpEqvRhsTypeCtors_14;
  MR_Box conv10_DuArgTypeCtors_15;
  MR_Box conv9_ModulesNeededByTypeDefns_10;

  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[0]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (IntTypesMap_6));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (BothTypesMap_8));
  }
  Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  Var_18 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), Var_16, ImpTypesMap_7, ((MR_Box) (Var_17)), &conv5_AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_18)), &conv4_AbsExpEnumTypeCtors_12, ((MR_Box) (Var_19)), &conv3_DirectDummyTypeCtors_13);
  AbsExpEqvLhsTypeCtors_11 = ((MR_Word) (conv5_AbsExpEqvLhsTypeCtors_11));
  AbsExpEnumTypeCtors_12 = ((MR_Word) (conv4_AbsExpEnumTypeCtors_12));
  DirectDummyTypeCtors_13 = ((MR_Word) (conv3_DirectDummyTypeCtors_13));
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_2));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (ImpTypesMap_7));
  }
  Var_21 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  Var_22 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  Var_23 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[9]), Var_20, AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_21)), &conv11_AbsExpEqvRhsTypeCtors_14, ((MR_Box) (Var_22)), &conv10_DuArgTypeCtors_15, ((MR_Box) (Var_23)), &conv9_ModulesNeededByTypeDefns_10);
  AbsExpEqvRhsTypeCtors_14 = ((MR_Word) (conv11_AbsExpEqvRhsTypeCtors_14));
  DuArgTypeCtors_15 = ((MR_Word) (conv10_DuArgTypeCtors_15));
  *ModulesNeededByTypeDefns_10 = ((MR_Word) (conv9_ModulesNeededByTypeDefns_10));
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (DuArgTypeCtors_15));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (DirectDummyTypeCtors_13));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (AbsExpEnumTypeCtors_12));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (AbsExpEqvRhsTypeCtors_14));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (AbsExpEqvLhsTypeCtors_11));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
  }
  *NeededImpTypeCtors_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_24);
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = parse_tree__comp_unit_interface__make_typeclass_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ModeCtorCheckedMap_19;

  parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_ModeCtorCheckedMap_19);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_ModeCtorCheckedMap_19));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InstCtorCheckedMap_19;

  parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstCtorCheckedMap_19);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstCtorCheckedMap_19));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_CheckedDefn_4;

  parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_CheckedDefn_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_CheckedDefn_4));
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_AbstractInstanceInfo_4;

  conv0_AbstractInstanceInfo_4 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_AbstractInstanceInfo_4));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * IntParseTreeModuleSrc_4)
{
  MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 0))));
  MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 1))));
  MR_Word InclMap_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 2))));
  MR_Word ImportUseMap_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 3))));
  MR_Word IntFIMSpecMap_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 4))));
  MR_Word ImpFIMSpecMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 5))));
  MR_Word IntSelfFIMLangs_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 6))));
  MR_Word ImpSelfFIMLangs_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 7))));
  MR_Word TypeCtorCheckedMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 8))));
  MR_Word InstCtorCheckedMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 9))));
  MR_Word ModeCtorCheckedMap_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 10))));
  MR_Word TypeSpecs_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 11))));
  MR_Word InstModeSpecs_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 12))));
  MR_Word IntTypeClasses_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 13))));
  MR_Word IntInstances_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 14))));
  MR_Word IntPredDecls_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 15))));
  MR_Word IntModeDecls_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 16))));
  MR_Word IntDeclPragmas_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 17))));
  MR_Word IntPromises_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 18))));
  MR_Word IntBadClausePreds_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 19))));
  MR_Word ImpTypeClasses_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_3, (MR_Integer) 20))));
  MR_Word IntInstancesAbstract_37;
  MR_Word IntTypeCtorCheckedMap_38;
  MR_Word IntInstCtorCheckedMap_39;
  MR_Word IntModeCtorCheckedMap_40;
  MR_Word AbstractImpTypeClasses_41;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Box conv3_IntInstCtorCheckedMap_39;
  MR_Box conv5_IntModeCtorCheckedMap_40;

  IntInstancesAbstract_37 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[19]), IntInstances_19);
  mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[20]), TypeCtorCheckedMap_13, &IntTypeCtorCheckedMap_38);
  Var_45 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[21]), InstCtorCheckedMap_14, ((MR_Box) (Var_45)), &conv3_IntInstCtorCheckedMap_39);
  IntInstCtorCheckedMap_39 = ((MR_Word) (conv3_IntInstCtorCheckedMap_39));
  Var_47 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[22]), ModeCtorCheckedMap_15, ((MR_Box) (Var_47)), &conv5_IntModeCtorCheckedMap_40);
  IntModeCtorCheckedMap_40 = ((MR_Word) (conv5_IntModeCtorCheckedMap_40));
  AbstractImpTypeClasses_41 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[23]), ImpTypeClasses_25);
  Var_49 = (MR_Word) (IntInstancesAbstract_37);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (32 * sizeof(MR_Word)), NULL, NULL);
    *IntParseTreeModuleSrc_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (InclMap_7));
    MR_hl_field(0, base, 3) = ((MR_Box) (ImportUseMap_8));
    MR_hl_field(0, base, 4) = ((MR_Box) (IntFIMSpecMap_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (ImpFIMSpecMap_10));
    MR_hl_field(0, base, 6) = ((MR_Box) (IntSelfFIMLangs_11));
    MR_hl_field(0, base, 7) = ((MR_Box) (ImpSelfFIMLangs_12));
    MR_hl_field(0, base, 8) = ((MR_Box) (IntTypeCtorCheckedMap_38));
    MR_hl_field(0, base, 9) = ((MR_Box) (IntInstCtorCheckedMap_39));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntModeCtorCheckedMap_40));
    MR_hl_field(0, base, 11) = ((MR_Box) (TypeSpecs_16));
    MR_hl_field(0, base, 12) = ((MR_Box) (InstModeSpecs_17));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntTypeClasses_18));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntPredDecls_20));
    MR_hl_field(0, base, 16) = ((MR_Box) (IntModeDecls_21));
    MR_hl_field(0, base, 17) = ((MR_Box) (IntDeclPragmas_22));
    MR_hl_field(0, base, 18) = ((MR_Box) (IntPromises_23));
    MR_hl_field(0, base, 19) = ((MR_Box) (IntBadClausePreds_24));
    MR_hl_field(0, base, 20) = ((MR_Box) (AbstractImpTypeClasses_41));
    MR_hl_field(0, base, 21) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 22) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 23) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 24) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 25) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 26) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 27) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 28) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 29) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 30) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 31) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__3_3;

  conv5_HeadVar__3_3 = parse_tree__prog_mutable__declare_mutable_aux_preds_for_int0_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__generate_private_interface_int0__519__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_AbstractInstanceInfo_4;

  conv4_AbstractInstanceInfo_4 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_AbstractInstanceInfo_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = parse_tree__parse_tree_out__item_abstract_instance_to_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_AbstractInstanceInfo_4;

  conv2_AbstractInstanceInfo_4 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_AbstractInstanceInfo_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = parse_tree__item_util__fim_module_lang_to_spec_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(
  MR_Word AugMakeIntUnit_5,
  MR_Word * ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Specs_0_67,
  MR_Word * STATE_VARIABLE_Specs_68)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_8 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_5, (MR_Integer) 0))));
  MR_Word ModuleItemVersionNumbersMap_12 = ((MR_Word) ((MR_hl_field(0, AugMakeIntUnit_5, (MR_Integer) 4))));
  MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 0))));
  MR_Word MaybeVersionNumbers_15;
  MR_Word ModuleNameContext_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 1))));
  MR_Word InclMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 2))));
  MR_Word ImportUseMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 3))));
  MR_Word IntFIMSpecMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 4))));
  MR_Word ImpFIMSpecMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 5))));
  MR_Word IntSelfFIMLangs_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 6))));
  MR_Word ImpSelfFIMLangs_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 7))));
  MR_Word TypeCtorCheckedMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 8))));
  MR_Word InstCtorCheckedMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 9))));
  MR_Word ModeCtorCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 10))));
  MR_Word IntTypeClasses_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 13))));
  MR_Word IntInstances0_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 14))));
  MR_Word IntPredDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 15))));
  MR_Word IntModeDecls_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 16))));
  MR_Word IntDeclPragmas_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 17))));
  MR_Word IntPromises_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 18))));
  MR_Word ImpTypeClasses_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 20))));
  MR_Word ImpInstances0_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 21))));
  MR_Word ImpPredDecls0_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 22))));
  MR_Word ImpModeDecls_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 23))));
  MR_Word ImpDeclPragmas_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 26))));
  MR_Word ImpPromises_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 28))));
  MR_Word ImpMutables_46 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_8, (MR_Integer) 31))));
  MR_Word SectionImportUseMap_47;
  MR_Word IntFIMSpecs0_52;
  MR_Word ImpFIMSpecs0_53;
  MR_Word IntFIMSpecs_54;
  MR_Word ImpFIMSpecs1_55;
  MR_Word ImpFIMSpecs_56;
  MR_Word OutInfo_57;
  MR_Word IntInstances_58;
  MR_Word IntInstanceStrs_59;
  MR_Word IntInstanceStrSet_60;
  MR_Word ImpInstances1_61;
  MR_Word KeepImpInstanceTest_62;
  MR_Word ImpInstances_65;
  MR_Word ImpPredDecls_66;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_74;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word MIVNs_14;
  MR_Box conv0_MIVNs_14;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), ModuleItemVersionNumbersMap_12, ((MR_Box) (ModuleName_13)), &conv0_MIVNs_14);
  if (succeeded)
  {
    MIVNs_14 = ((MR_Word) (conv0_MIVNs_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      MaybeVersionNumbers_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeVersionNumbers_15, 0) = ((MR_Box) (MIVNs_14));
    }
  else
    MaybeVersionNumbers_15 = (MR_Word) ((MR_Unsigned) 0U);
  parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_6_p_0(ImportUseMap_18, &SectionImportUseMap_47, &Var_48, &Var_49, &Var_50, &Var_51);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_19, &IntFIMSpecs0_52);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpFIMSpecMap_20, &ImpFIMSpecs0_53);
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[0]));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_1));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (ModuleName_13));
  }
  Var_69 = mercury__set__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_70, IntSelfFIMLangs_21);
  mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_69, IntFIMSpecs0_52, &IntFIMSpecs_54);
  Var_71 = mercury__set__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_70, ImpSelfFIMLangs_22);
  mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_71, ImpFIMSpecs0_53, &ImpFIMSpecs1_55);
  mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs1_55, IntFIMSpecs_54, &ImpFIMSpecs_56);
  OutInfo_57 = parse_tree__parse_tree_out_info__init_write_int_merc_out_info_0_f_0();
  IntInstances_58 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[17]), IntInstances0_29);
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[1]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_3));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (OutInfo_57));
  }
  IntInstanceStrs_59 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_74, IntInstances_58);
  mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntInstanceStrs_59, &IntInstanceStrSet_60);
  ImpInstances1_61 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[18]), ImpInstances0_36);
  {
    KeepImpInstanceTest_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, KeepImpInstanceTest_62, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[2]));
    MR_hl_field(0, KeepImpInstanceTest_62, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_5));
    MR_hl_field(0, KeepImpInstanceTest_62, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, KeepImpInstanceTest_62, 3) = ((MR_Box) (OutInfo_57));
    MR_hl_field(0, KeepImpInstanceTest_62, 4) = ((MR_Box) (IntInstanceStrSet_60));
  }
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), KeepImpInstanceTest_62, ImpInstances1_61, &ImpInstances_65);
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[3]));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_6));
    MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_79, 3) = ((MR_Box) (ModuleName_13));
  }
  Var_78 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), Var_79, ImpMutables_46);
  Var_77 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), Var_78);
  ImpPredDecls_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDecls0_37, Var_77);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
    *ParseTreeInt0_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleNameContext_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeVersionNumbers_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (InclMap_17));
    MR_hl_field(0, base, 4) = ((MR_Box) (SectionImportUseMap_47));
    MR_hl_field(0, base, 5) = ((MR_Box) (IntFIMSpecs_54));
    MR_hl_field(0, base, 6) = ((MR_Box) (ImpFIMSpecs_56));
    MR_hl_field(0, base, 7) = ((MR_Box) (TypeCtorCheckedMap_23));
    MR_hl_field(0, base, 8) = ((MR_Box) (InstCtorCheckedMap_24));
    MR_hl_field(0, base, 9) = ((MR_Box) (ModeCtorCheckedMap_25));
    MR_hl_field(0, base, 10) = ((MR_Box) (IntTypeClasses_28));
    MR_hl_field(0, base, 11) = ((MR_Box) (IntInstances_58));
    MR_hl_field(0, base, 12) = ((MR_Box) (IntPredDecls_30));
    MR_hl_field(0, base, 13) = ((MR_Box) (IntModeDecls_31));
    MR_hl_field(0, base, 14) = ((MR_Box) (IntDeclPragmas_32));
    MR_hl_field(0, base, 15) = ((MR_Box) (IntPromises_33));
    MR_hl_field(0, base, 16) = ((MR_Box) (ImpTypeClasses_35));
    MR_hl_field(0, base, 17) = ((MR_Box) (ImpInstances_65));
    MR_hl_field(0, base, 18) = ((MR_Box) (ImpPredDecls_66));
    MR_hl_field(0, base, 19) = ((MR_Box) (ImpModeDecls_38));
    MR_hl_field(0, base, 20) = ((MR_Box) (ImpDeclPragmas_41));
    MR_hl_field(0, base, 21) = ((MR_Box) (ImpPromises_43));
  }
  *STATE_VARIABLE_Specs_68 = STATE_VARIABLE_Specs_0_67;
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_CheckedModeMap_21;

  parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_CheckedModeMap_21);
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_CheckedModeMap_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_CheckedInstMap_21;

  parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_CheckedInstMap_21);
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_CheckedInstMap_21));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_CheckedTypeMap_52;

  parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_CheckedTypeMap_52);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_CheckedTypeMap_52));
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ContextMap_23;

  parse_tree__comp_unit_interface__acc_int_imports_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_ContextMap_23);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_ContextMap_23));
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_AbstractInstanceInfo_4;

  conv3_AbstractInstanceInfo_4 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_AbstractInstanceInfo_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_TypeClass_4;

  conv2_TypeClass_4 = parse_tree__comp_unit_interface__make_typeclass_abstract_for_int3_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_TypeClass_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__item_util__add_only_int_include_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0(
  MR_Word Globals_6,
  MR_Word ParseTreeModuleSrc_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word STATE_VARIABLE_Specs_0_54,
  MR_Word * STATE_VARIABLE_Specs_55)
{
  MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, (MR_Integer) 0))));
  MR_Word ModuleNameContext_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, (MR_Integer) 1))));
  MR_Word OrigInclMap_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, (MR_Integer) 2))));
  MR_Word OrigImportUseMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, (MR_Integer) 3))));
  MR_Word TypeCtorCheckedMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, (MR_Integer) 8))));
  MR_Word InstCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, (MR_Integer) 9))));
  MR_Word ModeCtorCheckedMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, (MR_Integer) 10))));
  MR_Word OrigIntTypeClasses_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, (MR_Integer) 13))));
  MR_Word OrigIntInstances_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_7, (MR_Integer) 14))));
  MR_Word IntInclMap_42;
  MR_Word IntTypeClasses_43;
  MR_Word IntInstances_44;
  MR_Word IntImportMap_45;
  MR_Word IntTypeCtorCheckedMap_48;
  MR_Word IntInstCtorCheckedMap_49;
  MR_Word IntModeCtorCheckedMap_50;
  MR_Word IntTypeRepnMap_51;
  MR_Word OrigParseTreeInt3_52;
  MR_Word Var_57;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Box conv1_IntInclMap_42;
  MR_Box conv7_IntTypeCtorCheckedMap_48;
  MR_Box conv9_IntInstCtorCheckedMap_49;
  MR_Box conv11_IntModeCtorCheckedMap_50;
  MR_Word _Specs_53;

  Var_57 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), OrigInclMap_12, ((MR_Box) (Var_57)), &conv1_IntInclMap_42);
  IntInclMap_42 = ((MR_Word) (conv1_IntInclMap_42));
  IntTypeClasses_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), OrigIntTypeClasses_23);
  IntInstances_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_abstract_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[12]), OrigIntInstances_24);
  if ((IntInstances_44 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0), &IntImportMap_45);
  else
  {
    MR_Word Var_61;
    MR_Box conv5_IntImportMap_45;

    Var_61 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[13]), OrigImportUseMap_13, ((MR_Box) (Var_61)), &conv5_IntImportMap_45);
    IntImportMap_45 = ((MR_Word) (conv5_IntImportMap_45));
  }
  Var_63 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[14]), TypeCtorCheckedMap_18, ((MR_Box) (Var_63)), &conv7_IntTypeCtorCheckedMap_48);
  IntTypeCtorCheckedMap_48 = ((MR_Word) (conv7_IntTypeCtorCheckedMap_48));
  Var_65 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), InstCtorCheckedMap_19, ((MR_Box) (Var_65)), &conv9_IntInstCtorCheckedMap_49);
  IntInstCtorCheckedMap_49 = ((MR_Word) (conv9_IntInstCtorCheckedMap_49));
  Var_67 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[16]), ModeCtorCheckedMap_20, ((MR_Box) (Var_67)), &conv11_IntModeCtorCheckedMap_50);
  IntModeCtorCheckedMap_50 = ((MR_Word) (conv11_IntModeCtorCheckedMap_50));
  parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(ModuleName_10, TypeCtorCheckedMap_18, &IntTypeRepnMap_51);
  {
    OrigParseTreeInt3_52 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OrigParseTreeInt3_52, 0) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, OrigParseTreeInt3_52, 1) = ((MR_Box) (ModuleNameContext_11));
    MR_hl_field(0, OrigParseTreeInt3_52, 2) = ((MR_Box) (IntInclMap_42));
    MR_hl_field(0, OrigParseTreeInt3_52, 3) = ((MR_Box) (IntImportMap_45));
    MR_hl_field(0, OrigParseTreeInt3_52, 4) = ((MR_Box) (IntTypeCtorCheckedMap_48));
    MR_hl_field(0, OrigParseTreeInt3_52, 5) = ((MR_Box) (IntInstCtorCheckedMap_49));
    MR_hl_field(0, OrigParseTreeInt3_52, 6) = ((MR_Box) (IntModeCtorCheckedMap_50));
    MR_hl_field(0, OrigParseTreeInt3_52, 7) = ((MR_Box) (IntTypeClasses_43));
    MR_hl_field(0, OrigParseTreeInt3_52, 8) = ((MR_Box) (IntInstances_44));
    MR_hl_field(0, OrigParseTreeInt3_52, 9) = ((MR_Box) (IntTypeRepnMap_51));
  }
  parse_tree__module_qual__module_qualify_parse_tree_int3_5_p_0(Globals_6, OrigParseTreeInt3_52, ParseTreeInt3_8, (MR_Word) ((MR_Unsigned) 0U), &_Specs_53);
  *STATE_VARIABLE_Specs_55 = STATE_VARIABLE_Specs_0_54;
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____non_sub_du_extras_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__comp_unit_interface____Compare____non_sub_du_extras_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__comp_unit_interface____Unify____type_defn_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__comp_unit_interface____Compare____type_defn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__comp_unit_interface__init(void)
{
}

void mercury__parse_tree__comp_unit_interface__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_non_sub_du_extras_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_type_defn_map_0);
	MR_register_type_ctor_info(&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_type_defn_pair_0);
}

void mercury__parse_tree__comp_unit_interface__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__comp_unit_interface__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.comp_unit_interface.
