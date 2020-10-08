/*
** Automatically generated from `module_qual.collect_mq_info.m'
** by the Mercury compiler,
** version rotd-2020-10-08
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

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

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1;

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2[1];

static const MR_DuArgLocn parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_mq_section_0_2[1];

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2;

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3;

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0[3];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1[1];

static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0[2];

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0[4];

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0[4];

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__681__1_2_p_0(
  MR_Word HeadVar__1_149,
  MR_Word * HeadVar__2_150);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__692__1_2_p_0(
  MR_Word HeadVar__1_156,
  MR_Word * HeadVar__2_157);

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
  MR_Word STATE_VARIABLE_UsedModuleNames_0_90,
  MR_Word * STATE_VARIABLE_UsedModuleNames_91,
  MR_Word STATE_VARIABLE_FoundUnqual_0_92,
  MR_Word * STATE_VARIABLE_FoundUnqual_93);

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
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_Modules_0_13,
  MR_Word * STATE_VARIABLE_Modules_14);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(
  MR_Word SNA_3);

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__type_ctor_to_mq_id_1_f_0(
  MR_Word TypeCtor_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_src_avail_map_entry_7_p_0(
  MR_Word Section_8,
  MR_Word ModuleName_9,
  MR_Word Contexts_10,
  MR_Word STATE_VARIABLE_ImportedModules_0_15,
  MR_Word * STATE_VARIABLE_ImportedModules_16,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_17,
  MR_Word * STATE_VARIABLE_UnusedIntModules_18);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0(
  MR_Word ParseTreeInt1_5,
  MR_Word ReadWhy1_6,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

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
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0(
  MR_Word ParseTreeInt0_5,
  MR_Word ReadWhy0_6,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[9][2];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[33][3];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[2][8];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[12][4];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[1][10];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[4][7];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_8[6][5];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_9[2][6];


/* sealed */ struct parse_tree__module_qual__collect_mq_info__vector_common_type_10_0_s {
  const MR_Word parse_tree__module_qual__collect_mq_info__vector_common_type_10_0__vct_10_f_0;
  const MR_Word parse_tree__module_qual__collect_mq_info__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_10_0_s parse_tree__module_qual__collect_mq_info_vector_common_10[9];



static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 1))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (((MR_Box) ((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[33][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[3])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[3])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[3])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[3])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[4])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_9[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[5])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_8[5])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_3[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[2][8] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[12][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[7]))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[7]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[8]))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_12)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[7]))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_13)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[8]))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_16)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_17)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_18)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_19)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[2])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_8)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
  /* row 3 */
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

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_8[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_9[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};


static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_10_0_s parse_tree__module_qual__collect_mq_info_vector_common_10[9] = {
  /* row 0 */
  {
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0])),
    (MR_Word) (((MR_Box) ((MR_Integer) 1)))
  },
  /* row 1 */
  {
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0])),
    (MR_Word) (((MR_Box) ((MR_Integer) 1)))
  },
  /* row 2 */
  {
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Word) (((MR_Box) ((MR_Integer) 1)))
  },
  /* row 3 */
  {
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1])),
    (MR_Word) (((MR_Box) ((MR_Integer) 0)))
  },
  /* row 4 */
  {
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1])),
    (MR_Word) (((MR_Box) ((MR_Integer) 0)))
  },
  /* row 5 */
  {
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Word) (((MR_Box) ((MR_Integer) 0)))
  },
  /* row 6 */
  {
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1])),
    (MR_Word) (((MR_Box) ((MR_Integer) 1)))
  },
  /* row 7 */
  {
    (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1])),
    (MR_Word) (((MR_Box) ((MR_Integer) 0)))
  },
  /* row 8 */
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__one_or_more__pti_one_or_more_1__plain_term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
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

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_int3_role_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_read_why_int3_0)
};

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

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_0[1] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_0
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_1[1] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_int3_role_0_1
};

static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_int3_role_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_int3_role_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____int3_role_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "int3_role",
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_int3_role_0 },
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_int3_role_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_int3_role_0
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0 = {
  (MR_String) "mq_section_exported",
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

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1 = {
  (MR_String) "mq_section_local",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0)
};

static const MR_DuArgLocn parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_mq_section_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2 = {
  (MR_String) "mq_section_imported",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2,
  NULL,
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_locns_mq_section_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3 = {
  (MR_String) "mq_section_abstract_imported",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0[3] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1[1] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2
};

static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0[4] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1
};

static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "mq_section",
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0 },
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_section_mq_info_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "section_mq_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__681__1_2_p_0(
  MR_Word HeadVar__1_149,
  MR_Word * HeadVar__2_150)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_149, HeadVar__2_150);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__692__1_2_p_0(
  MR_Word HeadVar__1_156,
  MR_Word * HeadVar__2_157)
{
  mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_156, HeadVar__2_157);
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0(
  MR_Word TypeInfo_for_MS_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0(
  MR_Word TypeInfo_for_MS_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_Integer Var_16 = (MR_Integer) (Var_15);
                  MR_Integer Var_17 = (MR_Integer) (ArgY1_9);

                  succeeded = (Var_16 < Var_17);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_16 > Var_17);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
      MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
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
}

MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____int3_role_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(
  MR_Word CatchExpr_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_12,
  MR_Word * STATE_VARIABLE_UsedModuleNames_13,
  MR_Word STATE_VARIABLE_FoundUnqual_0_14,
  MR_Word * STATE_VARIABLE_FoundUnqual_15)
{
  {
    MR_bool succeeded;
    MR_Word Pattern0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchExpr_6, (MR_Integer) 0))));
    MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CatchExpr_6, (MR_Integer) 1))));
    MR_Word Pattern_11;
    MR_Word STATE_VARIABLE_UsedModuleNames_16_16;
    MR_Word STATE_VARIABLE_FoundUnqual_17_17;
    MR_Word SymName_29;
    MR_Word ArgTerms_30;

    mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Pattern0_9, &Pattern_11);
    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Pattern_11, &SymName_29, &ArgTerms_30);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_FoundUnqual_18_34;
      MR_Word STATE_VARIABLE_UsedModuleNames_19_35;

      if (((MR_tag((MR_Word) SymName_29)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_29, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_31)), STATE_VARIABLE_UsedModuleNames_0_12, &STATE_VARIABLE_UsedModuleNames_19_35);
        STATE_VARIABLE_FoundUnqual_18_34 = STATE_VARIABLE_FoundUnqual_0_14;
      }
      else
      {
        STATE_VARIABLE_FoundUnqual_18_34 = (MR_Integer) 1;
        STATE_VARIABLE_UsedModuleNames_19_35 = STATE_VARIABLE_UsedModuleNames_0_12;
      }
      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_30, STATE_VARIABLE_UsedModuleNames_19_35, &STATE_VARIABLE_UsedModuleNames_16_16, STATE_VARIABLE_FoundUnqual_18_34, &STATE_VARIABLE_FoundUnqual_17_17);
    }
    else
    {
      STATE_VARIABLE_FoundUnqual_17_17 = STATE_VARIABLE_FoundUnqual_0_14;
      STATE_VARIABLE_UsedModuleNames_16_16 = STATE_VARIABLE_UsedModuleNames_0_12;
    }
    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_10, STATE_VARIABLE_UsedModuleNames_16_16, STATE_VARIABLE_UsedModuleNames_13, STATE_VARIABLE_FoundUnqual_17_17, STATE_VARIABLE_FoundUnqual_15);
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    parse_tree__module_qual__mq_info_set_module_used_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(
  MR_Word InInt_5,
  MR_Word ItemPromise_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromise_6, (MR_Integer) 1))));
    MR_Word UsedModuleNames_14;
    MR_Word FoundUnqual_15;
    MR_Word Var_19;

    Var_19 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(Goal_9, Var_19, &UsedModuleNames_14, (MR_Integer) 0, &FoundUnqual_15);
    switch (FoundUnqual_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_22;
          MR_Box conv1_STATE_VARIABLE_Info_18;

          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[3]));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (InInt_5));
          }
          mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_22, UsedModuleNames_14, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv1_STATE_VARIABLE_Info_18);
          *STATE_VARIABLE_Info_18 = ((MR_Word) (conv1_STATE_VARIABLE_Info_18));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word UnusedModules_16;

          mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), &UnusedModules_16);
          parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedModules_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
        }
        break;
    }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_UsedModuleNames_13;
    MR_Word conv2_STATE_VARIABLE_FoundUnqual_15;

    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_UsedModuleNames_13, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_FoundUnqual_15);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_UsedModuleNames_13));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_FoundUnqual_15));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_150;

    parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__681__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_150);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_150));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_157;

    parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__692__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_157);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_157));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_UsedModuleNames_0_90,
  MR_Word * STATE_VARIABLE_UsedModuleNames_91,
  MR_Word STATE_VARIABLE_FoundUnqual_0_92,
  MR_Word * STATE_VARIABLE_FoundUnqual_93)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Goal_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LHS0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));
          MR_Word RHS0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 2))));
          MR_Word LHS_88;
          MR_Word RHS_89;
          MR_Word STATE_VARIABLE_UsedModuleNames_94_94;
          MR_Word STATE_VARIABLE_FoundUnqual_95_95;

          mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LHS0_86, &LHS_88);
          mercury__term__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&mercury__term__term__type_ctor_info_generic_0), RHS0_87, &RHS_89);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(LHS_88, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_94_94, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_95_95);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(RHS_89, STATE_VARIABLE_UsedModuleNames_94_94, STATE_VARIABLE_UsedModuleNames_91, STATE_VARIABLE_FoundUnqual_95_95, STATE_VARIABLE_FoundUnqual_93);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_FoundUnqual_98_98;
          MR_Word STATE_VARIABLE_UsedModuleNames_99_99;
          MR_Word ArgTerms0_137 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goal_6, (MR_Integer) 2))));
          MR_Word ArgTerms_138;

          if (((MR_tag((MR_Word) SymName_80)) == (MR_Integer) 1))
          {
            MR_Word ModuleName_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_80, (MR_Integer) 0))));

            mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_82)), STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_99_99);
            STATE_VARIABLE_FoundUnqual_98_98 = STATE_VARIABLE_FoundUnqual_0_92;
          }
          else
          {
            STATE_VARIABLE_FoundUnqual_98_98 = (MR_Integer) 1;
            STATE_VARIABLE_UsedModuleNames_99_99 = STATE_VARIABLE_UsedModuleNames_0_90;
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[5]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[6]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[30]), ArgTerms0_137, &ArgTerms_138);
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_138, STATE_VARIABLE_UsedModuleNames_99_99, STATE_VARIABLE_UsedModuleNames_91, STATE_VARIABLE_FoundUnqual_98_98, STATE_VARIABLE_FoundUnqual_93);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubGoalA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 1))));
          MR_Word SubGoalB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_6, (MR_Integer) 2))));
          MR_Word STATE_VARIABLE_UsedModuleNames_130_130;
          MR_Word STATE_VARIABLE_FoundUnqual_131_131;
          MR_Word next_value_of_Goal_6;
          MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
          MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_10, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_130, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_131);
          // direct tailcall eliminated
          ;
          next_value_of_Goal_6 = SubGoalB_11;
          next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_130;
          next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_131;
          Goal_6 = next_value_of_Goal_6;
          STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
          STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_UsedModuleNames_91 = STATE_VARIABLE_UsedModuleNames_0_90;
              *STATE_VARIABLE_FoundUnqual_93 = STATE_VARIABLE_FoundUnqual_0_92;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word CondGoal_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_UsedModuleNames_106_106;
              MR_Word STATE_VARIABLE_FoundUnqual_107_107;
              MR_Word STATE_VARIABLE_UsedModuleNames_108_108;
              MR_Word STATE_VARIABLE_FoundUnqual_109_109;
              MR_Word ThenGoal_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 5))));
              MR_Word ElseGoal_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(CondGoal_74, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_106_106, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_107_107);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ThenGoal_135, STATE_VARIABLE_UsedModuleNames_106_106, &STATE_VARIABLE_UsedModuleNames_108_108, STATE_VARIABLE_FoundUnqual_107_107, &STATE_VARIABLE_FoundUnqual_109_109);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = ElseGoal_136;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_108_108;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_109_109;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoalA_164 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word SubGoalB_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_130_166;
              MR_Word STATE_VARIABLE_FoundUnqual_131_167;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_164, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_166, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_167);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_165;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_166;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_167;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoal_176 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_6 = SubGoal_176;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              *STATE_VARIABLE_UsedModuleNames_91 = STATE_VARIABLE_UsedModuleNames_0_90;
              *STATE_VARIABLE_FoundUnqual_93 = STATE_VARIABLE_FoundUnqual_0_92;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoalA_177 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word SubGoalB_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_130_179;
              MR_Word STATE_VARIABLE_FoundUnqual_131_180;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_177, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_179, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_180);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_178;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_179;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_180;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubGoal_185 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_185;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubGoal_184 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_184;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubGoal_183 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_183;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word SubGoal_182 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_182;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word SubGoal_181 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_181;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word SubGoal_187 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_187;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word SubGoal_186 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word next_value_of_Goal_6 = SubGoal_186;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word SubGoal_188 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_188;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word SubGoal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word next_value_of_Goal_6 = SubGoal_19;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word SubGoal_189 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word next_value_of_Goal_6 = SubGoal_189;

              // direct tailcall eliminated
              ;
              Goal_6 = next_value_of_Goal_6;
              continue;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word MainGoal_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 5))));
              MR_Word OrElseGoals_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word STATE_VARIABLE_UsedModuleNames_112_112;
              MR_Word STATE_VARIABLE_FoundUnqual_113_113;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(MainGoal_69, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_112_112, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_113_113);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(OrElseGoals_70, STATE_VARIABLE_UsedModuleNames_112_112, STATE_VARIABLE_UsedModuleNames_91, STATE_VARIABLE_FoundUnqual_113_113, STATE_VARIABLE_FoundUnqual_93);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ThenGoal_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
              MR_Word MaybeElseGoal_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 5))));
              MR_Word Catches_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 6))));
              MR_Word MaybeCatchAny_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 7))));
              MR_Word STATE_VARIABLE_UsedModuleNames_116_116;
              MR_Word STATE_VARIABLE_FoundUnqual_117_117;
              MR_Word STATE_VARIABLE_UsedModuleNames_118_118;
              MR_Word STATE_VARIABLE_FoundUnqual_119_119;
              MR_Word STATE_VARIABLE_UsedModuleNames_120_120;
              MR_Word STATE_VARIABLE_FoundUnqual_121_121;
              MR_Word STATE_VARIABLE_UsedModuleNames_123_123;
              MR_Word STATE_VARIABLE_FoundUnqual_124_124;
              MR_Word SubGoal_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Box conv5_STATE_VARIABLE_UsedModuleNames_123_123;
              MR_Box conv4_STATE_VARIABLE_FoundUnqual_124_124;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoal_134, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_116_116, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_117_117);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ThenGoal_58, STATE_VARIABLE_UsedModuleNames_116_116, &STATE_VARIABLE_UsedModuleNames_118_118, STATE_VARIABLE_FoundUnqual_117_117, &STATE_VARIABLE_FoundUnqual_119_119);
              if ((MaybeElseGoal_59 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                STATE_VARIABLE_UsedModuleNames_120_120 = STATE_VARIABLE_UsedModuleNames_118_118;
                STATE_VARIABLE_FoundUnqual_121_121 = STATE_VARIABLE_FoundUnqual_119_119;
              }
              else
              {
                MR_Word ElseGoal_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElseGoal_59, (MR_Integer) 0))));

                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(ElseGoal_62, STATE_VARIABLE_UsedModuleNames_118_118, &STATE_VARIABLE_UsedModuleNames_120_120, STATE_VARIABLE_FoundUnqual_119_119, &STATE_VARIABLE_FoundUnqual_121_121);
              }
              mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[32]), Catches_60, ((MR_Box) (STATE_VARIABLE_UsedModuleNames_120_120)), &conv5_STATE_VARIABLE_UsedModuleNames_123_123, ((MR_Box) (STATE_VARIABLE_FoundUnqual_121_121)), &conv4_STATE_VARIABLE_FoundUnqual_124_124);
              STATE_VARIABLE_UsedModuleNames_123_123 = ((MR_Word) (conv5_STATE_VARIABLE_UsedModuleNames_123_123));
              STATE_VARIABLE_FoundUnqual_124_124 = ((MR_Word) (conv4_STATE_VARIABLE_FoundUnqual_124_124));
              if ((MaybeCatchAny_61 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *STATE_VARIABLE_UsedModuleNames_91 = STATE_VARIABLE_UsedModuleNames_123_123;
                *STATE_VARIABLE_FoundUnqual_93 = STATE_VARIABLE_FoundUnqual_124_124;
              }
              else
              {
                MR_Word CatchAnyGoal_64;
                MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCatchAny_61, (MR_Integer) 0))));
                MR_Word next_value_of_Goal_6;
                MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
                MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

                CatchAnyGoal_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_125, (MR_Integer) 1))));
                // direct tailcall eliminated
                ;
                next_value_of_Goal_6 = CatchAnyGoal_64;
                next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_123_123;
                next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_124_124;
                Goal_6 = next_value_of_Goal_6;
                STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
                STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
                continue;
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SubGoalA_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word SubGoalB_173 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_130_174;
              MR_Word STATE_VARIABLE_FoundUnqual_131_175;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_172, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_174, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_175);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_173;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_174;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_175;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word SubGoalA_168 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
              MR_Word SubGoalB_169 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_UsedModuleNames_130_170;
              MR_Word STATE_VARIABLE_FoundUnqual_131_171;
              MR_Word next_value_of_Goal_6;
              MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_92;

              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(SubGoalA_168, STATE_VARIABLE_UsedModuleNames_0_90, &STATE_VARIABLE_UsedModuleNames_130_170, STATE_VARIABLE_FoundUnqual_0_92, &STATE_VARIABLE_FoundUnqual_131_171);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_6 = SubGoalB_169;
              next_value_of_STATE_VARIABLE_UsedModuleNames_0_90 = STATE_VARIABLE_UsedModuleNames_130_170;
              next_value_of_STATE_VARIABLE_FoundUnqual_0_92 = STATE_VARIABLE_FoundUnqual_131_171;
              Goal_6 = next_value_of_Goal_6;
              STATE_VARIABLE_UsedModuleNames_0_90 = next_value_of_STATE_VARIABLE_UsedModuleNames_0_90;
              STATE_VARIABLE_FoundUnqual_0_92 = next_value_of_STATE_VARIABLE_FoundUnqual_0_92;
              continue;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ArgTerms0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3))));
              MR_Word ArgTerms_78;

              mercury__list__map_3_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[5]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[6]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[31]), ArgTerms0_77, &ArgTerms_78);
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_78, STATE_VARIABLE_UsedModuleNames_0_90, STATE_VARIABLE_UsedModuleNames_91, STATE_VARIABLE_FoundUnqual_0_92, STATE_VARIABLE_FoundUnqual_93);
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
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
  {
    MR_bool succeeded;
    MR_Word SymName_9;
    MR_Word ArgTerms_10;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6, &SymName_9, &ArgTerms_10);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_FoundUnqual_18_18;
      MR_Word STATE_VARIABLE_UsedModuleNames_19_19;

      if (((MR_tag((MR_Word) SymName_9)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_9, (MR_Integer) 0))));

        mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_UsedModuleNames_0_14, &STATE_VARIABLE_UsedModuleNames_19_19);
        STATE_VARIABLE_FoundUnqual_18_18 = STATE_VARIABLE_FoundUnqual_0_16;
      }
      else
      {
        STATE_VARIABLE_FoundUnqual_18_18 = (MR_Integer) 1;
        STATE_VARIABLE_UsedModuleNames_19_19 = STATE_VARIABLE_UsedModuleNames_0_14;
      }
      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_10, STATE_VARIABLE_UsedModuleNames_19_19, STATE_VARIABLE_UsedModuleNames_15, STATE_VARIABLE_FoundUnqual_18_18, STATE_VARIABLE_FoundUnqual_17);
    }
    else
    {
      *STATE_VARIABLE_FoundUnqual_17 = STATE_VARIABLE_FoundUnqual_0_16;
      *STATE_VARIABLE_UsedModuleNames_15 = STATE_VARIABLE_UsedModuleNames_0_14;
    }
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
      MR_Word Term_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_UsedModuleNames_20_20;
      MR_Word STATE_VARIABLE_FoundUnqual_21_21;
      MR_Word SymName_31;
      MR_Word ArgTerms_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_UsedModuleNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FoundUnqual_0_4;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_12, &SymName_31, &ArgTerms_32);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_FoundUnqual_18_36;
        MR_Word STATE_VARIABLE_UsedModuleNames_19_37;

        if (((MR_tag((MR_Word) SymName_31)) == (MR_Integer) 1))
        {
          MR_Word ModuleName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_31, (MR_Integer) 0))));

          mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_33)), STATE_VARIABLE_UsedModuleNames_0_2, &STATE_VARIABLE_UsedModuleNames_19_37);
          STATE_VARIABLE_FoundUnqual_18_36 = STATE_VARIABLE_FoundUnqual_0_4;
        }
        else
        {
          STATE_VARIABLE_FoundUnqual_18_36 = (MR_Integer) 1;
          STATE_VARIABLE_UsedModuleNames_19_37 = STATE_VARIABLE_UsedModuleNames_0_2;
        }
        parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(ArgTerms_32, STATE_VARIABLE_UsedModuleNames_19_37, &STATE_VARIABLE_UsedModuleNames_20_20, STATE_VARIABLE_FoundUnqual_18_36, &STATE_VARIABLE_FoundUnqual_21_21);
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
  {
    MR_Word InstanceModule_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance_4, (MR_Integer) 6))));
    MR_Word ImportedInstanceModules0_7;
    MR_Word ImportedInstanceModules_8;

    parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(STATE_VARIABLE_Info_0_9, &ImportedInstanceModules0_7);
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (InstanceModule_6)), ImportedInstanceModules0_7, &ImportedInstanceModules_8);
    parse_tree__module_qual__mq_info_set_imported_instance_modules_3_p_0(ImportedInstanceModules_8, STATE_VARIABLE_Info_0_9, STATE_VARIABLE_Info_10);
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(
  MR_Word Permissions_5,
  MR_Word ItemTypeClass_6,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 0))));
    MR_Word Params_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_6, (MR_Integer) 1))));
    MR_Integer Arity_16;
    MR_Word Classes0_17;
    MR_Word Classes_18;
    MR_Word Var_21;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[3]), Params_9, &Arity_16);
    parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_19, &Classes0_17);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (SymName_8));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (Arity_16));
    }
    parse_tree__module_qual__id_set__id_set_insert_4_p_0(Permissions_5, Var_21, Classes0_17, &Classes_18);
    parse_tree__module_qual__mq_info_set_classes_3_p_0(Classes_18, STATE_VARIABLE_Info_0_19, STATE_VARIABLE_Info_20);
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_mode_defn_info_to_mq_id_1_f_0(
  MR_Word ItemModeDefn_3)
{
  {
    MR_Word MQId_4;
    MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_3, (MR_Integer) 0))));
    MR_Word Params_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_3, (MR_Integer) 1))));
    MR_Integer Var_11;

    Var_11 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[4]), Params_6);
    {
      MQId_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MQId_4, 0) = ((MR_Box) (SymName_5));
      MR_hl_field(MR_mktag(0), MQId_4, 1) = ((MR_Box) (Var_11));
    }
    return MQId_4;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_inst_defn_info_to_mq_id_1_f_0(
  MR_Word ItemInstDefn_3)
{
  {
    MR_Word MQId_4;
    MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_3, (MR_Integer) 0))));
    MR_Word Params_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_3, (MR_Integer) 1))));
    MR_Integer Var_12;

    Var_12 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[4]), Params_6);
    {
      MQId_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MQId_4, 0) = ((MR_Box) (SymName_5));
      MR_hl_field(MR_mktag(0), MQId_4, 1) = ((MR_Box) (Var_12));
    }
    return MQId_4;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__item_type_defn_info_to_mq_id_1_f_0(
  MR_Word ItemTypeDefn_3)
{
  {
    MR_Word MQId_4;
    MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 0))));
    MR_Word Params_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_3, (MR_Integer) 1))));
    MR_Integer Var_11;

    Var_11 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[3]), Params_6);
    {
      MQId_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MQId_4, 0) = ((MR_Box) (SymName_5));
      MR_hl_field(MR_mktag(0), MQId_4, 1) = ((MR_Box) (Var_11));
    }
    return MQId_4;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int3_import_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportedModules_0_6,
  MR_Word * STATE_VARIABLE_ImportedModules_7)
{
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_4)), STATE_VARIABLE_ImportedModules_0_6, STATE_VARIABLE_ImportedModules_7);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int0_import_or_use_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_ImportedModules_0_6,
  MR_Word * STATE_VARIABLE_ImportedModules_7)
{
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_4)), STATE_VARIABLE_ImportedModules_0_6, STATE_VARIABLE_ImportedModules_7);
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(
  MR_Word IntPermissions_6,
  MR_Word ModuleName_7,
  MR_Word InclInfo_8,
  MR_Word STATE_VARIABLE_Modules_0_13,
  MR_Word * STATE_VARIABLE_Modules_14)
{
  {
    MR_Word Section_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InclInfo_8, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Section_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_15;

          {
            Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (ModuleName_7));
            MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, Var_15, STATE_VARIABLE_Modules_0_13, STATE_VARIABLE_Modules_14);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_17;

          {
            Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (ModuleName_7));
            MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          parse_tree__module_qual__id_set__id_set_insert_4_p_0(IntPermissions_6, Var_17, STATE_VARIABLE_Modules_0_13, STATE_VARIABLE_Modules_14);
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(
  MR_Word SNA_3)
{
  {
    MR_Word Id_4;
    MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SNA_3, (MR_Integer) 0))));
    MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SNA_3, (MR_Integer) 1))));

    {
      Id_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Id_4, 0) = ((MR_Box) (SymName_5));
      MR_hl_field(MR_mktag(0), Id_4, 1) = ((MR_Box) (Arity_6));
    }
    return Id_4;
  }
}

static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__type_ctor_to_mq_id_1_f_0(
  MR_Word TypeCtor_3)
{
  {
    MR_Word Id_4;
    MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0))));
    MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1))));

    {
      Id_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Id_4, 0) = ((MR_Box) (SymName_5));
      MR_hl_field(MR_mktag(0), Id_4, 1) = ((MR_Box) (Arity_6));
    }
    return Id_4;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_src_avail_map_entry_7_p_0(
  MR_Word Section_8,
  MR_Word ModuleName_9,
  MR_Word Contexts_10,
  MR_Word STATE_VARIABLE_ImportedModules_0_15,
  MR_Word * STATE_VARIABLE_ImportedModules_16,
  MR_Word STATE_VARIABLE_UnusedIntModules_0_17,
  MR_Word * STATE_VARIABLE_UnusedIntModules_18)
{
  {
    MR_bool succeeded;

    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_9)), STATE_VARIABLE_ImportedModules_0_15, STATE_VARIABLE_ImportedModules_16);
    switch (Section_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_UnusedIntModules_18 = STATE_VARIABLE_UnusedIntModules_0_17;
        break;
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_UnusedIntModules_20_20;

          succeeded = mercury__map__insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), ((MR_Box) (ModuleName_9)), ((MR_Box) (Contexts_10)), STATE_VARIABLE_UnusedIntModules_0_17, &STATE_VARIABLE_UnusedIntModules_20_20);
          if (succeeded)
            *STATE_VARIABLE_UnusedIntModules_18 = STATE_VARIABLE_UnusedIntModules_20_20;
          else
          {
            MR_Word OldContexts_13;
            MR_Word NewContexts_14;
            MR_Box conv0_OldContexts_13;

            mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), STATE_VARIABLE_UnusedIntModules_0_17, ((MR_Box) (ModuleName_9)), &conv0_OldContexts_13);
            OldContexts_13 = ((MR_Word) (conv0_OldContexts_13));
            NewContexts_14 = mercury__one_or_more__f_43_43_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), OldContexts_13, Contexts_10);
            mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), ((MR_Box) (ModuleName_9)), ((MR_Box) (NewContexts_14)), STATE_VARIABLE_UnusedIntModules_0_17, STATE_VARIABLE_UnusedIntModules_18);
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_direct_int_spec_3_p_0(
  MR_Word DirectIntSpec_4,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  if (((MR_tag((MR_Word) DirectIntSpec_4)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectIntSpec_4, (MR_Integer) 0))));
    MR_Word ReadWhy1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DirectIntSpec_4, (MR_Integer) 1))) & (MR_Integer) 7);

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0(ParseTreeInt1_6, ReadWhy1_7, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
  }
  else
  {
    MR_Word ParseTreeInt3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DirectIntSpec_4, (MR_Integer) 0))));
    MR_Word ReadWhy3_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), DirectIntSpec_4, (MR_Integer) 1))) & (MR_Integer) 15);
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = (MR_Box) ((MR_Unsigned) (ReadWhy3_9));
    }
    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0(Var_12, ParseTreeInt3_8, STATE_VARIABLE_Info_0_10, STATE_VARIABLE_Info_11);
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_Info_18;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Info_18);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_Info_10;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_Info_20;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_Info_20));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_Id_4;

    conv7_Id_4 = parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_Id_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_Id_4;

    conv5_Id_4 = parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_Id_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;

    parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Id_4;

    conv2_Id_4 = parse_tree__module_qual__collect_mq_info__type_ctor_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Id_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_14;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_14);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_14));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0(
  MR_Word ParseTreeInt1_5,
  MR_Word ReadWhy1_6,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  {
    MR_Word IntPermInInt_9;
    MR_Word IntPermInImp_10;
    MR_Word IntPermissions_11;
    MR_Word InclMap_17;
    MR_Word IntTypeDefnMap_23;
    MR_Word IntInstDefnMap_24;
    MR_Word IntModeDefnMap_25;
    MR_Word IntTypeClasses_26;
    MR_Word IntInstances_27;
    MR_Word IntPromises_32;
    MR_Word Modules0_37;
    MR_Word Modules_38;
    MR_Word Types0_39;
    MR_Word IntTypeIds_40;
    MR_Word Types_41;
    MR_Word Insts0_42;
    MR_Word IntInstIds_43;
    MR_Word Insts_44;
    MR_Word Modes0_45;
    MR_Word IntModeIds_46;
    MR_Word Modes_47;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_Info_70_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_Info_74_74;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_Info_78_78;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_Info_82_82;
    MR_Word Var_83;
    MR_Word STATE_VARIABLE_Info_84_84;
    MR_Word STATE_VARIABLE_Info_86_86;
    MR_Box conv1_Modules_38;
    MR_Box conv4_Types_41;
    MR_Box conv6_Insts_44;
    MR_Box conv8_Modes_47;
    MR_Box conv10_STATE_VARIABLE_Info_84_84;
    MR_Box conv12_STATE_VARIABLE_Info_86_86;
    MR_Box conv14_STATE_VARIABLE_Info_49;

    switch (ReadWhy1_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          IntPermInInt_9 = (MR_Word) ((MR_Unsigned) 0U);
          IntPermInImp_10 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 3:
        {
          IntPermInInt_9 = (MR_Word) ((MR_Unsigned) 0U);
          IntPermInImp_10 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 0:
        {
          IntPermInInt_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]));
          IntPermInImp_10 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 1:
        {
          IntPermInInt_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]));
          IntPermInImp_10 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 4:
        {
          IntPermInInt_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]));
          IntPermInImp_10 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
        }
        break;
      case (MR_Integer) 5:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.collect_mq_info.collect_mq_info_in_parse_tree_int1\'/4", (MR_String) "rwi1_opt");
          return;
        }
        break;
    }
    {
      IntPermissions_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IntPermissions_11, 0) = ((MR_Box) (IntPermInInt_9));
      MR_hl_field(MR_mktag(0), IntPermissions_11, 1) = ((MR_Box) (IntPermInImp_10));
    }
    InclMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_5, (MR_Integer) 5))));
    IntTypeDefnMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_5, (MR_Integer) 11))));
    IntInstDefnMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_5, (MR_Integer) 12))));
    IntModeDefnMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_5, (MR_Integer) 13))));
    IntTypeClasses_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_5, (MR_Integer) 14))));
    IntInstances_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_5, (MR_Integer) 15))));
    IntPromises_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_5, (MR_Integer) 20))));
    parse_tree__module_qual__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_48, &Modules0_37);
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (IntPermissions_11));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_69, InclMap_17, ((MR_Box) (Modules0_37)), &conv1_Modules_38);
    Modules_38 = ((MR_Word) (conv1_Modules_38));
    parse_tree__module_qual__mq_info_set_modules_3_p_0(Modules_38, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_70_70);
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_70_70, &Types0_39);
    Var_72 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), IntTypeDefnMap_23);
    IntTypeIds_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[26]), Var_72);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (IntPermissions_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_73, IntTypeIds_40, ((MR_Box) (Types0_39)), &conv4_Types_41);
    Types_41 = ((MR_Word) (conv4_Types_41));
    parse_tree__module_qual__mq_info_set_types_3_p_0(Types_41, STATE_VARIABLE_Info_70_70, &STATE_VARIABLE_Info_74_74);
    parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_74_74, &Insts0_42);
    Var_76 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), IntInstDefnMap_24);
    IntInstIds_43 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[27]), Var_76);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_73, IntInstIds_43, ((MR_Box) (Insts0_42)), &conv6_Insts_44);
    Insts_44 = ((MR_Word) (conv6_Insts_44));
    parse_tree__module_qual__mq_info_set_insts_3_p_0(Insts_44, STATE_VARIABLE_Info_74_74, &STATE_VARIABLE_Info_78_78);
    parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_78_78, &Modes0_45);
    Var_80 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), IntModeDefnMap_25);
    IntModeIds_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[28]), Var_80);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_73, IntModeIds_46, ((MR_Box) (Modes0_45)), &conv8_Modes_47);
    Modes_47 = ((MR_Word) (conv8_Modes_47));
    parse_tree__module_qual__mq_info_set_modes_3_p_0(Modes_47, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_82_82);
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int1_4_p_0_6));
      MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (IntPermissions_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_83, IntTypeClasses_26, ((MR_Box) (STATE_VARIABLE_Info_82_82)), &conv10_STATE_VARIABLE_Info_84_84);
    STATE_VARIABLE_Info_84_84 = ((MR_Word) (conv10_STATE_VARIABLE_Info_84_84));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[29]), IntInstances_27, ((MR_Box) (STATE_VARIABLE_Info_84_84)), &conv12_STATE_VARIABLE_Info_86_86);
    STATE_VARIABLE_Info_86_86 = ((MR_Word) (conv12_STATE_VARIABLE_Info_86_86));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[11]), IntPromises_32, ((MR_Box) (STATE_VARIABLE_Info_86_86)), &conv14_STATE_VARIABLE_Info_49);
    *STATE_VARIABLE_Info_49 = ((MR_Word) (conv14_STATE_VARIABLE_Info_49));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv13_STATE_VARIABLE_Info_10;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_STATE_VARIABLE_Info_20;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_Info_20));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_Id_4;

    conv9_Id_4 = parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_Id_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv7_Id_4;

    conv7_Id_4 = parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_Id_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_4;

    parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_Id_4;

    conv4_Id_4 = parse_tree__module_qual__collect_mq_info__type_ctor_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_Id_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImportedModules_7;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int3_import_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImportedModules_7);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImportedModules_7));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_14;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_14);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_14));
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0(
  MR_Word Role_5,
  MR_Word ParseTreeInt3_6,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_Word PermInInt_9;
    MR_Word PermInImp_10;
    MR_Word Permissions_12;
    MR_Word InclMap_16;
    MR_Word IntImportMap_17;
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
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_Info_60_60;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_Info_63_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_Info_71_71;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_Info_75_75;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_Info_77_77;
    MR_Box conv1_Modules_26;
    MR_Box conv3_ImportedModules_28;
    MR_Box conv6_Types_31;
    MR_Box conv8_Insts_34;
    MR_Box conv10_Modes_37;
    MR_Box conv12_STATE_VARIABLE_Info_77_77;
    MR_Box conv14_STATE_VARIABLE_Info_39;

    if ((Role_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PermInInt_9 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]));
      PermInImp_10 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
    }
    else
    {
      MR_Word ReadWhy3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Role_5, (MR_Integer) 0))) & (MR_Integer) 15);

      PermInInt_9 = ((&parse_tree__module_qual__collect_mq_info_vector_common_10[0 + ReadWhy3_11]))->parse_tree__module_qual__collect_mq_info__vector_common_type_10_0__vct_10_f_0;
      PermInImp_10 = ((&parse_tree__module_qual__collect_mq_info_vector_common_10[0 + ReadWhy3_11]))->parse_tree__module_qual__collect_mq_info__vector_common_type_10_0__vct_10_f_1;
    }
    {
      Permissions_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Permissions_12, 0) = ((MR_Box) (PermInInt_9));
      MR_hl_field(MR_mktag(0), Permissions_12, 1) = ((MR_Box) (PermInImp_10));
    }
    InclMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 3))));
    IntImportMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 4))));
    IntTypeDefnMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 6))));
    IntInstDefnMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 7))));
    IntModeDefnMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 8))));
    IntTypeClasses_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 9))));
    IntInstances_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt3_6, (MR_Integer) 10))));
    parse_tree__module_qual__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_38, &Modules0_25);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (Permissions_12));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_59, InclMap_16, ((MR_Box) (Modules0_25)), &conv1_Modules_26);
    Modules_26 = ((MR_Word) (conv1_Modules_26));
    parse_tree__module_qual__mq_info_set_modules_3_p_0(Modules_26, STATE_VARIABLE_Info_0_38, &STATE_VARIABLE_Info_60_60);
    parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_60_60, &ImportedModules0_27);
    Var_62 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), IntImportMap_17);
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[21]), Var_62, ((MR_Box) (ImportedModules0_27)), &conv3_ImportedModules_28);
    ImportedModules_28 = ((MR_Word) (conv3_ImportedModules_28));
    parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(ImportedModules_28, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_63_63);
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_63_63, &Types0_29);
    Var_65 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), IntTypeDefnMap_19);
    TypeIds_30 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[22]), Var_65);
    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Permissions_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_66, TypeIds_30, ((MR_Box) (Types0_29)), &conv6_Types_31);
    Types_31 = ((MR_Word) (conv6_Types_31));
    parse_tree__module_qual__mq_info_set_types_3_p_0(Types_31, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_67_67);
    parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_67_67, &Insts0_32);
    Var_69 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), IntInstDefnMap_20);
    InstIds_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[23]), Var_69);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_66, InstIds_33, ((MR_Box) (Insts0_32)), &conv8_Insts_34);
    Insts_34 = ((MR_Word) (conv8_Insts_34));
    parse_tree__module_qual__mq_info_set_insts_3_p_0(Insts_34, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_71_71);
    parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_71_71, &Modes0_35);
    Var_73 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), IntModeDefnMap_21);
    ModeIds_36 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[24]), Var_73);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_66, ModeIds_36, ((MR_Box) (Modes0_35)), &conv10_Modes_37);
    Modes_37 = ((MR_Word) (conv10_Modes_37));
    parse_tree__module_qual__mq_info_set_modes_3_p_0(Modes_37, STATE_VARIABLE_Info_71_71, &STATE_VARIABLE_Info_75_75);
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int3_4_p_0_7));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (Permissions_12));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_76, IntTypeClasses_22, ((MR_Box) (STATE_VARIABLE_Info_75_75)), &conv12_STATE_VARIABLE_Info_77_77);
    STATE_VARIABLE_Info_77_77 = ((MR_Word) (conv12_STATE_VARIABLE_Info_77_77));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[25]), IntInstances_23, ((MR_Box) (STATE_VARIABLE_Info_77_77)), &conv14_STATE_VARIABLE_Info_39);
    *STATE_VARIABLE_Info_39 = ((MR_Word) (conv14_STATE_VARIABLE_Info_39));
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AncestorIntSpec_4, (MR_Integer) 0))));
    MR_Word ReadWhy0_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), AncestorIntSpec_4, (MR_Integer) 1))) & (MR_Integer) 1);

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0(ParseTreeInt0_6, ReadWhy0_7, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv34_STATE_VARIABLE_Info_18;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv34_STATE_VARIABLE_Info_18);
    *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv32_STATE_VARIABLE_Info_18;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_STATE_VARIABLE_Info_18);
    *wrapper_arg_3 = ((MR_Box) (conv32_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv30_STATE_VARIABLE_Info_10;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv30_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv30_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv28_STATE_VARIABLE_Info_10;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv28_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv28_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv26_STATE_VARIABLE_Info_20;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv26_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv24_STATE_VARIABLE_Info_20;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_Info_20));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv21_Id_4;

    conv21_Id_4 = parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv21_Id_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv20_Id_4;

    conv20_Id_4 = parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv20_Id_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv17_Id_4;

    conv17_Id_4 = parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv17_Id_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv16_Id_4;

    conv16_Id_4 = parse_tree__module_qual__collect_mq_info__sym_name_arity_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv16_Id_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__4_4;

    parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_HeadVar__4_4;

    parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv12_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv11_Id_4;

    conv11_Id_4 = parse_tree__module_qual__collect_mq_info__type_ctor_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv11_Id_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv10_Id_4;

    conv10_Id_4 = parse_tree__module_qual__collect_mq_info__type_ctor_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_Id_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ImportedModules_7;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int0_import_or_use_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ImportedModules_7);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ImportedModules_7));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_ImportedModules_7;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int0_import_or_use_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ImportedModules_7);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ImportedModules_7));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ImportedModules_7;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int0_import_or_use_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ImportedModules_7);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ImportedModules_7));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ImportedModules_7;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_int0_import_or_use_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ImportedModules_7);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ImportedModules_7));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_14;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_14);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_14));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0(
  MR_Word ParseTreeInt0_5,
  MR_Word ReadWhy0_6,
  MR_Word STATE_VARIABLE_Info_0_70,
  MR_Word * STATE_VARIABLE_Info_71)
{
  {
    MR_Word IntPermissions_13;
    MR_Word ImpPermissions_14;
    MR_Word InclMap_20;
    MR_Word IntImportMap_21;
    MR_Word IntUseMap_22;
    MR_Word ImpImportMap_23;
    MR_Word ImpUseMap_24;
    MR_Word IntTypeDefnMap_28;
    MR_Word IntInstDefnMap_29;
    MR_Word IntModeDefnMap_30;
    MR_Word IntTypeClasses_31;
    MR_Word IntInstances_32;
    MR_Word IntPromises_37;
    MR_Word ImpTypeDefnMap_38;
    MR_Word ImpInstDefnMap_39;
    MR_Word ImpModeDefnMap_40;
    MR_Word ImpTypeClasses_41;
    MR_Word ImpInstances_42;
    MR_Word ImpPromises_47;
    MR_Word Modules0_48;
    MR_Word Modules_49;
    MR_Word ImportedModules0_50;
    MR_Word ImportedModules1_51;
    MR_Word ImportedModules2_52;
    MR_Word ImportedModules3_53;
    MR_Word ImportedModules_54;
    MR_Word Types0_55;
    MR_Word IntTypeIds_56;
    MR_Word ImpTypeIds_57;
    MR_Word Types1_58;
    MR_Word Types_59;
    MR_Word Insts0_60;
    MR_Word IntInstIds_61;
    MR_Word ImpInstIds_62;
    MR_Word Insts1_63;
    MR_Word Insts_64;
    MR_Word Modes0_65;
    MR_Word IntModeIds_66;
    MR_Word ImpModeIds_67;
    MR_Word Modes1_68;
    MR_Word Modes_69;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_Info_88_88;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_96;
    MR_Word STATE_VARIABLE_Info_97_97;
    MR_Word Var_99;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word STATE_VARIABLE_Info_104_104;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word STATE_VARIABLE_Info_111_111;
    MR_Word Var_113;
    MR_Word Var_115;
    MR_Word STATE_VARIABLE_Info_118_118;
    MR_Word Var_119;
    MR_Word STATE_VARIABLE_Info_120_120;
    MR_Word Var_121;
    MR_Word STATE_VARIABLE_Info_122_122;
    MR_Word STATE_VARIABLE_Info_124_124;
    MR_Word STATE_VARIABLE_Info_126_126;
    MR_Word STATE_VARIABLE_Info_128_128;
    MR_Box conv1_Modules_49;
    MR_Box conv3_ImportedModules1_51;
    MR_Box conv5_ImportedModules2_52;
    MR_Box conv7_ImportedModules3_53;
    MR_Box conv9_ImportedModules_54;
    MR_Box conv13_Types1_58;
    MR_Box conv15_Types_59;
    MR_Box conv18_Insts1_63;
    MR_Box conv19_Insts_64;
    MR_Box conv22_Modes1_68;
    MR_Box conv23_Modes_69;
    MR_Box conv25_STATE_VARIABLE_Info_120_120;
    MR_Box conv27_STATE_VARIABLE_Info_122_122;
    MR_Box conv29_STATE_VARIABLE_Info_124_124;
    MR_Box conv31_STATE_VARIABLE_Info_126_126;
    MR_Box conv33_STATE_VARIABLE_Info_128_128;
    MR_Box conv35_STATE_VARIABLE_Info_71;

    switch (ReadWhy0_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.collect_mq_info.collect_mq_info_in_parse_tree_int0\'/4", (MR_String) "rwi0_opt");
          return;
        }
        break;
      case (MR_Integer) 0:
        {
          IntPermissions_13 = (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[7]);
          ImpPermissions_14 = IntPermissions_13;
        }
        break;
    }
    InclMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 5))));
    IntImportMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 6))));
    IntUseMap_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 7))));
    ImpImportMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 8))));
    ImpUseMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 9))));
    IntTypeDefnMap_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 13))));
    IntInstDefnMap_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 14))));
    IntModeDefnMap_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 15))));
    IntTypeClasses_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 16))));
    IntInstances_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 17))));
    IntPromises_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 22))));
    ImpTypeDefnMap_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 23))));
    ImpInstDefnMap_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 24))));
    ImpModeDefnMap_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 25))));
    ImpTypeClasses_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 26))));
    ImpInstances_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 27))));
    ImpPromises_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_5, (MR_Integer) 32))));
    parse_tree__module_qual__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_70, &Modules0_48);
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (IntPermissions_13));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_87, InclMap_20, ((MR_Box) (Modules0_48)), &conv1_Modules_49);
    Modules_49 = ((MR_Word) (conv1_Modules_49));
    parse_tree__module_qual__mq_info_set_modules_3_p_0(Modules_49, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_88_88);
    parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_88_88, &ImportedModules0_50);
    Var_90 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), IntImportMap_21);
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[9]), Var_90, ((MR_Box) (ImportedModules0_50)), &conv3_ImportedModules1_51);
    ImportedModules1_51 = ((MR_Word) (conv3_ImportedModules1_51));
    Var_92 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), IntUseMap_22);
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[10]), Var_92, ((MR_Box) (ImportedModules1_51)), &conv5_ImportedModules2_52);
    ImportedModules2_52 = ((MR_Word) (conv5_ImportedModules2_52));
    Var_94 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), ImpImportMap_23);
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[11]), Var_94, ((MR_Box) (ImportedModules2_52)), &conv7_ImportedModules3_53);
    ImportedModules3_53 = ((MR_Word) (conv7_ImportedModules3_53));
    Var_96 = mercury__map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), ImpUseMap_24);
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[12]), Var_96, ((MR_Box) (ImportedModules3_53)), &conv9_ImportedModules_54);
    ImportedModules_54 = ((MR_Word) (conv9_ImportedModules_54));
    parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(ImportedModules_54, STATE_VARIABLE_Info_88_88, &STATE_VARIABLE_Info_97_97);
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_97_97, &Types0_55);
    Var_99 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), IntTypeDefnMap_28);
    IntTypeIds_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[13]), Var_99);
    Var_101 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ImpTypeDefnMap_38);
    ImpTypeIds_57 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[14]), Var_101);
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_8));
      MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (IntPermissions_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_102, IntTypeIds_56, ((MR_Box) (Types0_55)), &conv13_Types1_58);
    Types1_58 = ((MR_Word) (conv13_Types1_58));
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_9));
      MR_hl_field(MR_mktag(0), Var_103, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_103, 3) = ((MR_Box) (ImpPermissions_14));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_103, ImpTypeIds_57, ((MR_Box) (Types1_58)), &conv15_Types_59);
    Types_59 = ((MR_Word) (conv15_Types_59));
    parse_tree__module_qual__mq_info_set_types_3_p_0(Types_59, STATE_VARIABLE_Info_97_97, &STATE_VARIABLE_Info_104_104);
    parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_104_104, &Insts0_60);
    Var_106 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), IntInstDefnMap_29);
    IntInstIds_61 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[15]), Var_106);
    Var_108 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ImpInstDefnMap_39);
    ImpInstIds_62 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[16]), Var_108);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_102, IntInstIds_61, ((MR_Box) (Insts0_60)), &conv18_Insts1_63);
    Insts1_63 = ((MR_Word) (conv18_Insts1_63));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_103, ImpInstIds_62, ((MR_Box) (Insts1_63)), &conv19_Insts_64);
    Insts_64 = ((MR_Word) (conv19_Insts_64));
    parse_tree__module_qual__mq_info_set_insts_3_p_0(Insts_64, STATE_VARIABLE_Info_104_104, &STATE_VARIABLE_Info_111_111);
    parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_111_111, &Modes0_65);
    Var_113 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), IntModeDefnMap_30);
    IntModeIds_66 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[17]), Var_113);
    Var_115 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ImpModeDefnMap_40);
    ImpModeIds_67 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[18]), Var_115);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_102, IntModeIds_66, ((MR_Box) (Modes0_65)), &conv22_Modes1_68);
    Modes1_68 = ((MR_Word) (conv22_Modes1_68));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), Var_103, ImpModeIds_67, ((MR_Box) (Modes1_68)), &conv23_Modes_69);
    Modes_69 = ((MR_Word) (conv23_Modes_69));
    parse_tree__module_qual__mq_info_set_modes_3_p_0(Modes_69, STATE_VARIABLE_Info_111_111, &STATE_VARIABLE_Info_118_118);
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_14));
      MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (IntPermissions_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_119, IntTypeClasses_31, ((MR_Box) (STATE_VARIABLE_Info_118_118)), &conv25_STATE_VARIABLE_Info_120_120);
    STATE_VARIABLE_Info_120_120 = ((MR_Word) (conv25_STATE_VARIABLE_Info_120_120));
    {
      Var_121 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_int0_4_p_0_15));
      MR_hl_field(MR_mktag(0), Var_121, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_121, 3) = ((MR_Box) (ImpPermissions_14));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), Var_121, ImpTypeClasses_41, ((MR_Box) (STATE_VARIABLE_Info_120_120)), &conv27_STATE_VARIABLE_Info_122_122);
    STATE_VARIABLE_Info_122_122 = ((MR_Word) (conv27_STATE_VARIABLE_Info_122_122));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[19]), IntInstances_32, ((MR_Box) (STATE_VARIABLE_Info_122_122)), &conv29_STATE_VARIABLE_Info_124_124);
    STATE_VARIABLE_Info_124_124 = ((MR_Word) (conv29_STATE_VARIABLE_Info_124_124));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[20]), ImpInstances_42, ((MR_Box) (STATE_VARIABLE_Info_124_124)), &conv31_STATE_VARIABLE_Info_126_126);
    STATE_VARIABLE_Info_126_126 = ((MR_Word) (conv31_STATE_VARIABLE_Info_126_126));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[9]), IntPromises_37, ((MR_Box) (STATE_VARIABLE_Info_126_126)), &conv33_STATE_VARIABLE_Info_128_128);
    STATE_VARIABLE_Info_128_128 = ((MR_Word) (conv33_STATE_VARIABLE_Info_128_128));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[10]), ImpPromises_47, ((MR_Box) (STATE_VARIABLE_Info_128_128)), &conv35_STATE_VARIABLE_Info_71);
    *STATE_VARIABLE_Info_71 = ((MR_Word) (conv35_STATE_VARIABLE_Info_71));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv38_STATE_VARIABLE_Info_18;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv38_STATE_VARIABLE_Info_18);
    *wrapper_arg_3 = ((MR_Box) (conv38_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv36_STATE_VARIABLE_Info_18;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_promise_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv36_STATE_VARIABLE_Info_18);
    *wrapper_arg_3 = ((MR_Box) (conv36_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv34_STATE_VARIABLE_Info_10;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv34_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv32_STATE_VARIABLE_Info_10;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_instance_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_STATE_VARIABLE_Info_10);
    *wrapper_arg_3 = ((MR_Box) (conv32_STATE_VARIABLE_Info_10));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv30_STATE_VARIABLE_Info_20;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv30_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv30_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv28_STATE_VARIABLE_Info_20;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_typeclass_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv28_STATE_VARIABLE_Info_20);
    *wrapper_arg_3 = ((MR_Box) (conv28_STATE_VARIABLE_Info_20));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv26_MQId_4;

    conv26_MQId_4 = parse_tree__module_qual__collect_mq_info__item_mode_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv26_MQId_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv24_MQId_4;

    conv24_MQId_4 = parse_tree__module_qual__collect_mq_info__item_mode_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv24_MQId_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv22_MQId_4;

    conv22_MQId_4 = parse_tree__module_qual__collect_mq_info__item_inst_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv22_MQId_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv20_MQId_4;

    conv20_MQId_4 = parse_tree__module_qual__collect_mq_info__item_inst_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv20_MQId_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv18_MQId_4;

    conv18_MQId_4 = parse_tree__module_qual__collect_mq_info__item_type_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv18_MQId_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_HeadVar__4_4;

    parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv17_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv17_HeadVar__4_4));
  }
}

static MR_Box MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv15_MQId_4;

    conv15_MQId_4 = parse_tree__module_qual__collect_mq_info__item_type_defn_info_to_mq_id_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv15_MQId_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__4_4;

    parse_tree__module_qual__id_set__id_set_insert_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__4_4));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_3(
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
    MR_Word conv9_STATE_VARIABLE_ImportedModules_16;
    MR_Word conv8_STATE_VARIABLE_UnusedIntModules_18;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_src_avail_map_entry_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_ImportedModules_16, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_UnusedIntModules_18);
    *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_ImportedModules_16));
    *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_UnusedIntModules_18));
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_ImportedModules_16;
    MR_Word conv2_STATE_VARIABLE_UnusedIntModules_18;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_src_avail_map_entry_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ImportedModules_16, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_UnusedIntModules_18);
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ImportedModules_16));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_UnusedIntModules_18));
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Modules_14;

    parse_tree__module_qual__collect_mq_info__collect_mq_info_in_included_module_info_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Modules_14);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Modules_14));
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_parse_tree_module_src_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word STATE_VARIABLE_Info_0_78,
  MR_Word * STATE_VARIABLE_Info_79)
{
  {
    MR_Word InclMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 4))));
    MR_Word IntImportMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 5))));
    MR_Word IntUseMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 6))));
    MR_Word ImpImportMap_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 7))));
    MR_Word ImpUseMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 8))));
    MR_Word IntTypeDefnsAbs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 13))));
    MR_Word IntTypeDefnsMer_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 14))));
    MR_Word IntTypeDefnsForeign_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 15))));
    MR_Word IntInstDefns_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 16))));
    MR_Word IntModeDefns_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 17))));
    MR_Word IntTypeClasses_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 18))));
    MR_Word IntInstances_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 19))));
    MR_Word IntPromises_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 24))));
    MR_Word ImpTypeDefnsAbs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 26))));
    MR_Word ImpTypeDefnsMer_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 27))));
    MR_Word ImpTypeDefnsForeign_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 28))));
    MR_Word ImpInstDefns_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 29))));
    MR_Word ImpModeDefns_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 30))));
    MR_Word ImpTypeClasses_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 31))));
    MR_Word ImpInstances_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 32))));
    MR_Word ImpPromises_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_4, (MR_Integer) 40))));
    MR_Word Modules0_55;
    MR_Word Modules_56;
    MR_Word ImportedModules0_57;
    MR_Word UnusedIntModules0_58;
    MR_Word ImportedModules1_59;
    MR_Word UnusedIntModules1_60;
    MR_Word ImportedModules2_61;
    MR_Word UnusedIntModules2_62;
    MR_Word ImportedModules3_63;
    MR_Word UnusedIntModules3_64;
    MR_Word ImportedModules_65;
    MR_Word UnusedIntModules_66;
    MR_Word Types0_67;
    MR_Word IntTypeDefns_68;
    MR_Word ImpTypeDefns_69;
    MR_Word Types1_70;
    MR_Word Types_71;
    MR_Word Insts0_72;
    MR_Word Insts1_73;
    MR_Word Insts_74;
    MR_Word Modes0_75;
    MR_Word Modes1_76;
    MR_Word Modes_77;
    MR_Word STATE_VARIABLE_Info_83_83;
    MR_Word STATE_VARIABLE_Info_92_92;
    MR_Word STATE_VARIABLE_Info_93_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_97;
    MR_Word Var_100;
    MR_Word STATE_VARIABLE_Info_102_102;
    MR_Word Var_104;
    MR_Word Var_107;
    MR_Word STATE_VARIABLE_Info_109_109;
    MR_Word Var_111;
    MR_Word Var_114;
    MR_Word STATE_VARIABLE_Info_116_116;
    MR_Word STATE_VARIABLE_Info_118_118;
    MR_Word STATE_VARIABLE_Info_120_120;
    MR_Word STATE_VARIABLE_Info_122_122;
    MR_Word STATE_VARIABLE_Info_124_124;
    MR_Word STATE_VARIABLE_Info_126_126;
    MR_Box conv1_Modules_56;
    MR_Box conv5_ImportedModules1_59;
    MR_Box conv4_UnusedIntModules1_60;
    MR_Box conv7_ImportedModules2_61;
    MR_Box conv6_UnusedIntModules2_62;
    MR_Box conv11_ImportedModules3_63;
    MR_Box conv10_UnusedIntModules3_64;
    MR_Box conv13_ImportedModules_65;
    MR_Box conv12_UnusedIntModules_66;
    MR_Box conv16_Types1_70;
    MR_Box conv19_Types_71;
    MR_Box conv21_Insts1_73;
    MR_Box conv23_Insts_74;
    MR_Box conv25_Modes1_76;
    MR_Box conv27_Modes_77;
    MR_Box conv29_STATE_VARIABLE_Info_118_118;
    MR_Box conv31_STATE_VARIABLE_Info_120_120;
    MR_Box conv33_STATE_VARIABLE_Info_122_122;
    MR_Box conv35_STATE_VARIABLE_Info_124_124;
    MR_Box conv37_STATE_VARIABLE_Info_126_126;
    MR_Box conv39_STATE_VARIABLE_Info_79;

    parse_tree__module_qual__mq_info_get_modules_2_p_0(STATE_VARIABLE_Info_0_78, &Modules0_55);
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[0]), InclMap_15, ((MR_Box) (Modules0_55)), &conv1_Modules_56);
    Modules_56 = ((MR_Word) (conv1_Modules_56));
    parse_tree__module_qual__mq_info_set_modules_3_p_0(Modules_56, STATE_VARIABLE_Info_0_78, &STATE_VARIABLE_Info_83_83);
    parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(STATE_VARIABLE_Info_83_83, &ImportedModules0_57);
    parse_tree__module_qual__mq_info_get_as_yet_unused_interface_modules_2_p_0(STATE_VARIABLE_Info_83_83, &UnusedIntModules0_58);
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[1]), IntImportMap_16, ((MR_Box) (ImportedModules0_57)), &conv5_ImportedModules1_59, ((MR_Box) (UnusedIntModules0_58)), &conv4_UnusedIntModules1_60);
    ImportedModules1_59 = ((MR_Word) (conv5_ImportedModules1_59));
    UnusedIntModules1_60 = ((MR_Word) (conv4_UnusedIntModules1_60));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[1]), IntUseMap_17, ((MR_Box) (ImportedModules1_59)), &conv7_ImportedModules2_61, ((MR_Box) (UnusedIntModules1_60)), &conv6_UnusedIntModules2_62);
    ImportedModules2_61 = ((MR_Word) (conv7_ImportedModules2_61));
    UnusedIntModules2_62 = ((MR_Word) (conv6_UnusedIntModules2_62));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[2]), ImpImportMap_18, ((MR_Box) (ImportedModules2_61)), &conv11_ImportedModules3_63, ((MR_Box) (UnusedIntModules2_62)), &conv10_UnusedIntModules3_64);
    ImportedModules3_63 = ((MR_Word) (conv11_ImportedModules3_63));
    UnusedIntModules3_64 = ((MR_Word) (conv10_UnusedIntModules3_64));
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[0]), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[2]), ImpUseMap_19, ((MR_Box) (ImportedModules3_63)), &conv13_ImportedModules_65, ((MR_Box) (UnusedIntModules3_64)), &conv12_UnusedIntModules_66);
    ImportedModules_65 = ((MR_Word) (conv13_ImportedModules_65));
    UnusedIntModules_66 = ((MR_Word) (conv12_UnusedIntModules_66));
    parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(ImportedModules_65, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_92_92);
    parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedIntModules_66, STATE_VARIABLE_Info_92_92, &STATE_VARIABLE_Info_93_93);
    parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_93_93, &Types0_67);
    Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), IntTypeDefnsMer_25, IntTypeDefnsForeign_26);
    IntTypeDefns_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), IntTypeDefnsAbs_24, Var_94);
    Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), ImpTypeDefnsMer_38, ImpTypeDefnsForeign_39);
    ImpTypeDefns_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), ImpTypeDefnsAbs_37, Var_95);
    Var_97 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[1]), IntTypeDefns_68);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[3]), Var_97, ((MR_Box) (Types0_67)), &conv16_Types1_70);
    Types1_70 = ((MR_Word) (conv16_Types1_70));
    Var_100 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[2]), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[2]), ImpTypeDefns_69);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[4]), Var_100, ((MR_Box) (Types1_70)), &conv19_Types_71);
    Types_71 = ((MR_Word) (conv19_Types_71));
    parse_tree__module_qual__mq_info_set_types_3_p_0(Types_71, STATE_VARIABLE_Info_93_93, &STATE_VARIABLE_Info_102_102);
    parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_102_102, &Insts0_72);
    Var_104 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[3]), IntInstDefns_27);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[3]), Var_104, ((MR_Box) (Insts0_72)), &conv21_Insts1_73);
    Insts1_73 = ((MR_Word) (conv21_Insts1_73));
    Var_107 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[4]), ImpInstDefns_40);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[4]), Var_107, ((MR_Box) (Insts1_73)), &conv23_Insts_74);
    Insts_74 = ((MR_Word) (conv23_Insts_74));
    parse_tree__module_qual__mq_info_set_insts_3_p_0(Insts_74, STATE_VARIABLE_Info_102_102, &STATE_VARIABLE_Info_109_109);
    parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_109_109, &Modes0_75);
    Var_111 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[5]), IntModeDefns_28);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[3]), Var_111, ((MR_Box) (Modes0_75)), &conv25_Modes1_76);
    Modes1_76 = ((MR_Word) (conv25_Modes1_76));
    Var_114 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[6]), ImpModeDefns_41);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_mq_id_0), (MR_Word) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_id_set_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[4]), Var_114, ((MR_Box) (Modes1_76)), &conv27_Modes_77);
    Modes_77 = ((MR_Word) (conv27_Modes_77));
    parse_tree__module_qual__mq_info_set_modes_3_p_0(Modes_77, STATE_VARIABLE_Info_109_109, &STATE_VARIABLE_Info_116_116);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[5]), IntTypeClasses_29, ((MR_Box) (STATE_VARIABLE_Info_116_116)), &conv29_STATE_VARIABLE_Info_118_118);
    STATE_VARIABLE_Info_118_118 = ((MR_Word) (conv29_STATE_VARIABLE_Info_118_118));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[6]), ImpTypeClasses_42, ((MR_Box) (STATE_VARIABLE_Info_118_118)), &conv31_STATE_VARIABLE_Info_120_120);
    STATE_VARIABLE_Info_120_120 = ((MR_Word) (conv31_STATE_VARIABLE_Info_120_120));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[7]), IntInstances_30, ((MR_Box) (STATE_VARIABLE_Info_120_120)), &conv33_STATE_VARIABLE_Info_122_122);
    STATE_VARIABLE_Info_122_122 = ((MR_Word) (conv33_STATE_VARIABLE_Info_122_122));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[8]), ImpInstances_43, ((MR_Box) (STATE_VARIABLE_Info_122_122)), &conv35_STATE_VARIABLE_Info_124_124);
    STATE_VARIABLE_Info_124_124 = ((MR_Word) (conv35_STATE_VARIABLE_Info_124_124));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[7]), IntPromises_35, ((MR_Box) (STATE_VARIABLE_Info_124_124)), &conv37_STATE_VARIABLE_Info_126_126);
    STATE_VARIABLE_Info_126_126 = ((MR_Word) (conv37_STATE_VARIABLE_Info_126_126));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[8]), ImpPromises_51, ((MR_Box) (STATE_VARIABLE_Info_126_126)), &conv39_STATE_VARIABLE_Info_79);
    *STATE_VARIABLE_Info_79 = ((MR_Word) (conv39_STATE_VARIABLE_Info_79));
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__int_section_mq_info_3_p_0(
  MR_Word IntSection_4,
  MR_Word * MQSection_5,
  MR_Word * Permissions_6)
{
  {
    MR_Word PermInInt_12;
    MR_Word PermInImp_13;

    if (((MR_tag((MR_Word) IntSection_4)) == (MR_Integer) 1))
    {
      *MQSection_5 = (MR_Word) ((MR_Unsigned) 8U);
      PermInInt_12 = (MR_Word) ((MR_Unsigned) 0U);
      PermInImp_13 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
    }
    else
    {
      MR_Word Locn_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSection_4, (MR_Integer) 1))) >> 2)) & (MR_Integer) 7);
      MR_Word ImportOrUse_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), IntSection_4, (MR_Integer) 1))) & (MR_Integer) 3);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MQSection_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Locn_9));
      }
      switch (ImportOrUse_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            switch (Locn_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
              case (MR_Integer) 3:
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                PermInInt_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]));
                break;
              case (MR_Integer) 0:
                PermInInt_12 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
            PermInImp_13 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
          }
          break;
        case (MR_Integer) 1:
          {
            switch (Locn_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
              case (MR_Integer) 3:
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                PermInInt_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]));
                break;
              case (MR_Integer) 0:
                PermInInt_12 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
            PermInImp_13 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 2:
          {
            PermInInt_12 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[1]));
            PermInImp_13 = (MR_Word) (((MR_Box) ((MR_Integer) 1)));
          }
          break;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Permissions_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PermInInt_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PermInImp_13));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(
  MR_Word SrcSection_4,
  MR_Word * MQSection_5,
  MR_Word * Permissions_6)
{
  {
    MR_Word PermInInt_7;

    switch (SrcSection_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          *MQSection_5 = (MR_Word) ((MR_Unsigned) 4U);
          PermInInt_7 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          *MQSection_5 = (MR_Word) ((MR_Unsigned) 0U);
          PermInInt_7 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__module_qual__collect_mq_info_scalar_common_3[0]));
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Permissions_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PermInInt_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (((MR_Box) ((MR_Integer) 1))));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____int3_role_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__collect_mq_info____Unify____int3_role_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__collect_mq_info____Compare____int3_role_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_section_mq_info_1);
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
