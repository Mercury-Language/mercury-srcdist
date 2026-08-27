/*
** Automatically generated from `module_qual.collect_mq_info.m'
** by the Mercury compiler,
** version rotd-2026-08-27
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


// :- module parse_tree.module_qual.collect_mq_info.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__collect_mq_info__init
ENDINIT
*/

#include "parse_tree.module_qual.collect_mq_info.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "integer.mih"
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
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "parse_tree.module_qual.qual_errors.mih"




static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item_type__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item_inst_mode__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item_inst_mode__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_int3_role_0_1[2];

static const MR_DuArgLocn parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_int3_role_0_1[2];

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_1[1];

static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_int3_role_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_int3_role_0[2];

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_int3_role_0[2];

static const MR_EnumFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_functor_desc_maybe_shadowed_import_0_0;

static const MR_EnumFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_functor_desc_maybe_shadowed_import_0_1;

static const MR_EnumFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_ordinal_ordered_maybe_shadowed_import_0[2];

static const MR_EnumFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_name_ordered_maybe_shadowed_import_0[2];

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_maybe_shadowed_import_0[2];

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__1021__1_2_p_0(
  MR_Word HeadVar__1_163,
  MR_Word * HeadVar__2_164);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__1032__1_2_p_0(
  MR_Word HeadVar__1_170,
  MR_Word * HeadVar__2_171);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(
  MR_Word CatchExpr_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_12,
  MR_Word * STATE_VARIABLE_UsedModuleNames_13,
  MR_Word STATE_VARIABLE_FoundUnqual_0_14,
  MR_Word * STATE_VARIABLE_FoundUnqual_15);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(
  MR_Word InInt_5,
  MR_Word ItemPromise_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_94,
  MR_Word * STATE_VARIABLE_UsedModuleNames_95,
  MR_Word STATE_VARIABLE_FoundUnqual_0_96,
  MR_Word * STATE_VARIABLE_FoundUnqual_97);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * STATE_VARIABLE_UsedModuleNames_3,
  MR_Word STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * STATE_VARIABLE_FoundUnqual_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_14,
  MR_Word * STATE_VARIABLE_UsedModuleNames_15,
  MR_Word STATE_VARIABLE_FoundUnqual_0_16,
  MR_Word * STATE_VARIABLE_FoundUnqual_17);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * STATE_VARIABLE_UsedModuleNames_3,
  MR_Word STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * STATE_VARIABLE_FoundUnqual_5);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(
  MR_Word ItemInstance_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(
  MR_Word Permissions_5,
  MR_Word ItemTypeClass_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_mode_defn_info_to_mq_id_1_f_0(
  MR_Word ItemModeDefn_3);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_inst_defn_info_to_mq_id_1_f_0(
  MR_Word ItemInstDefn_3);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_type_defn_info_to_mq_id_1_f_0(
  MR_Word ItemTypeDefn_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int3_import_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportedModules_0_6,
  MR_Word * STATE_VARIABLE_ImportedModules_7);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int0_import_or_use_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportedModules_0_6,
  MR_Word * STATE_VARIABLE_ImportedModules_7);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_incl_context_4_p_0(
  MR_Word IntPermissions_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_Modules_0_9,
  MR_Word * STATE_VARIABLE_Modules_10);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_interface_only_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_Modules_0_13,
  MR_Word * STATE_VARIABLE_Modules_14);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_6_p_0(
  MR_Word IntPermissions_7,
  MR_Word ImpPermissions_8,
  MR_Word ModuleName_9,
  MR_Word InclInfo_10,
  MR_Word STATE_VARIABLE_Modules_0_15,
  MR_Word * STATE_VARIABLE_Modules_16);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__mode_ctor_to_mq_id_1_f_0(
  MR_Word ModeCtor_3);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__inst_ctor_to_mq_id_1_f_0(
  MR_Word InstCtor_3);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__type_ctor_to_mq_id_1_f_0(
  MR_Word TypeCtor_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_mode_defn_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word ModeCtor_7,
  MR_Word CheckedDefn_8,
  MR_Word STATE_VARIABLE_Modes_0_14,
  MR_Word * STATE_VARIABLE_Modes_15);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_mode_defn_6_p_0(
  MR_Word IntPermissions_7,
  MR_Word ImpPermissions_8,
  MR_Word ModeCtor_9,
  MR_Word CheckedDefn_10,
  MR_Word STATE_VARIABLE_Modes_0_16,
  MR_Word * STATE_VARIABLE_Modes_17);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_inst_defn_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word InstCtor_7,
  MR_Word CheckedDefn_8,
  MR_Word STATE_VARIABLE_Insts_0_14,
  MR_Word * STATE_VARIABLE_Insts_15);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_inst_defn_6_p_0(
  MR_Word IntPermissions_7,
  MR_Word ImpPermissions_8,
  MR_Word InstCtor_9,
  MR_Word CheckedDefn_10,
  MR_Word STATE_VARIABLE_Insts_0_16,
  MR_Word * STATE_VARIABLE_Insts_17);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_type_defn_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word TypeCtor_7,
  MR_Word CheckedDefn_8,
  MR_Word STATE_VARIABLE_Types_0_33,
  MR_Word * STATE_VARIABLE_Types_34);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_type_defn_6_p_0(
  MR_Word IntPermissions_7,
  MR_Word ImpPermissions_8,
  MR_Word TypeCtor_9,
  MR_Word CheckedDefn_10,
  MR_Word STATE_VARIABLE_Types_0_35,
  MR_Word * STATE_VARIABLE_Types_36);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_src_avail_map_entry_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_ImportedModules_0_20,
  MR_Word * STATE_VARIABLE_ImportedModules_21,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_22,
  MR_Word * STATE_VARIABLE_UnusedIntModules_23);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0(
  MR_Word ReadWhy1_6,
  MR_Word IsShadowed_7,
  MR_Word ParseTreeInt1_8,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____int3_role_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____maybe_shadowed_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____maybe_shadowed_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[11][2];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[22][3];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[5][1];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[5][9];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[8][5];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[5][7];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[9][4];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_8[2][6];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_10[5][8];


struct parse_tree__module_qual__collect_mq_info__vector_common_type_9_0_s {
  const MR_Word parse_tree__module_qual__collect_mq_info__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_9_0_s parse_tree__module_qual__collect_mq_info_vector_common_9[32];

struct parse_tree__module_qual__collect_mq_info__vector_common_type_11_0_s {
  const MR_Word parse_tree__module_qual__collect_mq_info__vector_common_type_11_0__vct_11_f_0;
  const MR_Word parse_tree__module_qual__collect_mq_info__vector_common_type_11_0__vct_11_f_1;
};

static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_11_0_s parse_tree__module_qual__collect_mq_info_vector_common_11[11];



static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0])),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[1])),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[22][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[3])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[3])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[5])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[6])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[7])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[7])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_10[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[5][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 1U << 2)) | (MR_Unsigned) 1U)) },
  /* row   1 */
  { (MR_Box) (((MR_Unsigned) 0U << 2)) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 2U << 2)) | (MR_Unsigned) 2U)) },
  /* row   3 */
  { (MR_Box) (((MR_Unsigned) 2U << 2)) },
  /* row   4 */
  { (MR_Box) (((MR_Unsigned) 1U << 2)) },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[5][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[8][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9])),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[10]))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__prog_item_type__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__prog_item_inst_mode__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__prog_item_inst_mode__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[9][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9]))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[10]))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[10]))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_15)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_16)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_8[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_10[5][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};


static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_9_0_s parse_tree__module_qual__collect_mq_info_vector_common_9[32] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 3 },
  /* row   2 */   { (MR_Integer) 3 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Integer) 3 },
  /* row   6 */   { (MR_Integer) 3 },
  /* row   7 */   { (MR_Integer) 3 },
  /* row   8 */   { (MR_Integer) 0 },
  /* row   9 */   { (MR_Integer) 3 },
  /* row  10 */   { (MR_Integer) 3 },
  /* row  11 */   { (MR_Integer) 3 },
  /* row  12 */   { (MR_Integer) 0 },
  /* row  13 */   { (MR_Integer) 3 },
  /* row  14 */   { (MR_Integer) 3 },
  /* row  15 */   { (MR_Integer) 3 },
  /* row  16 */   { (MR_Integer) 0 },
  /* row  17 */   { (MR_Integer) 3 },
  /* row  18 */   { (MR_Integer) 3 },
  /* row  19 */   { (MR_Integer) 3 },
  /* row  20 */   { (MR_Integer) 0 },
  /* row  21 */   { (MR_Integer) 3 },
  /* row  22 */   { (MR_Integer) 3 },
  /* row  23 */   { (MR_Integer) 3 },
  /* row  24 */   { (MR_Integer) 0 },
  /* row  25 */   { (MR_Integer) 3 },
  /* row  26 */   { (MR_Integer) 3 },
  /* row  27 */   { (MR_Integer) 3 },
  /* row  28 */   { (MR_Integer) 0 },
  /* row  29 */   { (MR_Integer) 3 },
  /* row  30 */   { (MR_Integer) 3 },
  /* row  31 */   { (MR_Integer) 3 },
};

static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_11_0_s parse_tree__module_qual__collect_mq_info_vector_common_11[11] = {
  /* row   0 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0])
  },
  /* row   1 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0])
  },
  /* row   2 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[2]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0])
  },
  /* row   3 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[1]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0])
  },
  /* row   4 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4])
  },
  /* row   5 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4])
  },
  /* row   6 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[3]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4])
  },
  /* row   7 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[1]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4])
  },
  /* row   8 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0])
  },
  /* row   9 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4])
  },
  /* row  10 */
  {
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[1]),
    (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4])
  },
};




static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item_type__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item_inst_mode__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item_inst_mode__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_0 = {
  (MR_String) "int3_as_src",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_int3_role_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_read_why_int3_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_maybe_shadowed_import_0)
};

static const MR_DuArgLocn parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_int3_role_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_1 = {
  (MR_String) "int3_as_direct_int",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_int3_role_0_1,
  NULL,
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_int3_role_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_0[1] = { &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_0 };

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_1[1] = { &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_1 };

static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_int3_role_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_int3_role_0[2] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_1,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_0
};

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_int3_role_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_int3_role_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____int3_role_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "int3_role",
  { parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_int3_role_0 },
  { parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_int3_role_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_int3_role_0,

};

static const MR_EnumFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_functor_desc_maybe_shadowed_import_0_0 = {
  (MR_String) "not_shadowed_import",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_functor_desc_maybe_shadowed_import_0_1 = {
  (MR_String) "is_shadowed_import",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_ordinal_ordered_maybe_shadowed_import_0[2] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_functor_desc_maybe_shadowed_import_0_0,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_functor_desc_maybe_shadowed_import_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_name_ordered_maybe_shadowed_import_0[2] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_functor_desc_maybe_shadowed_import_0_1,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_functor_desc_maybe_shadowed_import_0_0
};

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_maybe_shadowed_import_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_maybe_shadowed_import_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____maybe_shadowed_import_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____maybe_shadowed_import_0_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "maybe_shadowed_import",
  { parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_name_ordered_maybe_shadowed_import_0 },
  { parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__enum_ordinal_ordered_maybe_shadowed_import_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_maybe_shadowed_import_0,

};

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__1021__1_2_p_0(
  MR_Word HeadVar__1_163,
  MR_Word * HeadVar__2_164)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_163, HeadVar__2_164);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__1032__1_2_p_0(
  MR_Word HeadVar__1_170,
  MR_Word * HeadVar__2_171)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_170, HeadVar__2_171);
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____maybe_shadowed_import_0_0(
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

MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____maybe_shadowed_import_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 15);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 15);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____int3_role_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 15);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 15);
      ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(
  MR_Word CatchExpr_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_12,
  MR_Word * STATE_VARIABLE_UsedModuleNames_13,
  MR_Word STATE_VARIABLE_FoundUnqual_0_14,
  MR_Word * STATE_VARIABLE_FoundUnqual_15)
{
  MR_bool succeeded;
  MR_Word Pattern0_9 = ((MR_Word) ((MR_hl_field(0, CatchExpr_6, 0))));
  MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(0, CatchExpr_6, 1))));
  MR_Word Pattern_11;
  MR_Word STATE_VARIABLE_UsedModuleNames_1_16;
  MR_Word STATE_VARIABLE_FoundUnqual_1_17;
  MR_Word SymName_20;
  MR_Word ArgTerms_21;

  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Pattern0_9, &Pattern_11);
  succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Pattern_11, &SymName_20, &ArgTerms_21);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_UsedModuleNames_1_25;
    MR_Word STATE_VARIABLE_FoundUnqual_1_26;

    if (((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(1, SymName_20, 0))));

      mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), STATE_VARIABLE_UsedModuleNames_0_12, &STATE_VARIABLE_UsedModuleNames_1_25);
      STATE_VARIABLE_FoundUnqual_1_26 = STATE_VARIABLE_FoundUnqual_0_14;
    }
    else
    {
      STATE_VARIABLE_FoundUnqual_1_26 = (MR_Integer) 1;
      STATE_VARIABLE_UsedModuleNames_1_25 = STATE_VARIABLE_UsedModuleNames_0_12;
    }
    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_21, STATE_VARIABLE_UsedModuleNames_1_25, &STATE_VARIABLE_UsedModuleNames_1_16, STATE_VARIABLE_FoundUnqual_1_26, &STATE_VARIABLE_FoundUnqual_1_17);
  }
  else
  {
    STATE_VARIABLE_FoundUnqual_1_17 = STATE_VARIABLE_FoundUnqual_0_14;
    STATE_VARIABLE_UsedModuleNames_1_16 = STATE_VARIABLE_UsedModuleNames_0_12;
  }
  parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_10, STATE_VARIABLE_UsedModuleNames_1_16, STATE_VARIABLE_UsedModuleNames_13, STATE_VARIABLE_FoundUnqual_1_17, STATE_VARIABLE_FoundUnqual_15);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  parse_tree__module_qual__mq_info__mq_info_set_module_used_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(
  MR_Word InInt_5,
  MR_Word ItemPromise_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(0, ItemPromise_6, 1))));
  MR_Word UsedModuleNames_14;
  MR_Word FoundUnqual_15;
  MR_Word Var_19;

  Var_19 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_9, Var_19, &UsedModuleNames_14, (MR_Integer) 0, &FoundUnqual_15);
  switch (FoundUnqual_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_21;
        MR_Box conv1_STATE_VARIABLE_Info_18;

        {
          Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[4]));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0_1));
          MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_21, 3) = ((MR_Box) (InInt_5));
        }
        mercury__set_tree234__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), Var_21, UsedModuleNames_14, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv1_STATE_VARIABLE_Info_18);
        *STATE_VARIABLE_Info_18 = ((MR_Word) (conv1_STATE_VARIABLE_Info_18));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnusedModules_16;

        mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), &UnusedModules_16);
        parse_tree__module_qual__mq_info__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedModules_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_UsedModuleNames_13;
  MR_Word conv2_STATE_VARIABLE_FoundUnqual_15;

  parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_UsedModuleNames_13, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_FoundUnqual_15);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_UsedModuleNames_13));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_FoundUnqual_15));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_164;

  parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__1021__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_164);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_164));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_171;

  parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__1032__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_171);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_171));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_94,
  MR_Word * STATE_VARIABLE_UsedModuleNames_95,
  MR_Word STATE_VARIABLE_FoundUnqual_0_96,
  MR_Word * STATE_VARIABLE_FoundUnqual_97)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Goal_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LHS0_90 = ((MR_Word) ((MR_hl_field(0, Goal_6, 1))));
          MR_Word RHS0_91 = ((MR_Word) ((MR_hl_field(0, Goal_6, 2))));
          MR_Word LHS_92;
          MR_Word RHS_93;
          MR_Word STATE_VARIABLE_UsedModuleNames_22_144;
          MR_Word STATE_VARIABLE_FoundUnqual_22_145;

          mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LHS0_90, &LHS_92);
          mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), RHS0_91, &RHS_93);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(LHS_92, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_22_144, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_22_145);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(RHS_93, STATE_VARIABLE_UsedModuleNames_22_144, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_22_145, STATE_VARIABLE_FoundUnqual_97);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_84 = ((MR_Word) ((MR_hl_field(1, Goal_6, 1))));
          MR_Word STATE_VARIABLE_UsedModuleNames_20_139;
          MR_Word STATE_VARIABLE_FoundUnqual_20_140;
          MR_Word ArgTerms0_152 = ((MR_Word) ((MR_hl_field(1, Goal_6, 2))));
          MR_Word ArgTerms_153;

          if (((MR_tag((MR_Word) SymName_84)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_86 = ((MR_Word) ((MR_hl_field(1, SymName_84, 0))));

            mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_86)), STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_20_139);
            STATE_VARIABLE_FoundUnqual_20_140 = STATE_VARIABLE_FoundUnqual_0_96;
          }
          else
          {
            STATE_VARIABLE_FoundUnqual_20_140 = (MR_Integer) 1;
            STATE_VARIABLE_UsedModuleNames_20_139 = STATE_VARIABLE_UsedModuleNames_0_94;
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[7]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[8]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[19]), ArgTerms0_152, &ArgTerms_153);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_153, STATE_VARIABLE_UsedModuleNames_20_139, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_20_140, STATE_VARIABLE_FoundUnqual_97);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_10 = ((MR_Word) ((MR_hl_field(2, Goal_6, 1))));
          MR_Word SubGoalsB_11 = ((MR_Word) ((MR_hl_field(2, Goal_6, 2))));
          MR_Word STATE_VARIABLE_UsedModuleNames_1_98;
          MR_Word STATE_VARIABLE_FoundUnqual_1_99;

          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_10, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_1_98, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_1_99);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(SubGoalsB_11, STATE_VARIABLE_UsedModuleNames_1_98, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_1_99, STATE_VARIABLE_FoundUnqual_97);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedModuleNames_95 = STATE_VARIABLE_UsedModuleNames_0_94;
              *STATE_VARIABLE_FoundUnqual_97 = STATE_VARIABLE_FoundUnqual_0_96;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CondGoal_78 = ((MR_Word) ((MR_hl_field(3, Goal_6, 4))));
              MR_Word STATE_VARIABLE_UsedModuleNames_16_130;
              MR_Word STATE_VARIABLE_FoundUnqual_16_131;
              MR_Word STATE_VARIABLE_UsedModuleNames_17_132;
              MR_Word STATE_VARIABLE_FoundUnqual_17_133;
              MR_Word ThenGoal_150 = ((MR_Word) ((MR_hl_field(3, Goal_6, 5))));
              MR_Word ElseGoal_151 = ((MR_Word) ((MR_hl_field(3, Goal_6, 6))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_96;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(CondGoal_78, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_16_130, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_16_131);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ThenGoal_150, STATE_VARIABLE_UsedModuleNames_16_130, &STATE_VARIABLE_UsedModuleNames_17_132, STATE_VARIABLE_FoundUnqual_16_131, &STATE_VARIABLE_FoundUnqual_17_133);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = ElseGoal_151;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_94 = STATE_VARIABLE_UsedModuleNames_17_132;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_96 = STATE_VARIABLE_FoundUnqual_17_133;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_94 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              STATE_VARIABLE_FoundUnqual_0_96 = next_value_of_STATE_VARIABLE_FoundUnqual_0_96;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoal1_17 = ((MR_Word) ((MR_hl_field(3, Goal_6, 2))));
              MR_Word SubGoal2_18 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
              MR_Word SubGoals_19 = ((MR_Word) ((MR_hl_field(3, Goal_6, 4))));
              MR_Word STATE_VARIABLE_UsedModuleNames_5_106;
              MR_Word STATE_VARIABLE_FoundUnqual_5_107;
              MR_Word STATE_VARIABLE_UsedModuleNames_6_108;
              MR_Word STATE_VARIABLE_FoundUnqual_6_109;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoal1_17, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_5_106, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_5_107);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoal2_18, STATE_VARIABLE_UsedModuleNames_5_106, &STATE_VARIABLE_UsedModuleNames_6_108, STATE_VARIABLE_FoundUnqual_5_107, &STATE_VARIABLE_FoundUnqual_6_109);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(SubGoals_19, STATE_VARIABLE_UsedModuleNames_6_108, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_6_109, STATE_VARIABLE_FoundUnqual_97);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoal_182 = ((MR_Word) ((MR_hl_field(3, Goal_6, 2))));
              MR_Word next_value_of_Goal_6 = SubGoal_182;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              *STATE_VARIABLE_UsedModuleNames_95 = STATE_VARIABLE_UsedModuleNames_0_94;
              *STATE_VARIABLE_FoundUnqual_97 = STATE_VARIABLE_FoundUnqual_0_96;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_178 = ((MR_Word) ((MR_hl_field(3, Goal_6, 2))));
              MR_Word SubGoalsB_179 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_1_180;
              MR_Word STATE_VARIABLE_FoundUnqual_1_181;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_178, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_1_180, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_1_181);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(SubGoalsB_179, STATE_VARIABLE_UsedModuleNames_1_180, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_1_181, STATE_VARIABLE_FoundUnqual_97);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubGoal_187 = ((MR_Word) ((MR_hl_field(3, Goal_6, 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_187;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubGoal_186 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_186;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubGoal_185 = ((MR_Word) ((MR_hl_field(3, Goal_6, 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_185;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubGoal_184 = ((MR_Word) ((MR_hl_field(3, Goal_6, 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_184;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word SubGoal_183 = ((MR_Word) ((MR_hl_field(3, Goal_6, 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_183;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word SubGoal_189 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_189;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word SubGoal_188 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_188;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word SubGoal_190 = ((MR_Word) ((MR_hl_field(3, Goal_6, 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_190;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_6, 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_23;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word SubGoal_191 = ((MR_Word) ((MR_hl_field(3, Goal_6, 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_191;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word MainGoal_73 = ((MR_Word) ((MR_hl_field(3, Goal_6, 5))));
              MR_Word OrElseGoals_74 = ((MR_Word) ((MR_hl_field(3, Goal_6, 6))));
              MR_Word STATE_VARIABLE_UsedModuleNames_14_126;
              MR_Word STATE_VARIABLE_FoundUnqual_14_127;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(MainGoal_73, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_14_126, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_14_127);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(OrElseGoals_74, STATE_VARIABLE_UsedModuleNames_14_126, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_14_127, STATE_VARIABLE_FoundUnqual_97);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ThenGoal_62 = ((MR_Word) ((MR_hl_field(3, Goal_6, 4))));
              MR_Word MaybeElseGoal_63 = ((MR_Word) ((MR_hl_field(3, Goal_6, 5))));
              MR_Word Catches_64 = ((MR_Word) ((MR_hl_field(3, Goal_6, 6))));
              MR_Word MaybeCatchAny_65 = ((MR_Word) ((MR_hl_field(3, Goal_6, 7))));
              MR_Word STATE_VARIABLE_UsedModuleNames_9_114;
              MR_Word STATE_VARIABLE_FoundUnqual_9_115;
              MR_Word STATE_VARIABLE_UsedModuleNames_10_116;
              MR_Word STATE_VARIABLE_FoundUnqual_10_117;
              MR_Word STATE_VARIABLE_UsedModuleNames_11_118;
              MR_Word STATE_VARIABLE_FoundUnqual_11_119;
              MR_Word STATE_VARIABLE_UsedModuleNames_12_121;
              MR_Word STATE_VARIABLE_FoundUnqual_12_122;
              MR_Word SubGoal_149 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
              MR_Box conv5_STATE_VARIABLE_UsedModuleNames_12_121;
              MR_Box conv4_STATE_VARIABLE_FoundUnqual_12_122;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoal_149, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_9_114, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_9_115);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ThenGoal_62, STATE_VARIABLE_UsedModuleNames_9_114, &STATE_VARIABLE_UsedModuleNames_10_116, STATE_VARIABLE_FoundUnqual_9_115, &STATE_VARIABLE_FoundUnqual_10_117);
              if ((MaybeElseGoal_63 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_UsedModuleNames_11_118 = STATE_VARIABLE_UsedModuleNames_10_116;
                STATE_VARIABLE_FoundUnqual_11_119 = STATE_VARIABLE_FoundUnqual_10_117;
              }
              else
              {
                MR_Word ElseGoal_66 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_63, 0))));

                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ElseGoal_66, STATE_VARIABLE_UsedModuleNames_10_116, &STATE_VARIABLE_UsedModuleNames_11_118, STATE_VARIABLE_FoundUnqual_10_117, &STATE_VARIABLE_FoundUnqual_11_119);
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[21]), Catches_64, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_11_118)), &conv5_STATE_VARIABLE_UsedModuleNames_12_121, ((MR_Box) (STATE_VARIABLE_FoundUnqual_11_119)), &conv4_STATE_VARIABLE_FoundUnqual_12_122);
              STATE_VARIABLE_UsedModuleNames_12_121 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModuleNames_12_121));
              STATE_VARIABLE_FoundUnqual_12_122 = ((MR_Word) (conv4_STATE_VARIABLE_FoundUnqual_12_122));
              if ((MaybeCatchAny_65 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_UsedModuleNames_95 = STATE_VARIABLE_UsedModuleNames_12_121;
                *STATE_VARIABLE_FoundUnqual_97 = STATE_VARIABLE_FoundUnqual_12_122;
              }
              else
              {
                MR_Word CatchAnyGoal_68;
                MR_Word Var_123 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_65, 0))));
                MR_Word next_value_of_Goal_6;
                MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
                MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_96;

                CatchAnyGoal_68 = ((MR_Word) ((MR_hl_field(0, Var_123, 1))));
                // direct tailcall eliminated
                ;
                next_value_of_Goal_6 = CatchAnyGoal_68;
                next_value_of_STATE_VARIABLE_UsedModuleNames_0_94 = STATE_VARIABLE_UsedModuleNames_12_121;
                next_value_of_STATE_VARIABLE_FoundUnqual_0_96 = STATE_VARIABLE_FoundUnqual_12_122;
                Goal_6 = next_value_of_Goal_6;
                STATE_VARIABLE_UsedModuleNames_0_94 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
                STATE_VARIABLE_FoundUnqual_0_96 = next_value_of_STATE_VARIABLE_FoundUnqual_0_96;
                continue;
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalB_192 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_3_193;
              MR_Word STATE_VARIABLE_FoundUnqual_3_194;
              MR_Word SubGoalA_195 = ((MR_Word) ((MR_hl_field(3, Goal_6, 2))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_96;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_195, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_3_193, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_3_194);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_192;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_94 = STATE_VARIABLE_UsedModuleNames_3_193;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_96 = STATE_VARIABLE_FoundUnqual_3_194;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_94 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              STATE_VARIABLE_FoundUnqual_0_96 = next_value_of_STATE_VARIABLE_FoundUnqual_0_96;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalB_14 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_3_102;
              MR_Word STATE_VARIABLE_FoundUnqual_3_103;
              MR_Word SubGoalA_148 = ((MR_Word) ((MR_hl_field(3, Goal_6, 2))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_96;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_148, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_3_102, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_3_103);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_14;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_94 = STATE_VARIABLE_UsedModuleNames_3_102;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_96 = STATE_VARIABLE_FoundUnqual_3_103;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_94 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              STATE_VARIABLE_FoundUnqual_0_96 = next_value_of_STATE_VARIABLE_FoundUnqual_0_96;
              continue;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ArgTerms0_81 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
              MR_Word ArgTerms_82;

              mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[7]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[8]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[20]), ArgTerms0_81, &ArgTerms_82);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_82, STATE_VARIABLE_UsedModuleNames_0_94, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_0_96, STATE_VARIABLE_FoundUnqual_97);
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * STATE_VARIABLE_UsedModuleNames_3,
  MR_Word STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * STATE_VARIABLE_FoundUnqual_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FoundUnqual_5 = STATE_VARIABLE_FoundUnqual_0_4;
      *STATE_VARIABLE_UsedModuleNames_3 = STATE_VARIABLE_UsedModuleNames_0_2;
    }
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_UsedModuleNames_1_20;
      MR_Word STATE_VARIABLE_FoundUnqual_1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_4;

      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_12, STATE_VARIABLE_UsedModuleNames_0_2, &STATE_VARIABLE_UsedModuleNames_1_20, STATE_VARIABLE_FoundUnqual_0_4, &STATE_VARIABLE_FoundUnqual_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_UsedModuleNames_0_2 = STATE_VARIABLE_UsedModuleNames_1_20;
      next_value_of_STATE_VARIABLE_FoundUnqual_0_4 = STATE_VARIABLE_FoundUnqual_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UsedModuleNames_0_2 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      STATE_VARIABLE_FoundUnqual_0_4 = next_value_of_STATE_VARIABLE_FoundUnqual_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_14,
  MR_Word * STATE_VARIABLE_UsedModuleNames_15,
  MR_Word STATE_VARIABLE_FoundUnqual_0_16,
  MR_Word * STATE_VARIABLE_FoundUnqual_17)
{
  MR_bool succeeded;
  MR_Word SymName_9;
  MR_Word ArgTerms_10;

  succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6, &SymName_9, &ArgTerms_10);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_UsedModuleNames_1_18;
    MR_Word STATE_VARIABLE_FoundUnqual_1_19;

    if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(1, SymName_9, 0))));

      mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_UsedModuleNames_0_14, &STATE_VARIABLE_UsedModuleNames_1_18);
      STATE_VARIABLE_FoundUnqual_1_19 = STATE_VARIABLE_FoundUnqual_0_16;
    }
    else
    {
      STATE_VARIABLE_FoundUnqual_1_19 = (MR_Integer) 1;
      STATE_VARIABLE_UsedModuleNames_1_18 = STATE_VARIABLE_UsedModuleNames_0_14;
    }
    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_10, STATE_VARIABLE_UsedModuleNames_1_18, STATE_VARIABLE_UsedModuleNames_15, STATE_VARIABLE_FoundUnqual_1_19, STATE_VARIABLE_FoundUnqual_17);
  }
  else
  {
    *STATE_VARIABLE_FoundUnqual_17 = STATE_VARIABLE_FoundUnqual_0_16;
    *STATE_VARIABLE_UsedModuleNames_15 = STATE_VARIABLE_UsedModuleNames_0_14;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_2,
  MR_Word * STATE_VARIABLE_UsedModuleNames_3,
  MR_Word STATE_VARIABLE_FoundUnqual_0_4,
  MR_Word * STATE_VARIABLE_FoundUnqual_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FoundUnqual_5 = STATE_VARIABLE_FoundUnqual_0_4;
      *STATE_VARIABLE_UsedModuleNames_3 = STATE_VARIABLE_UsedModuleNames_0_2;
    }
    else
    {
      MR_Word Term_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Terms_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_UsedModuleNames_1_20;
      MR_Word STATE_VARIABLE_FoundUnqual_1_21;
      MR_Word SymName_22;
      MR_Word ArgTerms_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_4;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_12, &SymName_22, &ArgTerms_23);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_UsedModuleNames_1_27;
        MR_Word STATE_VARIABLE_FoundUnqual_1_28;

        if (((MR_tag((MR_Word) SymName_22)) == (MR_Integer) 1))
        {
          MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(1, SymName_22, 0))));

          mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_24)), STATE_VARIABLE_UsedModuleNames_0_2, &STATE_VARIABLE_UsedModuleNames_1_27);
          STATE_VARIABLE_FoundUnqual_1_28 = STATE_VARIABLE_FoundUnqual_0_4;
        }
        else
        {
          STATE_VARIABLE_FoundUnqual_1_28 = (MR_Integer) 1;
          STATE_VARIABLE_UsedModuleNames_1_27 = STATE_VARIABLE_UsedModuleNames_0_2;
        }
        parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_23, STATE_VARIABLE_UsedModuleNames_1_27, &STATE_VARIABLE_UsedModuleNames_1_20, STATE_VARIABLE_FoundUnqual_1_28, &STATE_VARIABLE_FoundUnqual_1_21);
      }
      else
      {
        STATE_VARIABLE_FoundUnqual_1_21 = STATE_VARIABLE_FoundUnqual_0_4;
        STATE_VARIABLE_UsedModuleNames_1_20 = STATE_VARIABLE_UsedModuleNames_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Terms_13;
      next_value_of_STATE_VARIABLE_UsedModuleNames_0_2 = STATE_VARIABLE_UsedModuleNames_1_20;
      next_value_of_STATE_VARIABLE_FoundUnqual_0_4 = STATE_VARIABLE_FoundUnqual_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_UsedModuleNames_0_2 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      STATE_VARIABLE_FoundUnqual_0_4 = next_value_of_STATE_VARIABLE_FoundUnqual_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(
  MR_Word ItemInstance_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word InstanceModule_6 = ((MR_Word) ((MR_hl_field(0, ItemInstance_4, 6))));
  MR_Word ImportedInstanceModules0_7;
  MR_Word ImportedInstanceModules_8;

  parse_tree__module_qual__mq_info__mq_info_get_imported_instance_modules_2_p_0(STATE_VARIABLE_Info_0_9, &ImportedInstanceModules0_7);
  mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (InstanceModule_6)), ImportedInstanceModules0_7, &ImportedInstanceModules_8);
  parse_tree__module_qual__mq_info__mq_info_set_imported_instance_modules_3_p_0(ImportedInstanceModules_8, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(
  MR_Word Permissions_5,
  MR_Word ItemTypeClass_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, 0))));
  MR_Word Params_9 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, 1))));
  MR_Integer Arity_16;
  MR_Word Classes0_17;
  MR_Word Classes_18;
  MR_Word Var_21;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[5]), Params_9, &Arity_16);
  parse_tree__module_qual__mq_info__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_19, &Classes0_17);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (SymName_8));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (Arity_16));
  }
  parse_tree__module_qual__id_set__id_set_insert_4_p_0(Permissions_5, Var_21, Classes0_17, &Classes_18);
  parse_tree__module_qual__mq_info__mq_info_set_classes_3_p_0(Classes_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_mode_defn_info_to_mq_id_1_f_0(
  MR_Word ItemModeDefn_3)
{
  MR_Word MQId_4;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_3, 0))));
  MR_Word Params_6 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_3, 1))));
  MR_Integer Var_11;

  Var_11 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[6]), Params_6);
  {
    MQId_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MQId_4, 0) = ((MR_Box) (SymName_5));
    MR_hl_field(0, MQId_4, 1) = ((MR_Box) (Var_11));
  }
  return MQId_4;
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_inst_defn_info_to_mq_id_1_f_0(
  MR_Word ItemInstDefn_3)
{
  MR_Word MQId_4;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_3, 0))));
  MR_Word Params_6 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_3, 1))));
  MR_Integer Var_12;

  Var_12 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[6]), Params_6);
  {
    MQId_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MQId_4, 0) = ((MR_Box) (SymName_5));
    MR_hl_field(0, MQId_4, 1) = ((MR_Box) (Var_12));
  }
  return MQId_4;
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_type_defn_info_to_mq_id_1_f_0(
  MR_Word ItemTypeDefn_3)
{
  MR_Word MQId_4;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_3, 0))));
  MR_Word Params_6 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_3, 1))));
  MR_Integer Var_11;

  Var_11 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[5]), Params_6);
  {
    MQId_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MQId_4, 0) = ((MR_Box) (SymName_5));
    MR_hl_field(0, MQId_4, 1) = ((MR_Box) (Var_11));
  }
  return MQId_4;
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int3_import_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportedModules_0_6,
  MR_Word * STATE_VARIABLE_ImportedModules_7)
{
  mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_4)), STATE_VARIABLE_ImportedModules_0_6, STATE_VARIABLE_ImportedModules_7);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int0_import_or_use_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportedModules_0_6,
  MR_Word * STATE_VARIABLE_ImportedModules_7)
{
  mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_4)), STATE_VARIABLE_ImportedModules_0_6, STATE_VARIABLE_ImportedModules_7);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_incl_context_4_p_0(
  MR_Word IntPermissions_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_Modules_0_9,
  MR_Word * STATE_VARIABLE_Modules_10)
{
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (ModuleName_6));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_5, Var_11, STATE_VARIABLE_Modules_0_9, STATE_VARIABLE_Modules_10);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_interface_only_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_Modules_0_13,
  MR_Word * STATE_VARIABLE_Modules_14)
{
  MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_8, 0))) & (MR_Integer) 1);

  switch (Section_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_Modules_14 = STATE_VARIABLE_Modules_0_13;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, Var_15, STATE_VARIABLE_Modules_0_13, STATE_VARIABLE_Modules_14);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_6_p_0(
  MR_Word IntPermissions_7,
  MR_Word ImpPermissions_8,
  MR_Word ModuleName_9,
  MR_Word InclInfo_10,
  MR_Word STATE_VARIABLE_Modules_0_15,
  MR_Word * STATE_VARIABLE_Modules_16)
{
  MR_Word Section_12 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_10, 0))) & (MR_Integer) 1);

  switch (Section_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (ModuleName_9));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, Var_19, STATE_VARIABLE_Modules_0_15, STATE_VARIABLE_Modules_16);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = ((MR_Box) (ModuleName_9));
          MR_hl_field(0, Var_17, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, Var_17, STATE_VARIABLE_Modules_0_15, STATE_VARIABLE_Modules_16);
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__mode_ctor_to_mq_id_1_f_0(
  MR_Word ModeCtor_3)
{
  MR_Word Id_4;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, ModeCtor_3, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_3, 1))));

  {
    Id_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id_4, 0) = ((MR_Box) (SymName_5));
    MR_hl_field(0, Id_4, 1) = ((MR_Box) (Arity_6));
  }
  return Id_4;
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__inst_ctor_to_mq_id_1_f_0(
  MR_Word InstCtor_3)
{
  MR_Word Id_4;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, InstCtor_3, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, InstCtor_3, 1))));

  {
    Id_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id_4, 0) = ((MR_Box) (SymName_5));
    MR_hl_field(0, Id_4, 1) = ((MR_Box) (Arity_6));
  }
  return Id_4;
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__type_ctor_to_mq_id_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_Word Id_4;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, 1))));

  {
    Id_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Id_4, 0) = ((MR_Box) (SymName_5));
    MR_hl_field(0, Id_4, 1) = ((MR_Box) (Arity_6));
  }
  return Id_4;
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_mode_defn_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word ModeCtor_7,
  MR_Word CheckedDefn_8,
  MR_Word STATE_VARIABLE_Modes_0_14,
  MR_Word * STATE_VARIABLE_Modes_15)
{
  MR_Word StdModeDefn_10 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_8, 0))));
  MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(0, StdModeDefn_10, 0))) & (MR_Integer) 3);

  switch (Status_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word Var_16;
        MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(0, ModeCtor_7, 0))));
        MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_7, 1))));

        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_16, 0) = ((MR_Box) (SymName_17));
          MR_hl_field(0, Var_16, 1) = ((MR_Box) (Arity_18));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, Var_16, STATE_VARIABLE_Modes_0_14, STATE_VARIABLE_Modes_15);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Modes_15 = STATE_VARIABLE_Modes_0_14;
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_mode_defn_6_p_0(
  MR_Word IntPermissions_7,
  MR_Word ImpPermissions_8,
  MR_Word ModeCtor_9,
  MR_Word CheckedDefn_10,
  MR_Word STATE_VARIABLE_Modes_0_16,
  MR_Word * STATE_VARIABLE_Modes_17)
{
  MR_Word StdModeDefn_12 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_10, 0))));
  MR_Word Status_14 = ((MR_Unsigned) ((MR_hl_field(0, StdModeDefn_12, 0))) & (MR_Integer) 3);

  switch (Status_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word Var_18;
        MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(0, ModeCtor_9, 0))));
        MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_9, 1))));

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (SymName_21));
          MR_hl_field(0, Var_18, 1) = ((MR_Box) (Arity_22));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, Var_18, STATE_VARIABLE_Modes_0_16, STATE_VARIABLE_Modes_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_20;
        MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, ModeCtor_9, 0))));
        MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_9, 1))));

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (SymName_23));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (Arity_24));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, Var_20, STATE_VARIABLE_Modes_0_16, STATE_VARIABLE_Modes_17);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_inst_defn_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word InstCtor_7,
  MR_Word CheckedDefn_8,
  MR_Word STATE_VARIABLE_Insts_0_14,
  MR_Word * STATE_VARIABLE_Insts_15)
{
  MR_Word StdInstDefn_10 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_8, 0))));
  MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(0, StdInstDefn_10, 0))) & (MR_Integer) 3);

  switch (Status_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word Var_16;
        MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(0, InstCtor_7, 0))));
        MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(0, InstCtor_7, 1))));

        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_16, 0) = ((MR_Box) (SymName_17));
          MR_hl_field(0, Var_16, 1) = ((MR_Box) (Arity_18));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, Var_16, STATE_VARIABLE_Insts_0_14, STATE_VARIABLE_Insts_15);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Insts_15 = STATE_VARIABLE_Insts_0_14;
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_inst_defn_6_p_0(
  MR_Word IntPermissions_7,
  MR_Word ImpPermissions_8,
  MR_Word InstCtor_9,
  MR_Word CheckedDefn_10,
  MR_Word STATE_VARIABLE_Insts_0_16,
  MR_Word * STATE_VARIABLE_Insts_17)
{
  MR_Word StdInstDefn_12 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_10, 0))));
  MR_Word Status_14 = ((MR_Unsigned) ((MR_hl_field(0, StdInstDefn_12, 0))) & (MR_Integer) 3);

  switch (Status_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word Var_18;
        MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(0, InstCtor_9, 0))));
        MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(0, InstCtor_9, 1))));

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (SymName_21));
          MR_hl_field(0, Var_18, 1) = ((MR_Box) (Arity_22));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, Var_18, STATE_VARIABLE_Insts_0_16, STATE_VARIABLE_Insts_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_20;
        MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, InstCtor_9, 0))));
        MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(0, InstCtor_9, 1))));

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (SymName_23));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (Arity_24));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, Var_20, STATE_VARIABLE_Insts_0_16, STATE_VARIABLE_Insts_17);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_type_defn_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word TypeCtor_7,
  MR_Word CheckedDefn_8,
  MR_Word STATE_VARIABLE_Types_0_33,
  MR_Word * STATE_VARIABLE_Types_34)
{
  MR_Word TypeId_10;
  MR_Word SymName_43 = ((MR_Word) ((MR_hl_field(0, TypeCtor_7, 0))));
  MR_Integer Arity_44 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_7, 1))));

  {
    TypeId_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeId_10, 0) = ((MR_Box) (SymName_43));
    MR_hl_field(0, TypeId_10, 1) = ((MR_Box) (Arity_44));
  }
  if (((MR_tag((MR_Word) CheckedDefn_8)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn_11 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_8, 0))));

    if (((MR_tag((MR_Word) SolverDefn_11)) == (MR_Integer) 0))
    {
      MR_Word AbsStatus_13 = ((MR_Unsigned) ((MR_hl_field(0, SolverDefn_11, 0))) & (MR_Integer) 1);

      switch (AbsStatus_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, TypeId_10, STATE_VARIABLE_Types_0_33, STATE_VARIABLE_Types_34);
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Types_34 = STATE_VARIABLE_Types_0_33;
          break;
      }
    }
    else
    {
      MR_Word MaybeAbsDefn_15 = ((MR_Word) ((MR_hl_field(1, SolverDefn_11, 0))));

      if ((MaybeAbsDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Types_34 = STATE_VARIABLE_Types_0_33;
      else
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, TypeId_10, STATE_VARIABLE_Types_0_33, STATE_VARIABLE_Types_34);
    }
  }
  else
  {
    MR_Word StdDefn_18 = ((MR_Word) ((MR_hl_field(1, CheckedDefn_8, 0))));

    switch (MR_tag((MR_Word) StdDefn_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_20 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn_18, 0))) & (MR_Integer) 3);

          switch (EqvStatus_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, TypeId_10, STATE_VARIABLE_Types_0_33, STATE_VARIABLE_Types_34);
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Types_34 = STATE_VARIABLE_Types_0_33;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStatus_22 = ((MR_Unsigned) ((MR_hl_field(1, StdDefn_18, 0))) & (MR_Integer) 3);

          switch (SubStatus_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, TypeId_10, STATE_VARIABLE_Types_0_33, STATE_VARIABLE_Types_34);
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Types_34 = STATE_VARIABLE_Types_0_33;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuStatus_24 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn_18, 0))) & (MR_Integer) 3);

          switch (DuStatus_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, TypeId_10, STATE_VARIABLE_Types_0_33, STATE_VARIABLE_Types_34);
              break;
            case (MR_Integer) 3:
              *STATE_VARIABLE_Types_34 = STATE_VARIABLE_Types_0_33;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn_18, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DuStatus_42 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn_18, 1))) & (MR_Integer) 3);

              switch (DuStatus_42) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, TypeId_10, STATE_VARIABLE_Types_0_33, STATE_VARIABLE_Types_34);
                  break;
                case (MR_Integer) 3:
                  *STATE_VARIABLE_Types_34 = STATE_VARIABLE_Types_0_33;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbsStatus_41 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn_18, 1))) & (MR_Integer) 3);

              switch (AbsStatus_41) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, TypeId_10, STATE_VARIABLE_Types_0_33, STATE_VARIABLE_Types_34);
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Types_34 = STATE_VARIABLE_Types_0_33;
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
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_type_defn_6_p_0(
  MR_Word IntPermissions_7,
  MR_Word ImpPermissions_8,
  MR_Word TypeCtor_9,
  MR_Word CheckedDefn_10,
  MR_Word STATE_VARIABLE_Types_0_35,
  MR_Word * STATE_VARIABLE_Types_36)
{
  MR_Word TypeId_12;
  MR_Word SymName_51 = ((MR_Word) ((MR_hl_field(0, TypeCtor_9, 0))));
  MR_Integer Arity_52 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_9, 1))));

  {
    TypeId_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeId_12, 0) = ((MR_Box) (SymName_51));
    MR_hl_field(0, TypeId_12, 1) = ((MR_Box) (Arity_52));
  }
  if (((MR_tag((MR_Word) CheckedDefn_10)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn_13 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_10, 0))));

    if (((MR_tag((MR_Word) SolverDefn_13)) == (MR_Integer) 0))
    {
      MR_Word AbsStatus_15 = ((MR_Unsigned) ((MR_hl_field(0, SolverDefn_13, 0))) & (MR_Integer) 1);

      switch (AbsStatus_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
          break;
        case (MR_Integer) 1:
          parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
          break;
      }
    }
    else
    {
      MR_Word MaybeAbsDefn_17 = ((MR_Word) ((MR_hl_field(1, SolverDefn_13, 0))));

      if ((MaybeAbsDefn_17 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
      else
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
    }
  }
  else
  {
    MR_Word StdDefn_20 = ((MR_Word) ((MR_hl_field(1, CheckedDefn_10, 0))));

    switch (MR_tag((MR_Word) StdDefn_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_22 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn_20, 0))) & (MR_Integer) 3);

          switch (EqvStatus_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
              break;
            case (MR_Integer) 2:
              parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStatus_24 = ((MR_Unsigned) ((MR_hl_field(1, StdDefn_20, 0))) & (MR_Integer) 3);

          switch (SubStatus_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
              break;
            case (MR_Integer) 2:
              parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DuStatus_26 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn_20, 0))) & (MR_Integer) 3);

          switch (DuStatus_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
              break;
            case (MR_Integer) 3:
              parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn_20, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DuStatus_50 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn_20, 1))) & (MR_Integer) 3);

              switch (DuStatus_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
                  break;
                case (MR_Integer) 3:
                  parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbsStatus_49 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn_20, 1))) & (MR_Integer) 3);

              switch (AbsStatus_49) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
                  break;
                case (MR_Integer) 2:
                  parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
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
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_src_avail_map_entry_6_p_0(
  MR_Word ModuleName_7,
  MR_Word MaybeImplicit_8,
  MR_Word STATE_VARIABLE_ImportedModules_0_20,
  MR_Word * STATE_VARIABLE_ImportedModules_21,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_22,
  MR_Word * STATE_VARIABLE_UnusedIntModules_23)
{
  MR_bool succeeded;
  MR_Word IntContext_14;
  MR_Word Section_13;

  mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_ImportedModules_0_20, STATE_VARIABLE_ImportedModules_21);
  if (((MR_tag((MR_Word) MaybeImplicit_8)) == (MR_Integer) 0))
  {
    Section_13 = ((MR_Word) ((MR_hl_field(0, MaybeImplicit_8, 0))));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word MaybeSection_12 = ((MR_Word) ((MR_hl_field(1, MaybeImplicit_8, 1))));

    succeeded = (MaybeSection_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      Section_13 = ((MR_Word) ((MR_hl_field(1, MaybeSection_12, 0))));
  }
  if (succeeded)
    switch (MR_tag((MR_Word) Section_13)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          IntContext_14 = ((MR_Word) ((MR_hl_field(0, Section_13, 0))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          IntContext_14 = ((MR_Word) ((MR_hl_field(1, Section_13, 0))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Section_13, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              IntContext_14 = ((MR_Word) ((MR_hl_field(3, Section_13, 1))));
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
  if (succeeded)
  {
    MR_Word IntContexts_16;
    MR_Word MaybeOldContexts_17;
    MR_Word STATE_VARIABLE_UnusedIntModules_1_26;

    {
      IntContexts_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IntContexts_16, 0) = ((MR_Box) (IntContext_14));
      MR_hl_field(0, IntContexts_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__search_insert_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (IntContexts_16)), &MaybeOldContexts_17, STATE_VARIABLE_UnusedIntModules_0_22, &STATE_VARIABLE_UnusedIntModules_1_26);
    if ((MaybeOldContexts_17 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UnusedIntModules_23 = STATE_VARIABLE_UnusedIntModules_1_26;
    else
    {
      MR_Word OldContexts_18 = ((MR_Word) ((MR_hl_field(1, MaybeOldContexts_17, 0))));
      MR_Word NewContexts_19;

      NewContexts_19 = mercury__one_or_more__f_43_43_2_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), OldContexts_18, IntContexts_16);
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (NewContexts_19)), STATE_VARIABLE_UnusedIntModules_1_26, STATE_VARIABLE_UnusedIntModules_23);
    }
  }
  else
    *STATE_VARIABLE_UnusedIntModules_23 = STATE_VARIABLE_UnusedIntModules_0_22;
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int3_spec_3_p_0(
  MR_Word DirectInt3Spec_4,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_Word ParseTreeInt3_6 = ((MR_Word) ((MR_hl_field(0, DirectInt3Spec_4, 0))));
  MR_Word ReadWhy3_7 = ((MR_Unsigned) ((MR_hl_field(0, DirectInt3Spec_4, 1))) & (MR_Integer) 15);
  MR_Word MaybeShadowedReadWhy3_8 = ((MR_Word) ((MR_hl_field(0, DirectInt3Spec_4, 2))));
  MR_Word RoleA_9;
  MR_Word STATE_VARIABLE_Info_1_15;

  {
    RoleA_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RoleA_9, 0) = (MR_Box) (((((MR_Unsigned) (ReadWhy3_7) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0(RoleA_9, ParseTreeInt3_6, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_1_15);
  if ((MaybeShadowedReadWhy3_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_1_15;
  else
  {
    MR_Word ShadowedReadWhy3_10 = ((MR_Word) ((MR_hl_field(1, MaybeShadowedReadWhy3_8, 0))));
    MR_Word RoleB_11;
    MR_Word Var_16 = (MR_Word) (ShadowedReadWhy3_10);

    {
      RoleB_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RoleB_11, 0) = (MR_Box) (((((MR_Unsigned) (Var_16) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0(RoleB_11, ParseTreeInt3_6, STATE_VARIABLE_Info_1_15, STATE_VARIABLE_Info_13);
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_Info_10;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_Info_20;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_Info_20));
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_Id_4;

  conv9_Id_4 = parse_tree__module_qual__collect_mq_info__mode_ctor_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_Id_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_Id_4;

  conv7_Id_4 = parse_tree__module_qual__collect_mq_info__inst_ctor_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_Id_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__4_4;

  parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_4));
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_Id_4;

  conv4_Id_4 = parse_tree__module_qual__collect_mq_info__type_ctor_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_Id_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImportedModules_7;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int3_import_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImportedModules_7);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImportedModules_7));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Modules_10;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_incl_context_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_10));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0(
  MR_Word Role_5,
  MR_Word ParseTreeInt3_6,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_Word PermInInt_8;
  MR_Word PermInImp_9;
  MR_Word Permissions_14;
  MR_Word IntInclMap_17;
  MR_Word IntImportMap_18;
  MR_Word IntTypeDefnMap_19;
  MR_Word IntInstDefnMap_20;
  MR_Word IntModeDefnMap_21;
  MR_Word IntTypeClasses_22;
  MR_Word IntInstances_23;
  MR_Word Modules0_25;
  MR_Word Modules_26;
  MR_Word ImportedModules0_27;
  MR_Word ImportedModules_28;
  MR_Word Types0_29;
  MR_Word TypeIds_30;
  MR_Word Types_31;
  MR_Word Insts0_32;
  MR_Word InstIds_33;
  MR_Word Insts_34;
  MR_Word Modes0_35;
  MR_Word ModeIds_36;
  MR_Word Modes_37;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_Info_1_74;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_Info_2_77;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_Info_3_81;
  MR_Word Var_83;
  MR_Word STATE_VARIABLE_Info_4_85;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_Info_5_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word STATE_VARIABLE_Info_6_92;
  MR_Word Var_94;
  MR_Box conv1_Modules_26;
  MR_Box conv3_ImportedModules_28;
  MR_Box conv6_Types_31;
  MR_Box conv8_Insts_34;
  MR_Box conv10_Modes_37;
  MR_Box conv12_STATE_VARIABLE_Info_6_92;
  MR_Box conv14_STATE_VARIABLE_Info_39;

  if ((Role_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    PermInInt_8 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]);
    PermInImp_9 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]);
  }
  else
  {
    MR_Word ReadWhy3_10 = ((((MR_Unsigned) ((MR_hl_field(1, Role_5, 0))) >> 1)) & (MR_Integer) 15);
    MR_Word IsShadowed_11 = ((MR_Unsigned) ((MR_hl_field(1, Role_5, 0))) & (MR_Integer) 1);
    MR_Word PermInInt0_12 = ((&parse_tree__module_qual__collect_mq_info_vector_common_11[0 + ReadWhy3_10]))->parse_tree__module_qual__collect_mq_info__vector_common_type_11_0__vct_11_f_0;
    MR_Word PermInImp0_13 = ((&parse_tree__module_qual__collect_mq_info_vector_common_11[0 + ReadWhy3_10]))->parse_tree__module_qual__collect_mq_info__vector_common_type_11_0__vct_11_f_1;

    switch (IsShadowed_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PermQual0_137 = ((((MR_Unsigned) ((MR_hl_field(0, PermInInt0_12, 0))) >> 2)) & (MR_Integer) 3);
          MR_Word PermUnqual0_138 = ((MR_Unsigned) ((MR_hl_field(0, PermInInt0_12, 0))) & (MR_Integer) 3);
          MR_Word Var_139 = ((&parse_tree__module_qual__collect_mq_info_vector_common_9[16 + PermQual0_137]))->parse_tree__module_qual__collect_mq_info__vector_common_type_9_0__vct_9_f_0;
          MR_Word Var_140 = ((&parse_tree__module_qual__collect_mq_info_vector_common_9[20 + PermUnqual0_138]))->parse_tree__module_qual__collect_mq_info__vector_common_type_9_0__vct_9_f_0;
          MR_Word PermQual0_141;
          MR_Word PermUnqual0_142;
          MR_Word Var_143;
          MR_Word Var_144;

          {
            PermInInt_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PermInInt_8, 0) = (MR_Box) (((((MR_Unsigned) (Var_139) << 2)) | (MR_Unsigned) (Var_140)));
          }
          PermQual0_141 = ((((MR_Unsigned) ((MR_hl_field(0, PermInImp0_13, 0))) >> 2)) & (MR_Integer) 3);
          PermUnqual0_142 = ((MR_Unsigned) ((MR_hl_field(0, PermInImp0_13, 0))) & (MR_Integer) 3);
          Var_143 = ((&parse_tree__module_qual__collect_mq_info_vector_common_9[24 + PermQual0_141]))->parse_tree__module_qual__collect_mq_info__vector_common_type_9_0__vct_9_f_0;
          Var_144 = ((&parse_tree__module_qual__collect_mq_info_vector_common_9[28 + PermUnqual0_142]))->parse_tree__module_qual__collect_mq_info__vector_common_type_9_0__vct_9_f_0;
          {
            PermInImp_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PermInImp_9, 0) = (MR_Box) (((((MR_Unsigned) (Var_143) << 2)) | (MR_Unsigned) (Var_144)));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          PermInInt_8 = PermInInt0_12;
          PermInImp_9 = PermInImp0_13;
        }
        break;
    }
  }
  {
    Permissions_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Permissions_14, 0) = ((MR_Box) (PermInInt_8));
    MR_hl_field(0, Permissions_14, 1) = ((MR_Box) (PermInImp_9));
  }
  IntInclMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, 2))));
  IntImportMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, 3))));
  IntTypeDefnMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, 4))));
  IntInstDefnMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, 5))));
  IntModeDefnMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, 6))));
  IntTypeClasses_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, 7))));
  IntInstances_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, 8))));
  parse_tree__module_qual__mq_info__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_38, &Modules0_25);
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[3]));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_1));
    MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_72, 3) = ((MR_Box) (Permissions_14));
  }
  Var_73 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_include_module_info_0), IntInclMap_17);
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_72, Var_73, ((MR_Box) (Modules0_25)), &conv1_Modules_26);
  Modules_26 = ((MR_Word) (conv1_Modules_26));
  parse_tree__module_qual__mq_info__mq_info_set_modules_3_p_0(Modules_26, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_1_74);
  parse_tree__module_qual__mq_info__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_1_74, &ImportedModules0_27);
  Var_76 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_int_section_import_0), IntImportMap_18);
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[14]), Var_76, ((MR_Box) (ImportedModules0_27)), &conv3_ImportedModules_28);
  ImportedModules_28 = ((MR_Word) (conv3_ImportedModules_28));
  parse_tree__module_qual__mq_info__mq_info_set_imported_modules_3_p_0(ImportedModules_28, STATE_VARIABLE_Info_1_74, &STATE_VARIABLE_Info_2_77);
  parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_2_77, &Types0_29);
  Var_79 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_type_ctor_checked_defn_0), IntTypeDefnMap_19);
  TypeIds_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[15]), Var_79);
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_4));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (Permissions_14));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_80, TypeIds_30, ((MR_Box) (Types0_29)), &conv6_Types_31);
  Types_31 = ((MR_Word) (conv6_Types_31));
  parse_tree__module_qual__mq_info__mq_info_set_types_3_p_0(Types_31, STATE_VARIABLE_Info_2_77, &STATE_VARIABLE_Info_3_81);
  parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_3_81, &Insts0_32);
  Var_83 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0), IntInstDefnMap_20);
  InstIds_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[16]), Var_83);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_80, InstIds_33, ((MR_Box) (Insts0_32)), &conv8_Insts_34);
  Insts_34 = ((MR_Word) (conv8_Insts_34));
  parse_tree__module_qual__mq_info__mq_info_set_insts_3_p_0(Insts_34, STATE_VARIABLE_Info_3_81, &STATE_VARIABLE_Info_4_85);
  parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_4_85, &Modes0_35);
  Var_87 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0), IntModeDefnMap_21);
  ModeIds_36 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[17]), Var_87);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_80, ModeIds_36, ((MR_Box) (Modes0_35)), &conv10_Modes_37);
  Modes_37 = ((MR_Word) (conv10_Modes_37));
  parse_tree__module_qual__mq_info__mq_info_set_modes_3_p_0(Modes_37, STATE_VARIABLE_Info_4_85, &STATE_VARIABLE_Info_5_89);
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[1]));
    MR_hl_field(0, Var_90, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_7));
    MR_hl_field(0, Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_90, 3) = ((MR_Box) (Permissions_14));
  }
  Var_91 = (MR_Word) (IntTypeClasses_22);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), Var_90, Var_91, ((MR_Box) (STATE_VARIABLE_Info_5_89)), &conv12_STATE_VARIABLE_Info_6_92);
  STATE_VARIABLE_Info_6_92 = ((MR_Word) (conv12_STATE_VARIABLE_Info_6_92));
  Var_94 = (MR_Word) (IntInstances_23);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[18]), Var_94, ((MR_Box) (STATE_VARIABLE_Info_6_92)), &conv14_STATE_VARIABLE_Info_39);
  *STATE_VARIABLE_Info_39 = ((MR_Word) (conv14_STATE_VARIABLE_Info_39));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, 0))));
  MR_Word ReadWhy1_7 = ((MR_Unsigned) ((MR_hl_field(0, DirectInt1Spec_4, 1))) & (MR_Integer) 15);
  MR_Word MaybeShadowedReadWhy1_8 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, 2))));
  MR_Word STATE_VARIABLE_Info_1_13;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0(ReadWhy1_7, (MR_Integer) 0, ParseTreeInt1_6, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_13);
  if ((MaybeShadowedReadWhy1_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_1_13;
  else
  {
    MR_Word ShadowedReadWhy1_9 = ((MR_Word) ((MR_hl_field(1, MaybeShadowedReadWhy1_8, 0))));
    MR_Word Var_14 = (MR_Word) (ShadowedReadWhy1_9);

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0(Var_14, (MR_Integer) 1, ParseTreeInt1_6, STATE_VARIABLE_Info_1_13, STATE_VARIABLE_Info_11);
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Info_18;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Info_10;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_20;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Modes_15;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Modes_15);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Modes_15));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Insts_15;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Insts_15);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Insts_15));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Types_34;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_type_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Types_34);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Types_34));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Modules_14;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_interface_only_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_14));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0(
  MR_Word ReadWhy1_6,
  MR_Word IsShadowed_7,
  MR_Word ParseTreeInt1_8,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  MR_Word IntPermInInt0_10;
  MR_Word IntPermInImp0_11;
  MR_Word IntPermInInt_12;
  MR_Word IntPermInImp_13;
  MR_Word IntPermissions_14;
  MR_Word InclMap_18;
  MR_Word TypeCheckedMap_22;
  MR_Word InstCheckedMap_23;
  MR_Word ModeCheckedMap_24;
  MR_Word IntTypeClasses_25;
  MR_Word IntInstances_26;
  MR_Word IntPromises_31;
  MR_Word Modules0_34;
  MR_Word Modules_35;
  MR_Word Types0_36;
  MR_Word Types_37;
  MR_Word Insts0_38;
  MR_Word Insts_39;
  MR_Word Modes0_40;
  MR_Word Modes_41;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_Info_1_77;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_Info_2_79;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_Info_3_81;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_Info_4_83;
  MR_Word Var_84;
  MR_Word STATE_VARIABLE_Info_5_85;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_Info_6_88;
  MR_Box conv1_Modules_35;
  MR_Box conv3_Types_37;
  MR_Box conv5_Insts_39;
  MR_Box conv7_Modes_41;
  MR_Box conv9_STATE_VARIABLE_Info_5_85;
  MR_Box conv11_STATE_VARIABLE_Info_6_88;
  MR_Box conv13_STATE_VARIABLE_Info_43;

  switch (ReadWhy1_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
      {
        IntPermInInt0_10 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[2]);
        IntPermInImp0_11 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]);
      }
      break;
    case (MR_Integer) 6:
      {
        IntPermInInt0_10 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[3]);
        IntPermInImp0_11 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4]);
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        IntPermInInt0_10 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]);
        IntPermInImp0_11 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]);
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        IntPermInInt0_10 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4]);
        IntPermInImp0_11 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4]);
      }
      break;
    case (MR_Integer) 5:
      {
        IntPermInInt0_10 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[1]);
        IntPermInImp0_11 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]);
      }
      break;
    case (MR_Integer) 7:
      {
        IntPermInInt0_10 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[1]);
        IntPermInImp0_11 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4]);
      }
      break;
    case (MR_Integer) 8:
      {
        IntPermInInt0_10 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[4]);
        IntPermInImp0_11 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_3[0]);
      }
      break;
    case (MR_Integer) 9:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.collect_mq_info.collect_mq_info_in_parse_tree_int1\'/5", (MR_String) "rwi1_opt");
        return;
      }
      break;
    case (MR_Integer) 10:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.collect_mq_info.collect_mq_info_in_parse_tree_int1\'/5", (MR_String) "rwi1_opt");
        return;
      }
      break;
  }
  switch (IsShadowed_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word PermQual0_130 = ((((MR_Unsigned) ((MR_hl_field(0, IntPermInInt0_10, 0))) >> 2)) & (MR_Integer) 3);
        MR_Word PermUnqual0_131 = ((MR_Unsigned) ((MR_hl_field(0, IntPermInInt0_10, 0))) & (MR_Integer) 3);
        MR_Word Var_132 = ((&parse_tree__module_qual__collect_mq_info_vector_common_9[0 + PermQual0_130]))->parse_tree__module_qual__collect_mq_info__vector_common_type_9_0__vct_9_f_0;
        MR_Word Var_133 = ((&parse_tree__module_qual__collect_mq_info_vector_common_9[4 + PermUnqual0_131]))->parse_tree__module_qual__collect_mq_info__vector_common_type_9_0__vct_9_f_0;
        MR_Word PermQual0_134;
        MR_Word PermUnqual0_135;
        MR_Word Var_136;
        MR_Word Var_137;

        {
          IntPermInInt_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IntPermInInt_12, 0) = (MR_Box) (((((MR_Unsigned) (Var_132) << 2)) | (MR_Unsigned) (Var_133)));
        }
        PermQual0_134 = ((((MR_Unsigned) ((MR_hl_field(0, IntPermInImp0_11, 0))) >> 2)) & (MR_Integer) 3);
        PermUnqual0_135 = ((MR_Unsigned) ((MR_hl_field(0, IntPermInImp0_11, 0))) & (MR_Integer) 3);
        Var_136 = ((&parse_tree__module_qual__collect_mq_info_vector_common_9[8 + PermQual0_134]))->parse_tree__module_qual__collect_mq_info__vector_common_type_9_0__vct_9_f_0;
        Var_137 = ((&parse_tree__module_qual__collect_mq_info_vector_common_9[12 + PermUnqual0_135]))->parse_tree__module_qual__collect_mq_info__vector_common_type_9_0__vct_9_f_0;
        {
          IntPermInImp_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, IntPermInImp_13, 0) = (MR_Box) (((((MR_Unsigned) (Var_136) << 2)) | (MR_Unsigned) (Var_137)));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        IntPermInInt_12 = IntPermInInt0_10;
        IntPermInImp_13 = IntPermInImp0_11;
      }
      break;
  }
  {
    IntPermissions_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntPermissions_14, 0) = ((MR_Box) (IntPermInInt_12));
    MR_hl_field(0, IntPermissions_14, 1) = ((MR_Box) (IntPermInImp_13));
  }
  InclMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 3))));
  TypeCheckedMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 7))));
  InstCheckedMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 8))));
  ModeCheckedMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 9))));
  IntTypeClasses_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 10))));
  IntInstances_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 11))));
  IntPromises_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_8, 16))));
  parse_tree__module_qual__mq_info__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_42, &Modules0_34);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_10[0]));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_1));
    MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_76, 3) = ((MR_Box) (IntPermissions_14));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_76, InclMap_18, ((MR_Box) (Modules0_34)), &conv1_Modules_35);
  Modules_35 = ((MR_Word) (conv1_Modules_35));
  parse_tree__module_qual__mq_info__mq_info_set_modules_3_p_0(Modules_35, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_1_77);
  parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_1_77, &Types0_36);
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_10[1]));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_2));
    MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_78, 3) = ((MR_Box) (IntPermissions_14));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_78, TypeCheckedMap_22, ((MR_Box) (Types0_36)), &conv3_Types_37);
  Types_37 = ((MR_Word) (conv3_Types_37));
  parse_tree__module_qual__mq_info__mq_info_set_types_3_p_0(Types_37, STATE_VARIABLE_Info_1_77, &STATE_VARIABLE_Info_2_79);
  parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_2_79, &Insts0_38);
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_10[2]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_3));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (IntPermissions_14));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_80, InstCheckedMap_23, ((MR_Box) (Insts0_38)), &conv5_Insts_39);
  Insts_39 = ((MR_Word) (conv5_Insts_39));
  parse_tree__module_qual__mq_info__mq_info_set_insts_3_p_0(Insts_39, STATE_VARIABLE_Info_2_79, &STATE_VARIABLE_Info_3_81);
  parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_3_81, &Modes0_40);
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_10[3]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_4));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (IntPermissions_14));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_82, ModeCheckedMap_24, ((MR_Box) (Modes0_40)), &conv7_Modes_41);
  Modes_41 = ((MR_Word) (conv7_Modes_41));
  parse_tree__module_qual__mq_info__mq_info_set_modes_3_p_0(Modes_41, STATE_VARIABLE_Info_3_81, &STATE_VARIABLE_Info_4_83);
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[1]));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_5_p_0_5));
    MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_84, 3) = ((MR_Box) (IntPermissions_14));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), Var_84, IntTypeClasses_25, ((MR_Box) (STATE_VARIABLE_Info_4_83)), &conv9_STATE_VARIABLE_Info_5_85);
  STATE_VARIABLE_Info_5_85 = ((MR_Word) (conv9_STATE_VARIABLE_Info_5_85));
  Var_87 = (MR_Word) (IntInstances_26);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[13]), Var_87, ((MR_Box) (STATE_VARIABLE_Info_5_85)), &conv11_STATE_VARIABLE_Info_6_88);
  STATE_VARIABLE_Info_6_88 = ((MR_Word) (conv11_STATE_VARIABLE_Info_6_88));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[8]), IntPromises_31, ((MR_Box) (STATE_VARIABLE_Info_6_88)), &conv13_STATE_VARIABLE_Info_43);
  *STATE_VARIABLE_Info_43 = ((MR_Word) (conv13_STATE_VARIABLE_Info_43));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_4, 0))));
  MR_Word ReadWhy0_7 = ((MR_Unsigned) ((MR_hl_field(0, AncestorIntSpec_4, 1))) & (MR_Integer) 1);

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0(ReadWhy0_7, ParseTreeInt0_6, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_STATE_VARIABLE_Info_18;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv18_STATE_VARIABLE_Info_18;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_Info_10;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_Info_10;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Info_20;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Info_20;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Modes_17;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_Modes_17);
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_Modes_17));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Insts_17;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Insts_17);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Insts_17));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Types_36;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_type_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Types_36);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Types_36));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ImportedModules_7;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int0_import_or_use_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImportedModules_7);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImportedModules_7));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Modules_16;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_16));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0(
  MR_Word ReadWhy0_5,
  MR_Word ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  MR_Word IntPermissions_12;
  MR_Word ImpPermissions_13;
  MR_Word InclMap_17;
  MR_Word ImportUseMap_18;
  MR_Word TypeCtorCheckedMap_21;
  MR_Word InstCtorCheckedMap_22;
  MR_Word ModeCtorCheckedMap_23;
  MR_Word IntTypeClasses_24;
  MR_Word IntInstances_25;
  MR_Word IntPromises_30;
  MR_Word ImpTypeClasses_31;
  MR_Word ImpInstances_32;
  MR_Word ImpPromises_37;
  MR_Word Modules0_38;
  MR_Word Modules_39;
  MR_Word ImportedModules0_40;
  MR_Word ImportedModules_41;
  MR_Word Types0_42;
  MR_Word Types_43;
  MR_Word Insts0_44;
  MR_Word Insts_45;
  MR_Word Modes0_46;
  MR_Word Modes_47;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_Info_1_61;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_Info_2_64;
  MR_Word Var_65;
  MR_Word STATE_VARIABLE_Info_3_66;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_Info_4_68;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_Info_5_70;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_Info_6_72;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_Info_7_74;
  MR_Word Var_76;
  MR_Word STATE_VARIABLE_Info_8_77;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_Info_9_80;
  MR_Word STATE_VARIABLE_Info_10_82;
  MR_Box conv1_Modules_39;
  MR_Box conv3_ImportedModules_41;
  MR_Box conv5_Types_43;
  MR_Box conv7_Insts_45;
  MR_Box conv9_Modes_47;
  MR_Box conv11_STATE_VARIABLE_Info_6_72;
  MR_Box conv13_STATE_VARIABLE_Info_7_74;
  MR_Box conv15_STATE_VARIABLE_Info_8_77;
  MR_Box conv17_STATE_VARIABLE_Info_9_80;
  MR_Box conv19_STATE_VARIABLE_Info_10_82;
  MR_Box conv21_STATE_VARIABLE_Info_49;

  switch (ReadWhy0_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.collect_mq_info.collect_mq_info_in_parse_tree_int0\'/4", (MR_String) "rwi0_opt");
        return;
      }
      break;
    case (MR_Integer) 0:
      {
        IntPermissions_12 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9]);
        ImpPermissions_13 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9]);
      }
      break;
  }
  InclMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 3))));
  ImportUseMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 4))));
  TypeCtorCheckedMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 7))));
  InstCtorCheckedMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 8))));
  ModeCtorCheckedMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 9))));
  IntTypeClasses_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 10))));
  IntInstances_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 11))));
  IntPromises_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 16))));
  ImpTypeClasses_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 17))));
  ImpInstances_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 18))));
  ImpPromises_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, 23))));
  parse_tree__module_qual__mq_info__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_48, &Modules0_38);
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_1));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (IntPermissions_12));
    MR_hl_field(0, Var_60, 4) = ((MR_Box) (ImpPermissions_13));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_60, InclMap_17, ((MR_Box) (Modules0_38)), &conv1_Modules_39);
  Modules_39 = ((MR_Word) (conv1_Modules_39));
  parse_tree__module_qual__mq_info__mq_info_set_modules_3_p_0(Modules_39, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_1_61);
  parse_tree__module_qual__mq_info__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_1_61, &ImportedModules0_40);
  Var_63 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_section_import_and_or_use_0), ImportUseMap_18);
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[10]), Var_63, ((MR_Box) (ImportedModules0_40)), &conv3_ImportedModules_41);
  ImportedModules_41 = ((MR_Word) (conv3_ImportedModules_41));
  parse_tree__module_qual__mq_info__mq_info_set_imported_modules_3_p_0(ImportedModules_41, STATE_VARIABLE_Info_1_61, &STATE_VARIABLE_Info_2_64);
  parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_2_64, &Types0_42);
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[2]));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_3));
    MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_65, 3) = ((MR_Box) (IntPermissions_12));
    MR_hl_field(0, Var_65, 4) = ((MR_Box) (ImpPermissions_13));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item_type__parse_tree__prog_item_type__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_65, TypeCtorCheckedMap_21, ((MR_Box) (Types0_42)), &conv5_Types_43);
  Types_43 = ((MR_Word) (conv5_Types_43));
  parse_tree__module_qual__mq_info__mq_info_set_types_3_p_0(Types_43, STATE_VARIABLE_Info_2_64, &STATE_VARIABLE_Info_3_66);
  parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_3_66, &Insts0_44);
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[3]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_4));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (IntPermissions_12));
    MR_hl_field(0, Var_67, 4) = ((MR_Box) (ImpPermissions_13));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_67, InstCtorCheckedMap_22, ((MR_Box) (Insts0_44)), &conv7_Insts_45);
  Insts_45 = ((MR_Word) (conv7_Insts_45));
  parse_tree__module_qual__mq_info__mq_info_set_insts_3_p_0(Insts_45, STATE_VARIABLE_Info_3_66, &STATE_VARIABLE_Info_4_68);
  parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_4_68, &Modes0_46);
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[4]));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_5));
    MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_69, 3) = ((MR_Box) (IntPermissions_12));
    MR_hl_field(0, Var_69, 4) = ((MR_Box) (ImpPermissions_13));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item_inst_mode__parse_tree__prog_item_inst_mode__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_69, ModeCtorCheckedMap_23, ((MR_Box) (Modes0_46)), &conv9_Modes_47);
  Modes_47 = ((MR_Word) (conv9_Modes_47));
  parse_tree__module_qual__mq_info__mq_info_set_modes_3_p_0(Modes_47, STATE_VARIABLE_Info_4_68, &STATE_VARIABLE_Info_5_70);
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[1]));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_6));
    MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_71, 3) = ((MR_Box) (IntPermissions_12));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), Var_71, IntTypeClasses_24, ((MR_Box) (STATE_VARIABLE_Info_5_70)), &conv11_STATE_VARIABLE_Info_6_72);
  STATE_VARIABLE_Info_6_72 = ((MR_Word) (conv11_STATE_VARIABLE_Info_6_72));
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[1]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_7));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (ImpPermissions_13));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), Var_73, ImpTypeClasses_31, ((MR_Box) (STATE_VARIABLE_Info_6_72)), &conv13_STATE_VARIABLE_Info_7_74);
  STATE_VARIABLE_Info_7_74 = ((MR_Word) (conv13_STATE_VARIABLE_Info_7_74));
  Var_76 = (MR_Word) (IntInstances_25);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[11]), Var_76, ((MR_Box) (STATE_VARIABLE_Info_7_74)), &conv15_STATE_VARIABLE_Info_8_77);
  STATE_VARIABLE_Info_8_77 = ((MR_Word) (conv15_STATE_VARIABLE_Info_8_77));
  Var_79 = (MR_Word) (ImpInstances_32);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[12]), Var_79, ((MR_Box) (STATE_VARIABLE_Info_8_77)), &conv17_STATE_VARIABLE_Info_9_80);
  STATE_VARIABLE_Info_9_80 = ((MR_Word) (conv17_STATE_VARIABLE_Info_9_80));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[6]), IntPromises_30, ((MR_Box) (STATE_VARIABLE_Info_9_80)), &conv19_STATE_VARIABLE_Info_10_82);
  STATE_VARIABLE_Info_10_82 = ((MR_Word) (conv19_STATE_VARIABLE_Info_10_82));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[7]), ImpPromises_37, ((MR_Box) (STATE_VARIABLE_Info_10_82)), &conv21_STATE_VARIABLE_Info_49);
  *STATE_VARIABLE_Info_49 = ((MR_Word) (conv21_STATE_VARIABLE_Info_49));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv30_STATE_VARIABLE_Info_18;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv30_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv30_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv28_STATE_VARIABLE_Info_18;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv28_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv28_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv26_STATE_VARIABLE_Info_10;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv26_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv24_STATE_VARIABLE_Info_10;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_Info_10);
  *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_Info_10));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_STATE_VARIABLE_Info_20;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv22_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_STATE_VARIABLE_Info_20;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_Info_20));
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv18_MQId_4;

  conv18_MQId_4 = parse_tree__module_qual__collect_mq_info__item_mode_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv18_MQId_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv16_MQId_4;

  conv16_MQId_4 = parse_tree__module_qual__collect_mq_info__item_mode_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv16_MQId_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv14_MQId_4;

  conv14_MQId_4 = parse_tree__module_qual__collect_mq_info__item_inst_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv14_MQId_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv12_MQId_4;

  conv12_MQId_4 = parse_tree__module_qual__collect_mq_info__item_inst_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv12_MQId_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv10_MQId_4;

  conv10_MQId_4 = parse_tree__module_qual__collect_mq_info__item_type_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv10_MQId_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__4_4;

  parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv9_HeadVar__4_4));
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_MQId_4;

  conv7_MQId_4 = parse_tree__module_qual__collect_mq_info__item_type_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_MQId_4));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__4_4;

  parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv6_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_ImportedModules_21;
  MR_Word conv2_STATE_VARIABLE_UnusedIntModules_23;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_src_avail_map_entry_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ImportedModules_21, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_UnusedIntModules_23);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ImportedModules_21));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_UnusedIntModules_23));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Modules_16;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_16);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_16));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word STATE_VARIABLE_Info_0_71,
  MR_Word * STATE_VARIABLE_Info_72)
{
  MR_Word InclMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 2))));
  MR_Word ImportUseMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 3))));
  MR_Word TypeCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 8))));
  MR_Word InstCtorCheckedMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 9))));
  MR_Word ModeCtorCheckedMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 10))));
  MR_Word IntTypeClasses_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 15))));
  MR_Word IntInstances_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 16))));
  MR_Word IntPromises_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 21))));
  MR_Word ImpTypeClasses_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 23))));
  MR_Word ImpInstances_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 24))));
  MR_Word ImpPromises_45 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, 34))));
  MR_Word Modules0_49;
  MR_Word Modules_50;
  MR_Word ImportedModules0_51;
  MR_Word UnusedIntModules0_52;
  MR_Word ImportedModules_53;
  MR_Word UnusedIntModules_54;
  MR_Word Types0_55;
  MR_Word IntTypeDefns_56;
  MR_Word ImpTypeDefns_57;
  MR_Word Types1_59;
  MR_Word Types_60;
  MR_Word Insts0_61;
  MR_Word IntInstDefns_62;
  MR_Word ImpInstDefns_63;
  MR_Word Insts1_64;
  MR_Word Insts_65;
  MR_Word Modes0_66;
  MR_Word IntModeDefns_67;
  MR_Word ImpModeDefns_68;
  MR_Word Modes1_69;
  MR_Word Modes_70;
  MR_Word STATE_VARIABLE_Info_1_80;
  MR_Word STATE_VARIABLE_Info_2_82;
  MR_Word STATE_VARIABLE_Info_3_83;
  MR_Word Var_85;
  MR_Word Var_88;
  MR_Word STATE_VARIABLE_Info_4_90;
  MR_Word Var_92;
  MR_Word Var_95;
  MR_Word STATE_VARIABLE_Info_5_97;
  MR_Word Var_99;
  MR_Word Var_102;
  MR_Word STATE_VARIABLE_Info_6_104;
  MR_Word STATE_VARIABLE_Info_7_106;
  MR_Word STATE_VARIABLE_Info_8_108;
  MR_Word Var_110;
  MR_Word STATE_VARIABLE_Info_9_111;
  MR_Word STATE_VARIABLE_Info_10_113;
  MR_Word STATE_VARIABLE_Info_11_115;
  MR_Box conv1_Modules_50;
  MR_Box conv5_ImportedModules_53;
  MR_Box conv4_UnusedIntModules_54;
  MR_Word _ImpForeignEnums_58;
  MR_Box conv8_Types1_59;
  MR_Box conv11_Types_60;
  MR_Box conv13_Insts1_64;
  MR_Box conv15_Insts_65;
  MR_Box conv17_Modes1_69;
  MR_Box conv19_Modes_70;
  MR_Box conv21_STATE_VARIABLE_Info_7_106;
  MR_Box conv23_STATE_VARIABLE_Info_8_108;
  MR_Box conv25_STATE_VARIABLE_Info_9_111;
  MR_Box conv27_STATE_VARIABLE_Info_10_113;
  MR_Box conv29_STATE_VARIABLE_Info_11_115;
  MR_Box conv31_STATE_VARIABLE_Info_72;

  parse_tree__module_qual__mq_info__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_71, &Modules0_49);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[0]), InclMap_13, ((MR_Box) (Modules0_49)), &conv1_Modules_50);
  Modules_50 = ((MR_Word) (conv1_Modules_50));
  parse_tree__module_qual__mq_info__mq_info_set_modules_3_p_0(Modules_50, STATE_VARIABLE_Info_0_71, &STATE_VARIABLE_Info_1_80);
  parse_tree__module_qual__mq_info__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_1_80, &ImportedModules0_51);
  parse_tree__module_qual__mq_info__mq_info_get_as_yet_unused_interface_modules_2_p_0(STATE_VARIABLE_Info_1_80, &UnusedIntModules0_52);
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[1]), ImportUseMap_14, ((MR_Box) (ImportedModules0_51)), &conv5_ImportedModules_53, ((MR_Box) (UnusedIntModules0_52)), &conv4_UnusedIntModules_54);
  ImportedModules_53 = ((MR_Word) (conv5_ImportedModules_53));
  UnusedIntModules_54 = ((MR_Word) (conv4_UnusedIntModules_54));
  parse_tree__module_qual__mq_info__mq_info_set_imported_modules_3_p_0(ImportedModules_53, STATE_VARIABLE_Info_1_80, &STATE_VARIABLE_Info_2_82);
  parse_tree__module_qual__mq_info__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedIntModules_54, STATE_VARIABLE_Info_2_82, &STATE_VARIABLE_Info_3_83);
  parse_tree__module_qual__mq_info__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_3_83, &Types0_55);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_19, &IntTypeDefns_56, &ImpTypeDefns_57, &_ImpForeignEnums_58);
  Var_85 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[2]), IntTypeDefns_56);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0]), Var_85, ((MR_Box) (Types0_55)), &conv8_Types1_59);
  Types1_59 = ((MR_Word) (conv8_Types1_59));
  Var_88 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[3]), ImpTypeDefns_57);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]), Var_88, ((MR_Box) (Types1_59)), &conv11_Types_60);
  Types_60 = ((MR_Word) (conv11_Types_60));
  parse_tree__module_qual__mq_info__mq_info_set_types_3_p_0(Types_60, STATE_VARIABLE_Info_3_83, &STATE_VARIABLE_Info_4_90);
  parse_tree__module_qual__mq_info__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_4_90, &Insts0_61);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_20, &IntInstDefns_62, &ImpInstDefns_63);
  Var_92 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[4]), IntInstDefns_62);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0]), Var_92, ((MR_Box) (Insts0_61)), &conv13_Insts1_64);
  Insts1_64 = ((MR_Word) (conv13_Insts1_64));
  Var_95 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[5]), ImpInstDefns_63);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]), Var_95, ((MR_Box) (Insts1_64)), &conv15_Insts_65);
  Insts_65 = ((MR_Word) (conv15_Insts_65));
  parse_tree__module_qual__mq_info__mq_info_set_insts_3_p_0(Insts_65, STATE_VARIABLE_Info_4_90, &STATE_VARIABLE_Info_5_97);
  parse_tree__module_qual__mq_info__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_5_97, &Modes0_66);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_21, &IntModeDefns_67, &ImpModeDefns_68);
  Var_99 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[6]), IntModeDefns_67);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0]), Var_99, ((MR_Box) (Modes0_66)), &conv17_Modes1_69);
  Modes1_69 = ((MR_Word) (conv17_Modes1_69));
  Var_102 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[7]), ImpModeDefns_68);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]), Var_102, ((MR_Box) (Modes1_69)), &conv19_Modes_70);
  Modes_70 = ((MR_Word) (conv19_Modes_70));
  parse_tree__module_qual__mq_info__mq_info_set_modes_3_p_0(Modes_70, STATE_VARIABLE_Info_5_97, &STATE_VARIABLE_Info_6_104);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2]), IntTypeClasses_26, ((MR_Box) (STATE_VARIABLE_Info_6_104)), &conv21_STATE_VARIABLE_Info_7_106);
  STATE_VARIABLE_Info_7_106 = ((MR_Word) (conv21_STATE_VARIABLE_Info_7_106));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[3]), ImpTypeClasses_34, ((MR_Box) (STATE_VARIABLE_Info_7_106)), &conv23_STATE_VARIABLE_Info_8_108);
  STATE_VARIABLE_Info_8_108 = ((MR_Word) (conv23_STATE_VARIABLE_Info_8_108));
  Var_110 = (MR_Word) (IntInstances_27);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[8]), Var_110, ((MR_Box) (STATE_VARIABLE_Info_8_108)), &conv25_STATE_VARIABLE_Info_9_111);
  STATE_VARIABLE_Info_9_111 = ((MR_Word) (conv25_STATE_VARIABLE_Info_9_111));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[9]), ImpInstances_35, ((MR_Box) (STATE_VARIABLE_Info_9_111)), &conv27_STATE_VARIABLE_Info_10_113);
  STATE_VARIABLE_Info_10_113 = ((MR_Word) (conv27_STATE_VARIABLE_Info_10_113));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[4]), IntPromises_32, ((MR_Box) (STATE_VARIABLE_Info_10_113)), &conv29_STATE_VARIABLE_Info_11_115);
  STATE_VARIABLE_Info_11_115 = ((MR_Word) (conv29_STATE_VARIABLE_Info_11_115));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__mq_info__parse_tree__module_qual__mq_info__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[5]), ImpPromises_45, ((MR_Box) (STATE_VARIABLE_Info_11_115)), &conv31_STATE_VARIABLE_Info_72);
  *STATE_VARIABLE_Info_72 = ((MR_Word) (conv31_STATE_VARIABLE_Info_72));
}

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____int3_role_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__collect_mq_info____Unify____int3_role_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____maybe_shadowed_import_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_qual__collect_mq_info____Unify____maybe_shadowed_import_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____maybe_shadowed_import_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_qual__collect_mq_info____Compare____maybe_shadowed_import_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__module_qual__collect_mq_info__init(void)
{
}

void mercury__parse_tree__module_qual__collect_mq_info__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_int3_role_0);
  MR_register_type_ctor_info(&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_maybe_shadowed_import_0);
}

void mercury__parse_tree__module_qual__collect_mq_info__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_qual__collect_mq_info__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_qual.collect_mq_info.
