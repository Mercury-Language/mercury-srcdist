/*
** Automatically generated from `recompilation.check.m'
** by the Mercury compiler,
** version rotd-2023-05-21
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


// :- module recompilation.check.
// :- implementation.

/*
INIT mercury__recompilation__check__init
ENDINIT
*/

#include "recompilation.check.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.used_file.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s {
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__SymName_13;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__OldMatchingModuleNames_16;
  MR_bool recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded;
  jmp_buf recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__commit_0;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__TypeCtorInfo_56_56;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__Var_37;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__Var_54;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__ArgX1_57;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__ArgX2_59;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__ArgY2_60;
  MR_Box recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__conv0_Var_54;
};


static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_recomp_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__set_ordlist__pti_set_ordlist_1__plain_recompilation__used_file__type_ctor_info_resolved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct4 recompilation__check____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__set_ordlist__pti_set_ordlist_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_ambiguity_checkables_0_0[5];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_ambiguity_checkables_0_0;

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_ambiguity_checkables_0_0[1];

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_ambiguity_checkables_0[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_ambiguity_checkables_0[1];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_ambiguity_checkables_0[1];

static const MR_VA_TypeInfo_Struct4 recompilation__check____vti_pred_4mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1builtin__type_ctor_info_string_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_functor_match_arity_0_0[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_functor_match_arity_0_1[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_1;

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_2;

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_0[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_1[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_2[1];

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_functor_match_arity_0[3];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_functor_match_arity_0[3];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_functor_match_arity_0[3];

static const MR_EnumFunctorDesc recompilation__check__recompilation__check__enum_functor_desc_maybe_is_inline_submodule_0_0;

static const MR_EnumFunctorDesc recompilation__check__recompilation__check__enum_functor_desc_maybe_is_inline_submodule_0_1;

static const MR_EnumFunctorDescPtr recompilation__check__recompilation__check__enum_ordinal_ordered_maybe_is_inline_submodule_0[2];

static const MR_EnumFunctorDescPtr recompilation__check__recompilation__check__enum_name_ordered_maybe_is_inline_submodule_0[2];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_maybe_is_inline_submodule_0[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_modules_to_recompile_0_1[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_1;

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_0[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_1[1];

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_modules_to_recompile_0[2];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_modules_to_recompile_0[2];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_modules_to_recompile_0[2];

static const MR_FA_TypeInfo_Struct1 recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__check__type_ctor_info_recompile_reason_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompilation_check_info_0_0[9];

static const MR_ConstString recompilation__check__recompilation__check__field_names_recompilation_check_info_0_0[9];

static const MR_DuArgLocn recompilation__check__recompilation__check__field_locns_recompilation_check_info_0_0[9];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompilation_check_info_0_0;

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompilation_check_info_0_0[1];

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompilation_check_info_0[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompilation_check_info_0[1];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompilation_check_info_0[1];

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_0[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_1[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_1;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_2[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_2;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__type_ctor_info_recomp_item_id_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_3[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_3;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__used_file__type_ctor_info_resolved_functor_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_4[4];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_4;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_5[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_5;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_6[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_6;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_7[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_7;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_8[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_8;

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_0[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_1[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_2[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_3[6];

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompile_reason_0[4];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompile_reason_0[9];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompile_reason_0[9];

static const MR_ConstString recompilation__check__recompilation__check__type_class_id_var_names_check_imported_module_int_file_1[1];

static const MR_TypeClassMethod recompilation__check__recompilation__check__type_class_id_method_ids_check_imported_module_int_file_1[5];

static const MR_TypeClassId recompilation__check__recompilation__check__type_class_id_check_imported_module_int_file_1;

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int3__1776__1_2_p_0(
  MR_Word ImpModeDefns_21,
  MR_Word HeadVar__2_34);

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int3__1775__1_2_p_0(
  MR_Word ImpInstDefns_19,
  MR_Word HeadVar__2_30);

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int3__1774__1_2_p_0(
  MR_Word ImpTypeDefns_16,
  MR_Word HeadVar__2_26);

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int2__1751__1_2_p_0(
  MR_Word ImpModeDefns_24,
  MR_Word HeadVar__2_37);

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int2__1750__1_2_p_0(
  MR_Word ImpInstDefns_22,
  MR_Word HeadVar__2_33);

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int1__1727__1_2_p_0(
  MR_Word ImpModeDefns_29,
  MR_Word HeadVar__2_42);

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int1__1726__1_2_p_0(
  MR_Word ImpInstDefns_27,
  MR_Word HeadVar__2_38);

static MR_Word MR_CALL 
recompilation__check__IntroducedFrom__func__check_for_pred_or_func_item_ambiguity_2__1151__1_4_f_0(
  MR_Word ItemType_11,
  MR_Integer Arity_14,
  MR_String Name_20,
  MR_Word LambdaHeadVar__1_39);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(
  MR_Word PT_6,
  MR_Word * VN_7);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_search_mapN_3_3_p_0(
  MR_Word HRMM_4,
  MR_Word ModuleName_5,
  MR_Word * HaveReadModule_6);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(
  MR_Word PT_6,
  MR_Word * VN_7);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_search_mapN_3_3_p_0(
  MR_Word HRMM_4,
  MR_Word ModuleName_5,
  MR_Word * HaveReadModule_6);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(
  MR_Word PT_6,
  MR_Word * VN_7);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_search_mapN_3_3_p_0(
  MR_Word HRMM_4,
  MR_Word ModuleName_5,
  MR_Word * HaveReadModule_6);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(
  MR_Word _PT_6,
  MR_Word * _VN_7);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_search_mapN_3_3_p_0(
  MR_Word HRMM_4,
  MR_Word ModuleName_5,
  MR_Word * HaveReadModule_6);

static void MR_CALL 
recompilation__check____Compare____recompile_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__check____Unify____recompile_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__check____Compare____recompilation_check_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__check____Unify____recompilation_check_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__check____Compare____maybe_is_inline_submodule_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__check____Unify____maybe_is_inline_submodule_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__check____Compare____functor_match_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__check____Unify____functor_match_arity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__check____Compare____ambiguity_checkables_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__check____Unify____ambiguity_checkables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
recompilation__check__cim_get_ambiguity_checkablesN_2_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_3,
  MR_Box HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
recompilation__check__cim_get_version_numbersN_2_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_3,
  MR_Box HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
recompilation__check__cim_record_read_file_intN_7_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_8,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
recompilation__check__cim_read_module_intN_9_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static MR_bool MR_CALL 
recompilation__check__cim_search_mapN_3_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
recompilation__check__write_recompile_reason_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
recompilation__check__write_recompile_reason_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recompilation__check__write_recompile_reason_6_p_0(
  MR_Word Globals_7,
  MR_Word Stream_8,
  MR_Word ThisModuleName_9,
  MR_Word Reason_10);

static MR_Word MR_CALL 
recompilation__check__describe_resolved_functor_3_f_0(
  MR_Word SymName_5,
  MR_Integer Arity_6,
  MR_Word ResolvedFunctor_7);

static MR_Word MR_CALL 
recompilation__check__describe_item_1_f_0(
  MR_Word ItemId_3);

static void MR_CALL 
recompilation__check__check_functor_ambiguity_10_p_0(
  MR_Word RecompAvail_11,
  MR_Word SymName_12,
  MR_Integer Arity_13,
  MR_Word ResolvedCtor_14,
  MR_Word OldModuleQualifier_15,
  MR_Word OldResolvedCtors_16,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_24,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
recompilation__check__check_field_ambiguities_7_p_0(
  MR_Word RecompAvail_8,
  MR_Word ResolvedCtor_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_21,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_7_p_0(
  MR_Word RecompAvail_8,
  MR_Word TypeCtor_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_22,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static MR_Box MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0(
  MR_Word ItemType_11,
  MR_Word RecompAvail_12,
  MR_Word SymName_13,
  MR_Integer Arity_14,
  MR_Word OldModuleQualifier_15,
  MR_Word OldMatchingModuleNames_16,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_31,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_32,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_1_10_p_0(
  MR_Word WithType_11,
  MR_Word ItemType_12,
  MR_Word RecompAvail_13,
  MR_Word SymName_14,
  MR_Integer Arity_15,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_21,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_2_10_p_0(
  MR_Word ItemType_11,
  MR_Word RecompAvail_12,
  MR_Word SymName_13,
  MR_Integer Arity_14,
  MR_Word OldModuleQualifier_15,
  MR_Word OldMatchingModuleName_16,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_27,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_28,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static void MR_CALL 
recompilation__check__check_class_decl_for_ambiguities_8_p_0(
  MR_Word RecompAvail_9,
  MR_Word OldTimestamp_10,
  MR_Word VersionNumbers_11,
  MR_Word Decl_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_29,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_30,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
recompilation__check__check_item_name_version_number_8_p_0(
  MR_Word ModuleName_9,
  MR_Word NewVersionMap_10,
  MR_Word ItemName_11,
  MR_Word UsedVersionNumber_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_18,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
recompilation__check__check_name_arity_version_number_9_p_0(
  MR_Word ModuleName_10,
  MR_Word ItemType_11,
  MR_Word NewVersionMap_12,
  MR_Word NameArity_13,
  MR_Word UsedVersionNumber_14,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_21,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
recompilation__check__require_recompilation_if_not_up_to_date_8_p_0(
  MR_Word RecordedTimestamp_9,
  MR_String TargetFile_10,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_19,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0(
  MR_Word Globals_10,
  MR_Word IsSubModule_11,
  MR_Word FindTargetFiles_12,
  MR_Word FindTimestampFiles_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_56_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_14,
  MR_Word Globals_6,
  MR_Word Stream_7);

static void MR_CALL 
recompilation__check__add_module_to_recompile_3_p_0(
  MR_Word Module_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__check__should_recompile_3_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
recompilation__check__should_recompile_3_9_p_0(
  MR_Word Globals_10,
  MR_Word UsedFile_11,
  MR_Word IsSubModule_12,
  MR_Word FindTargetFiles_13,
  MR_Word * MaybeStoppingReason_14,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static MR_Word MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_97_100_95_109_111_100_117_108_101_95_101_114_114_111_114_95_115_116_111_112_112_105_110_103_95_114_101_97_115_111_110_95_95_91_50_93_95_48_2_f_0(
  MR_String FileName_4);

static void MR_CALL 
recompilation__check__record_read_file_src_7_p_0(
  MR_Word ModuleName_8,
  MR_String FileName_9,
  MR_Word ModuleTimestamp_10,
  MR_Word ParseTree_11,
  MR_Word Errors_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
recompilation__check__check_imported_modules_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
recompilation__check__check_imported_module_intN_10_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_63,
  MR_Word Globals_11,
  MR_Word ImportedModuleName_12,
  MR_Word ModuleTimestamp_13,
  MR_Word MaybeUsedVersionNumbers_14,
  MR_Word HRMM_15,
  MR_Word * MaybeStoppingReason_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0(
  MR_Word ModuleName_9,
  MR_Word OldModuleTimestamp_10,
  MR_Word UsedVersionNumbers_11,
  MR_Word NewVersionNumbers_12,
  MR_Word ParseTreeCheckables_13,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_49,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_53_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
recompilation__check__check_type_defn_info_for_ambiguities_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__check__check_type_defn_info_for_ambiguities_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__check__check_type_defn_info_for_ambiguities_8_p_0(
  MR_Word RecompAvail_9,
  MR_Word OldTimestamp_10,
  MR_Word VersionNumbers_11,
  MR_Word ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_24,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_50_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
recompilation__check__check_typeclass_info_for_ambiguities_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__check__check_typeclass_info_for_ambiguities_8_p_0(
  MR_Word RecompAvail_9,
  MR_Word OldTimestamp_10,
  MR_Word VersionNumbers_11,
  MR_Word ItemTypeClass_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_26,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_11_p_0(
  MR_Word RecompAvail_12,
  MR_Word UsedFileTimestamp_13,
  MR_Word VersionMap_14,
  MR_Word ItemType_15,
  MR_Word SymName_16,
  MR_Integer Arity_17,
  MR_Word * NeedsCheck_18,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_26,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_12_p_0(
  MR_Word NeedsCheck_13,
  MR_Word RecompAvail_14,
  MR_Word OldTimestamp_15,
  MR_Word VersionNumbers_16,
  MR_Word PredOrFunc_17,
  MR_Word SymName_18,
  MR_Word Args_19,
  MR_Word WithType_20,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_41,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_42,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_by_name_8_p_0(
  MR_Word RecompAvail_9,
  MR_Word Name_10,
  MR_Word MatchArity_11,
  MR_Word ResolvedCtor_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_20,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_9_p_0(
  MR_Word RecompAvail_1,
  MR_Word Name_2,
  MR_Word MatchArity_3,
  MR_Word ResolvedCtor_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_6,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__check__record_recompilation_reason_4_p_0(
  MR_Word Reason_5,
  MR_Word * MaybeStoppingReason_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
recompilation__check__check_item_name_version_numbers_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
recompilation__check__check_item_name_version_numbers_7_p_0(
  MR_Word ModuleName_8,
  MR_Word UsedVersionMap_9,
  MR_Word NewVersionMap_10,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_13,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
recompilation__check__check_name_arity_version_numbers_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
recompilation__check__check_name_arity_version_numbers_8_p_0(
  MR_Word ModuleName_9,
  MR_Word ItemType_10,
  MR_Word UsedVersionMap_11,
  MR_Word NewVersionMap_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_16,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
recompilation__check__write_used_file_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__write_used_file_error_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word UsedFileError_9,
  MR_Word Stream_10);

static MR_bool MR_CALL 
recompilation__check____Unify____ambiguity_checkables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____ambiguity_checkables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__check____Unify____find_target_file_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____find_target_file_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__check____Unify____find_timestamp_file_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____find_timestamp_file_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__check____Unify____functor_match_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____functor_match_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__check____Unify____maybe_is_inline_submodule_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____maybe_is_inline_submodule_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__check____Unify____modules_to_recompile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____modules_to_recompile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__check____Unify____recompilation_check_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____recompilation_check_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__check____Unify____recompile_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____recompile_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box recompilation__check_scalar_common_1[65][2];

static /* final */ const MR_Box recompilation__check_scalar_common_2[7][3];

static /* final */ const MR_Box recompilation__check_scalar_common_3[2][6];

static /* final */ const MR_Box recompilation__check_scalar_common_4[3][1];

static /* final */ const MR_Box recompilation__check_scalar_common_5[2][12];

static /* final */ const MR_Box recompilation__check_scalar_common_6[3][11];

static /* final */ const MR_Box recompilation__check_scalar_common_7[4][13];

static /* final */ const MR_Box recompilation__check_scalar_common_8[3][10];

static /* final */ const MR_Box recompilation__check_scalar_common_9[1][9];

static /* final */ const MR_Box recompilation__check_scalar_common_10[1][8];

static /* final */ const MR_Box recompilation__check_scalar_common_11[1][7];

static /* final */ const MR_Box recompilation__check_scalar_common_12[4][5];




static /* final */ const MR_Box recompilation__check_scalar_common_1[65][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_recompilation__check__check_imported_module_int_file__arity1__parse_tree__prog_item__parse_tree_int0__arity0__)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_recompilation__check__check_imported_module_int_file__arity1__parse_tree__prog_item__parse_tree_int1__arity0__)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_recompilation__check__check_imported_module_int_file__arity1__parse_tree__prog_item__parse_tree_int2__arity0__)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0))
  },
  /* row   5 */
  {
    ((MR_Box) (base_typeclass_info_recompilation__check__check_imported_module_int_file__arity1__parse_tree__prog_item__parse_tree_int3__arity0__)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__check_scalar_common_2[1]))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__check_scalar_common_2[3]))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__check_scalar_common_2[5]))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int0_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int1_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int2_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int3_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__check_scalar_common_1[7]))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__check_scalar_common_1[8]))
  },
  /* row  23 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__check_scalar_common_1[6]))
  },
  /* row  24 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row  26 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  27 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  28 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0))
  },
  /* row  29 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0))
  },
  /* row  30 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0))
  },
  /* row  31 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Recompiling module"))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "invalid version number in"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[33])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "file"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not found."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[33])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error reading file"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was modified."))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[33])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an instance for class"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in module"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was added or modified."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[33])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "addition of"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "could cause an ambiguity with"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has changed."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[33])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "output file"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not up to date."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[33])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "an instance for class "))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was removed."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[33])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "body of"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "constructor"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of type"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "field access function"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for constructor"))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check_scalar_common_1[11]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__check_scalar_common_2[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check_scalar_common_1[13]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__check_scalar_common_2[4]))
  },
  /* row   6 */
  {
    ((MR_Box) (&recompilation__check_scalar_common_12[0])),
    ((MR_Box) (recompilation__check__write_recompile_reason_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_3[2][6] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check_scalar_common_1[26])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_4[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 2)) },
};

static /* final */ const MR_Box recompilation__check_scalar_common_5[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_type_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_maybe_is_inline_submodule_0)),
    ((MR_Box) (&recompilation__check____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&recompilation__check____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_6[3][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_recomp_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_7[4][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__set_ordlist__pti_set_ordlist_1__plain_recompilation__used_file__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_type_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_type_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_type_0)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__set_ordlist__pti_set_ordlist_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_8[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_baggage__parse_tree__module_baggage__type_ctor_info_recomp_avail_0)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_10[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_11[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_12[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_name_arity_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__maybe__pti_maybe_1__plain_recompilation__check__type_ctor_info_recompile_reason_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_recomp_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__set_ordlist__pti_set_ordlist_1__plain_recompilation__used_file__type_ctor_info_resolved_functor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&recompilation__check__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__check__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_VA_PseudoTypeInfo_Struct4 recompilation__check____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__set_ordlist__pti_set_ordlist_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&recompilation__check__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&recompilation__check__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&recompilation__check__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&recompilation__check__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&recompilation__check__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&recompilation__check__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&recompilation__check__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_ambiguity_checkables_0_0[5] = {
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_ambiguity_checkables_0_0 = {
  (MR_String) "ambiguity_checkables",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__check__recompilation__check__field_types_ambiguity_checkables_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_ambiguity_checkables_0_0[1] = { &recompilation__check__recompilation__check__du_functor_desc_ambiguity_checkables_0_0 };

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_ambiguity_checkables_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_ambiguity_checkables_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_ambiguity_checkables_0[1] = { &recompilation__check__recompilation__check__du_functor_desc_ambiguity_checkables_0_0 };

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_ambiguity_checkables_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_ambiguity_checkables_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____ambiguity_checkables_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____ambiguity_checkables_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "ambiguity_checkables",
  { recompilation__check__recompilation__check__du_name_ordered_ambiguity_checkables_0 },
  { recompilation__check__recompilation__check__du_ptag_ordered_ambiguity_checkables_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__check__recompilation__check__functor_number_map_ambiguity_checkables_0,

};

static const MR_VA_TypeInfo_Struct4 recompilation__check____vti_pred_4mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1builtin__type_ctor_info_string_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__check__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_find_target_file_names_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__check____Unify____find_target_file_names_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____find_target_file_names_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "find_target_file_names",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__check____vti_pred_4mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1builtin__type_ctor_info_string_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_find_timestamp_file_names_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__check____Unify____find_timestamp_file_names_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____find_timestamp_file_names_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "find_timestamp_file_names",
  { NULL },
  { (MR_PseudoTypeInfo) (&recompilation__check____vti_pred_4mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1builtin__type_ctor_info_string_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_functor_match_arity_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_0 = {
  (MR_String) "match_arity_exact",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__check__recompilation__check__field_types_functor_match_arity_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_functor_match_arity_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_1 = {
  (MR_String) "match_arity_less_than_or_equal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  recompilation__check__recompilation__check__field_types_functor_match_arity_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_2 = {
  (MR_String) "match_arity_any",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_0[1] = { &recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_2 };

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_1[1] = { &recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_0 };

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_2[1] = { &recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_1 };

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_functor_match_arity_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_functor_match_arity_0[3] = {
  &recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_2,
  &recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_0,
  &recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_1
};

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_functor_match_arity_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_functor_match_arity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____functor_match_arity_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____functor_match_arity_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "functor_match_arity",
  { recompilation__check__recompilation__check__du_name_ordered_functor_match_arity_0 },
  { recompilation__check__recompilation__check__du_ptag_ordered_functor_match_arity_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  recompilation__check__recompilation__check__functor_number_map_functor_match_arity_0,

};

static const MR_EnumFunctorDesc recompilation__check__recompilation__check__enum_functor_desc_maybe_is_inline_submodule_0_0 = {
  (MR_String) "is_not_inline_submodule",
  INT32_C(0)
};

static const MR_EnumFunctorDesc recompilation__check__recompilation__check__enum_functor_desc_maybe_is_inline_submodule_0_1 = {
  (MR_String) "is_inline_submodule",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr recompilation__check__recompilation__check__enum_ordinal_ordered_maybe_is_inline_submodule_0[2] = {
  &recompilation__check__recompilation__check__enum_functor_desc_maybe_is_inline_submodule_0_0,
  &recompilation__check__recompilation__check__enum_functor_desc_maybe_is_inline_submodule_0_1
};

static const MR_EnumFunctorDescPtr recompilation__check__recompilation__check__enum_name_ordered_maybe_is_inline_submodule_0[2] = {
  &recompilation__check__recompilation__check__enum_functor_desc_maybe_is_inline_submodule_0_1,
  &recompilation__check__recompilation__check__enum_functor_desc_maybe_is_inline_submodule_0_0
};

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_maybe_is_inline_submodule_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_maybe_is_inline_submodule_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (recompilation__check____Unify____maybe_is_inline_submodule_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____maybe_is_inline_submodule_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "maybe_is_inline_submodule",
  { recompilation__check__recompilation__check__enum_name_ordered_maybe_is_inline_submodule_0 },
  { recompilation__check__recompilation__check__enum_ordinal_ordered_maybe_is_inline_submodule_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  recompilation__check__recompilation__check__functor_number_map_maybe_is_inline_submodule_0,

};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_0 = {
  (MR_String) "all_modules",
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

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_modules_to_recompile_0_1[1] = { (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_1 = {
  (MR_String) "some_modules",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  recompilation__check__recompilation__check__field_types_modules_to_recompile_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_0[1] = { &recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_0 };

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_1[1] = { &recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_1 };

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_modules_to_recompile_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_modules_to_recompile_0[2] = {
  &recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_0,
  &recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_1
};

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_modules_to_recompile_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_modules_to_recompile_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____modules_to_recompile_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____modules_to_recompile_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "modules_to_recompile",
  { recompilation__check__recompilation__check__du_name_ordered_modules_to_recompile_0 },
  { recompilation__check__recompilation__check__du_ptag_ordered_modules_to_recompile_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  recompilation__check__recompilation__check__functor_number_map_modules_to_recompile_0,

};

static const MR_FA_TypeInfo_Struct1 recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0) }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__check__type_ctor_info_recompile_reason_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0) }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompilation_check_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0),
  (MR_PseudoTypeInfo) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_used_items_0),
  (MR_PseudoTypeInfo) (&recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_recomp_item_name_0),
  (MR_PseudoTypeInfo) (&recompilation__check__recompilation__check__type_ctor_info_modules_to_recompile_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1recompilation__check__type_ctor_info_recompile_reason_0)
};

static const MR_ConstString recompilation__check__recompilation__check__field_names_recompilation_check_info_0_0[9] = {
  (MR_String) "rci_module_name",
  (MR_String) "rci_is_inline_sub_module",
  (MR_String) "rci_sub_modules",
  (MR_String) "rci_have_read_module_maps",
  (MR_String) "rci_used_items",
  (MR_String) "rci_used_typeclasses",
  (MR_String) "rci_modules_to_recompile",
  (MR_String) "rci_collect_all_reasons",
  (MR_String) "rci_recompilation_reasons"
};

static const MR_DuArgLocn recompilation__check__recompilation__check__field_locns_recompilation_check_info_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompilation_check_info_0_0 = {
  (MR_String) "recompilation_check_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__check__recompilation__check__field_types_recompilation_check_info_0_0,
  recompilation__check__recompilation__check__field_names_recompilation_check_info_0_0,
  recompilation__check__recompilation__check__field_locns_recompilation_check_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompilation_check_info_0_0[1] = { &recompilation__check__recompilation__check__du_functor_desc_recompilation_check_info_0_0 };

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompilation_check_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_recompilation_check_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompilation_check_info_0[1] = { &recompilation__check__recompilation__check__du_functor_desc_recompilation_check_info_0_0 };

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompilation_check_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____recompilation_check_info_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____recompilation_check_info_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "recompilation_check_info",
  { recompilation__check__recompilation__check__du_name_ordered_recompilation_check_info_0 },
  { recompilation__check__recompilation__check__du_ptag_ordered_recompilation_check_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  recompilation__check__recompilation__check__functor_number_map_recompilation_check_info_0,

};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_0 = {
  (MR_String) "recompile_for_file_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_1 = {
  (MR_String) "recompile_for_output_file_not_up_to_date",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(1),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_2 = {
  (MR_String) "recompile_for_module_changed",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(2),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__type_ctor_info_recomp_item_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0) }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_3[2] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1recompilation__type_ctor_info_recomp_item_id_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_3 = {
  (MR_String) "recompile_for_item_ambiguity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(3),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__used_file__type_ctor_info_resolved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0) }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_4[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1recompilation__used_file__type_ctor_info_resolved_functor_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_4 = {
  (MR_String) "recompile_for_functor_ambiguity",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(4),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_5[1] = { (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0) };

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_5 = {
  (MR_String) "recompile_for_changed_item",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(5),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_6[1] = { (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0) };

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_6 = {
  (MR_String) "recompile_for_removed_item",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(6),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_7[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_7 = {
  (MR_String) "recompile_for_changed_or_added_instance",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_8[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_8 = {
  (MR_String) "recompile_for_removed_instance",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_0[1] = { &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_5 };

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_1[1] = { &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_6 };

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_2[1] = { &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_0 };

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_3[6] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_1,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_2,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_3,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_4,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_7,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_8
};

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompile_reason_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompile_reason_0[9] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_5,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_7,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_0,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_4,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_3,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_2,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_1,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_8,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_6
};

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompile_reason_0[9] = {
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 1,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____recompile_reason_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____recompile_reason_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "recompile_reason",
  { recompilation__check__recompilation__check__du_name_ordered_recompile_reason_0 },
  { recompilation__check__recompilation__check__du_ptag_ordered_recompile_reason_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  recompilation__check__recompilation__check__functor_number_map_recompile_reason_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_recompilation__check__check_imported_module_int_file__arity1__parse_tree__prog_item__parse_tree_int3__arity0__[10] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 5)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_recompilation__check__check_imported_module_int_file__arity1__parse_tree__prog_item__parse_tree_int2__arity0__[10] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 5)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_recompilation__check__check_imported_module_int_file__arity1__parse_tree__prog_item__parse_tree_int1__arity0__[10] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 5)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_recompilation__check__check_imported_module_int_file__arity1__parse_tree__prog_item__parse_tree_int0__arity0__[10] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 5)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001)),
  ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001))
};

static const MR_ConstString recompilation__check__recompilation__check__type_class_id_var_names_check_imported_module_int_file_1[1] = { (MR_String) "PT" };

static const MR_TypeClassMethod recompilation__check__recompilation__check__type_class_id_method_ids_check_imported_module_int_file_1[5] = {
  {
    (MR_String) "cim_search_mapN",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "cim_read_module_intN",
    (MR_Integer) 9,
    MR_PREDICATE
  },
  {
    (MR_String) "cim_record_read_file_intN",
    (MR_Integer) 7,
    MR_PREDICATE
  },
  {
    (MR_String) "cim_get_version_numbersN",
    (MR_Integer) 2,
    MR_PREDICATE
  },
  {
    (MR_String) "cim_get_ambiguity_checkablesN",
    (MR_Integer) 2,
    MR_PREDICATE
  }
};

static const MR_TypeClassId recompilation__check__recompilation__check__type_class_id_check_imported_module_int_file_1 = {
  (MR_String) "recompilation.check",
  (MR_String) "check_imported_module_int_file",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 5,
  recompilation__check__recompilation__check__type_class_id_var_names_check_imported_module_int_file_1,
  recompilation__check__recompilation__check__type_class_id_method_ids_check_imported_module_int_file_1
};

const MR_TypeClassDeclStruct recompilation__check__recompilation__check__type_class_decl_check_imported_module_int_file_1 = {
  &recompilation__check__recompilation__check__type_class_id_check_imported_module_int_file_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int3__1776__1_2_p_0(
  MR_Word ImpModeDefns_21,
  MR_Word HeadVar__2_34)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[22]), ((MR_Box) (ImpModeDefns_21)), ((MR_Box) (HeadVar__2_34)));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int3__1775__1_2_p_0(
  MR_Word ImpInstDefns_19,
  MR_Word HeadVar__2_30)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[21]), ((MR_Box) (ImpInstDefns_19)), ((MR_Box) (HeadVar__2_30)));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int3__1774__1_2_p_0(
  MR_Word ImpTypeDefns_16,
  MR_Word HeadVar__2_26)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[23]), ((MR_Box) (ImpTypeDefns_16)), ((MR_Box) (HeadVar__2_26)));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int2__1751__1_2_p_0(
  MR_Word ImpModeDefns_24,
  MR_Word HeadVar__2_37)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[22]), ((MR_Box) (ImpModeDefns_24)), ((MR_Box) (HeadVar__2_37)));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int2__1750__1_2_p_0(
  MR_Word ImpInstDefns_22,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[21]), ((MR_Box) (ImpInstDefns_22)), ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int1__1727__1_2_p_0(
  MR_Word ImpModeDefns_29,
  MR_Word HeadVar__2_42)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[22]), ((MR_Box) (ImpModeDefns_29)), ((MR_Box) (HeadVar__2_42)));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int1__1726__1_2_p_0(
  MR_Word ImpInstDefns_27,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[21]), ((MR_Box) (ImpInstDefns_27)), ((MR_Box) (HeadVar__2_38)));
  return succeeded;
}

static MR_Word MR_CALL 
recompilation__check__IntroducedFrom__func__check_for_pred_or_func_item_ambiguity_2__1151__1_4_f_0(
  MR_Word ItemType_11,
  MR_Integer Arity_14,
  MR_String Name_20,
  MR_Word LambdaHeadVar__1_39)
{
  MR_Word LambdaHeadVar__2_40;
  MR_Word OldMatchingName_29;
  MR_Word Var_41;
  MR_Word OldMatchingModule_50 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_39, (MR_Integer) 1))));

  {
    OldMatchingName_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, OldMatchingName_29, 0) = ((MR_Box) (OldMatchingModule_50));
    MR_hl_field(1, OldMatchingName_29, 1) = ((MR_Box) (Name_20));
  }
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (OldMatchingName_29));
    MR_hl_field(0, Var_41, 1) = ((MR_Box) (Arity_14));
  }
  {
    LambdaHeadVar__2_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_40, 0) = (MR_Box) ((MR_Unsigned) (ItemType_11));
    MR_hl_field(0, LambdaHeadVar__2_40, 1) = ((MR_Box) (Var_41));
  }
  return LambdaHeadVar__2_40;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Word TypeCtorCheckedMap_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
  MR_Word InstCtorCheckedMap_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
  MR_Word ModeCtorCheckedMap_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
  MR_Word IntTypeClasses_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
  MR_Word IntPredDecls_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
  MR_Word ImpTypeClasses_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 16))));
  MR_Word ImpPredDecls_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 18))));
  MR_Word IntTypeDefns_25;
  MR_Word ImpTypeDefns_26;
  MR_Word IntInstDefns_28;
  MR_Word ImpInstDefns_29;
  MR_Word IntModeDefns_30;
  MR_Word ImpModeDefns_31;
  MR_Word ItemTypeDefns_32;
  MR_Word ItemInstDefns_33;
  MR_Word ItemModeDefns_34;
  MR_Word ItemTypeClasses_35;
  MR_Word ItemPredDecls_36;
  MR_Word _ImpForeignEnums_27;

  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_10, &IntTypeDefns_25, &ImpTypeDefns_26, &_ImpForeignEnums_27);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_11, &IntInstDefns_28, &ImpInstDefns_29);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_12, &IntModeDefns_30, &ImpModeDefns_31);
  ItemTypeDefns_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&recompilation__check_scalar_common_1[6]), IntTypeDefns_25, ImpTypeDefns_26);
  ItemInstDefns_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&recompilation__check_scalar_common_1[7]), IntInstDefns_28, ImpInstDefns_29);
  ItemModeDefns_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&recompilation__check_scalar_common_1[8]), IntModeDefns_30, ImpModeDefns_31);
  ItemTypeClasses_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_13, ImpTypeClasses_19);
  ItemPredDecls_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntPredDecls_15, ImpPredDecls_21);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ItemTypeDefns_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (ItemInstDefns_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (ItemModeDefns_34));
    MR_hl_field(0, base, 3) = ((MR_Box) (ItemTypeClasses_35));
    MR_hl_field(0, base, 4) = ((MR_Box) (ItemPredDecls_36));
  }
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(
  MR_Word PT_6,
  MR_Word * VN_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, PT_6, (MR_Integer) 2))));

  succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *VN_7 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_Word Timestamp_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word HaveReadModuleMaps0_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 3))));
  MR_Word HRMM0_12 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_11, (MR_Integer) 2))));
  MR_Word ReadResult_13;
  MR_Word HRMM_14;
  MR_Word HaveReadModuleMaps_15;
  MR_Word Var_16;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;

  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Timestamp_9));
  }
  {
    ReadResult_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ReadResult_13, 0) = ((MR_Box) (HeadVar__2_2));
    MR_hl_field(0, ReadResult_13, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, ReadResult_13, 2) = ((MR_Box) (HeadVar__4_4));
    MR_hl_field(0, ReadResult_13, 3) = ((MR_Box) (HeadVar__5_5));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[16]), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (ReadResult_13)), HRMM0_12, &HRMM_14);
  Var_32 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_11, (MR_Integer) 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_11, (MR_Integer) 1))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_11, (MR_Integer) 3))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_11, (MR_Integer) 4))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_11, (MR_Integer) 5))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_11, (MR_Integer) 6))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_11, (MR_Integer) 7))));
  {
    HaveReadModuleMaps_15 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HaveReadModuleMaps_15, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, HaveReadModuleMaps_15, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, HaveReadModuleMaps_15, 2) = ((MR_Box) (HRMM_14));
    MR_hl_field(0, HaveReadModuleMaps_15, 3) = ((MR_Box) (Var_35));
    MR_hl_field(0, HaveReadModuleMaps_15, 4) = ((MR_Box) (Var_36));
    MR_hl_field(0, HaveReadModuleMaps_15, 5) = ((MR_Box) (Var_37));
    MR_hl_field(0, HaveReadModuleMaps_15, 6) = ((MR_Box) (Var_38));
    MR_hl_field(0, HaveReadModuleMaps_15, 7) = ((MR_Box) (Var_39));
  }
  Var_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0))));
  Var_41 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 2))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 4))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 5))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 6))));
  Var_47 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 7))) & (MR_Integer) 1);
  Var_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_41));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 3) = ((MR_Box) (HaveReadModuleMaps_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (Var_47));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_48));
  }
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  parse_tree__read_modules__read_module_int0_no_stream_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7);
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_search_mapN_3_3_p_0(
  MR_Word HRMM_4,
  MR_Word ModuleName_5,
  MR_Word * HaveReadModule_6)
{
  MR_bool succeeded;
  MR_Box conv0_HaveReadModule_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[16]), HRMM_4, ((MR_Box) (ModuleName_5)), &conv0_HaveReadModule_6);
  if (succeeded)
  {
    *HaveReadModule_6 = ((MR_Word) (conv0_HaveReadModule_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int1__1727__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int1__1726__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeDefnCheckedMap_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
  MR_Word InstDefnCheckedMap_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
  MR_Word ModeDefnCheckedMap_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
  MR_Word IntTypeClasses_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
  MR_Word ImpTypeClasses_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 17))));
  MR_Word IntTypeDefns_20;
  MR_Word ImpTypeDefns_21;
  MR_Word ImpInstDefns_23;
  MR_Word ImpModeDefns_24;
  MR_Word ItemTypeDefns_25;
  MR_Word ItemInstDefns_26;
  MR_Word ItemModeDefns_27;
  MR_Word ItemTypeClasses_28;
  MR_Word ItemPredDecls_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
  MR_Word Var_30;
  MR_Word Var_34;
  MR_Word _ImpForeignEnums_22;

  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeDefnCheckedMap_10, &IntTypeDefns_20, &ImpTypeDefns_21, &_ImpForeignEnums_22);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstDefnCheckedMap_11, &ItemInstDefns_26, &ImpInstDefns_23);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeDefnCheckedMap_12, &ItemModeDefns_27, &ImpModeDefns_24);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&recompilation__check_scalar_common_12[2]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (ImpInstDefns_23));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140recompilation.check.get_ambiguity_checkables_int1\'/2", (MR_String) "ImpInstDefns != []");
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&recompilation__check_scalar_common_12[3]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_2));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (ImpModeDefns_24));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_34, (MR_String) "predicate \140recompilation.check.get_ambiguity_checkables_int1\'/2", (MR_String) "ImpModeDefns != []");
  ItemTypeDefns_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&recompilation__check_scalar_common_1[6]), IntTypeDefns_20, ImpTypeDefns_21);
  ItemTypeClasses_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntTypeClasses_13, ImpTypeClasses_19);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ItemTypeDefns_25));
    MR_hl_field(0, base, 1) = ((MR_Box) (ItemInstDefns_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (ItemModeDefns_27));
    MR_hl_field(0, base, 3) = ((MR_Box) (ItemTypeClasses_28));
    MR_hl_field(0, base, 4) = ((MR_Box) (ItemPredDecls_29));
  }
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(
  MR_Word PT_6,
  MR_Word * VN_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, PT_6, (MR_Integer) 2))));

  succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *VN_7 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_Word Timestamp_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word HaveReadModuleMaps1_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 3))));
  MR_Word HRMM1_12 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps1_11, (MR_Integer) 3))));
  MR_Word ReadResult_13;
  MR_Word HRMM_14;
  MR_Word HaveReadModuleMaps_15;
  MR_Word Var_16;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;

  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Timestamp_9));
  }
  {
    ReadResult_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ReadResult_13, 0) = ((MR_Box) (HeadVar__2_2));
    MR_hl_field(0, ReadResult_13, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, ReadResult_13, 2) = ((MR_Box) (HeadVar__4_4));
    MR_hl_field(0, ReadResult_13, 3) = ((MR_Box) (HeadVar__5_5));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[17]), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (ReadResult_13)), HRMM1_12, &HRMM_14);
  Var_32 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps1_11, (MR_Integer) 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps1_11, (MR_Integer) 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps1_11, (MR_Integer) 2))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps1_11, (MR_Integer) 4))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps1_11, (MR_Integer) 5))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps1_11, (MR_Integer) 6))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps1_11, (MR_Integer) 7))));
  {
    HaveReadModuleMaps_15 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HaveReadModuleMaps_15, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, HaveReadModuleMaps_15, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, HaveReadModuleMaps_15, 2) = ((MR_Box) (Var_34));
    MR_hl_field(0, HaveReadModuleMaps_15, 3) = ((MR_Box) (HRMM_14));
    MR_hl_field(0, HaveReadModuleMaps_15, 4) = ((MR_Box) (Var_36));
    MR_hl_field(0, HaveReadModuleMaps_15, 5) = ((MR_Box) (Var_37));
    MR_hl_field(0, HaveReadModuleMaps_15, 6) = ((MR_Box) (Var_38));
    MR_hl_field(0, HaveReadModuleMaps_15, 7) = ((MR_Box) (Var_39));
  }
  Var_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0))));
  Var_41 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 2))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 4))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 5))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 6))));
  Var_47 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 7))) & (MR_Integer) 1);
  Var_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_41));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 3) = ((MR_Box) (HaveReadModuleMaps_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (Var_47));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_48));
  }
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  parse_tree__read_modules__read_module_int1_no_stream_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7);
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_search_mapN_3_3_p_0(
  MR_Word HRMM_4,
  MR_Word ModuleName_5,
  MR_Word * HaveReadModule_6)
{
  MR_bool succeeded;
  MR_Box conv0_HaveReadModule_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[17]), HRMM_4, ((MR_Box) (ModuleName_5)), &conv0_HaveReadModule_6);
  if (succeeded)
  {
    *HaveReadModule_6 = ((MR_Word) (conv0_HaveReadModule_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int2__1751__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int2__1750__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeDefnCheckedMap_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
  MR_Word InstDefnCheckedMap_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
  MR_Word ModeDefnCheckedMap_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
  MR_Word IntTypeDefns_15;
  MR_Word ImpTypeDefns_16;
  MR_Word ImpInstDefns_18;
  MR_Word ImpModeDefns_19;
  MR_Word ItemTypeDefns_20;
  MR_Word ItemInstDefns_21;
  MR_Word ItemModeDefns_22;
  MR_Word ItemTypeClasses_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
  MR_Word Var_25;
  MR_Word Var_29;
  MR_Word _ImpForeignEnums_17;

  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeDefnCheckedMap_10, &IntTypeDefns_15, &ImpTypeDefns_16, &_ImpForeignEnums_17);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstDefnCheckedMap_11, &ItemInstDefns_21, &ImpInstDefns_18);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeDefnCheckedMap_12, &ItemModeDefns_22, &ImpModeDefns_19);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&recompilation__check_scalar_common_12[2]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (ImpInstDefns_18));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140recompilation.check.get_ambiguity_checkables_int2\'/2", (MR_String) "ImpInstDefns != []");
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&recompilation__check_scalar_common_12[3]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_2));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (ImpModeDefns_19));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140recompilation.check.get_ambiguity_checkables_int2\'/2", (MR_String) "ImpModeDefns != []");
  ItemTypeDefns_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&recompilation__check_scalar_common_1[6]), IntTypeDefns_15, ImpTypeDefns_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ItemTypeDefns_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (ItemInstDefns_21));
    MR_hl_field(0, base, 2) = ((MR_Box) (ItemModeDefns_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (ItemTypeClasses_23));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(
  MR_Word PT_6,
  MR_Word * VN_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, PT_6, (MR_Integer) 2))));

  succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *VN_7 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_Word Timestamp_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word HaveReadModuleMaps2_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 3))));
  MR_Word HRMM2_12 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps2_11, (MR_Integer) 4))));
  MR_Word ReadResult_13;
  MR_Word HRMM_14;
  MR_Word HaveReadModuleMaps_15;
  MR_Word Var_16;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;

  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Timestamp_9));
  }
  {
    ReadResult_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ReadResult_13, 0) = ((MR_Box) (HeadVar__2_2));
    MR_hl_field(0, ReadResult_13, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, ReadResult_13, 2) = ((MR_Box) (HeadVar__4_4));
    MR_hl_field(0, ReadResult_13, 3) = ((MR_Box) (HeadVar__5_5));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[18]), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (ReadResult_13)), HRMM2_12, &HRMM_14);
  Var_32 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps2_11, (MR_Integer) 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps2_11, (MR_Integer) 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps2_11, (MR_Integer) 2))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps2_11, (MR_Integer) 3))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps2_11, (MR_Integer) 5))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps2_11, (MR_Integer) 6))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps2_11, (MR_Integer) 7))));
  {
    HaveReadModuleMaps_15 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HaveReadModuleMaps_15, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, HaveReadModuleMaps_15, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, HaveReadModuleMaps_15, 2) = ((MR_Box) (Var_34));
    MR_hl_field(0, HaveReadModuleMaps_15, 3) = ((MR_Box) (Var_35));
    MR_hl_field(0, HaveReadModuleMaps_15, 4) = ((MR_Box) (HRMM_14));
    MR_hl_field(0, HaveReadModuleMaps_15, 5) = ((MR_Box) (Var_37));
    MR_hl_field(0, HaveReadModuleMaps_15, 6) = ((MR_Box) (Var_38));
    MR_hl_field(0, HaveReadModuleMaps_15, 7) = ((MR_Box) (Var_39));
  }
  Var_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0))));
  Var_41 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 2))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 4))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 5))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 6))));
  Var_47 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 7))) & (MR_Integer) 1);
  Var_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_41));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 3) = ((MR_Box) (HaveReadModuleMaps_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (Var_47));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_48));
  }
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  parse_tree__read_modules__read_module_int2_no_stream_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7);
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_search_mapN_3_3_p_0(
  MR_Word HRMM_4,
  MR_Word ModuleName_5,
  MR_Word * HaveReadModule_6)
{
  MR_bool succeeded;
  MR_Box conv0_HaveReadModule_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[18]), HRMM_4, ((MR_Box) (ModuleName_5)), &conv0_HaveReadModule_6);
  if (succeeded)
  {
    *HaveReadModule_6 = ((MR_Word) (conv0_HaveReadModule_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int3__1776__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int3__1775__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = recompilation__check__IntroducedFrom__pred__get_ambiguity_checkables_int3__1774__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeCtorCheckedMap_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
  MR_Word InstCtorCheckedMap_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
  MR_Word ModeCtorCheckedMap_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
  MR_Word IntTypeClasses_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
  MR_Word IntTypeDefns_13;
  MR_Word ImpTypeDefns_14;
  MR_Word IntInstDefns_16;
  MR_Word ImpInstDefns_17;
  MR_Word IntModeDefns_18;
  MR_Word ImpModeDefns_19;
  MR_Word Var_21;
  MR_Word Var_25;
  MR_Word Var_29;
  MR_Word _ImpForeignEnums_15;

  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_7, &IntTypeDefns_13, &ImpTypeDefns_14, &_ImpForeignEnums_15);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_8, &IntInstDefns_16, &ImpInstDefns_17);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_9, &IntModeDefns_18, &ImpModeDefns_19);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&recompilation__check_scalar_common_12[1]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ImpTypeDefns_14));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_21, (MR_String) "predicate \140recompilation.check.get_ambiguity_checkables_int3\'/2", (MR_String) "ImpTypeDefns != []");
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&recompilation__check_scalar_common_12[2]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (ImpInstDefns_17));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140recompilation.check.get_ambiguity_checkables_int3\'/2", (MR_String) "ImpInstDefns != []");
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&recompilation__check_scalar_common_12[3]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_3));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (ImpModeDefns_19));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140recompilation.check.get_ambiguity_checkables_int3\'/2", (MR_String) "ImpModeDefns != []");
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (IntTypeDefns_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (IntInstDefns_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (IntModeDefns_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (IntTypeClasses_10));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(
  MR_Word _PT_6,
  MR_Word * _VN_7)
{
  return MR_FALSE;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_Word Timestamp_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word HaveReadModuleMaps3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 3))));
  MR_Word HRMM3_12 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps3_11, (MR_Integer) 5))));
  MR_Word ReadResult_13;
  MR_Word HRMM_14;
  MR_Word HaveReadModuleMaps_15;
  MR_Word Var_16;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;

  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Timestamp_9));
  }
  {
    ReadResult_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ReadResult_13, 0) = ((MR_Box) (HeadVar__2_2));
    MR_hl_field(0, ReadResult_13, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, ReadResult_13, 2) = ((MR_Box) (HeadVar__4_4));
    MR_hl_field(0, ReadResult_13, 3) = ((MR_Box) (HeadVar__5_5));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[19]), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (ReadResult_13)), HRMM3_12, &HRMM_14);
  Var_32 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps3_11, (MR_Integer) 0))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps3_11, (MR_Integer) 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps3_11, (MR_Integer) 2))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps3_11, (MR_Integer) 3))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps3_11, (MR_Integer) 4))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps3_11, (MR_Integer) 6))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps3_11, (MR_Integer) 7))));
  {
    HaveReadModuleMaps_15 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HaveReadModuleMaps_15, 0) = ((MR_Box) (Var_32));
    MR_hl_field(0, HaveReadModuleMaps_15, 1) = ((MR_Box) (Var_33));
    MR_hl_field(0, HaveReadModuleMaps_15, 2) = ((MR_Box) (Var_34));
    MR_hl_field(0, HaveReadModuleMaps_15, 3) = ((MR_Box) (Var_35));
    MR_hl_field(0, HaveReadModuleMaps_15, 4) = ((MR_Box) (Var_36));
    MR_hl_field(0, HaveReadModuleMaps_15, 5) = ((MR_Box) (HRMM_14));
    MR_hl_field(0, HaveReadModuleMaps_15, 6) = ((MR_Box) (Var_38));
    MR_hl_field(0, HaveReadModuleMaps_15, 7) = ((MR_Box) (Var_39));
  }
  Var_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0))));
  Var_41 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 2))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 4))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 5))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 6))));
  Var_47 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 7))) & (MR_Integer) 1);
  Var_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__7_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_41));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 3) = ((MR_Box) (HaveReadModuleMaps_15));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (Var_47));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_48));
  }
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  parse_tree__read_modules__read_module_int3_no_stream_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7);
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_search_mapN_3_3_p_0(
  MR_Word HRMM_4,
  MR_Word ModuleName_5,
  MR_Word * HaveReadModule_6)
{
  MR_bool succeeded;
  MR_Box conv0_HaveReadModule_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[19]), HRMM_4, ((MR_Box) (ModuleName_5)), &conv0_HaveReadModule_6);
  if (succeeded)
  {
    *HaveReadModule_6 = ((MR_Word) (conv0_HaveReadModule_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____recompile_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_299 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_300 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_299 == CastY_300);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_317 = (MR_Word) ((MR_Word) (HeadVar__2_2));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_195 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                recompilation____Compare____recomp_item_id_0_0(HeadVar__1_1, Var_317, ArgY1_195);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_332 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_222 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                recompilation____Compare____recomp_item_id_0_0(HeadVar__1_1, Var_332, ArgY1_222);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_320 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_321 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_321, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[20]), HeadVar__1_1, ((MR_Box) (Var_320)), ((MR_Box) (ArgY2_8)));
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_329 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String ArgY1_43 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_329, ArgY1_43);
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_328 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String ArgY1_70 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_328, ArgY1_70);
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_326 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_327 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgY1_100 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_103 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_101;

                        recompilation____Compare____recomp_item_id_0_0(&SubResult1_101, Var_327, ArgY1_100);
                        succeeded = (SubResult1_101 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_101;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[31]), HeadVar__1_1, ((MR_Box) (Var_326)), ((MR_Box) (ArgY2_103)));
                      }
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_322 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
              MR_Word Var_323 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer Var_324 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_325 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ArgY1_147 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_150 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word ArgY3_153 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                        MR_Word ArgY4_156 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))));
                        MR_Word SubResult1_148;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_148, Var_325, ArgY1_147);
                        succeeded = (SubResult1_148 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_148;
                        else
                        {
                          MR_Word SubResult2_151;

                          succeeded = (Var_324 < ArgY2_150);
                          if (succeeded)
                          {
                            SubResult2_151 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_324 > ArgY2_150);
                            if (succeeded)
                            {
                              SubResult2_151 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult2_151 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_151;
                          else
                          {
                            MR_Word SubResult3_154;

                            recompilation__used_file____Compare____resolved_functor_0_0(&SubResult3_154, Var_323, ArgY3_153);
                            succeeded = (SubResult3_154 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult3_154;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[30]), HeadVar__1_1, ((MR_Box) (Var_322)), ((MR_Box) (ArgY4_156)));
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_318 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_319 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ArgY1_256 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_259 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_257;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_257, Var_319, ArgY1_256);
                        succeeded = (SubResult1_257 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_257;
                        else
                          recompilation____Compare____recomp_item_name_0_0(HeadVar__1_1, Var_318, ArgY2_259);
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Var_330 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word Var_331 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ArgY1_295 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Word ArgY2_298 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_296;

                        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_296, Var_331, ArgY1_295);
                        succeeded = (SubResult1_296 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_296;
                        else
                          recompilation____Compare____recomp_item_name_0_0(HeadVar__1_1, Var_330, ArgY2_298);
                      }
                      break;
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
recompilation__check____Unify____recompile_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_35 == CastY_36);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_23 = (MR_Word) ((MR_Word) (HeadVar__1_1));
          MR_Word ArgY1_24;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_24 = (MR_Word) ((MR_Word) (HeadVar__2_2));
            succeeded = recompilation____Unify____recomp_item_id_0_0(ArgX1_23, ArgY1_24);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_25 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_26;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_26 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = recompilation____Unify____recomp_item_id_0_0(ArgX1_25, ArgY1_26);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_40_40;
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
            {
              TypeInfo_40_40 = (MR_Word) (&recompilation__check_scalar_common_1[20]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_8;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_45_45;
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_12;
              MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = recompilation____Unify____recomp_item_id_0_0(ArgX1_11, ArgY1_12);
                if (succeeded)
                {
                  TypeInfo_45_45 = (MR_Word) (&recompilation__check_scalar_common_1[31]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeInfo_43_43;
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;
              MR_Integer ArgX2_17 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_18;
              MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_20;
              MR_Word ArgX4_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))));
              MR_Word ArgY4_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_18 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_15, ArgY1_16);
                if (succeeded)
                {
                  succeeded = (ArgX2_17 == ArgY2_18);
                  if (succeeded)
                  {
                    succeeded = recompilation__used_file____Unify____resolved_functor_0_0(ArgX3_19, ArgY3_20);
                    if (succeeded)
                    {
                      TypeInfo_43_43 = (MR_Word) (&recompilation__check_scalar_common_1[30]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX4_21)), ((MR_Box) (ArgY4_22)));
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_28;
              MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_27, ArgY1_28);
                if (succeeded)
                  succeeded = recompilation____Unify____recomp_item_name_0_0(ArgX2_29, ArgY2_30);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_32;
              MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_31, ArgY1_32);
                if (succeeded)
                  succeeded = recompilation____Unify____recomp_item_name_0_0(ArgX2_33, ArgY2_34);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____recompilation_check_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_41 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_42 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_41 < Var_42);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_41 > Var_42);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[27]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__read_modules____Compare____have_read_module_maps_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            recompilation__used_file____Compare____resolved_used_items_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[28]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                recompilation__check____Compare____modules_to_recompile_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;
                  MR_Integer Var_43 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_44 = (MR_Integer) (ArgY8_26);

                  succeeded = (Var_43 < Var_44);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_43 > Var_44);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[29]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____recompilation_check_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_24_24 = (MR_Word) (&recompilation__check_scalar_common_1[27]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = recompilation__used_file____Unify____resolved_used_items_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_27_27 = (MR_Word) (&recompilation__check_scalar_common_1[28]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                succeeded = recompilation__check____Unify____modules_to_recompile_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    TypeInfo_28_28 = (MR_Word) (&recompilation__check_scalar_common_1[29]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
recompilation__check____Compare____modules_to_recompile_0_0(
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
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[27]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
    }
  }
}

MR_bool MR_CALL 
recompilation__check____Unify____modules_to_recompile_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&recompilation__check_scalar_common_1[27]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____maybe_is_inline_submodule_0_0(
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
recompilation__check____Unify____maybe_is_inline_submodule_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____functor_match_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_16 == CastY_17);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_20 < ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_20 > ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_12 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_21 < ArgY1_12);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_21 > ArgY1_12);
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

static MR_bool MR_CALL 
recompilation__check____Unify____functor_match_arity_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
recompilation__check____Compare____find_timestamp_file_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
recompilation__check____Unify____find_timestamp_file_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
recompilation__check____Compare____find_target_file_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
recompilation__check____Unify____find_target_file_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____ambiguity_checkables_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[23]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[21]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[22]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[24]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[25]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____ambiguity_checkables_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[23]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&recompilation__check_scalar_common_1[21]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&recompilation__check_scalar_common_1[22]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&recompilation__check_scalar_common_1[24]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_19_19 = (MR_Word) (&recompilation__check_scalar_common_1[25]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__cim_get_ambiguity_checkablesN_2_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_3,
  MR_Box HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_3, (MR_Integer) 0)), (MR_Integer) 9))));
  MR_Box conv1_HeadVar__2_2;

  func_0(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_3)), HeadVar__1_1, &conv1_HeadVar__2_2);
  *HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
}

static MR_bool MR_CALL 
recompilation__check__cim_get_version_numbersN_2_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_3,
  MR_Box HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_3, (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv1_HeadVar__2_2;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_3)), HeadVar__1_1, &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__cim_record_read_file_intN_7_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_8,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_8, (MR_Integer) 0)), (MR_Integer) 7))));
  MR_Box conv1_HeadVar__7_7;

  func_0(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_8)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), HeadVar__4_4, ((MR_Box) (HeadVar__5_5)), ((MR_Box) (HeadVar__6_6)), &conv1_HeadVar__7_7);
  *HeadVar__7_7 = ((MR_Word) (conv1_HeadVar__7_7));
}

static void MR_CALL 
recompilation__check__cim_read_module_intN_9_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_10, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv2_HeadVar__7_7;
  MR_Box conv1_HeadVar__9_9;

  func_0(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_10)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), ((MR_Box) (HeadVar__4_4)), ((MR_Box) (HeadVar__5_5)), ((MR_Box) (HeadVar__6_6)), &conv2_HeadVar__7_7, ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__9_9);
  *HeadVar__7_7 = ((MR_Word) (conv2_HeadVar__7_7));
}

static MR_bool MR_CALL 
recompilation__check__cim_search_mapN_3_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_4,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_4, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__3_3;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_4)), ((MR_Box) (HeadVar__1_1)), ((MR_Box) (HeadVar__2_2)), &conv1_HeadVar__3_3);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
recompilation__check__write_recompile_reason_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Pieces_4;

  conv1_Pieces_4 = recompilation__check__describe_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Pieces_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
recompilation__check__write_recompile_reason_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_8;

  conv0_Pieces_8 = recompilation__check__describe_resolved_functor_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_8));
  return wrapper_arg_2;
}

static void MR_CALL 
recompilation__check__write_recompile_reason_6_p_0(
  MR_Word Globals_7,
  MR_Word Stream_8,
  MR_Word ThisModuleName_9,
  MR_Word Reason_10)
{
  MR_Word PrefixPieces_12;
  MR_Word Pieces_14;
  MR_Word AllPieces_29;
  MR_Word Spec_30;
  MR_Word Var_35;
  MR_Word Var_36;

  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (ThisModuleName_9));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[35])));
  }
  {
    PrefixPieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrefixPieces_12, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[32])));
    MR_hl_field(1, PrefixPieces_12, 1) = ((MR_Box) (Var_35));
  }
  switch (MR_tag((MR_Word) Reason_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_99;
        MR_Word Item_152 = (MR_Word) ((MR_Word) (Reason_10));

        Var_99 = recompilation__check__describe_item_1_f_0(Item_152);
        Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, (MR_Word) (MR_mkword(1, &recompilation__check_scalar_common_1[44])));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_106;
        MR_Word Item_153 = (MR_Word) (MR_body((MR_Word) (Reason_10), (MR_Integer) 1));

        Var_106 = recompilation__check__describe_item_1_f_0(Item_153);
        Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, (MR_Word) (MR_mkword(1, &recompilation__check_scalar_common_1[59])));
      }
      break;
    case (MR_Integer) 2:
      Pieces_14 = ((MR_Word) ((MR_hl_field(2, Reason_10, (MR_Integer) 1))));
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String FileName_15 = ((MR_String) ((MR_hl_field(3, Reason_10, (MR_Integer) 1))));
            MR_Word Var_45;
            MR_Word Var_46;

            {
              Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_46, 1) = ((MR_Box) (FileName_15));
            }
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
              MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[56])));
            }
            {
              Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[54])));
              MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_45));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_55;
            MR_Word Var_56;
            MR_String FileName_151 = ((MR_String) ((MR_hl_field(3, Reason_10, (MR_Integer) 1))));

            {
              Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_56, 1) = ((MR_Box) (FileName_151));
            }
            {
              Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
              MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[53])));
            }
            {
              Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[39])));
              MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_55));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Item_16 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 1))));
            MR_Word AmbiguousItems_17 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 2))));
            MR_Word ItemPieces_18;
            MR_Word AmbiguousItemPieces_19;
            MR_Word Var_64;
            MR_Word Var_66;
            MR_Word Var_69;
            MR_Word Var_74;

            ItemPieces_18 = recompilation__check__describe_item_1_f_0(Item_16);
            Var_64 = mercury__list__map_2_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0), (MR_Word) (&recompilation__check_scalar_common_1[20]), (MR_Word) (&recompilation__check_scalar_common_2[6]), AmbiguousItems_17);
            AmbiguousItemPieces_19 = parse_tree__error_spec__component_lists_to_pieces_2_f_0((MR_String) "and", Var_64);
            {
              Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[49])));
              MR_hl_field(1, Var_66, 1) = ((MR_Box) (ItemPieces_18));
            }
            Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AmbiguousItemPieces_19, (MR_Word) (MR_mkword(1, &recompilation__check_scalar_common_1[38])));
            Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &recompilation__check_scalar_common_1[51])), Var_74);
            Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_69);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 1))));
            MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(3, Reason_10, (MR_Integer) 2))));
            MR_Word Functor_22 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 3))));
            MR_Word AmbiguousFunctors_23 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 4))));
            MR_Word FunctorPieces_24;
            MR_Word AmbiguousFunctorPieces_25;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_87;
            MR_Word Var_92;

            FunctorPieces_24 = recompilation__check__describe_resolved_functor_3_f_0(SymName_20, Arity_21, Functor_22);
            {
              Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_83, 0) = ((MR_Box) (&recompilation__check_scalar_common_11[0]));
              MR_hl_field(0, Var_83, 1) = ((MR_Box) (recompilation__check__write_recompile_reason_6_p_0_1));
              MR_hl_field(0, Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_83, 3) = ((MR_Box) (SymName_20));
              MR_hl_field(0, Var_83, 4) = ((MR_Box) (Arity_21));
            }
            Var_82 = mercury__list__map_2_f_0((MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0), (MR_Word) (&recompilation__check_scalar_common_1[20]), Var_83, AmbiguousFunctors_23);
            AmbiguousFunctorPieces_25 = parse_tree__error_spec__component_lists_to_pieces_2_f_0((MR_String) "and", Var_82);
            {
              Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_84, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[49])));
              MR_hl_field(1, Var_84, 1) = ((MR_Box) (FunctorPieces_24));
            }
            Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AmbiguousFunctorPieces_25, (MR_Word) (MR_mkword(1, &recompilation__check_scalar_common_1[38])));
            Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &recompilation__check_scalar_common_1[51])), Var_92);
            Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, Var_87);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ModuleName_26 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 1))));
            MR_Word ClassName_27;
            MR_Integer ClassArity_28;
            MR_Word Var_113 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 2))));
            MR_Word Var_116;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_122;
            MR_Word Var_123;

            ClassName_27 = ((MR_Word) ((MR_hl_field(0, Var_113, (MR_Integer) 0))));
            ClassArity_28 = ((MR_Integer) ((MR_hl_field(0, Var_113, (MR_Integer) 1))));
            {
              Var_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_118, 0) = ((MR_Box) (ClassName_27));
              MR_hl_field(0, Var_118, 1) = ((MR_Box) (ClassArity_28));
            }
            {
              Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_117, 1) = ((MR_Box) (Var_118));
            }
            {
              Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_123, 1) = ((MR_Box) (ModuleName_26));
            }
            {
              Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
              MR_hl_field(1, Var_122, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[48])));
            }
            {
              Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[46])));
              MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
            }
            {
              Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
              MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
            }
            {
              Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[45])));
              MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_116));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_130 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 2))));
            MR_Word Var_133;
            MR_Word Var_134;
            MR_Word Var_135;
            MR_Word Var_136;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word ModuleName_154 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 1))));
            MR_Word ClassName_155 = ((MR_Word) ((MR_hl_field(0, Var_130, (MR_Integer) 0))));
            MR_Integer ClassArity_156 = ((MR_Integer) ((MR_hl_field(0, Var_130, (MR_Integer) 1))));

            {
              Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_135, 0) = ((MR_Box) (ClassName_155));
              MR_hl_field(0, Var_135, 1) = ((MR_Box) (ClassArity_156));
            }
            {
              Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, Var_134, 1) = ((MR_Box) (Var_135));
            }
            {
              Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_140, 1) = ((MR_Box) (ModuleName_154));
            }
            {
              Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (Var_140));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[59])));
            }
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[46])));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
            }
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
            }
            {
              Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[57])));
              MR_hl_field(1, Pieces_14, 1) = ((MR_Box) (Var_133));
            }
          }
          break;
      }
      break;
  }
  AllPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_12, Pieces_14);
  {
    Spec_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_30, 0) = ((MR_Box) ((MR_String) "predicate \140recompilation.check.write_recompile_reason\'/6"));
    MR_hl_field(2, Spec_30, 1) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(2, Spec_30, 2) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(2, Spec_30, 3) = ((MR_Box) (AllPieces_29));
  }
  parse_tree__write_error_spec__write_error_spec_5_p_0(Stream_8, Globals_7, Spec_30);
}

static MR_Word MR_CALL 
recompilation__check__describe_resolved_functor_3_f_0(
  MR_Word SymName_5,
  MR_Integer Arity_6,
  MR_Word ResolvedFunctor_7)
{
  MR_Word Pieces_8;

  switch (MR_tag((MR_Word) ResolvedFunctor_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PredOrFunc_10 = ((MR_Unsigned) ((MR_hl_field(0, ResolvedFunctor_7, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, ResolvedFunctor_7, (MR_Integer) 2))));
        MR_Word PredArity_12 = ((MR_Word) ((MR_hl_field(0, ResolvedFunctor_7, (MR_Integer) 3))));
        MR_String Name_13;
        MR_String PFStr_14;
        MR_Integer UserArity_15;
        MR_Word SNA_16;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;

        Name_13 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_5);
        PFStr_14 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_10);
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_10, &Var_22, PredArity_12);
        UserArity_15 = (MR_Integer) (Var_22);
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (ModuleName_11));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (Name_13));
        }
        {
          SNA_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_16, 0) = ((MR_Box) (Var_23));
          MR_hl_field(0, SNA_16, 1) = ((MR_Box) (UserArity_15));
        }
        {
          Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_24, 1) = ((MR_Box) (PFStr_14));
        }
        {
          Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_26, 1) = ((MR_Box) (SNA_16));
        }
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_25));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtor_17 = ((MR_Word) ((MR_hl_field(1, ResolvedFunctor_7, (MR_Integer) 0))));
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word SNA_53;

        {
          SNA_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_53, 0) = ((MR_Box) (SymName_5));
          MR_hl_field(0, SNA_53, 1) = ((MR_Box) (Arity_6));
        }
        {
          Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_31, 1) = ((MR_Box) (SNA_53));
        }
        {
          Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Var_36, 1) = ((MR_Box) (TypeCtor_17));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[62])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
        }
        {
          Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[61])));
          MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_30));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ConsCtor_18 = ((MR_Word) ((MR_hl_field(2, ResolvedFunctor_7, (MR_Integer) 0))));
        MR_Word ConsName_19;
        MR_Integer ConsArity_20;
        MR_Word ConsSNA_21;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word SNA_54;
        MR_Word TypeCtor_55;

        {
          SNA_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_54, 0) = ((MR_Box) (SymName_5));
          MR_hl_field(0, SNA_54, 1) = ((MR_Box) (Arity_6));
        }
        ConsName_19 = ((MR_Word) ((MR_hl_field(0, ConsCtor_18, (MR_Integer) 0))));
        ConsArity_20 = ((MR_Integer) ((MR_hl_field(0, ConsCtor_18, (MR_Integer) 1))));
        TypeCtor_55 = ((MR_Word) ((MR_hl_field(0, ConsCtor_18, (MR_Integer) 2))));
        {
          ConsSNA_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ConsSNA_21, 0) = ((MR_Box) (ConsName_19));
          MR_hl_field(0, ConsSNA_21, 1) = ((MR_Box) (ConsArity_20));
        }
        {
          Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_41, 1) = ((MR_Box) (SNA_54));
        }
        {
          Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(3, Var_46, 1) = ((MR_Box) (ConsSNA_21));
        }
        {
          Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 17U));
          MR_hl_field(3, Var_51, 1) = ((MR_Box) (TypeCtor_55));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[62])));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[64])));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
        }
        {
          Pieces_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_8, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[63])));
          MR_hl_field(1, Pieces_8, 1) = ((MR_Box) (Var_40));
        }
      }
      break;
  }
  return Pieces_8;
}

static MR_Word MR_CALL 
recompilation__check__describe_item_1_f_0(
  MR_Word ItemId_3)
{
  MR_bool succeeded;
  MR_Word Pieces_4;
  MR_Word ItemType0_5 = ((MR_Unsigned) ((MR_hl_field(0, ItemId_3, (MR_Integer) 0))) & (MR_Integer) 15);
  MR_Word ItemName_6 = ((MR_Word) ((MR_hl_field(0, ItemId_3, (MR_Integer) 1))));
  MR_Word ItemPieces_9;
  MR_Word SymName_10;
  MR_Integer Arity_11;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word ItemType1_7;

  succeeded = (ItemType0_5 == (MR_Integer) 1);
  if (succeeded)
  {
    ItemType1_7 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String ItemTypeStr_8;
    MR_Word Var_14;
    MR_Word Var_15;

    recompilation__string_to_recomp_item_type_2_p_1(&ItemTypeStr_8, ItemType1_7);
    {
      Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_15, 1) = ((MR_Box) (ItemTypeStr_8));
    }
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ItemPieces_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ItemPieces_9, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[60])));
      MR_hl_field(1, ItemPieces_9, 1) = ((MR_Box) (Var_14));
    }
  }
  else
  {
    MR_Word Var_17;
    MR_String ItemTypeStr_23;

    recompilation__string_to_recomp_item_type_2_p_1(&ItemTypeStr_23, ItemType0_5);
    {
      Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_17, 1) = ((MR_Box) (ItemTypeStr_23));
    }
    {
      ItemPieces_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ItemPieces_9, 0) = ((MR_Box) (Var_17));
      MR_hl_field(1, ItemPieces_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  SymName_10 = ((MR_Word) ((MR_hl_field(0, ItemName_6, (MR_Integer) 0))));
  Arity_11 = ((MR_Integer) ((MR_hl_field(0, ItemName_6, (MR_Integer) 1))));
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (Arity_11));
  }
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ItemPieces_9, Var_19);
  return Pieces_4;
}

static void MR_CALL 
recompilation__check__check_functor_ambiguity_10_p_0(
  MR_Word RecompAvail_11,
  MR_Word SymName_12,
  MR_Integer Arity_13,
  MR_Word ResolvedCtor_14,
  MR_Word OldModuleQualifier_15,
  MR_Word OldResolvedCtors_16,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_24,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_MaybeStoppingReason_0_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_28;

    switch (RecompAvail_11) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 4:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OldModuleQualifier_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_28 = ((MR_String) ((MR_hl_field(0, OldModuleQualifier_15, (MR_Integer) 0))));
        succeeded = (strcmp(Var_28, (MR_String) "") == 0);
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_MaybeStoppingReason_25 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
    }
    else
    {
      MR_String Name_20;
      MR_Word OldName_21;
      MR_Word TypeCtorInfo_31_31;

      Name_20 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_12);
      OldName_21 = recompilation__module_qualify_name_2_f_0(OldModuleQualifier_15, Name_20);
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(OldName_21, SymName_12);
      if (succeeded)
      {
        TypeCtorInfo_31_31 = (MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_31_31, ((MR_Box) (ResolvedCtor_14)), OldResolvedCtors_16);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word OldModuleQualName_22;
        MR_Word Reason_23;
        MR_Word Var_30;
        MR_Word CollectAllReasons_33;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;

        OldModuleQualName_22 = recompilation__module_qualify_name_2_f_0(OldModuleQualifier_15, Name_20);
        Var_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__used_file__recompilation__used_file__type_ctor_info_resolved_functor_0), OldResolvedCtors_16);
        {
          Reason_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_23, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Reason_23, 1) = ((MR_Box) (OldModuleQualName_22));
          MR_hl_field(3, Reason_23, 2) = ((MR_Box) (Arity_13));
          MR_hl_field(3, Reason_23, 3) = ((MR_Box) (ResolvedCtor_14));
          MR_hl_field(3, Reason_23, 4) = ((MR_Box) (Var_30));
        }
        Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 0))));
        Var_37 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 2))));
        Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 3))));
        Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 4))));
        Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 5))));
        Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 6))));
        CollectAllReasons_33 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 8))));
        switch (CollectAllReasons_33) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MaybeStoppingReason_25 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Reason_23));
              }
              *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_34;

              *STATE_VARIABLE_MaybeStoppingReason_25 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_34, 0) = ((MR_Box) (Reason_23));
                MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_43));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_27 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_36));
                MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_37));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_39));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_40));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_41));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_42));
                MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_33));
                MR_hl_field(0, base, 8) = ((MR_Box) (Var_34));
              }
            }
            break;
        }
      }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_25 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
      }
    }
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_25 = STATE_VARIABLE_MaybeStoppingReason_0_24;
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  }
}

static void MR_CALL 
recompilation__check__check_field_ambiguities_7_p_0(
  MR_Word RecompAvail_8,
  MR_Word ResolvedCtor_9,
  MR_Word CtorArg_10,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_21,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word MaybeCtorFieldName_13 = ((MR_Word) ((MR_hl_field(0, CtorArg_10, (MR_Integer) 0))));

  if ((MaybeCtorFieldName_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_MaybeStoppingReason_22 = STATE_VARIABLE_MaybeStoppingReason_0_21;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Word CtorFieldName_16 = ((MR_Word) ((MR_hl_field(1, MaybeCtorFieldName_13, (MR_Integer) 0))));
    MR_Word FieldName_17 = ((MR_Word) ((MR_hl_field(0, CtorFieldName_16, (MR_Integer) 0))));
    MR_Word ExtractFuncName_19;
    MR_Word UpdateFuncName_20;

    hlds__hlds_pred__field_access_function_name_3_p_0((MR_Integer) 0, FieldName_17, &ExtractFuncName_19);
    hlds__hlds_pred__field_access_function_name_3_p_0((MR_Integer) 1, FieldName_17, &UpdateFuncName_20);
    if ((STATE_VARIABLE_MaybeStoppingReason_0_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word STATE_VARIABLE_MaybeStoppingReason_28_28;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word UsedItems_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 4))));
      MR_String UnqualName_37;
      MR_Word UsedCtors_38;
      MR_Word UsedCtorAL_39;
      MR_Box conv0_UsedCtorAL_39;

      UnqualName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(ExtractFuncName_19);
      UsedCtors_38 = ((MR_Word) ((MR_hl_field(0, UsedItems_36, (MR_Integer) 5))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[14]), UsedCtors_38, ((MR_Box) (UnqualName_37)), &conv0_UsedCtorAL_39);
      if (succeeded)
      {
        UsedCtorAL_39 = ((MR_Word) (conv0_UsedCtorAL_39));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        recompilation__check__check_functor_ambiguities_2_9_p_0(RecompAvail_8, ExtractFuncName_19, (MR_Word) (MR_mkword(1, &recompilation__check_scalar_common_4[1])), ResolvedCtor_9, UsedCtorAL_39, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeStoppingReason_28_28, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_29_29);
      else
      {
        STATE_VARIABLE_MaybeStoppingReason_28_28 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_29_29 = STATE_VARIABLE_Info_0_23;
      }
      if ((STATE_VARIABLE_MaybeStoppingReason_28_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word UsedItems_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_29_29, (MR_Integer) 4))));
        MR_String UnqualName_60;
        MR_Word UsedCtors_61;
        MR_Word UsedCtorAL_62;
        MR_Box conv1_UsedCtorAL_62;

        UnqualName_60 = mdbcomp__sym_name__unqualify_name_1_f_0(UpdateFuncName_20);
        UsedCtors_61 = ((MR_Word) ((MR_hl_field(0, UsedItems_59, (MR_Integer) 5))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[14]), UsedCtors_61, ((MR_Box) (UnqualName_60)), &conv1_UsedCtorAL_62);
        if (succeeded)
        {
          UsedCtorAL_62 = ((MR_Word) (conv1_UsedCtorAL_62));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          recompilation__check__check_functor_ambiguities_2_9_p_0(RecompAvail_8, UpdateFuncName_20, (MR_Word) (MR_mkword(1, &recompilation__check_scalar_common_4[2])), ResolvedCtor_9, UsedCtorAL_62, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_MaybeStoppingReason_22, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_24);
        else
        {
          *STATE_VARIABLE_MaybeStoppingReason_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_29_29;
        }
      }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_22 = STATE_VARIABLE_MaybeStoppingReason_28_28;
        *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_29_29;
      }
    }
    else
    {
      *STATE_VARIABLE_MaybeStoppingReason_22 = STATE_VARIABLE_MaybeStoppingReason_0_21;
      *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    }
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_MaybeStoppingReason_22;
  MR_Word conv1_STATE_VARIABLE_Info_24;

  recompilation__check__check_field_ambiguities_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_MaybeStoppingReason_22, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_MaybeStoppingReason_22));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_7_p_0(
  MR_Word RecompAvail_8,
  MR_Word TypeCtor_9,
  MR_Word Ctor_10,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_22,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_23,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word Name_15 = ((MR_Word) ((MR_hl_field(0, Ctor_10, (MR_Integer) 2))));
  MR_Word Args_16 = ((MR_Word) ((MR_hl_field(0, Ctor_10, (MR_Integer) 3))));
  MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(0, Ctor_10, (MR_Integer) 4))));
  MR_Word ResolvedCtor_19;
  MR_Word ConsCtor_20;
  MR_Word FieldAccessResolvedCtor_21;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_27_27;
  MR_Word STATE_VARIABLE_Info_28_28;
  MR_Word Var_29;
  MR_Box conv4_STATE_VARIABLE_MaybeStoppingReason_23;
  MR_Box conv3_STATE_VARIABLE_Info_25;

  {
    ResolvedCtor_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ResolvedCtor_19, 0) = ((MR_Box) (TypeCtor_9));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Arity_17));
  }
  if ((STATE_VARIABLE_MaybeStoppingReason_0_22 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word UsedItems_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 4))));
    MR_String UnqualName_40;
    MR_Word UsedCtors_41;
    MR_Word UsedCtorAL_42;
    MR_Box conv0_UsedCtorAL_42;

    UnqualName_40 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_15);
    UsedCtors_41 = ((MR_Word) ((MR_hl_field(0, UsedItems_39, (MR_Integer) 5))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[14]), UsedCtors_41, ((MR_Box) (UnqualName_40)), &conv0_UsedCtorAL_42);
    if (succeeded)
    {
      UsedCtorAL_42 = ((MR_Word) (conv0_UsedCtorAL_42));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      recompilation__check__check_functor_ambiguities_2_9_p_0(RecompAvail_8, Name_15, Var_26, ResolvedCtor_19, UsedCtorAL_42, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeStoppingReason_27_27, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
    else
    {
      STATE_VARIABLE_MaybeStoppingReason_27_27 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_0_24;
    }
  }
  else
  {
    STATE_VARIABLE_MaybeStoppingReason_27_27 = STATE_VARIABLE_MaybeStoppingReason_0_22;
    STATE_VARIABLE_Info_28_28 = STATE_VARIABLE_Info_0_24;
  }
  {
    ConsCtor_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ConsCtor_20, 0) = ((MR_Box) (Name_15));
    MR_hl_field(0, ConsCtor_20, 1) = ((MR_Box) (Arity_17));
    MR_hl_field(0, ConsCtor_20, 2) = ((MR_Box) (TypeCtor_9));
  }
  {
    FieldAccessResolvedCtor_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, FieldAccessResolvedCtor_21, 0) = ((MR_Box) (ConsCtor_20));
  }
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&recompilation__check_scalar_common_8[2]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (recompilation__check__check_functor_ambiguities_7_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (RecompAvail_8));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (FieldAccessResolvedCtor_21));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_29, Args_16, ((MR_Box) (STATE_VARIABLE_MaybeStoppingReason_27_27)), &conv4_STATE_VARIABLE_MaybeStoppingReason_23, ((MR_Box) (STATE_VARIABLE_Info_28_28)), &conv3_STATE_VARIABLE_Info_25);
  *STATE_VARIABLE_MaybeStoppingReason_23 = ((MR_Word) (conv4_STATE_VARIABLE_MaybeStoppingReason_23));
  *STATE_VARIABLE_Info_25 = ((MR_Word) (conv3_STATE_VARIABLE_Info_25));
}

static MR_Box MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_40;

  conv1_LambdaHeadVar__2_40 = recompilation__check__IntroducedFrom__func__check_for_pred_or_func_item_ambiguity_2__1151__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_40));
  return wrapper_arg_2;
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_1(
  void * env_ptr_arg)
{
  struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s * env_ptr = (struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_3(
  void * env_ptr_arg)
{
  struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s * env_ptr = (struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__Var_54 = ((MR_Word) ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__conv0_Var_54));
  recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_2(env_ptr);
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_2(
  void * env_ptr_arg)
{
  struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s * env_ptr = (struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__TypeCtorInfo_56_56 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
  (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__ArgX1_57 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__Var_54, (MR_Integer) 0))));
  (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__ArgY2_60 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__Var_54, (MR_Integer) 1))));
  (MR_hl_field(0, (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__Var_37, (MR_Integer) 0)) = ((MR_Box) ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__ArgX1_57));
  (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__ArgX2_59 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__Var_37, (MR_Integer) 1))));
  (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__TypeCtorInfo_56_56, ((MR_Box) ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__ArgX2_59)), ((MR_Box) ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__ArgY2_60)));
  if ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded)
    recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_1(env_ptr);
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_4(
  void * env_ptr_arg)
{
  struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s * env_ptr = (struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word TypeInfo_51_51;
        MR_Word PredModuleName_22;
        MR_String Var_23;
        MR_Word Var_24;

        (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__SymName_13)) == (MR_Integer) 1);
        if ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded)
        {
          PredModuleName_22 = ((MR_Word) ((MR_hl_field(1, (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__SymName_13, (MR_Integer) 0))));
          Var_23 = ((MR_String) ((MR_hl_field(1, (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__SymName_13, (MR_Integer) 1))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__Var_37 = base;
            MR_hl_field(0, base, 0) = NULL;
            MR_hl_field(0, base, 1) = ((MR_Box) (PredModuleName_22));
          }
          TypeInfo_51_51 = (MR_Word) (&recompilation__check_scalar_common_2[1]);
          mercury__set__member_2_p_1(TypeInfo_51_51, &(env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__conv0_Var_54, (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__OldMatchingModuleNames_16, recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_3, env_ptr);
        }
      }
      (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0(
  MR_Word ItemType_11,
  MR_Word RecompAvail_12,
  MR_Word SymName_13,
  MR_Integer Arity_14,
  MR_Word OldModuleQualifier_15,
  MR_Word OldMatchingModuleNames_16,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_31,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_32,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0_s env;

  (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__SymName_13 = SymName_13;
  (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__OldMatchingModuleNames_16 = OldMatchingModuleNames_16;
  if ((STATE_VARIABLE_MaybeStoppingReason_0_31 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Name_20;
    MR_String Var_35;

    Name_20 = mdbcomp__sym_name__unqualify_name_1_f_0((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__SymName_13);
    switch (RecompAvail_12) {
      default:
        (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 4:
        (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = MR_TRUE;
        break;
    }
    if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded)
    {
      (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) OldModuleQualifier_15)) == (MR_Integer) 0);
      if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded)
      {
        Var_35 = ((MR_String) ((MR_hl_field(0, OldModuleQualifier_15, (MR_Integer) 0))));
        (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = (strcmp(Var_35, (MR_String) "") == 0);
      }
    }
    if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded)
    {
      *STATE_VARIABLE_MaybeStoppingReason_32 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
    }
    else
    {
      MR_Word QualifiedName_21;

      QualifiedName_21 = recompilation__module_qualify_name_2_f_0(OldModuleQualifier_15, Name_20);
      (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(QualifiedName_21, (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__SymName_13);
      if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded)
      {
        recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_4(&env);
        (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded = !((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded);
      }
      if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__succeeded)
      {
        MR_Word AmbiguousDecls_25;
        MR_Word Reason_30;
        MR_Word Var_38;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word CollectAllReasons_63;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Unsigned packed_word_0;
        MR_Unsigned packed_word_1;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (&recompilation__check_scalar_common_10[0]));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_5));
          MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_38, 3) = ((MR_Box) (ItemType_11));
          MR_hl_field(0, Var_38, 4) = ((MR_Box) (Arity_14));
          MR_hl_field(0, Var_38, 5) = ((MR_Box) (Name_20));
        }
        Var_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__check_scalar_common_2[1]), (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__OldMatchingModuleNames_16);
        AmbiguousDecls_25 = mercury__list__map_2_f_0((MR_Word) (&recompilation__check_scalar_common_2[1]), (MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0), Var_38, Var_42);
        {
          Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_44, 0) = ((MR_Box) ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0_env_0__SymName_13));
          MR_hl_field(0, Var_44, 1) = ((MR_Box) (Arity_14));
        }
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = (MR_Box) ((MR_Unsigned) (ItemType_11));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (Var_44));
        }
        {
          Reason_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Reason_30, 1) = ((MR_Box) (Var_43));
          MR_hl_field(3, Reason_30, 2) = ((MR_Box) (AmbiguousDecls_25));
        }
        Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 0))));
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
        Var_67 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 2))));
        Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 3))));
        Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 4))));
        Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 5))));
        Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 6))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
        CollectAllReasons_63 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_33, (MR_Integer) 8))));
        switch (CollectAllReasons_63) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MaybeStoppingReason_32 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Reason_30));
              }
              *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_64;

              *STATE_VARIABLE_MaybeStoppingReason_32 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (Reason_30));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_73));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_34 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
                MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_67));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_68));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_69));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_70));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_71));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_72));
                MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_63));
                MR_hl_field(0, base, 8) = ((MR_Box) (Var_64));
              }
            }
            break;
        }
      }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_32 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
      }
    }
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_32 = STATE_VARIABLE_MaybeStoppingReason_0_31;
    *STATE_VARIABLE_Info_34 = STATE_VARIABLE_Info_0_33;
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_MaybeStoppingReason_32;
  MR_Word conv0_STATE_VARIABLE_Info_34;

  recompilation__check__check_for_pred_or_func_item_ambiguity_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_MaybeStoppingReason_32, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_34);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeStoppingReason_32));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_34));
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_1_10_p_0(
  MR_Word WithType_11,
  MR_Word ItemType_12,
  MR_Word RecompAvail_13,
  MR_Word SymName_14,
  MR_Integer Arity_15,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_21,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Integer MatchArity_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 0))));
  MR_Word MatchingQualifiers_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__6_6, (MR_Integer) 1))));

  if ((WithType_11 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = (MatchArity_16 == Arity_15);
  else
    succeeded = (MatchArity_16 >= Arity_15);
  if (succeeded)
  {
    MR_Word Var_25;
    MR_Box conv3_STATE_VARIABLE_MaybeStoppingReason_22;
    MR_Box conv2_STATE_VARIABLE_Info_24;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[3]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (recompilation__check__check_for_pred_or_func_item_ambiguity_1_10_p_0_1));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (ItemType_12));
      MR_hl_field(0, Var_25, 4) = ((MR_Box) (RecompAvail_13));
      MR_hl_field(0, Var_25, 5) = ((MR_Box) (SymName_14));
      MR_hl_field(0, Var_25, 6) = ((MR_Box) (MatchArity_16));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[11]), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_25, MatchingQualifiers_17, ((MR_Box) (STATE_VARIABLE_MaybeStoppingReason_0_21)), &conv3_STATE_VARIABLE_MaybeStoppingReason_22, ((MR_Box) (STATE_VARIABLE_Info_0_23)), &conv2_STATE_VARIABLE_Info_24);
    *STATE_VARIABLE_MaybeStoppingReason_22 = ((MR_Word) (conv3_STATE_VARIABLE_MaybeStoppingReason_22));
    *STATE_VARIABLE_Info_24 = ((MR_Word) (conv2_STATE_VARIABLE_Info_24));
  }
  else
  {
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
    *STATE_VARIABLE_MaybeStoppingReason_22 = STATE_VARIABLE_MaybeStoppingReason_0_21;
  }
}

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_2_10_p_0(
  MR_Word ItemType_11,
  MR_Word RecompAvail_12,
  MR_Word SymName_13,
  MR_Integer Arity_14,
  MR_Word OldModuleQualifier_15,
  MR_Word OldMatchingModuleName_16,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_27,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_28,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_MaybeStoppingReason_0_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Name_20;
    MR_String Var_31;

    Name_20 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_13);
    switch (RecompAvail_12) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 4:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OldModuleQualifier_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_31 = ((MR_String) ((MR_hl_field(0, OldModuleQualifier_15, (MR_Integer) 0))));
        succeeded = (strcmp(Var_31, (MR_String) "") == 0);
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
      *STATE_VARIABLE_MaybeStoppingReason_28 = STATE_VARIABLE_MaybeStoppingReason_0_27;
    }
    else
    {
      MR_Word QualifiedName_21;
      MR_Word Var_36;

      QualifiedName_21 = recompilation__module_qualify_name_2_f_0(OldModuleQualifier_15, Name_20);
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(QualifiedName_21, SymName_13);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) SymName_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_36 = ((MR_Word) ((MR_hl_field(1, SymName_13, (MR_Integer) 0))));
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OldMatchingModuleName_16, Var_36);
        }
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word OldMatchingSymName_23;
        MR_Word ItemName_24;
        MR_Word OldItemName_25;
        MR_Word Reason_26;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word CollectAllReasons_38;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;

        {
          OldMatchingSymName_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, OldMatchingSymName_23, 0) = ((MR_Box) (OldMatchingModuleName_16));
          MR_hl_field(1, OldMatchingSymName_23, 1) = ((MR_Box) (Name_20));
        }
        {
          ItemName_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemName_24, 0) = ((MR_Box) (SymName_13));
          MR_hl_field(0, ItemName_24, 1) = ((MR_Box) (Arity_14));
        }
        {
          OldItemName_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OldItemName_25, 0) = ((MR_Box) (OldMatchingSymName_23));
          MR_hl_field(0, OldItemName_25, 1) = ((MR_Box) (Arity_14));
        }
        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_32, 0) = (MR_Box) ((MR_Unsigned) (ItemType_11));
          MR_hl_field(0, Var_32, 1) = ((MR_Box) (ItemName_24));
        }
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_34, 0) = (MR_Box) ((MR_Unsigned) (ItemType_11));
          MR_hl_field(0, Var_34, 1) = ((MR_Box) (OldItemName_25));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Reason_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, Reason_26, 1) = ((MR_Box) (Var_32));
          MR_hl_field(3, Reason_26, 2) = ((MR_Box) (Var_33));
        }
        Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 0))));
        Var_42 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 2))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 3))));
        Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 4))));
        Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 5))));
        Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 6))));
        CollectAllReasons_38 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, (MR_Integer) 8))));
        switch (CollectAllReasons_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MaybeStoppingReason_28 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Reason_26));
              }
              *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_39;

              *STATE_VARIABLE_MaybeStoppingReason_28 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_39, 0) = ((MR_Box) (Reason_26));
                MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_30 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
                MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_42));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_43));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_44));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_45));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_46));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_47));
                MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_38));
                MR_hl_field(0, base, 8) = ((MR_Box) (Var_39));
              }
            }
            break;
        }
      }
      else
      {
        *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
        *STATE_VARIABLE_MaybeStoppingReason_28 = STATE_VARIABLE_MaybeStoppingReason_0_27;
      }
    }
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_28 = STATE_VARIABLE_MaybeStoppingReason_0_27;
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
  }
}

static void MR_CALL 
recompilation__check__check_class_decl_for_ambiguities_8_p_0(
  MR_Word RecompAvail_9,
  MR_Word OldTimestamp_10,
  MR_Word VersionNumbers_11,
  MR_Word Decl_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_29,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_30,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  if (((MR_tag((MR_Word) Decl_12)) == (MR_Integer) 1))
  {
    *STATE_VARIABLE_MaybeStoppingReason_30 = STATE_VARIABLE_MaybeStoppingReason_0_29;
    *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_0_31;
  }
  else
  {
    MR_Word PredOrFuncInfo_15 = (MR_Word) ((MR_Word) (Decl_12));
    MR_Word MethodName_16 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_15, (MR_Integer) 0))));
    MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(0, PredOrFuncInfo_15, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word MethodArgs_18 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_15, (MR_Integer) 2))));
    MR_Word MethodWithType_19 = ((MR_Word) ((MR_hl_field(0, PredOrFuncInfo_15, (MR_Integer) 3))));

    recompilation__check__check_for_pred_or_func_item_ambiguity_12_p_0((MR_Integer) 1, RecompAvail_9, OldTimestamp_10, VersionNumbers_11, PredOrFunc_17, MethodName_16, MethodArgs_18, MethodWithType_19, STATE_VARIABLE_MaybeStoppingReason_0_29, STATE_VARIABLE_MaybeStoppingReason_30, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
  }
}

static void MR_CALL 
recompilation__check__check_item_name_version_number_8_p_0(
  MR_Word ModuleName_9,
  MR_Word NewVersionMap_10,
  MR_Word ItemName_11,
  MR_Word UsedVersionNumber_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_18,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_MaybeStoppingReason_0_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NewVersionNumber_16;
    MR_Box conv0_NewVersionNumber_16;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), NewVersionMap_10, ((MR_Box) (ItemName_11)), &conv0_NewVersionNumber_16);
    if (succeeded)
    {
      NewVersionNumber_16 = ((MR_Word) (conv0_NewVersionNumber_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = libs__timestamp____Unify____timestamp_0_0(UsedVersionNumber_12, NewVersionNumber_16);
      if (succeeded)
      {
        *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
        *STATE_VARIABLE_MaybeStoppingReason_19 = STATE_VARIABLE_MaybeStoppingReason_0_18;
      }
      else
      {
        MR_Word Reason_17;
        MR_Word CollectAllReasons_30;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;

        {
          Reason_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Reason_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, Reason_17, 1) = ((MR_Box) (ModuleName_9));
          MR_hl_field(3, Reason_17, 2) = ((MR_Box) (ItemName_11));
        }
        Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
        Var_34 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
        Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
        Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 4))));
        Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 5))));
        Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 6))));
        CollectAllReasons_30 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 8))));
        switch (CollectAllReasons_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MaybeStoppingReason_19 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Reason_17));
              }
              *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_31;

              *STATE_VARIABLE_MaybeStoppingReason_19 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_31, 0) = ((MR_Box) (Reason_17));
                MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_40));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_21 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
                MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_34));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_35));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_36));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_37));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_38));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_39));
                MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_30));
                MR_hl_field(0, base, 8) = ((MR_Box) (Var_31));
              }
            }
            break;
        }
      }
    }
    else
    {
      MR_Word Reason_26;
      MR_Word CollectAllReasons_58;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;

      {
        Reason_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Reason_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Reason_26, 1) = ((MR_Box) (ModuleName_9));
        MR_hl_field(3, Reason_26, 2) = ((MR_Box) (ItemName_11));
      }
      Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
      Var_62 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
      Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
      Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 4))));
      Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 5))));
      Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 6))));
      CollectAllReasons_58 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 8))));
      switch (CollectAllReasons_58) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MaybeStoppingReason_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Reason_26));
            }
            *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_59;

            *STATE_VARIABLE_MaybeStoppingReason_19 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_59, 0) = ((MR_Box) (Reason_26));
              MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_68));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_21 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
              MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_62));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_63));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_64));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_65));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_66));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_67));
              MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_58));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_59));
            }
          }
          break;
      }
    }
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_19 = STATE_VARIABLE_MaybeStoppingReason_0_18;
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
  }
}

static void MR_CALL 
recompilation__check__check_name_arity_version_number_9_p_0(
  MR_Word ModuleName_10,
  MR_Word ItemType_11,
  MR_Word NewVersionMap_12,
  MR_Word NameArity_13,
  MR_Word UsedVersionNumber_14,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_21,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_22,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_MaybeStoppingReason_0_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NewVersionNumber_18;
    MR_Box conv0_NewVersionNumber_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), NewVersionMap_12, ((MR_Box) (NameArity_13)), &conv0_NewVersionNumber_18);
    if (succeeded)
    {
      NewVersionNumber_18 = ((MR_Word) (conv0_NewVersionNumber_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = libs__timestamp____Unify____timestamp_0_0(NewVersionNumber_18, UsedVersionNumber_14);
      if (succeeded)
      {
        *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
        *STATE_VARIABLE_MaybeStoppingReason_22 = STATE_VARIABLE_MaybeStoppingReason_0_21;
      }
      else
      {
        MR_Word ItemId_19;
        MR_Word Reason_20;
        MR_String Name_34 = ((MR_String) ((MR_hl_field(0, NameArity_13, (MR_Integer) 0))));
        MR_Integer Arity_35 = ((MR_Integer) ((MR_hl_field(0, NameArity_13, (MR_Integer) 1))));
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word CollectAllReasons_38;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;

        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (ModuleName_10));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (Name_34));
        }
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(0, Var_36, 1) = ((MR_Box) (Arity_35));
        }
        {
          ItemId_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemId_19, 0) = (MR_Box) ((MR_Unsigned) (ItemType_11));
          MR_hl_field(0, ItemId_19, 1) = ((MR_Box) (Var_36));
        }
        Reason_20 = (MR_Word) ((MR_Word) (ItemId_19));
        Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
        Var_42 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
        Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 3))));
        Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 4))));
        Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 5))));
        Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 6))));
        CollectAllReasons_38 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 8))));
        switch (CollectAllReasons_38) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_MaybeStoppingReason_22 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Reason_20));
              }
              *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_39;

              *STATE_VARIABLE_MaybeStoppingReason_22 = (MR_Word) ((MR_Unsigned) 0U);
              {
                Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_39, 0) = ((MR_Box) (Reason_20));
                MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_24 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (Var_41));
                MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_42));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_43));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_44));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_45));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_46));
                MR_hl_field(0, base, 6) = ((MR_Box) (Var_47));
                MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_38));
                MR_hl_field(0, base, 8) = ((MR_Box) (Var_39));
              }
            }
            break;
        }
      }
    }
    else
    {
      MR_Word ItemId_29;
      MR_Word Reason_30;
      MR_String Name_66 = ((MR_String) ((MR_hl_field(0, NameArity_13, (MR_Integer) 0))));
      MR_Integer Arity_67 = ((MR_Integer) ((MR_hl_field(0, NameArity_13, (MR_Integer) 1))));
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word CollectAllReasons_70;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;

      {
        Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_69, 0) = ((MR_Box) (ModuleName_10));
        MR_hl_field(1, Var_69, 1) = ((MR_Box) (Name_66));
      }
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(0, Var_68, 1) = ((MR_Box) (Arity_67));
      }
      {
        ItemId_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ItemId_29, 0) = (MR_Box) ((MR_Unsigned) (ItemType_11));
        MR_hl_field(0, ItemId_29, 1) = ((MR_Box) (Var_68));
      }
      Reason_30 = (MR_Word) (MR_mkword(1, (MR_Word) (ItemId_29)));
      Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 0))));
      Var_74 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 2))));
      Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 3))));
      Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 4))));
      Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 5))));
      Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 6))));
      CollectAllReasons_70 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, (MR_Integer) 8))));
      switch (CollectAllReasons_70) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MaybeStoppingReason_22 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Reason_30));
            }
            *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_71;

            *STATE_VARIABLE_MaybeStoppingReason_22 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_71, 0) = ((MR_Box) (Reason_30));
              MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_80));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_24 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_73));
              MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_74));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_75));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_76));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_77));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_78));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_79));
              MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_70));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_71));
            }
          }
          break;
      }
    }
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_22 = STATE_VARIABLE_MaybeStoppingReason_0_21;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
}

static void MR_CALL 
recompilation__check__require_recompilation_if_not_up_to_date_8_p_0(
  MR_Word RecordedTimestamp_9,
  MR_String TargetFile_10,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_19,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_MaybeStoppingReason_0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TargetModTimeResult_15;
    MR_Word TargetModTime_16;
    MR_Word TargetModTimeCompare_17;
    MR_Word Var_26;

    mercury__io__file__file_modification_time_4_p_0(TargetFile_10, &TargetModTimeResult_15);
    succeeded = ((MR_tag((MR_Word) TargetModTimeResult_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      TargetModTime_16 = ((MR_Word) ((MR_hl_field(0, TargetModTimeResult_15, (MR_Integer) 0))));
      Var_26 = libs__timestamp__time_t_to_timestamp_1_f_0(TargetModTime_16);
      libs__timestamp____Compare____timestamp_0_0(&TargetModTimeCompare_17, Var_26, RecordedTimestamp_9);
      succeeded = (TargetModTimeCompare_17 == (MR_Integer) 2);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_MaybeStoppingReason_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    }
    else
    {
      MR_Word Reason_18;
      MR_Word CollectAllReasons_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;

      {
        Reason_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Reason_18, 1) = ((MR_Box) (TargetFile_10));
      }
      Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
      Var_32 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
      Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
      Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
      CollectAllReasons_28 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
      switch (CollectAllReasons_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_MaybeStoppingReason_20 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Reason_18));
            }
            *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_29;

            *STATE_VARIABLE_MaybeStoppingReason_20 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_29, 0) = ((MR_Box) (Reason_18));
              MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_38));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_22 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
              MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_32));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_35));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
              MR_hl_field(0, base, 6) = ((MR_Box) (Var_37));
              MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_28));
              MR_hl_field(0, base, 8) = ((MR_Box) (Var_29));
            }
          }
          break;
      }
    }
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_20 = STATE_VARIABLE_MaybeStoppingReason_0_19;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
  }
}

void MR_CALL 
recompilation__check__should_recompile_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word FindTargetFiles_12,
  MR_Word FindTimestampFiles_13,
  MR_Word * ModulesToRecompile_14,
  MR_Word HaveReadModuleMaps0_15,
  MR_Word * HaveReadModuleMaps_16)
{
  MR_Word FindAll_18;
  MR_Word ResolvedUsedItems0_19;
  MR_Word Info0_20;
  MR_Word Info_21;
  MR_Word Var_27;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 76, &FindAll_18);
  ResolvedUsedItems0_19 = recompilation__used_file__init_resolved_used_items_0_f_0();
  Var_27 = mercury__set__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0));
  {
    Info0_20 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_20, 0) = ((MR_Box) (ModuleName_11));
    MR_hl_field(0, Info0_20, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, Info0_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_20, 3) = ((MR_Box) (HaveReadModuleMaps0_15));
    MR_hl_field(0, Info0_20, 4) = ((MR_Box) (ResolvedUsedItems0_19));
    MR_hl_field(0, Info0_20, 5) = ((MR_Box) (Var_27));
    MR_hl_field(0, Info0_20, 6) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_4[0])));
    MR_hl_field(0, Info0_20, 7) = (MR_Box) ((MR_Unsigned) (FindAll_18));
    MR_hl_field(0, Info0_20, 8) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  recompilation__check__should_recompile_2_9_p_0(Globals_10, (MR_Integer) 0, FindTargetFiles_12, FindTimestampFiles_13, ModuleName_11, Info0_20, &Info_21);
  *HaveReadModuleMaps_16 = ((MR_Word) ((MR_hl_field(0, Info_21, (MR_Integer) 3))));
  *ModulesToRecompile_14 = ((MR_Word) ((MR_hl_field(0, Info_21, (MR_Integer) 6))));
}

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Info_32;

  recompilation__check__should_recompile_2_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Info_32);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Info_32));
}

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  recompilation__check__write_recompile_reason_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__5_5;

  parse_tree__module_cmds__touch_datestamp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
}

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0(
  MR_Word Globals_10,
  MR_Word IsSubModule_11,
  MR_Word FindTargetFiles_12,
  MR_Word FindTimestampFiles_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_Word ReadUsedFileResult_17;
  MR_Word STATE_VARIABLE_Info_36_36;
  MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 3))));
  MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 4))));
  MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 5))));
  MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 6))));
  MR_Word Var_73 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 7))) & (MR_Integer) 1);
  MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_31, (MR_Integer) 8))));

  {
    STATE_VARIABLE_Info_36_36 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_36_36, 0) = ((MR_Box) (ModuleName_14));
    MR_hl_field(0, STATE_VARIABLE_Info_36_36, 1) = (MR_Box) ((MR_Unsigned) (Var_67));
    MR_hl_field(0, STATE_VARIABLE_Info_36_36, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, STATE_VARIABLE_Info_36_36, 3) = ((MR_Box) (Var_69));
    MR_hl_field(0, STATE_VARIABLE_Info_36_36, 4) = ((MR_Box) (Var_70));
    MR_hl_field(0, STATE_VARIABLE_Info_36_36, 5) = ((MR_Box) (Var_71));
    MR_hl_field(0, STATE_VARIABLE_Info_36_36, 6) = ((MR_Box) (Var_72));
    MR_hl_field(0, STATE_VARIABLE_Info_36_36, 7) = (MR_Box) ((MR_Unsigned) (Var_73));
    MR_hl_field(0, STATE_VARIABLE_Info_36_36, 8) = ((MR_Box) (Var_74));
  }
  recompilation__used_file__read_used_file_for_module_5_p_0(Globals_10, ModuleName_14, &ReadUsedFileResult_17);
  if (((MR_tag((MR_Word) ReadUsedFileResult_17)) == (MR_Integer) 1))
  {
    MR_Word UsedFileError_30 = ((MR_Word) ((MR_hl_field(1, ReadUsedFileResult_17, (MR_Integer) 0))));
    MR_Word ErrorStream_65;
    MR_Word Verbose_148;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_124;
    MR_Word Var_125;

    libs__globals__get_error_output_stream_5_p_0(Globals_10, ModuleName_14, &ErrorStream_65);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 75, &Verbose_148);
    switch (Verbose_148) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        recompilation__check__write_used_file_error_6_p_0(Globals_10, ModuleName_14, UsedFileError_30, ErrorStream_65);
        break;
    }
    Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_36_36, (MR_Integer) 0))));
    Var_118 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_36_36, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_36_36, (MR_Integer) 2))));
    Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_36_36, (MR_Integer) 3))));
    Var_121 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_36_36, (MR_Integer) 4))));
    Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_36_36, (MR_Integer) 5))));
    Var_124 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_36_36, (MR_Integer) 7))) & (MR_Integer) 1);
    Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_36_36, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_32 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_117));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_118));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_119));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_120));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_121));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_122));
      MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (Var_124));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_125));
    }
  }
  else
  {
    MR_Word UsedFile_18 = ((MR_Word) ((MR_hl_field(0, ReadUsedFileResult_17, (MR_Integer) 0))));
    MR_Word MaybeStoppingReason_19;
    MR_Word Reasons_20;
    MR_Word ProgressStream_22;
    MR_Word ModulesToRecompile_28;
    MR_Word STATE_VARIABLE_Info_39_39;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;

    recompilation__check__should_recompile_3_9_p_0(Globals_10, UsedFile_18, IsSubModule_11, FindTargetFiles_12, &MaybeStoppingReason_19, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_39_39);
    if ((MaybeStoppingReason_19 == (MR_Word) ((MR_Unsigned) 0U)))
      Reasons_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 8))));
    else
    {
      MR_Word StoppingReason_21 = ((MR_Word) ((MR_hl_field(1, MaybeStoppingReason_19, (MR_Integer) 0))));

      {
        Reasons_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Reasons_20, 0) = ((MR_Box) (StoppingReason_21));
        MR_hl_field(1, Reasons_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    libs__globals__get_progress_output_stream_5_p_0(Globals_10, ModuleName_14, &ProgressStream_22);
    if ((Reasons_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TimestampFiles_23;
      MR_Word ErrorStream_24;
      MR_Word Var_47;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindTimestampFiles_13, (MR_Integer) 1))));
      MR_Box conv2_TimestampFiles_23;
      MR_Box conv1_STATE_VARIABLE_IO_43_43;
      MR_Word _Succeededs_25;
      MR_Box conv4_STATE_VARIABLE_IO_48_48;

      func_0(((MR_Box) (FindTimestampFiles_13)), ((MR_Box) (ModuleName_14)), &conv2_TimestampFiles_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_43_43);
      TimestampFiles_23 = ((MR_Word) (conv2_TimestampFiles_23));
      recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_56_95_95_91_52_93_95_48_5_p_0(ModuleName_14, Globals_10, ProgressStream_22);
      libs__globals__get_error_output_stream_5_p_0(Globals_10, ModuleName_14, &ErrorStream_24);
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_47, 0) = ((MR_Box) (&recompilation__check_scalar_common_8[1]));
        MR_hl_field(0, Var_47, 1) = ((MR_Box) (recompilation__check__should_recompile_2_9_p_0_1));
        MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_47, 3) = ((MR_Box) (Globals_10));
        MR_hl_field(0, Var_47, 4) = ((MR_Box) (ProgressStream_22));
        MR_hl_field(0, Var_47, 5) = ((MR_Box) (ErrorStream_24));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_47, TimestampFiles_23, &_Succeededs_25, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_48_48);
      STATE_VARIABLE_Info_49_49 = STATE_VARIABLE_Info_39_39;
    }
    else
    {
      MR_Word Var_52;
      MR_Word Verbose_150;

      recompilation__check__add_module_to_recompile_3_p_0(ModuleName_14, STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_49_49);
      Var_52 = mercury__list__reverse_1_f_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0), Reasons_20);
      libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 75, &Verbose_150);
      switch (Verbose_150) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_152;
            MR_Box conv5_STATE_VARIABLE_IO_48_48;

            {
              Var_152 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_152, 0) = ((MR_Box) (&recompilation__check_scalar_common_9[0]));
              MR_hl_field(0, Var_152, 1) = ((MR_Box) (recompilation__check__should_recompile_2_9_p_0_2));
              MR_hl_field(0, Var_152, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_152, 3) = ((MR_Box) (Globals_10));
              MR_hl_field(0, Var_152, 4) = ((MR_Box) (ProgressStream_22));
              MR_hl_field(0, Var_152, 5) = ((MR_Box) (ModuleName_14));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_152, Var_52, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_48_48);
          }
          break;
      }
    }
    Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_49_49, (MR_Integer) 0))));
    Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_49_49, (MR_Integer) 2))));
    Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_49_49, (MR_Integer) 3))));
    Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_49_49, (MR_Integer) 4))));
    Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_49_49, (MR_Integer) 5))));
    ModulesToRecompile_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_49_49, (MR_Integer) 6))));
    Var_98 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_49_49, (MR_Integer) 7))) & (MR_Integer) 1);
    Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_49_49, (MR_Integer) 8))));
    if ((ModulesToRecompile_28 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_49_49;
    else
    {
      MR_Word STATE_VARIABLE_Info_53_53;
      MR_Word Var_55;
      MR_Box conv8_STATE_VARIABLE_Info_32;
      MR_Box conv7_STATE_VARIABLE_IO_34;

      {
        STATE_VARIABLE_Info_53_53 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_53_53, 0) = ((MR_Box) (Var_92));
        MR_hl_field(0, STATE_VARIABLE_Info_53_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, STATE_VARIABLE_Info_53_53, 2) = ((MR_Box) (Var_94));
        MR_hl_field(0, STATE_VARIABLE_Info_53_53, 3) = ((MR_Box) (Var_95));
        MR_hl_field(0, STATE_VARIABLE_Info_53_53, 4) = ((MR_Box) (Var_96));
        MR_hl_field(0, STATE_VARIABLE_Info_53_53, 5) = ((MR_Box) (Var_97));
        MR_hl_field(0, STATE_VARIABLE_Info_53_53, 6) = ((MR_Box) (ModulesToRecompile_28));
        MR_hl_field(0, STATE_VARIABLE_Info_53_53, 7) = (MR_Box) ((MR_Unsigned) (Var_98));
        MR_hl_field(0, STATE_VARIABLE_Info_53_53, 8) = ((MR_Box) (Var_99));
      }
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[1]));
        MR_hl_field(0, Var_55, 1) = ((MR_Box) (recompilation__check__should_recompile_2_9_p_0_3));
        MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_55, 3) = ((MR_Box) (Globals_10));
        MR_hl_field(0, Var_55, 4) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_55, 5) = ((MR_Box) (FindTargetFiles_12));
        MR_hl_field(0, Var_55, 6) = ((MR_Box) (FindTimestampFiles_13));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_55, Var_94, ((MR_Box) (STATE_VARIABLE_Info_53_53)), &conv8_STATE_VARIABLE_Info_32, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_34);
      *STATE_VARIABLE_Info_32 = ((MR_Word) (conv8_STATE_VARIABLE_Info_32));
    }
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_56_95_95_91_52_93_95_48_5_p_0(
  MR_Word Var_14,
  MR_Word Globals_6,
  MR_Word Stream_7)
{
  MR_Word Verbose_10;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 75, &Verbose_10);
  switch (Verbose_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_18;

        Var_18 = parse_tree__parse_tree_out_sym_name__sym_name_to_escaped_string_1_f_0(Var_14);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "Not recompiling module ");
        mercury__io__write_string_4_p_0(Stream_7, Var_18);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ".\n");
      }
      break;
  }
}

static void MR_CALL 
recompilation__check__add_module_to_recompile_3_p_0(
  MR_Word Module_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word ModulesToRecompile0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
  MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 7))) & (MR_Integer) 1);
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, (MR_Integer) 8))));

  if ((ModulesToRecompile0_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  else
  {
    MR_Word Modules0_7 = ((MR_Word) ((MR_hl_field(1, ModulesToRecompile0_6, (MR_Integer) 0))));
    MR_Word Var_11;
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) (Module_4));
      MR_hl_field(1, Var_12, 1) = ((MR_Box) (Modules0_7));
    }
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_14));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_11));
      MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (Var_19));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_20));
    }
  }
}

static void MR_CALL 
recompilation__check__should_recompile_3_9_p_0_1(
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
  MR_Word conv4_STATE_VARIABLE_MaybeStoppingReason_20;
  MR_Word conv3_STATE_VARIABLE_Info_22;

  recompilation__check__require_recompilation_if_not_up_to_date_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_MaybeStoppingReason_20, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_MaybeStoppingReason_20));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Info_22));
}

static void MR_CALL 
recompilation__check__should_recompile_3_9_p_0(
  MR_Word Globals_10,
  MR_Word UsedFile_11,
  MR_Word IsSubModule_12,
  MR_Word FindTargetFiles_13,
  MR_Word * MaybeStoppingReason_14,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  MR_bool succeeded;
  MR_Word ModuleTimestamp_17 = ((MR_Word) ((MR_hl_field(0, UsedFile_11, (MR_Integer) 0))));
  MR_Word InlineSubModules_18 = ((MR_Word) ((MR_hl_field(0, UsedFile_11, (MR_Integer) 1))));
  MR_Word UsedItems_19 = ((MR_Word) ((MR_hl_field(0, UsedFile_11, (MR_Integer) 2))));
  MR_Word UsedClasses_20 = ((MR_Word) ((MR_hl_field(0, UsedFile_11, (MR_Integer) 3))));
  MR_Word UsedModules_21 = ((MR_Word) ((MR_hl_field(0, UsedFile_11, (MR_Integer) 4))));
  MR_Word RecordedTimestamp_23 = ((MR_Word) ((MR_hl_field(0, ModuleTimestamp_17, (MR_Integer) 1))));
  MR_Word MaybeStoppingReason0_25;
  MR_Word STATE_VARIABLE_Info_43_43;
  MR_Word STATE_VARIABLE_Info_44_44;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_Info_57_57;
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_38, (MR_Integer) 0))));
  MR_Word Var_69 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_38, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_38, (MR_Integer) 3))));
  MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_38, (MR_Integer) 5))));
  MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_38, (MR_Integer) 6))));
  MR_Word Var_75 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_38, (MR_Integer) 7))) & (MR_Integer) 1);
  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_38, (MR_Integer) 8))));
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;

  {
    STATE_VARIABLE_Info_43_43 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 0) = ((MR_Box) (Var_68));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 1) = (MR_Box) ((MR_Unsigned) (Var_69));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 2) = ((MR_Box) (InlineSubModules_18));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 3) = ((MR_Box) (Var_71));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 4) = ((MR_Box) (UsedItems_19));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 5) = ((MR_Box) (Var_73));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 6) = ((MR_Box) (Var_74));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 7) = (MR_Box) ((MR_Unsigned) (Var_75));
    MR_hl_field(0, STATE_VARIABLE_Info_43_43, 8) = ((MR_Box) (Var_76));
  }
  Var_45 = mercury__set__list_to_set_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0), UsedClasses_20);
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_43_43, (MR_Integer) 0))));
  Var_87 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_43_43, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_43_43, (MR_Integer) 2))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_43_43, (MR_Integer) 3))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_43_43, (MR_Integer) 4))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_43_43, (MR_Integer) 6))));
  Var_93 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_43_43, (MR_Integer) 7))) & (MR_Integer) 1);
  Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_43_43, (MR_Integer) 8))));
  {
    STATE_VARIABLE_Info_44_44 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_44_44, 0) = ((MR_Box) (Var_86));
    MR_hl_field(0, STATE_VARIABLE_Info_44_44, 1) = (MR_Box) ((MR_Unsigned) (Var_87));
    MR_hl_field(0, STATE_VARIABLE_Info_44_44, 2) = ((MR_Box) (Var_88));
    MR_hl_field(0, STATE_VARIABLE_Info_44_44, 3) = ((MR_Box) (Var_89));
    MR_hl_field(0, STATE_VARIABLE_Info_44_44, 4) = ((MR_Box) (Var_90));
    MR_hl_field(0, STATE_VARIABLE_Info_44_44, 5) = ((MR_Box) (Var_45));
    MR_hl_field(0, STATE_VARIABLE_Info_44_44, 6) = ((MR_Box) (Var_92));
    MR_hl_field(0, STATE_VARIABLE_Info_44_44, 7) = (MR_Box) ((MR_Unsigned) (Var_93));
    MR_hl_field(0, STATE_VARIABLE_Info_44_44, 8) = ((MR_Box) (Var_94));
  }
  switch (IsSubModule_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MaybeStoppingReason0_25 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_57_57 = STATE_VARIABLE_Info_44_44;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word HaveReadSrc_28;
        MR_Word Var_46;
        MR_Word Var_50;

        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_86));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (RecordedTimestamp_23));
        }
        parse_tree__read_modules__read_module_src_11_p_0((MR_Word) ((MR_Unsigned) 0U), Globals_10, Var_46, (MR_Integer) 1, (MR_Integer) 0, Var_86, (MR_Word) ((MR_Unsigned) 0U), Var_50, &HaveReadSrc_28);
        if (((MR_tag((MR_Word) HaveReadSrc_28)) == (MR_Integer) 1))
        {
          MR_String FileName_29 = ((MR_String) ((MR_hl_field(1, HaveReadSrc_28, (MR_Integer) 0))));
          MR_Word Errors_30 = ((MR_Word) ((MR_hl_field(1, HaveReadSrc_28, (MR_Integer) 1))));

          succeeded = parse_tree__parse_error__there_are_some_errors_1_p_0(Errors_30);
          if (succeeded)
          {
            MR_Word Var_52;

            Var_52 = recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_97_100_95_109_111_100_117_108_101_95_101_114_114_111_114_95_115_116_111_112_112_105_110_103_95_114_101_97_115_111_110_95_95_91_50_93_95_48_2_f_0(FileName_29);
            {
              MaybeStoppingReason0_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeStoppingReason0_25, 0) = ((MR_Box) (Var_52));
            }
          }
          else
            MaybeStoppingReason0_25 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_57_57 = STATE_VARIABLE_Info_44_44;
        }
        else
        {
          MR_Word MaybeNewTimestamp_31 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_28, (MR_Integer) 1))));
          MR_Word ParseTreeSrc_32 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_28, (MR_Integer) 2))));
          MR_String FileName_66 = ((MR_String) ((MR_hl_field(0, HaveReadSrc_28, (MR_Integer) 0))));
          MR_Word Errors_67 = ((MR_Word) ((MR_hl_field(0, HaveReadSrc_28, (MR_Integer) 3))));
          MR_Word NewTimestamp_33;

          succeeded = (MaybeNewTimestamp_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NewTimestamp_33 = ((MR_Word) ((MR_hl_field(1, MaybeNewTimestamp_31, (MR_Integer) 0))));
            succeeded = libs__timestamp____Unify____timestamp_0_0(NewTimestamp_33, RecordedTimestamp_23);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word ChangedReason_34;
            MR_Word Var_53;
            MR_Word STATE_VARIABLE_Info_54_54;
            MR_Word STATE_VARIABLE_Info_55_55;
            MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, ModuleTimestamp_17, (MR_Integer) 0))));
            MR_Word Var_105 = ((MR_Unsigned) ((MR_hl_field(0, ModuleTimestamp_17, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_113;
            MR_Word Var_114;

            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_103));
              MR_hl_field(0, Var_53, 1) = ((MR_Box) (NewTimestamp_33));
              MR_hl_field(0, Var_53, 2) = (MR_Box) ((MR_Unsigned) (Var_105));
            }
            recompilation__check__record_read_file_src_7_p_0(Var_86, FileName_66, Var_53, ParseTreeSrc_32, Errors_67, STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_54_54);
            Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 0))));
            Var_107 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 1))) & (MR_Integer) 1);
            Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 2))));
            Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 3))));
            Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 4))));
            Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 5))));
            Var_113 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 7))) & (MR_Integer) 1);
            Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_54_54, (MR_Integer) 8))));
            {
              STATE_VARIABLE_Info_55_55 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_55_55, 0) = ((MR_Box) (Var_106));
              MR_hl_field(0, STATE_VARIABLE_Info_55_55, 1) = (MR_Box) ((MR_Unsigned) (Var_107));
              MR_hl_field(0, STATE_VARIABLE_Info_55_55, 2) = ((MR_Box) (Var_108));
              MR_hl_field(0, STATE_VARIABLE_Info_55_55, 3) = ((MR_Box) (Var_109));
              MR_hl_field(0, STATE_VARIABLE_Info_55_55, 4) = ((MR_Box) (Var_110));
              MR_hl_field(0, STATE_VARIABLE_Info_55_55, 5) = ((MR_Box) (Var_111));
              MR_hl_field(0, STATE_VARIABLE_Info_55_55, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, STATE_VARIABLE_Info_55_55, 7) = (MR_Box) ((MR_Unsigned) (Var_113));
              MR_hl_field(0, STATE_VARIABLE_Info_55_55, 8) = ((MR_Box) (Var_114));
            }
            {
              ChangedReason_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ChangedReason_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ChangedReason_34, 1) = ((MR_Box) (FileName_66));
            }
            recompilation__check__record_recompilation_reason_4_p_0(ChangedReason_34, &MaybeStoppingReason0_25, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_57_57);
          }
          else
          {
            succeeded = parse_tree__parse_error__there_are_some_errors_1_p_0(Errors_67);
            if (!(succeeded))
              succeeded = (MaybeNewTimestamp_31 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word Var_58;

              Var_58 = recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_97_100_95_109_111_100_117_108_101_95_101_114_114_111_114_95_115_116_111_112_112_105_110_103_95_114_101_97_115_111_110_95_95_91_50_93_95_48_2_f_0(FileName_66);
              {
                MaybeStoppingReason0_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeStoppingReason0_25, 0) = ((MR_Box) (Var_58));
              }
            }
            else
              MaybeStoppingReason0_25 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Info_57_57 = STATE_VARIABLE_Info_44_44;
          }
        }
      }
      break;
  }
  if ((MaybeStoppingReason0_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word TargetFiles_36;
    MR_Word MaybeStoppingReason1_37;
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_57_57, (MR_Integer) 0))));
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_Info_62_62;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, FindTargetFiles_13, (MR_Integer) 1))));
    MR_Box conv2_TargetFiles_36;
    MR_Box conv1_STATE_VARIABLE_IO_60_60;
    MR_Box conv7_MaybeStoppingReason1_37;
    MR_Box conv6_STATE_VARIABLE_Info_62_62;
    MR_Box conv5_STATE_VARIABLE_IO_63_63;

    func_0(((MR_Box) (FindTargetFiles_13)), ((MR_Box) (Var_59)), &conv2_TargetFiles_36, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_60_60);
    TargetFiles_36 = ((MR_Word) (conv2_TargetFiles_36));
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&recompilation__check_scalar_common_6[2]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (recompilation__check__should_recompile_3_9_p_0_1));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (RecordedTimestamp_23));
    }
    mercury__list__foldl3_8_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, TargetFiles_36, ((MR_Box) (MaybeStoppingReason0_25)), &conv7_MaybeStoppingReason1_37, ((MR_Box) (STATE_VARIABLE_Info_57_57)), &conv6_STATE_VARIABLE_Info_62_62, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_63_63);
    MaybeStoppingReason1_37 = ((MR_Word) (conv7_MaybeStoppingReason1_37));
    STATE_VARIABLE_Info_62_62 = ((MR_Word) (conv6_STATE_VARIABLE_Info_62_62));
    recompilation__check__check_imported_modules_8_p_0(Globals_10, UsedModules_21, MaybeStoppingReason1_37, MaybeStoppingReason_14, STATE_VARIABLE_Info_62_62, STATE_VARIABLE_Info_39);
  }
  else
  {
    *MaybeStoppingReason_14 = MaybeStoppingReason0_25;
    *STATE_VARIABLE_Info_39 = STATE_VARIABLE_Info_57_57;
  }
}

static MR_Word MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_97_100_95_109_111_100_117_108_101_95_101_114_114_111_114_95_115_116_111_112_112_105_110_103_95_114_101_97_115_111_110_95_95_91_50_93_95_48_2_f_0(
  MR_String FileName_4)
{
  MR_Word FileReason_6;
  MR_Word Pieces_7;
  MR_Word Var_10;
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_11, 1) = ((MR_Box) (FileName_4));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[38])));
  }
  {
    Pieces_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_7, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[42])));
    MR_hl_field(1, Pieces_7, 1) = ((MR_Box) (Var_10));
  }
  {
    FileReason_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, FileReason_6, 0) = ((MR_Box) (FileName_4));
    MR_hl_field(2, FileReason_6, 1) = ((MR_Box) (Pieces_7));
  }
  return FileReason_6;
}

static void MR_CALL 
recompilation__check__record_read_file_src_7_p_0(
  MR_Word ModuleName_8,
  MR_String FileName_9,
  MR_Word ModuleTimestamp_10,
  MR_Word ParseTree_11,
  MR_Word Errors_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word HaveReadModuleMaps0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
  MR_Word HaveReadModuleMapSrc0_15 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_14, (MR_Integer) 0))));
  MR_Word Timestamp_17 = ((MR_Word) ((MR_hl_field(0, ModuleTimestamp_10, (MR_Integer) 1))));
  MR_Word HaveReadModuleMapSrc_19;
  MR_Word HaveReadModuleMaps_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;

  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Timestamp_17));
  }
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (FileName_9));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) (ParseTree_11));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Errors_12));
  }
  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[15]), ((MR_Box) (ModuleName_8)), ((MR_Box) (Var_23)), HaveReadModuleMapSrc0_15, &HaveReadModuleMapSrc_19);
  Var_41 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_14, (MR_Integer) 1))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_14, (MR_Integer) 2))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_14, (MR_Integer) 3))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_14, (MR_Integer) 4))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_14, (MR_Integer) 5))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_14, (MR_Integer) 6))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps0_14, (MR_Integer) 7))));
  {
    HaveReadModuleMaps_20 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HaveReadModuleMaps_20, 0) = ((MR_Box) (HaveReadModuleMapSrc_19));
    MR_hl_field(0, HaveReadModuleMaps_20, 1) = ((MR_Box) (Var_41));
    MR_hl_field(0, HaveReadModuleMaps_20, 2) = ((MR_Box) (Var_42));
    MR_hl_field(0, HaveReadModuleMaps_20, 3) = ((MR_Box) (Var_43));
    MR_hl_field(0, HaveReadModuleMaps_20, 4) = ((MR_Box) (Var_44));
    MR_hl_field(0, HaveReadModuleMaps_20, 5) = ((MR_Box) (Var_45));
    MR_hl_field(0, HaveReadModuleMaps_20, 6) = ((MR_Box) (Var_46));
    MR_hl_field(0, HaveReadModuleMaps_20, 7) = ((MR_Box) (Var_47));
  }
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
  Var_49 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 1))) & (MR_Integer) 1);
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
  Var_55 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 7))) & (MR_Integer) 1);
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_49));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 3) = ((MR_Box) (HaveReadModuleMaps_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (Var_55));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_56));
  }
}

static void MR_CALL 
recompilation__check__check_imported_modules_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
    }
    else
    {
      MR_Word HeadUsedModule_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailUsedModules_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      if ((STATE_VARIABLE_MaybeStoppingReason_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_MaybeStoppingReason_32_32;
        MR_Word STATE_VARIABLE_Info_33_33;
        MR_Word ImportedModuleName_35 = ((MR_Word) ((MR_hl_field(0, HeadUsedModule_20, (MR_Integer) 0))));
        MR_Word ModuleTimestamp_36 = ((MR_Word) ((MR_hl_field(0, HeadUsedModule_20, (MR_Integer) 1))));
        MR_Word MaybeUsedVersionNumbers_37 = ((MR_Word) ((MR_hl_field(0, HeadUsedModule_20, (MR_Integer) 2))));
        MR_Word FileKind_38 = ((MR_Word) ((MR_hl_field(0, ModuleTimestamp_36, (MR_Integer) 0))));
        MR_Word IntFileKind_41;
        MR_Word HaveReadModuleMaps_43;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

        switch (MR_tag((MR_Word) FileKind_38)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.check_imported_module\'/7", (MR_String) "fk_src");
              return;
            }
            break;
          case (MR_Integer) 1:
            IntFileKind_41 = ((MR_Unsigned) ((MR_hl_field(1, FileKind_38, (MR_Integer) 0))) & (MR_Integer) 3);
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.check_imported_module\'/7", (MR_String) "fk_opt");
              return;
            }
            break;
        }
        HaveReadModuleMaps_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
        Var_97 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps_43, (MR_Integer) 2))));
        Var_96 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps_43, (MR_Integer) 3))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps_43, (MR_Integer) 4))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleMaps_43, (MR_Integer) 5))));
        switch (IntFileKind_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            recompilation__check__check_imported_module_intN_10_p_0((MR_Word) (&recompilation__check_scalar_common_1[2]), HeadVar__1_1, ImportedModuleName_35, ModuleTimestamp_36, MaybeUsedVersionNumbers_37, Var_97, &STATE_VARIABLE_MaybeStoppingReason_32_32, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_33_33);
            break;
          case (MR_Integer) 1:
            recompilation__check__check_imported_module_intN_10_p_0((MR_Word) (&recompilation__check_scalar_common_1[3]), HeadVar__1_1, ImportedModuleName_35, ModuleTimestamp_36, MaybeUsedVersionNumbers_37, Var_96, &STATE_VARIABLE_MaybeStoppingReason_32_32, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_33_33);
            break;
          case (MR_Integer) 2:
            recompilation__check__check_imported_module_intN_10_p_0((MR_Word) (&recompilation__check_scalar_common_1[4]), HeadVar__1_1, ImportedModuleName_35, ModuleTimestamp_36, MaybeUsedVersionNumbers_37, Var_95, &STATE_VARIABLE_MaybeStoppingReason_32_32, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_33_33);
            break;
          case (MR_Integer) 3:
            recompilation__check__check_imported_module_intN_10_p_0((MR_Word) (&recompilation__check_scalar_common_1[5]), HeadVar__1_1, ImportedModuleName_35, ModuleTimestamp_36, MaybeUsedVersionNumbers_37, Var_94, &STATE_VARIABLE_MaybeStoppingReason_32_32, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_33_33);
            break;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailUsedModules_21;
        next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3 = STATE_VARIABLE_MaybeStoppingReason_32_32;
        next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_33_33;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_MaybeStoppingReason_0_3 = next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
        continue;
      }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
        *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__check__check_imported_module_intN_10_p_0(
  MR_Word TypeClassInfo_for_check_imported_module_int_file_63,
  MR_Word Globals_11,
  MR_Word ImportedModuleName_12,
  MR_Word ModuleTimestamp_13,
  MR_Word MaybeUsedVersionNumbers_14,
  MR_Word HRMM_15,
  MR_Word * MaybeStoppingReason_16,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_bool succeeded;
  MR_Word RecordedTimestamp_20 = ((MR_Word) ((MR_hl_field(0, ModuleTimestamp_13, (MR_Integer) 1))));
  MR_Word Recorded_23;
  MR_Word HaveReadModuleIntN_24;
  MR_Word HaveReadModuleIntNPrime_22;
  MR_Word Var_38 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_34, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_HaveReadModuleIntNPrime_22;

  succeeded = (Var_38 == (MR_Integer) 1);
  if (succeeded)
  {
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_63, (MR_Integer) 0)), (MR_Integer) 5))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_63)), ((MR_Box) (HRMM_15)), ((MR_Box) (ImportedModuleName_12)), &conv1_HaveReadModuleIntNPrime_22);
    if (succeeded)
    {
      HaveReadModuleIntNPrime_22 = ((MR_Word) (conv1_HaveReadModuleIntNPrime_22));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    Recorded_23 = (MR_Integer) 1;
    HaveReadModuleIntN_24 = HaveReadModuleIntNPrime_22;
  }
  else
  {
    MR_Word Var_39;
    MR_Word Var_42;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv4_HaveReadModuleIntN_24;
    MR_Box conv3_STATE_VARIABLE_IO_37;

    Recorded_23 = (MR_Integer) 0;
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (ImportedModuleName_12));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (RecordedTimestamp_20));
    }
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_63, (MR_Integer) 0)), (MR_Integer) 6))));
    func_2(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_63)), ((MR_Box) (Globals_11)), ((MR_Box) (Var_39)), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (ImportedModuleName_12)), ((MR_Box) (Var_42)), &conv4_HaveReadModuleIntN_24, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_37);
    HaveReadModuleIntN_24 = ((MR_Word) (conv4_HaveReadModuleIntN_24));
  }
  if (((MR_tag((MR_Word) HaveReadModuleIntN_24)) == (MR_Integer) 1))
  {
    MR_String FileName_25 = ((MR_String) ((MR_hl_field(1, HaveReadModuleIntN_24, (MR_Integer) 0))));
    MR_Word Errors_26 = ((MR_Word) ((MR_hl_field(1, HaveReadModuleIntN_24, (MR_Integer) 1))));

    succeeded = parse_tree__parse_error__there_are_some_errors_1_p_0(Errors_26);
    if (succeeded)
    {
      MR_Word Var_44;
      MR_Word Pieces_65;
      MR_Word Var_68;
      MR_Word Var_69;

      {
        Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_69, 1) = ((MR_Box) (FileName_25));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[38])));
      }
      {
        Pieces_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_65, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[42])));
        MR_hl_field(1, Pieces_65, 1) = ((MR_Box) (Var_68));
      }
      {
        Var_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_44, 0) = ((MR_Box) (FileName_25));
        MR_hl_field(2, Var_44, 1) = ((MR_Box) (Pieces_65));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeStoppingReason_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_44));
      }
    }
    else
      *MaybeStoppingReason_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
  }
  else
  {
    MR_Word MaybeNewTimestamp_27 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleIntN_24, (MR_Integer) 1))));
    MR_Box ParseTreeIntN_28 = (MR_hl_field(0, HaveReadModuleIntN_24, (MR_Integer) 2));
    MR_String FileName_50 = ((MR_String) ((MR_hl_field(0, HaveReadModuleIntN_24, (MR_Integer) 0))));
    MR_Word Errors_51 = ((MR_Word) ((MR_hl_field(0, HaveReadModuleIntN_24, (MR_Integer) 3))));

    succeeded = parse_tree__parse_error__there_are_some_errors_1_p_0(Errors_51);
    if (succeeded)
    {
      MR_Word Var_45;
      MR_Word Pieces_71;
      MR_Word Var_74;
      MR_Word Var_75;

      {
        Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_75, 1) = ((MR_Box) (FileName_50));
      }
      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[38])));
      }
      {
        Pieces_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_71, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[42])));
        MR_hl_field(1, Pieces_71, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_45 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_45, 0) = ((MR_Box) (FileName_50));
        MR_hl_field(2, Var_45, 1) = ((MR_Box) (Pieces_71));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeStoppingReason_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_45));
      }
      *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
    }
    else
    {
      MR_Word NewTimestamp_29;

      succeeded = (MaybeNewTimestamp_27 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NewTimestamp_29 = ((MR_Word) ((MR_hl_field(1, MaybeNewTimestamp_27, (MR_Integer) 0))));
        succeeded = libs__timestamp____Unify____timestamp_0_0(NewTimestamp_29, RecordedTimestamp_20);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_47_47;
        MR_Word UsedVersionNumbers_30;
        MR_Word VersionNumbers_31;
        MR_bool MR_CALL (* func_7)(MR_Box, MR_Box, MR_Box *);
        MR_Box conv8_VersionNumbers_31;

        switch (Recorded_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_46;
              MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, ModuleTimestamp_13, (MR_Integer) 0))));
              MR_Word Var_62 = ((MR_Unsigned) ((MR_hl_field(0, ModuleTimestamp_13, (MR_Integer) 2))) & (MR_Integer) 7);
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv6_STATE_VARIABLE_Info_47_47;

              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_46, 0) = ((MR_Box) (Var_60));
                MR_hl_field(0, Var_46, 1) = ((MR_Box) (NewTimestamp_29));
                MR_hl_field(0, Var_46, 2) = (MR_Box) ((MR_Unsigned) (Var_62));
              }
              func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_63, (MR_Integer) 0)), (MR_Integer) 7))));
              func_5(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_63)), ((MR_Box) (ImportedModuleName_12)), ((MR_Box) (FileName_50)), ((MR_Box) (Var_46)), ParseTreeIntN_28, ((MR_Box) (Errors_51)), ((MR_Box) (STATE_VARIABLE_Info_0_34)), &conv6_STATE_VARIABLE_Info_47_47);
              STATE_VARIABLE_Info_47_47 = ((MR_Word) (conv6_STATE_VARIABLE_Info_47_47));
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Info_47_47 = STATE_VARIABLE_Info_0_34;
            break;
        }
        succeeded = (MaybeUsedVersionNumbers_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          UsedVersionNumbers_30 = ((MR_Word) ((MR_hl_field(1, MaybeUsedVersionNumbers_14, (MR_Integer) 0))));
          func_7 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_63, (MR_Integer) 0)), (MR_Integer) 8))));
          succeeded = func_7(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_63)), ParseTreeIntN_28, &conv8_VersionNumbers_31);
          if (succeeded)
          {
            VersionNumbers_31 = ((MR_Word) (conv8_VersionNumbers_31));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word Checkables_32;
          void MR_CALL (* func_9)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_check_imported_module_int_file_63, (MR_Integer) 0)), (MR_Integer) 9))));
          MR_Box conv10_Checkables_32;

          func_9(((MR_Box) (TypeClassInfo_for_check_imported_module_int_file_63)), ParseTreeIntN_28, &conv10_Checkables_32);
          Checkables_32 = ((MR_Word) (conv10_Checkables_32));
          recompilation__check__check_module_used_items_8_p_0(ImportedModuleName_12, ModuleTimestamp_13, UsedVersionNumbers_30, VersionNumbers_31, Checkables_32, MaybeStoppingReason_16, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_35);
        }
        else
        {
          MR_Word Reason_33;
          MR_Word CollectAllReasons_77;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;

          {
            Reason_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Reason_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Reason_33, 1) = ((MR_Box) (FileName_50));
          }
          Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 0))));
          Var_81 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 2))));
          Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 3))));
          Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 4))));
          Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 5))));
          Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 6))));
          CollectAllReasons_77 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 7))) & (MR_Integer) 1);
          Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_47_47, (MR_Integer) 8))));
          switch (CollectAllReasons_77) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeStoppingReason_16 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Reason_33));
                }
                *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_47_47;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_78;

                *MaybeStoppingReason_16 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_78, 0) = ((MR_Box) (Reason_33));
                  MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_87));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_35 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_80));
                  MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_81));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_82));
                  MR_hl_field(0, base, 3) = ((MR_Box) (Var_83));
                  MR_hl_field(0, base, 4) = ((MR_Box) (Var_84));
                  MR_hl_field(0, base, 5) = ((MR_Box) (Var_85));
                  MR_hl_field(0, base, 6) = ((MR_Box) (Var_86));
                  MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_77));
                  MR_hl_field(0, base, 8) = ((MR_Box) (Var_78));
                }
              }
              break;
          }
        }
      }
      else
      {
        *MaybeStoppingReason_16 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_MaybeStoppingReason_22;
  MR_Word conv0_STATE_VARIABLE_Info_24;

  recompilation__check__check_name_arity_version_number_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_MaybeStoppingReason_22, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_24);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeStoppingReason_22));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0(
  MR_Word ModuleName_9,
  MR_Word OldModuleTimestamp_10,
  MR_Word UsedVersionNumbers_11,
  MR_Word NewVersionNumbers_12,
  MR_Word ParseTreeCheckables_13,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_49,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  MR_Word OldTimestamp_17 = ((MR_Word) ((MR_hl_field(0, OldModuleTimestamp_10, (MR_Integer) 1))));
  MR_Word RecompAvail_18 = ((MR_Unsigned) ((MR_hl_field(0, OldModuleTimestamp_10, (MR_Integer) 2))) & (MR_Integer) 7);
  MR_Word UsedTypeNameMap_19 = ((MR_Word) ((MR_hl_field(0, UsedVersionNumbers_11, (MR_Integer) 0))));
  MR_Word UsedTypeDefnMap_20 = ((MR_Word) ((MR_hl_field(0, UsedVersionNumbers_11, (MR_Integer) 1))));
  MR_Word UsedInstMap_21 = ((MR_Word) ((MR_hl_field(0, UsedVersionNumbers_11, (MR_Integer) 2))));
  MR_Word UsedModeMap_22 = ((MR_Word) ((MR_hl_field(0, UsedVersionNumbers_11, (MR_Integer) 3))));
  MR_Word UsedClassMap_23 = ((MR_Word) ((MR_hl_field(0, UsedVersionNumbers_11, (MR_Integer) 4))));
  MR_Word UsedInstanceMap_24 = ((MR_Word) ((MR_hl_field(0, UsedVersionNumbers_11, (MR_Integer) 5))));
  MR_Word UsedPredMap_25 = ((MR_Word) ((MR_hl_field(0, UsedVersionNumbers_11, (MR_Integer) 6))));
  MR_Word UsedFuncMap_26 = ((MR_Word) ((MR_hl_field(0, UsedVersionNumbers_11, (MR_Integer) 7))));
  MR_Word NewTypeNameMap_27 = ((MR_Word) ((MR_hl_field(0, NewVersionNumbers_12, (MR_Integer) 0))));
  MR_Word NewTypeDefnMap_28 = ((MR_Word) ((MR_hl_field(0, NewVersionNumbers_12, (MR_Integer) 1))));
  MR_Word NewInstMap_29 = ((MR_Word) ((MR_hl_field(0, NewVersionNumbers_12, (MR_Integer) 2))));
  MR_Word NewModeMap_30 = ((MR_Word) ((MR_hl_field(0, NewVersionNumbers_12, (MR_Integer) 3))));
  MR_Word NewClassMap_31 = ((MR_Word) ((MR_hl_field(0, NewVersionNumbers_12, (MR_Integer) 4))));
  MR_Word NewInstanceMap_32 = ((MR_Word) ((MR_hl_field(0, NewVersionNumbers_12, (MR_Integer) 5))));
  MR_Word NewPredMap_33 = ((MR_Word) ((MR_hl_field(0, NewVersionNumbers_12, (MR_Integer) 6))));
  MR_Word NewFuncMap_34 = ((MR_Word) ((MR_hl_field(0, NewVersionNumbers_12, (MR_Integer) 7))));
  MR_Word ItemTypeDefns_35;
  MR_Word ItemInstDefns_36;
  MR_Word ItemModeDefns_37;
  MR_Word ItemTypeClasses_38;
  MR_Word ItemPredDecls_39;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_54_54;
  MR_Word STATE_VARIABLE_Info_55_55;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_57_57;
  MR_Word STATE_VARIABLE_Info_58_58;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_60_60;
  MR_Word STATE_VARIABLE_Info_61_61;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_63_63;
  MR_Word STATE_VARIABLE_Info_64_64;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_66_66;
  MR_Word STATE_VARIABLE_Info_67_67;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_68_68;
  MR_Word STATE_VARIABLE_Info_69_69;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_71_71;
  MR_Word STATE_VARIABLE_Info_72_72;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_74_74;
  MR_Word STATE_VARIABLE_Info_75_75;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_77_77;
  MR_Word STATE_VARIABLE_Info_78_78;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_80_80;
  MR_Word STATE_VARIABLE_Info_81_81;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_83_83;
  MR_Word STATE_VARIABLE_Info_84_84;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_86_86;
  MR_Word STATE_VARIABLE_Info_87_87;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_89_89;
  MR_Word STATE_VARIABLE_Info_90_90;
  MR_Word Var_132;
  MR_Box conv3_STATE_VARIABLE_MaybeStoppingReason_54_54;
  MR_Box conv2_STATE_VARIABLE_Info_55_55;

  {
    Var_132 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_132, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[0]));
    MR_hl_field(0, Var_132, 1) = ((MR_Box) (recompilation__check__check_module_used_items_8_p_0_1));
    MR_hl_field(0, Var_132, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_132, 3) = ((MR_Box) (ModuleName_9));
    MR_hl_field(0, Var_132, 4) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_132, 5) = ((MR_Box) (NewTypeNameMap_27));
  }
  mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_132, UsedTypeNameMap_19, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_STATE_VARIABLE_MaybeStoppingReason_54_54, ((MR_Box) (STATE_VARIABLE_Info_0_50)), &conv2_STATE_VARIABLE_Info_55_55);
  STATE_VARIABLE_MaybeStoppingReason_54_54 = ((MR_Word) (conv3_STATE_VARIABLE_MaybeStoppingReason_54_54));
  STATE_VARIABLE_Info_55_55 = ((MR_Word) (conv2_STATE_VARIABLE_Info_55_55));
  recompilation__check__check_name_arity_version_numbers_8_p_0(ModuleName_9, (MR_Integer) 1, UsedTypeDefnMap_20, NewTypeDefnMap_28, STATE_VARIABLE_MaybeStoppingReason_54_54, &STATE_VARIABLE_MaybeStoppingReason_57_57, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_58_58);
  recompilation__check__check_name_arity_version_numbers_8_p_0(ModuleName_9, (MR_Integer) 2, UsedInstMap_21, NewInstMap_29, STATE_VARIABLE_MaybeStoppingReason_57_57, &STATE_VARIABLE_MaybeStoppingReason_60_60, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_61_61);
  recompilation__check__check_name_arity_version_numbers_8_p_0(ModuleName_9, (MR_Integer) 3, UsedModeMap_22, NewModeMap_30, STATE_VARIABLE_MaybeStoppingReason_60_60, &STATE_VARIABLE_MaybeStoppingReason_63_63, STATE_VARIABLE_Info_61_61, &STATE_VARIABLE_Info_64_64);
  recompilation__check__check_name_arity_version_numbers_8_p_0(ModuleName_9, (MR_Integer) 4, UsedClassMap_23, NewClassMap_31, STATE_VARIABLE_MaybeStoppingReason_63_63, &STATE_VARIABLE_MaybeStoppingReason_66_66, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_67_67);
  recompilation__check__check_item_name_version_numbers_7_p_0(ModuleName_9, UsedInstanceMap_24, NewInstanceMap_32, STATE_VARIABLE_MaybeStoppingReason_66_66, &STATE_VARIABLE_MaybeStoppingReason_68_68, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_69_69);
  recompilation__check__check_name_arity_version_numbers_8_p_0(ModuleName_9, (MR_Integer) 6, UsedPredMap_25, NewPredMap_33, STATE_VARIABLE_MaybeStoppingReason_68_68, &STATE_VARIABLE_MaybeStoppingReason_71_71, STATE_VARIABLE_Info_69_69, &STATE_VARIABLE_Info_72_72);
  recompilation__check__check_name_arity_version_numbers_8_p_0(ModuleName_9, (MR_Integer) 7, UsedFuncMap_26, NewFuncMap_34, STATE_VARIABLE_MaybeStoppingReason_71_71, &STATE_VARIABLE_MaybeStoppingReason_74_74, STATE_VARIABLE_Info_72_72, &STATE_VARIABLE_Info_75_75);
  ItemTypeDefns_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeCheckables_13, (MR_Integer) 0))));
  ItemInstDefns_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeCheckables_13, (MR_Integer) 1))));
  ItemModeDefns_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeCheckables_13, (MR_Integer) 2))));
  ItemTypeClasses_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeCheckables_13, (MR_Integer) 3))));
  ItemPredDecls_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeCheckables_13, (MR_Integer) 4))));
  recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_53_95_95_91_52_93_95_48_6_p_0(RecompAvail_18, OldTimestamp_17, UsedVersionNumbers_11, ItemTypeDefns_35, STATE_VARIABLE_MaybeStoppingReason_74_74, &STATE_VARIABLE_MaybeStoppingReason_77_77, STATE_VARIABLE_Info_75_75, &STATE_VARIABLE_Info_78_78);
  recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(RecompAvail_18, OldTimestamp_17, UsedVersionNumbers_11, ItemInstDefns_36, STATE_VARIABLE_MaybeStoppingReason_77_77, &STATE_VARIABLE_MaybeStoppingReason_80_80, STATE_VARIABLE_Info_78_78, &STATE_VARIABLE_Info_81_81);
  recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(RecompAvail_18, OldTimestamp_17, UsedVersionNumbers_11, ItemModeDefns_37, STATE_VARIABLE_MaybeStoppingReason_80_80, &STATE_VARIABLE_MaybeStoppingReason_83_83, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_84_84);
  recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_50_95_95_91_52_93_95_48_6_p_0(RecompAvail_18, OldTimestamp_17, UsedVersionNumbers_11, ItemTypeClasses_38, STATE_VARIABLE_MaybeStoppingReason_83_83, &STATE_VARIABLE_MaybeStoppingReason_86_86, STATE_VARIABLE_Info_84_84, &STATE_VARIABLE_Info_87_87);
  recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(RecompAvail_18, OldTimestamp_17, UsedVersionNumbers_11, ItemPredDecls_39, STATE_VARIABLE_MaybeStoppingReason_86_86, &STATE_VARIABLE_MaybeStoppingReason_89_89, STATE_VARIABLE_Info_87_87, &STATE_VARIABLE_Info_90_90);
  if ((STATE_VARIABLE_MaybeStoppingReason_89_89 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ModuleInstances_41;
    MR_Word UsedInstances_42;
    MR_Word UsedClasses_43;
    MR_Word AddedInstances_44;
    MR_Word AddedInstancesList_45;
    MR_Word Var_91;

    ModuleInstances_41 = mercury__map__keys_as_set_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), NewInstanceMap_32);
    UsedInstances_42 = mercury__map__keys_as_set_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), UsedInstanceMap_24);
    UsedClasses_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_90_90, (MR_Integer) 5))));
    Var_91 = mercury__set__intersect_2_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0), UsedClasses_43, ModuleInstances_41);
    mercury__set__difference_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0), Var_91, UsedInstances_42, &AddedInstances_44);
    AddedInstancesList_45 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0), AddedInstances_44);
    if ((AddedInstancesList_45 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaybeStoppingReason_49 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_90_90;
    }
    else
    {
      MR_Word FirstAddedInstance_46 = ((MR_Word) ((MR_hl_field(1, AddedInstancesList_45, (MR_Integer) 0))));
      MR_Word Reason1_48;

      {
        Reason1_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Reason1_48, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Reason1_48, 1) = ((MR_Box) (ModuleName_9));
        MR_hl_field(3, Reason1_48, 2) = ((MR_Box) (FirstAddedInstance_46));
      }
      recompilation__check__record_recompilation_reason_4_p_0(Reason1_48, STATE_VARIABLE_MaybeStoppingReason_49, STATE_VARIABLE_Info_90_90, STATE_VARIABLE_Info_51);
    }
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_49 = STATE_VARIABLE_MaybeStoppingReason_89_89;
    *STATE_VARIABLE_Info_51 = STATE_VARIABLE_Info_90_90;
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_53_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
    }
    else
    {
      MR_Word HeadItem_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailItems_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      if ((STATE_VARIABLE_MaybeStoppingReason_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_MaybeStoppingReason_25_25;
        MR_Word STATE_VARIABLE_Info_26_26;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

        recompilation__check__check_type_defn_info_for_ambiguities_8_p_0(Var_28, Var_29, Var_30, HeadItem_15, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeStoppingReason_25_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_26_26);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailItems_16;
        next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3 = STATE_VARIABLE_MaybeStoppingReason_25_25;
        next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_MaybeStoppingReason_0_3 = next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
        continue;
      }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
        *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__check__check_type_defn_info_for_ambiguities_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_MaybeStoppingReason_23;
  MR_Word conv4_STATE_VARIABLE_Info_25;

  recompilation__check__check_functor_ambiguities_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_MaybeStoppingReason_23, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_Info_25);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_MaybeStoppingReason_23));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
recompilation__check__check_type_defn_info_for_ambiguities_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_MaybeStoppingReason_23;
  MR_Word conv0_STATE_VARIABLE_Info_25;

  recompilation__check__check_functor_ambiguities_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_MaybeStoppingReason_23, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_25);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeStoppingReason_23));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_25));
}

static void MR_CALL 
recompilation__check__check_type_defn_info_for_ambiguities_8_p_0(
  MR_Word RecompAvail_9,
  MR_Word OldTimestamp_10,
  MR_Word VersionNumbers_11,
  MR_Word ItemTypeDefn_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_24,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_25,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_Word TypeSymName_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_12, (MR_Integer) 0))));
  MR_Word TypeParams_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_12, (MR_Integer) 1))));
  MR_Word TypeBody_17 = ((MR_Word) ((MR_hl_field(0, ItemTypeDefn_12, (MR_Integer) 2))));
  MR_Integer TypeArity_21;
  MR_Word NeedsCheck_22;
  MR_Word Var_28;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_30_30;
  MR_Word STATE_VARIABLE_Info_31_31;

  mercury__list__length_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[9]), TypeParams_16, &TypeArity_21);
  Var_28 = ((MR_Word) ((MR_hl_field(0, VersionNumbers_11, (MR_Integer) 0))));
  recompilation__check__check_for_simple_item_ambiguity_11_p_0(RecompAvail_9, OldTimestamp_10, Var_28, (MR_Integer) 0, TypeSymName_15, TypeArity_21, &NeedsCheck_22, STATE_VARIABLE_MaybeStoppingReason_0_24, &STATE_VARIABLE_MaybeStoppingReason_30_30, STATE_VARIABLE_Info_0_26, &STATE_VARIABLE_Info_31_31);
  switch (NeedsCheck_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_MaybeStoppingReason_25 = STATE_VARIABLE_MaybeStoppingReason_30_30;
        *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_31_31;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeCtor_23;

        {
          TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_23, 0) = ((MR_Box) (TypeSymName_15));
          MR_hl_field(0, TypeCtor_23, 1) = ((MR_Box) (TypeArity_21));
        }
        switch (MR_tag((MR_Word) TypeBody_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DetailsDu_40 = (MR_Word) ((MR_Word) (TypeBody_17));
              MR_Word Ctors_41 = ((MR_Word) ((MR_hl_field(0, DetailsDu_40, (MR_Integer) 0))));
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Box conv3_STATE_VARIABLE_MaybeStoppingReason_25;
              MR_Box conv2_STATE_VARIABLE_Info_27;

              {
                Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_46, 0) = ((MR_Box) (&recompilation__check_scalar_common_8[0]));
                MR_hl_field(0, Var_46, 1) = ((MR_Box) (recompilation__check__check_type_defn_info_for_ambiguities_8_p_0_1));
                MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_46, 3) = ((MR_Box) (RecompAvail_9));
                MR_hl_field(0, Var_46, 4) = ((MR_Box) (TypeCtor_23));
              }
              Var_47 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_41);
              mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_46, Var_47, ((MR_Box) (STATE_VARIABLE_MaybeStoppingReason_30_30)), &conv3_STATE_VARIABLE_MaybeStoppingReason_25, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv2_STATE_VARIABLE_Info_27);
              *STATE_VARIABLE_MaybeStoppingReason_25 = ((MR_Word) (conv3_STATE_VARIABLE_MaybeStoppingReason_25));
              *STATE_VARIABLE_Info_27 = ((MR_Word) (conv2_STATE_VARIABLE_Info_27));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsSub_44 = (MR_Word) (MR_body((MR_Word) (TypeBody_17), (MR_Integer) 1));
              MR_Word Ctors_51 = ((MR_Word) ((MR_hl_field(0, DetailsSub_44, (MR_Integer) 1))));
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Box conv7_STATE_VARIABLE_MaybeStoppingReason_25;
              MR_Box conv6_STATE_VARIABLE_Info_27;

              {
                Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_52, 0) = ((MR_Box) (&recompilation__check_scalar_common_8[0]));
                MR_hl_field(0, Var_52, 1) = ((MR_Box) (recompilation__check__check_type_defn_info_for_ambiguities_8_p_0_2));
                MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_52, 3) = ((MR_Box) (RecompAvail_9));
                MR_hl_field(0, Var_52, 4) = ((MR_Box) (TypeCtor_23));
              }
              Var_53 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_51);
              mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_52, Var_53, ((MR_Box) (STATE_VARIABLE_MaybeStoppingReason_30_30)), &conv7_STATE_VARIABLE_MaybeStoppingReason_25, ((MR_Box) (STATE_VARIABLE_Info_31_31)), &conv6_STATE_VARIABLE_Info_27);
              *STATE_VARIABLE_MaybeStoppingReason_25 = ((MR_Word) (conv7_STATE_VARIABLE_MaybeStoppingReason_25));
              *STATE_VARIABLE_Info_27 = ((MR_Word) (conv6_STATE_VARIABLE_Info_27));
            }
            break;
          case (MR_Integer) 2:
            {
              *STATE_VARIABLE_MaybeStoppingReason_25 = STATE_VARIABLE_MaybeStoppingReason_30_30;
              *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_31_31;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeBody_17, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *STATE_VARIABLE_MaybeStoppingReason_25 = STATE_VARIABLE_MaybeStoppingReason_30_30;
                  *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_31_31;
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_MaybeStoppingReason_25 = STATE_VARIABLE_MaybeStoppingReason_30_30;
                  *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_31_31;
                }
                break;
              case (MR_Integer) 2:
                {
                  *STATE_VARIABLE_MaybeStoppingReason_25 = STATE_VARIABLE_MaybeStoppingReason_30_30;
                  *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_31_31;
                }
                break;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_52_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
    }
    else
    {
      MR_Word HeadItem_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailItems_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      if ((STATE_VARIABLE_MaybeStoppingReason_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_MaybeStoppingReason_25_25;
        MR_Word STATE_VARIABLE_Info_26_26;
        MR_Word InstSymName_31 = ((MR_Word) ((MR_hl_field(0, HeadItem_15, (MR_Integer) 0))));
        MR_Word InstParams_32 = ((MR_Word) ((MR_hl_field(0, HeadItem_15, (MR_Integer) 1))));
        MR_Integer InstArity_38;
        MR_Word Var_40;
        MR_Word _NeedsCheck_39;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

        mercury__list__length_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), InstParams_32, &InstArity_38);
        Var_40 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 2))));
        recompilation__check__check_for_simple_item_ambiguity_11_p_0(Var_28, Var_29, Var_40, (MR_Integer) 2, InstSymName_31, InstArity_38, &_NeedsCheck_39, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeStoppingReason_25_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_26_26);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailItems_16;
        next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3 = STATE_VARIABLE_MaybeStoppingReason_25_25;
        next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_MaybeStoppingReason_0_3 = next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
        continue;
      }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
        *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_51_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
    }
    else
    {
      MR_Word HeadItem_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailItems_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      if ((STATE_VARIABLE_MaybeStoppingReason_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_MaybeStoppingReason_25_25;
        MR_Word STATE_VARIABLE_Info_26_26;
        MR_Word ModeSymName_31 = ((MR_Word) ((MR_hl_field(0, HeadItem_15, (MR_Integer) 0))));
        MR_Word ModeParams_32 = ((MR_Word) ((MR_hl_field(0, HeadItem_15, (MR_Integer) 1))));
        MR_Integer ModeArity_37;
        MR_Word Var_39;
        MR_Word _NeedsCheck_38;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

        mercury__list__length_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), ModeParams_32, &ModeArity_37);
        Var_39 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 3))));
        recompilation__check__check_for_simple_item_ambiguity_11_p_0(Var_28, Var_29, Var_39, (MR_Integer) 3, ModeSymName_31, ModeArity_37, &_NeedsCheck_38, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeStoppingReason_25_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_26_26);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailItems_16;
        next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3 = STATE_VARIABLE_MaybeStoppingReason_25_25;
        next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_MaybeStoppingReason_0_3 = next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
        continue;
      }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
        *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_50_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
    }
    else
    {
      MR_Word HeadItem_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailItems_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      if ((STATE_VARIABLE_MaybeStoppingReason_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_MaybeStoppingReason_25_25;
        MR_Word STATE_VARIABLE_Info_26_26;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

        recompilation__check__check_typeclass_info_for_ambiguities_8_p_0(Var_28, Var_29, Var_30, HeadItem_15, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeStoppingReason_25_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_26_26);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailItems_16;
        next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3 = STATE_VARIABLE_MaybeStoppingReason_25_25;
        next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_MaybeStoppingReason_0_3 = next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
        continue;
      }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
        *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__check__check_typeclass_info_for_ambiguities_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_MaybeStoppingReason_30;
  MR_Word conv0_STATE_VARIABLE_Info_32;

  recompilation__check__check_class_decl_for_ambiguities_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_MaybeStoppingReason_30, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_32);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeStoppingReason_30));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_32));
}

static void MR_CALL 
recompilation__check__check_typeclass_info_for_ambiguities_8_p_0(
  MR_Word RecompAvail_9,
  MR_Word OldTimestamp_10,
  MR_Word VersionNumbers_11,
  MR_Word ItemTypeClass_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_26,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word TypeClassSymName_15 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_12, (MR_Integer) 0))));
  MR_Word TypeClassParams_16 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_12, (MR_Integer) 1))));
  MR_Word Interface_19 = ((MR_Word) ((MR_hl_field(0, ItemTypeClass_12, (MR_Integer) 4))));
  MR_Integer TypeClassArity_23;
  MR_Word NeedsCheck_24;
  MR_Word Var_30;
  MR_Word STATE_VARIABLE_MaybeStoppingReason_32_32;
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word ClassDecls_25;

  mercury__list__length_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[9]), TypeClassParams_16, &TypeClassArity_23);
  Var_30 = ((MR_Word) ((MR_hl_field(0, VersionNumbers_11, (MR_Integer) 4))));
  recompilation__check__check_for_simple_item_ambiguity_11_p_0(RecompAvail_9, OldTimestamp_10, Var_30, (MR_Integer) 4, TypeClassSymName_15, TypeClassArity_23, &NeedsCheck_24, STATE_VARIABLE_MaybeStoppingReason_0_26, &STATE_VARIABLE_MaybeStoppingReason_32_32, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_33_33);
  succeeded = (NeedsCheck_24 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (Interface_19 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      ClassDecls_25 = ((MR_Word) ((MR_hl_field(1, Interface_19, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word Var_34;
    MR_Box conv3_STATE_VARIABLE_MaybeStoppingReason_27;
    MR_Box conv2_STATE_VARIABLE_Info_29;

    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&recompilation__check_scalar_common_6[1]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (recompilation__check__check_typeclass_info_for_ambiguities_8_p_0_1));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (RecompAvail_9));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (OldTimestamp_10));
      MR_hl_field(0, Var_34, 5) = ((MR_Box) (VersionNumbers_11));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_34, ClassDecls_25, ((MR_Box) (STATE_VARIABLE_MaybeStoppingReason_32_32)), &conv3_STATE_VARIABLE_MaybeStoppingReason_27, ((MR_Box) (STATE_VARIABLE_Info_33_33)), &conv2_STATE_VARIABLE_Info_29);
    *STATE_VARIABLE_MaybeStoppingReason_27 = ((MR_Word) (conv3_STATE_VARIABLE_MaybeStoppingReason_27));
    *STATE_VARIABLE_Info_29 = ((MR_Word) (conv2_STATE_VARIABLE_Info_29));
  }
  else
  {
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_33_33;
    *STATE_VARIABLE_MaybeStoppingReason_27 = STATE_VARIABLE_MaybeStoppingReason_32_32;
  }
}

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_MaybeStoppingReason_28;
  MR_Word conv2_STATE_VARIABLE_Info_30;

  recompilation__check__check_for_simple_item_ambiguity_2_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_MaybeStoppingReason_28, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Info_30);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_MaybeStoppingReason_28));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Info_30));
}

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_11_p_0(
  MR_Word RecompAvail_12,
  MR_Word UsedFileTimestamp_13,
  MR_Word VersionMap_14,
  MR_Word ItemType_15,
  MR_Word SymName_16,
  MR_Integer Arity_17,
  MR_Word * NeedsCheck_18,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_26,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_MaybeStoppingReason_0_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NameArity_81;
    MR_String Var_83;
    MR_Word UsedVersionNumber_82;
    MR_Box conv0_UsedVersionNumber_82;

    Var_83 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
    {
      NameArity_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NameArity_81, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, NameArity_81, 1) = ((MR_Box) (Arity_17));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), VersionMap_14, ((MR_Box) (NameArity_81)), &conv0_UsedVersionNumber_82);
    if (succeeded)
    {
      UsedVersionNumber_82 = ((MR_Word) (conv0_UsedVersionNumber_82));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_88;

      libs__timestamp____Compare____timestamp_0_0(&Var_88, UsedVersionNumber_82, UsedFileTimestamp_13);
      succeeded = ((MR_Integer) 2 == Var_88);
    }
    else
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word UsedItems_22;
      MR_Word UsedItemMap_23;
      MR_Word NameArity_24;
      MR_String Var_32;
      MR_Word MatchingQualifiers_25;
      MR_Box conv1_MatchingQualifiers_25;

      *NeedsCheck_18 = (MR_Integer) 1;
      UsedItems_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 4))));
      switch (ItemType_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          UsedItemMap_23 = ((MR_Word) ((MR_hl_field(0, UsedItems_22, (MR_Integer) 2))));
          break;
        case (MR_Integer) 3:
          UsedItemMap_23 = ((MR_Word) ((MR_hl_field(0, UsedItems_22, (MR_Integer) 3))));
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.check_for_simple_item_ambiguity\'/11", (MR_String) "type_body_item");
            return;
          }
          break;
        case (MR_Integer) 0:
          UsedItemMap_23 = ((MR_Word) ((MR_hl_field(0, UsedItems_22, (MR_Integer) 0))));
          break;
        case (MR_Integer) 4:
          UsedItemMap_23 = ((MR_Word) ((MR_hl_field(0, UsedItems_22, (MR_Integer) 4))));
          break;
      }
      Var_32 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
      {
        NameArity_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NameArity_24, 0) = ((MR_Box) (Var_32));
        MR_hl_field(0, NameArity_24, 1) = ((MR_Box) (Arity_17));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&recompilation__check_scalar_common_2[0]), UsedItemMap_23, ((MR_Box) (NameArity_24)), &conv1_MatchingQualifiers_25);
      if (succeeded)
      {
        MatchingQualifiers_25 = ((MR_Word) (conv1_MatchingQualifiers_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_33;
        MR_Box conv5_STATE_VARIABLE_MaybeStoppingReason_27;
        MR_Box conv4_STATE_VARIABLE_Info_29;

        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_33, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[2]));
          MR_hl_field(0, Var_33, 1) = ((MR_Box) (recompilation__check__check_for_simple_item_ambiguity_11_p_0_1));
          MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_33, 3) = ((MR_Box) (ItemType_15));
          MR_hl_field(0, Var_33, 4) = ((MR_Box) (RecompAvail_12));
          MR_hl_field(0, Var_33, 5) = ((MR_Box) (SymName_16));
          MR_hl_field(0, Var_33, 6) = ((MR_Box) (Arity_17));
        }
        mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_33, MatchingQualifiers_25, ((MR_Box) (STATE_VARIABLE_MaybeStoppingReason_0_26)), &conv5_STATE_VARIABLE_MaybeStoppingReason_27, ((MR_Box) (STATE_VARIABLE_Info_0_28)), &conv4_STATE_VARIABLE_Info_29);
        *STATE_VARIABLE_MaybeStoppingReason_27 = ((MR_Word) (conv5_STATE_VARIABLE_MaybeStoppingReason_27));
        *STATE_VARIABLE_Info_29 = ((MR_Word) (conv4_STATE_VARIABLE_Info_29));
      }
      else
      {
        *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
        *STATE_VARIABLE_MaybeStoppingReason_27 = STATE_VARIABLE_MaybeStoppingReason_0_26;
      }
    }
    else
    {
      *NeedsCheck_18 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
      *STATE_VARIABLE_MaybeStoppingReason_27 = STATE_VARIABLE_MaybeStoppingReason_0_26;
    }
  }
  else
  {
    *NeedsCheck_18 = (MR_Integer) 0;
    *STATE_VARIABLE_MaybeStoppingReason_27 = STATE_VARIABLE_MaybeStoppingReason_0_26;
    *STATE_VARIABLE_Info_29 = STATE_VARIABLE_Info_0_28;
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_109_115_95_102_111_114_95_97_109_98_105_103_117_105_116_105_101_115_95_95_104_111_49_95_95_91_52_93_95_48_6_p_0(
  MR_Word Var_28,
  MR_Word Var_29,
  MR_Word Var_30,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_3,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
    }
    else
    {
      MR_Word HeadItem_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailItems_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

      if ((STATE_VARIABLE_MaybeStoppingReason_0_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_MaybeStoppingReason_25_25;
        MR_Word STATE_VARIABLE_Info_26_26;
        MR_Word PredSymName_31 = ((MR_Word) ((MR_hl_field(0, HeadItem_15, (MR_Integer) 0))));
        MR_Word PredOrFunc_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadItem_15, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word Args_33 = ((MR_Word) ((MR_hl_field(0, HeadItem_15, (MR_Integer) 2))));
        MR_Word WithType_34 = ((MR_Word) ((MR_hl_field(0, HeadItem_15, (MR_Integer) 3))));
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_5;

        recompilation__check__check_for_pred_or_func_item_ambiguity_12_p_0((MR_Integer) 0, Var_28, Var_29, Var_30, PredOrFunc_32, PredSymName_31, Args_33, WithType_34, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_MaybeStoppingReason_25_25, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_26_26);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TailItems_16;
        next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3 = STATE_VARIABLE_MaybeStoppingReason_25_25;
        next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_26_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_MaybeStoppingReason_0_3 = next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_3;
        STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
        continue;
      }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_4 = STATE_VARIABLE_MaybeStoppingReason_0_3;
        *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_MaybeStoppingReason_22;
  MR_Word conv3_STATE_VARIABLE_Info_24;

  recompilation__check__check_for_pred_or_func_item_ambiguity_1_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_MaybeStoppingReason_22, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_Info_24);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_MaybeStoppingReason_22));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_12_p_0(
  MR_Word NeedsCheck_13,
  MR_Word RecompAvail_14,
  MR_Word OldTimestamp_15,
  MR_Word VersionNumbers_16,
  MR_Word PredOrFunc_17,
  MR_Word SymName_18,
  MR_Word Args_19,
  MR_Word WithType_20,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_41,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_42,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_MaybeStoppingReason_0_41 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer PredFormArityInt_24;
    MR_Integer UserArityInt_25;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Args_19, &PredFormArityInt_24);
    if ((WithType_20 == (MR_Word) ((MR_Unsigned) 0U)))
      parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_17, &UserArityInt_25, PredFormArityInt_24);
    else
      UserArityInt_25 = PredFormArityInt_24;
    {
      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(0, VersionNumbers_16, (MR_Integer) 7))));
      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, VersionNumbers_16, (MR_Integer) 6))));

      switch (PredOrFunc_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word NameArity_118;
            MR_String Var_120;
            MR_Word UsedVersionNumber_119;
            MR_Box conv0_UsedVersionNumber_119;

            Var_120 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
            {
              NameArity_118 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameArity_118, 0) = ((MR_Box) (Var_120));
              MR_hl_field(0, NameArity_118, 1) = ((MR_Box) (UserArityInt_25));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_102, ((MR_Box) (NameArity_118)), &conv0_UsedVersionNumber_119);
            if (succeeded)
            {
              UsedVersionNumber_119 = ((MR_Word) (conv0_UsedVersionNumber_119));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_125;

              libs__timestamp____Compare____timestamp_0_0(&Var_125, UsedVersionNumber_119, OldTimestamp_15);
              succeeded = ((MR_Integer) 2 == Var_125);
            }
            else
              succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word NameArity_126;
            MR_String Var_128;
            MR_Word UsedVersionNumber_127;
            MR_Box conv1_UsedVersionNumber_127;

            Var_128 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
            {
              NameArity_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameArity_126, 0) = ((MR_Box) (Var_128));
              MR_hl_field(0, NameArity_126, 1) = ((MR_Box) (UserArityInt_25));
            }
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_103, ((MR_Box) (NameArity_126)), &conv1_UsedVersionNumber_127);
            if (succeeded)
            {
              UsedVersionNumber_127 = ((MR_Word) (conv1_UsedVersionNumber_127));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word Var_133;

              libs__timestamp____Compare____timestamp_0_0(&Var_133, UsedVersionNumber_127, OldTimestamp_15);
              succeeded = ((MR_Integer) 2 == Var_133);
            }
            else
              succeeded = MR_TRUE;
          }
          break;
      }
    }
    if (!(succeeded))
      succeeded = (NeedsCheck_13 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word UsedItems_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, (MR_Integer) 4))));
      MR_Word ItemType_30;
      MR_Word UsedItemMap_31;
      MR_String Name_32;
      MR_Word InvPredId_34;
      MR_Word STATE_VARIABLE_MaybeStoppingReason_47_47;
      MR_Word STATE_VARIABLE_Info_48_48;
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, UsedItems_29, (MR_Integer) 7))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, UsedItems_29, (MR_Integer) 6))));
      MR_Word MatchingArityList_33;
      MR_Box conv2_MatchingArityList_33;

      switch (PredOrFunc_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            ItemType_30 = (MR_Integer) 7;
            UsedItemMap_31 = Var_110;
          }
          break;
        case (MR_Integer) 0:
          {
            ItemType_30 = (MR_Integer) 6;
            UsedItemMap_31 = Var_111;
          }
          break;
      }
      Name_32 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_18);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[12]), UsedItemMap_31, ((MR_Box) (Name_32)), &conv2_MatchingArityList_33);
      if (succeeded)
      {
        MatchingArityList_33 = ((MR_Word) (conv2_MatchingArityList_33));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_45;
        MR_Box conv6_STATE_VARIABLE_MaybeStoppingReason_47_47;
        MR_Box conv5_STATE_VARIABLE_Info_48_48;

        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[1]));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) (recompilation__check__check_for_pred_or_func_item_ambiguity_12_p_0_1));
          MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_45, 3) = ((MR_Box) (WithType_20));
          MR_hl_field(0, Var_45, 4) = ((MR_Box) (ItemType_30));
          MR_hl_field(0, Var_45, 5) = ((MR_Box) (RecompAvail_14));
          MR_hl_field(0, Var_45, 6) = ((MR_Box) (SymName_18));
          MR_hl_field(0, Var_45, 7) = ((MR_Box) (UserArityInt_25));
        }
        mercury__list__foldl2_6_p_0((MR_Word) (&recompilation__check_scalar_common_2[3]), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_45, MatchingArityList_33, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_STATE_VARIABLE_MaybeStoppingReason_47_47, ((MR_Box) (STATE_VARIABLE_Info_0_43)), &conv5_STATE_VARIABLE_Info_48_48);
        STATE_VARIABLE_MaybeStoppingReason_47_47 = ((MR_Word) (conv6_STATE_VARIABLE_MaybeStoppingReason_47_47));
        STATE_VARIABLE_Info_48_48 = ((MR_Word) (conv5_STATE_VARIABLE_Info_48_48));
      }
      else
      {
        STATE_VARIABLE_MaybeStoppingReason_47_47 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_48_48 = STATE_VARIABLE_Info_0_43;
      }
      InvPredId_34 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      if (((MR_tag((MR_Word) SymName_18)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_35 = ((MR_Word) ((MR_hl_field(1, SymName_18, (MR_Integer) 0))));
        MR_Word AritiesToMatch_38;
        MR_Word ResolvedFunctor_39;
        MR_Word Var_50;

        if ((WithType_20 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            AritiesToMatch_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, AritiesToMatch_38, 0) = ((MR_Box) (UserArityInt_25));
          }
        else
          AritiesToMatch_38 = (MR_Word) ((MR_Unsigned) 0U);
        Var_50 = (MR_Word) (PredFormArityInt_24);
        {
          ResolvedFunctor_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ResolvedFunctor_39, 0) = ((MR_Box) (InvPredId_34));
          MR_hl_field(0, ResolvedFunctor_39, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
          MR_hl_field(0, ResolvedFunctor_39, 2) = ((MR_Box) (ModuleName_35));
          MR_hl_field(0, ResolvedFunctor_39, 3) = ((MR_Box) (Var_50));
        }
        recompilation__check__check_functor_ambiguities_by_name_8_p_0(RecompAvail_14, SymName_18, AritiesToMatch_38, ResolvedFunctor_39, STATE_VARIABLE_MaybeStoppingReason_47_47, STATE_VARIABLE_MaybeStoppingReason_42, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_44);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.check_for_pred_or_func_item_ambiguity\'/12", (MR_String) "unqualified predicate name");
          return;
        }
    }
    else
    {
      *STATE_VARIABLE_MaybeStoppingReason_42 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
    }
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_42 = STATE_VARIABLE_MaybeStoppingReason_0_41;
    *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_0_43;
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_by_name_8_p_0(
  MR_Word RecompAvail_9,
  MR_Word Name_10,
  MR_Word MatchArity_11,
  MR_Word ResolvedCtor_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_20,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_bool succeeded;

  if ((STATE_VARIABLE_MaybeStoppingReason_0_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word UsedItems_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 4))));
    MR_String UnqualName_17;
    MR_Word UsedCtors_18;
    MR_Word UsedCtorAL_19;
    MR_Box conv0_UsedCtorAL_19;

    UnqualName_17 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_10);
    UsedCtors_18 = ((MR_Word) ((MR_hl_field(0, UsedItems_16, (MR_Integer) 5))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[14]), UsedCtors_18, ((MR_Box) (UnqualName_17)), &conv0_UsedCtorAL_19);
    if (succeeded)
    {
      UsedCtorAL_19 = ((MR_Word) (conv0_UsedCtorAL_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      recompilation__check__check_functor_ambiguities_2_9_p_0(RecompAvail_9, Name_10, MatchArity_11, ResolvedCtor_12, UsedCtorAL_19, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_MaybeStoppingReason_21, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    else
    {
      *STATE_VARIABLE_MaybeStoppingReason_21 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_21 = STATE_VARIABLE_MaybeStoppingReason_0_20;
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_MaybeStoppingReason_25;
  MR_Word conv8_STATE_VARIABLE_Info_27;

  recompilation__check__check_functor_ambiguity_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv9_STATE_VARIABLE_MaybeStoppingReason_25, ((MR_Word) (wrapper_arg_5)), &conv8_STATE_VARIABLE_Info_27);
  *wrapper_arg_4 = ((MR_Box) (conv9_STATE_VARIABLE_MaybeStoppingReason_25));
  *wrapper_arg_6 = ((MR_Box) (conv8_STATE_VARIABLE_Info_27));
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_MaybeStoppingReason_25;
  MR_Word conv4_STATE_VARIABLE_Info_27;

  recompilation__check__check_functor_ambiguity_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_MaybeStoppingReason_25, ((MR_Word) (wrapper_arg_5)), &conv4_STATE_VARIABLE_Info_27);
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_MaybeStoppingReason_25));
  *wrapper_arg_6 = ((MR_Box) (conv4_STATE_VARIABLE_Info_27));
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_MaybeStoppingReason_25;
  MR_Word conv0_STATE_VARIABLE_Info_27;

  recompilation__check__check_functor_ambiguity_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_MaybeStoppingReason_25, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_27);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeStoppingReason_25));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_27));
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_9_p_0(
  MR_Word RecompAvail_1,
  MR_Word Name_2,
  MR_Word MatchArity_3,
  MR_Word ResolvedCtor_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_6,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      *STATE_VARIABLE_MaybeStoppingReason_7 = STATE_VARIABLE_MaybeStoppingReason_0_6;
    }
    else
    {
      MR_Integer Arity_24;
      MR_Word UsedCtorMap_25;
      MR_Word UsedCtorAL_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));

      Arity_24 = ((MR_Integer) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
      UsedCtorMap_25 = ((MR_Word) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
      if ((STATE_VARIABLE_MaybeStoppingReason_0_6 == (MR_Word) ((MR_Unsigned) 0U)))
        switch (MR_tag((MR_Word) MatchArity_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_38;
              MR_Word STATE_VARIABLE_MaybeStoppingReason_40_40;
              MR_Word STATE_VARIABLE_Info_41_41;
              MR_Box conv3_STATE_VARIABLE_MaybeStoppingReason_40_40;
              MR_Box conv2_STATE_VARIABLE_Info_41_41;
              MR_Word next_value_of_HeadVar__5_5;
              MR_Word next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_6;
              MR_Word next_value_of_STATE_VARIABLE_Info_0_8;

              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_38, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[0]));
                MR_hl_field(0, Var_38, 1) = ((MR_Box) (recompilation__check__check_functor_ambiguities_2_9_p_0_1));
                MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_38, 3) = ((MR_Box) (RecompAvail_1));
                MR_hl_field(0, Var_38, 4) = ((MR_Box) (Name_2));
                MR_hl_field(0, Var_38, 5) = ((MR_Box) (Arity_24));
                MR_hl_field(0, Var_38, 6) = ((MR_Box) (ResolvedCtor_4));
              }
              mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[13]), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_38, UsedCtorMap_25, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_STATE_VARIABLE_MaybeStoppingReason_40_40, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_41_41);
              STATE_VARIABLE_MaybeStoppingReason_40_40 = ((MR_Word) (conv3_STATE_VARIABLE_MaybeStoppingReason_40_40));
              STATE_VARIABLE_Info_41_41 = ((MR_Word) (conv2_STATE_VARIABLE_Info_41_41));
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__5_5 = UsedCtorAL_26;
              next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_6 = STATE_VARIABLE_MaybeStoppingReason_40_40;
              next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_41_41;
              HeadVar__5_5 = next_value_of_HeadVar__5_5;
              STATE_VARIABLE_MaybeStoppingReason_0_6 = next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_6;
              STATE_VARIABLE_Info_0_8 = next_value_of_STATE_VARIABLE_Info_0_8;
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArityToMatch_30 = ((MR_Integer) ((MR_hl_field(1, MatchArity_3, (MR_Integer) 0))));

              succeeded = (ArityToMatch_30 == Arity_24);
              if (succeeded)
              {
                MR_Word Var_55;
                MR_Box conv7_STATE_VARIABLE_MaybeStoppingReason_7;
                MR_Box conv6_STATE_VARIABLE_Info_9;

                {
                  Var_55 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_55, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[0]));
                  MR_hl_field(0, Var_55, 1) = ((MR_Box) (recompilation__check__check_functor_ambiguities_2_9_p_0_2));
                  MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(0, Var_55, 3) = ((MR_Box) (RecompAvail_1));
                  MR_hl_field(0, Var_55, 4) = ((MR_Box) (Name_2));
                  MR_hl_field(0, Var_55, 5) = ((MR_Box) (Arity_24));
                  MR_hl_field(0, Var_55, 6) = ((MR_Box) (ResolvedCtor_4));
                }
                mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[13]), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_55, UsedCtorMap_25, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_STATE_VARIABLE_MaybeStoppingReason_7, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv6_STATE_VARIABLE_Info_9);
                *STATE_VARIABLE_MaybeStoppingReason_7 = ((MR_Word) (conv7_STATE_VARIABLE_MaybeStoppingReason_7));
                *STATE_VARIABLE_Info_9 = ((MR_Word) (conv6_STATE_VARIABLE_Info_9));
              }
              else
              {
                succeeded = (Arity_24 < ArityToMatch_30);
                if (succeeded)
                {
                  MR_Word next_value_of_HeadVar__5_5 = UsedCtorAL_26;

                  // direct tailcall eliminated
                  ;
                  HeadVar__5_5 = next_value_of_HeadVar__5_5;
                  continue;
                }
                else
                {
                  *STATE_VARIABLE_MaybeStoppingReason_7 = STATE_VARIABLE_MaybeStoppingReason_0_6;
                  *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArityToMatch_44 = ((MR_Integer) ((MR_hl_field(2, MatchArity_3, (MR_Integer) 0))));

              succeeded = (Arity_24 <= ArityToMatch_44);
              if (succeeded)
              {
                MR_Word Var_74;
                MR_Word STATE_VARIABLE_MaybeStoppingReason_40_99;
                MR_Word STATE_VARIABLE_Info_41_100;
                MR_Box conv11_STATE_VARIABLE_MaybeStoppingReason_40_99;
                MR_Box conv10_STATE_VARIABLE_Info_41_100;
                MR_Word next_value_of_HeadVar__5_5;
                MR_Word next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_6;
                MR_Word next_value_of_STATE_VARIABLE_Info_0_8;

                {
                  Var_74 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_74, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[0]));
                  MR_hl_field(0, Var_74, 1) = ((MR_Box) (recompilation__check__check_functor_ambiguities_2_9_p_0_3));
                  MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(0, Var_74, 3) = ((MR_Box) (RecompAvail_1));
                  MR_hl_field(0, Var_74, 4) = ((MR_Box) (Name_2));
                  MR_hl_field(0, Var_74, 5) = ((MR_Box) (Arity_24));
                  MR_hl_field(0, Var_74, 6) = ((MR_Box) (ResolvedCtor_4));
                }
                mercury__map__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[13]), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_74, UsedCtorMap_25, ((MR_Box) ((MR_Unsigned) 0U)), &conv11_STATE_VARIABLE_MaybeStoppingReason_40_99, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv10_STATE_VARIABLE_Info_41_100);
                STATE_VARIABLE_MaybeStoppingReason_40_99 = ((MR_Word) (conv11_STATE_VARIABLE_MaybeStoppingReason_40_99));
                STATE_VARIABLE_Info_41_100 = ((MR_Word) (conv10_STATE_VARIABLE_Info_41_100));
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__5_5 = UsedCtorAL_26;
                next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_6 = STATE_VARIABLE_MaybeStoppingReason_40_99;
                next_value_of_STATE_VARIABLE_Info_0_8 = STATE_VARIABLE_Info_41_100;
                HeadVar__5_5 = next_value_of_HeadVar__5_5;
                STATE_VARIABLE_MaybeStoppingReason_0_6 = next_value_of_STATE_VARIABLE_MaybeStoppingReason_0_6;
                STATE_VARIABLE_Info_0_8 = next_value_of_STATE_VARIABLE_Info_0_8;
                continue;
              }
              else
              {
                *STATE_VARIABLE_MaybeStoppingReason_7 = STATE_VARIABLE_MaybeStoppingReason_0_6;
                *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
              }
            }
            break;
        }
      else
      {
        *STATE_VARIABLE_MaybeStoppingReason_7 = STATE_VARIABLE_MaybeStoppingReason_0_6;
        *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__check__record_recompilation_reason_4_p_0(
  MR_Word Reason_5,
  MR_Word * MaybeStoppingReason_6,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_Word CollectAllReasons_8 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 7))) & (MR_Integer) 1);
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 0))));
  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 2))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 3))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 4))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 5))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 6))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_9, (MR_Integer) 8))));

  switch (CollectAllReasons_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeStoppingReason_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Reason_5));
        }
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_12;

        *MaybeStoppingReason_6 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (Reason_5));
          MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_21));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
          MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_15));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_16));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_17));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_18));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_19));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_20));
          MR_hl_field(0, base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_8));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_12));
        }
      }
      break;
  }
}

static void MR_CALL 
recompilation__check__check_item_name_version_numbers_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_MaybeStoppingReason_19;
  MR_Word conv0_STATE_VARIABLE_Info_21;

  recompilation__check__check_item_name_version_number_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_MaybeStoppingReason_19, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_21);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeStoppingReason_19));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_21));
}

static void MR_CALL 
recompilation__check__check_item_name_version_numbers_7_p_0(
  MR_Word ModuleName_8,
  MR_Word UsedVersionMap_9,
  MR_Word NewVersionMap_10,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_13,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word Var_17;
  MR_Box conv3_STATE_VARIABLE_MaybeStoppingReason_14;
  MR_Box conv2_STATE_VARIABLE_Info_16;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&recompilation__check_scalar_common_6[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (recompilation__check__check_item_name_version_numbers_7_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ModuleName_8));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (NewVersionMap_10));
  }
  mercury__map__foldl2_6_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_recomp_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_17, UsedVersionMap_9, ((MR_Box) (STATE_VARIABLE_MaybeStoppingReason_0_13)), &conv3_STATE_VARIABLE_MaybeStoppingReason_14, ((MR_Box) (STATE_VARIABLE_Info_0_15)), &conv2_STATE_VARIABLE_Info_16);
  *STATE_VARIABLE_MaybeStoppingReason_14 = ((MR_Word) (conv3_STATE_VARIABLE_MaybeStoppingReason_14));
  *STATE_VARIABLE_Info_16 = ((MR_Word) (conv2_STATE_VARIABLE_Info_16));
}

static void MR_CALL 
recompilation__check__check_name_arity_version_numbers_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_MaybeStoppingReason_22;
  MR_Word conv0_STATE_VARIABLE_Info_24;

  recompilation__check__check_name_arity_version_number_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_MaybeStoppingReason_22, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_24);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeStoppingReason_22));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_24));
}

static void MR_CALL 
recompilation__check__check_name_arity_version_numbers_8_p_0(
  MR_Word ModuleName_9,
  MR_Word ItemType_10,
  MR_Word UsedVersionMap_11,
  MR_Word NewVersionMap_12,
  MR_Word STATE_VARIABLE_MaybeStoppingReason_0_16,
  MR_Word * STATE_VARIABLE_MaybeStoppingReason_17,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  if ((STATE_VARIABLE_MaybeStoppingReason_0_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_20;
    MR_Box conv3_STATE_VARIABLE_MaybeStoppingReason_17;
    MR_Box conv2_STATE_VARIABLE_Info_19;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_20, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[0]));
      MR_hl_field(0, Var_20, 1) = ((MR_Box) (recompilation__check__check_name_arity_version_numbers_8_p_0_1));
      MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_20, 3) = ((MR_Box) (ModuleName_9));
      MR_hl_field(0, Var_20, 4) = ((MR_Box) (ItemType_10));
      MR_hl_field(0, Var_20, 5) = ((MR_Box) (NewVersionMap_12));
    }
    mercury__map__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&recompilation__check_scalar_common_1[1]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_20, UsedVersionMap_11, ((MR_Box) (STATE_VARIABLE_MaybeStoppingReason_0_16)), &conv3_STATE_VARIABLE_MaybeStoppingReason_17, ((MR_Box) (STATE_VARIABLE_Info_0_18)), &conv2_STATE_VARIABLE_Info_19);
    *STATE_VARIABLE_MaybeStoppingReason_17 = ((MR_Word) (conv3_STATE_VARIABLE_MaybeStoppingReason_17));
    *STATE_VARIABLE_Info_19 = ((MR_Word) (conv2_STATE_VARIABLE_Info_19));
  }
  else
  {
    *STATE_VARIABLE_MaybeStoppingReason_17 = STATE_VARIABLE_MaybeStoppingReason_0_16;
    *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
  }
}

static void MR_CALL 
recompilation__check__write_used_file_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  parse_tree__error_spec__extract_spec_msgs_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
recompilation__check__write_used_file_error_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word UsedFileError_9,
  MR_Word Stream_10)
{
  MR_Word PrefixPieces_12;
  MR_Word Spec_16;
  MR_Word Var_27;
  MR_Word Var_28;

  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (ModuleName_8));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[35])));
  }
  {
    PrefixPieces_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrefixPieces_12, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[32])));
    MR_hl_field(1, PrefixPieces_12, 1) = ((MR_Box) (Var_27));
  }
  switch (MR_tag((MR_Word) UsedFileError_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String FileName_13 = ((MR_String) ((MR_hl_field(0, UsedFileError_9, (MR_Integer) 0))));
        MR_Word Pieces_15;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_48;

        {
          Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_38, 1) = ((MR_Box) (FileName_13));
        }
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[41])));
        }
        {
          Pieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_15, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[39])));
          MR_hl_field(1, Pieces_15, 1) = ((MR_Box) (Var_37));
        }
        Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_12, Pieces_15);
        {
          Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140recompilation.check.write_used_file_error\'/6"));
          MR_hl_field(2, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_48));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Context_17 = ((MR_Word) ((MR_hl_field(1, UsedFileError_9, (MR_Integer) 0))));
        MR_String Message_18 = ((MR_String) ((MR_hl_field(1, UsedFileError_9, (MR_Integer) 1))));
        MR_Word AllPieces_19;
        MR_Word Var_63;
        MR_Word Var_64;

        {
          Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_64, 1) = ((MR_Box) (Message_18));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[38])));
        }
        AllPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_12, Var_63);
        {
          Spec_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140recompilation.check.write_used_file_error\'/6"));
          MR_hl_field(1, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(1, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(1, Spec_16, 3) = ((MR_Box) (Context_17));
          MR_hl_field(1, Spec_16, 4) = ((MR_Box) (AllPieces_19));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_62;
        MR_String FileName_79 = ((MR_String) ((MR_hl_field(2, UsedFileError_9, (MR_Integer) 0))));
        MR_Word Pieces_80;

        {
          Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_52, 1) = ((MR_Box) (FileName_79));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &recompilation__check_scalar_common_1[38])));
        }
        {
          Pieces_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_80, 0) = ((MR_Box) (MR_mkword(3, &recompilation__check_scalar_common_1[36])));
          MR_hl_field(1, Pieces_80, 1) = ((MR_Box) (Var_51));
        }
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_12, Pieces_80);
        {
          Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140recompilation.check.write_used_file_error\'/6"));
          MR_hl_field(2, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_62));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word UsedItemSpecs_20 = ((MR_Word) ((MR_hl_field(3, UsedFileError_9, (MR_Integer) 0))));
        MR_Word MsgsList_21;
        MR_Word Msgs_22;
        MR_Word Var_74;

        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_74, 0) = ((MR_Box) (&recompilation__check_scalar_common_3[1]));
          MR_hl_field(0, Var_74, 1) = ((MR_Box) (recompilation__check__write_used_file_error_6_p_0_1));
          MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_74, 3) = ((MR_Box) (Globals_7));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), (MR_Word) (&recompilation__check_scalar_common_1[0]), Var_74, UsedItemSpecs_20, &MsgsList_21);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), MsgsList_21, &Msgs_22);
        {
          Spec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140recompilation.check.write_used_file_error\'/6"));
          MR_hl_field(0, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 12U));
          MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Msgs_22));
        }
      }
      break;
  }
  parse_tree__write_error_spec__write_error_spec_5_p_0(Stream_10, Globals_7, Spec_16);
}

static MR_bool MR_CALL 
recompilation__check____Unify____ambiguity_checkables_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__check____Unify____ambiguity_checkables_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____ambiguity_checkables_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__check____Compare____ambiguity_checkables_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__check____Unify____find_target_file_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__check____Unify____find_target_file_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____find_target_file_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__check____Compare____find_target_file_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__check____Unify____find_timestamp_file_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__check____Unify____find_timestamp_file_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____find_timestamp_file_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__check____Compare____find_timestamp_file_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__check____Unify____functor_match_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__check____Unify____functor_match_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____functor_match_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__check____Compare____functor_match_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__check____Unify____maybe_is_inline_submodule_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__check____Unify____maybe_is_inline_submodule_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____maybe_is_inline_submodule_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__check____Compare____maybe_is_inline_submodule_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__check____Unify____modules_to_recompile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__check____Unify____modules_to_recompile_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____modules_to_recompile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__check____Compare____modules_to_recompile_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__check____Unify____recompilation_check_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__check____Unify____recompilation_check_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____recompilation_check_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__check____Compare____recompilation_check_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__check____Unify____recompile_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = recompilation__check____Unify____recompile_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
recompilation__check____Compare____recompile_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  recompilation__check____Compare____recompile_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HaveReadModule_6;

  succeeded = recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_search_mapN_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HaveReadModule_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HaveReadModule_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_7;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__7_7);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_7;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__7_7);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0__VN_7;

  succeeded = recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0__VN_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0__VN_7));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int3__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HaveReadModule_6;

  succeeded = recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_search_mapN_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HaveReadModule_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HaveReadModule_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_7;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__7_7);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_7;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__7_7);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_VN_7;

  succeeded = recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_VN_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_VN_7));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int2__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HaveReadModule_6;

  succeeded = recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_search_mapN_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HaveReadModule_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HaveReadModule_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_7;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__7_7);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_7;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__7_7);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_VN_7;

  succeeded = recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_VN_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_VN_7));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int1__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_search_mapN_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HaveReadModule_6;

  succeeded = recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_search_mapN_3_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HaveReadModule_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HaveReadModule_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_read_module_intN_9_9_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_7;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_read_module_intN_9_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__7_7);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_7;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_record_read_file_intN_7_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)), ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__7_7);
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__7_7));
}

static MR_bool MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_VN_7;

  succeeded = recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_version_numbersN_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_VN_7);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_VN_7));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  recompilation__check__ClassMethod_for_recompilation__check__check_imported_module_int_file____parse_tree__prog_item__parse_tree_int0__arity0______recompilation__check__cim_get_ambiguity_checkablesN_2_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

void mercury__recompilation__check__init(void)
{
}

void mercury__recompilation__check__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_ambiguity_checkables_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_find_target_file_names_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_find_timestamp_file_names_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_functor_match_arity_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_maybe_is_inline_submodule_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_modules_to_recompile_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0);
}

void mercury__recompilation__check__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__recompilation__check__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module recompilation.check.
