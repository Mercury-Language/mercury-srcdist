/*
** Automatically generated from `module_qual.collect_mq_info.m'
** by the Mercury compiler,
** version rotd-2023-11-18
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_0;

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_int3_role_0_1[1];

static const MR_DuArgLocn parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_int3_role_0_1[1];

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_1;

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_1[1];

static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_int3_role_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_int3_role_0[2];

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_int3_role_0[2];

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__888__1_2_p_0(
  MR_Word HeadVar__1_163,
  MR_Word * HeadVar__2_164);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__899__1_2_p_0(
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
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_Modules_0_13,
  MR_Word * STATE_VARIABLE_Modules_14);

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
  MR_Word STATE_VARIABLE_ImportedModules_0_19,
  MR_Word * STATE_VARIABLE_ImportedModules_20,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_21,
  MR_Word * STATE_VARIABLE_UnusedIntModules_22);

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
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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


static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[11][2];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[22][3];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[5][8];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[10][4];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[4][9];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[5][7];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_8[7][5];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_9[2][6];


struct parse_tree__module_qual__collect_mq_info__vector_common_type_10_0_s {
  const MR_Word parse_tree__module_qual__collect_mq_info__vector_common_type_10_0__vct_10_f_0;
  const MR_Word parse_tree__module_qual__collect_mq_info__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_10_0_s parse_tree__module_qual__collect_mq_info_vector_common_10[9];



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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
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
    ((MR_Box) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 1))))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (((MR_Box) ((MR_Integer) 1))))
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
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[3])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[5])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[6])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[6])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[5][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
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

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[10][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9]))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9]))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[10]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9]))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[10]))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_15)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_16)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_tree234__pti_set_tree234_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[5][7] = {
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
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
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
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_8[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_9[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
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


static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_10_0_s parse_tree__module_qual__collect_mq_info_vector_common_10[9] = {
  /* row   0 */
  {
    (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[0])),
    (MR_Word) (((MR_Box) ((MR_Integer) 1)))
  },
  /* row   1 */
  {
    (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[0])),
    (MR_Word) (((MR_Box) ((MR_Integer) 1)))
  },
  /* row   2 */
  {
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Word) (((MR_Box) ((MR_Integer) 1)))
  },
  /* row   3 */
  {
    (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[1])),
    (MR_Word) (((MR_Box) ((MR_Integer) 0)))
  },
  /* row   4 */
  {
    (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[1])),
    (MR_Word) (((MR_Box) ((MR_Integer) 0)))
  },
  /* row   5 */
  {
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Word) (((MR_Box) ((MR_Integer) 0)))
  },
  /* row   6 */
  {
    (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[1])),
    (MR_Word) (((MR_Box) ((MR_Integer) 1)))
  },
  /* row   7 */
  {
    (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[1])),
    (MR_Word) (((MR_Box) ((MR_Integer) 0)))
  },
  /* row   8 */
  {
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Word) (((MR_Box) ((MR_Integer) 0)))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
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

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_int3_role_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int3_0) };

static const MR_DuArgLocn parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_int3_role_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_1 = {
  (MR_String) "int3_as_direct_int",
  INT16_C(1),
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

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__888__1_2_p_0(
  MR_Word HeadVar__1_163,
  MR_Word * HeadVar__2_164)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_163, HeadVar__2_164);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__899__1_2_p_0(
  MR_Word HeadVar__1_170,
  MR_Word * HeadVar__2_171)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_170, HeadVar__2_171);
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Integer Var_12 = (MR_Integer) (Var_11);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
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
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
      succeeded = (ArgX1_5 == ArgY1_6);
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
  MR_Word Pattern0_9 = ((MR_Word) ((MR_hl_field(0, CatchExpr_6, (MR_Integer) 0))));
  MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(0, CatchExpr_6, (MR_Integer) 1))));
  MR_Word Pattern_11;
  MR_Word STATE_VARIABLE_UsedModuleNames_16_16;
  MR_Word STATE_VARIABLE_FoundUnqual_17_17;
  MR_Word SymName_20;
  MR_Word ArgTerms_21;

  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Pattern0_9, &Pattern_11);
  succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Pattern_11, &SymName_20, &ArgTerms_21);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_UsedModuleNames_18_25;
    MR_Word STATE_VARIABLE_FoundUnqual_19_26;

    if (((MR_tag((MR_Word) SymName_20)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(1, SymName_20, (MR_Integer) 0))));

      mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), STATE_VARIABLE_UsedModuleNames_0_12, &STATE_VARIABLE_UsedModuleNames_18_25);
      STATE_VARIABLE_FoundUnqual_19_26 = STATE_VARIABLE_FoundUnqual_0_14;
    }
    else
    {
      STATE_VARIABLE_FoundUnqual_19_26 = (MR_Integer) 1;
      STATE_VARIABLE_UsedModuleNames_18_25 = STATE_VARIABLE_UsedModuleNames_0_12;
    }
    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_21, STATE_VARIABLE_UsedModuleNames_18_25, &STATE_VARIABLE_UsedModuleNames_16_16, STATE_VARIABLE_FoundUnqual_19_26, &STATE_VARIABLE_FoundUnqual_17_17);
  }
  else
  {
    STATE_VARIABLE_FoundUnqual_17_17 = STATE_VARIABLE_FoundUnqual_0_14;
    STATE_VARIABLE_UsedModuleNames_16_16 = STATE_VARIABLE_UsedModuleNames_0_12;
  }
  parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_10, STATE_VARIABLE_UsedModuleNames_16_16, STATE_VARIABLE_UsedModuleNames_13, STATE_VARIABLE_FoundUnqual_17_17, STATE_VARIABLE_FoundUnqual_15);
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

  parse_tree__module_qual__mq_info_set_module_used_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(
  MR_Word InInt_5,
  MR_Word ItemPromise_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(0, ItemPromise_6, (MR_Integer) 1))));
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
          MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[4]));
          MR_hl_field(0, Var_21, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0_1));
          MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_21, 3) = ((MR_Box) (InInt_5));
        }
        mercury__set_tree234__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_21, UsedModuleNames_14, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv1_STATE_VARIABLE_Info_18);
        *STATE_VARIABLE_Info_18 = ((MR_Word) (conv1_STATE_VARIABLE_Info_18));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnusedModules_16;

        mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), &UnusedModules_16);
        parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedModules_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
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

  parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__888__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_164);
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

  parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__899__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_171);
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
          MR_Word LHS0_90 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
          MR_Word RHS0_91 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 2))));
          MR_Word LHS_92;
          MR_Word RHS_93;
          MR_Word STATE_VARIABLE_UsedModuleNames_144_144;
          MR_Word STATE_VARIABLE_FoundUnqual_145_145;

          mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LHS0_90, &LHS_92);
          mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), RHS0_91, &RHS_93);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(LHS_92, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_144_144, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_145_145);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(RHS_93, STATE_VARIABLE_UsedModuleNames_144_144, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_145_145, STATE_VARIABLE_FoundUnqual_97);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_84 = ((MR_Word) ((MR_hl_field(1, Goal_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_UsedModuleNames_139_139;
          MR_Word STATE_VARIABLE_FoundUnqual_140_140;
          MR_Word ArgTerms0_152 = ((MR_Word) ((MR_hl_field(1, Goal_6, (MR_Integer) 2))));
          MR_Word ArgTerms_153;

          if (((MR_tag((MR_Word) SymName_84)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_86 = ((MR_Word) ((MR_hl_field(1, SymName_84, (MR_Integer) 0))));

            mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_86)), STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_139_139);
            STATE_VARIABLE_FoundUnqual_140_140 = STATE_VARIABLE_FoundUnqual_0_96;
          }
          else
          {
            STATE_VARIABLE_FoundUnqual_140_140 = (MR_Integer) 1;
            STATE_VARIABLE_UsedModuleNames_139_139 = STATE_VARIABLE_UsedModuleNames_0_94;
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[7]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[8]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[19]), ArgTerms0_152, &ArgTerms_153);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_153, STATE_VARIABLE_UsedModuleNames_139_139, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_140_140, STATE_VARIABLE_FoundUnqual_97);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_10 = ((MR_Word) ((MR_hl_field(2, Goal_6, (MR_Integer) 1))));
          MR_Word SubGoalsB_11 = ((MR_Word) ((MR_hl_field(2, Goal_6, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_UsedModuleNames_98_98;
          MR_Word STATE_VARIABLE_FoundUnqual_99_99;

          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_10, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_98_98, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_99_99);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(SubGoalsB_11, STATE_VARIABLE_UsedModuleNames_98_98, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_99_99, STATE_VARIABLE_FoundUnqual_97);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Goal_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedModuleNames_95 = STATE_VARIABLE_UsedModuleNames_0_94;
              *STATE_VARIABLE_FoundUnqual_97 = STATE_VARIABLE_FoundUnqual_0_96;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CondGoal_78 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_UsedModuleNames_130_130;
              MR_Word STATE_VARIABLE_FoundUnqual_131_131;
              MR_Word STATE_VARIABLE_UsedModuleNames_132_132;
              MR_Word STATE_VARIABLE_FoundUnqual_133_133;
              MR_Word ThenGoal_150 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 5))));
              MR_Word ElseGoal_151 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_96;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(CondGoal_78, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_130_130, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_131_131);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ThenGoal_150, STATE_VARIABLE_UsedModuleNames_130_130, &STATE_VARIABLE_UsedModuleNames_132_132, STATE_VARIABLE_FoundUnqual_131_131, &STATE_VARIABLE_FoundUnqual_133_133);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = ElseGoal_151;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_94 = STATE_VARIABLE_UsedModuleNames_132_132;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_96 = STATE_VARIABLE_FoundUnqual_133_133;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_94 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              STATE_VARIABLE_FoundUnqual_0_96 = next_value_of_STATE_VARIABLE_FoundUnqual_0_96;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoal1_17 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 2))));
              MR_Word SubGoal2_18 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
              MR_Word SubGoals_19 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_UsedModuleNames_106_106;
              MR_Word STATE_VARIABLE_FoundUnqual_107_107;
              MR_Word STATE_VARIABLE_UsedModuleNames_108_108;
              MR_Word STATE_VARIABLE_FoundUnqual_109_109;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoal1_17, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_106_106, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_107_107);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoal2_18, STATE_VARIABLE_UsedModuleNames_106_106, &STATE_VARIABLE_UsedModuleNames_108_108, STATE_VARIABLE_FoundUnqual_107_107, &STATE_VARIABLE_FoundUnqual_109_109);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(SubGoals_19, STATE_VARIABLE_UsedModuleNames_108_108, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_109_109, STATE_VARIABLE_FoundUnqual_97);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoal_182 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 2))));
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
              MR_Word SubGoalA_183 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 2))));
              MR_Word SubGoalsB_184 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_98_185;
              MR_Word STATE_VARIABLE_FoundUnqual_99_186;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_183, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_98_185, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_99_186);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(SubGoalsB_184, STATE_VARIABLE_UsedModuleNames_98_185, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_99_186, STATE_VARIABLE_FoundUnqual_97);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubGoal_191 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_191;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubGoal_190 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_190;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubGoal_189 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_189;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubGoal_188 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_188;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word SubGoal_187 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_187;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word SubGoal_193 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_193;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word SubGoal_192 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_192;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word SubGoal_194 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_194;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word SubGoal_23 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_23;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word SubGoal_195 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_195;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word MainGoal_73 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 5))));
              MR_Word OrElseGoals_74 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_UsedModuleNames_126_126;
              MR_Word STATE_VARIABLE_FoundUnqual_127_127;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(MainGoal_73, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_126_126, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_127_127);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(OrElseGoals_74, STATE_VARIABLE_UsedModuleNames_126_126, STATE_VARIABLE_UsedModuleNames_95, STATE_VARIABLE_FoundUnqual_127_127, STATE_VARIABLE_FoundUnqual_97);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ThenGoal_62 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 4))));
              MR_Word MaybeElseGoal_63 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 5))));
              MR_Word Catches_64 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_65 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 7))));
              MR_Word STATE_VARIABLE_UsedModuleNames_114_114;
              MR_Word STATE_VARIABLE_FoundUnqual_115_115;
              MR_Word STATE_VARIABLE_UsedModuleNames_116_116;
              MR_Word STATE_VARIABLE_FoundUnqual_117_117;
              MR_Word STATE_VARIABLE_UsedModuleNames_118_118;
              MR_Word STATE_VARIABLE_FoundUnqual_119_119;
              MR_Word STATE_VARIABLE_UsedModuleNames_121_121;
              MR_Word STATE_VARIABLE_FoundUnqual_122_122;
              MR_Word SubGoal_149 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
              MR_Box conv5_STATE_VARIABLE_UsedModuleNames_121_121;
              MR_Box conv4_STATE_VARIABLE_FoundUnqual_122_122;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoal_149, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_114_114, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_115_115);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ThenGoal_62, STATE_VARIABLE_UsedModuleNames_114_114, &STATE_VARIABLE_UsedModuleNames_116_116, STATE_VARIABLE_FoundUnqual_115_115, &STATE_VARIABLE_FoundUnqual_117_117);
              if ((MaybeElseGoal_63 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_UsedModuleNames_118_118 = STATE_VARIABLE_UsedModuleNames_116_116;
                STATE_VARIABLE_FoundUnqual_119_119 = STATE_VARIABLE_FoundUnqual_117_117;
              }
              else
              {
                MR_Word ElseGoal_66 = ((MR_Word) ((MR_hl_field(1, MaybeElseGoal_63, (MR_Integer) 0))));

                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ElseGoal_66, STATE_VARIABLE_UsedModuleNames_116_116, &STATE_VARIABLE_UsedModuleNames_118_118, STATE_VARIABLE_FoundUnqual_117_117, &STATE_VARIABLE_FoundUnqual_119_119);
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[21]), Catches_64, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_118_118)), &conv5_STATE_VARIABLE_UsedModuleNames_121_121, ((MR_Box) (STATE_VARIABLE_FoundUnqual_119_119)), &conv4_STATE_VARIABLE_FoundUnqual_122_122);
              STATE_VARIABLE_UsedModuleNames_121_121 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModuleNames_121_121));
              STATE_VARIABLE_FoundUnqual_122_122 = ((MR_Word) (conv4_STATE_VARIABLE_FoundUnqual_122_122));
              if ((MaybeCatchAny_65 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_UsedModuleNames_95 = STATE_VARIABLE_UsedModuleNames_121_121;
                *STATE_VARIABLE_FoundUnqual_97 = STATE_VARIABLE_FoundUnqual_122_122;
              }
              else
              {
                MR_Word CatchAnyGoal_68;
                MR_Word Var_123 = ((MR_Word) ((MR_hl_field(1, MaybeCatchAny_65, (MR_Integer) 0))));
                MR_Word next_value_of_Goal_6;
                MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
                MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_96;

                CatchAnyGoal_68 = ((MR_Word) ((MR_hl_field(0, Var_123, (MR_Integer) 1))));
                // direct tailcall eliminated
                ;
                next_value_of_Goal_6 = CatchAnyGoal_68;
                next_value_of_STATE_VARIABLE_UsedModuleNames_0_94 = STATE_VARIABLE_UsedModuleNames_121_121;
                next_value_of_STATE_VARIABLE_FoundUnqual_0_96 = STATE_VARIABLE_FoundUnqual_122_122;
                Goal_6 = next_value_of_Goal_6;
                STATE_VARIABLE_UsedModuleNames_0_94 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
                STATE_VARIABLE_FoundUnqual_0_96 = next_value_of_STATE_VARIABLE_FoundUnqual_0_96;
                continue;
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalB_178 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_102_179;
              MR_Word STATE_VARIABLE_FoundUnqual_103_180;
              MR_Word SubGoalA_181 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_96;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_181, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_102_179, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_103_180);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_178;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_94 = STATE_VARIABLE_UsedModuleNames_102_179;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_96 = STATE_VARIABLE_FoundUnqual_103_180;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_94 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              STATE_VARIABLE_FoundUnqual_0_96 = next_value_of_STATE_VARIABLE_FoundUnqual_0_96;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalB_14 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_102_102;
              MR_Word STATE_VARIABLE_FoundUnqual_103_103;
              MR_Word SubGoalA_148 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_96;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_148, STATE_VARIABLE_UsedModuleNames_0_94, &STATE_VARIABLE_UsedModuleNames_102_102, STATE_VARIABLE_FoundUnqual_0_96, &STATE_VARIABLE_FoundUnqual_103_103);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_14;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_94 = STATE_VARIABLE_UsedModuleNames_102_102;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_96 = STATE_VARIABLE_FoundUnqual_103_103;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_94 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_94;
              STATE_VARIABLE_FoundUnqual_0_96 = next_value_of_STATE_VARIABLE_FoundUnqual_0_96;
              continue;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ArgTerms0_81 = ((MR_Word) ((MR_hl_field(3, Goal_6, (MR_Integer) 3))));
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
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UsedModuleNames_20_20;
      MR_Word STATE_VARIABLE_FoundUnqual_21_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_4;

      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_12, STATE_VARIABLE_UsedModuleNames_0_2, &STATE_VARIABLE_UsedModuleNames_20_20, STATE_VARIABLE_FoundUnqual_0_4, &STATE_VARIABLE_FoundUnqual_21_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_13;
      next_value_of_STATE_VARIABLE_UsedModuleNames_0_2 = STATE_VARIABLE_UsedModuleNames_20_20;
      next_value_of_STATE_VARIABLE_FoundUnqual_0_4 = STATE_VARIABLE_FoundUnqual_21_21;
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
    MR_Word STATE_VARIABLE_UsedModuleNames_18_18;
    MR_Word STATE_VARIABLE_FoundUnqual_19_19;

    if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
    {
      MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(1, SymName_9, (MR_Integer) 0))));

      mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_UsedModuleNames_0_14, &STATE_VARIABLE_UsedModuleNames_18_18);
      STATE_VARIABLE_FoundUnqual_19_19 = STATE_VARIABLE_FoundUnqual_0_16;
    }
    else
    {
      STATE_VARIABLE_FoundUnqual_19_19 = (MR_Integer) 1;
      STATE_VARIABLE_UsedModuleNames_18_18 = STATE_VARIABLE_UsedModuleNames_0_14;
    }
    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_10, STATE_VARIABLE_UsedModuleNames_18_18, STATE_VARIABLE_UsedModuleNames_15, STATE_VARIABLE_FoundUnqual_19_19, STATE_VARIABLE_FoundUnqual_17);
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
      MR_Word Term_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UsedModuleNames_20_20;
      MR_Word STATE_VARIABLE_FoundUnqual_21_21;
      MR_Word SymName_22;
      MR_Word ArgTerms_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_4;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_12, &SymName_22, &ArgTerms_23);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_UsedModuleNames_18_27;
        MR_Word STATE_VARIABLE_FoundUnqual_19_28;

        if (((MR_tag((MR_Word) SymName_22)) == (MR_Integer) 1))
        {
          MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(1, SymName_22, (MR_Integer) 0))));

          mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_24)), STATE_VARIABLE_UsedModuleNames_0_2, &STATE_VARIABLE_UsedModuleNames_18_27);
          STATE_VARIABLE_FoundUnqual_19_28 = STATE_VARIABLE_FoundUnqual_0_4;
        }
        else
        {
          STATE_VARIABLE_FoundUnqual_19_28 = (MR_Integer) 1;
          STATE_VARIABLE_UsedModuleNames_18_27 = STATE_VARIABLE_UsedModuleNames_0_2;
        }
        parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_23, STATE_VARIABLE_UsedModuleNames_18_27, &STATE_VARIABLE_UsedModuleNames_20_20, STATE_VARIABLE_FoundUnqual_19_28, &STATE_VARIABLE_FoundUnqual_21_21);
      }
      else
      {
        STATE_VARIABLE_FoundUnqual_21_21 = STATE_VARIABLE_FoundUnqual_0_4;
        STATE_VARIABLE_UsedModuleNames_20_20 = STATE_VARIABLE_UsedModuleNames_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Terms_13;
      next_value_of_STATE_VARIABLE_UsedModuleNames_0_2 = STATE_VARIABLE_UsedModuleNames_20_20;
      next_value_of_STATE_VARIABLE_FoundUnqual_0_4 = STATE_VARIABLE_FoundUnqual_21_21;
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
  MR_Word InstanceModule_6 = ((MR_Word) ((MR_hl_field(0, ItemInstance_4, (MR_Integer) 6))));
  MR_Word ImportedInstanceModules0_7;
  MR_Word ImportedInstanceModules_8;

  parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(STATE_VARIABLE_Info_0_9, &ImportedInstanceModules0_7);
  mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (InstanceModule_6)), ImportedInstanceModules0_7, &ImportedInstanceModules_8);
  parse_tree__module_qual__mq_info_set_imported_instance_modules_3_p_0(ImportedInstanceModules_8, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(
  MR_Word Permissions_5,
  MR_Word ItemTypeClass_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 0))));
  MR_Word Params_9 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_6, (MR_Integer) 1))));
  MR_Integer Arity_16;
  MR_Word Classes0_17;
  MR_Word Classes_18;
  MR_Word Var_21;

  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[5]), Params_9, &Arity_16);
  parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_19, &Classes0_17);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (SymName_8));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (Arity_16));
  }
  parse_tree__module_qual__id_set__id_set_insert_4_p_0(Permissions_5, Var_21, Classes0_17, &Classes_18);
  parse_tree__module_qual__mq_info_set_classes_3_p_0(Classes_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_mode_defn_info_to_mq_id_1_f_0(
  MR_Word ItemModeDefn_3)
{
  MR_Word MQId_4;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_3, (MR_Integer) 0))));
  MR_Word Params_6 = ((MR_Word) ((MR_hl_field(0, ItemModeDefn_3, (MR_Integer) 1))));
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
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_3, (MR_Integer) 0))));
  MR_Word Params_6 = ((MR_Word) ((MR_hl_field(0, ItemInstDefn_3, (MR_Integer) 1))));
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
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_3, (MR_Integer) 0))));
  MR_Word Params_6 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_3, (MR_Integer) 1))));
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
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_Modules_0_13,
  MR_Word * STATE_VARIABLE_Modules_14)
{
  MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(0, InclInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);

  switch (Section_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_17, 0) = ((MR_Box) (ModuleName_7));
          MR_hl_field(0, Var_17, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, Var_17, STATE_VARIABLE_Modules_0_13, STATE_VARIABLE_Modules_14);
      }
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

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__mode_ctor_to_mq_id_1_f_0(
  MR_Word ModeCtor_3)
{
  MR_Word Id_4;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, ModeCtor_3, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_3, (MR_Integer) 1))));

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
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, InstCtor_3, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, InstCtor_3, (MR_Integer) 1))));

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
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 1))));

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
  MR_Word StdModeDefn_10 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_8, (MR_Integer) 0))));
  MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(0, StdModeDefn_10, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (Status_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word Var_16;
        MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(0, ModeCtor_7, (MR_Integer) 0))));
        MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_7, (MR_Integer) 1))));

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
  MR_Word StdModeDefn_12 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_10, (MR_Integer) 0))));
  MR_Word Status_14 = ((MR_Unsigned) ((MR_hl_field(0, StdModeDefn_12, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (Status_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word Var_18;
        MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(0, ModeCtor_9, (MR_Integer) 0))));
        MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_9, (MR_Integer) 1))));

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
        MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, ModeCtor_9, (MR_Integer) 0))));
        MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(0, ModeCtor_9, (MR_Integer) 1))));

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
  MR_Word StdInstDefn_10 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_8, (MR_Integer) 0))));
  MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(0, StdInstDefn_10, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (Status_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word Var_16;
        MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(0, InstCtor_7, (MR_Integer) 0))));
        MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(0, InstCtor_7, (MR_Integer) 1))));

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
  MR_Word StdInstDefn_12 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_10, (MR_Integer) 0))));
  MR_Word Status_14 = ((MR_Unsigned) ((MR_hl_field(0, StdInstDefn_12, (MR_Integer) 0))) & (MR_Integer) 3);

  switch (Status_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        MR_Word Var_18;
        MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(0, InstCtor_9, (MR_Integer) 0))));
        MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(0, InstCtor_9, (MR_Integer) 1))));

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
        MR_Word SymName_23 = ((MR_Word) ((MR_hl_field(0, InstCtor_9, (MR_Integer) 0))));
        MR_Integer Arity_24 = ((MR_Integer) ((MR_hl_field(0, InstCtor_9, (MR_Integer) 1))));

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
  MR_Word SymName_43 = ((MR_Word) ((MR_hl_field(0, TypeCtor_7, (MR_Integer) 0))));
  MR_Integer Arity_44 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_7, (MR_Integer) 1))));

  {
    TypeId_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeId_10, 0) = ((MR_Box) (SymName_43));
    MR_hl_field(0, TypeId_10, 1) = ((MR_Box) (Arity_44));
  }
  if (((MR_tag((MR_Word) CheckedDefn_8)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn_11 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_8, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SolverDefn_11)) == (MR_Integer) 0))
    {
      MR_Word AbsStatus_13 = ((MR_Unsigned) ((MR_hl_field(0, SolverDefn_11, (MR_Integer) 0))) & (MR_Integer) 1);

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
      MR_Word MaybeAbsDefn_15 = ((MR_Word) ((MR_hl_field(1, SolverDefn_11, (MR_Integer) 0))));

      if ((MaybeAbsDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Types_34 = STATE_VARIABLE_Types_0_33;
      else
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, TypeId_10, STATE_VARIABLE_Types_0_33, STATE_VARIABLE_Types_34);
    }
  }
  else
  {
    MR_Word StdDefn_18 = ((MR_Word) ((MR_hl_field(1, CheckedDefn_8, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) StdDefn_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_20 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);

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
          MR_Word SubStatus_22 = ((MR_Unsigned) ((MR_hl_field(1, StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);

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
          MR_Word DuStatus_24 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn_18, (MR_Integer) 0))) & (MR_Integer) 3);

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
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DuStatus_42 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn_18, (MR_Integer) 1))) & (MR_Integer) 3);

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
              MR_Word AbsStatus_41 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn_18, (MR_Integer) 1))) & (MR_Integer) 3);

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
  MR_Word SymName_51 = ((MR_Word) ((MR_hl_field(0, TypeCtor_9, (MR_Integer) 0))));
  MR_Integer Arity_52 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_9, (MR_Integer) 1))));

  {
    TypeId_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeId_12, 0) = ((MR_Box) (SymName_51));
    MR_hl_field(0, TypeId_12, 1) = ((MR_Box) (Arity_52));
  }
  if (((MR_tag((MR_Word) CheckedDefn_10)) == (MR_Integer) 0))
  {
    MR_Word SolverDefn_13 = ((MR_Word) ((MR_hl_field(0, CheckedDefn_10, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) SolverDefn_13)) == (MR_Integer) 0))
    {
      MR_Word AbsStatus_15 = ((MR_Unsigned) ((MR_hl_field(0, SolverDefn_13, (MR_Integer) 0))) & (MR_Integer) 1);

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
      MR_Word MaybeAbsDefn_17 = ((MR_Word) ((MR_hl_field(1, SolverDefn_13, (MR_Integer) 0))));

      if ((MaybeAbsDefn_17 == (MR_Word) ((MR_Unsigned) 0U)))
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(ImpPermissions_8, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
      else
        parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_7, TypeId_12, STATE_VARIABLE_Types_0_35, STATE_VARIABLE_Types_36);
    }
  }
  else
  {
    MR_Word StdDefn_20 = ((MR_Word) ((MR_hl_field(1, CheckedDefn_10, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) StdDefn_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word EqvStatus_22 = ((MR_Unsigned) ((MR_hl_field(0, StdDefn_20, (MR_Integer) 0))) & (MR_Integer) 3);

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
          MR_Word SubStatus_24 = ((MR_Unsigned) ((MR_hl_field(1, StdDefn_20, (MR_Integer) 0))) & (MR_Integer) 3);

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
          MR_Word DuStatus_26 = ((MR_Unsigned) ((MR_hl_field(2, StdDefn_20, (MR_Integer) 0))) & (MR_Integer) 3);

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
        switch (((MR_Integer) ((MR_hl_field(3, StdDefn_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DuStatus_50 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn_20, (MR_Integer) 1))) & (MR_Integer) 3);

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
              MR_Word AbsStatus_49 = ((MR_Unsigned) ((MR_hl_field(3, StdDefn_20, (MR_Integer) 1))) & (MR_Integer) 3);

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
  MR_Word STATE_VARIABLE_ImportedModules_0_19,
  MR_Word * STATE_VARIABLE_ImportedModules_20,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_21,
  MR_Word * STATE_VARIABLE_UnusedIntModules_22)
{
  MR_bool succeeded;
  MR_Word IntContext_14;
  MR_Word Section_13;

  mercury__set_tree234__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_7)), STATE_VARIABLE_ImportedModules_0_19, STATE_VARIABLE_ImportedModules_20);
  if (((MR_tag((MR_Word) MaybeImplicit_8)) == (MR_Integer) 0))
  {
    Section_13 = ((MR_Word) ((MR_hl_field(0, MaybeImplicit_8, (MR_Integer) 0))));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word MaybeSection_12 = ((MR_Word) ((MR_hl_field(1, MaybeImplicit_8, (MR_Integer) 1))));

    succeeded = (MaybeSection_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      Section_13 = ((MR_Word) ((MR_hl_field(1, MaybeSection_12, (MR_Integer) 0))));
  }
  if (succeeded)
    switch (MR_tag((MR_Word) Section_13)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          IntContext_14 = ((MR_Word) ((MR_hl_field(0, Section_13, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          IntContext_14 = ((MR_Word) ((MR_hl_field(1, Section_13, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Section_13, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              IntContext_14 = ((MR_Word) ((MR_hl_field(3, Section_13, (MR_Integer) 1))));
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
  if (succeeded)
  {
    MR_Word IntContexts_16;
    MR_Word STATE_VARIABLE_UnusedIntModules_25_25;

    {
      IntContexts_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IntContexts_16, 0) = ((MR_Box) (IntContext_14));
      MR_hl_field(0, IntContexts_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (IntContexts_16)), STATE_VARIABLE_UnusedIntModules_0_21, &STATE_VARIABLE_UnusedIntModules_25_25);
    if (succeeded)
      *STATE_VARIABLE_UnusedIntModules_22 = STATE_VARIABLE_UnusedIntModules_25_25;
    else
    {
      MR_Word OldContexts_17;
      MR_Word NewContexts_18;
      MR_Box conv0_OldContexts_17;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), STATE_VARIABLE_UnusedIntModules_0_21, ((MR_Box) (ModuleName_7)), &conv0_OldContexts_17);
      OldContexts_17 = ((MR_Word) (conv0_OldContexts_17));
      NewContexts_18 = mercury__one_or_more__f_43_43_2_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), OldContexts_17, IntContexts_16);
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), ((MR_Box) (ModuleName_7)), ((MR_Box) (NewContexts_18)), STATE_VARIABLE_UnusedIntModules_0_21, STATE_VARIABLE_UnusedIntModules_22);
    }
  }
  else
    *STATE_VARIABLE_UnusedIntModules_22 = STATE_VARIABLE_UnusedIntModules_0_21;
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int3_spec_3_p_0(
  MR_Word DirectInt3Spec_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word ParseTreeInt3_6 = ((MR_Word) ((MR_hl_field(0, DirectInt3Spec_4, (MR_Integer) 0))));
  MR_Word ReadWhy3_7 = ((MR_Unsigned) ((MR_hl_field(0, DirectInt3Spec_4, (MR_Integer) 1))) & (MR_Integer) 15);
  MR_Word Role_8;

  {
    Role_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Role_8, 0) = (MR_Box) ((MR_Unsigned) (ReadWhy3_7));
  }
  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0(Role_8, ParseTreeInt3_6, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_Info_20);
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

  parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__4_4);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_incl_context_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Modules_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_10));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0(
  MR_Word Role_5,
  MR_Word ParseTreeInt3_6,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38)
{
  MR_Word PermInInt_10;
  MR_Word PermInImp_11;
  MR_Word Permissions_13;
  MR_Word IntInclMap_16;
  MR_Word IntImportMap_17;
  MR_Word IntTypeDefnMap_18;
  MR_Word IntInstDefnMap_19;
  MR_Word IntModeDefnMap_20;
  MR_Word IntTypeClasses_21;
  MR_Word IntInstances_22;
  MR_Word Modules0_24;
  MR_Word Modules_25;
  MR_Word ImportedModules0_26;
  MR_Word ImportedModules_27;
  MR_Word Types0_28;
  MR_Word TypeIds_29;
  MR_Word Types_30;
  MR_Word Insts0_31;
  MR_Word InstIds_32;
  MR_Word Insts_33;
  MR_Word Modes0_34;
  MR_Word ModeIds_35;
  MR_Word Modes_36;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_Info_61_61;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_Info_64_64;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_Info_68_68;
  MR_Word Var_70;
  MR_Word STATE_VARIABLE_Info_72_72;
  MR_Word Var_74;
  MR_Word STATE_VARIABLE_Info_76_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word STATE_VARIABLE_Info_79_79;
  MR_Word Var_81;
  MR_Box conv1_Modules_25;
  MR_Box conv3_ImportedModules_27;
  MR_Box conv6_Types_30;
  MR_Box conv8_Insts_33;
  MR_Box conv10_Modes_36;
  MR_Box conv12_STATE_VARIABLE_Info_79_79;
  MR_Box conv14_STATE_VARIABLE_Info_38;

  if ((Role_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    PermInInt_10 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]));
    PermInImp_11 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
  }
  else
  {
    MR_Word ReadWhy3_12 = ((MR_Unsigned) ((MR_hl_field(1, Role_5, (MR_Integer) 0))) & (MR_Integer) 15);

    PermInInt_10 = ((&parse_tree__module_qual__collect_mq_info_vector_common_10[0 + ReadWhy3_12]))->parse_tree__module_qual__collect_mq_info__vector_common_type_10_0__vct_10_f_0;
    PermInImp_11 = ((&parse_tree__module_qual__collect_mq_info_vector_common_10[0 + ReadWhy3_12]))->parse_tree__module_qual__collect_mq_info__vector_common_type_10_0__vct_10_f_1;
  }
  {
    Permissions_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Permissions_13, 0) = ((MR_Box) (PermInInt_10));
    MR_hl_field(0, Permissions_13, 1) = ((MR_Box) (PermInImp_11));
  }
  IntInclMap_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, (MR_Integer) 2))));
  IntImportMap_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, (MR_Integer) 3))));
  IntTypeDefnMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, (MR_Integer) 4))));
  IntInstDefnMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, (MR_Integer) 5))));
  IntModeDefnMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, (MR_Integer) 6))));
  IntTypeClasses_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, (MR_Integer) 7))));
  IntInstances_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt3_6, (MR_Integer) 8))));
  parse_tree__module_qual__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_37, &Modules0_24);
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[3]));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_1));
    MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_59, 3) = ((MR_Box) (Permissions_13));
  }
  Var_60 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_include_module_info_0), IntInclMap_16);
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_59, Var_60, ((MR_Box) (Modules0_24)), &conv1_Modules_25);
  Modules_25 = ((MR_Word) (conv1_Modules_25));
  parse_tree__module_qual__mq_info_set_modules_3_p_0(Modules_25, STATE_VARIABLE_Info_0_37, &STATE_VARIABLE_Info_61_61);
  parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_61_61, &ImportedModules0_26);
  Var_63 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_section_import_0), IntImportMap_17);
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[14]), Var_63, ((MR_Box) (ImportedModules0_26)), &conv3_ImportedModules_27);
  ImportedModules_27 = ((MR_Word) (conv3_ImportedModules_27));
  parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(ImportedModules_27, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_64_64);
  parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_64_64, &Types0_28);
  Var_66 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), IntTypeDefnMap_18);
  TypeIds_29 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[15]), Var_66);
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_4));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (Permissions_13));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_67, TypeIds_29, ((MR_Box) (Types0_28)), &conv6_Types_30);
  Types_30 = ((MR_Word) (conv6_Types_30));
  parse_tree__module_qual__mq_info_set_types_3_p_0(Types_30, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_68_68);
  parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_68_68, &Insts0_31);
  Var_70 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), IntInstDefnMap_19);
  InstIds_32 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[16]), Var_70);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_67, InstIds_32, ((MR_Box) (Insts0_31)), &conv8_Insts_33);
  Insts_33 = ((MR_Word) (conv8_Insts_33));
  parse_tree__module_qual__mq_info_set_insts_3_p_0(Insts_33, STATE_VARIABLE_Info_68_68, &STATE_VARIABLE_Info_72_72);
  parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_72_72, &Modes0_34);
  Var_74 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), IntModeDefnMap_20);
  ModeIds_35 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[17]), Var_74);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_67, ModeIds_35, ((MR_Box) (Modes0_34)), &conv10_Modes_36);
  Modes_36 = ((MR_Word) (conv10_Modes_36));
  parse_tree__module_qual__mq_info_set_modes_3_p_0(Modes_36, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_76_76);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_7));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (Permissions_13));
  }
  Var_78 = (MR_Word) (IntTypeClasses_21);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_77, Var_78, ((MR_Box) (STATE_VARIABLE_Info_76_76)), &conv12_STATE_VARIABLE_Info_79_79);
  STATE_VARIABLE_Info_79_79 = ((MR_Word) (conv12_STATE_VARIABLE_Info_79_79));
  Var_81 = (MR_Word) (IntInstances_22);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[18]), Var_81, ((MR_Box) (STATE_VARIABLE_Info_79_79)), &conv14_STATE_VARIABLE_Info_38);
  *STATE_VARIABLE_Info_38 = ((MR_Word) (conv14_STATE_VARIABLE_Info_38));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Info_18;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_6(
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
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Info_20;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Info_20);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Info_20));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Modes_15;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_mode_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Modes_15);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Modes_15));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Insts_15;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_inst_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Insts_15);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Insts_15));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Types_34;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_type_defn_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Types_34);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Types_34));
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Modules_14;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_14));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, (MR_Integer) 0))));
  MR_Word ReadWhy1_7 = ((MR_Unsigned) ((MR_hl_field(0, DirectInt1Spec_4, (MR_Integer) 1))) & (MR_Integer) 7);
  MR_Word IntPermInInt_10;
  MR_Word IntPermInImp_11;
  MR_Word IntPermissions_12;
  MR_Word InclMap_16;
  MR_Word TypeCheckedMap_20;
  MR_Word InstCheckedMap_21;
  MR_Word ModeCheckedMap_22;
  MR_Word IntTypeClasses_23;
  MR_Word IntInstances_24;
  MR_Word IntPromises_29;
  MR_Word Modules0_32;
  MR_Word Modules_33;
  MR_Word Types0_34;
  MR_Word Types_35;
  MR_Word Insts0_36;
  MR_Word Insts_37;
  MR_Word Modes0_38;
  MR_Word Modes_39;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_Info_65_45;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_Info_67_47;
  MR_Word Var_48;
  MR_Word STATE_VARIABLE_Info_69_49;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_Info_71_51;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_Info_73_53;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_Info_76_56;
  MR_Box conv1_Modules_33;
  MR_Box conv3_Types_35;
  MR_Box conv5_Insts_37;
  MR_Box conv7_Modes_39;
  MR_Box conv9_STATE_VARIABLE_Info_73_53;
  MR_Box conv11_STATE_VARIABLE_Info_76_56;
  MR_Box conv13_STATE_VARIABLE_Info_9;

  switch (ReadWhy1_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        IntPermInInt_10 = (MR_Word) ((MR_Unsigned) 0U);
        IntPermInImp_11 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
      }
      break;
    case (MR_Integer) 3:
      {
        IntPermInInt_10 = (MR_Word) ((MR_Unsigned) 0U);
        IntPermInImp_11 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
      }
      break;
    case (MR_Integer) 0:
      {
        IntPermInInt_10 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]));
        IntPermInImp_11 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
      }
      break;
    case (MR_Integer) 1:
      {
        IntPermInInt_10 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]));
        IntPermInImp_11 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
      }
      break;
    case (MR_Integer) 4:
      {
        IntPermInInt_10 = (MR_Word) (MR_mkword(1, &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]));
        IntPermInImp_11 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
      }
      break;
    case (MR_Integer) 5:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.collect_mq_info.collect_mq_info_in_parse_tree_int1\'/4", (MR_String) "rwi1_opt");
        return;
      }
      break;
    case (MR_Integer) 6:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.collect_mq_info.collect_mq_info_in_parse_tree_int1\'/4", (MR_String) "rwi1_opt");
        return;
      }
      break;
  }
  {
    IntPermissions_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntPermissions_12, 0) = ((MR_Box) (IntPermInInt_10));
    MR_hl_field(0, IntPermissions_12, 1) = ((MR_Box) (IntPermInImp_11));
  }
  InclMap_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 3))));
  TypeCheckedMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 7))));
  InstCheckedMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 8))));
  ModeCheckedMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 9))));
  IntTypeClasses_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 10))));
  IntInstances_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 11))));
  IntPromises_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 16))));
  parse_tree__module_qual__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_8, &Modules0_32);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (IntPermissions_12));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_44, InclMap_16, ((MR_Box) (Modules0_32)), &conv1_Modules_33);
  Modules_33 = ((MR_Word) (conv1_Modules_33));
  parse_tree__module_qual__mq_info_set_modules_3_p_0(Modules_33, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_65_45);
  parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_65_45, &Types0_34);
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[1]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_2));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (IntPermissions_12));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_46, TypeCheckedMap_20, ((MR_Box) (Types0_34)), &conv3_Types_35);
  Types_35 = ((MR_Word) (conv3_Types_35));
  parse_tree__module_qual__mq_info_set_types_3_p_0(Types_35, STATE_VARIABLE_Info_65_45, &STATE_VARIABLE_Info_67_47);
  parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_67_47, &Insts0_36);
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[2]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_3));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (IntPermissions_12));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_48, InstCheckedMap_21, ((MR_Box) (Insts0_36)), &conv5_Insts_37);
  Insts_37 = ((MR_Word) (conv5_Insts_37));
  parse_tree__module_qual__mq_info_set_insts_3_p_0(Insts_37, STATE_VARIABLE_Info_67_47, &STATE_VARIABLE_Info_69_49);
  parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_69_49, &Modes0_38);
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[3]));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_4));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (IntPermissions_12));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_50, ModeCheckedMap_22, ((MR_Box) (Modes0_38)), &conv7_Modes_39);
  Modes_39 = ((MR_Word) (conv7_Modes_39));
  parse_tree__module_qual__mq_info_set_modes_3_p_0(Modes_39, STATE_VARIABLE_Info_69_49, &STATE_VARIABLE_Info_71_51);
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int1_spec_3_p_0_5));
    MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_52, 3) = ((MR_Box) (IntPermissions_12));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_52, IntTypeClasses_23, ((MR_Box) (STATE_VARIABLE_Info_71_51)), &conv9_STATE_VARIABLE_Info_73_53);
  STATE_VARIABLE_Info_73_53 = ((MR_Word) (conv9_STATE_VARIABLE_Info_73_53));
  Var_55 = (MR_Word) (IntInstances_24);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[13]), Var_55, ((MR_Box) (STATE_VARIABLE_Info_73_53)), &conv11_STATE_VARIABLE_Info_76_56);
  STATE_VARIABLE_Info_76_56 = ((MR_Word) (conv11_STATE_VARIABLE_Info_76_56));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[9]), IntPromises_29, ((MR_Box) (STATE_VARIABLE_Info_76_56)), &conv13_STATE_VARIABLE_Info_9);
  *STATE_VARIABLE_Info_9 = ((MR_Word) (conv13_STATE_VARIABLE_Info_9));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_4, (MR_Integer) 0))));
  MR_Word ReadWhy0_7 = ((MR_Unsigned) ((MR_hl_field(0, AncestorIntSpec_4, (MR_Integer) 1))) & (MR_Integer) 1);

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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_Info_18);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_Info_18);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Info_20);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Info_20);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_Modes_17);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Insts_17);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int_imp_type_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Types_36);
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
  MR_Word conv0_STATE_VARIABLE_Modules_14;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_14));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0(
  MR_Word ReadWhy0_5,
  MR_Word ParseTreeInt0_6,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  MR_Word IntPermissions_14;
  MR_Word ImpPermissions_15;
  MR_Word InclMap_19;
  MR_Word ImportUseMap_20;
  MR_Word TypeCtorCheckedMap_23;
  MR_Word InstCtorCheckedMap_24;
  MR_Word ModeCtorCheckedMap_25;
  MR_Word IntTypeClasses_26;
  MR_Word IntInstances_27;
  MR_Word IntPromises_32;
  MR_Word ImpTypeClasses_33;
  MR_Word ImpInstances_34;
  MR_Word ImpPromises_39;
  MR_Word Modules0_40;
  MR_Word Modules_41;
  MR_Word ImportedModules0_42;
  MR_Word ImportedModules_43;
  MR_Word Types0_44;
  MR_Word Types_45;
  MR_Word Insts0_46;
  MR_Word Insts_47;
  MR_Word Modes0_48;
  MR_Word Modes_49;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_Info_69_69;
  MR_Word Var_71;
  MR_Word STATE_VARIABLE_Info_72_72;
  MR_Word Var_73;
  MR_Word STATE_VARIABLE_Info_74_74;
  MR_Word Var_75;
  MR_Word STATE_VARIABLE_Info_76_76;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_Info_78_78;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_Info_80_80;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_Info_82_82;
  MR_Word Var_84;
  MR_Word STATE_VARIABLE_Info_85_85;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_Info_88_88;
  MR_Word STATE_VARIABLE_Info_90_90;
  MR_Box conv1_Modules_41;
  MR_Box conv3_ImportedModules_43;
  MR_Box conv5_Types_45;
  MR_Box conv7_Insts_47;
  MR_Box conv9_Modes_49;
  MR_Box conv11_STATE_VARIABLE_Info_80_80;
  MR_Box conv13_STATE_VARIABLE_Info_82_82;
  MR_Box conv15_STATE_VARIABLE_Info_85_85;
  MR_Box conv17_STATE_VARIABLE_Info_88_88;
  MR_Box conv19_STATE_VARIABLE_Info_90_90;
  MR_Box conv21_STATE_VARIABLE_Info_51;

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
        IntPermissions_14 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9]);
        ImpPermissions_15 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[9]);
      }
      break;
  }
  InclMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 3))));
  ImportUseMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 4))));
  TypeCtorCheckedMap_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 7))));
  InstCtorCheckedMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 8))));
  ModeCtorCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 9))));
  IntTypeClasses_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 10))));
  IntInstances_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 11))));
  IntPromises_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 16))));
  ImpTypeClasses_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 17))));
  ImpInstances_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 18))));
  ImpPromises_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 23))));
  parse_tree__module_qual__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_50, &Modules0_40);
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0]));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_1));
    MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_68, 3) = ((MR_Box) (IntPermissions_14));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_68, InclMap_19, ((MR_Box) (Modules0_40)), &conv1_Modules_41);
  Modules_41 = ((MR_Word) (conv1_Modules_41));
  parse_tree__module_qual__mq_info_set_modules_3_p_0(Modules_41, STATE_VARIABLE_Info_0_50, &STATE_VARIABLE_Info_69_69);
  parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_69_69, &ImportedModules0_42);
  Var_71 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_section_import_and_or_use_0), ImportUseMap_20);
  mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[10]), Var_71, ((MR_Box) (ImportedModules0_42)), &conv3_ImportedModules_43);
  ImportedModules_43 = ((MR_Word) (conv3_ImportedModules_43));
  parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(ImportedModules_43, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_72_72);
  parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_72_72, &Types0_44);
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[1]));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_3));
    MR_hl_field(0, Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_73, 3) = ((MR_Box) (IntPermissions_14));
    MR_hl_field(0, Var_73, 4) = ((MR_Box) (ImpPermissions_15));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_73, TypeCtorCheckedMap_23, ((MR_Box) (Types0_44)), &conv5_Types_45);
  Types_45 = ((MR_Word) (conv5_Types_45));
  parse_tree__module_qual__mq_info_set_types_3_p_0(Types_45, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_74_74);
  parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_74_74, &Insts0_46);
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_75, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[2]));
    MR_hl_field(0, Var_75, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_4));
    MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_75, 3) = ((MR_Box) (IntPermissions_14));
    MR_hl_field(0, Var_75, 4) = ((MR_Box) (ImpPermissions_15));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_75, InstCtorCheckedMap_24, ((MR_Box) (Insts0_46)), &conv7_Insts_47);
  Insts_47 = ((MR_Word) (conv7_Insts_47));
  parse_tree__module_qual__mq_info_set_insts_3_p_0(Insts_47, STATE_VARIABLE_Info_74_74, &STATE_VARIABLE_Info_76_76);
  parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_76_76, &Modes0_48);
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[3]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_5));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (IntPermissions_14));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (ImpPermissions_15));
  }
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_77, ModeCtorCheckedMap_25, ((MR_Box) (Modes0_48)), &conv9_Modes_49);
  Modes_49 = ((MR_Word) (conv9_Modes_49));
  parse_tree__module_qual__mq_info_set_modes_3_p_0(Modes_49, STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_78_78);
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_6));
    MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_79, 3) = ((MR_Box) (IntPermissions_14));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_79, IntTypeClasses_26, ((MR_Box) (STATE_VARIABLE_Info_78_78)), &conv11_STATE_VARIABLE_Info_80_80);
  STATE_VARIABLE_Info_80_80 = ((MR_Word) (conv11_STATE_VARIABLE_Info_80_80));
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_7));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (ImpPermissions_15));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_81, ImpTypeClasses_33, ((MR_Box) (STATE_VARIABLE_Info_80_80)), &conv13_STATE_VARIABLE_Info_82_82);
  STATE_VARIABLE_Info_82_82 = ((MR_Word) (conv13_STATE_VARIABLE_Info_82_82));
  Var_84 = (MR_Word) (IntInstances_27);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[11]), Var_84, ((MR_Box) (STATE_VARIABLE_Info_82_82)), &conv15_STATE_VARIABLE_Info_85_85);
  STATE_VARIABLE_Info_85_85 = ((MR_Word) (conv15_STATE_VARIABLE_Info_85_85));
  Var_87 = (MR_Word) (ImpInstances_34);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[12]), Var_87, ((MR_Box) (STATE_VARIABLE_Info_85_85)), &conv17_STATE_VARIABLE_Info_88_88);
  STATE_VARIABLE_Info_88_88 = ((MR_Word) (conv17_STATE_VARIABLE_Info_88_88));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[7]), IntPromises_32, ((MR_Box) (STATE_VARIABLE_Info_88_88)), &conv19_STATE_VARIABLE_Info_90_90);
  STATE_VARIABLE_Info_90_90 = ((MR_Word) (conv19_STATE_VARIABLE_Info_90_90));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[8]), ImpPromises_39, ((MR_Box) (STATE_VARIABLE_Info_90_90)), &conv21_STATE_VARIABLE_Info_51);
  *STATE_VARIABLE_Info_51 = ((MR_Word) (conv21_STATE_VARIABLE_Info_51));
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv30_STATE_VARIABLE_Info_18);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv28_STATE_VARIABLE_Info_18);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_STATE_VARIABLE_Info_20);
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

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_Info_20);
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

  parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_HeadVar__4_4);
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

  parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_HeadVar__4_4);
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
  MR_Word conv3_STATE_VARIABLE_ImportedModules_20;
  MR_Word conv2_STATE_VARIABLE_UnusedIntModules_22;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_src_avail_map_entry_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ImportedModules_20, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_UnusedIntModules_22);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ImportedModules_20));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_UnusedIntModules_22));
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
  MR_Word conv0_STATE_VARIABLE_Modules_14;

  parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_14);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_14));
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word STATE_VARIABLE_Info_0_69,
  MR_Word * STATE_VARIABLE_Info_70)
{
  MR_Word InclMap_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 2))));
  MR_Word ImportUseMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 3))));
  MR_Word TypeCtorCheckedMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 8))));
  MR_Word InstCtorCheckedMap_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 9))));
  MR_Word ModeCtorCheckedMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 10))));
  MR_Word IntTypeClasses_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 13))));
  MR_Word IntInstances_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 14))));
  MR_Word IntPromises_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 19))));
  MR_Word ImpTypeClasses_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 21))));
  MR_Word ImpInstances_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 22))));
  MR_Word ImpPromises_43 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 32))));
  MR_Word Modules0_47;
  MR_Word Modules_48;
  MR_Word ImportedModules0_49;
  MR_Word UnusedIntModules0_50;
  MR_Word ImportedModules_51;
  MR_Word UnusedIntModules_52;
  MR_Word Types0_53;
  MR_Word IntTypeDefns_54;
  MR_Word ImpTypeDefns_55;
  MR_Word Types1_57;
  MR_Word Types_58;
  MR_Word Insts0_59;
  MR_Word IntInstDefns_60;
  MR_Word ImpInstDefns_61;
  MR_Word Insts1_62;
  MR_Word Insts_63;
  MR_Word Modes0_64;
  MR_Word IntModeDefns_65;
  MR_Word ImpModeDefns_66;
  MR_Word Modes1_67;
  MR_Word Modes_68;
  MR_Word STATE_VARIABLE_Info_74_74;
  MR_Word STATE_VARIABLE_Info_76_76;
  MR_Word STATE_VARIABLE_Info_77_77;
  MR_Word Var_79;
  MR_Word Var_82;
  MR_Word STATE_VARIABLE_Info_84_84;
  MR_Word Var_86;
  MR_Word Var_89;
  MR_Word STATE_VARIABLE_Info_91_91;
  MR_Word Var_93;
  MR_Word Var_96;
  MR_Word STATE_VARIABLE_Info_98_98;
  MR_Word STATE_VARIABLE_Info_100_100;
  MR_Word STATE_VARIABLE_Info_102_102;
  MR_Word STATE_VARIABLE_Info_104_104;
  MR_Word STATE_VARIABLE_Info_106_106;
  MR_Word STATE_VARIABLE_Info_108_108;
  MR_Box conv1_Modules_48;
  MR_Box conv5_ImportedModules_51;
  MR_Box conv4_UnusedIntModules_52;
  MR_Word _ImpForeignEnums_56;
  MR_Box conv8_Types1_57;
  MR_Box conv11_Types_58;
  MR_Box conv13_Insts1_62;
  MR_Box conv15_Insts_63;
  MR_Box conv17_Modes1_67;
  MR_Box conv19_Modes_68;
  MR_Box conv21_STATE_VARIABLE_Info_100_100;
  MR_Box conv23_STATE_VARIABLE_Info_102_102;
  MR_Box conv25_STATE_VARIABLE_Info_104_104;
  MR_Box conv27_STATE_VARIABLE_Info_106_106;
  MR_Box conv29_STATE_VARIABLE_Info_108_108;
  MR_Box conv31_STATE_VARIABLE_Info_70;

  parse_tree__module_qual__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_69, &Modules0_47);
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[0]), InclMap_13, ((MR_Box) (Modules0_47)), &conv1_Modules_48);
  Modules_48 = ((MR_Word) (conv1_Modules_48));
  parse_tree__module_qual__mq_info_set_modules_3_p_0(Modules_48, STATE_VARIABLE_Info_0_69, &STATE_VARIABLE_Info_74_74);
  parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_74_74, &ImportedModules0_49);
  parse_tree__module_qual__mq_info_get_as_yet_unused_interface_modules_2_p_0(STATE_VARIABLE_Info_74_74, &UnusedIntModules0_50);
  mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[1]), ImportUseMap_14, ((MR_Box) (ImportedModules0_49)), &conv5_ImportedModules_51, ((MR_Box) (UnusedIntModules0_50)), &conv4_UnusedIntModules_52);
  ImportedModules_51 = ((MR_Word) (conv5_ImportedModules_51));
  UnusedIntModules_52 = ((MR_Word) (conv4_UnusedIntModules_52));
  parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(ImportedModules_51, STATE_VARIABLE_Info_74_74, &STATE_VARIABLE_Info_76_76);
  parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedIntModules_52, STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_77_77);
  parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_77_77, &Types0_53);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_19, &IntTypeDefns_54, &ImpTypeDefns_55, &_ImpForeignEnums_56);
  Var_79 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[2]), IntTypeDefns_54);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[1]), Var_79, ((MR_Box) (Types0_53)), &conv8_Types1_57);
  Types1_57 = ((MR_Word) (conv8_Types1_57));
  Var_82 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[3]), ImpTypeDefns_55);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[2]), Var_82, ((MR_Box) (Types1_57)), &conv11_Types_58);
  Types_58 = ((MR_Word) (conv11_Types_58));
  parse_tree__module_qual__mq_info_set_types_3_p_0(Types_58, STATE_VARIABLE_Info_77_77, &STATE_VARIABLE_Info_84_84);
  parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_84_84, &Insts0_59);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_20, &IntInstDefns_60, &ImpInstDefns_61);
  Var_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[4]), IntInstDefns_60);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[1]), Var_86, ((MR_Box) (Insts0_59)), &conv13_Insts1_62);
  Insts1_62 = ((MR_Word) (conv13_Insts1_62));
  Var_89 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[3]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[5]), ImpInstDefns_61);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[2]), Var_89, ((MR_Box) (Insts1_62)), &conv15_Insts_63);
  Insts_63 = ((MR_Word) (conv15_Insts_63));
  parse_tree__module_qual__mq_info_set_insts_3_p_0(Insts_63, STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_91_91);
  parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_91_91, &Modes0_64);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_21, &IntModeDefns_65, &ImpModeDefns_66);
  Var_93 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[6]), IntModeDefns_65);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[1]), Var_93, ((MR_Box) (Modes0_64)), &conv17_Modes1_67);
  Modes1_67 = ((MR_Word) (conv17_Modes1_67));
  Var_96 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[4]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[7]), ImpModeDefns_66);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[2]), Var_96, ((MR_Box) (Modes1_67)), &conv19_Modes_68);
  Modes_68 = ((MR_Word) (conv19_Modes_68));
  parse_tree__module_qual__mq_info_set_modes_3_p_0(Modes_68, STATE_VARIABLE_Info_91_91, &STATE_VARIABLE_Info_98_98);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[3]), IntTypeClasses_24, ((MR_Box) (STATE_VARIABLE_Info_98_98)), &conv21_STATE_VARIABLE_Info_100_100);
  STATE_VARIABLE_Info_100_100 = ((MR_Word) (conv21_STATE_VARIABLE_Info_100_100));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[4]), ImpTypeClasses_32, ((MR_Box) (STATE_VARIABLE_Info_100_100)), &conv23_STATE_VARIABLE_Info_102_102);
  STATE_VARIABLE_Info_102_102 = ((MR_Word) (conv23_STATE_VARIABLE_Info_102_102));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[8]), IntInstances_25, ((MR_Box) (STATE_VARIABLE_Info_102_102)), &conv25_STATE_VARIABLE_Info_104_104);
  STATE_VARIABLE_Info_104_104 = ((MR_Word) (conv25_STATE_VARIABLE_Info_104_104));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[9]), ImpInstances_33, ((MR_Box) (STATE_VARIABLE_Info_104_104)), &conv27_STATE_VARIABLE_Info_106_106);
  STATE_VARIABLE_Info_106_106 = ((MR_Word) (conv27_STATE_VARIABLE_Info_106_106));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[5]), IntPromises_30, ((MR_Box) (STATE_VARIABLE_Info_106_106)), &conv29_STATE_VARIABLE_Info_108_108);
  STATE_VARIABLE_Info_108_108 = ((MR_Word) (conv29_STATE_VARIABLE_Info_108_108));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[6]), ImpPromises_43, ((MR_Box) (STATE_VARIABLE_Info_108_108)), &conv31_STATE_VARIABLE_Info_70);
  *STATE_VARIABLE_Info_70 = ((MR_Word) (conv31_STATE_VARIABLE_Info_70));
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

void mercury__parse_tree__module_qual__collect_mq_info__init(void)
{
}

void mercury__parse_tree__module_qual__collect_mq_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_int3_role_0);
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
