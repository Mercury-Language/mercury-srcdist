/*
** Automatically generated from `comp_unit_interface.m'
** by the Mercury compiler,
** version 22.01
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
#include "bimap.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"



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
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Var_31;
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
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTypeParams_45;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTVarSet_47;
  MR_Box parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__conv0_ItemTypeDefnInfo_43;
  jmp_buf parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_1;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__BaseType_58;
  MR_Word parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Var_60;
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


static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0;

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

static void MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__generate_interface_int1__894__1_3_p_0(
  MR_Word HeadVar__1_144,
  MR_Word HeadVar__2_145,
  MR_Word * HeadVar__3_146);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_mode_ctor_checked_defn__772__1_2_p_0(
  MR_Word MaybeImpDefn_13,
  MR_Word HeadVar__2_27);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_inst_ctor_checked_defn__739__1_2_p_0(
  MR_Word MaybeImpDefn_13,
  MR_Word HeadVar__2_27);

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

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
parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(
  MR_Word Instance_3);

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_1_f_0(
  MR_Word TypeClass_3);

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
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_name_5_p_0(
  MR_Word tscc_proc_2_input_1_InstName_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeUnqual_0_2,
  MR_Word * STATE_VARIABLE_MaybeUnqual_3,
  MR_Word STATE_VARIABLE_ModuleNames_0_4,
  MR_Word * STATE_VARIABLE_ModuleNames_5);

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
parse_tree__comp_unit_interface__make_imports_into_uses_int_only_maybe_implicit_6_p_0(
  MR_Word UnqualSymNames_7,
  MR_Word UsedModuleNames_8,
  MR_Word ModuleName_9,
  MR_Word ImportUse0_10,
  MR_Word STATE_VARIABLE_ShortImportUseMap_0_20,
  MR_Word * STATE_VARIABLE_ShortImportUseMap_21);

static void MR_CALL 
parse_tree__comp_unit_interface__add_only_int_include_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6,
  MR_Word STATE_VARIABLE_IntInclMap_0_10,
  MR_Word * STATE_VARIABLE_IntInclMap_11);

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
parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

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
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word OoMCtors_8,
  MR_Word MaybeCanonical_9,
  MR_Word MaybeDirectArgCtors_10);

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
parse_tree__comp_unit_interface__accumulate_modules_from_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_type_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_Modules_0_22,
  MR_Word * STATE_VARIABLE_Modules_23);

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Modules_0_2,
  MR_Word * STATE_VARIABLE_Modules_3);

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
  MR_Word ImportUse0_7,
  MR_Word * ImportUse_8);

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
parse_tree__comp_unit_interface__delete_uc_preds_from_maybe_foreign_type_defn_2_p_0(
  MR_Word MaybeDefn0_3,
  MR_Word * MaybeDefn_4);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_or_enum_2_p_0(
  MR_Word CJCsMaybeDefnOrEnum0_3,
  MR_Word * CJCsMaybeDefnOrEnum_4);

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_maybe_foreign_type_defn_or_enum_2_p_0(
  MR_Word MaybeDefnOrEnum0_3,
  MR_Word * MaybeDefnOrEnum_4);

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
parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__304__1_2_p_0(
  MR_Word LambdaHeadVar__1_61,
  MR_Word * LambdaHeadVar__2_62);

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
parse_tree__comp_unit_interface__acc_int_imports_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ImportUseInfo_8,
  MR_Word STATE_VARIABLE_ContextMap_0_20,
  MR_Word * STATE_VARIABLE_ContextMap_21,
  MR_Word STATE_VARIABLE_ImportUseMap_0_22,
  MR_Word * STATE_VARIABLE_ImportUseMap_23);

static void MR_CALL 
parse_tree__comp_unit_interface__acc_int_includes_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_ContextMap_0_13,
  MR_Word * STATE_VARIABLE_ContextMap_14,
  MR_Word STATE_VARIABLE_IncludeMap_0_15,
  MR_Word * STATE_VARIABLE_IncludeMap_16);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_2(
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
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0(
  MR_Word AugMakeIntUnit_12,
  MR_Word IntImportUseMap_13,
  MR_Word IntExplicitFIMSpecs_14,
  MR_Word ImpExplicitFIMSpecs_15,
  MR_Word TypeCtorCheckedMap_16,
  MR_Word InstCtorCheckedMap_17,
  MR_Word ModeCtorCheckedMap_18,
  MR_Word IntTypeClasses_19,
  MR_Word IntInstances_20,
  MR_Word TypeCtorRepnMap_21,
  MR_Word * ParseTreeInt2_22);

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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0(
  MR_Word Globals_15,
  MR_Word AugMakeIntUnit_16,
  MR_Word * IntImportUseMap_17,
  MR_Word * IntExplicitFIMSpecs_18,
  MR_Word * ImpExplicitFIMSpecs_19,
  MR_Word * IntTypeCtorCheckedMap_20,
  MR_Word * IntInstCtorCheckedMap_21,
  MR_Word * IntModeCtorCheckedMap_22,
  MR_Word * IntTypeClasses_23,
  MR_Word * IntInstances_24,
  MR_Word * TypeCtorRepnMap_25,
  MR_Word * ParseTreeInt1_26,
  MR_Word STATE_VARIABLE_Specs_0_98,
  MR_Word * STATE_VARIABLE_Specs_99);

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
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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


static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[24][2];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[61][3];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][4];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[2][1];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[3][9];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[10][5];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[6][7];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[10][6];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[2][13];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[4][11];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][15];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[2][8];

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_13[1][10];




static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_1[24][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[5]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[6]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[4]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[3]))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[16]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[19]))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_2[61][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[9]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[4]))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[2])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_3[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_11[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[0])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_12[1])),
    ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 36 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[4])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 37 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[6])),
    ((MR_Box) (parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 39 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 40 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 41 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 42 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 43 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 44 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[5])),
    ((MR_Box) (parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 45 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[6])),
    ((MR_Box) (parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 46 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 47 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 48 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[7])),
    ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 49 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[8])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 50 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 51 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 52 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 53 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 55 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 56 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 57 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 58 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[9])),
    ((MR_Box) (parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 59 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 60 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[3])),
    ((MR_Box) (parse_tree__comp_unit_interface__restrict_type_ctor_checked_defn_for_int2_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_2[9]))),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[23])))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_5[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_6[10][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_7[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_8[10][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_9[2][13] = {
  /* row 0 */
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
  /* row 1 */
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_10[4][11] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
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
  /* row 3 */
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_11[1][15] = {
  /* row 0 */
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_12[2][8] = {
  /* row 0 */
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
  /* row 1 */
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

static /* final */ const MR_Box parse_tree__comp_unit_interface_scalar_common_13[1][10] = {
  /* row 0 */
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



static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_include_module_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__comp_unit_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__pti_maybe_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
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
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_name_ordered_maybe_unqual_symnames_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__enum_ordinal_ordered_maybe_unqual_symnames_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__functor_number_map_maybe_unqual_symnames_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_c_java_csharp_1maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  {
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__type_ctor_info_foreign_type_or_enum_0)
  }
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
  {
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__comp_unit_interface__parse_tree__prog_item__ti_c_java_csharp_1maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  {
    (MR_TypeInfo) (&parse_tree__comp_unit_interface__maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__field_types_non_sub_du_extras_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__parse_tree__prog_item__ti_c_java_csharp_1maybe__ti_maybe_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_non_sub_du_extras_0_0[1] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_0
};

static const MR_DuFunctorDescPtr parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_stag_ordered_non_sub_du_extras_0_1[1] = {
  &parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_functor_desc_non_sub_du_extras_0_1
};

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
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_name_ordered_non_sub_du_extras_0 },
  {     parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__du_ptag_ordered_non_sub_du_extras_0 },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) },
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
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__comp_unit_interface__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__generate_interface_int1__894__1_3_p_0(
  MR_Word HeadVar__1_144,
  MR_Word HeadVar__2_145,
  MR_Word * HeadVar__3_146)
{
  mercury__one_or_more_map__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (HeadVar__1_144)), HeadVar__2_145, HeadVar__3_146);
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_mode_ctor_checked_defn__772__1_2_p_0(
  MR_Word MaybeImpDefn_13,
  MR_Word HeadVar__2_27)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[8]), ((MR_Box) (MaybeImpDefn_13)), ((MR_Box) (HeadVar__2_27)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_inst_ctor_checked_defn__739__1_2_p_0(
  MR_Word MaybeImpDefn_13,
  MR_Word HeadVar__2_27)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[7]), ((MR_Box) (MaybeImpDefn_13)), ((MR_Box) (HeadVar__2_27)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____non_sub_du_extras_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_6;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_30, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[18]), &SubResult2_9, ((MR_Box) (Var_29)), ((MR_Box) (ArgY2_8)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[20]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY3_11)));
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[17]), HeadVar__1_1, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_21)));
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0(
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
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_foreign_lang_in_foreign_enum_3_p_0(
  MR_Word ForeignEnumInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_11,
  MR_Word * STATE_VARIABLE_Langs_12)
{
  {
    MR_Word Lang_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignEnumInfo_4, (MR_Integer) 0))) & (MR_Integer) 3);

    mercury__set__insert_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Lang_6)), STATE_VARIABLE_Langs_0_11, STATE_VARIABLE_Langs_12);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(
  MR_Word TypeDefnInfo_4,
  MR_Word STATE_VARIABLE_Langs_0_20,
  MR_Word * STATE_VARIABLE_Langs_21)
{
  {
    MR_Word TypeDefn_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_4, (MR_Integer) 2))));

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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Langs_21 = STATE_VARIABLE_Langs_0_20;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Langs_21 = STATE_VARIABLE_Langs_0_20;
            break;
          case (MR_Integer) 2:
            {
              MR_Word DetailsForeign_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 1))));
              MR_Word LangType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_12, (MR_Integer) 0))));
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
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(
  MR_Word Instance_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 2))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 5))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 6))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 7))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Instance_3, (MR_Integer) 8))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 6) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 7) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 8) = ((MR_Box) (Var_13));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_1_f_0(
  MR_Word TypeClass_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 2))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 5))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 6))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClass_3, (MR_Integer) 7))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 6) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 7) = ((MR_Box) (Var_12));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_mode_defn_abstract_1_f_0(
  MR_Word ModeDefn_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 1))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 3))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 4))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_3, (MR_Integer) 5))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_10));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_inst_defn_abstract_1_f_0(
  MR_Word InstDefn_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 0))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 1))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 2))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 4))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 5))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_3, (MR_Integer) 6))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 5) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 6) = ((MR_Box) (Var_11));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4)
{
  {
    MR_Word TypeDefn0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 2))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 0))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 3))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 4))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu0_6 = (MR_Word) ((MR_Word) (TypeDefn0_5));
          MR_Word DetailsDu_7;
          MR_Word TypeDefn_8;
          MR_Word MaybeCanonical_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 1))));
          MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 0))));
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_6, (MR_Integer) 2))));

          if ((MaybeCanonical_44 == (MR_Word) ((MR_Unsigned) 0U)))
            DetailsDu_7 = DetailsDu0_6;
          else
            {
              DetailsDu_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DetailsDu_7, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(0), DetailsDu_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
              MR_hl_field(MR_mktag(0), DetailsDu_7, 2) = ((MR_Box) (Var_50));
            }
          TypeDefn_8 = (MR_Word) ((MR_Word) (DetailsDu_7));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *ItemTypeDefn_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_8));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_1[22])))));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ItemTypeDefn_4 = ItemTypeDefn0_3;
            break;
          case (MR_Integer) 1:
            *ItemTypeDefn_4 = ItemTypeDefn0_3;
            break;
          case (MR_Integer) 2:
            {
              MR_Word DetailsForeign0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_5, (MR_Integer) 1))));
              MR_Word DetailsForeign_14;
              MR_Word TypeDefn_17;
              MR_Word MaybeCanonical0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_13, (MR_Integer) 1))));
              MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_13, (MR_Integer) 0))));
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_13, (MR_Integer) 2))));

              if ((MaybeCanonical0_56 == (MR_Word) ((MR_Unsigned) 0U)))
                DetailsForeign_14 = DetailsForeign0_13;
              else
                {
                  DetailsForeign_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), DetailsForeign_14, 0) = ((MR_Box) (Var_61));
                  MR_hl_field(MR_mktag(0), DetailsForeign_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
                  MR_hl_field(MR_mktag(0), DetailsForeign_14, 2) = ((MR_Box) (Var_62));
                }
              {
                TypeDefn_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TypeDefn_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), TypeDefn_17, 1) = ((MR_Box) (DetailsForeign_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *ItemTypeDefn_4 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_18));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_17));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
              }
            }
            break;
        }
        break;
    }
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
  {
    MR_Word StdDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeCtorCheckedDefn_6, (MR_Integer) 0))));
    MR_Word ModeDefnInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdDefn_9, (MR_Integer) 1))));
    MR_Word MaybeAbstractModeDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefnInfo_12, (MR_Integer) 2))));

    if ((MaybeAbstractModeDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaybeUnqual_22 = STATE_VARIABLE_MaybeUnqual_0_21;
      *STATE_VARIABLE_ModuleNames_24 = STATE_VARIABLE_ModuleNames_0_23;
    }
    else
    {
      MR_Word ModeDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_15, (MR_Integer) 0))));
      MR_Word Mode_20 = (MR_Word) (ModeDefn_19);

      if (((MR_tag((MR_Word) Mode_20)) == (MR_Integer) 0))
      {
        MR_Word InstA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_20, (MR_Integer) 0))));
        MR_Word InstB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode_20, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_MaybeUnqual_21_42;
        MR_Word STATE_VARIABLE_ModuleNames_22_43;

        parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(InstA_34, STATE_VARIABLE_MaybeUnqual_0_21, &STATE_VARIABLE_MaybeUnqual_21_42, STATE_VARIABLE_ModuleNames_0_23, &STATE_VARIABLE_ModuleNames_22_43);
        parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(InstB_35, STATE_VARIABLE_MaybeUnqual_21_42, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_22_43, STATE_VARIABLE_ModuleNames_24);
      }
      else
      {
        MR_Word SymName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_20, (MR_Integer) 0))));
        MR_Word ArgInsts_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode_20, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_MaybeUnqual_17_38;
        MR_Word STATE_VARIABLE_ModuleNames_18_39;

        if (((MR_tag((MR_Word) SymName_36)) == (MR_Integer) 1))
        {
          MR_Word ModuleName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_36, (MR_Integer) 0))));

          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_54)), STATE_VARIABLE_ModuleNames_0_23, &STATE_VARIABLE_ModuleNames_18_39);
          STATE_VARIABLE_MaybeUnqual_17_38 = STATE_VARIABLE_MaybeUnqual_0_21;
        }
        else
        {
          STATE_VARIABLE_MaybeUnqual_17_38 = (MR_Integer) 1;
          STATE_VARIABLE_ModuleNames_18_39 = STATE_VARIABLE_ModuleNames_0_23;
        }
        parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_37, STATE_VARIABLE_MaybeUnqual_17_38, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_18_39, STATE_VARIABLE_ModuleNames_24);
      }
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
  {
    MR_Word StdDefn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstCtorCheckedDefn_6, (MR_Integer) 0))));
    MR_Word InstDefnInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdDefn_9, (MR_Integer) 1))));
    MR_Word MaybeForTypeCtor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_12, (MR_Integer) 2))));
    MR_Word MaybeAbstractInstDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefnInfo_12, (MR_Integer) 3))));
    MR_Word STATE_VARIABLE_MaybeUnqual_29_29;
    MR_Word STATE_VARIABLE_ModuleNames_30_30;

    if ((MaybeForTypeCtor_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      STATE_VARIABLE_MaybeUnqual_29_29 = STATE_VARIABLE_MaybeUnqual_0_25;
      STATE_VARIABLE_ModuleNames_30_30 = STATE_VARIABLE_ModuleNames_0_27;
    }
    else
    {
      MR_Word TypeCtor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor_15, (MR_Integer) 0))));
      MR_Word TypeCtorSymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_20, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TypeCtorSymName_21)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_21, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_41)), STATE_VARIABLE_ModuleNames_0_27, &STATE_VARIABLE_ModuleNames_30_30);
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
      MR_Word InstDefn_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_16, (MR_Integer) 0))));
      MR_Word Inst_24 = (MR_Word) (InstDefn_23);

      parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_24, STATE_VARIABLE_MaybeUnqual_29_29, STATE_VARIABLE_MaybeUnqual_26, STATE_VARIABLE_ModuleNames_30_30, STATE_VARIABLE_ModuleNames_28);
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(
  MR_Word tscc_proc_1_input_1_Inst_6,
  MR_Word tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23)
{
  {
    MR_Word tscc_proc_2_input_1_InstName_6;
    MR_Word tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
    MR_Word tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
    MR_Word tscc_output_1_STATE_VARIABLE_MaybeUnqual_21;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleNames_23;

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
      MR_Word STATE_VARIABLE_MaybeUnqual_0_20 = tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
      MR_Word STATE_VARIABLE_MaybeUnqual_21;
      MR_Word STATE_VARIABLE_ModuleNames_0_22 = tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
      MR_Word STATE_VARIABLE_ModuleNames_23;

      switch (MR_tag((MR_Word) Inst_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Inst_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst_6, (MR_Integer) 0))));

            parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_12, STATE_VARIABLE_MaybeUnqual_0_20, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_23);
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
            STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

                parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(BoundInsts_14, STATE_VARIABLE_MaybeUnqual_0_20, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_23);
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgInst_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Inst_6 = ArgInst_16;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_0_20;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
                tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
                tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = InstName_17;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_20;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
                MR_Word ArgInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_MaybeUnqual_24_24;
                MR_Word STATE_VARIABLE_ModuleNames_25_25;

                if (((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 1))
                {
                  MR_Word ModuleName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_18, (MR_Integer) 0))));

                  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_50)), STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_25_25);
                  STATE_VARIABLE_MaybeUnqual_24_24 = STATE_VARIABLE_MaybeUnqual_0_20;
                }
                else
                {
                  STATE_VARIABLE_MaybeUnqual_24_24 = (MR_Integer) 1;
                  STATE_VARIABLE_ModuleNames_25_25 = STATE_VARIABLE_ModuleNames_0_22;
                }
                parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_19, STATE_VARIABLE_MaybeUnqual_24_24, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_25_25, &STATE_VARIABLE_ModuleNames_23);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_21;
      tscc_output_2_STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_23;
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
            MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_6, (MR_Integer) 0))));
            MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_6, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_MaybeUnqual_35_35;
            MR_Word STATE_VARIABLE_ModuleNames_36_36;

            if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
            {
              MR_Word ModuleName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 0))));

              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_68)), STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_36_36);
              STATE_VARIABLE_MaybeUnqual_35_35 = STATE_VARIABLE_MaybeUnqual_0_18;
            }
            else
            {
              STATE_VARIABLE_MaybeUnqual_35_35 = (MR_Integer) 1;
              STATE_VARIABLE_ModuleNames_36_36 = STATE_VARIABLE_ModuleNames_0_20;
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_10, STATE_VARIABLE_MaybeUnqual_35_35, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_36_36, &STATE_VARIABLE_ModuleNames_21);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgInstB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_6, (MR_Integer) 2))));
            MR_Word Inst_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_6, (MR_Integer) 1))));
            MR_Word Insts_134;
            MR_Word STATE_VARIABLE_MaybeUnqual_20_141;
            MR_Word STATE_VARIABLE_ModuleNames_21_142;
            MR_Word Inst_151;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;

            {
              Insts_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Insts_134, 0) = ((MR_Box) (ArgInstB_56));
              MR_hl_field(MR_mktag(1), Insts_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_133, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_141, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_142);
            Inst_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_134, (MR_Integer) 0))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_151;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_20_141;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_21_142;
            tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
            tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgInstB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_6, (MR_Integer) 1))));
            MR_Word Inst_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_6, (MR_Integer) 0))));
            MR_Word Insts_80;
            MR_Word STATE_VARIABLE_MaybeUnqual_20_87;
            MR_Word STATE_VARIABLE_ModuleNames_21_88;
            MR_Word Inst_97;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;

            {
              Insts_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Insts_80, 0) = ((MR_Box) (ArgInstB_14));
              MR_hl_field(MR_mktag(1), Insts_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_79, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_87, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_88);
            Inst_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_80, (MR_Integer) 0))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_97;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_20_87;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_21_88;
            tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
            tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgInstName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
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
                MR_Word ArgInstName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
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
                MR_Word ArgInstName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
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
                MR_Word ArgInstName_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
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
                MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 2))));

                parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_17, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word STATE_VARIABLE_MaybeUnqual_22_22;
                MR_Word STATE_VARIABLE_ModuleNames_23_23;
                MR_Word ArgInstName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 2))));
                MR_Word Type_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;

                parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_51, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_22_22, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_23_23);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_50;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_22_22;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_23_23;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_19;
      tscc_output_2_STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_21;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21 = tscc_output_1_STATE_VARIABLE_MaybeUnqual_21;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23 = tscc_output_2_STATE_VARIABLE_ModuleNames_23;
    return;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_in_inst_name_5_p_0(
  MR_Word tscc_proc_2_input_1_InstName_6,
  MR_Word tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21,
  MR_Word tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23)
{
  {
    MR_Word tscc_proc_1_input_1_Inst_6;
    MR_Word tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
    MR_Word tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
    MR_Word tscc_output_1_STATE_VARIABLE_MaybeUnqual_21;
    MR_Word tscc_output_2_STATE_VARIABLE_ModuleNames_23;

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
      MR_Word STATE_VARIABLE_MaybeUnqual_0_20 = tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
      MR_Word STATE_VARIABLE_MaybeUnqual_21;
      MR_Word STATE_VARIABLE_ModuleNames_0_22 = tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
      MR_Word STATE_VARIABLE_ModuleNames_23;

      switch (MR_tag((MR_Word) Inst_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Inst_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Inst_6, (MR_Integer) 0))));

            parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_12, STATE_VARIABLE_MaybeUnqual_0_20, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_23);
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
            STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BoundInsts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 3))));

                parse_tree__comp_unit_interface__accumulate_modules_in_bound_insts_5_p_0(BoundInsts_14, STATE_VARIABLE_MaybeUnqual_0_20, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_23);
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_0_20;
                STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_0_22;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgInst_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_1_input_1_Inst_6 = ArgInst_16;
                MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_0_20;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
                tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
                tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word InstName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6 = InstName_17;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_0_20;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 1))));
                MR_Word ArgInsts_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst_6, (MR_Integer) 2))));
                MR_Word STATE_VARIABLE_MaybeUnqual_24_24;
                MR_Word STATE_VARIABLE_ModuleNames_25_25;

                if (((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 1))
                {
                  MR_Word ModuleName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_18, (MR_Integer) 0))));

                  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_50)), STATE_VARIABLE_ModuleNames_0_22, &STATE_VARIABLE_ModuleNames_25_25);
                  STATE_VARIABLE_MaybeUnqual_24_24 = STATE_VARIABLE_MaybeUnqual_0_20;
                }
                else
                {
                  STATE_VARIABLE_MaybeUnqual_24_24 = (MR_Integer) 1;
                  STATE_VARIABLE_ModuleNames_25_25 = STATE_VARIABLE_ModuleNames_0_22;
                }
                parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_19, STATE_VARIABLE_MaybeUnqual_24_24, &STATE_VARIABLE_MaybeUnqual_21, STATE_VARIABLE_ModuleNames_25_25, &STATE_VARIABLE_ModuleNames_23);
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_21;
      tscc_output_2_STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_23;
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
            MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_6, (MR_Integer) 0))));
            MR_Word ArgInsts_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName_6, (MR_Integer) 1))));
            MR_Word STATE_VARIABLE_MaybeUnqual_35_35;
            MR_Word STATE_VARIABLE_ModuleNames_36_36;

            if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
            {
              MR_Word ModuleName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 0))));

              mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_68)), STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_36_36);
              STATE_VARIABLE_MaybeUnqual_35_35 = STATE_VARIABLE_MaybeUnqual_0_18;
            }
            else
            {
              STATE_VARIABLE_MaybeUnqual_35_35 = (MR_Integer) 1;
              STATE_VARIABLE_ModuleNames_36_36 = STATE_VARIABLE_ModuleNames_0_20;
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_10, STATE_VARIABLE_MaybeUnqual_35_35, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_36_36, &STATE_VARIABLE_ModuleNames_21);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgInstB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_6, (MR_Integer) 2))));
            MR_Word Inst_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstName_6, (MR_Integer) 1))));
            MR_Word Insts_134;
            MR_Word STATE_VARIABLE_MaybeUnqual_20_141;
            MR_Word STATE_VARIABLE_ModuleNames_21_142;
            MR_Word Inst_151;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;

            {
              Insts_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Insts_134, 0) = ((MR_Box) (ArgInstB_56));
              MR_hl_field(MR_mktag(1), Insts_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_133, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_141, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_142);
            Inst_151 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_134, (MR_Integer) 0))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_151;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_20_141;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_21_142;
            tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
            tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgInstB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_6, (MR_Integer) 1))));
            MR_Word Inst_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), InstName_6, (MR_Integer) 0))));
            MR_Word Insts_80;
            MR_Word STATE_VARIABLE_MaybeUnqual_20_87;
            MR_Word STATE_VARIABLE_ModuleNames_21_88;
            MR_Word Inst_97;
            MR_Word next_value_of_tscc_proc_1_input_1_Inst_6;
            MR_Word next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;

            {
              Insts_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Insts_80, 0) = ((MR_Box) (ArgInstB_14));
              MR_hl_field(MR_mktag(1), Insts_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__comp_unit_interface__accumulate_modules_in_inst_5_p_0(Inst_79, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_20_87, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21_88);
            Inst_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Insts_80, (MR_Integer) 0))));
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Inst_6 = Inst_97;
            next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = STATE_VARIABLE_MaybeUnqual_20_87;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = STATE_VARIABLE_ModuleNames_21_88;
            tscc_proc_1_input_1_Inst_6 = next_value_of_tscc_proc_1_input_1_Inst_6;
            tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20 = next_value_of_tscc_proc_1_input_2_STATE_VARIABLE_MaybeUnqual_0_20;
            tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_ModuleNames_0_22;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgInstName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
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
                MR_Word ArgInstName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
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
                MR_Word ArgInstName_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
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
                MR_Word ArgInstName_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
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
                MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 2))));

                parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_17, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_19, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_21);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word STATE_VARIABLE_MaybeUnqual_22_22;
                MR_Word STATE_VARIABLE_ModuleNames_23_23;
                MR_Word ArgInstName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 2))));
                MR_Word Type_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InstName_6, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_InstName_6;
                MR_Word next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                MR_Word next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;

                parse_tree__comp_unit_interface__accumulate_modules_in_type_5_p_0(Type_51, STATE_VARIABLE_MaybeUnqual_0_18, &STATE_VARIABLE_MaybeUnqual_22_22, STATE_VARIABLE_ModuleNames_0_20, &STATE_VARIABLE_ModuleNames_23_23);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_InstName_6 = ArgInstName_50;
                next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = STATE_VARIABLE_MaybeUnqual_22_22;
                next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = STATE_VARIABLE_ModuleNames_23_23;
                tscc_proc_2_input_1_InstName_6 = next_value_of_tscc_proc_2_input_1_InstName_6;
                tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_MaybeUnqual_0_18;
                tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_ModuleNames_0_20;
                goto top_of_proc_2;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_MaybeUnqual_21 = STATE_VARIABLE_MaybeUnqual_19;
      tscc_output_2_STATE_VARIABLE_ModuleNames_23 = STATE_VARIABLE_ModuleNames_21;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_MaybeUnqual_21 = tscc_output_1_STATE_VARIABLE_MaybeUnqual_21;
    *tscc_output_ptr_2_STATE_VARIABLE_ModuleNames_23 = tscc_output_2_STATE_VARIABLE_ModuleNames_23;
    return;
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
      MR_Word Inst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Insts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
      MR_Word BoundInst_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word BoundInsts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word ConsId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_12, (MR_Integer) 0))));
      MR_Word ArgInsts_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_22_40;
      MR_Word STATE_VARIABLE_ModuleNames_23_41;
      MR_Word SymName_33;
      MR_Word TypeCtor_35;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      succeeded = ((((MR_tag((MR_Word) ConsId_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_31, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        SymName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_31, (MR_Integer) 1))));
        TypeCtor_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_31, (MR_Integer) 3))));
        {
          MR_Word TypeCtorSymName_36;
          MR_Word STATE_VARIABLE_MaybeUnqual_20_38;
          MR_Word STATE_VARIABLE_ModuleNames_21_39;

          if (((MR_tag((MR_Word) SymName_33)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_33, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_52)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_21_39);
            STATE_VARIABLE_MaybeUnqual_20_38 = STATE_VARIABLE_MaybeUnqual_0_2;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_20_38 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_21_39 = STATE_VARIABLE_ModuleNames_0_4;
          }
          TypeCtorSymName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_35, (MR_Integer) 0))));
          if (((MR_tag((MR_Word) TypeCtorSymName_36)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_36, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_65)), STATE_VARIABLE_ModuleNames_21_39, &STATE_VARIABLE_ModuleNames_23_41);
            STATE_VARIABLE_MaybeUnqual_22_40 = STATE_VARIABLE_MaybeUnqual_20_38;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_22_40 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_23_41 = STATE_VARIABLE_ModuleNames_21_39;
          }
        }
      }
      else
      {
        STATE_VARIABLE_ModuleNames_23_41 = STATE_VARIABLE_ModuleNames_0_4;
        STATE_VARIABLE_MaybeUnqual_22_40 = STATE_VARIABLE_MaybeUnqual_0_2;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_insts_5_p_0(ArgInsts_32, STATE_VARIABLE_MaybeUnqual_22_40, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_23_41, &STATE_VARIABLE_ModuleNames_21_21);
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
  {
    MR_Word TypeDefn0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_9, (MR_Integer) 2))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_9, (MR_Integer) 0))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_9, (MR_Integer) 1))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_9, (MR_Integer) 3))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_9, (MR_Integer) 4))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo0_9, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeDefn0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu0_15 = (MR_Word) ((MR_Word) (TypeDefn0_14));
          MR_Word DetailsDu_16;
          MR_Word TypeDefn_17;
          MR_Word MaybeCanonical_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_15, (MR_Integer) 1))));
          MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_15, (MR_Integer) 0))));
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_15, (MR_Integer) 2))));

          if ((MaybeCanonical_62 == (MR_Word) ((MR_Unsigned) 0U)))
            DetailsDu_16 = DetailsDu0_15;
          else
            {
              DetailsDu_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DetailsDu_16, 0) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(0), DetailsDu_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
              MR_hl_field(MR_mktag(0), DetailsDu_16, 2) = ((MR_Box) (Var_68));
            }
          TypeDefn_17 = (MR_Word) ((MR_Word) (DetailsDu_16));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *TypeDefnInfo_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_17));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_45));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsEqv0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_14, (MR_Integer) 1))));
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
              MR_Word DetailsForeign0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_14, (MR_Integer) 1))));
              MR_Word DetailsForeign_22;
              MR_Word ForeignType_23;
              MR_Word Lang_26;
              MR_Word TypeDefn_40;
              MR_Word MaybeCanonical0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_21, (MR_Integer) 1))));
              MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_21, (MR_Integer) 0))));
              MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_21, (MR_Integer) 2))));

              if ((MaybeCanonical0_74 == (MR_Word) ((MR_Unsigned) 0U)))
                DetailsForeign_22 = DetailsForeign0_21;
              else
                {
                  DetailsForeign_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), DetailsForeign_22, 0) = ((MR_Box) (Var_79));
                  MR_hl_field(MR_mktag(0), DetailsForeign_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
                  MR_hl_field(MR_mktag(0), DetailsForeign_22, 2) = ((MR_Box) (Var_80));
                }
              {
                TypeDefn_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), TypeDefn_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), TypeDefn_40, 1) = ((MR_Box) (DetailsForeign_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *TypeDefnInfo_10 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeDefn_40));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_43));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_44));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_45));
              }
              ForeignType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_22, (MR_Integer) 0))));
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
  {
    MR_Word TypeCtorCheckedDefn_27;

    if (((MR_tag((MR_Word) TypeCtorCheckedDefn0_14)) == (MR_Integer) 0))
    {
      MR_Word SrcDefnsSolver0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorCheckedDefn0_14, (MR_Integer) 1))));
      MR_Word SolverTypeDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorCheckedDefn0_14, (MR_Integer) 0))));
      MR_Word MaybeIntDefn0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsSolver0_21, (MR_Integer) 0))));
      MR_Word MaybeImpDefn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsSolver0_21, (MR_Integer) 1))));
      MR_Word MaybeIntDefn_25;
      MR_Word SrcDefnsSolver_26;
      MR_Box conv6_STATE_VARIABLE_MaybeUnqual_39;
      MR_Box conv5_STATE_VARIABLE_ModuleNames_41;
      MR_Box conv4_STATE_VARIABLE_IntImplicitFIMLangs_43;

      mercury__maybe__map_fold3_maybe_9_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[59]), MaybeIntDefn0_23, &MaybeIntDefn_25, ((MR_Box) (STATE_VARIABLE_MaybeUnqual_0_38)), &conv6_STATE_VARIABLE_MaybeUnqual_39, ((MR_Box) (STATE_VARIABLE_ModuleNames_0_40)), &conv5_STATE_VARIABLE_ModuleNames_41, ((MR_Box) (STATE_VARIABLE_IntImplicitFIMLangs_0_42)), &conv4_STATE_VARIABLE_IntImplicitFIMLangs_43);
      *STATE_VARIABLE_MaybeUnqual_39 = ((MR_Word) (conv6_STATE_VARIABLE_MaybeUnqual_39));
      *STATE_VARIABLE_ModuleNames_41 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleNames_41));
      *STATE_VARIABLE_IntImplicitFIMLangs_43 = ((MR_Word) (conv4_STATE_VARIABLE_IntImplicitFIMLangs_43));
      {
        SrcDefnsSolver_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SrcDefnsSolver_26, 0) = ((MR_Box) (MaybeIntDefn_25));
        MR_hl_field(MR_mktag(0), SrcDefnsSolver_26, 1) = ((MR_Box) (MaybeImpDefn_24));
      }
      {
        TypeCtorCheckedDefn_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtorCheckedDefn_27, 0) = ((MR_Box) (SolverTypeDefn_22));
        MR_hl_field(MR_mktag(0), TypeCtorCheckedDefn_27, 1) = ((MR_Box) (SrcDefnsSolver_26));
      }
      *STATE_VARIABLE_ImpImplicitFIMLangs_45 = STATE_VARIABLE_ImpImplicitFIMLangs_0_44;
    }
    else
    {
      MR_Word SrcDefnsStd0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn0_14, (MR_Integer) 1))));
      MR_Word StdTypeDefn_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn0_14, (MR_Integer) 0))));
      MR_Word IntTypeDefns0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsStd0_29, (MR_Integer) 0))));
      MR_Word ImpTypeDefns_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsStd0_29, (MR_Integer) 1))));
      MR_Word IntTypeDefns_34;
      MR_Word SrcDefnsStd_35;
      MR_Box conv13_STATE_VARIABLE_MaybeUnqual_39;
      MR_Box conv12_STATE_VARIABLE_ModuleNames_41;
      MR_Box conv11_STATE_VARIABLE_IntImplicitFIMLangs_43;

      mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[60]), IntTypeDefns0_31, &IntTypeDefns_34, ((MR_Box) (STATE_VARIABLE_MaybeUnqual_0_38)), &conv13_STATE_VARIABLE_MaybeUnqual_39, ((MR_Box) (STATE_VARIABLE_ModuleNames_0_40)), &conv12_STATE_VARIABLE_ModuleNames_41, ((MR_Box) (STATE_VARIABLE_IntImplicitFIMLangs_0_42)), &conv11_STATE_VARIABLE_IntImplicitFIMLangs_43);
      *STATE_VARIABLE_MaybeUnqual_39 = ((MR_Word) (conv13_STATE_VARIABLE_MaybeUnqual_39));
      *STATE_VARIABLE_ModuleNames_41 = ((MR_Word) (conv12_STATE_VARIABLE_ModuleNames_41));
      *STATE_VARIABLE_IntImplicitFIMLangs_43 = ((MR_Word) (conv11_STATE_VARIABLE_IntImplicitFIMLangs_43));
      parse_tree__comp_unit_interface__get_int2_langs_from_int1_imp_types_3_p_0(ImpTypeDefns_32, STATE_VARIABLE_ImpImplicitFIMLangs_0_44, STATE_VARIABLE_ImpImplicitFIMLangs_45);
      {
        SrcDefnsStd_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SrcDefnsStd_35, 0) = ((MR_Box) (IntTypeDefns_34));
        MR_hl_field(MR_mktag(0), SrcDefnsStd_35, 1) = ((MR_Box) (ImpTypeDefns_32));
        MR_hl_field(MR_mktag(0), SrcDefnsStd_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TypeCtorCheckedDefn_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_27, 0) = ((MR_Box) (StdTypeDefn_30));
        MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_27, 1) = ((MR_Box) (SrcDefnsStd_35));
      }
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_13)), ((MR_Box) (TypeCtorCheckedDefn_27)), STATE_VARIABLE_ShortTypeCtorCheckedMap_0_36, STATE_VARIABLE_ShortTypeCtorCheckedMap_37);
  }
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
      MR_Word ImpTypeDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImpTypeDefns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpTypeDefn_7, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_18_18;
      MR_Word DetailsForeign_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ImpImplicitFIMLangs_0_2;

      succeeded = ((((MR_tag((MR_Word) TypeDefn_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        DetailsForeign_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_10, (MR_Integer) 1))));
        {
          MR_Word ForeignType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_11, (MR_Integer) 0))));
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
parse_tree__comp_unit_interface__make_imports_into_uses_int_only_maybe_implicit_6_p_0(
  MR_Word UnqualSymNames_7,
  MR_Word UsedModuleNames_8,
  MR_Word ModuleName_9,
  MR_Word ImportUse0_10,
  MR_Word STATE_VARIABLE_ShortImportUseMap_0_20,
  MR_Word * STATE_VARIABLE_ShortImportUseMap_21)
{
  {
    MR_bool succeeded = (UnqualSymNames_7 == (MR_Integer) 0);
    MR_Word TypeCtorInfo_39_39;

    if (succeeded)
    {
      TypeCtorInfo_39_39 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
      succeeded = mercury__set__contains_2_p_0(TypeCtorInfo_39_39, UsedModuleNames_8, ((MR_Box) (ModuleName_9)));
      succeeded = !(succeeded);
    }
    if (succeeded)
      *STATE_VARIABLE_ShortImportUseMap_21 = STATE_VARIABLE_ShortImportUseMap_0_20;
    else
    if (((MR_tag((MR_Word) ImportUse0_10)) == (MR_Integer) 0))
    {
      MR_Word Explicit0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportUse0_10, (MR_Integer) 0))));
      MR_Word Explicit_13;

      switch (MR_tag((MR_Word) Explicit0_12)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word IntContext_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit0_12, (MR_Integer) 0))));

            {
              Explicit_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Explicit_13, 0) = ((MR_Box) (IntContext_48));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            Explicit_13 = Explicit0_12;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit0_12, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit0_12, (MR_Integer) 1))));

                {
                  Explicit_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Explicit_13, 0) = ((MR_Box) (IntContext_55));
                }
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        MR_Word ImportUse_14;

        {
          ImportUse_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ImportUse_14, 0) = ((MR_Box) (Explicit_13));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (ImportUse_14)), STATE_VARIABLE_ShortImportUseMap_0_20, STATE_VARIABLE_ShortImportUseMap_21);
      }
      else
        *STATE_VARIABLE_ShortImportUseMap_21 = STATE_VARIABLE_ShortImportUseMap_0_20;
    }
    else
    {
      MR_Word Implicit0_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ImportUse0_10, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word MaybeExplicit0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportUse0_10, (MR_Integer) 1))));
      MR_Word MaybeExplicit_18;
      MR_Word Explicit1_17;
      MR_Word Explicit0_25;

      succeeded = (MaybeExplicit0_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Explicit0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit0_16, (MR_Integer) 0))));
        switch (MR_tag((MR_Word) Explicit0_25)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word IntContext_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit0_25, (MR_Integer) 0))));

              {
                Explicit1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Explicit1_17, 0) = ((MR_Box) (IntContext_58));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              Explicit1_17 = Explicit0_25;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit0_25, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntContext_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit0_25, (MR_Integer) 1))));

                  {
                    Explicit1_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Explicit1_17, 0) = ((MR_Box) (IntContext_65));
                  }
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
      }
      if (succeeded)
        {
          MaybeExplicit_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeExplicit_18, 0) = ((MR_Box) (Explicit1_17));
        }
      else
        MaybeExplicit_18 = (MR_Word) ((MR_Unsigned) 0U);
      switch (Implicit0_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          if ((MaybeExplicit_18 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_ShortImportUseMap_21 = STATE_VARIABLE_ShortImportUseMap_0_20;
          else
          {
            MR_Word Explicit_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit_18, (MR_Integer) 0))));
            MR_Word ImportUse_29;

            {
              ImportUse_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ImportUse_29, 0) = ((MR_Box) (Explicit_28));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (ImportUse_29)), STATE_VARIABLE_ShortImportUseMap_0_20, STATE_VARIABLE_ShortImportUseMap_21);
          }
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word ImportUse_27;

            {
              ImportUse_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ImportUse_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(1), ImportUse_27, 1) = ((MR_Box) (MaybeExplicit_18));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_9)), ((MR_Box) (ImportUse_27)), STATE_VARIABLE_ShortImportUseMap_0_20, STATE_VARIABLE_ShortImportUseMap_21);
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_only_int_include_4_p_0(
  MR_Word ModuleName_5,
  MR_Word InclInfo_6,
  MR_Word STATE_VARIABLE_IntInclMap_0_10,
  MR_Word * STATE_VARIABLE_IntInclMap_11)
{
  {
    MR_Word Section_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InclInfo_6, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Section_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_IntInclMap_11 = STATE_VARIABLE_IntInclMap_0_10;
        break;
      case (MR_Integer) 0:
        mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (InclInfo_6)), STATE_VARIABLE_IntInclMap_0_10, STATE_VARIABLE_IntInclMap_11);
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(
  MR_Word NeededLangs_3,
  MR_Word FIMSpec_4)
{
  {
    MR_bool succeeded;
    MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FIMSpec_4, (MR_Integer) 0))) & (MR_Integer) 3);

    succeeded = mercury__set__contains_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), NeededLangs_3, ((MR_Box) (Lang_5)));
    return succeeded;
  }
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
    MR_Word SolverTypeDefn0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorCheckedDefn0_12, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SolverTypeDefn0_35)) == (MR_Integer) 0))
    {
      MR_Word AbstractSolverStatus_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SolverTypeDefn0_35, (MR_Integer) 0))) & (MR_Integer) 1);

      switch (AbstractSolverStatus_37) {
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
      MR_Word MaybeAbstractDefn_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverTypeDefn0_35, (MR_Integer) 0))));

      if ((MaybeAbstractDefn_39 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_TypeCtorCheckedMap_20 = STATE_VARIABLE_TypeCtorCheckedMap_0_19;
      else
      {
        MR_Word AbstractDefn_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractDefn_39, (MR_Integer) 0))));
        MR_Word SolverTypeDefn_42;
        MR_Word SrcDefnsSolver_43;
        MR_Word TypeCtorCheckedDefn_44;
        MR_Word Var_46;
        MR_Word Var_47;

        {
          SolverTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverTypeDefn_42, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), SolverTypeDefn_42, 1) = ((MR_Box) (AbstractDefn_41));
        }
        Var_47 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_41);
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        }
        {
          SrcDefnsSolver_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefnsSolver_43, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), SrcDefnsSolver_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TypeCtorCheckedDefn_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorCheckedDefn_44, 0) = ((MR_Box) (SolverTypeDefn_42));
          MR_hl_field(MR_mktag(0), TypeCtorCheckedDefn_44, 1) = ((MR_Box) (SrcDefnsSolver_43));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_44)), STATE_VARIABLE_TypeCtorCheckedMap_0_19, STATE_VARIABLE_TypeCtorCheckedMap_20);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv18_STATE_VARIABLE_Langs_21;

    parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_Langs_21);
    *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_Langs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_STATE_VARIABLE_Langs_21;

    parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_Langs_21);
    *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_Langs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_Langs_21;

    parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_Langs_21);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_Langs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Langs_21;

    parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Langs_21);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Langs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Langs_21;

    parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Langs_21);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Langs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Langs_21;

    parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Langs_21);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Langs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Langs_21;

    parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Langs_21);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Langs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Langs_21;

    parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Langs_21);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Langs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Langs_21;

    parse_tree__comp_unit_interface__record_foreign_lang_in_type_defn_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Langs_21);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Langs_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_std_imp_details_for_int1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Langs_12;

    parse_tree__comp_unit_interface__record_foreign_lang_in_foreign_enum_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Langs_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Langs_12));
  }
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
  {
    MR_bool succeeded;
    MR_Word StdTypeDefn0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn0_12, (MR_Integer) 0))));
    MR_Word SrcDefnsStd0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn0_12, (MR_Integer) 1))));
    MR_Word SrcIntDefns0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsStd0_16, (MR_Integer) 0))));
    MR_Word SrcImpDefns0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsStd0_16, (MR_Integer) 1))));
    MR_Word SrcImpForeignEnums_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefnsStd0_16, (MR_Integer) 2))));
    MR_Word STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
    MR_Box conv1_STATE_VARIABLE_ImpImplicitFIMLangs_55_55;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[49]), SrcImpForeignEnums_19, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_0_52)), &conv1_STATE_VARIABLE_ImpImplicitFIMLangs_55_55);
    STATE_VARIABLE_ImpImplicitFIMLangs_55_55 = ((MR_Word) (conv1_STATE_VARIABLE_ImpImplicitFIMLangs_55_55));
    switch (MR_tag((MR_Word) StdTypeDefn0_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdTypeDefn0_15, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word EqvDefn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdTypeDefn0_15, (MR_Integer) 1))));

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
                  MR_Word Var_134;
                  MR_Word Var_135;
                  MR_Word Var_347 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_21, (MR_Integer) 0))));
                  MR_Word Var_348 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_21, (MR_Integer) 1))));
                  MR_Word Var_350 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_21, (MR_Integer) 3))));
                  MR_Word Var_351 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_21, (MR_Integer) 4))));
                  MR_Word Var_352 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_21, (MR_Integer) 5))));

                  {
                    AbstractDefn_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), AbstractDefn_23, 0) = ((MR_Box) (Var_347));
                    MR_hl_field(MR_mktag(0), AbstractDefn_23, 1) = ((MR_Box) (Var_348));
                    MR_hl_field(MR_mktag(0), AbstractDefn_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), AbstractDefn_23, 3) = ((MR_Box) (Var_350));
                    MR_hl_field(MR_mktag(0), AbstractDefn_23, 4) = ((MR_Box) (Var_351));
                    MR_hl_field(MR_mktag(0), AbstractDefn_23, 5) = ((MR_Box) (Var_352));
                  }
                  {
                    StdTypeDefn_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_25, 2) = ((MR_Box) (AbstractDefn_23));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_25, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]));
                  }
                  Var_135 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_23);
                  {
                    Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
                    MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    SrcDefnsStd_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SrcDefnsStd_26, 0) = ((MR_Box) (Var_134));
                    MR_hl_field(MR_mktag(0), SrcDefnsStd_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), SrcDefnsStd_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    TypeCtorCheckedDefn_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_27, 0) = ((MR_Box) (StdTypeDefn_25));
                    MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_27, 1) = ((MR_Box) (SrcDefnsStd_26));
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
          MR_Word SubStatus_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StdTypeDefn0_15, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word SubDefn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdTypeDefn0_15, (MR_Integer) 1))));

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
                  MR_Word Var_121;

                  Var_121 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_142);
                  {
                    SrcImpDefns_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SrcImpDefns_30, 0) = ((MR_Box) (Var_121));
                    MR_hl_field(MR_mktag(1), SrcImpDefns_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                  SrcImpDefns_30 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  StdTypeDefn_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), StdTypeDefn_144, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), StdTypeDefn_144, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), StdTypeDefn_144, 2) = ((MR_Box) (AbstractDefn_142));
                  MR_hl_field(MR_mktag(3), StdTypeDefn_144, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]));
                }
                {
                  SrcDefnsStd_145 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SrcDefnsStd_145, 0) = ((MR_Box) (SrcIntDefns0_17));
                  MR_hl_field(MR_mktag(0), SrcDefnsStd_145, 1) = ((MR_Box) (SrcImpDefns_30));
                  MR_hl_field(MR_mktag(0), SrcDefnsStd_145, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  TypeCtorCheckedDefn_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_146, 0) = ((MR_Box) (StdTypeDefn_144));
                  MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_146, 1) = ((MR_Box) (SrcDefnsStd_145));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_146)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
              }
              break;
            case (MR_Integer) 2:
              {
                succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
                if (succeeded)
                {
                  MR_Word Var_116;
                  MR_Word AbstractDefn_148;
                  MR_Word StdTypeDefn_150;
                  MR_Word SrcDefnsStd_151;
                  MR_Word TypeCtorCheckedDefn_152;
                  MR_Word SrcImpDefns_153;

                  AbstractDefn_148 = parse_tree__comp_unit_interface__make_subtype_defn_abstract_1_f_0(SubDefn_29);
                  {
                    StdTypeDefn_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_150, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_150, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_150, 2) = ((MR_Box) (AbstractDefn_148));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_150, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]));
                  }
                  Var_116 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_148);
                  {
                    SrcImpDefns_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SrcImpDefns_153, 0) = ((MR_Box) (Var_116));
                    MR_hl_field(MR_mktag(1), SrcImpDefns_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    SrcDefnsStd_151 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SrcDefnsStd_151, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), SrcDefnsStd_151, 1) = ((MR_Box) (SrcImpDefns_153));
                    MR_hl_field(MR_mktag(0), SrcDefnsStd_151, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    TypeCtorCheckedDefn_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_152, 0) = ((MR_Box) (StdTypeDefn_150));
                    MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_152, 1) = ((MR_Box) (SrcDefnsStd_151));
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
          MR_Word DuStatus_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StdTypeDefn0_15, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word DuDefn_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdTypeDefn0_15, (MR_Integer) 1))));
          MR_String HeadCtor0_33 = ((MR_String) ((MR_hl_field(MR_mktag(2), StdTypeDefn0_15, (MR_Integer) 2))));
          MR_Word TailCtors0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdTypeDefn0_15, (MR_Integer) 3))));
          MR_Word MaybeCJCsDefnOrEnum0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdTypeDefn0_15, (MR_Integer) 4))));
          MR_Word Extras0_36;

          {
            Extras0_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Extras0_36, 0) = ((MR_Box) (HeadCtor0_33));
            MR_hl_field(MR_mktag(0), Extras0_36, 1) = ((MR_Box) (TailCtors0_34));
            MR_hl_field(MR_mktag(0), Extras0_36, 2) = ((MR_Box) (MaybeCJCsDefnOrEnum0_35));
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
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_42, (MR_Integer) 0))));
                  MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_42, (MR_Integer) 1))));
                  MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_42, (MR_Integer) 2))));

                  succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (Var_86 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
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
                      MR_Word Var_90;
                      MR_String HeadCtor_202 = ((MR_String) ((MR_hl_field(MR_mktag(0), Extras0_36, (MR_Integer) 0))));
                      MR_Word TailCtors_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Extras0_36, (MR_Integer) 1))));
                      MR_Word MaybeCJCsDefnOrEnum_204;

                      parse_tree__comp_unit_interface__wrap_cjcs_foreign_type_no_enums_2_p_0(MaybeCJCsDefn1_42, &MaybeCJCsDefnOrEnum_204);
                      {
                        StdTypeDefn_220 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_220, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_31));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_220, 1) = ((MR_Box) (DuDefn_32));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_220, 2) = ((MR_Box) (HeadCtor_202));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_220, 3) = ((MR_Box) (TailCtors_203));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_220, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_204));
                      }
                      Var_90 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_32);
                      {
                        SrcImpDefns_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), SrcImpDefns_223, 0) = ((MR_Box) (Var_90));
                        MR_hl_field(MR_mktag(1), SrcImpDefns_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    else
                    {
                      MR_Word DetailsAbs_46;
                      MR_Word AbstractDefn_212 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractDefn_43, (MR_Integer) 0))));

                      {
                        StdTypeDefn_220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_220, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_220, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_220, 2) = ((MR_Box) (AbstractDefn_212));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_220, 3) = ((MR_Box) (MaybeCJCsDefn1_42));
                      }
                      DetailsAbs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefn_212, (MR_Integer) 2))));
                      succeeded = (DetailsAbs_46 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                        SrcImpDefns_223 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_Word Var_88;

                        Var_88 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_212);
                        {
                          SrcImpDefns_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), SrcImpDefns_223, 0) = ((MR_Box) (Var_88));
                          MR_hl_field(MR_mktag(1), SrcImpDefns_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                    }
                    {
                      SrcDefnsStd_221 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_221, 0) = ((MR_Box) (SrcIntDefns0_17));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_221, 1) = ((MR_Box) (SrcImpDefns_223));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_221, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      TypeCtorCheckedDefn_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_222, 0) = ((MR_Box) (StdTypeDefn_220));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_222, 1) = ((MR_Box) (SrcDefnsStd_221));
                    }
                    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_222)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                  }
                  else
                  {
                    MR_String HeadCtor_227 = ((MR_String) ((MR_hl_field(MR_mktag(0), Extras0_36, (MR_Integer) 0))));
                    MR_Word TailCtors_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Extras0_36, (MR_Integer) 1))));
                    MR_Word MaybeCJCsDefnOrEnum_229;
                    MR_Word StdTypeDefn_233;
                    MR_Word SrcDefnsStd_234;
                    MR_Word TypeCtorCheckedDefn_235;
                    MR_Box conv9_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                    parse_tree__comp_unit_interface__wrap_cjcs_foreign_type_no_enums_2_p_0(MaybeCJCsDefn1_42, &MaybeCJCsDefnOrEnum_229);
                    {
                      StdTypeDefn_233 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), StdTypeDefn_233, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_31));
                      MR_hl_field(MR_mktag(2), StdTypeDefn_233, 1) = ((MR_Box) (DuDefn_32));
                      MR_hl_field(MR_mktag(2), StdTypeDefn_233, 2) = ((MR_Box) (HeadCtor_227));
                      MR_hl_field(MR_mktag(2), StdTypeDefn_233, 3) = ((MR_Box) (TailCtors_228));
                      MR_hl_field(MR_mktag(2), StdTypeDefn_233, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_229));
                    }
                    {
                      SrcDefnsStd_234 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_234, 0) = ((MR_Box) (SrcIntDefns0_17));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_234, 1) = ((MR_Box) (SrcImpDefns0_18));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_234, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[53]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv9_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv9_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                    {
                      TypeCtorCheckedDefn_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_235, 0) = ((MR_Box) (StdTypeDefn_233));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_235, 1) = ((MR_Box) (SrcDefnsStd_234));
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
                    MR_Word Var_99;
                    MR_Word Var_358 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_32, (MR_Integer) 0))));
                    MR_Word Var_359 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_32, (MR_Integer) 1))));
                    MR_Word Var_361 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_32, (MR_Integer) 3))));
                    MR_Word Var_362 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_32, (MR_Integer) 4))));
                    MR_Word Var_363 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_32, (MR_Integer) 5))));

                    {
                      AbstractDefn_249 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), AbstractDefn_249, 0) = ((MR_Box) (Var_358));
                      MR_hl_field(MR_mktag(0), AbstractDefn_249, 1) = ((MR_Box) (Var_359));
                      MR_hl_field(MR_mktag(0), AbstractDefn_249, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), AbstractDefn_249, 3) = ((MR_Box) (Var_361));
                      MR_hl_field(MR_mktag(0), AbstractDefn_249, 4) = ((MR_Box) (Var_362));
                      MR_hl_field(MR_mktag(0), AbstractDefn_249, 5) = ((MR_Box) (Var_363));
                    }
                    Var_99 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_32);
                    {
                      SrcImpDefns_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SrcImpDefns_254, 0) = ((MR_Box) (Var_99));
                      MR_hl_field(MR_mktag(1), SrcImpDefns_254, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  else
                  {
                    AbstractDefn_249 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractDefn_255, (MR_Integer) 0))));
                    SrcImpDefns_254 = (MR_Word) ((MR_Unsigned) 0U);
                  }
                  {
                    StdTypeDefn_251 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_251, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_251, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_251, 2) = ((MR_Box) (AbstractDefn_249));
                    MR_hl_field(MR_mktag(3), StdTypeDefn_251, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]));
                  }
                  {
                    SrcDefnsStd_252 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SrcDefnsStd_252, 0) = ((MR_Box) (SrcIntDefns0_17));
                    MR_hl_field(MR_mktag(0), SrcDefnsStd_252, 1) = ((MR_Box) (SrcImpDefns_254));
                    MR_hl_field(MR_mktag(0), SrcDefnsStd_252, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    TypeCtorCheckedDefn_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_253, 0) = ((MR_Box) (StdTypeDefn_251));
                    MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_253, 1) = ((MR_Box) (SrcDefnsStd_252));
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
                  MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_309, (MR_Integer) 0))));
                  MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_309, (MR_Integer) 1))));
                  MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_309, (MR_Integer) 2))));

                  succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                      succeeded = (Var_73 == (MR_Word) ((MR_Unsigned) 0U));
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
                      MR_Word Var_76;

                      StdTypeDefn_282 = StdTypeDefn0_15;
                      Var_76 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_32);
                      {
                        SrcImpDefns_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), SrcImpDefns_285, 0) = ((MR_Box) (Var_76));
                        MR_hl_field(MR_mktag(1), SrcImpDefns_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    else
                    {
                      MR_Word Var_74;
                      MR_Word AbstractDefn_277 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractDefn_286, (MR_Integer) 0))));

                      {
                        StdTypeDefn_282 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_282, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_282, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_282, 2) = ((MR_Box) (AbstractDefn_277));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_282, 3) = ((MR_Box) (MaybeCJCsDefn1_309));
                      }
                      Var_74 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_277);
                      {
                        SrcImpDefns_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), SrcImpDefns_285, 0) = ((MR_Box) (Var_74));
                        MR_hl_field(MR_mktag(1), SrcImpDefns_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    {
                      SrcDefnsStd_283 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_283, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_283, 1) = ((MR_Box) (SrcImpDefns_285));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_283, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      TypeCtorCheckedDefn_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_284, 0) = ((MR_Box) (StdTypeDefn_282));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_284, 1) = ((MR_Box) (SrcDefnsStd_283));
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
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_287, 0) = ((MR_Box) (SrcIntDefns0_17));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_287, 1) = ((MR_Box) (SrcImpDefns0_18));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_287, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[54]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv11_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                    *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv11_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                    {
                      TypeCtorCheckedDefn_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_288, 0) = ((MR_Box) (StdTypeDefn0_15));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_288, 1) = ((MR_Box) (SrcDefnsStd_287));
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

                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[55]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv13_STATE_VARIABLE_ImpImplicitFIMLangs_53);
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
                      MR_String HeadCtor_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Extras_38, (MR_Integer) 0))));
                      MR_Word TailCtors_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Extras_38, (MR_Integer) 1))));
                      MR_Word MaybeCJCsDefnOrEnum_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Extras_38, (MR_Integer) 2))));

                      {
                        StdTypeDefn_183 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_183, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_31));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_183, 1) = ((MR_Box) (DuDefn_32));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_183, 2) = ((MR_Box) (HeadCtor_39));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_183, 3) = ((MR_Box) (TailCtors_40));
                        MR_hl_field(MR_mktag(2), StdTypeDefn_183, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_41));
                      }
                    }
                    else
                    {
                      MR_Word MaybeCJCsDefn_180 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Extras_38, (MR_Integer) 0))));

                      {
                        StdTypeDefn_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_183, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_183, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_31));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_183, 2) = ((MR_Box) (DuDefn_32));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_183, 3) = ((MR_Box) (MaybeCJCsDefn_180));
                      }
                    }
                    {
                      SrcDefnsStd_184 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_184, 0) = ((MR_Box) (SrcIntDefns0_17));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_184, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), SrcDefnsStd_184, 2) = ((MR_Box) (SrcImpForeignEnums_19));
                    }
                    {
                      TypeCtorCheckedDefn_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_185, 0) = ((MR_Box) (StdTypeDefn_183));
                      MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_185, 1) = ((MR_Box) (SrcDefnsStd_184));
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), StdTypeDefn0_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MaybeCJCsDefn0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdTypeDefn0_15, (MR_Integer) 3))));
              MR_Word DuStatus_1100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdTypeDefn0_15, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word DuDefn_1101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdTypeDefn0_15, (MR_Integer) 2))));
              MR_Word Extras0_1102;

              {
                Extras0_1102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Extras0_1102, 0) = ((MR_Box) (MaybeCJCsDefn0_37));
              }
              switch (DuStatus_1100) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeCJCsDefn1_711;

                    parse_tree__comp_unit_interface__delete_any_foreign_enum_from_extras_2_p_0(Extras0_1102, &MaybeCJCsDefn1_711);
                    succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
                    if (succeeded)
                    {
                      MR_Word Var_440 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_711, (MR_Integer) 0))));
                      MR_Word Var_441 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_711, (MR_Integer) 1))));
                      MR_Word Var_442 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_711, (MR_Integer) 2))));

                      succeeded = (Var_440 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (Var_441 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                          succeeded = (Var_442 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                      if (succeeded)
                      {
                        MR_Word MaybeAbstractDefn_498;
                        MR_Word StdTypeDefn_512;
                        MR_Word SrcDefnsStd_513;
                        MR_Word TypeCtorCheckedDefn_514;
                        MR_Word SrcImpDefns_515;

                        parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(BothTypesMap_9, DuDefn_1101, &MaybeAbstractDefn_498);
                        if ((MaybeAbstractDefn_498 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          MR_Word Var_457;

                          {
                            StdTypeDefn_512 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_512, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_512, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_1100));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_512, 2) = ((MR_Box) (DuDefn_1101));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_512, 3) = ((MR_Box) (MaybeCJCsDefn1_711));
                          }
                          Var_457 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_1101);
                          {
                            SrcImpDefns_515 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), SrcImpDefns_515, 0) = ((MR_Box) (Var_457));
                            MR_hl_field(MR_mktag(1), SrcImpDefns_515, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        else
                        {
                          MR_Word DetailsAbs_471;
                          MR_Word AbstractDefn_475 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractDefn_498, (MR_Integer) 0))));

                          {
                            StdTypeDefn_512 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_512, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_512, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_512, 2) = ((MR_Box) (AbstractDefn_475));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_512, 3) = ((MR_Box) (MaybeCJCsDefn1_711));
                          }
                          DetailsAbs_471 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractDefn_475, (MR_Integer) 2))));
                          succeeded = (DetailsAbs_471 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                            SrcImpDefns_515 = (MR_Word) ((MR_Unsigned) 0U);
                          else
                          {
                            MR_Word Var_467;

                            Var_467 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_475);
                            {
                              SrcImpDefns_515 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), SrcImpDefns_515, 0) = ((MR_Box) (Var_467));
                              MR_hl_field(MR_mktag(1), SrcImpDefns_515, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            }
                          }
                        }
                        {
                          SrcDefnsStd_513 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_513, 0) = ((MR_Box) (SrcIntDefns0_17));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_513, 1) = ((MR_Box) (SrcImpDefns_515));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_513, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          TypeCtorCheckedDefn_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_514, 0) = ((MR_Box) (StdTypeDefn_512));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_514, 1) = ((MR_Box) (SrcDefnsStd_513));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_514)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                        *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                      }
                      else
                      {
                        MR_Word StdTypeDefn_545;
                        MR_Word SrcDefnsStd_546;
                        MR_Word TypeCtorCheckedDefn_547;
                        MR_Box conv15_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                        {
                          StdTypeDefn_545 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), StdTypeDefn_545, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(3), StdTypeDefn_545, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_1100));
                          MR_hl_field(MR_mktag(3), StdTypeDefn_545, 2) = ((MR_Box) (DuDefn_1101));
                          MR_hl_field(MR_mktag(3), StdTypeDefn_545, 3) = ((MR_Box) (MaybeCJCsDefn1_711));
                        }
                        {
                          SrcDefnsStd_546 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_546, 0) = ((MR_Box) (SrcIntDefns0_17));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_546, 1) = ((MR_Box) (SrcImpDefns0_18));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_546, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[56]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv15_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                        *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv15_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                        {
                          TypeCtorCheckedDefn_547 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_547, 0) = ((MR_Box) (StdTypeDefn_545));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_547, 1) = ((MR_Box) (SrcDefnsStd_546));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_547)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                      }
                    }
                    else
                    {
                      MR_Word AbstractDefn_631;
                      MR_Word StdTypeDefn_633;
                      MR_Word SrcDefnsStd_634;
                      MR_Word TypeCtorCheckedDefn_635;
                      MR_Word SrcImpDefns_636;
                      MR_Word MaybeAbstractDefn_637;

                      parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(BothTypesMap_9, DuDefn_1101, &MaybeAbstractDefn_637);
                      if ((MaybeAbstractDefn_637 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        MR_Word Var_606;
                        MR_Word Var_593 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_1101, (MR_Integer) 0))));
                        MR_Word Var_594 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_1101, (MR_Integer) 1))));
                        MR_Word Var_596 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_1101, (MR_Integer) 3))));
                        MR_Word Var_597 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_1101, (MR_Integer) 4))));
                        MR_Word Var_598 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_1101, (MR_Integer) 5))));

                        {
                          AbstractDefn_631 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), AbstractDefn_631, 0) = ((MR_Box) (Var_593));
                          MR_hl_field(MR_mktag(0), AbstractDefn_631, 1) = ((MR_Box) (Var_594));
                          MR_hl_field(MR_mktag(0), AbstractDefn_631, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), AbstractDefn_631, 3) = ((MR_Box) (Var_596));
                          MR_hl_field(MR_mktag(0), AbstractDefn_631, 4) = ((MR_Box) (Var_597));
                          MR_hl_field(MR_mktag(0), AbstractDefn_631, 5) = ((MR_Box) (Var_598));
                        }
                        Var_606 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_1101);
                        {
                          SrcImpDefns_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), SrcImpDefns_636, 0) = ((MR_Box) (Var_606));
                          MR_hl_field(MR_mktag(1), SrcImpDefns_636, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      else
                      {
                        AbstractDefn_631 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractDefn_637, (MR_Integer) 0))));
                        SrcImpDefns_636 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      {
                        StdTypeDefn_633 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_633, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_633, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_633, 2) = ((MR_Box) (AbstractDefn_631));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_633, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]));
                      }
                      {
                        SrcDefnsStd_634 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SrcDefnsStd_634, 0) = ((MR_Box) (SrcIntDefns0_17));
                        MR_hl_field(MR_mktag(0), SrcDefnsStd_634, 1) = ((MR_Box) (SrcImpDefns_636));
                        MR_hl_field(MR_mktag(0), SrcDefnsStd_634, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        TypeCtorCheckedDefn_635 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_635, 0) = ((MR_Box) (StdTypeDefn_633));
                        MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_635, 1) = ((MR_Box) (SrcDefnsStd_634));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_635)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                      *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word MaybeCJCsDefn1_889;

                    parse_tree__comp_unit_interface__delete_any_foreign_enum_from_extras_2_p_0(Extras0_1102, &MaybeCJCsDefn1_889);
                    succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
                    if (succeeded)
                    {
                      MR_Word Var_778 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_889, (MR_Integer) 0))));
                      MR_Word Var_779 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_889, (MR_Integer) 1))));
                      MR_Word Var_780 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefn1_889, (MR_Integer) 2))));

                      succeeded = (Var_778 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        succeeded = (Var_779 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                          succeeded = (Var_780 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                      if (succeeded)
                      {
                        MR_Word StdTypeDefn_801;
                        MR_Word SrcDefnsStd_802;
                        MR_Word TypeCtorCheckedDefn_803;
                        MR_Word SrcImpDefns_804;
                        MR_Word MaybeAbstractDefn_805;

                        parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(BothTypesMap_9, DuDefn_1101, &MaybeAbstractDefn_805);
                        if ((MaybeAbstractDefn_805 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          MR_Word Var_781;

                          StdTypeDefn_801 = StdTypeDefn0_15;
                          Var_781 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_1101);
                          {
                            SrcImpDefns_804 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), SrcImpDefns_804, 0) = ((MR_Box) (Var_781));
                            MR_hl_field(MR_mktag(1), SrcImpDefns_804, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        else
                        {
                          MR_Word Var_783;
                          MR_Word AbstractDefn_786 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractDefn_805, (MR_Integer) 0))));

                          {
                            StdTypeDefn_801 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_801, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_801, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_801, 2) = ((MR_Box) (AbstractDefn_786));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_801, 3) = ((MR_Box) (MaybeCJCsDefn1_889));
                          }
                          Var_783 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_786);
                          {
                            SrcImpDefns_804 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), SrcImpDefns_804, 0) = ((MR_Box) (Var_783));
                            MR_hl_field(MR_mktag(1), SrcImpDefns_804, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        {
                          SrcDefnsStd_802 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_802, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_802, 1) = ((MR_Box) (SrcImpDefns_804));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_802, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        {
                          TypeCtorCheckedDefn_803 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_803, 0) = ((MR_Box) (StdTypeDefn_801));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_803, 1) = ((MR_Box) (SrcDefnsStd_802));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_803)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                        *STATE_VARIABLE_ImpImplicitFIMLangs_53 = STATE_VARIABLE_ImpImplicitFIMLangs_55_55;
                      }
                      else
                      {
                        MR_Word SrcDefnsStd_813;
                        MR_Word TypeCtorCheckedDefn_814;
                        MR_Box conv17_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                        {
                          SrcDefnsStd_813 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_813, 0) = ((MR_Box) (SrcIntDefns0_17));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_813, 1) = ((MR_Box) (SrcImpDefns0_18));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_813, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[57]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv17_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                        *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv17_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                        {
                          TypeCtorCheckedDefn_814 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_814, 0) = ((MR_Box) (StdTypeDefn0_15));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_814, 1) = ((MR_Box) (SrcDefnsStd_813));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_814)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
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

                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[58]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv19_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                      *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv19_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                    }
                    else
                    {
                      MR_Word Extras_936;

                      parse_tree__comp_unit_interface__delete_any_foreign_type_defn_from_extras_2_p_0(Extras0_1102, &Extras_936);
                      succeeded = parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0(Extras_936, Extras0_1102);
                      if (succeeded)
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                      else
                      {
                        MR_Word StdTypeDefn_919;
                        MR_Word SrcDefnsStd_920;
                        MR_Word TypeCtorCheckedDefn_921;

                        if (((MR_tag((MR_Word) Extras_936)) == (MR_Integer) 0))
                        {
                          MR_String HeadCtor_906 = ((MR_String) ((MR_hl_field(MR_mktag(0), Extras_936, (MR_Integer) 0))));
                          MR_Word TailCtors_907 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Extras_936, (MR_Integer) 1))));
                          MR_Word MaybeCJCsDefnOrEnum_908 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Extras_936, (MR_Integer) 2))));

                          {
                            StdTypeDefn_919 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), StdTypeDefn_919, 0) = (MR_Box) ((MR_Unsigned) (DuStatus_1100));
                            MR_hl_field(MR_mktag(2), StdTypeDefn_919, 1) = ((MR_Box) (DuDefn_1101));
                            MR_hl_field(MR_mktag(2), StdTypeDefn_919, 2) = ((MR_Box) (HeadCtor_906));
                            MR_hl_field(MR_mktag(2), StdTypeDefn_919, 3) = ((MR_Box) (TailCtors_907));
                            MR_hl_field(MR_mktag(2), StdTypeDefn_919, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_908));
                          }
                        }
                        else
                        {
                          MR_Word MaybeCJCsDefn_909 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Extras_936, (MR_Integer) 0))));

                          {
                            StdTypeDefn_919 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_919, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_919, 1) = (MR_Box) ((MR_Unsigned) (DuStatus_1100));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_919, 2) = ((MR_Box) (DuDefn_1101));
                            MR_hl_field(MR_mktag(3), StdTypeDefn_919, 3) = ((MR_Box) (MaybeCJCsDefn_909));
                          }
                        }
                        {
                          SrcDefnsStd_920 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_920, 0) = ((MR_Box) (SrcIntDefns0_17));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_920, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          MR_hl_field(MR_mktag(0), SrcDefnsStd_920, 2) = ((MR_Box) (SrcImpForeignEnums_19));
                        }
                        {
                          TypeCtorCheckedDefn_921 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_921, 0) = ((MR_Box) (StdTypeDefn_919));
                          MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_921, 1) = ((MR_Box) (SrcDefnsStd_920));
                        }
                        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn_921)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
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
              MR_Word AbstractStatus_341 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdTypeDefn0_15, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word AbstractDefn_342 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdTypeDefn0_15, (MR_Integer) 2))));

              switch (AbstractStatus_341) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_11)), NeededImpTypeCtors_10);
                    if (succeeded)
                    {
                      MR_Box conv3_STATE_VARIABLE_ImpImplicitFIMLangs_53;

                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[50]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv3_STATE_VARIABLE_ImpImplicitFIMLangs_53);
                      *STATE_VARIABLE_ImpImplicitFIMLangs_53 = ((MR_Word) (conv3_STATE_VARIABLE_ImpImplicitFIMLangs_53));
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (TypeCtorCheckedDefn0_12)), STATE_VARIABLE_TypeCtorCheckedMap_0_50, STATE_VARIABLE_TypeCtorCheckedMap_51);
                    }
                    else
                    {
                      MR_Word StdTypeDefn_326;
                      MR_Word SrcDefnsStd_327;
                      MR_Word TypeCtorCheckedDefn_328;

                      {
                        StdTypeDefn_326 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_326, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_326, 1) = (MR_Box) ((MR_Unsigned) (AbstractStatus_341));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_326, 2) = ((MR_Box) (AbstractDefn_342));
                        MR_hl_field(MR_mktag(3), StdTypeDefn_326, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]));
                      }
                      {
                        SrcDefnsStd_327 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SrcDefnsStd_327, 0) = ((MR_Box) (SrcIntDefns0_17));
                        MR_hl_field(MR_mktag(0), SrcDefnsStd_327, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), SrcDefnsStd_327, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        TypeCtorCheckedDefn_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_328, 0) = ((MR_Box) (StdTypeDefn_326));
                        MR_hl_field(MR_mktag(1), TypeCtorCheckedDefn_328, 1) = ((MR_Box) (SrcDefnsStd_327));
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

                      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[51]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv5_STATE_VARIABLE_ImpImplicitFIMLangs_53);
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

                    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[52]), SrcImpDefns0_18, ((MR_Box) (STATE_VARIABLE_ImpImplicitFIMLangs_55_55)), &conv7_STATE_VARIABLE_ImpImplicitFIMLangs_53);
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
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[18]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
          if (succeeded)
          {
            TypeInfo_14_14 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[20]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          }
        }
      }
    }
    else
    {
      MR_Word TypeInfo_15_15;
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_15_15 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[17]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_any_foreign_enum_from_extras_2_p_0(
  MR_Word Extras0_3,
  MR_Word * MaybeCJCsDefn_4)
{
  if (((MR_tag((MR_Word) Extras0_3)) == (MR_Integer) 0))
  {
    MR_Word MaybeCJCsDefnOrEnum0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Extras0_3, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumC0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefnOrEnum0_7, (MR_Integer) 0))));
    MR_Word MaybeDefnOrEnumJava0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefnOrEnum0_7, (MR_Integer) 1))));
    MR_Word MaybeDefnOrEnumCsharp0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefnOrEnum0_7, (MR_Integer) 2))));
    MR_Word MaybeDefnC_11;
    MR_Word MaybeDefnJava_12;
    MR_Word MaybeDefnCsharp_13;

    if ((MaybeDefnOrEnumC0_8 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnC_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumC0_8, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_16)) == (MR_Integer) 0))
        MaybeDefnC_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Defn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnOrEnum0_16, (MR_Integer) 0))));

        {
          MaybeDefnC_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDefnC_11, 0) = ((MR_Box) (Defn_17));
        }
      }
    }
    if ((MaybeDefnOrEnumJava0_9 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnJava_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumJava0_9, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_21)) == (MR_Integer) 0))
        MaybeDefnJava_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Defn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnOrEnum0_21, (MR_Integer) 0))));

        {
          MaybeDefnJava_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDefnJava_12, 0) = ((MR_Box) (Defn_22));
        }
      }
    }
    if ((MaybeDefnOrEnumCsharp0_10 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnCsharp_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumCsharp0_10, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_26)) == (MR_Integer) 0))
        MaybeDefnCsharp_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Defn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnOrEnum0_26, (MR_Integer) 0))));

        {
          MaybeDefnCsharp_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDefnCsharp_13, 0) = ((MR_Box) (Defn_27));
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCJCsDefn_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeDefnC_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeDefnJava_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDefnCsharp_13));
    }
  }
  else
    *MaybeCJCsDefn_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Extras0_3, (MR_Integer) 0))));
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_any_foreign_type_defn_from_extras_2_p_0(
  MR_Word Extras0_3,
  MR_Word * Extras_4)
{
  if (((MR_tag((MR_Word) Extras0_3)) == (MR_Integer) 0))
  {
    MR_String HeadCtor_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Extras0_3, (MR_Integer) 0))));
    MR_Word TailCtors_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Extras0_3, (MR_Integer) 1))));
    MR_Word MaybeCJCsDefnOrEnum0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Extras0_3, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumC0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefnOrEnum0_7, (MR_Integer) 0))));
    MR_Word MaybeDefnOrEnumJava0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefnOrEnum0_7, (MR_Integer) 1))));
    MR_Word MaybeDefnOrEnumCsharp0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeCJCsDefnOrEnum0_7, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumC_11;
    MR_Word MaybeDefnOrEnumJava_12;
    MR_Word MaybeDefnOrEnumCsharp_13;
    MR_Word MaybeCJCsDefnOrEnum_14;

    if ((MaybeDefnOrEnumC0_8 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumC_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumC0_8, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_22)) == (MR_Integer) 0))
        MaybeDefnOrEnumC_11 = MaybeDefnOrEnumC0_8;
      else
        MaybeDefnOrEnumC_11 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((MaybeDefnOrEnumJava0_9 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumJava_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumJava0_9, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_27)) == (MR_Integer) 0))
        MaybeDefnOrEnumJava_12 = MaybeDefnOrEnumJava0_9;
      else
        MaybeDefnOrEnumJava_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
    if ((MaybeDefnOrEnumCsharp0_10 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumCsharp_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumCsharp0_10, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_32)) == (MR_Integer) 0))
        MaybeDefnOrEnumCsharp_13 = MaybeDefnOrEnumCsharp0_10;
      else
        MaybeDefnOrEnumCsharp_13 = (MR_Word) ((MR_Unsigned) 0U);
    }
    {
      MaybeCJCsDefnOrEnum_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MaybeCJCsDefnOrEnum_14, 0) = ((MR_Box) (MaybeDefnOrEnumC_11));
      MR_hl_field(MR_mktag(0), MaybeCJCsDefnOrEnum_14, 1) = ((MR_Box) (MaybeDefnOrEnumJava_12));
      MR_hl_field(MR_mktag(0), MaybeCJCsDefnOrEnum_14, 2) = ((MR_Box) (MaybeDefnOrEnumCsharp_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Extras_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadCtor_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TailCtors_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeCJCsDefnOrEnum_14));
    }
  }
  else
    *Extras_4 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[1]));
}

static void MR_CALL 
parse_tree__comp_unit_interface__wrap_cjcs_foreign_type_no_enums_2_p_0(
  MR_Word CJCsMaybeDefn_3,
  MR_Word * CJCsMaybeDefnOrEnum_4)
{
  {
    MR_Word MaybeDefnC_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefn_3, (MR_Integer) 0))));
    MR_Word MaybeDefnJava_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefn_3, (MR_Integer) 1))));
    MR_Word MaybeDefnCsharp_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefn_3, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumC_8;
    MR_Word MaybeDefnOrEnumJava_9;
    MR_Word MaybeDefnOrEnumCsharp_10;

    if ((MaybeDefnC_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumC_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Defn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnC_5, (MR_Integer) 0))));
      MR_Word Var_14;

      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Defn_13));
      }
      {
        MaybeDefnOrEnumC_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnOrEnumC_8, 0) = ((MR_Box) (Var_14));
      }
    }
    if ((MaybeDefnJava_6 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumJava_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Defn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnJava_6, (MR_Integer) 0))));
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Defn_17));
      }
      {
        MaybeDefnOrEnumJava_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnOrEnumJava_9, 0) = ((MR_Box) (Var_18));
      }
    }
    if ((MaybeDefnCsharp_7 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumCsharp_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Defn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnCsharp_7, (MR_Integer) 0))));
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Defn_21));
      }
      {
        MaybeDefnOrEnumCsharp_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnOrEnumCsharp_10, 0) = ((MR_Box) (Var_22));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *CJCsMaybeDefnOrEnum_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeDefnOrEnumC_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeDefnOrEnumJava_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDefnOrEnumCsharp_10));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_subtype_defn_abstract_1_f_0(
  MR_Word SubDefn_3)
{
  {
    MR_Word AbstractDefn_4;
    MR_Word TypeDefn_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_3, (MR_Integer) 2))));
    MR_Word SuperType_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_5, (MR_Integer) 0))));
    MR_Word SuperTypeCtor_7;
    MR_Word Var_8;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(SuperType_6, &SuperTypeCtor_7);
    Var_8 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SuperTypeCtor_7)));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_3, (MR_Integer) 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_3, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_3, (MR_Integer) 3))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_3, (MR_Integer) 4))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_3, (MR_Integer) 5))));
    {
      AbstractDefn_4 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AbstractDefn_4, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), AbstractDefn_4, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), AbstractDefn_4, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), AbstractDefn_4, 3) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), AbstractDefn_4, 4) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), AbstractDefn_4, 5) = ((MR_Box) (Var_20));
    }
    return AbstractDefn_4;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_du_type_defn_abstract_3_p_0(
  MR_Word BothTypesMap_4,
  MR_Word DuDefnInfo_5,
  MR_Word * MaybeAbstractDefnInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word DetailsDu_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_5, (MR_Integer) 2))));
    MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_5, (MR_Integer) 3))));
    MR_Word OoMCtors_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_9, (MR_Integer) 0))));
    MR_Word MaybeEqCmp_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_9, (MR_Integer) 1))));
    MR_Word MaybeDirectArgCtors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_9, (MR_Integer) 2))));
    MR_Word Var_31;
    MR_Word Ctor_36;
    MR_Word MaybeExistConstraints_38;
    MR_Word CtorArgs_40;
    MR_Word Var_46;

    succeeded = (MaybeEqCmp_14 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (MaybeDirectArgCtors_15 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_31 = (MR_Word) ((MR_Unsigned) 0U);
        Ctor_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_13, (MR_Integer) 0))));
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_13, (MR_Integer) 1))));
        succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeExistConstraints_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_36, (MR_Integer) 1))));
          CtorArgs_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_36, (MR_Integer) 3))));
          succeeded = (MaybeExistConstraints_38 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if ((CtorArgs_40 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word ArgType_44;
              MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_40, (MR_Integer) 0))));
              MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_40, (MR_Integer) 1))));

              succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgType_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
                if (((MR_tag((MR_Word) ArgType_44)) == (MR_Integer) 1))
                {
                  MR_Word SymName_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_44, (MR_Integer) 0))));
                  MR_Word TypeArgs_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_44, (MR_Integer) 1))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_44)), Var_31);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Integer Arity_58;
                    MR_Word TypeCtor_59;

                    Arity_58 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_56);
                    {
                      TypeCtor_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeCtor_59, 0) = ((MR_Box) (SymName_55));
                      MR_hl_field(MR_mktag(0), TypeCtor_59, 1) = ((MR_Box) (Arity_58));
                    }
                    {
                      MR_Word Var_77;

                      Var_77 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_59);
                      succeeded = (Var_77 == (MR_Integer) 0);
                    }
                    if (!(succeeded))
                      succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(BothTypesMap_4, TVarSet_10, ArgType_44, TypeCtor_59, TypeArgs_56, Var_31);
                  }
                }
                else
                if (((((MR_tag((MR_Word) ArgType_44)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
          DetailsAbs_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), DetailsAbs_18, 0) = ((MR_Box) (NumBits_17));
        }
      }
      else
        DetailsAbs_18 = (MR_Word) ((MR_Unsigned) 0U);
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_5, (MR_Integer) 0))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_5, (MR_Integer) 1))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_5, (MR_Integer) 3))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_5, (MR_Integer) 4))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefnInfo_5, (MR_Integer) 5))));
      {
        AbstractDefnInfo_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AbstractDefnInfo_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), AbstractDefnInfo_19, 1) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), AbstractDefnInfo_19, 2) = ((MR_Box) (DetailsAbs_18));
        MR_hl_field(MR_mktag(0), AbstractDefnInfo_19, 3) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), AbstractDefnInfo_19, 4) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), AbstractDefnInfo_19, 5) = ((MR_Box) (Var_25));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeAbstractDefnInfo_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AbstractDefnInfo_19));
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12)
{
  {
    MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_4, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SymName_6)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_6, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_8)), STATE_VARIABLE_Modules_0_11, STATE_VARIABLE_Modules_12);
    }
    else
      *STATE_VARIABLE_Modules_12 = STATE_VARIABLE_Modules_0_11;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Modules_12;

    parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Modules_12));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16;
    MR_Word conv5_STATE_VARIABLE_DuArgTypeCtors_18;
    MR_Word conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_DuArgTypeCtors_18));
    *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Modules_12;

    parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_12;

    parse_tree__comp_unit_interface__accumulate_modules_used_by_type_ctor_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_12));
  }
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
  {
    MR_Word ImpTypeDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_10, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) ImpTypeDefn_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_25 = (MR_Word) ((MR_Word) (ImpTypeDefn_16));
          MR_Word OoMCtors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_25, (MR_Integer) 0))));
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word RhsTypeCtors_53;
          MR_Box conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39;

          Var_40 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_26);
          Var_41 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(Var_40, Var_41, &RhsTypeCtors_53);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_53, STATE_VARIABLE_DuArgTypeCtors_0_36, STATE_VARIABLE_DuArgTypeCtors_37);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[46]), RhsTypeCtors_53, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_38)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39);
          *STATE_VARIABLE_ModulesNeededByTypeDefns_39 = ((MR_Word) (conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39));
          *STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35 = STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetailsSub_29 = (MR_Word) (MR_body((MR_Word) (ImpTypeDefn_16), (MR_Integer) 1));
          MR_Word OoMCtors_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_29, (MR_Integer) 1))));
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word RhsTypeCtors_80;
          MR_Box conv11_STATE_VARIABLE_ModulesNeededByTypeDefns_39;

          Var_77 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_76);
          Var_78 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
          parse_tree__comp_unit_interface__ctors_to_user_type_ctor_set_3_p_0(Var_77, Var_78, &RhsTypeCtors_80);
          mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_80, STATE_VARIABLE_DuArgTypeCtors_0_36, STATE_VARIABLE_DuArgTypeCtors_37);
          mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[48]), RhsTypeCtors_80, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_38)), &conv11_STATE_VARIABLE_ModulesNeededByTypeDefns_39);
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsEqv_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_16, (MR_Integer) 1))));
              MR_Word RhsType_21 = (MR_Word) (DetailsEqv_20);
              MR_Word RhsTypeCtors_22;
              MR_Word NewRhsTypeCtors_23;
              MR_Word Var_45;
              MR_Word STATE_VARIABLE_AbsExpEqvRhsTypeCtors_46_46;
              MR_Word STATE_VARIABLE_ModulesNeededByTypeDefns_48_48;
              MR_Word Var_49;
              MR_Word Var_51;
              MR_Box conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_48_48;
              MR_Box conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35;
              MR_Box conv8_Var_24;
              MR_Box conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_39;

              Var_45 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(RhsType_21, Var_45, &RhsTypeCtors_22);
              mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), RhsTypeCtors_22, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34, &NewRhsTypeCtors_23);
              mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewRhsTypeCtors_23, STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_34, &STATE_VARIABLE_AbsExpEqvRhsTypeCtors_46_46);
              mercury__set__fold_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[47]), NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_38)), &conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_48_48);
              STATE_VARIABLE_ModulesNeededByTypeDefns_48_48 = ((MR_Word) (conv3_STATE_VARIABLE_ModulesNeededByTypeDefns_48_48));
              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0]));
                MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ImpTypesMap_9));
              }
              Var_51 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
              mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), Var_49, NewRhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_46_46)), &conv9_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35, ((MR_Box) (Var_51)), &conv8_Var_24, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_48_48)), &conv7_STATE_VARIABLE_ModulesNeededByTypeDefns_39);
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
      MR_Word Ctor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CtorArgs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3))));
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
      MR_Word Arg_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1))));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_TypeCtors_14;

    parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtors_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeCtors_14));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__type_to_user_type_ctor_set_3_p_0(
  MR_Word Type_4,
  MR_Word STATE_VARIABLE_TypeCtors_0_13,
  MR_Word * STATE_VARIABLE_TypeCtors_14)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_6;
    MR_Word ArgTypes_7;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_4, &TypeCtor_6, &ArgTypes_7);
    if (succeeded)
    {
      MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0))));
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
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[45]), ArgTypes_7, ((MR_Box) (STATE_VARIABLE_TypeCtors_15_15)), &conv1_STATE_VARIABLE_TypeCtors_14);
      *STATE_VARIABLE_TypeCtors_14 = ((MR_Word) (conv1_STATE_VARIABLE_TypeCtors_14));
    }
    else
      *STATE_VARIABLE_TypeCtors_14 = STATE_VARIABLE_TypeCtors_0_13;
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35;
    MR_Word conv2_STATE_VARIABLE_DuArgTypeCtors_37;
    MR_Word conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39;

    parse_tree__comp_unit_interface__accumulate_abs_eqv_type_rhs_in_defn_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_DuArgTypeCtors_37, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_35));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_DuArgTypeCtors_37));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_ModulesNeededByTypeDefns_39));
  }
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
  {
    MR_bool succeeded;
    MR_Word ImpTypeDefns_14;
    MR_Box conv0_ImpTypeDefns_14;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), ImpTypesMap_9, ((MR_Box) (TypeCtor_10)), &conv0_ImpTypeDefns_14);
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
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[2]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ImpTypesMap_9));
      }
      mercury__one_or_more__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), Var_21, ImpTypeDefns_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvRhsTypeCtors_0_15)), &conv6_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Box) (STATE_VARIABLE_DuArgTypeCtors_0_17)), &conv5_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Box) (STATE_VARIABLE_ModulesNeededByTypeDefns_0_19)), &conv4_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
    MR_Word conv6_STATE_VARIABLE_Seen_33;

    parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_Seen_33);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
    *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_Seen_33));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
    MR_Word conv1_STATE_VARIABLE_Seen_33;

    parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Seen_33);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Seen_33));
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_10, (MR_Integer) 2))));

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
          MR_Word SuperType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_22, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_34_34;
          MR_Word SuperTypeCtor_25;

          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_9)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_34_34);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_23, &SuperTypeCtor_25);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_Seen_16_75;

            succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_25)), STATE_VARIABLE_Seen_0_32, &STATE_VARIABLE_Seen_16_75);
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_76;
              MR_Word ItemTypeDefnInfos_74;
              MR_Box conv5_ItemTypeDefnInfos_74;

              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_25)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_34_34, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_76);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), BothTypesMap_8, ((MR_Box) (SuperTypeCtor_25)), &conv5_ItemTypeDefnInfos_74);
              if (succeeded)
              {
                ItemTypeDefnInfos_74 = ((MR_Word) (conv5_ItemTypeDefnInfos_74));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Var_77;
                MR_Box conv9_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
                MR_Box conv8_STATE_VARIABLE_Seen_33;

                {
                  Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
                  MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (BothTypesMap_8));
                  MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (SuperTypeCtor_25));
                }
                mercury__one_or_more__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), Var_77, ItemTypeDefnInfos_74, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_76)), &conv9_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Box) (STATE_VARIABLE_Seen_16_75)), &conv8_STATE_VARIABLE_Seen_33);
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = ((MR_Word) (conv9_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
                *STATE_VARIABLE_Seen_33 = ((MR_Word) (conv8_STATE_VARIABLE_Seen_33));
              }
              else
              {
                *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_16_75;
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_76;
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
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30;
          *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_0_32;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsEqv_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_15, (MR_Integer) 1))));
              MR_Word RhsType_20;
              MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37_37;
              MR_Word RhsTypeCtor_21;

              mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_9)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_30, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37_37);
              RhsType_20 = (MR_Word) (DetailsEqv_19);
              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(RhsType_20, &RhsTypeCtor_21);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Seen_16_51;

                succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (RhsTypeCtor_21)), STATE_VARIABLE_Seen_0_32, &STATE_VARIABLE_Seen_16_51);
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_52;
                  MR_Word ItemTypeDefnInfos_50;
                  MR_Box conv0_ItemTypeDefnInfos_50;

                  mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (RhsTypeCtor_21)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_37_37, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_52);
                  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), BothTypesMap_8, ((MR_Box) (RhsTypeCtor_21)), &conv0_ItemTypeDefnInfos_50);
                  if (succeeded)
                  {
                    ItemTypeDefnInfos_50 = ((MR_Word) (conv0_ItemTypeDefnInfos_50));
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    MR_Word Var_53;
                    MR_Box conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
                    MR_Box conv3_STATE_VARIABLE_Seen_33;

                    {
                      Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
                      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (BothTypesMap_8));
                      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (RhsTypeCtor_21));
                    }
                    mercury__one_or_more__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), Var_53, ItemTypeDefnInfos_50, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_52)), &conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Box) (STATE_VARIABLE_Seen_16_51)), &conv3_STATE_VARIABLE_Seen_33);
                    *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = ((MR_Word) (conv4_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
                    *STATE_VARIABLE_Seen_33 = ((MR_Word) (conv3_STATE_VARIABLE_Seen_33));
                  }
                  else
                  {
                    *STATE_VARIABLE_Seen_33 = STATE_VARIABLE_Seen_16_51;
                    *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_52;
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44;
    MR_Word conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_46;
    MR_Word conv0_STATE_VARIABLE_DirectDummyTypeCtors_48;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_46, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_DirectDummyTypeCtors_48);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_46));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_DirectDummyTypeCtors_48));
  }
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
  {
    MR_Word HeadImpItemTypeDefnInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfos_14, (MR_Integer) 0))));
    MR_Word TailImpItemTypeDefnInfos_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfos_14, (MR_Integer) 1))));

    if ((TailImpItemTypeDefnInfos_19 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0(IntTypesMap_11, BothTypesMap_12, TypeCtor_13, HeadImpItemTypeDefnInfo_18, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22, STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, STATE_VARIABLE_AbsExpEnumTypeCtors_0_24, STATE_VARIABLE_AbsExpEnumTypeCtors_25, STATE_VARIABLE_DirectDummyTypeCtors_0_26, STATE_VARIABLE_DirectDummyTypeCtors_27);
    else
    {
      MR_Word Var_28;
      MR_Box conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23;
      MR_Box conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25;
      MR_Box conv3_STATE_VARIABLE_DirectDummyTypeCtors_27;

      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[1]));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0_1));
        MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (IntTypesMap_11));
        MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (BothTypesMap_12));
        MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (TypeCtor_13));
      }
      mercury__one_or_more__foldl3_8_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), Var_28, ImpItemTypeDefnInfos_14, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_22)), &conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Box) (STATE_VARIABLE_AbsExpEnumTypeCtors_0_24)), &conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Box) (STATE_VARIABLE_DirectDummyTypeCtors_0_26)), &conv3_STATE_VARIABLE_DirectDummyTypeCtors_27);
      *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23 = ((MR_Word) (conv5_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23));
      *STATE_VARIABLE_AbsExpEnumTypeCtors_25 = ((MR_Word) (conv4_STATE_VARIABLE_AbsExpEnumTypeCtors_25));
      *STATE_VARIABLE_DirectDummyTypeCtors_27 = ((MR_Word) (conv3_STATE_VARIABLE_DirectDummyTypeCtors_27));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31;
    MR_Word conv5_STATE_VARIABLE_Seen_33;

    parse_tree__comp_unit_interface__accumulate_eqv_and_supertypes_in_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_Seen_33);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_31));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_Seen_33));
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
  {
    MR_bool succeeded;
    MR_Word ImpTypeDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_14, (MR_Integer) 2))));
    MR_Word TVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpItemTypeDefnInfo_14, (MR_Integer) 3))));

    switch (MR_tag((MR_Word) ImpTypeDefn_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_28 = (MR_Word) ((MR_Word) (ImpTypeDefn_20));
          MR_Word OoMCtors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 0))));
          MR_Word MaybeEqCmp_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 1))));
          MR_Word MaybeDirectArgCtors_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_28, (MR_Integer) 2))));
          MR_Box conv0_Var_32;
          MR_Integer _NumFunctors_33;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv0_Var_32);
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
            succeeded = parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_5_p_0(BothTypesMap_12, TVarSet_21, OoMCtors_29, MaybeEqCmp_30, MaybeDirectArgCtors_31);
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
          MR_Word SuperType_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_34, (MR_Integer) 0))));
          MR_Box conv3_Var_37;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv3_Var_37);
          if (succeeded)
            succeeded = MR_TRUE;
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_49_49;
            MR_Word SuperTypeCtor_38;

            mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_0_43, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_49_49);
            succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_35, &SuperTypeCtor_38);
            if (succeeded)
            {
              MR_Word Seen0_39;
              MR_Word STATE_VARIABLE_Seen_16_77;

              mercury__set__singleton_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_13)), &Seen0_39);
              succeeded = mercury__set__insert_new_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_38)), Seen0_39, &STATE_VARIABLE_Seen_16_77);
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_78;
                MR_Word ItemTypeDefnInfos_76;
                MR_Box conv4_ItemTypeDefnInfos_76;

                mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (SuperTypeCtor_38)), STATE_VARIABLE_AbsExpEqvLhsTypeCtors_49_49, &STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_78);
                succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), BothTypesMap_12, ((MR_Box) (SuperTypeCtor_38)), &conv4_ItemTypeDefnInfos_76);
                if (succeeded)
                {
                  ItemTypeDefnInfos_76 = ((MR_Word) (conv4_ItemTypeDefnInfos_76));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Var_79;
                  MR_Box conv8_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44;
                  MR_Box conv7__Seen_40;

                  {
                    Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_13[0]));
                    MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_in_defn_10_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (BothTypesMap_12));
                    MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (SuperTypeCtor_38));
                  }
                  mercury__one_or_more__foldl2_6_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), Var_79, ItemTypeDefnInfos_76, ((MR_Box) (STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_78)), &conv8_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44, ((MR_Box) (STATE_VARIABLE_Seen_16_77)), &conv7__Seen_40);
                  *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = ((MR_Word) (conv8_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44));
                }
                else
                  *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_17_78;
              }
              else
                *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_49_49;
            }
            else
              *STATE_VARIABLE_AbsExpEqvLhsTypeCtors_44 = STATE_VARIABLE_AbsExpEqvLhsTypeCtors_49_49;
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ImpTypeDefn_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box conv1_Var_25;

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv1_Var_25);
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

              succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), IntTypesMap_11, ((MR_Box) (TypeCtor_13)), &conv2_Var_27);
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
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word OoMCtors_8,
  MR_Word MaybeCanonical_9,
  MR_Word MaybeDirectArgCtors_10)
{
  {
    MR_bool succeeded = (MaybeCanonical_9 == (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_11;
    MR_Word Ctor_16;
    MR_Word MaybeExistConstraints_18;
    MR_Word CtorArgs_20;
    MR_Word Var_26;

    if (succeeded)
    {
      succeeded = (MaybeDirectArgCtors_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_11 = (MR_Word) ((MR_Unsigned) 0U);
        Ctor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_8, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_8, (MR_Integer) 1))));
        succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1))));
          CtorArgs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3))));
          succeeded = (MaybeExistConstraints_18 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if ((CtorArgs_20 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word ArgType_24;
              MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_20, (MR_Integer) 0))));
              MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_20, (MR_Integer) 1))));

              succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1))));
                if (((MR_tag((MR_Word) ArgType_24)) == (MR_Integer) 1))
                {
                  MR_Word SymName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_24, (MR_Integer) 0))));
                  MR_Word TypeArgs_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_24, (MR_Integer) 1))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_24)), Var_11);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Integer Arity_38;
                    MR_Word TypeCtor_39;

                    Arity_38 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_36);
                    {
                      TypeCtor_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeCtor_39, 0) = ((MR_Box) (SymName_35));
                      MR_hl_field(MR_mktag(0), TypeCtor_39, 1) = ((MR_Box) (Arity_38));
                    }
                    {
                      MR_Word Var_57;

                      Var_57 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_39);
                      succeeded = (Var_57 == (MR_Integer) 0);
                    }
                    if (!(succeeded))
                      succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(TypeDefnMap_6, TVarSet_7, ArgType_24, TypeCtor_39, TypeArgs_36, Var_11);
                  }
                }
                else
                if (((((MR_tag((MR_Word) ArgType_24)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_24, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
        Ctor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_9, (MR_Integer) 0))));
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_9, (MR_Integer) 1))));
        succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeExistConstraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 1))));
          CtorArgs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 3))));
          succeeded = (MaybeExistConstraints_13 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            if ((CtorArgs_15 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word ArgType_19;
              MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_15, (MR_Integer) 0))));
              MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_15, (MR_Integer) 1))));

              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ArgType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
                if (((MR_tag((MR_Word) ArgType_19)) == (MR_Integer) 1))
                {
                  MR_Word SymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_19, (MR_Integer) 0))));
                  MR_Word TypeArgs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_19, (MR_Integer) 1))));

                  succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_19)), CoveredTypes_10);
                  if (succeeded)
                    succeeded = MR_FALSE;
                  else
                  {
                    MR_Integer Arity_33;
                    MR_Word TypeCtor_34;

                    Arity_33 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_31);
                    {
                      TypeCtor_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeCtor_34, 0) = ((MR_Box) (SymName_30));
                      MR_hl_field(MR_mktag(0), TypeCtor_34, 1) = ((MR_Box) (Arity_33));
                    }
                    {
                      MR_Word Var_52;

                      Var_52 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_34);
                      succeeded = (Var_52 == (MR_Integer) 0);
                    }
                    if (!(succeeded))
                      succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0(TypeDefnMap_7, TVarSet_8, ArgType_19, TypeCtor_34, TypeArgs_31, CoveredTypes_10);
                  }
                }
                else
                if (((((MR_tag((MR_Word) ArgType_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_19, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__conv0_ItemTypeDefnInfo_14));
    parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_5(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Var_31 = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__BaseType_29, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12);
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Var_31 == (MR_Integer) 1);
    if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
      parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_4(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_6(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_1) == 0)
      {
        {
          MR_Word DetailsSub_25 = (MR_Word) (MR_body((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17), (MR_Integer) 1));
          MR_Word SuperType0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_25, (MR_Integer) 0))));
          MR_Word SuperType_28;
          MR_Word Var_30;
          MR_Word _OoMCtors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_25, (MR_Integer) 1))));

          parse_tree__comp_unit_interface__merge_tvarsets_and_subst_type_args_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeArgs_11, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTVarSet_18, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTypeParams_16, SuperType0_26, &SuperType_28);
          Var_30 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
          parse_tree__comp_unit_interface__get_base_type_5_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, SuperType_28, &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__BaseType_29, Var_30, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_5, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word _TypeCtor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 0))));
      MR_Word _Context_19;
      MR_Word _SeqNum_20;

      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTypeParams_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 1))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 2))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnTVarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 3))));
      _Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 4))));
      _SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__ItemTypeDefnInfo_14, (MR_Integer) 5))));
      if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17)) == (MR_Integer) 0))
      {
        MR_Word DetailsDu_21 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefn_17));
        MR_Word OoMCtors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_21, (MR_Integer) 0))));
        MR_Word MaybeEqCmp_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_21, (MR_Integer) 1))));
        MR_Word MaybeDirectArgCtors_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_21, (MR_Integer) 2))));
        MR_Word Var_32;
        MR_Word Ctor_40;
        MR_Word MaybeExistConstraints_42;
        MR_Word CtorArgs_44;
        MR_Word Var_50;
        uint32_t _Ordinal_41;
        MR_Word _Name_43;
        MR_Integer _Arity_45;
        MR_Word _Context_46;

        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (MaybeEqCmp_23 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
        {
          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (MaybeDirectArgCtors_24 == (MR_Word) ((MR_Unsigned) 0U));
          if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
          {
            Ctor_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_22, (MR_Integer) 0))));
            Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_22, (MR_Integer) 1))));
            (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
            {
              _Ordinal_41 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_40, (MR_Integer) 0)));
              MaybeExistConstraints_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_40, (MR_Integer) 1))));
              _Name_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_40, (MR_Integer) 2))));
              CtorArgs_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_40, (MR_Integer) 3))));
              _Arity_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_40, (MR_Integer) 4))));
              _Context_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_40, (MR_Integer) 5))));
              (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (MaybeExistConstraints_42 == (MR_Word) ((MR_Unsigned) 0U));
              if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
              {
                {
                  Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__Type_9));
                  MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__CoveredTypes0_12));
                }
                if ((CtorArgs_44 == (MR_Word) ((MR_Unsigned) 0U)))
                  (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
                else
                {
                  MR_Word ArgType_48;
                  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_44, (MR_Integer) 0))));
                  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgs_44, (MR_Integer) 1))));
                  MR_Word Var_47;
                  MR_Word Var_49;

                  (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (Var_52 == (MR_Word) ((MR_Unsigned) 0U));
                  if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
                  {
                    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
                    ArgType_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))));
                    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 2))));
                    if (((MR_tag((MR_Word) ArgType_48)) == (MR_Integer) 1))
                    {
                      MR_Word SymName_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_48, (MR_Integer) 0))));
                      MR_Word TypeArgs_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_48, (MR_Integer) 1))));
                      MR_Word _Kind_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgType_48, (MR_Integer) 2))));

                      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (ArgType_48)), Var_32);
                      if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
                        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
                      else
                      {
                        MR_Integer Arity_62;
                        MR_Word TypeCtor_63;

                        Arity_62 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeArgs_60);
                        {
                          TypeCtor_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), TypeCtor_63, 0) = ((MR_Box) (SymName_59));
                          MR_hl_field(MR_mktag(0), TypeCtor_63, 1) = ((MR_Box) (Arity_62));
                        }
                        {
                          MR_Word Var_81;

                          Var_81 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_63);
                          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = (Var_81 == (MR_Integer) 0);
                        }
                        if (!((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded))
                          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TVarSet_8, ArgType_48, TypeCtor_63, TypeArgs_60, Var_32);
                      }
                    }
                    else
                    if (((((MR_tag((MR_Word) ArgType_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgType_48, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_7(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_13;

          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeDefnMap_7, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__TypeCtor_10)), &ItemTypeDefnInfos_13);
          if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded)
            mercury__one_or_more__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__conv0_ItemTypeDefnInfo_14, ItemTypeDefnInfos_13, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_by_some_type_defn_6_p_0_env_0__succeeded = MR_TRUE;
  }
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
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__conv0_ItemTypeDefnInfo_43));
    parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_5(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Var_60 = parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__BaseType_58, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9);
    (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Var_60 == (MR_Integer) 1);
    if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
      parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_4(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_6(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_1) == 0)
      {
        {
          MR_Word DetailsSub_54 = (MR_Word) (MR_body((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46), (MR_Integer) 1));
          MR_Word SuperType0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_54, (MR_Integer) 0))));
          MR_Word SuperType_57;
          MR_Word Var_59;
          MR_Word _OoMCtors_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_54, (MR_Integer) 1))));

          parse_tree__comp_unit_interface__merge_tvarsets_and_subst_type_args_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTVarSet_47, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTypeParams_45, SuperType0_55, &SuperType_57);
          Var_59 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
          parse_tree__comp_unit_interface__get_base_type_5_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, SuperType_57, &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__BaseType_58, Var_59, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_5, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word _TypeCtor_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 0))));
      MR_Word _Context_48;
      MR_Word _SeqNum_49;

      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTypeParams_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 1))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 2))));
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnTVarSet_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 3))));
      _Context_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 4))));
      _SeqNum_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__ItemTypeDefnInfo_43, (MR_Integer) 5))));
      if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46)) == (MR_Integer) 0))
      {
        MR_Word DetailsDu_50 = (MR_Word) ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46));
        MR_Word OoMCtors_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_50, (MR_Integer) 0))));
        MR_Word MaybeEqCmp_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_50, (MR_Integer) 1))));
        MR_Word MaybeDirectArgCtors_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_50, (MR_Integer) 2))));
        MR_Word Var_61;

        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8));
          MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__CoveredTypes0_9));
        }
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = parse_tree__comp_unit_interface__non_sub_du_constructor_list_represents_dummy_type_2_6_p_0((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TVarSet_7, OoMCtors_51, MaybeEqCmp_52, MaybeDirectArgCtors_53, Var_61);
      }
      else
      if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefn_46)) == (MR_Integer) 1))
        parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_6(env_ptr);
      else
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_FALSE;
      if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
        parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_7(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ItemTypeDefnInfos_42;

          (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeDefnMap_6, ((MR_Box) ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15)), &ItemTypeDefnInfos_42);
          if ((env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded)
            mercury__one_or_more__member_2_p_1((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), &(env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__conv0_ItemTypeDefnInfo_43, ItemTypeDefnInfos_42, parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_4_f_0(
  MR_Word TypeDefnMap_6,
  MR_Word TVarSet_7,
  MR_Word Type_8,
  MR_Word CoveredTypes0_9)
{
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
            MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 0))));
            MR_Word _Kind_13;

            (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeArgs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 1))));
            _Kind_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 2))));
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_11));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_14));
              }
              {
                MR_Word Var_33;

                Var_33 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0((env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__TypeCtor_15);
                (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__succeeded = (Var_33 == (MR_Integer) 0);
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).parse_tree__comp_unit_interface__ctor_arg_is_dummy_type_5_f_0_env_0__Type_8, (MR_Integer) 0))))) {
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
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17 = ((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__conv0_ItemTypeDefnInfo_17));
    parse_tree__comp_unit_interface__get_base_type_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_base_type_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s * env_ptr = (struct parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word _TypeCtor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 0))));
      MR_Word _Context_22;
      MR_Word _SeqNum_23;

      (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTypeParams_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 1))));
      (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 2))));
      (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 3))));
      _Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 4))));
      _SeqNum_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__ItemTypeDefnInfo_17, (MR_Integer) 5))));
      if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_20)) == (MR_Integer) 0))
      {
        *((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9) = (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8;
        ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont)((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr);
      }
      else
      if (((MR_tag((MR_Word) (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_20)) == (MR_Integer) 1))
      {
        MR_Word DetailsSub_25 = (MR_Word) (MR_body((MR_Word) ((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefn_20), (MR_Integer) 1));
        MR_Word SuperType0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_25, (MR_Integer) 0))));
        MR_Word SuperType_28;
        MR_Word Renaming_41;
        MR_Word TypeParams_42;
        MR_Word TSubst_43;
        MR_Word Type1_44;
        MR_Word _OoMCtors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_25, (MR_Integer) 1))));
        MR_Word _MergedTVarSet_40;

        parse_tree__prog_data__tvarset_merge_renaming_4_p_0((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTVarSet_21, &_MergedTVarSet_40, &Renaming_41);
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_41, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnTypeParams_19, &TypeParams_42);
        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[14]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_42, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12, &TSubst_43);
        parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_41, SuperType0_26, &Type1_44);
        parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_43, Type1_44, &SuperType_28);
        parse_tree__comp_unit_interface__get_base_type_5_p_0((env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TVarSet_7, SuperType_28, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__BaseType_9, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__STATE_VARIABLE_SeenTypes_30_30, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont, (env_ptr)->parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__cont_env_ptr);
      }
      else
      {
      }
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
        SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8, (MR_Integer) 0))));
        (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8, (MR_Integer) 1))));
        _Kind_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8, (MR_Integer) 2))));
        TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        succeeded = mercury__set__insert_new_3_p_0(TypeCtorInfo_31_31, ((MR_Box) ((env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__Type_8)), STATE_VARIABLE_SeenTypes_0_29, &(env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__STATE_VARIABLE_SeenTypes_30_30);
        if (succeeded)
        {
          Arity_14 = mercury__list__length_1_f_0(TypeCtorInfo_31_31, (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeArgs_12);
          TypeCtorInfo_32_32 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          TypeInfo_33_33 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]);
          {
            TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtor_15, 0) = ((MR_Box) (SymName_11));
            MR_hl_field(MR_mktag(0), TypeCtor_15, 1) = ((MR_Box) (Arity_14));
          }
          succeeded = mercury__one_or_more_map__search_3_p_0(TypeCtorInfo_32_32, TypeInfo_33_33, (env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__TypeDefnMap_6, ((MR_Box) (TypeCtor_15)), &ItemTypeDefnInfos_16);
          if (succeeded)
            mercury__one_or_more__member_2_p_1(TypeInfo_33_33, &(env).parse_tree__comp_unit_interface__get_base_type_5_p_0_env_0__conv0_ItemTypeDefnInfo_17, ItemTypeDefnInfos_16, parse_tree__comp_unit_interface__get_base_type_5_p_0_2, &env);
        }
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
  {
    MR_Word Renaming_14;
    MR_Word TypeParams_15;
    MR_Word TSubst_16;
    MR_Word Type1_17;
    MR_Word _MergedTVarSet_13;

    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_7, TVarSet0_9, &_MergedTVarSet_13, &Renaming_14);
    parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_14, TypeParams0_10, &TypeParams_15);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[14]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_15, TypeArgs_8, &TSubst_16);
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_14, Type0_11, &Type1_17);
    parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_16, Type1_17, Type_12);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_constraint_3_p_0(
  MR_Word Constraint_4,
  MR_Word STATE_VARIABLE_Modules_0_11,
  MR_Word * STATE_VARIABLE_Modules_12)
{
  {
    MR_Word ClassName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 0))));
    MR_Word ArgTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Modules_15_15;

    if (((MR_tag((MR_Word) ClassName_6)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassName_6, (MR_Integer) 0))));

      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_8)), STATE_VARIABLE_Modules_0_11, &STATE_VARIABLE_Modules_15_15);
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.comp_unit_interface.accumulate_modules_from_constraint\'/3", (MR_String) "unknown typeclass in constraint");
        return;
      }
    parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_7, STATE_VARIABLE_Modules_15_15, STATE_VARIABLE_Modules_12);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__accumulate_modules_from_type_3_p_0(
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
          MR_Word TypeName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_4, (MR_Integer) 0))));
          MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_4, (MR_Integer) 1))));
          MR_Word ModuleName_12;
          MR_Word STATE_VARIABLE_Modules_26_26;

          mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeName_9, &ModuleName_12);
          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_12)), STATE_VARIABLE_Modules_0_22, &STATE_VARIABLE_Modules_26_26);
          parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_10, STATE_VARIABLE_Modules_26_26, STATE_VARIABLE_Modules_23);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Modules_23 = STATE_VARIABLE_Modules_0_22;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 1))));

              parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_31, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_30, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(ArgTypes_28, STATE_VARIABLE_Modules_0_22, STATE_VARIABLE_Modules_23);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word KindedType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 1))));
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
parse_tree__comp_unit_interface__accumulate_modules_from_types_3_p_0(
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
      MR_Word Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Modules_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Modules_0_2;

      parse_tree__comp_unit_interface__accumulate_modules_from_type_3_p_0(Type_7, STATE_VARIABLE_Modules_0_2, &STATE_VARIABLE_Modules_12_12);
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

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__keep_promise_item_int_1_p_0(
  MR_Word ItemPromise_2)
{
  {
    MR_bool succeeded;
    MR_Word PromiseType_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromise_2, (MR_Integer) 0))) & (MR_Integer) 3);

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
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_12;

    parse_tree__comp_unit_interface__accumulate_modules_from_constraint_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_12));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0(
  MR_Word ItemTypeClass_4,
  MR_Word STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_7,
  MR_Word * STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8)
{
  {
    MR_Word Constraints_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_4, (MR_Integer) 2))));
    MR_Box conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8;

    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[44]), Constraints_6, ((MR_Box) (STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_0_7)), &conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8);
    *STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8 = ((MR_Word) (conv1_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_imp_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_ImpTypesMap_0_21,
  MR_Word * STATE_VARIABLE_ImpTypesMap_22)
{
  {
    MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 0))));
    MR_Word TypeParams_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 1))));
    MR_Word TypeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 2))));
    MR_Word TypeCtor_12;
    MR_Word ItemTypeDefn1_15;
    MR_Integer Var_23;

    Var_23 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[14]), TypeParams_7);
    {
      TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_12, 0) = ((MR_Box) (Name_6));
      MR_hl_field(MR_mktag(0), TypeCtor_12, 1) = ((MR_Box) (Var_23));
    }
    switch (MR_tag((MR_Word) TypeDefn_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        ItemTypeDefn1_15 = ItemTypeDefn_4;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 0))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 1))));
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 3))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 4))));
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 5))));

          {
            ItemTypeDefn1_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 1) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__comp_unit_interface_scalar_common_1[21])));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 3) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 4) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), ItemTypeDefn1_15, 5) = ((MR_Box) (Var_31));
          }
        }
        break;
      case (MR_Integer) 3:
        ItemTypeDefn1_15 = ItemTypeDefn_4;
        break;
    }
    mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (ItemTypeDefn1_15)), STATE_VARIABLE_ImpTypesMap_0_21, STATE_VARIABLE_ImpTypesMap_22);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__record_type_defn_int_3_p_0(
  MR_Word ItemTypeDefn_4,
  MR_Word STATE_VARIABLE_IntTypesMap_0_13,
  MR_Word * STATE_VARIABLE_IntTypesMap_14)
{
  {
    MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 0))));
    MR_Word TypeParams_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_4, (MR_Integer) 1))));
    MR_Word TypeCtor_12;
    MR_Integer Var_15;

    Var_15 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[14]), TypeParams_7);
    {
      TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_12, 0) = ((MR_Box) (Name_6));
      MR_hl_field(MR_mktag(0), TypeCtor_12, 1) = ((MR_Box) (Var_15));
    }
    mercury__one_or_more_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), ((MR_Box) (TypeCtor_12)), ((MR_Box) (ItemTypeDefn_4)), STATE_VARIABLE_IntTypesMap_0_13, STATE_VARIABLE_IntTypesMap_14);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__make_imports_into_uses_maybe_implicit_4_p_0(
  MR_Word ImpNeededModules_5,
  MR_Word ModuleName_6,
  MR_Word ImportUse0_7,
  MR_Word * ImportUse_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) ImportUse0_7)) == (MR_Integer) 0))
    {
      MR_Word Explicit0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportUse0_7, (MR_Integer) 0))));
      MR_Word Explicit_10;

      switch (MR_tag((MR_Word) Explicit0_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word IntContext_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit0_9, (MR_Integer) 0))));

            {
              Explicit_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Explicit_10, 0) = ((MR_Box) (IntContext_25));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            Explicit_10 = Explicit0_9;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ImpContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Explicit0_9, (MR_Integer) 0))));

            succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
            if (succeeded)
            {
              {
                Explicit_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Explicit_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Explicit_10, 1) = ((MR_Box) (ImpContext_27));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit0_9, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
                if (succeeded)
                {
                  Explicit_10 = Explicit0_9;
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit0_9, (MR_Integer) 1))));

                {
                  Explicit_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Explicit_10, 0) = ((MR_Box) (IntContext_34));
                }
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *ImportUse_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Explicit_10));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Implicit0_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ImportUse0_7, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word MaybeExplicit0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImportUse0_7, (MR_Integer) 1))));
      MR_Word Implicit_13;
      MR_Word MaybeExplicit_14;

      switch (Implicit0_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          Implicit_13 = (MR_Integer) 2;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Implicit_13 = (MR_Integer) 1;
          break;
      }
      if ((MaybeExplicit0_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeExplicit_14 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Explicit0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExplicit0_12, (MR_Integer) 0))));
        MR_Word Explicit_16;

        switch (MR_tag((MR_Word) Explicit0_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntContext_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Explicit0_15, (MR_Integer) 0))));

              {
                Explicit_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Explicit_16, 0) = ((MR_Box) (IntContext_39));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              Explicit_16 = Explicit0_15;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ImpContext_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Explicit0_15, (MR_Integer) 0))));

              succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
              if (succeeded)
              {
                {
                  Explicit_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Explicit_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Explicit_16, 1) = ((MR_Box) (ImpContext_41));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Explicit0_15, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_5, ((MR_Box) (ModuleName_6)));
                  if (succeeded)
                  {
                    Explicit_16 = Explicit0_15;
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntContext_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Explicit0_15, (MR_Integer) 1))));

                  {
                    Explicit_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Explicit_16, 0) = ((MR_Box) (IntContext_48));
                  }
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
        }
        if (succeeded)
        {
          {
            MaybeExplicit_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeExplicit_14, 0) = ((MR_Box) (Explicit_16));
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ImportUse_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Implicit_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeExplicit_14));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__add_self_fim_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Lang_6,
  MR_Word STATE_VARIABLE_FIMSpecs_0_9,
  MR_Word * STATE_VARIABLE_FIMSpecs_10)
{
  {
    MR_Word FIMSpec_8;

    {
      FIMSpec_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FIMSpec_8, 0) = (MR_Box) ((MR_Unsigned) (Lang_6));
      MR_hl_field(MR_mktag(0), FIMSpec_8, 1) = ((MR_Box) (ModuleName_5));
    }
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ((MR_Box) (FIMSpec_8)), STATE_VARIABLE_FIMSpecs_0_9, STATE_VARIABLE_FIMSpecs_10);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_mode_ctor_checked_defn__772__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word CheckedDefn0_6,
  MR_Word STATE_VARIABLE_ModeCtorCheckedMap_0_18,
  MR_Word * STATE_VARIABLE_ModeCtorCheckedMap_19)
{
  {
    MR_bool succeeded;
    MR_Word StdDefn0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_6, (MR_Integer) 0))));
    MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_6, (MR_Integer) 1))));
    MR_Word Status_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdDefn0_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word MaybeIntDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_9, (MR_Integer) 0))));
    MR_Word MaybeImpDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_9, (MR_Integer) 1))));

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
          MR_Word IntDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIntDefn_12, (MR_Integer) 0))));
          MR_Word StdDefn_15;
          MR_Word SrcDefns_16;
          MR_Word CheckedDefn_17;

          {
            StdDefn_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StdDefn_15, 0) = (MR_Box) ((MR_Unsigned) (Status_10));
            MR_hl_field(MR_mktag(0), StdDefn_15, 1) = ((MR_Box) (IntDefn_14));
          }
          {
            SrcDefns_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_16, 0) = ((MR_Box) (MaybeIntDefn_12));
            MR_hl_field(MR_mktag(0), SrcDefns_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            CheckedDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CheckedDefn_17, 0) = ((MR_Box) (StdDefn_15));
            MR_hl_field(MR_mktag(0), CheckedDefn_17, 1) = ((MR_Box) (SrcDefns_16));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_5)), ((MR_Box) (CheckedDefn_17)), STATE_VARIABLE_ModeCtorCheckedMap_0_18, STATE_VARIABLE_ModeCtorCheckedMap_19);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_ModeCtorCheckedMap_19 = STATE_VARIABLE_ModeCtorCheckedMap_0_18;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_24;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[9]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (MaybeImpDefn_13));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_24, (MR_String) "predicate \140parse_tree.comp_unit_interface.pre_grab_pre_qual_mode_ctor_checked_defn\'/4", (MR_String) "exported but has imp defn");
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_5)), ((MR_Box) (CheckedDefn0_6)), STATE_VARIABLE_ModeCtorCheckedMap_0_18, STATE_VARIABLE_ModeCtorCheckedMap_19);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__IntroducedFrom__pred__pre_grab_pre_qual_inst_ctor_checked_defn__739__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedDefn0_6,
  MR_Word STATE_VARIABLE_InstCtorCheckedMap_0_18,
  MR_Word * STATE_VARIABLE_InstCtorCheckedMap_19)
{
  {
    MR_bool succeeded;
    MR_Word StdDefn0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_6, (MR_Integer) 0))));
    MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_6, (MR_Integer) 1))));
    MR_Word Status_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdDefn0_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word MaybeIntDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_9, (MR_Integer) 0))));
    MR_Word MaybeImpDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_9, (MR_Integer) 1))));

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
          MR_Word IntDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIntDefn_12, (MR_Integer) 0))));
          MR_Word StdDefn_15;
          MR_Word SrcDefns_16;
          MR_Word CheckedDefn_17;

          {
            StdDefn_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StdDefn_15, 0) = (MR_Box) ((MR_Unsigned) (Status_10));
            MR_hl_field(MR_mktag(0), StdDefn_15, 1) = ((MR_Box) (IntDefn_14));
          }
          {
            SrcDefns_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_16, 0) = ((MR_Box) (MaybeIntDefn_12));
            MR_hl_field(MR_mktag(0), SrcDefns_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            CheckedDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CheckedDefn_17, 0) = ((MR_Box) (StdDefn_15));
            MR_hl_field(MR_mktag(0), CheckedDefn_17, 1) = ((MR_Box) (SrcDefns_16));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (CheckedDefn_17)), STATE_VARIABLE_InstCtorCheckedMap_0_18, STATE_VARIABLE_InstCtorCheckedMap_19);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_InstCtorCheckedMap_19 = STATE_VARIABLE_InstCtorCheckedMap_0_18;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_24;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[8]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (MaybeImpDefn_13));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_24, (MR_String) "predicate \140parse_tree.comp_unit_interface.pre_grab_pre_qual_inst_ctor_checked_defn\'/4", (MR_String) "exported but has imp defn");
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (CheckedDefn0_6)), STATE_VARIABLE_InstCtorCheckedMap_0_18, STATE_VARIABLE_InstCtorCheckedMap_19);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_ItemTypeDefn_4;

    parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_ItemTypeDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv4_ItemTypeDefn_4));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_ItemTypeDefn_4;

    parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_ItemTypeDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv3_ItemTypeDefn_4));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_ItemTypeDefn_4;

    parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_ItemTypeDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv2_ItemTypeDefn_4));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_ItemTypeDefn_4;

    parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_ItemTypeDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_ItemTypeDefn_4));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_ItemTypeDefn_4;

    parse_tree__comp_unit_interface__delete_uc_preds_make_solver_type_dummy_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ItemTypeDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_ItemTypeDefn_4));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0(
  MR_Word CheckedDefn0_3,
  MR_Word * CheckedDefn_4)
{
  if (((MR_tag((MR_Word) CheckedDefn0_3)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedDefn0_3, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SolverDefn0_5)) == (MR_Integer) 0))
      *CheckedDefn_4 = CheckedDefn0_3;
    else
    {
      MR_Word MaybeAbstractDefn0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverDefn0_5, (MR_Integer) 0))));
      MR_Word FullDefn0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverDefn0_5, (MR_Integer) 1))));
      MR_Word SolverDefn_13;
      MR_Word SrcDefns_15;

      if ((MaybeAbstractDefn0_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word AbstractDefn_16;
        MR_Word WrapAbstractDefn_17;
        MR_Word Var_43;
        MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FullDefn0_10, (MR_Integer) 0))));
        MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FullDefn0_10, (MR_Integer) 1))));
        MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FullDefn0_10, (MR_Integer) 3))));
        MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FullDefn0_10, (MR_Integer) 4))));
        MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FullDefn0_10, (MR_Integer) 5))));

        {
          AbstractDefn_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), AbstractDefn_16, 0) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(0), AbstractDefn_16, 1) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), AbstractDefn_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(MR_mktag(0), AbstractDefn_16, 3) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), AbstractDefn_16, 4) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), AbstractDefn_16, 5) = ((MR_Box) (Var_100));
        }
        {
          SolverDefn_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverDefn_13, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), SolverDefn_13, 1) = ((MR_Box) (AbstractDefn_16));
        }
        WrapAbstractDefn_17 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn_16);
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (WrapAbstractDefn_17));
        }
        {
          SrcDefns_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), SrcDefns_15, 1) = ((MR_Box) (Var_43));
        }
      }
      else
      {
        MR_Word AbstractDefn0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractDefn0_9, (MR_Integer) 0))));
        MR_Word WrapAbstractDefn0_14;
        MR_Word Var_44;

        {
          SolverDefn_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverDefn_13, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), SolverDefn_13, 1) = ((MR_Box) (AbstractDefn0_11));
        }
        WrapAbstractDefn0_14 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractDefn0_11);
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (WrapAbstractDefn0_14));
        }
        {
          SrcDefns_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_15, 0) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(0), SrcDefns_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *CheckedDefn_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SolverDefn_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SrcDefns_15));
      }
    }
  }
  else
  {
    MR_Word StdDefn0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn0_3, (MR_Integer) 0))));
    MR_Word SrcDefns0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn0_3, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) StdDefn0_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *CheckedDefn_4 = CheckedDefn0_3;
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuDefn0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_18, (MR_Integer) 1))));
          MR_String HeadCtor_23 = ((MR_String) ((MR_hl_field(MR_mktag(2), StdDefn0_18, (MR_Integer) 2))));
          MR_Word TailCtors_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_18, (MR_Integer) 3))));
          MR_Word MaybeCJCsDefnOrEnum0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_18, (MR_Integer) 4))));
          MR_Word IntDefns0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_19, (MR_Integer) 0))));
          MR_Word ImpDefns0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_19, (MR_Integer) 1))));
          MR_Word ImpForeignEnums0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_19, (MR_Integer) 2))));
          MR_Word StdDefn_29;
          MR_Word Status_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StdDefn0_18, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word SrcDefns_54;

          switch (Status_53) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word DuDefn_32;
                MR_Word MaybeCJCsDefnOrEnum_51;
                MR_Word ImpDefns_52;

                parse_tree__comp_unit_interface__delete_uc_preds_from_du_type_defn_2_p_0(DuDefn0_22, &DuDefn_32);
                parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_or_enum_2_p_0(MaybeCJCsDefnOrEnum0_25, &MaybeCJCsDefnOrEnum_51);
                {
                  StdDefn_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 0) = (MR_Box) ((MR_Unsigned) (Status_53));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 1) = ((MR_Box) (DuDefn_32));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 2) = ((MR_Box) (HeadCtor_23));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 3) = ((MR_Box) (TailCtors_24));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_51));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[40]), ImpDefns0_27, &ImpDefns_52);
                {
                  SrcDefns_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SrcDefns_54, 0) = ((MR_Box) (IntDefns0_26));
                  MR_hl_field(MR_mktag(0), SrcDefns_54, 1) = ((MR_Box) (ImpDefns_52));
                  MR_hl_field(MR_mktag(0), SrcDefns_54, 2) = ((MR_Box) (ImpForeignEnums0_28));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeCJCsDefnOrEnum_30;
                MR_Word ImpDefns_31;

                parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_or_enum_2_p_0(MaybeCJCsDefnOrEnum0_25, &MaybeCJCsDefnOrEnum_30);
                {
                  StdDefn_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 0) = (MR_Box) ((MR_Unsigned) (Status_53));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 1) = ((MR_Box) (DuDefn0_22));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 2) = ((MR_Box) (HeadCtor_23));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 3) = ((MR_Box) (TailCtors_24));
                  MR_hl_field(MR_mktag(2), StdDefn_29, 4) = ((MR_Box) (MaybeCJCsDefnOrEnum_30));
                }
                mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[41]), ImpDefns0_27, &ImpDefns_31);
                {
                  SrcDefns_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SrcDefns_54, 0) = ((MR_Box) (IntDefns0_26));
                  MR_hl_field(MR_mktag(0), SrcDefns_54, 1) = ((MR_Box) (ImpDefns_31));
                  MR_hl_field(MR_mktag(0), SrcDefns_54, 2) = ((MR_Box) (ImpForeignEnums0_28));
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
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *CheckedDefn_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdDefn_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SrcDefns_54));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word MaybeCJCsDefn0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 3))));
              MR_Word Status_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word SrcDefns_62;
              MR_Word DuDefn0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 2))));
              MR_Word IntDefns0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_19, (MR_Integer) 0))));
              MR_Word ImpDefns0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_19, (MR_Integer) 1))));
              MR_Word ImpForeignEnums0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_19, (MR_Integer) 2))));
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
                      StdDefn_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StdDefn_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), StdDefn_67, 1) = (MR_Box) ((MR_Unsigned) (Status_61));
                      MR_hl_field(MR_mktag(3), StdDefn_67, 2) = ((MR_Box) (DuDefn_57));
                      MR_hl_field(MR_mktag(3), StdDefn_67, 3) = ((MR_Box) (MaybeCJCsDefn_58));
                    }
                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[42]), ImpDefns0_65, &ImpDefns_56);
                    {
                      SrcDefns_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SrcDefns_62, 0) = ((MR_Box) (IntDefns0_64));
                      MR_hl_field(MR_mktag(0), SrcDefns_62, 1) = ((MR_Box) (ImpDefns_56));
                      MR_hl_field(MR_mktag(0), SrcDefns_62, 2) = ((MR_Box) (ImpForeignEnums0_66));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MaybeCJCsDefn_34;
                    MR_Word ImpDefns_55;

                    parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_2_p_0(MaybeCJCsDefn0_33, &MaybeCJCsDefn_34);
                    {
                      StdDefn_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StdDefn_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), StdDefn_67, 1) = (MR_Box) ((MR_Unsigned) (Status_61));
                      MR_hl_field(MR_mktag(3), StdDefn_67, 2) = ((MR_Box) (DuDefn0_63));
                      MR_hl_field(MR_mktag(3), StdDefn_67, 3) = ((MR_Box) (MaybeCJCsDefn_34));
                    }
                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[43]), ImpDefns0_65, &ImpDefns_55);
                    {
                      SrcDefns_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SrcDefns_62, 0) = ((MR_Box) (IntDefns0_64));
                      MR_hl_field(MR_mktag(0), SrcDefns_62, 1) = ((MR_Box) (ImpDefns_55));
                      MR_hl_field(MR_mktag(0), SrcDefns_62, 2) = ((MR_Box) (ImpForeignEnums0_66));
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
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *CheckedDefn_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdDefn_67));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SrcDefns_62));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbsDefn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 2))));
              MR_Word Status_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word SrcDefns_81;
              MR_Word StdDefn_85;
              MR_Word MaybeCJCsDefn0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 3))));

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
                      StdDefn_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), StdDefn_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), StdDefn_85, 1) = (MR_Box) ((MR_Unsigned) (Status_80));
                      MR_hl_field(MR_mktag(3), StdDefn_85, 2) = ((MR_Box) (AbsDefn_35));
                      MR_hl_field(MR_mktag(3), StdDefn_85, 3) = ((MR_Box) (MaybeCJCsDefn_74));
                    }
                    IntDefns0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_19, (MR_Integer) 0))));
                    ImpDefns0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_19, (MR_Integer) 1))));
                    ImpForeignEnums0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_19, (MR_Integer) 2))));
                    mercury__list__map_3_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[39]), ImpDefns0_71, &ImpDefns_73);
                    {
                      SrcDefns_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), SrcDefns_81, 0) = ((MR_Box) (IntDefns0_70));
                      MR_hl_field(MR_mktag(0), SrcDefns_81, 1) = ((MR_Box) (ImpDefns_73));
                      MR_hl_field(MR_mktag(0), SrcDefns_81, 2) = ((MR_Box) (ImpForeignEnums0_72));
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
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *CheckedDefn_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdDefn_85));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SrcDefns_81));
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
  {
    MR_Word MaybeDefnC0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefn0_3, (MR_Integer) 0))));
    MR_Word MaybeDefnJ0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefn0_3, (MR_Integer) 1))));
    MR_Word MaybeDefnCs0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefn0_3, (MR_Integer) 2))));
    MR_Word MaybeDefnC_8;
    MR_Word MaybeDefnJ_9;
    MR_Word MaybeDefnCs_10;

    if ((MaybeDefnC0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnC_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ItemTypeDefn0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnC0_5, (MR_Integer) 0))));
      MR_Word DetailsForeign0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_13, (MR_Integer) 2))));
      MR_Word DetailsForeign_15;
      MR_Word ItemTypeDefn_16;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_13, (MR_Integer) 0))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_13, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_13, (MR_Integer) 3))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_13, (MR_Integer) 4))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_13, (MR_Integer) 5))));
      MR_Word MaybeCanonical0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_14, (MR_Integer) 1))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_14, (MR_Integer) 0))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_14, (MR_Integer) 2))));

      if ((MaybeCanonical0_31 == (MR_Word) ((MR_Unsigned) 0U)))
        DetailsForeign_15 = DetailsForeign0_14;
      else
        {
          DetailsForeign_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsForeign_15, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(0), DetailsForeign_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
          MR_hl_field(MR_mktag(0), DetailsForeign_15, 2) = ((MR_Box) (Var_37));
        }
      {
        ItemTypeDefn_16 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_16, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_16, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_16, 2) = ((MR_Box) (DetailsForeign_15));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_16, 3) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_16, 4) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_16, 5) = ((MR_Box) (Var_21));
      }
      {
        MaybeDefnC_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnC_8, 0) = ((MR_Box) (ItemTypeDefn_16));
      }
    }
    if ((MaybeDefnJ0_6 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnJ_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word ItemTypeDefn0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnJ0_6, (MR_Integer) 0))));
      MR_Word DetailsForeign0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_43, (MR_Integer) 2))));
      MR_Word DetailsForeign_45;
      MR_Word ItemTypeDefn_46;
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_43, (MR_Integer) 0))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_43, (MR_Integer) 1))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_43, (MR_Integer) 3))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_43, (MR_Integer) 4))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_43, (MR_Integer) 5))));
      MR_Word MaybeCanonical0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_44, (MR_Integer) 1))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_44, (MR_Integer) 0))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_44, (MR_Integer) 2))));

      if ((MaybeCanonical0_61 == (MR_Word) ((MR_Unsigned) 0U)))
        DetailsForeign_45 = DetailsForeign0_44;
      else
        {
          DetailsForeign_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsForeign_45, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(0), DetailsForeign_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
          MR_hl_field(MR_mktag(0), DetailsForeign_45, 2) = ((MR_Box) (Var_67));
        }
      {
        ItemTypeDefn_46 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_46, 1) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_46, 2) = ((MR_Box) (DetailsForeign_45));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_46, 3) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_46, 4) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_46, 5) = ((MR_Box) (Var_51));
      }
      {
        MaybeDefnJ_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnJ_9, 0) = ((MR_Box) (ItemTypeDefn_46));
      }
    }
    parse_tree__comp_unit_interface__delete_uc_preds_from_maybe_foreign_type_defn_2_p_0(MaybeDefnCs0_7, &MaybeDefnCs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *CJCsMaybeDefn_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeDefnC_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeDefnJ_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDefnCs_10));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_maybe_foreign_type_defn_2_p_0(
  MR_Word MaybeDefn0_3,
  MR_Word * MaybeDefn_4)
{
  if ((MaybeDefn0_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeDefn_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ItemTypeDefn0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefn0_3, (MR_Integer) 0))));
    MR_Word DetailsForeign0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_5, (MR_Integer) 2))));
    MR_Word DetailsForeign_7;
    MR_Word ItemTypeDefn_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_5, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_5, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_5, (MR_Integer) 3))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_5, (MR_Integer) 4))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_5, (MR_Integer) 5))));
    MR_Word MaybeCanonical0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_6, (MR_Integer) 1))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_6, (MR_Integer) 0))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_6, (MR_Integer) 2))));

    if ((MaybeCanonical0_23 == (MR_Word) ((MR_Unsigned) 0U)))
      DetailsForeign_7 = DetailsForeign0_6;
    else
      {
        DetailsForeign_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DetailsForeign_7, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), DetailsForeign_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
        MR_hl_field(MR_mktag(0), DetailsForeign_7, 2) = ((MR_Box) (Var_29));
      }
    {
      ItemTypeDefn_8 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ItemTypeDefn_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), ItemTypeDefn_8, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), ItemTypeDefn_8, 2) = ((MR_Box) (DetailsForeign_7));
      MR_hl_field(MR_mktag(0), ItemTypeDefn_8, 3) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), ItemTypeDefn_8, 4) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), ItemTypeDefn_8, 5) = ((MR_Box) (Var_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefn_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemTypeDefn_8));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_c_j_cs_maybe_defn_or_enum_2_p_0(
  MR_Word CJCsMaybeDefnOrEnum0_3,
  MR_Word * CJCsMaybeDefnOrEnum_4)
{
  {
    MR_Word MaybeDefnOrEnumC0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefnOrEnum0_3, (MR_Integer) 0))));
    MR_Word MaybeDefnOrEnumJ0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefnOrEnum0_3, (MR_Integer) 1))));
    MR_Word MaybeDefnOrEnumCs0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefnOrEnum0_3, (MR_Integer) 2))));
    MR_Word MaybeDefnOrEnumC_8;
    MR_Word MaybeDefnOrEnumJ_9;
    MR_Word MaybeDefnOrEnumCs_10;

    if ((MaybeDefnOrEnumC0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumC_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumC0_5, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_13)) == (MR_Integer) 0))
        MaybeDefnOrEnumC_8 = MaybeDefnOrEnumC0_5;
      else
      {
        MR_Word ItemTypeDefn0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnOrEnum0_13, (MR_Integer) 0))));
        MR_Word DetailsForeign0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_15, (MR_Integer) 2))));
        MR_Word DetailsForeign_17;
        MR_Word ItemTypeDefn_18;
        MR_Word DefnOrEnum_19;
        MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_15, (MR_Integer) 0))));
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_15, (MR_Integer) 1))));
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_15, (MR_Integer) 3))));
        MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_15, (MR_Integer) 4))));
        MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_15, (MR_Integer) 5))));
        MR_Word MaybeCanonical0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_16, (MR_Integer) 1))));
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_16, (MR_Integer) 0))));
        MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_16, (MR_Integer) 2))));

        if ((MaybeCanonical0_34 == (MR_Word) ((MR_Unsigned) 0U)))
          DetailsForeign_17 = DetailsForeign0_16;
        else
          {
            DetailsForeign_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DetailsForeign_17, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), DetailsForeign_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
            MR_hl_field(MR_mktag(0), DetailsForeign_17, 2) = ((MR_Box) (Var_40));
          }
        {
          ItemTypeDefn_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemTypeDefn_18, 0) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_18, 1) = ((MR_Box) (Var_21));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_18, 2) = ((MR_Box) (DetailsForeign_17));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_18, 3) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_18, 4) = ((MR_Box) (Var_23));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_18, 5) = ((MR_Box) (Var_24));
        }
        {
          DefnOrEnum_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DefnOrEnum_19, 0) = ((MR_Box) (ItemTypeDefn_18));
        }
        {
          MaybeDefnOrEnumC_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDefnOrEnumC_8, 0) = ((MR_Box) (DefnOrEnum_19));
        }
      }
    }
    if ((MaybeDefnOrEnumJ0_6 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDefnOrEnumJ_9 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DefnOrEnum0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnumJ0_6, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) DefnOrEnum0_46)) == (MR_Integer) 0))
        MaybeDefnOrEnumJ_9 = MaybeDefnOrEnumJ0_6;
      else
      {
        MR_Word ItemTypeDefn0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnOrEnum0_46, (MR_Integer) 0))));
        MR_Word DetailsForeign0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_48, (MR_Integer) 2))));
        MR_Word DetailsForeign_50;
        MR_Word ItemTypeDefn_51;
        MR_Word DefnOrEnum_52;
        MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_48, (MR_Integer) 0))));
        MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_48, (MR_Integer) 1))));
        MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_48, (MR_Integer) 3))));
        MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_48, (MR_Integer) 4))));
        MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_48, (MR_Integer) 5))));
        MR_Word MaybeCanonical0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_49, (MR_Integer) 1))));
        MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_49, (MR_Integer) 0))));
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_49, (MR_Integer) 2))));

        if ((MaybeCanonical0_67 == (MR_Word) ((MR_Unsigned) 0U)))
          DetailsForeign_50 = DetailsForeign0_49;
        else
          {
            DetailsForeign_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), DetailsForeign_50, 0) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), DetailsForeign_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
            MR_hl_field(MR_mktag(0), DetailsForeign_50, 2) = ((MR_Box) (Var_73));
          }
        {
          ItemTypeDefn_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemTypeDefn_51, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_51, 1) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_51, 2) = ((MR_Box) (DetailsForeign_50));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_51, 3) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_51, 4) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_51, 5) = ((MR_Box) (Var_57));
        }
        {
          DefnOrEnum_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DefnOrEnum_52, 0) = ((MR_Box) (ItemTypeDefn_51));
        }
        {
          MaybeDefnOrEnumJ_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDefnOrEnumJ_9, 0) = ((MR_Box) (DefnOrEnum_52));
        }
      }
    }
    parse_tree__comp_unit_interface__delete_uc_preds_from_maybe_foreign_type_defn_or_enum_2_p_0(MaybeDefnOrEnumCs0_7, &MaybeDefnOrEnumCs_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *CJCsMaybeDefnOrEnum_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeDefnOrEnumC_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeDefnOrEnumJ_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDefnOrEnumCs_10));
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_maybe_foreign_type_defn_or_enum_2_p_0(
  MR_Word MaybeDefnOrEnum0_3,
  MR_Word * MaybeDefnOrEnum_4)
{
  if ((MaybeDefnOrEnum0_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeDefnOrEnum_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DefnOrEnum0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnOrEnum0_3, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) DefnOrEnum0_5)) == (MR_Integer) 0))
      *MaybeDefnOrEnum_4 = MaybeDefnOrEnum0_3;
    else
    {
      MR_Word ItemTypeDefn0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnOrEnum0_5, (MR_Integer) 0))));
      MR_Word DetailsForeign0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_7, (MR_Integer) 2))));
      MR_Word DetailsForeign_9;
      MR_Word ItemTypeDefn_10;
      MR_Word DefnOrEnum_11;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_7, (MR_Integer) 0))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_7, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_7, (MR_Integer) 3))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_7, (MR_Integer) 4))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_7, (MR_Integer) 5))));
      MR_Word MaybeCanonical0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_8, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_8, (MR_Integer) 0))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign0_8, (MR_Integer) 2))));

      if ((MaybeCanonical0_26 == (MR_Word) ((MR_Unsigned) 0U)))
        DetailsForeign_9 = DetailsForeign0_8;
      else
        {
          DetailsForeign_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsForeign_9, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), DetailsForeign_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
          MR_hl_field(MR_mktag(0), DetailsForeign_9, 2) = ((MR_Box) (Var_32));
        }
      {
        ItemTypeDefn_10 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemTypeDefn_10, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_10, 1) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_10, 2) = ((MR_Box) (DetailsForeign_9));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_10, 3) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_10, 4) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), ItemTypeDefn_10, 5) = ((MR_Box) (Var_16));
      }
      {
        DefnOrEnum_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DefnOrEnum_11, 0) = ((MR_Box) (ItemTypeDefn_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDefnOrEnum_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DefnOrEnum_11));
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__delete_uc_preds_from_du_type_defn_2_p_0(
  MR_Word ItemTypeDefn0_3,
  MR_Word * ItemTypeDefn_4)
{
  {
    MR_Word DetailsDu0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 2))));
    MR_Word DetailsDu_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 0))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 3))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 4))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_3, (MR_Integer) 5))));
    MR_Word MaybeCanonical_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_5, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_5, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_5, (MR_Integer) 2))));

    if ((MaybeCanonical_20 == (MR_Word) ((MR_Unsigned) 0U)))
      DetailsDu_6 = DetailsDu0_5;
    else
      {
        DetailsDu_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DetailsDu_6, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), DetailsDu_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__comp_unit_interface_scalar_common_4[0])));
        MR_hl_field(MR_mktag(0), DetailsDu_6, 2) = ((MR_Box) (Var_26));
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *ItemTypeDefn_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DetailsDu_6));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_11));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__comp_unit_interface__make_typeclass_abstract_for_int3_1_f_0(
  MR_Word OrigTypeClass_3)
{
  {
    MR_Word TypeClass_4;
    MR_Word ClassName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 0))));
    MR_Word ParamsTVars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 1))));
    MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 5))));
    MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 6))));
    MR_Word SeqNum_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeClass_3, (MR_Integer) 7))));

    {
      TypeClass_4 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClass_4, 0) = ((MR_Box) (ClassName_5));
      MR_hl_field(MR_mktag(0), TypeClass_4, 1) = ((MR_Box) (ParamsTVars_6));
      MR_hl_field(MR_mktag(0), TypeClass_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), TypeClass_4, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), TypeClass_4, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), TypeClass_4, 5) = ((MR_Box) (TVarSet_10));
      MR_hl_field(MR_mktag(0), TypeClass_4, 6) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), TypeClass_4, 7) = ((MR_Box) (SeqNum_12));
    }
    return TypeClass_4;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__comp_unit_interface__make_mode_defn_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word CheckedModeDefn0_6,
  MR_Word STATE_VARIABLE_CheckedModeMap_0_20,
  MR_Word * STATE_VARIABLE_CheckedModeMap_21)
{
  {
    MR_Word StdDefn0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedModeDefn0_6, (MR_Integer) 0))));
    MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedModeDefn0_6, (MR_Integer) 1))));
    MR_Word Status0_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdDefn0_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word MaybeAbstractDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdDefn0_8, (MR_Integer) 1))));

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
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 0))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 1))));
          MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 3))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 4))));
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 5))));

          {
            AbstractDefn_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 1) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 3) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 4) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 5) = ((MR_Box) (Var_31));
          }
          {
            StdDefn_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StdDefn_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), StdDefn_14, 1) = ((MR_Box) (AbstractDefn_13));
          }
          MaybeIntDefn0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_9, (MR_Integer) 0))));
          MaybeIntDefn_17 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[38]), MaybeIntDefn0_15);
          {
            SrcDefns_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_18, 0) = ((MR_Box) (MaybeIntDefn_17));
            MR_hl_field(MR_mktag(0), SrcDefns_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            CheckedModeDefn_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CheckedModeDefn_19, 0) = ((MR_Box) (StdDefn_14));
            MR_hl_field(MR_mktag(0), CheckedModeDefn_19, 1) = ((MR_Box) (SrcDefns_18));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_5)), ((MR_Box) (CheckedModeDefn_19)), STATE_VARIABLE_CheckedModeMap_0_20, STATE_VARIABLE_CheckedModeMap_21);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_CheckedModeMap_21 = STATE_VARIABLE_CheckedModeMap_0_20;
        break;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__comp_unit_interface__make_inst_defn_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0(
  MR_Word InstCtor_5,
  MR_Word CheckedInstDefn0_6,
  MR_Word STATE_VARIABLE_CheckedInstMap_0_20,
  MR_Word * STATE_VARIABLE_CheckedInstMap_21)
{
  {
    MR_Word StdDefn0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedInstDefn0_6, (MR_Integer) 0))));
    MR_Word SrcDefns0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedInstDefn0_6, (MR_Integer) 1))));
    MR_Word Status0_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdDefn0_8, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word MaybeAbstractDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdDefn0_8, (MR_Integer) 1))));

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
          MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 0))));
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 1))));
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 2))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 4))));
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 5))));
          MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAbstractDefn_11, (MR_Integer) 6))));

          {
            AbstractDefn_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 1) = ((MR_Box) (Var_27));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 2) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 4) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 5) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(0), AbstractDefn_13, 6) = ((MR_Box) (Var_32));
          }
          {
            StdDefn_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StdDefn_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), StdDefn_14, 1) = ((MR_Box) (AbstractDefn_13));
          }
          MaybeIntDefn0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcDefns0_9, (MR_Integer) 0))));
          MaybeIntDefn_17 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[37]), MaybeIntDefn0_15);
          {
            SrcDefns_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_18, 0) = ((MR_Box) (MaybeIntDefn_17));
            MR_hl_field(MR_mktag(0), SrcDefns_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            CheckedInstDefn_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CheckedInstDefn_19, 0) = ((MR_Box) (StdDefn_14));
            MR_hl_field(MR_mktag(0), CheckedInstDefn_19, 1) = ((MR_Box) (SrcDefns_18));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_5)), ((MR_Box) (CheckedInstDefn_19)), STATE_VARIABLE_CheckedInstMap_0_20, STATE_VARIABLE_CheckedInstMap_21);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_CheckedInstMap_21 = STATE_VARIABLE_CheckedInstMap_0_20;
        break;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedTypeDefn0_6,
  MR_Word STATE_VARIABLE_CheckedTypeMap_0_51,
  MR_Word * STATE_VARIABLE_CheckedTypeMap_52)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) CheckedTypeDefn0_6)) == (MR_Integer) 0))
    {
      MR_Word SolverDefn0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedTypeDefn0_6, (MR_Integer) 0))));
      MR_Word AbstractSolverDefn_11;

      if (((MR_tag((MR_Word) SolverDefn0_8)) == (MR_Integer) 0))
      {
        MR_Word AbstractStatus_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SolverDefn0_8, (MR_Integer) 0))) & (MR_Integer) 1);

        AbstractSolverDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverDefn0_8, (MR_Integer) 1))));
        succeeded = (AbstractStatus_10 == (MR_Integer) 0);
      }
      else
      {
        MR_Word MaybeAbstractSolverDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverDefn0_8, (MR_Integer) 0))));

        succeeded = (MaybeAbstractSolverDefn_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          AbstractSolverDefn_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractSolverDefn_12, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word SolverDefn_14;
        MR_Word IntDefn_15;
        MR_Word SrcDefns_16;
        MR_Word CheckedTypeDefn_17;
        MR_Word Var_91;

        {
          SolverDefn_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverDefn_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), SolverDefn_14, 1) = ((MR_Box) (AbstractSolverDefn_11));
        }
        IntDefn_15 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractSolverDefn_11);
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (IntDefn_15));
        }
        {
          SrcDefns_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_16, 0) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(0), SrcDefns_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CheckedTypeDefn_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CheckedTypeDefn_17, 0) = ((MR_Box) (SolverDefn_14));
          MR_hl_field(MR_mktag(0), CheckedTypeDefn_17, 1) = ((MR_Box) (SrcDefns_16));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_17)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
      }
      else
        *STATE_VARIABLE_CheckedTypeMap_52 = STATE_VARIABLE_CheckedTypeMap_0_51;
    }
    else
    {
      MR_Word StdDefn0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedTypeDefn0_6, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) StdDefn0_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word EqvStatus_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), StdDefn0_18, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word EqvDefn0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StdDefn0_18, (MR_Integer) 1))));

            switch (EqvStatus_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                {
                  MR_Word AbsDefn_23;
                  MR_Word StdDefn_25;
                  MR_Word Var_85;
                  MR_Word IntDefn_95;
                  MR_Word SrcDefns_96;
                  MR_Word CheckedTypeDefn_97;
                  MR_Word Var_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn0_20, (MR_Integer) 0))));
                  MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn0_20, (MR_Integer) 1))));
                  MR_Word Var_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn0_20, (MR_Integer) 3))));
                  MR_Word Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn0_20, (MR_Integer) 4))));
                  MR_Word Var_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn0_20, (MR_Integer) 5))));

                  {
                    AbsDefn_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), AbsDefn_23, 0) = ((MR_Box) (Var_182));
                    MR_hl_field(MR_mktag(0), AbsDefn_23, 1) = ((MR_Box) (Var_183));
                    MR_hl_field(MR_mktag(0), AbsDefn_23, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), AbsDefn_23, 3) = ((MR_Box) (Var_185));
                    MR_hl_field(MR_mktag(0), AbsDefn_23, 4) = ((MR_Box) (Var_186));
                    MR_hl_field(MR_mktag(0), AbsDefn_23, 5) = ((MR_Box) (Var_187));
                  }
                  {
                    StdDefn_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), StdDefn_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), StdDefn_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), StdDefn_25, 2) = ((MR_Box) (AbsDefn_23));
                    MR_hl_field(MR_mktag(3), StdDefn_25, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]));
                  }
                  IntDefn_95 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_23);
                  {
                    Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (IntDefn_95));
                    MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    SrcDefns_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SrcDefns_96, 0) = ((MR_Box) (Var_85));
                    MR_hl_field(MR_mktag(0), SrcDefns_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), SrcDefns_96, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    CheckedTypeDefn_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CheckedTypeDefn_97, 0) = ((MR_Box) (StdDefn_25));
                    MR_hl_field(MR_mktag(1), CheckedTypeDefn_97, 1) = ((MR_Box) (SrcDefns_96));
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
            MR_Word SubStatus_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), StdDefn0_18, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word SubDefn0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StdDefn0_18, (MR_Integer) 1))));

            switch (SubStatus_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                {
                  MR_Word DetailsSub_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn0_27, (MR_Integer) 2))));
                  MR_Word Var_77;
                  MR_Word IntDefn_104;
                  MR_Word SrcDefns_105;
                  MR_Word CheckedTypeDefn_106;
                  MR_Word DetailsAbstract_108;
                  MR_Word AbsDefn_109;
                  MR_Word StdDefn_110;
                  MR_Word Var_193;
                  MR_Word Var_194;
                  MR_Word Var_196;
                  MR_Word Var_197;
                  MR_Word Var_198;

                  parse_tree__comp_unit_interface__make_sub_type_abstract_2_p_0(DetailsSub_28, &DetailsAbstract_108);
                  Var_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn0_27, (MR_Integer) 0))));
                  Var_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn0_27, (MR_Integer) 1))));
                  Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn0_27, (MR_Integer) 3))));
                  Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn0_27, (MR_Integer) 4))));
                  Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn0_27, (MR_Integer) 5))));
                  {
                    AbsDefn_109 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), AbsDefn_109, 0) = ((MR_Box) (Var_193));
                    MR_hl_field(MR_mktag(0), AbsDefn_109, 1) = ((MR_Box) (Var_194));
                    MR_hl_field(MR_mktag(0), AbsDefn_109, 2) = ((MR_Box) (DetailsAbstract_108));
                    MR_hl_field(MR_mktag(0), AbsDefn_109, 3) = ((MR_Box) (Var_196));
                    MR_hl_field(MR_mktag(0), AbsDefn_109, 4) = ((MR_Box) (Var_197));
                    MR_hl_field(MR_mktag(0), AbsDefn_109, 5) = ((MR_Box) (Var_198));
                  }
                  {
                    StdDefn_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), StdDefn_110, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), StdDefn_110, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), StdDefn_110, 2) = ((MR_Box) (AbsDefn_109));
                    MR_hl_field(MR_mktag(3), StdDefn_110, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]));
                  }
                  IntDefn_104 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_109);
                  {
                    Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (IntDefn_104));
                    MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    SrcDefns_105 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SrcDefns_105, 0) = ((MR_Box) (Var_77));
                    MR_hl_field(MR_mktag(0), SrcDefns_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), SrcDefns_105, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    CheckedTypeDefn_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CheckedTypeDefn_106, 0) = ((MR_Box) (StdDefn_110));
                    MR_hl_field(MR_mktag(1), CheckedTypeDefn_106, 1) = ((MR_Box) (SrcDefns_105));
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
            MR_Word DuStatus_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), StdDefn0_18, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word DuDefn0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_18, (MR_Integer) 1))));
            MR_Word CJCsMaybeDefnOrEnum_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StdDefn0_18, (MR_Integer) 4))));
            MR_Word MaybeDefnOrEnumC_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefnOrEnum_34, (MR_Integer) 0))));
            MR_Word MaybeDefnOrEnumJava_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefnOrEnum_34, (MR_Integer) 1))));
            MR_Word MaybeDefnOrEnumCsharp_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefnOrEnum_34, (MR_Integer) 2))));
            MR_Word MaybeDefnC0_44;
            MR_Word MaybeDefnJava0_45;
            MR_Word MaybeDefnCsharp0_46;
            MR_Word CJCsMaybeDefn0_47;

            parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__304__1_2_p_0(MaybeDefnOrEnumC_35, &MaybeDefnC0_44);
            parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__304__1_2_p_0(MaybeDefnOrEnumJava_36, &MaybeDefnJava0_45);
            parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__304__1_2_p_0(MaybeDefnOrEnumCsharp_37, &MaybeDefnCsharp0_46);
            {
              CJCsMaybeDefn0_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CJCsMaybeDefn0_47, 0) = ((MR_Box) (MaybeDefnC0_44));
              MR_hl_field(MR_mktag(0), CJCsMaybeDefn0_47, 1) = ((MR_Box) (MaybeDefnJava0_45));
              MR_hl_field(MR_mktag(0), CJCsMaybeDefn0_47, 2) = ((MR_Box) (MaybeDefnCsharp0_46));
            }
            switch (DuStatus_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
              case (MR_Integer) 1:
              case (MR_Integer) 0:
                {
                  MR_Word DetailsDu_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_31, (MR_Integer) 2))));
                  MR_Word IntCJCsDefns_50;
                  MR_Word Var_70;
                  MR_Word IntDefn_127;
                  MR_Word SrcDefns_128;
                  MR_Word CheckedTypeDefn_129;
                  MR_Word AbsStatus_130;
                  MR_Word DetailsAbstract_131;
                  MR_Word AbsDefn_132;
                  MR_Word StdDefn_133;
                  MR_Word CJCsMaybeDefn_134;
                  MR_Word Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_31, (MR_Integer) 0))));
                  MR_Word Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_31, (MR_Integer) 1))));
                  MR_Word Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_31, (MR_Integer) 3))));
                  MR_Word Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_31, (MR_Integer) 4))));
                  MR_Word Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_31, (MR_Integer) 5))));

                  switch (DuStatus_30) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 2:
                      {
                        AbsStatus_130 = (MR_Integer) 1;
                        DetailsAbstract_131 = (MR_Word) ((MR_Unsigned) 0U);
                        CJCsMaybeDefn_134 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]);
                        IntCJCsDefns_50 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        AbsStatus_130 = (MR_Integer) 1;
                        parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(DetailsDu_48, &DetailsAbstract_131);
                        CJCsMaybeDefn_134 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]);
                        IntCJCsDefns_50 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word CJCsDefns_49;

                        AbsStatus_130 = (MR_Integer) 0;
                        parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(DetailsDu_48, &DetailsAbstract_131);
                        CJCsMaybeDefn_134 = CJCsMaybeDefn0_47;
                        parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0(CJCsMaybeDefn_134, &CJCsDefns_49);
                        IntCJCsDefns_50 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[35]), CJCsDefns_49);
                      }
                      break;
                  }
                  {
                    AbsDefn_132 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), AbsDefn_132, 0) = ((MR_Box) (Var_199));
                    MR_hl_field(MR_mktag(0), AbsDefn_132, 1) = ((MR_Box) (Var_200));
                    MR_hl_field(MR_mktag(0), AbsDefn_132, 2) = ((MR_Box) (DetailsAbstract_131));
                    MR_hl_field(MR_mktag(0), AbsDefn_132, 3) = ((MR_Box) (Var_201));
                    MR_hl_field(MR_mktag(0), AbsDefn_132, 4) = ((MR_Box) (Var_202));
                    MR_hl_field(MR_mktag(0), AbsDefn_132, 5) = ((MR_Box) (Var_203));
                  }
                  {
                    StdDefn_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), StdDefn_133, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), StdDefn_133, 1) = (MR_Box) ((MR_Unsigned) (AbsStatus_130));
                    MR_hl_field(MR_mktag(3), StdDefn_133, 2) = ((MR_Box) (AbsDefn_132));
                    MR_hl_field(MR_mktag(3), StdDefn_133, 3) = ((MR_Box) (CJCsMaybeDefn_134));
                  }
                  IntDefn_127 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_132);
                  {
                    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (IntDefn_127));
                    MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (IntCJCsDefns_50));
                  }
                  {
                    SrcDefns_128 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SrcDefns_128, 0) = ((MR_Box) (Var_70));
                    MR_hl_field(MR_mktag(0), SrcDefns_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(MR_mktag(0), SrcDefns_128, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    CheckedTypeDefn_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CheckedTypeDefn_129, 0) = ((MR_Box) (StdDefn_133));
                    MR_hl_field(MR_mktag(1), CheckedTypeDefn_129, 1) = ((MR_Box) (SrcDefns_128));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_129)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
                }
                break;
              case (MR_Integer) 3:
                *STATE_VARIABLE_CheckedTypeMap_52 = STATE_VARIABLE_CheckedTypeMap_0_51;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word DuStatus_357 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word DuDefn0_358 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 2))));
                MR_Word CJCsMaybeDefn0_359 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 3))));

                switch (DuStatus_357) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                  case (MR_Integer) 1:
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_358, (MR_Integer) 0))));
                      MR_Word Var_246 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_358, (MR_Integer) 1))));
                      MR_Word Var_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_358, (MR_Integer) 3))));
                      MR_Word Var_248 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_358, (MR_Integer) 4))));
                      MR_Word Var_249 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_358, (MR_Integer) 5))));
                      MR_Word DetailsDu_285 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn0_358, (MR_Integer) 2))));
                      MR_Word IntCJCsDefns_287;
                      MR_Word Var_295;
                      MR_Word IntDefn_298;
                      MR_Word SrcDefns_299;
                      MR_Word CheckedTypeDefn_300;
                      MR_Word AbsStatus_301;
                      MR_Word DetailsAbstract_302;
                      MR_Word AbsDefn_303;
                      MR_Word StdDefn_304;
                      MR_Word CJCsMaybeDefn_305;

                      switch (DuStatus_357) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 2:
                          {
                            AbsStatus_301 = (MR_Integer) 1;
                            DetailsAbstract_302 = (MR_Word) ((MR_Unsigned) 0U);
                            CJCsMaybeDefn_305 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]);
                            IntCJCsDefns_287 = (MR_Word) ((MR_Unsigned) 0U);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            AbsStatus_301 = (MR_Integer) 1;
                            parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(DetailsDu_285, &DetailsAbstract_302);
                            CJCsMaybeDefn_305 = (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]);
                            IntCJCsDefns_287 = (MR_Word) ((MR_Unsigned) 0U);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word CJCsDefns_258;

                            AbsStatus_301 = (MR_Integer) 0;
                            parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(DetailsDu_285, &DetailsAbstract_302);
                            CJCsMaybeDefn_305 = CJCsMaybeDefn0_359;
                            parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0(CJCsMaybeDefn_305, &CJCsDefns_258);
                            IntCJCsDefns_287 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[36]), CJCsDefns_258);
                          }
                          break;
                      }
                      {
                        AbsDefn_303 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), AbsDefn_303, 0) = ((MR_Box) (Var_245));
                        MR_hl_field(MR_mktag(0), AbsDefn_303, 1) = ((MR_Box) (Var_246));
                        MR_hl_field(MR_mktag(0), AbsDefn_303, 2) = ((MR_Box) (DetailsAbstract_302));
                        MR_hl_field(MR_mktag(0), AbsDefn_303, 3) = ((MR_Box) (Var_247));
                        MR_hl_field(MR_mktag(0), AbsDefn_303, 4) = ((MR_Box) (Var_248));
                        MR_hl_field(MR_mktag(0), AbsDefn_303, 5) = ((MR_Box) (Var_249));
                      }
                      {
                        StdDefn_304 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdDefn_304, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdDefn_304, 1) = (MR_Box) ((MR_Unsigned) (AbsStatus_301));
                        MR_hl_field(MR_mktag(3), StdDefn_304, 2) = ((MR_Box) (AbsDefn_303));
                        MR_hl_field(MR_mktag(3), StdDefn_304, 3) = ((MR_Box) (CJCsMaybeDefn_305));
                      }
                      IntDefn_298 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_303);
                      {
                        Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_295, 0) = ((MR_Box) (IntDefn_298));
                        MR_hl_field(MR_mktag(1), Var_295, 1) = ((MR_Box) (IntCJCsDefns_287));
                      }
                      {
                        SrcDefns_299 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SrcDefns_299, 0) = ((MR_Box) (Var_295));
                        MR_hl_field(MR_mktag(0), SrcDefns_299, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), SrcDefns_299, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        CheckedTypeDefn_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), CheckedTypeDefn_300, 0) = ((MR_Box) (StdDefn_304));
                        MR_hl_field(MR_mktag(1), CheckedTypeDefn_300, 1) = ((MR_Box) (SrcDefns_299));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_300)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
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
                MR_Word AbsStatus_168 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word AbsDefn_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 2))));
                MR_Word CJCsMaybeDefn0_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), StdDefn0_18, (MR_Integer) 3))));

                switch (AbsStatus_168) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_57;
                      MR_Word IntDefn_151;
                      MR_Word SrcDefns_152;
                      MR_Word CheckedTypeDefn_153;
                      MR_Word StdDefn_154;
                      MR_Word CJCsDefns_156;
                      MR_Word IntCJCsDefns_157;

                      parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[8]), &CJCsDefns_156);
                      IntCJCsDefns_157 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[33]), CJCsDefns_156);
                      {
                        StdDefn_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), StdDefn_154, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), StdDefn_154, 1) = (MR_Box) ((MR_Unsigned) (AbsStatus_168));
                        MR_hl_field(MR_mktag(3), StdDefn_154, 2) = ((MR_Box) (AbsDefn_169));
                        MR_hl_field(MR_mktag(3), StdDefn_154, 3) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_2[8]));
                      }
                      IntDefn_151 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_169);
                      {
                        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (IntDefn_151));
                        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (IntCJCsDefns_157));
                      }
                      {
                        SrcDefns_152 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SrcDefns_152, 0) = ((MR_Box) (Var_57));
                        MR_hl_field(MR_mktag(0), SrcDefns_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), SrcDefns_152, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        CheckedTypeDefn_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), CheckedTypeDefn_153, 0) = ((MR_Box) (StdDefn_154));
                        MR_hl_field(MR_mktag(1), CheckedTypeDefn_153, 1) = ((MR_Box) (SrcDefns_152));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_153)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
                    }
                    break;
                  case (MR_Integer) 2:
                    *STATE_VARIABLE_CheckedTypeMap_52 = STATE_VARIABLE_CheckedTypeMap_0_51;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_231;
                      MR_Word IntDefn_234;
                      MR_Word SrcDefns_235;
                      MR_Word CheckedTypeDefn_236;
                      MR_Word CJCsDefns_239;
                      MR_Word IntCJCsDefns_240;

                      parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0(CJCsMaybeDefn0_172, &CJCsDefns_239);
                      IntCJCsDefns_240 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[34]), CJCsDefns_239);
                      IntDefn_234 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbsDefn_169);
                      {
                        Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_231, 0) = ((MR_Box) (IntDefn_234));
                        MR_hl_field(MR_mktag(1), Var_231, 1) = ((MR_Box) (IntCJCsDefns_240));
                      }
                      {
                        SrcDefns_235 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), SrcDefns_235, 0) = ((MR_Box) (Var_231));
                        MR_hl_field(MR_mktag(0), SrcDefns_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(0), SrcDefns_235, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        CheckedTypeDefn_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), CheckedTypeDefn_236, 0) = ((MR_Box) (StdDefn0_18));
                        MR_hl_field(MR_mktag(1), CheckedTypeDefn_236, 1) = ((MR_Box) (SrcDefns_235));
                      }
                      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (CheckedTypeDefn_236)), STATE_VARIABLE_CheckedTypeMap_0_51, STATE_VARIABLE_CheckedTypeMap_52);
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
}

static void MR_CALL 
parse_tree__comp_unit_interface__IntroducedFrom__pred__make_type_ctor_checked_defn_abstract_for_int3__304__1_2_p_0(
  MR_Word LambdaHeadVar__1_61,
  MR_Word * LambdaHeadVar__2_62)
{
  if ((LambdaHeadVar__1_61 == (MR_Word) ((MR_Unsigned) 0U)))
    *LambdaHeadVar__2_62 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word DorE_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LambdaHeadVar__1_61, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) DorE_41)) == (MR_Integer) 0))
      *LambdaHeadVar__2_62 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word FT_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DorE_41, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *LambdaHeadVar__2_62 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FT_43));
      }
    }
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_sub_type_abstract_2_p_0(
  MR_Word DetailsSub_3,
  MR_Word * DetailsAbstract_4)
{
  {
    MR_Word SuperType_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_3, (MR_Integer) 0))));
    MR_Word SuperTypeCtor_7;

    parse_tree__prog_type__type_to_ctor_det_2_p_0(SuperType_5, &SuperTypeCtor_7);
    *DetailsAbstract_4 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SuperTypeCtor_7)));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__make_du_type_abstract_2_p_0(
  MR_Word DetailsDu_3,
  MR_Word * DetailsAbstract_4)
{
  {
    MR_bool succeeded;
    MR_Word Ctors_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_3, (MR_Integer) 0))));
    MR_Word MaybeCanonical_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_3, (MR_Integer) 1))));
    MR_Integer NumFunctors_8;

    succeeded = parse_tree__prog_type__non_sub_du_type_is_enum_2_p_0(DetailsDu_3, &NumFunctors_8);
    if (succeeded)
    {
      MR_Integer NumBits_9;

      parse_tree__prog_type__num_bits_needed_for_n_dense_values_2_p_0(NumFunctors_8, &NumBits_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *DetailsAbstract_4 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (NumBits_9));
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
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_c_j_cs_defns_2_p_0(
  MR_Word CJCsMaybeDefn_3,
  MR_Word * CJCsDefns_4)
{
  {
    MR_Word MaybeDefnC_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefn_3, (MR_Integer) 0))));
    MR_Word MaybeDefnJava_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefn_3, (MR_Integer) 1))));
    MR_Word MaybeDefnCsharp_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsMaybeDefn_3, (MR_Integer) 2))));
    MR_Word DefnsC_12;
    MR_Word DefnsJava_13;
    MR_Word DefnsCsharp_14;
    MR_Word Var_18;

    if ((MaybeDefnC_5 == (MR_Word) ((MR_Unsigned) 0U)))
      DefnsC_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Defn_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnC_5, (MR_Integer) 0))));

      {
        DefnsC_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DefnsC_12, 0) = ((MR_Box) (Defn_32));
        MR_hl_field(MR_mktag(1), DefnsC_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeDefnJava_6 == (MR_Word) ((MR_Unsigned) 0U)))
      DefnsJava_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Defn_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnJava_6, (MR_Integer) 0))));

      {
        DefnsJava_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DefnsJava_13, 0) = ((MR_Box) (Defn_51));
        MR_hl_field(MR_mktag(1), DefnsJava_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeDefnCsharp_7 == (MR_Word) ((MR_Unsigned) 0U)))
      DefnsCsharp_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Defn_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnCsharp_7, (MR_Integer) 0))));

      {
        DefnsCsharp_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DefnsCsharp_14, 0) = ((MR_Box) (Defn_70));
        MR_hl_field(MR_mktag(1), DefnsCsharp_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), DefnsJava_13, DefnsCsharp_14);
    *CJCsDefns_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[3]), DefnsC_12, Var_18);
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__acc_int_imports_6_p_0(
  MR_Word ModuleName_7,
  MR_Word ImportUseInfo_8,
  MR_Word STATE_VARIABLE_ContextMap_0_20,
  MR_Word * STATE_VARIABLE_ContextMap_21,
  MR_Word STATE_VARIABLE_ImportUseMap_0_22,
  MR_Word * STATE_VARIABLE_ImportUseMap_23)
{
  if (((MR_tag((MR_Word) ImportUseInfo_8)) == (MR_Integer) 0))
  {
    MR_Word SectionImportAndOrUse_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImportUseInfo_8, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) SectionImportAndOrUse_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionImportAndOrUse_13, (MR_Integer) 0))));

          mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Context_14)), STATE_VARIABLE_ContextMap_0_20, STATE_VARIABLE_ContextMap_21);
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (ImportUseInfo_8)), STATE_VARIABLE_ImportUseMap_0_22, STATE_VARIABLE_ImportUseMap_23);
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
          *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
          *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), SectionImportAndOrUse_13, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
              *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
              *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
            }
            break;
        }
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_ContextMap_21 = STATE_VARIABLE_ContextMap_0_20;
    *STATE_VARIABLE_ImportUseMap_23 = STATE_VARIABLE_ImportUseMap_0_22;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__acc_int_includes_6_p_0(
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_ContextMap_0_13,
  MR_Word * STATE_VARIABLE_ContextMap_14,
  MR_Word STATE_VARIABLE_IncludeMap_0_15,
  MR_Word * STATE_VARIABLE_IncludeMap_16)
{
  {
    MR_Word Section_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InclInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InclInfo_8, (MR_Integer) 1))));

    switch (Section_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ContextMap_14 = STATE_VARIABLE_ContextMap_0_13;
          *STATE_VARIABLE_IncludeMap_16 = STATE_VARIABLE_IncludeMap_0_15;
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (Context_12)), STATE_VARIABLE_ContextMap_0_13, STATE_VARIABLE_ContextMap_14);
          mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (InclInfo_8)), STATE_VARIABLE_IncludeMap_0_15, STATE_VARIABLE_IncludeMap_16);
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_interfaces_int1_int2_6_p_0(
  MR_Word Globals_7,
  MR_Word AugMakeIntUnit_8,
  MR_Word * ParseTreeInt1_9,
  MR_Word * ParseTreeInt2_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word IntImportUseMap_12;
    MR_Word IntExplicitFIMSpecs_13;
    MR_Word ImpExplicitFIMSpecs_14;
    MR_Word TypeCtorCheckedMap_15;
    MR_Word InstCtorCheckedMap_16;
    MR_Word ModeCtorCheckedMap_17;
    MR_Word IntTypeClasses_18;
    MR_Word IntInstances_19;
    MR_Word TypeCtorRepnMap_20;

    parse_tree__comp_unit_interface__generate_interface_int1_14_p_0(Globals_7, AugMakeIntUnit_8, &IntImportUseMap_12, &IntExplicitFIMSpecs_13, &ImpExplicitFIMSpecs_14, &TypeCtorCheckedMap_15, &InstCtorCheckedMap_16, &ModeCtorCheckedMap_17, &IntTypeClasses_18, &IntInstances_19, &TypeCtorRepnMap_20, ParseTreeInt1_9, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
    parse_tree__comp_unit_interface__generate_interface_int2_11_p_0(AugMakeIntUnit_8, IntImportUseMap_12, IntExplicitFIMSpecs_13, ImpExplicitFIMSpecs_14, TypeCtorCheckedMap_15, InstCtorCheckedMap_16, ModeCtorCheckedMap_17, IntTypeClasses_18, IntInstances_19, TypeCtorRepnMap_20, ParseTreeInt2_10);
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv22_STATE_VARIABLE_FIMSpecs_10;

    parse_tree__comp_unit_interface__add_self_fim_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_STATE_VARIABLE_FIMSpecs_10);
    *wrapper_arg_3 = ((MR_Box) (conv22_STATE_VARIABLE_FIMSpecs_10));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__fim_spec_is_for_needed_language_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv20_STATE_VARIABLE_ShortImportUseMap_21;

    parse_tree__comp_unit_interface__make_imports_into_uses_int_only_maybe_implicit_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv20_STATE_VARIABLE_ShortImportUseMap_21);
    *wrapper_arg_4 = ((MR_Box) (conv20_STATE_VARIABLE_ShortImportUseMap_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_STATE_VARIABLE_MaybeUnqual_22;
    MR_Word conv16_STATE_VARIABLE_ModuleNames_24;

    parse_tree__comp_unit_interface__restrict_mode_ctor_checked_defn_for_int2_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_STATE_VARIABLE_MaybeUnqual_22, ((MR_Word) (wrapper_arg_4)), &conv16_STATE_VARIABLE_ModuleNames_24);
    *wrapper_arg_3 = ((MR_Box) (conv17_STATE_VARIABLE_MaybeUnqual_22));
    *wrapper_arg_5 = ((MR_Box) (conv16_STATE_VARIABLE_ModuleNames_24));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_MaybeUnqual_26;
    MR_Word conv12_STATE_VARIABLE_ModuleNames_28;

    parse_tree__comp_unit_interface__restrict_inst_ctor_checked_defn_for_int2_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_MaybeUnqual_26, ((MR_Word) (wrapper_arg_4)), &conv12_STATE_VARIABLE_ModuleNames_28);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_MaybeUnqual_26));
    *wrapper_arg_5 = ((MR_Box) (conv12_STATE_VARIABLE_ModuleNames_28));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_2(
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
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntInclMap_11;

    parse_tree__comp_unit_interface__add_only_int_include_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_IntInclMap_11);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IntInclMap_11));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int2_11_p_0(
  MR_Word AugMakeIntUnit_12,
  MR_Word IntImportUseMap_13,
  MR_Word IntExplicitFIMSpecs_14,
  MR_Word ImpExplicitFIMSpecs_15,
  MR_Word TypeCtorCheckedMap_16,
  MR_Word InstCtorCheckedMap_17,
  MR_Word ModeCtorCheckedMap_18,
  MR_Word IntTypeClasses_19,
  MR_Word IntInstances_20,
  MR_Word TypeCtorRepnMap_21,
  MR_Word * ParseTreeInt2_22)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeModuleSrc_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_12, (MR_Integer) 0))));
    MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 0))));
    MR_Word ModuleNameContext_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 1))));
    MR_Word IntInclMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 2))));
    MR_Word InclMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 4))));
    MR_Word ShortInclMap_32;
    MR_Word UnqualSymNames_33;
    MR_Word UsedModuleNames_34;
    MR_Word ShortTypeCtorCheckedMap_35;
    MR_Word ShortIntImplicitFIMLangs_36;
    MR_Word ShortImpImplicitFIMLangs_37;
    MR_Word ShortIntTypeClassesCord_38;
    MR_Word ShortIntInstancesCord_39;
    MR_Word ShortIntTypeClasses_40;
    MR_Word ShortIntInstances_41;
    MR_Word ShortIntUseMap_42;
    MR_Word ImportUseMap_43;
    MR_Word ShortImportUseMap_44;
    MR_Word ShortIntExplicitFIMSpecs_45;
    MR_Word ShortIntFIMSpecs_46;
    MR_Word ExplicitFIMSpecs_47;
    MR_Word ShortImpExplicitFIMSpecs_48;
    MR_Word ShortImpFIMSpecs0_49;
    MR_Word ShortImpFIMSpecs_50;
    MR_Word Var_53;
    MR_Word STATE_VARIABLE_UsedModuleNames_55_55;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_UnqualSymNames_58_58;
    MR_Word STATE_VARIABLE_UsedModuleNames_59_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_UnqualSymNames_63_63;
    MR_Word STATE_VARIABLE_UsedModuleNames_64_64;
    MR_Word STATE_VARIABLE_UnqualSymNames_66_66;
    MR_Word STATE_VARIABLE_UsedModuleNames_67_67;
    MR_Word STATE_VARIABLE_UnqualSymNames_68_68;
    MR_Word STATE_VARIABLE_UsedModuleNames_69_69;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Box conv1_ShortInclMap_32;
    MR_Box conv11_ShortTypeCtorCheckedMap_35;
    MR_Box conv10_STATE_VARIABLE_UnqualSymNames_58_58;
    MR_Box conv9_STATE_VARIABLE_UsedModuleNames_59_59;
    MR_Box conv8_ShortIntImplicitFIMLangs_36;
    MR_Box conv7_ShortImpImplicitFIMLangs_37;
    MR_Box conv15_STATE_VARIABLE_UnqualSymNames_63_63;
    MR_Box conv14_STATE_VARIABLE_UsedModuleNames_64_64;
    MR_Box conv19_STATE_VARIABLE_UnqualSymNames_66_66;
    MR_Box conv18_STATE_VARIABLE_UsedModuleNames_67_67;
    MR_Box conv21_ShortImportUseMap_44;
    MR_Box conv23_ShortIntFIMSpecs_46;
    MR_Box conv24_ShortImpFIMSpecs0_49;

    Var_53 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[29]), InclMap_31, ((MR_Box) (Var_53)), &conv1_ShortInclMap_32);
    ShortInclMap_32 = ((MR_Word) (conv1_ShortInclMap_32));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &STATE_VARIABLE_UsedModuleNames_55_55);
    Var_57 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0));
    Var_60 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    Var_61 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    mercury__map__foldl5_12_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[30]), TypeCtorCheckedMap_16, ((MR_Box) (Var_57)), &conv11_ShortTypeCtorCheckedMap_35, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_UnqualSymNames_58_58, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_55_55)), &conv9_STATE_VARIABLE_UsedModuleNames_59_59, ((MR_Box) (Var_60)), &conv8_ShortIntImplicitFIMLangs_36, ((MR_Box) (Var_61)), &conv7_ShortImpImplicitFIMLangs_37);
    ShortTypeCtorCheckedMap_35 = ((MR_Word) (conv11_ShortTypeCtorCheckedMap_35));
    STATE_VARIABLE_UnqualSymNames_58_58 = ((MR_Word) (conv10_STATE_VARIABLE_UnqualSymNames_58_58));
    STATE_VARIABLE_UsedModuleNames_59_59 = ((MR_Word) (conv9_STATE_VARIABLE_UsedModuleNames_59_59));
    ShortIntImplicitFIMLangs_36 = ((MR_Word) (conv8_ShortIntImplicitFIMLangs_36));
    ShortImpImplicitFIMLangs_37 = ((MR_Word) (conv7_ShortImpImplicitFIMLangs_37));
    mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[31]), InstCtorCheckedMap_17, ((MR_Box) (STATE_VARIABLE_UnqualSymNames_58_58)), &conv15_STATE_VARIABLE_UnqualSymNames_63_63, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_59_59)), &conv14_STATE_VARIABLE_UsedModuleNames_64_64);
    STATE_VARIABLE_UnqualSymNames_63_63 = ((MR_Word) (conv15_STATE_VARIABLE_UnqualSymNames_63_63));
    STATE_VARIABLE_UsedModuleNames_64_64 = ((MR_Word) (conv14_STATE_VARIABLE_UsedModuleNames_64_64));
    mercury__map__foldl2_values_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface__parse_tree__comp_unit_interface__type_ctor_info_maybe_unqual_symnames_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[32]), ModeCtorCheckedMap_18, ((MR_Box) (STATE_VARIABLE_UnqualSymNames_63_63)), &conv19_STATE_VARIABLE_UnqualSymNames_66_66, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_64_64)), &conv18_STATE_VARIABLE_UsedModuleNames_67_67);
    STATE_VARIABLE_UnqualSymNames_66_66 = ((MR_Word) (conv19_STATE_VARIABLE_UnqualSymNames_66_66));
    STATE_VARIABLE_UsedModuleNames_67_67 = ((MR_Word) (conv18_STATE_VARIABLE_UsedModuleNames_67_67));
    Var_70 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_typeclass_7_p_0(IntTypeClasses_19, STATE_VARIABLE_UnqualSymNames_66_66, &STATE_VARIABLE_UnqualSymNames_68_68, STATE_VARIABLE_UsedModuleNames_67_67, &STATE_VARIABLE_UsedModuleNames_69_69, Var_70, &ShortIntTypeClassesCord_38);
    Var_73 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0));
    parse_tree__comp_unit_interface__get_int2_items_from_int1_int_instance_7_p_0(IntInstances_20, STATE_VARIABLE_UnqualSymNames_68_68, &UnqualSymNames_33, STATE_VARIABLE_UsedModuleNames_69_69, &UsedModuleNames_34, Var_73, &ShortIntInstancesCord_39);
    ShortIntTypeClasses_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ShortIntTypeClassesCord_38);
    ShortIntInstances_41 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ShortIntInstancesCord_39);
    switch (UnqualSymNames_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__one_or_more_map__select_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportUseMap_13, UsedModuleNames_34, &ShortIntUseMap_42);
        break;
      case (MR_Integer) 1:
        ShortIntUseMap_42 = IntImportUseMap_13;
        break;
    }
    ImportUseMap_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 9))));
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_5));
      MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (UnqualSymNames_33));
      MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (UsedModuleNames_34));
    }
    Var_75 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), Var_74, ImportUseMap_43, ((MR_Box) (Var_75)), &conv21_ShortImportUseMap_44);
    ShortImportUseMap_44 = ((MR_Word) (conv21_ShortImportUseMap_44));
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_6));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (ShortIntImplicitFIMLangs_36));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_76, IntExplicitFIMSpecs_14, &ShortIntExplicitFIMSpecs_45);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_7));
      MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (ModuleName_28));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[12]), Var_77, ShortIntImplicitFIMLangs_36, ((MR_Box) (ShortIntExplicitFIMSpecs_45)), &conv23_ShortIntFIMSpecs_46);
    ShortIntFIMSpecs_46 = ((MR_Word) (conv23_ShortIntFIMSpecs_46));
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntExplicitFIMSpecs_14, ImpExplicitFIMSpecs_15, &ExplicitFIMSpecs_47);
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int2_11_p_0_8));
      MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (ShortImpImplicitFIMLangs_37));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_78, ExplicitFIMSpecs_47, &ShortImpExplicitFIMSpecs_48);
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[12]), Var_77, ShortImpImplicitFIMLangs_37, ((MR_Box) (ShortImpExplicitFIMSpecs_48)), &conv24_ShortImpFIMSpecs0_49);
    ShortImpFIMSpecs0_49 = ((MR_Word) (conv24_ShortImpFIMSpecs0_49));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ShortImpFIMSpecs0_49, ShortIntFIMSpecs_46, &ShortImpFIMSpecs_50);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (15 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt2_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ShortInclMap_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ShortIntUseMap_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ShortImportUseMap_44));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ShortIntFIMSpecs_46));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ShortImpFIMSpecs_50));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ShortTypeCtorCheckedMap_35));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (InstCtorCheckedMap_17));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ModeCtorCheckedMap_18));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ShortIntTypeClasses_40));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ShortIntInstances_41));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (TypeCtorRepnMap_21));
    }
  }
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
      MR_Word InstanceInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InstanceInfos_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ClassSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 0))));
      MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 1))));
      MR_Word OrigArgTypes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 2))));
      MR_Word ClassConstraints_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 3))));
      MR_Word TVarSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 5))));
      MR_Word ContainingModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 6))));
      MR_Word Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 7))));
      MR_Word SeqNum_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceInfo_17, (MR_Integer) 8))));
      MR_Word AbstractInstanceInfo_32;
      MR_Word STATE_VARIABLE_MaybeUnqual_39_39;
      MR_Word STATE_VARIABLE_ModuleNames_40_40;
      MR_Word STATE_VARIABLE_MaybeUnqual_41_41;
      MR_Word STATE_VARIABLE_ModuleNames_42_42;
      MR_Word STATE_VARIABLE_MaybeUnqual_43_43;
      MR_Word STATE_VARIABLE_ModuleNames_44_44;
      MR_Word STATE_VARIABLE_MaybeUnqual_45_45;
      MR_Word STATE_VARIABLE_ModuleNames_46_46;
      MR_Word STATE_VARIABLE_IntInstancesCord_47_47;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;
      MR_Word next_value_of_STATE_VARIABLE_IntInstancesCord_0_6;

      if (((MR_tag((MR_Word) ClassSymName_22)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassSymName_22, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_60)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_40_40);
        STATE_VARIABLE_MaybeUnqual_39_39 = STATE_VARIABLE_MaybeUnqual_0_2;
      }
      else
      {
        STATE_VARIABLE_MaybeUnqual_39_39 = (MR_Integer) 1;
        STATE_VARIABLE_ModuleNames_40_40 = STATE_VARIABLE_ModuleNames_0_4;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_23, STATE_VARIABLE_MaybeUnqual_39_39, &STATE_VARIABLE_MaybeUnqual_41_41, STATE_VARIABLE_ModuleNames_40_40, &STATE_VARIABLE_ModuleNames_42_42);
      parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(OrigArgTypes_24, STATE_VARIABLE_MaybeUnqual_41_41, &STATE_VARIABLE_MaybeUnqual_43_43, STATE_VARIABLE_ModuleNames_42_42, &STATE_VARIABLE_ModuleNames_44_44);
      parse_tree__comp_unit_interface__accumulate_modules_in_constraints_5_p_0(ClassConstraints_25, STATE_VARIABLE_MaybeUnqual_43_43, &STATE_VARIABLE_MaybeUnqual_45_45, STATE_VARIABLE_ModuleNames_44_44, &STATE_VARIABLE_ModuleNames_46_46);
      {
        AbstractInstanceInfo_32 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 0) = ((MR_Box) (ClassSymName_22));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 1) = ((MR_Box) (ArgTypes_23));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 2) = ((MR_Box) (OrigArgTypes_24));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 3) = ((MR_Box) (ClassConstraints_25));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 5) = ((MR_Box) (TVarSet_27));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 6) = ((MR_Box) (ContainingModuleName_28));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 7) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(0), AbstractInstanceInfo_32, 8) = ((MR_Box) (SeqNum_30));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ((MR_Box) (AbstractInstanceInfo_32)), STATE_VARIABLE_IntInstancesCord_0_6, &STATE_VARIABLE_IntInstancesCord_47_47);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = InstanceInfos_18;
      next_value_of_STATE_VARIABLE_MaybeUnqual_0_2 = STATE_VARIABLE_MaybeUnqual_45_45;
      next_value_of_STATE_VARIABLE_ModuleNames_0_4 = STATE_VARIABLE_ModuleNames_46_46;
      next_value_of_STATE_VARIABLE_IntInstancesCord_0_6 = STATE_VARIABLE_IntInstancesCord_47_47;
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
      MR_Word TypeClassInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeClassInfos_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ClassSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 0))));
      MR_Word TypeParams_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 1))));
      MR_Word SuperclassConstraints_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 2))));
      MR_Word FunDeps_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 3))));
      MR_Word TVarSet_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 5))));
      MR_Word Context_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 6))));
      MR_Word SeqNum_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeClassInfo_17, (MR_Integer) 7))));
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
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 0) = ((MR_Box) (ClassSymName_22));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 1) = ((MR_Box) (TypeParams_23));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 2) = ((MR_Box) (SuperclassConstraints_24));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 3) = ((MR_Box) (FunDeps_25));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 5) = ((MR_Box) (TVarSet_27));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 6) = ((MR_Box) (Context_28));
        MR_hl_field(MR_mktag(0), AbstractTypeClassInfo_31, 7) = ((MR_Box) (SeqNum_29));
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
      MR_Word Constraint_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_20_20;
      MR_Word STATE_VARIABLE_ModuleNames_21_21;
      MR_Word ClassSymName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 0))));
      MR_Word ArgTypes_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_MaybeUnqual_15_33;
      MR_Word STATE_VARIABLE_ModuleNames_16_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeUnqual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleNames_0_4;

      if (((MR_tag((MR_Word) ClassSymName_31)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ClassSymName_31, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_45)), STATE_VARIABLE_ModuleNames_0_4, &STATE_VARIABLE_ModuleNames_16_34);
        STATE_VARIABLE_MaybeUnqual_15_33 = STATE_VARIABLE_MaybeUnqual_0_2;
      }
      else
      {
        STATE_VARIABLE_MaybeUnqual_15_33 = (MR_Integer) 1;
        STATE_VARIABLE_ModuleNames_16_34 = STATE_VARIABLE_ModuleNames_0_4;
      }
      parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_32, STATE_VARIABLE_MaybeUnqual_15_33, &STATE_VARIABLE_MaybeUnqual_20_20, STATE_VARIABLE_ModuleNames_16_34, &STATE_VARIABLE_ModuleNames_21_21);
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
          MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_6, (MR_Integer) 0))));
          MR_Word ArgTypes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_MaybeUnqual_29_29;
          MR_Word STATE_VARIABLE_ModuleNames_30_30;

          if (((MR_tag((MR_Word) SymName_12)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_12, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_50)), STATE_VARIABLE_ModuleNames_0_23, &STATE_VARIABLE_ModuleNames_30_30);
            STATE_VARIABLE_MaybeUnqual_29_29 = STATE_VARIABLE_MaybeUnqual_0_21;
          }
          else
          {
            STATE_VARIABLE_MaybeUnqual_29_29 = (MR_Integer) 1;
            STATE_VARIABLE_ModuleNames_30_30 = STATE_VARIABLE_ModuleNames_0_23;
          }
          parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_13, STATE_VARIABLE_MaybeUnqual_29_29, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_30_30, STATE_VARIABLE_ModuleNames_24);
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_MaybeUnqual_22 = STATE_VARIABLE_MaybeUnqual_0_21;
          *STATE_VARIABLE_ModuleNames_24 = STATE_VARIABLE_ModuleNames_0_23;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1))));

              parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_41, STATE_VARIABLE_MaybeUnqual_0_21, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_0_23, STATE_VARIABLE_ModuleNames_24);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_40, STATE_VARIABLE_MaybeUnqual_0_21, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_0_23, STATE_VARIABLE_ModuleNames_24);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 2))));

              parse_tree__comp_unit_interface__accumulate_modules_in_types_5_p_0(ArgTypes_36, STATE_VARIABLE_MaybeUnqual_0_21, STATE_VARIABLE_MaybeUnqual_22, STATE_VARIABLE_ModuleNames_0_23, STATE_VARIABLE_ModuleNames_24);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_6, (MR_Integer) 1))));
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
      MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__comp_unit_interface__keep_promise_item_int_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_FIMSpecs_10;

    parse_tree__comp_unit_interface__add_self_fim_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_FIMSpecs_10);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_FIMSpecs_10));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_TypeCtorCheckedMap_20;
    MR_Word conv9_STATE_VARIABLE_ImpImplicitFIMLangs_22;

    parse_tree__comp_unit_interface__hide_type_ctor_checked_defn_imp_details_for_int1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_TypeCtorCheckedMap_20, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_ImpImplicitFIMLangs_22);
    *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_TypeCtorCheckedMap_20));
    *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_ImpImplicitFIMLangs_22));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__3_146;

    parse_tree__comp_unit_interface__IntroducedFrom__pred__generate_interface_int1__894__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadVar__3_146);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__3_146));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv6_ImportUse_8;

    succeeded = parse_tree__comp_unit_interface__make_imports_into_uses_maybe_implicit_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_ImportUse_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv6_ImportUse_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8;

    parse_tree__comp_unit_interface__record_modules_needed_by_typeclass_imp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImpModulesNeededByTypeClassDefns_8));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImpTypesMap_22;

    parse_tree__comp_unit_interface__record_type_defn_imp_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImpTypesMap_22);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImpTypesMap_22));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IntTypesMap_14;

    parse_tree__comp_unit_interface__record_type_defn_int_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IntTypesMap_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IntTypesMap_14));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_interface_int1_14_p_0(
  MR_Word Globals_15,
  MR_Word AugMakeIntUnit_16,
  MR_Word * IntImportUseMap_17,
  MR_Word * IntExplicitFIMSpecs_18,
  MR_Word * ImpExplicitFIMSpecs_19,
  MR_Word * IntTypeCtorCheckedMap_20,
  MR_Word * IntInstCtorCheckedMap_21,
  MR_Word * IntModeCtorCheckedMap_22,
  MR_Word * IntTypeClasses_23,
  MR_Word * IntInstances_24,
  MR_Word * TypeCtorRepnMap_25,
  MR_Word * ParseTreeInt1_26,
  MR_Word STATE_VARIABLE_Specs_0_98,
  MR_Word * STATE_VARIABLE_Specs_99)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeModuleSrc_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_16, (MR_Integer) 0))));
    MR_Word DirectIntSpecs_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_16, (MR_Integer) 2))));
    MR_Word IndirectIntSpecs_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_16, (MR_Integer) 3))));
    MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 0))));
    MR_Word ModuleNameContext_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 1))));
    MR_Word IntInclMap_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 2))));
    MR_Word ImpInclMap_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 3))));
    MR_Word InclMap_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 4))));
    MR_Word IntImportMap_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 5))));
    MR_Word IntUseMap_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 6))));
    MR_Word ImpImportMap_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 7))));
    MR_Word ImpUseMap_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 8))));
    MR_Word ImportUseMap0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 11))));
    MR_Word IntSelfFIMLangs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 12))));
    MR_Word TypeCtorCheckedMap0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 14))));
    MR_Word InstCtorCheckedMap0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 15))));
    MR_Word ModeCtorCheckedMap0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 16))));
    MR_Word IntPredDecls_52;
    MR_Word IntModeDecls_53;
    MR_Word IntDeclPragmas_54;
    MR_Word IntPromises0_55;
    MR_Word ImpTypeClasses_57;
    MR_Word IntTypeDefns0_69;
    MR_Word ImpTypeDefns0_70;
    MR_Word IntTypesMap_72;
    MR_Word ImpTypesMap_73;
    MR_Word BothTypesMap_74;
    MR_Word NeededImpTypeCtors_75;
    MR_Word ImpModulesNeededByTypeDefns_76;
    MR_Word ImpModulesNeededByTypeClassDefns_77;
    MR_Word ImpNeededModules_78;
    MR_Word ImpImportUseMap1_79;
    MR_Word ImportUseMap_80;
    MR_Word ImpImportUseMap_81;
    MR_Word ImpSelfFIMLangs_84;
    MR_Word IntFIMSpecs_85;
    MR_Word ImpFIMSpecs0_86;
    MR_Word ImpFIMSpecs_87;
    MR_Word IntInstDefns_88;
    MR_Word IntInstDefnMap_90;
    MR_Word IntModeDefns_91;
    MR_Word IntModeDefnMap_93;
    MR_Word Experiment1_94;
    MR_Word IntPromises_96;
    MR_Word Var_101;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_114;
    MR_Word STATE_VARIABLE_Specs_115_115;
    MR_Word Var_117;
    MR_Word STATE_VARIABLE_Specs_118_118;
    MR_Word _ImpForeignEnums0_71;
    MR_Box conv1_IntTypesMap_72;
    MR_Box conv3_ImpTypesMap_73;
    MR_Box conv5_ImpModulesNeededByTypeClassDefns_77;
    MR_Box conv12_IntTypeCtorCheckedMap_20;
    MR_Box conv11_ImpSelfFIMLangs_84;
    MR_Box conv14_IntFIMSpecs_85;
    MR_Box conv15_ImpFIMSpecs0_86;
    MR_Word _ImpInstDefns_89;
    MR_Word _ImpModeDefns_92;

    *IntTypeClasses_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 19))));
    *IntInstances_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 20))));
    IntPredDecls_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 21))));
    IntModeDecls_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 22))));
    IntDeclPragmas_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 23))));
    IntPromises0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 24))));
    ImpTypeClasses_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_28, (MR_Integer) 26))));
    parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap0_47, &IntTypeDefns0_69, &ImpTypeDefns0_70, &_ImpForeignEnums0_71);
    Var_101 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[24]), IntTypeDefns0_69, ((MR_Box) (Var_101)), &conv1_IntTypesMap_72);
    IntTypesMap_72 = ((MR_Word) (conv1_IntTypesMap_72));
    Var_103 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[6]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[25]), ImpTypeDefns0_70, ((MR_Box) (Var_103)), &conv3_ImpTypesMap_73);
    ImpTypesMap_73 = ((MR_Word) (conv3_ImpTypesMap_73));
    BothTypesMap_74 = mercury__one_or_more_map__merge_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[4]), IntTypesMap_72, ImpTypesMap_73);
    parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(IntTypesMap_72, ImpTypesMap_73, BothTypesMap_74, &NeededImpTypeCtors_75, &ImpModulesNeededByTypeDefns_76);
    Var_105 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[26]), ImpTypeClasses_57, ((MR_Box) (Var_105)), &conv5_ImpModulesNeededByTypeClassDefns_77);
    ImpModulesNeededByTypeClassDefns_77 = ((MR_Word) (conv5_ImpModulesNeededByTypeClassDefns_77));
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpModulesNeededByTypeClassDefns_77, ImpModulesNeededByTypeDefns_76, &ImpNeededModules_78);
    mercury__one_or_more_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntImportMap_38, IntUseMap_39, IntImportUseMap_17);
    mercury__one_or_more_map__merge_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportMap_40, ImpUseMap_41, &ImpImportUseMap1_79);
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[3]));
      MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_4));
      MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (ImpNeededModules_78));
    }
    mercury__map__filter_map_values_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_106, ImportUseMap0_42, &ImportUseMap_80);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpNeededModules_78);
    if (succeeded)
      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), &ImpImportUseMap_81);
    else
    {
      MR_Word ImpImportUseMap0_82;
      MR_Word IntImportUseModules_83;
      MR_Box conv8_ImpImportUseMap_81;

      mercury__one_or_more_map__select_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpImportUseMap1_79, ImpNeededModules_78, &ImpImportUseMap0_82);
      mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[0]), *IntImportUseMap_17, &IntImportUseModules_83);
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[27]), IntImportUseModules_83, ((MR_Box) (ImpImportUseMap0_82)), &conv8_ImpImportUseMap_81);
      ImpImportUseMap_81 = ((MR_Word) (conv8_ImpImportUseMap_81));
    }
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_43, IntExplicitFIMSpecs_18);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_44, ImpExplicitFIMSpecs_19);
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_6));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (BothTypesMap_74));
      MR_hl_field(MR_mktag(0), Var_108, 4) = ((MR_Box) (NeededImpTypeCtors_75));
    }
    Var_109 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0));
    Var_110 = mercury__set__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[11]), Var_108, TypeCtorCheckedMap0_47, ((MR_Box) (Var_109)), &conv12_IntTypeCtorCheckedMap_20, ((MR_Box) (Var_110)), &conv11_ImpSelfFIMLangs_84);
    *IntTypeCtorCheckedMap_20 = ((MR_Word) (conv12_IntTypeCtorCheckedMap_20));
    ImpSelfFIMLangs_84 = ((MR_Word) (conv11_ImpSelfFIMLangs_84));
    {
      Var_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_7[4]));
      MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_interface_int1_14_p_0_7));
      MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (ModuleName_33));
    }
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[12]), Var_111, IntSelfFIMLangs_45, ((MR_Box) (*IntExplicitFIMSpecs_18)), &conv14_IntFIMSpecs_85);
    IntFIMSpecs_85 = ((MR_Word) (conv14_IntFIMSpecs_85));
    mercury__set__foldl_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[12]), Var_111, ImpSelfFIMLangs_84, ((MR_Box) (*ImpExplicitFIMSpecs_19)), &conv15_ImpFIMSpecs0_86);
    ImpFIMSpecs0_86 = ((MR_Word) (conv15_ImpFIMSpecs0_86));
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs0_86, IntFIMSpecs_85, &ImpFIMSpecs_87);
    parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap0_48, &IntInstDefns_88, &_ImpInstDefns_89);
    IntInstDefnMap_90 = parse_tree__convert_parse_tree__inst_ctor_defn_items_to_map_1_f_0(IntInstDefns_88);
    Var_114 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0));
    parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0((MR_Integer) 0, IntInstDefnMap_90, Var_114, IntInstCtorCheckedMap_21, STATE_VARIABLE_Specs_0_98, &STATE_VARIABLE_Specs_115_115);
    parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap0_49, &IntModeDefns_91, &_ImpModeDefns_92);
    IntModeDefnMap_93 = parse_tree__convert_parse_tree__mode_ctor_defn_items_to_map_1_f_0(IntModeDefns_91);
    Var_117 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0));
    parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0((MR_Integer) 0, IntModeDefnMap_93, Var_117, IntModeCtorCheckedMap_22, STATE_VARIABLE_Specs_115_115, &STATE_VARIABLE_Specs_118_118);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 701, &Experiment1_94);
    switch (Experiment1_94) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[13]), TypeCtorRepnMap_25);
          *STATE_VARIABLE_Specs_99 = STATE_VARIABLE_Specs_118_118;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RepnSpecs_95;

          parse_tree__decide_type_repn__decide_repns_for_all_types_for_int1_7_p_0(Globals_15, ModuleName_33, TypeCtorCheckedMap0_47, DirectIntSpecs_30, IndirectIntSpecs_31, TypeCtorRepnMap_25, &RepnSpecs_95);
          *STATE_VARIABLE_Specs_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), STATE_VARIABLE_Specs_118_118, RepnSpecs_95);
        }
        break;
    }
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[28]), IntPromises0_55, &IntPromises_96);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (22 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt1_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclMap_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InclMap_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (*IntImportUseMap_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportUseMap_81));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImportUseMap_80));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (IntFIMSpecs_85));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImpFIMSpecs_87));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (*IntTypeCtorCheckedMap_20));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (*IntInstCtorCheckedMap_21));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (*IntModeCtorCheckedMap_22));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (*IntTypeClasses_23));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (*IntInstances_24));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntPredDecls_52));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntModeDecls_53));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntDeclPragmas_54));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntPromises_96));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (*TypeCtorRepnMap_25));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (ImpTypeClasses_57));
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16;
    MR_Word conv7_STATE_VARIABLE_DuArgTypeCtors_18;
    MR_Word conv6_STATE_VARIABLE_ModulesNeededByTypeDefns_20;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_rhs_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_DuArgTypeCtors_18, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_ModulesNeededByTypeDefns_20);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_AbsExpEqvRhsTypeCtors_16));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_DuArgTypeCtors_18));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_ModulesNeededByTypeDefns_20));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23;
    MR_Word conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25;
    MR_Word conv0_STATE_VARIABLE_DirectDummyTypeCtors_27;

    parse_tree__comp_unit_interface__accumulate_abs_imp_exported_type_lhs_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_DirectDummyTypeCtors_27);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_AbsExpEqvLhsTypeCtors_23));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_AbsExpEnumTypeCtors_25));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_DirectDummyTypeCtors_27));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0(
  MR_Word IntTypesMap_6,
  MR_Word ImpTypesMap_7,
  MR_Word BothTypesMap_8,
  MR_Word * NeededImpTypeCtors_9,
  MR_Word * ModulesNeededByTypeDefns_10)
{
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
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (IntTypesMap_6));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (BothTypesMap_8));
    }
    Var_17 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_18 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__foldl3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[9]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), Var_16, ImpTypesMap_7, ((MR_Box) (Var_17)), &conv5_AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_18)), &conv4_AbsExpEnumTypeCtors_12, ((MR_Box) (Var_19)), &conv3_DirectDummyTypeCtors_13);
    AbsExpEqvLhsTypeCtors_11 = ((MR_Word) (conv5_AbsExpEqvLhsTypeCtors_11));
    AbsExpEnumTypeCtors_12 = ((MR_Word) (conv4_AbsExpEnumTypeCtors_12));
    DirectDummyTypeCtors_13 = ((MR_Word) (conv3_DirectDummyTypeCtors_13));
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__comp_unit_interface__get_requirements_of_imp_exported_types_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ImpTypesMap_7));
    }
    Var_21 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_22 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    Var_23 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__set__fold3_8_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[15]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[10]), Var_20, AbsExpEqvLhsTypeCtors_11, ((MR_Box) (Var_21)), &conv11_AbsExpEqvRhsTypeCtors_14, ((MR_Box) (Var_22)), &conv10_DuArgTypeCtors_15, ((MR_Box) (Var_23)), &conv9_ModulesNeededByTypeDefns_10);
    AbsExpEqvRhsTypeCtors_14 = ((MR_Word) (conv11_AbsExpEqvRhsTypeCtors_14));
    DuArgTypeCtors_15 = ((MR_Word) (conv10_DuArgTypeCtors_15));
    *ModulesNeededByTypeDefns_10 = ((MR_Word) (conv9_ModulesNeededByTypeDefns_10));
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (DuArgTypeCtors_15));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (DirectDummyTypeCtors_13));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (AbsExpEnumTypeCtors_12));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (AbsExpEqvRhsTypeCtors_14));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (AbsExpEqvLhsTypeCtors_11));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
    }
    *NeededImpTypeCtors_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_24);
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__comp_unit_interface__make_typeclass_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ModeCtorCheckedMap_19;

    parse_tree__comp_unit_interface__pre_grab_pre_qual_mode_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_ModeCtorCheckedMap_19);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_ModeCtorCheckedMap_19));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_InstCtorCheckedMap_19;

    parse_tree__comp_unit_interface__pre_grab_pre_qual_inst_ctor_checked_defn_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_InstCtorCheckedMap_19);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_InstCtorCheckedMap_19));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_CheckedDefn_4;

    parse_tree__comp_unit_interface__pre_grab_pre_qual_type_ctor_checked_defn_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_CheckedDefn_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_CheckedDefn_4));
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_pre_grab_pre_qual_interface_for_int1_int2_2_p_0(
  MR_Word ParseTreeModuleSrc_3,
  MR_Word * IntParseTreeModuleSrc_4)
{
  {
    MR_Word ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 0))));
    MR_Word ModuleNameContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 1))));
    MR_Word IntInclMap_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 2))));
    MR_Word ImpInclMap_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 3))));
    MR_Word InclMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 4))));
    MR_Word IntImportMap_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 5))));
    MR_Word IntUseMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 6))));
    MR_Word ImpImportMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 7))));
    MR_Word ImpUseMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 8))));
    MR_Word ImportUseMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 11))));
    MR_Word IntSelfFIMLangs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 12))));
    MR_Word ImpSelfFIMLangs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 13))));
    MR_Word TypeCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 14))));
    MR_Word InstCtorCheckedMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 15))));
    MR_Word ModeCtorCheckedMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 16))));
    MR_Word TypeSpecs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 17))));
    MR_Word InstModeSpecs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 18))));
    MR_Word IntTypeClasses_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 19))));
    MR_Word IntInstances_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 20))));
    MR_Word IntPredDecls_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 21))));
    MR_Word IntModeDecls_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 22))));
    MR_Word IntDeclPragmas_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 23))));
    MR_Word IntPromises_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 24))));
    MR_Word IntBadClausePreds_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 25))));
    MR_Word ImpTypeClasses_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_3, (MR_Integer) 26))));
    MR_Word IntInstancesAbstract_43;
    MR_Word IntTypeCtorCheckedMap_44;
    MR_Word IntInstCtorCheckedMap_45;
    MR_Word IntModeCtorCheckedMap_46;
    MR_Word AbstractImpTypeClasses_47;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Box conv3_IntInstCtorCheckedMap_45;
    MR_Box conv5_IntModeCtorCheckedMap_46;

    IntInstancesAbstract_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[19]), IntInstances_25);
    mercury__map__map_values_only_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[20]), TypeCtorCheckedMap_19, &IntTypeCtorCheckedMap_44);
    Var_51 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[21]), InstCtorCheckedMap_20, ((MR_Box) (Var_51)), &conv3_IntInstCtorCheckedMap_45);
    IntInstCtorCheckedMap_45 = ((MR_Word) (conv3_IntInstCtorCheckedMap_45));
    Var_53 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[22]), ModeCtorCheckedMap_21, ((MR_Box) (Var_53)), &conv5_IntModeCtorCheckedMap_46);
    IntModeCtorCheckedMap_46 = ((MR_Word) (conv5_IntModeCtorCheckedMap_46));
    AbstractImpTypeClasses_47 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[23]), ImpTypeClasses_31);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (38 * sizeof(MR_Word)), NULL, NULL);
      *IntParseTreeModuleSrc_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (IntInclMap_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ImpInclMap_8));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (InclMap_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (IntImportMap_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntUseMap_11));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ImpImportMap_12));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpUseMap_13));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImportUseMap_14));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (IntFIMSpecMap_15));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ImpFIMSpecMap_16));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (IntSelfFIMLangs_17));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ImpSelfFIMLangs_18));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (IntTypeCtorCheckedMap_44));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (IntInstCtorCheckedMap_45));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntModeCtorCheckedMap_46));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (TypeSpecs_22));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (InstModeSpecs_23));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntTypeClasses_24));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntInstancesAbstract_43));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntPredDecls_26));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (IntModeDecls_27));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (IntDeclPragmas_28));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (IntPromises_29));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (IntBadClausePreds_30));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (AbstractImpTypeClasses_47));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__3_3;

    conv4_HeadVar__3_3 = parse_tree__prog_mutable__declare_mutable_aux_preds_for_int0_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    conv1_HeadVar__3_3 = parse_tree__item_util__fim_module_lang_to_spec_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0(
  MR_Word AugMakeIntUnit_5,
  MR_Word * ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Specs_0_65,
  MR_Word * STATE_VARIABLE_Specs_66)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeModuleSrc_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_5, (MR_Integer) 0))));
    MR_Word ModuleItemVersionNumbersMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugMakeIntUnit_5, (MR_Integer) 4))));
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 0))));
    MR_Word MaybeVersionNumbers_15;
    MR_Word ModuleNameContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 1))));
    MR_Word IntInclMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 2))));
    MR_Word ImpInclMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 3))));
    MR_Word InclMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 4))));
    MR_Word ImportUseMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 9))));
    MR_Word IntFIMSpecMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 10))));
    MR_Word ImpFIMSpecMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 11))));
    MR_Word IntSelfFIMLangs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 12))));
    MR_Word ImpSelfFIMLangs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 13))));
    MR_Word TypeCtorCheckedMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 14))));
    MR_Word InstCtorCheckedMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 15))));
    MR_Word ModeCtorCheckedMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 16))));
    MR_Word IntTypeClasses_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 19))));
    MR_Word IntInstances0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 20))));
    MR_Word IntPredDecls_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 21))));
    MR_Word IntModeDecls_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 22))));
    MR_Word IntDeclPragmas_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 23))));
    MR_Word IntPromises_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 24))));
    MR_Word ImpTypeClasses_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 26))));
    MR_Word ImpInstances0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 27))));
    MR_Word ImpPredDecls0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 28))));
    MR_Word ImpModeDecls_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 29))));
    MR_Word ImpDeclPragmas_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 32))));
    MR_Word ImpPromises_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 34))));
    MR_Word ImpMutables_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_8, (MR_Integer) 37))));
    MR_Word IntImportMap_53;
    MR_Word IntUseMap_54;
    MR_Word ImpImportMap_55;
    MR_Word ImpUseMap_56;
    MR_Word IntFIMSpecs0_57;
    MR_Word ImpFIMSpecs0_58;
    MR_Word IntFIMSpecs_59;
    MR_Word ImpFIMSpecs1_60;
    MR_Word ImpFIMSpecs_61;
    MR_Word IntInstances_62;
    MR_Word ImpInstances_63;
    MR_Word ImpPredDecls_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word MIVNs_14;
    MR_Box conv0_MIVNs_14;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), ModuleItemVersionNumbersMap_12, ((MR_Box) (ModuleName_13)), &conv0_MIVNs_14);
    if (succeeded)
    {
      MIVNs_14 = ((MR_Word) (conv0_MIVNs_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MaybeVersionNumbers_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeVersionNumbers_15, 0) = ((MR_Box) (MIVNs_14));
      }
    else
      MaybeVersionNumbers_15 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__item_util__import_and_or_use_map_to_explicit_int_imp_import_use_maps_5_p_0(ImportUseMap_24, &IntImportMap_53, &IntUseMap_54, &ImpImportMap_55, &ImpUseMap_56);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntFIMSpecMap_25, &IntFIMSpecs0_57);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpFIMSpecMap_26, &ImpFIMSpecs0_58);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (ModuleName_13));
    }
    Var_67 = mercury__set__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_68, IntSelfFIMLangs_27);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_67, IntFIMSpecs0_57, &IntFIMSpecs_59);
    Var_69 = mercury__set__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_68, ImpSelfFIMLangs_28);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_69, ImpFIMSpecs0_58, &ImpFIMSpecs1_60);
    mercury__set__difference_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs1_60, IntFIMSpecs_59, &ImpFIMSpecs_61);
    IntInstances_62 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[17]), IntInstances0_35);
    ImpInstances_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[18]), ImpInstances0_42);
    {
      Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&parse_tree__comp_unit_interface_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (parse_tree__comp_unit_interface__generate_private_interface_int0_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (ModuleName_13));
    }
    Var_74 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_1[1]), Var_75, ImpMutables_52);
    Var_73 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), Var_74);
    ImpPredDecls_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpPredDecls0_43, Var_73);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (28 * sizeof(MR_Word)), NULL, NULL);
      *ParseTreeInt0_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleNameContext_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeVersionNumbers_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (IntInclMap_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ImpInclMap_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InclMap_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (IntImportMap_53));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (IntUseMap_54));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ImpImportMap_55));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ImpUseMap_56));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ImportUseMap_24));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (IntFIMSpecs_59));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ImpFIMSpecs_61));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (TypeCtorCheckedMap_29));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (InstCtorCheckedMap_30));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (ModeCtorCheckedMap_31));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (IntTypeClasses_34));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (IntInstances_62));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (IntPredDecls_36));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (IntModeDecls_37));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (IntDeclPragmas_38));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (IntPromises_39));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (ImpTypeClasses_41));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (ImpInstances_63));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (ImpPredDecls_64));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (ImpModeDecls_44));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (ImpDeclPragmas_47));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (ImpPromises_49));
    }
    *STATE_VARIABLE_Specs_66 = STATE_VARIABLE_Specs_0_65;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_CheckedModeMap_21;

    parse_tree__comp_unit_interface__make_mode_ctor_checked_defn_abstract_for_int3_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv14_STATE_VARIABLE_CheckedModeMap_21);
    *wrapper_arg_4 = ((MR_Box) (conv14_STATE_VARIABLE_CheckedModeMap_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_CheckedInstMap_21;

    parse_tree__comp_unit_interface__make_inst_ctor_checked_defn_abstract_for_int3_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv12_STATE_VARIABLE_CheckedInstMap_21);
    *wrapper_arg_4 = ((MR_Box) (conv12_STATE_VARIABLE_CheckedInstMap_21));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_CheckedTypeMap_52;

    parse_tree__comp_unit_interface__make_type_ctor_checked_defn_abstract_for_int3_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_CheckedTypeMap_52);
    *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_CheckedTypeMap_52));
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_ContextMap_21;
    MR_Word conv6_STATE_VARIABLE_ImportUseMap_23;

    parse_tree__comp_unit_interface__acc_int_imports_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_ContextMap_21, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_ImportUseMap_23);
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_ContextMap_21));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_ImportUseMap_23));
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__comp_unit_interface__make_instance_abstract_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_TypeClass_4;

    conv4_TypeClass_4 = parse_tree__comp_unit_interface__make_typeclass_abstract_for_int3_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_TypeClass_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ContextMap_14;
    MR_Word conv0_STATE_VARIABLE_IncludeMap_16;

    parse_tree__comp_unit_interface__acc_int_includes_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_ContextMap_14, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_IncludeMap_16);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_ContextMap_14));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_IncludeMap_16));
  }
}

void MR_CALL 
parse_tree__comp_unit_interface__generate_short_interface_int3_5_p_0(
  MR_Word Globals_6,
  MR_Word ParseTreeModuleSrc_7,
  MR_Word * ParseTreeInt3_8,
  MR_Word STATE_VARIABLE_Specs_0_62,
  MR_Word * STATE_VARIABLE_Specs_63)
{
  {
    MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 1))));
    MR_Word OrigInclMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 4))));
    MR_Word OrigImportUseMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 9))));
    MR_Word TypeCtorCheckedMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 14))));
    MR_Word InstCtorCheckedMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 15))));
    MR_Word ModeCtorCheckedMap_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 16))));
    MR_Word OrigIntTypeClasses_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 19))));
    MR_Word OrigIntInstances_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_7, (MR_Integer) 20))));
    MR_Word IntInclMap_48;
    MR_Word InclMap_49;
    MR_Word IntTypeClasses_50;
    MR_Word IntInstances_51;
    MR_Word IntImportMap_52;
    MR_Word ImportUseMap_53;
    MR_Word IntTypeCtorCheckedMap_56;
    MR_Word IntInstCtorCheckedMap_57;
    MR_Word IntModeCtorCheckedMap_58;
    MR_Word IntTypeRepnMap_59;
    MR_Word OrigParseTreeInt3_60;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_73;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Box conv3_IntInclMap_48;
    MR_Box conv2_InclMap_49;
    MR_Box conv11_IntTypeCtorCheckedMap_56;
    MR_Box conv13_IntInstCtorCheckedMap_57;
    MR_Box conv15_IntModeCtorCheckedMap_58;
    MR_Word _Specs_61;

    Var_65 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    Var_66 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[1]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[10]), OrigInclMap_14, ((MR_Box) (Var_65)), &conv3_IntInclMap_48, ((MR_Box) (Var_66)), &conv2_InclMap_49);
    IntInclMap_48 = ((MR_Word) (conv3_IntInclMap_48));
    InclMap_49 = ((MR_Word) (conv2_InclMap_49));
    IntTypeClasses_50 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[11]), OrigIntTypeClasses_29);
    IntInstances_51 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[12]), OrigIntInstances_30);
    if ((IntInstances_51 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__one_or_more_map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), &IntImportMap_52);
      mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), &ImportUseMap_53);
    }
    else
    {
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Box conv9_IntImportMap_52;
      MR_Box conv8_ImportUseMap_53;

      Var_70 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
      Var_71 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0));
      mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[0]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[2]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[13]), OrigImportUseMap_19, ((MR_Box) (Var_70)), &conv9_IntImportMap_52, ((MR_Box) (Var_71)), &conv8_ImportUseMap_53);
      IntImportMap_52 = ((MR_Word) (conv9_IntImportMap_52));
      ImportUseMap_53 = ((MR_Word) (conv8_ImportUseMap_53));
    }
    Var_73 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[3]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[14]), TypeCtorCheckedMap_24, ((MR_Box) (Var_73)), &conv11_IntTypeCtorCheckedMap_56);
    IntTypeCtorCheckedMap_56 = ((MR_Word) (conv11_IntTypeCtorCheckedMap_56));
    Var_75 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[4]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[15]), InstCtorCheckedMap_25, ((MR_Box) (Var_75)), &conv13_IntInstCtorCheckedMap_57);
    IntInstCtorCheckedMap_57 = ((MR_Word) (conv13_IntInstCtorCheckedMap_57));
    Var_77 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[5]), (MR_Word) (&parse_tree__comp_unit_interface_scalar_common_2[16]), ModeCtorCheckedMap_26, ((MR_Box) (Var_77)), &conv15_IntModeCtorCheckedMap_58);
    IntModeCtorCheckedMap_58 = ((MR_Word) (conv15_IntModeCtorCheckedMap_58));
    parse_tree__decide_type_repn__decide_repns_for_simple_types_for_int3_3_p_0(ModuleName_10, TypeCtorCheckedMap_24, &IntTypeRepnMap_59);
    {
      OrigParseTreeInt3_60 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 1) = ((MR_Box) (ModuleNameContext_11));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 2) = ((MR_Box) (IntInclMap_48));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 3) = ((MR_Box) (InclMap_49));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 4) = ((MR_Box) (IntImportMap_52));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 5) = ((MR_Box) (ImportUseMap_53));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 6) = ((MR_Box) (IntTypeCtorCheckedMap_56));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 7) = ((MR_Box) (IntInstCtorCheckedMap_57));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 8) = ((MR_Box) (IntModeCtorCheckedMap_58));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 9) = ((MR_Box) (IntTypeClasses_50));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 10) = ((MR_Box) (IntInstances_51));
      MR_hl_field(MR_mktag(0), OrigParseTreeInt3_60, 11) = ((MR_Box) (IntTypeRepnMap_59));
    }
    parse_tree__module_qual__module_qualify_parse_tree_int3_5_p_0(Globals_6, OrigParseTreeInt3_60, ParseTreeInt3_8, (MR_Word) ((MR_Unsigned) 0U), &_Specs_61);
    *STATE_VARIABLE_Specs_63 = STATE_VARIABLE_Specs_0_62;
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____maybe_unqual_symnames_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____maybe_unqual_symnames_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____non_sub_du_extras_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____non_sub_du_extras_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____non_sub_du_extras_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____type_defn_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____type_defn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__comp_unit_interface____Unify____type_defn_pair_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__comp_unit_interface____Compare____type_defn_pair_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
