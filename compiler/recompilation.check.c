/*
** Automatically generated from `recompilation.check.m'
** by the Mercury compiler,
** version rotd-2019-09-03
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
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
#include "exception.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.usage.mih"
#include "recompilation.version.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s {
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__SymName_11;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__OldMatchingModuleNames_14;
  MR_bool recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded;
  jmp_buf recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__commit_0;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__TypeCtorInfo_47_47;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__Var_30;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__Var_45;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__ArgX1_48;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__ArgX2_50;
  MR_Word recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__ArgY2_51;
  MR_Box recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__conv0_Var_45;
};


static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct4 recompilation__check____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct4 recompilation__check____vpti_pred_4__plain_recompilation__check__type_ctor_info_recompilation_check_info_0__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__set_ordlist__pti_set_ordlist_1__plain_recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__set_ordlist__pti_set_ordlist_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0;

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

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_modules_to_recompile_0_1[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_1;

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_0[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_1[1];

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_modules_to_recompile_0[2];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_modules_to_recompile_0[2];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_modules_to_recompile_0[2];

static const MR_FA_TypeInfo_Struct3 recompilation__check__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__check__type_ctor_info_recompile_reason_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompilation_check_info_0_0[9];

static const MR_ConstString recompilation__check__recompilation__check__field_names_recompilation_check_info_0_0[9];

static const MR_DuArgLocn recompilation__check__recompilation__check__field_locns_recompilation_check_info_0_0[9];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompilation_check_info_0_0;

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompilation_check_info_0_0[1];

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompilation_check_info_0[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompilation_check_info_0[1];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompilation_check_info_0[1];

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_exception_0_0[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_exception_0_0;

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_exception_0_0[1];

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompile_exception_0[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompile_exception_0[1];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompile_exception_0[1];

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_0[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_1[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_1;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_2[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_2;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_3[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_3;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_4[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_4;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__type_ctor_info_item_id_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_5[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_5;

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__usage__type_ctor_info_resolved_functor_0;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_6[4];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_6;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_7[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_7;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_8[1];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_8;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_9[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_9;

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_10[2];

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_10;

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_0[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_1[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_2[1];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_3[8];

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompile_reason_0[4];

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompile_reason_0[11];

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompile_reason_0[11];

static MR_Word MR_CALL 
recompilation__check__IntroducedFrom__func__check_for_pred_or_func_item_ambiguity_2__1200__1_4_f_0(
  MR_Word ItemType_9,
  MR_Integer Arity_12,
  MR_String Name_16,
  MR_Word LambdaHeadVar__1_32);

static void MR_CALL 
recompilation__check__IntroducedFrom__pred__parse_resolved_item_arity_matches__632__1_6_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word Info_5,
  MR_Word ParseMatches_6,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28);

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__parse_pred_or_func_item_match__515__1_3_p_0(
  MR_Word PredId_8,
  MR_Word LambdaHeadVar__1_27,
  MR_Word * LambdaHeadVar__2_28);

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__should_recompile_3__317__1_2_p_0(
  MR_Word HeadVar__1_181,
  MR_Word * HeadVar__2_182);

static void MR_CALL 
recompilation__check____Compare____recompile_exception_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
recompilation__check____Compare____recompile_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__check____Unify____recompile_exception_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
recompilation__check____Compare____parse_resolved_item_matches_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_99_104_101_99_107_95_95_112_97_114_115_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_109_97_116_99_104_101_115_95_49_95_95_91_49_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
recompilation__check____Unify____parse_resolved_item_matches_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_99_104_101_99_107_95_95_112_97_114_115_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_109_97_116_99_104_101_115_95_49_95_95_91_49_93_95_48_2_p_0(
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

static MR_Word MR_CALL 
recompilation__check__project_spec_to_msgs_1_f_0(
  MR_Word Spec0_3);

static void MR_CALL 
recompilation__check__check_functor_ambiguity_8_p_0(
  MR_Word NeedQualifier_9,
  MR_Word SymName_10,
  MR_Integer Arity_11,
  MR_Word ResolvedCtor_12,
  MR_Word OldModuleQualifier_13,
  MR_Word OldResolvedCtors_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
recompilation__check__check_field_ambiguities_5_p_0(
  MR_Word NeedQualifier_6,
  MR_Word ResolvedCtor_7,
  MR_Word CtorArg_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_5_p_0(
  MR_Word NeedQualifier_6,
  MR_Word TypeCtor_7,
  MR_Word Ctor_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static MR_Box MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0(
  MR_Word ItemType_9,
  MR_Word NeedQualifier_10,
  MR_Word SymName_11,
  MR_Integer Arity_12,
  MR_Word OldModuleQualifier_13,
  MR_Word OldMatchingModuleNames_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_1_8_p_0(
  MR_Word WithType_9,
  MR_Word ItemType_10,
  MR_Word NeedQualifier_11,
  MR_Word SymName_12,
  MR_Integer Arity_13,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_2_8_p_0(
  MR_Word ItemType_9,
  MR_Word NeedQualifier_10,
  MR_Word SymName_11,
  MR_Integer Arity_12,
  MR_Word OldModuleQualifier_13,
  MR_Word OldMatchingModuleName_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
recompilation__check__check_class_decl_for_ambiguities_6_p_0(
  MR_Word NeedQualifier_7,
  MR_Word OldTimestamp_8,
  MR_Word VersionNumbers_9,
  MR_Word Decl_10,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
recompilation__check__check_item_for_ambiguities_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__check_item_for_ambiguities_6_p_0(
  MR_Word NeedQualifier_7,
  MR_Word OldTimestamp_8,
  MR_Word VersionNumbers_9,
  MR_Word Item_10,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78);

static void MR_CALL 
recompilation__check__check_type_defn_ambiguity_with_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__check_type_defn_ambiguity_with_functor_5_p_0(
  MR_Word NeedQualifier_6,
  MR_Word TypeCtor_7,
  MR_Word TypeDefn_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_10_p_0(
  MR_Word NeedsCheck_11,
  MR_Word NeedQualifier_12,
  MR_Word OldTimestamp_13,
  MR_Word VersionNumbers_14,
  MR_Word PredOrFunc_15,
  MR_Word SymName_16,
  MR_Word Args_17,
  MR_Word WithType_18,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_by_name_6_p_0(
  MR_Word NeedQualifier_7,
  MR_Word Name_8,
  MR_Word MatchArity_9,
  MR_Word ResolvedCtor_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_7_p_0(
  MR_Word NeedQualifier_1,
  MR_Word Name_2,
  MR_Word MatchArity_3,
  MR_Word ResolvedCtor_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_9_p_0(
  MR_Word NeedQualifier_10,
  MR_Word UsedFileTimestamp_11,
  MR_Word VersionNumbers_12,
  MR_Word ItemType_13,
  MR_Word SymName_14,
  MR_Integer Arity_15,
  MR_Word * NeedsCheck_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
recompilation__check__check_raw_item_block_for_ambiguities_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__check_raw_item_block_for_ambiguities_6_p_0(
  MR_Word NeedQualifier_7,
  MR_Word OldTimestamp_8,
  MR_Word VersionNumbers_9,
  MR_Word RawItemBlock_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
recompilation__check__check_instance_version_number_6_p_0(
  MR_Word ModuleName_7,
  MR_Word NewInstanceVersionNumbers_8,
  MR_Word ClassId_9,
  MR_Word UsedVersionNumber_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
recompilation__check__check_item_version_number_7_p_0(
  MR_Word ModuleName_8,
  MR_Word NewItemTypeVersionNumbers_9,
  MR_Word ItemType_10,
  MR_Word NameArity_11,
  MR_Word UsedVersionNumber_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
recompilation__check__check_item_version_numbers_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__check_item_version_numbers_6_p_0(
  MR_Word ModuleName_7,
  MR_Word UsedVersionNumbers_8,
  MR_Word NewVersionNumbers_9,
  MR_Word ItemType_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
recompilation__check__parse_resolved_item_arity_matches_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__parse_resolved_item_arity_matches_4_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word Info_5,
  MR_Word ParseMatches_6,
  MR_Word Term_7,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
recompilation__check__parse_resolved_functor_3_p_0(
  MR_Word Info_4,
  MR_Word Term_5,
  MR_Word * Ctor_6);

static void MR_CALL 
recompilation__check__parse_functor_matches_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__parse_functor_matches_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16);

static void MR_CALL 
recompilation__check__parse_functor_item_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__parse_functor_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__parse_functor_item_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9);

static MR_bool MR_CALL 
recompilation__check__parse_pred_or_func_item_match_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__parse_pred_or_func_item_match_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Items_0_19,
  MR_Word * STATE_VARIABLE_Items_20);

static void MR_CALL 
recompilation__check__parse_pred_or_func_item_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__parse_pred_or_func_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__parse_pred_or_func_item_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9);

static void MR_CALL 
recompilation__check__parse_simple_item_match_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Items_0_14,
  MR_Word * STATE_VARIABLE_Items_15);

static void MR_CALL 
recompilation__check__parse_simple_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__parse_simple_item_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Set_0_17,
  MR_Word * STATE_VARIABLE_Set_18);

static void MR_CALL 
recompilation__check__parse_used_item_set_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__parse_used_item_set_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__parse_used_item_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__parse_used_item_set_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word UsedItems0_7,
  MR_Word * UsedItems_8);

static MR_bool MR_CALL 
recompilation__check__parse_name_and_arity_to_used_2_p_0(
  MR_Word Term_3,
  MR_Word * UsedClass_4);

static void MR_CALL 
recompilation__check__require_recompilation_if_not_up_to_date_6_p_0(
  MR_Word RecordedTimestamp_7,
  MR_String TargetFile_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
recompilation__check__should_recompile_3_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__should_recompile_3_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
recompilation__check__should_recompile_3_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
recompilation__check__should_recompile_3_8_p_0(
  MR_Word VersionStream_9,
  MR_Word Globals_10,
  MR_Word IsSubModule_11,
  MR_Word FindTargetFiles_12,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static void MR_CALL 
recompilation__check__read_term_check_for_error_or_eof_6_p_0(
  MR_Word VersionStream_7,
  MR_Word Info_8,
  MR_String Item_9,
  MR_Word * Term_10);

static void MR_CALL 
recompilation__check__record_read_file_src_8_p_0(
  MR_Word ModuleName_9,
  MR_String FileName_10,
  MR_Word ModuleTimestamp_11,
  MR_Word ParseTree_12,
  MR_Word Specs_13,
  MR_Word Errors_14,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
recompilation__check__check_imported_modules_6_p_0(
  MR_Word VersionStream_7,
  MR_Word Globals_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

static void MR_CALL 
recompilation__check__check_imported_module_6_p_0(
  MR_Word Globals_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54);

static void MR_CALL 
recompilation__check__throw_syntax_error_2_p_0(
  MR_Word Reason_3,
  MR_Word Info_4);

static void MR_CALL 
recompilation__check__record_read_file_int_9_p_0(
  MR_Word ModuleName_10,
  MR_Word IntFileKind_11,
  MR_String FileName_12,
  MR_Word ModuleTimestamp_13,
  MR_Word ParseTree_14,
  MR_Word Specs_15,
  MR_Word Errors_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0(
  MR_Word ModuleName_9,
  MR_Word NeedQualifier_10,
  MR_Word OldTimestamp_11,
  MR_Word UsedItemsTerm_12,
  MR_Word NewVersionNumbers_13,
  MR_Word RawItemBlocks_14,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35);

static void MR_CALL 
recompilation__check__record_recompilation_reason_3_p_0(
  MR_Word Reason_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
recompilation__check__check_instance_version_numbers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
recompilation__check__check_instance_version_numbers_5_p_0(
  MR_Word ModuleName_6,
  MR_Word UsedInstanceVersionNumbers_7,
  MR_Word NewInstanceVersionNumbers_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
recompilation__check__parse_used_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__parse_used_items_3_p_0(
  MR_Word Info_4,
  MR_Word Term_5,
  MR_Word * UsedItems_6);

static void MR_CALL 
recompilation__check__parse_module_timestamp_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word * ModuleName_7,
  MR_Word * ModuleTimestamp_8);

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0(
  MR_Word Globals_10,
  MR_Word IsSubModule_11,
  MR_Word FindTargetFiles_12,
  MR_Word FindTimestampFiles_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_53_95_95_91_53_93_95_48_4_p_0(
  MR_Word Var_13,
  MR_String Var_14,
  MR_Word Var_15,
  MR_Word Globals_5);

static void MR_CALL 
recompilation__check__write_not_found_reasons_message_5_p_0(
  MR_Word Globals_6,
  MR_String UsageFileName_7,
  MR_Word ModuleName_8);

static void MR_CALL 
recompilation__check__write_recompile_reason_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word Reason_8);

static MR_Box MR_CALL 
recompilation__check__recompile_reason_message_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
recompilation__check__recompile_reason_message_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
recompilation__check__recompile_reason_message_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
recompilation__check__recompile_reason_message_3_p_0(
  MR_Word PrefixPieces_4,
  MR_Word Reason_5,
  MR_Word * Spec_6);

static MR_Word MR_CALL 
recompilation__check__describe_resolved_functor_3_f_0(
  MR_Word SymName_1,
  MR_Integer HeadVar__2_2,
  MR_Word ResolvedFunctor_3);

static MR_Word MR_CALL 
recompilation__check__describe_item_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_52_95_95_91_53_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_52_95_95_91_53_93_95_48_4_p_0(
  MR_Word Var_13,
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word Globals_5);

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_51_95_95_91_51_93_95_48_4_p_0(
  MR_Word Var_13,
  MR_Word Globals_5);

static void MR_CALL 
recompilation__check__add_module_to_recompile_3_p_0(
  MR_Word Module_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
recompilation__check__should_recompile_3_try_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
recompilation__check__should_recompile_3_try_8_p_0(
  MR_Word VersionStream_9,
  MR_Word Globals_10,
  MR_Word IsSubModule_11,
  MR_Word FindTargetFiles_12,
  MR_Word Info_13,
  MR_Word * Result_14);

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
recompilation__check____Unify____modules_to_recompile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____modules_to_recompile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
recompilation__check____Unify____parse_resolved_item_matches_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
recompilation__check____Compare____parse_resolved_item_matches_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

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
recompilation__check____Unify____recompile_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
recompilation__check____Compare____recompile_exception_0_0_10001(
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


static /* final */ const MR_Box recompilation__check_scalar_common_1[65][2];

static /* final */ const MR_Box recompilation__check_scalar_common_2[17][3];

static /* final */ const MR_Box recompilation__check_scalar_common_3[1][4];

static /* final */ const MR_Box recompilation__check_scalar_common_4[3][6];

static /* final */ const MR_Box recompilation__check_scalar_common_5[5][11];

static /* final */ const MR_Box recompilation__check_scalar_common_6[5][8];

static /* final */ const MR_Box recompilation__check_scalar_common_7[9][7];

static /* final */ const MR_Box recompilation__check_scalar_common_8[4][5];

static /* final */ const MR_Box recompilation__check_scalar_common_9[1][12];

static /* final */ const MR_Box recompilation__check_scalar_common_10[3][1];

static /* final */ const MR_Box recompilation__check_scalar_common_11[7][9];

static /* final */ const MR_Integer recompilation__check_scalar_common_12[1][2];

static /* final */ const MR_Box recompilation__check_scalar_common_13[1][10];




static /* final */ const MR_Box recompilation__check_scalar_common_1[65][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__check_scalar_common_2[3]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__check_scalar_common_2[5]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__check_scalar_common_2[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not found."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[23])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[23])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "body of"))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "constructor"))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of type"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "field access function"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for constructor"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was modified."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an instance for class"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in module"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was added or modified."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[46]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "addition of"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "could cause an ambiguity with"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "file"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has changed."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "output file"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not up to date."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[57]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "an instance for class "))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "was removed."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Recompiling module"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error reading file"))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "invalid usage file version number in file"))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_2[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__check_scalar_common_2[0])),
    ((MR_Box) (&recompilation__check_scalar_common_2[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check_scalar_common_1[6]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__check_scalar_common_2[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__check_scalar_common_1[7]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check_scalar_common_1[8]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__check_scalar_common_2[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__check_scalar_common_1[9]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&recompilation__check_scalar_common_2[0])),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&recompilation__check_scalar_common_8[0])),
    ((MR_Box) (recompilation__check__recompile_reason_message_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&recompilation__check_scalar_common_8[1])),
    ((MR_Box) (recompilation__check__recompile_reason_message_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&recompilation__check_scalar_common_8[2])),
    ((MR_Box) (recompilation__check__should_recompile_3_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&recompilation__check_scalar_common_8[3])),
    ((MR_Box) (recompilation__check__should_recompile_3_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&recompilation__check_scalar_common_7[7])),
    ((MR_Box) (recompilation__check__parse_pred_or_func_item_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&recompilation__check_scalar_common_7[8])),
    ((MR_Box) (recompilation__check__parse_functor_item_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_set_3)),
    ((MR_Box) (&recompilation__check_scalar_common_2[2])),
    ((MR_Box) (&recompilation__check_scalar_common_2[6])),
    ((MR_Box) (&recompilation__check_scalar_common_2[9]))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_4[3][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check_scalar_common_1[16])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_5[5][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&recompilation__check____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__set_ordlist__pti_set_ordlist_1__plain_recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&recompilation__check__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__set_ordlist__pti_set_ordlist_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_6[5][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&recompilation__check_scalar_common_12[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check____vpti_pred_4__plain_recompilation__check__type_ctor_info_recompilation_check_info_0__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_7[9][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_8[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&recompilation__check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_9[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&recompilation__check____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&recompilation__check____vpti_pred_4__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_10[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_11[7][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__check__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&recompilation__check_scalar_common_12[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check____vpti_pred_4__plain_recompilation__check__type_ctor_info_recompilation_check_info_0__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)),
    ((MR_Box) (&recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
};

static /* final */ const MR_Integer recompilation__check_scalar_common_12[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box recompilation__check_scalar_common_13[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__check__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)),
    ((MR_Box) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
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

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__check__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
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
  {
    (MR_TypeInfo) (&recompilation__check__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__check__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&recompilation__check__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&recompilation__check__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&recompilation__check__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&recompilation__check__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_recompilation__type_ctor_info_item_name_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_TypeInfo_Struct2 recompilation__check__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&recompilation__check__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct3 recompilation__check__recompilation__pti_item_id_set_3__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0__plain_tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__parse_tree__prog_item__pti_item_block_1__plain_parse_tree__prog_item__type_ctor_info_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__check__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__check__set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 recompilation__check____vpti_pred_4__plain_recompilation__check__type_ctor_info_recompilation_check_info_0__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0),
    (MR_PseudoTypeInfo) (&recompilation__check__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__tree234__pti_tree234_2__plain_pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&recompilation__check__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__set_ordlist__pti_set_ordlist_1__plain_recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 recompilation__check__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&recompilation__check__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 recompilation__check__set_ordlist__pti_set_ordlist_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__check__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__check____Unify____find_target_file_names_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____find_target_file_names_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "find_target_file_names",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__check____vti_pred_4mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1builtin__type_ctor_info_string_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_find_timestamp_file_names_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (recompilation__check____Unify____find_timestamp_file_names_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____find_timestamp_file_names_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "find_timestamp_file_names",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__check____vti_pred_4mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1builtin__type_ctor_info_string_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_functor_match_arity_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_functor_match_arity_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

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

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_0[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_2
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_1[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_0
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_2[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_functor_match_arity_0_1
};

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_functor_match_arity_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_functor_match_arity_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____functor_match_arity_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____functor_match_arity_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "functor_match_arity",
  {     recompilation__check__recompilation__check__du_name_ordered_functor_match_arity_0 },
  {     recompilation__check__recompilation__check__du_ptag_ordered_functor_match_arity_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  recompilation__check__recompilation__check__functor_number_map_functor_match_arity_0
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
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_modules_to_recompile_0_1[1] = {
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

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

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_0[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_0
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_1[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_modules_to_recompile_0_1
};

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_modules_to_recompile_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_modules_to_recompile_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____modules_to_recompile_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____modules_to_recompile_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "modules_to_recompile",
  {     recompilation__check__recompilation__check__du_name_ordered_modules_to_recompile_0 },
  {     recompilation__check__recompilation__check__du_ptag_ordered_modules_to_recompile_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  recompilation__check__recompilation__check__functor_number_map_modules_to_recompile_0
};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_parse_resolved_item_matches_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (recompilation__check____Unify____parse_resolved_item_matches_1_0_10001)),
  ((MR_Box) (recompilation__check____Compare____parse_resolved_item_matches_1_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "parse_resolved_item_matches",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&recompilation__check____vpti_pred_4__plain_recompilation__check__type_ctor_info_recompilation_check_info_0__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1__pseudo_tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct3 recompilation__check__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &recompilation__recompilation__type_ctor_info_item_id_set_3,
  {
    (MR_TypeInfo) (&recompilation__check__tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__check__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&recompilation__check__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__check__type_ctor_info_recompile_reason_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0)
  }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompilation_check_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_maps_0),
  (MR_PseudoTypeInfo) (&recompilation__check__recompilation__ti_item_id_set_3tree234__ti_tree234_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0mdbcomp__sym_name__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__usage__type_ctor_info_resolved_functor_0),
  (MR_PseudoTypeInfo) (&recompilation__check__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_name_0),
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

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompilation_check_info_0_0[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompilation_check_info_0_0
};

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompilation_check_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_recompilation_check_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompilation_check_info_0[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompilation_check_info_0_0
};

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompilation_check_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____recompilation_check_info_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____recompilation_check_info_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "recompilation_check_info",
  {     recompilation__check__recompilation__check__du_name_ordered_recompilation_check_info_0 },
  {     recompilation__check__recompilation__check__du_ptag_ordered_recompilation_check_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  recompilation__check__recompilation__check__functor_number_map_recompilation_check_info_0
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_exception_0_0[2] = {
  (MR_PseudoTypeInfo) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0),
  (MR_PseudoTypeInfo) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_exception_0_0 = {
  (MR_String) "recompile_exception",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  recompilation__check__recompilation__check__field_types_recompile_exception_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_exception_0_0[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompile_exception_0_0
};

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompile_exception_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_recompile_exception_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompile_exception_0[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompile_exception_0_0
};

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompile_exception_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____recompile_exception_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____recompile_exception_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "recompile_exception",
  {     recompilation__check__recompilation__check__du_name_ordered_recompile_exception_0 },
  {     recompilation__check__recompilation__check__du_ptag_ordered_recompile_exception_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  recompilation__check__recompilation__check__functor_number_map_recompile_exception_0
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
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

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_2 = {
  (MR_String) "recompile_for_syntax_error",
  INT16_C(2),
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

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_3[1] = {
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_3 = {
  (MR_String) "recompile_for_unreadable_used_items",
  INT16_C(1),
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

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_4 = {
  (MR_String) "recompile_for_module_changed",
  INT16_C(1),
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

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0)
  }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_5[2] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1recompilation__type_ctor_info_item_id_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_5 = {
  (MR_String) "recompile_for_item_ambiguity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(5),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 recompilation__check__list__ti_list_1recompilation__usage__type_ctor_info_resolved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0)
  }
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_6[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0),
  (MR_PseudoTypeInfo) (&recompilation__check__list__ti_list_1recompilation__usage__type_ctor_info_resolved_functor_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_6 = {
  (MR_String) "recompile_for_functor_ambiguity",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(6),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_7[1] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_7 = {
  (MR_String) "recompile_for_changed_item",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(7),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_8[1] = {
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_8 = {
  (MR_String) "recompile_for_removed_item",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(8),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_9[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_9 = {
  (MR_String) "recompile_for_changed_or_added_instance",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo recompilation__check__recompilation__check__field_types_recompile_reason_0_10[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_name_0)
};

static const MR_DuFunctorDesc recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_10 = {
  (MR_String) "recompile_for_removed_instance",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  recompilation__check__recompilation__check__field_types_recompile_reason_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_0[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_7
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_1[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_8
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_2[1] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_0
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_3[8] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_1,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_2,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_3,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_4,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_5,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_6,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_9,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_10
};

static const MR_DuPtagLayout recompilation__check__recompilation__check__du_ptag_ordered_recompile_reason_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(8),
    MR_SECTAG_REMOTE_FULL_WORD,
    recompilation__check__recompilation__check__du_stag_ordered_recompile_reason_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr recompilation__check__recompilation__check__du_name_ordered_recompile_reason_0[11] = {
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_7,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_9,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_0,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_6,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_5,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_4,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_1,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_10,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_8,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_2,
  &recompilation__check__recompilation__check__du_functor_desc_recompile_reason_0_3
};

static const MR_Integer recompilation__check__recompilation__check__functor_number_map_recompile_reason_0[11] = {
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 9,
  (MR_Integer) 10,
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (recompilation__check____Unify____recompile_reason_0_0_10001)),
  ((MR_Box) (recompilation__check____Compare____recompile_reason_0_0_10001)),
  (MR_String) "recompilation.check",
  (MR_String) "recompile_reason",
  {     recompilation__check__recompilation__check__du_name_ordered_recompile_reason_0 },
  {     recompilation__check__recompilation__check__du_ptag_ordered_recompile_reason_0 },
  (MR_Integer) 11,
  UINT16_C(4),
  recompilation__check__recompilation__check__functor_number_map_recompile_reason_0
};

static MR_Word MR_CALL 
recompilation__check__IntroducedFrom__func__check_for_pred_or_func_item_ambiguity_2__1200__1_4_f_0(
  MR_Word ItemType_9,
  MR_Integer Arity_12,
  MR_String Name_16,
  MR_Word LambdaHeadVar__1_32)
{
  {
    MR_Word LambdaHeadVar__2_33;
    MR_Word OldMatchingName_25;
    MR_Word Var_34;
    MR_Word OldMatchingModule_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_32, (MR_Integer) 1))));

    {
      OldMatchingName_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OldMatchingName_25, 0) = ((MR_Box) (OldMatchingModule_41));
      MR_hl_field(MR_mktag(1), OldMatchingName_25, 1) = ((MR_Box) (Name_16));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (OldMatchingName_25));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Arity_12));
    }
    {
      LambdaHeadVar__2_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_33, 0) = (MR_Box) ((MR_Unsigned) (ItemType_9));
      MR_hl_field(MR_mktag(0), LambdaHeadVar__2_33, 1) = ((MR_Box) (Var_34));
    }
    return LambdaHeadVar__2_33;
  }
}

static void MR_CALL 
recompilation__check__IntroducedFrom__pred__parse_resolved_item_arity_matches__632__1_6_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word Info_5,
  MR_Word ParseMatches_6,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ParseMatches_6, (MR_Integer) 1))));
    MR_Box conv1_LambdaHeadVar__3_28;

    func_0(((MR_Box) (ParseMatches_6)), ((MR_Box) (Info_5)), ((MR_Box) (LambdaHeadVar__1_26)), ((MR_Box) (LambdaHeadVar__2_27)), &conv1_LambdaHeadVar__3_28);
    *LambdaHeadVar__3_28 = ((MR_Word) (conv1_LambdaHeadVar__3_28));
  }
}

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__parse_pred_or_func_item_match__515__1_3_p_0(
  MR_Word PredId_8,
  MR_Word LambdaHeadVar__1_27,
  MR_Word * LambdaHeadVar__2_28)
{
  {
    MR_bool succeeded;
    MR_Word MatchName_16;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LambdaHeadVar__1_27, &MatchName_16);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *LambdaHeadVar__2_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_8));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MatchName_16));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
recompilation__check__IntroducedFrom__pred__should_recompile_3__317__1_2_p_0(
  MR_Word HeadVar__1_181,
  MR_Word * HeadVar__2_182)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_181, HeadVar__2_182);
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____recompile_exception_0_0(
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

      recompilation__check____Compare____recompile_reason_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        recompilation__check____Compare____recompilation_check_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static void MR_CALL 
recompilation__check____Compare____recompile_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_430 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_431 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_430 == CastY_431);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_451 = (MR_Word) ((MR_Word) (HeadVar__2_2));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_307 = (MR_Word) ((MR_Word) (HeadVar__3_3));

                  recompilation____Compare____item_id_0_0(HeadVar__1_1, Var_451, ArgY1_307);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_466 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_339 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                  recompilation____Compare____item_id_0_0(HeadVar__1_1, Var_466, ArgY1_339);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_454 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_String Var_455 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_455, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[14]), HeadVar__1_1, ((MR_Box) (Var_454)), ((MR_Box) (ArgY2_8)));
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_463 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_50 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_463, ArgY1_50);
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
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_467 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_468 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_String ArgY2_87 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_85;

                          mercury__term____Compare____context_0_0(&SubResult1_85, Var_468, ArgY1_84);
                          succeeded = (SubResult1_85 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_85;
                          else
                            mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_467, ArgY2_87);
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
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_469 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[22]), HeadVar__1_1, ((MR_Box) (Var_469)), ((MR_Box) (ArgY1_127)));
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
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String Var_462 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_String ArgY1_159 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_462, ArgY1_159);
                        }
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_460 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_461 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_Word ArgY1_196 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_197;

                          recompilation____Compare____item_id_0_0(&SubResult1_197, Var_461, ArgY1_196);
                          succeeded = (SubResult1_197 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_197;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[21]), HeadVar__1_1, ((MR_Box) (Var_460)), ((MR_Box) (ArgY2_199)));
                        }
                        break;
                      case (MR_Integer) 5:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Var_456 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                MR_Word Var_457 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                MR_Integer Var_458 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_459 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                          MR_Word ArgY1_254 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer ArgY2_257 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word ArgY3_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                          MR_Word ArgY4_263 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                          MR_Word SubResult1_255;

                          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_255, Var_459, ArgY1_254);
                          succeeded = (SubResult1_255 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_255;
                          else
                          {
                            MR_Word SubResult2_258;

                            succeeded = (Var_458 < ArgY2_257);
                            if (succeeded)
                            {
                              SubResult2_258 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_458 > ArgY2_257);
                              if (succeeded)
                              {
                                SubResult2_258 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult2_258 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult2_258;
                            else
                            {
                              MR_Word SubResult3_261;

                              recompilation__usage____Compare____resolved_functor_0_0(&SubResult3_261, Var_457, ArgY3_260);
                              succeeded = (SubResult3_261 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult3_261;
                              else
                                mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[20]), HeadVar__1_1, ((MR_Box) (Var_456)), ((MR_Box) (ArgY4_263)));
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Var_452 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_453 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word ArgY1_380 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_383 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_381;

                          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_381, Var_453, ArgY1_380);
                          succeeded = (SubResult1_381 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_381;
                          else
                            recompilation____Compare____item_name_0_0(HeadVar__1_1, Var_452, ArgY2_383);
                        }
                        break;
                      case (MR_Integer) 7:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Var_464 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_465 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 6:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_Word ArgY1_426 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_429 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_427;

                          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_427, Var_465, ArgY1_426);
                          succeeded = (SubResult1_427 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_427;
                          else
                            recompilation____Compare____item_name_0_0(HeadVar__1_1, Var_464, ArgY2_429);
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
}

static MR_bool MR_CALL 
recompilation__check____Unify____recompile_exception_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = recompilation__check____Unify____recompile_reason_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = recompilation__check____Unify____recompilation_check_info_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____recompile_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_41 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_42 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_41 == CastY_42);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_29 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word ArgY1_30;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_30 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              succeeded = recompilation____Unify____item_id_0_0(ArgX1_29, ArgY1_30);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_31 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
            MR_Word ArgY1_32;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_32 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              succeeded = recompilation____Unify____item_id_0_0(ArgX1_31, ArgY1_32);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_46_46;
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
              if (succeeded)
              {
                TypeInfo_46_46 = (MR_Word) (&recompilation__check_scalar_common_1[14]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_8;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;
                MR_String ArgX2_11 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_String ArgY2_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = mercury__term____Unify____context_0_0(ArgX1_9, ArgY1_10);
                  if (succeeded)
                    succeeded = (strcmp(ArgX2_11, ArgY2_12) == 0);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_56_56;
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_56_56 = (MR_Word) (&recompilation__check_scalar_common_1[22]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word TypeInfo_51_51;
                MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_18;
                MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = recompilation____Unify____item_id_0_0(ArgX1_17, ArgY1_18);
                  if (succeeded)
                  {
                    TypeInfo_51_51 = (MR_Word) (&recompilation__check_scalar_common_1[21]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_51_51, ((MR_Box) (ArgX2_19)), ((MR_Box) (ArgY2_20)));
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word TypeInfo_49_49;
                MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_22;
                MR_Integer ArgX2_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_24;
                MR_Word ArgX3_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
                MR_Word ArgY3_26;
                MR_Word ArgX4_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
                MR_Word ArgY4_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  ArgY3_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  ArgY4_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_21, ArgY1_22);
                  if (succeeded)
                  {
                    succeeded = (ArgX2_23 == ArgY2_24);
                    if (succeeded)
                    {
                      succeeded = recompilation__usage____Unify____resolved_functor_0_0(ArgX3_25, ArgY3_26);
                      if (succeeded)
                      {
                        TypeInfo_49_49 = (MR_Word) (&recompilation__check_scalar_common_1[20]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_49_49, ((MR_Box) (ArgX4_27)), ((MR_Box) (ArgY4_28)));
                      }
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_34;
                MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_36;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_33, ArgY1_34);
                  if (succeeded)
                    succeeded = recompilation____Unify____item_name_0_0(ArgX2_35, ArgY2_36);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ArgX1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_38;
                MR_Word ArgX2_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_40;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_37, ArgY1_38);
                  if (succeeded)
                    succeeded = recompilation____Unify____item_name_0_0(ArgX2_39, ArgY2_40);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____recompilation_check_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
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

          mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[17]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
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

              mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_3[0]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[18]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
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
                      mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[19]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                  }
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
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&recompilation__check_scalar_common_1[17]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = parse_tree__read_modules____Unify____have_read_module_maps_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&recompilation__check_scalar_common_3[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&recompilation__check_scalar_common_1[18]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = recompilation__check____Unify____modules_to_recompile_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      TypeInfo_28_28 = (MR_Word) (&recompilation__check_scalar_common_1[19]);
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
}

static void MR_CALL 
recompilation__check____Compare____parse_resolved_item_matches_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_99_104_101_99_107_95_95_112_97_114_115_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_109_97_116_99_104_101_115_95_49_95_95_91_49_93_95_48_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_99_104_101_99_107_95_95_112_97_114_115_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_109_97_116_99_104_101_115_95_49_95_95_91_49_93_95_48_3_p_0(
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

static MR_bool MR_CALL 
recompilation__check____Unify____parse_resolved_item_matches_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_99_104_101_99_107_95_95_112_97_114_115_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_109_97_116_99_104_101_115_95_49_95_95_91_49_93_95_48_2_p_0(HeadVar__1_1, HeadVar__2_2);
    return succeeded;
  }
}

static MR_bool MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_95_99_104_101_99_107_95_95_112_97_114_115_101_95_114_101_115_111_108_118_101_100_95_105_116_101_109_95_109_97_116_99_104_101_115_95_49_95_95_91_49_93_95_48_2_p_0(
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
recompilation__check____Compare____modules_to_recompile_0_0(
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
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[17]), HeadVar__1_1, ((MR_Box) (Var_11)), ((MR_Box) (ArgY1_7)));
      }
    }
  }
}

MR_bool MR_CALL 
recompilation__check____Unify____modules_to_recompile_0_0(
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
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&recompilation__check_scalar_common_1[17]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____functor_match_arity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

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
            MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

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
}

static MR_bool MR_CALL 
recompilation__check____Unify____functor_match_arity_0_0(
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
            MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
recompilation__check____Compare____find_timestamp_file_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_4[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation__check____Unify____find_timestamp_file_names_0_0(
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
recompilation__check____Compare____find_target_file_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&recompilation__check_scalar_common_4[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
recompilation__check____Unify____find_target_file_names_0_0(
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

static MR_Word MR_CALL 
recompilation__check__project_spec_to_msgs_1_f_0(
  MR_Word Spec0_3)
{
  {
    MR_Word Msgs_4;
    MR_Word Spec_5;

    parse_tree__error_util__expand_simplest_spec_2_p_0(Spec0_3, &Spec_5);
    Msgs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec_5, (MR_Integer) 2))));
    return Msgs_4;
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguity_8_p_0(
  MR_Word NeedQualifier_9,
  MR_Word SymName_10,
  MR_Integer Arity_11,
  MR_Word ResolvedCtor_12,
  MR_Word OldModuleQualifier_13,
  MR_Word OldResolvedCtors_14,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_bool succeeded = (NeedQualifier_9 == (MR_Integer) 0);
    MR_String Var_21;

    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OldModuleQualifier_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), OldModuleQualifier_13, (MR_Integer) 0))));
        succeeded = (strcmp(Var_21, (MR_String) "") == 0);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
    else
    {
      MR_String Name_16;
      MR_Word OldName_17;
      MR_Word TypeCtorInfo_25_25;

      Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_10);
      OldName_17 = recompilation__module_qualify_name_2_f_0(OldModuleQualifier_13, Name_16);
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(OldName_17, SymName_10);
      if (succeeded)
      {
        TypeCtorInfo_25_25 = (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_25_25, ((MR_Box) (ResolvedCtor_12)), OldResolvedCtors_14);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Reason_18;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word CollectAllReasons_31;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;

        Var_22 = recompilation__module_qualify_name_2_f_0(OldModuleQualifier_13, Name_16);
        Var_23 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), OldResolvedCtors_14);
        {
          Reason_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Reason_18, 1) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(3), Reason_18, 2) = ((MR_Box) (Arity_11));
          MR_hl_field(MR_mktag(3), Reason_18, 3) = ((MR_Box) (ResolvedCtor_12));
          MR_hl_field(MR_mktag(3), Reason_18, 4) = ((MR_Box) (Var_23));
        }
        Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
        Var_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
        Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5))));
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 6))));
        CollectAllReasons_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8))));
        switch (CollectAllReasons_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_32;

              {
                Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Reason_18));
                MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (STATE_VARIABLE_Info_0_19));
              }
              {
                mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_32)));
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_34;

              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Reason_18));
                MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_43));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_20 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
                MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_37));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_39));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_31));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_34));
              }
            }
            break;
        }
      }
      else
        *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
    }
  }
}

static void MR_CALL 
recompilation__check__check_field_ambiguities_5_p_0(
  MR_Word NeedQualifier_6,
  MR_Word ResolvedCtor_7,
  MR_Word CtorArg_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Word MaybeCtorFieldName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_8, (MR_Integer) 0))));

    if ((MaybeCtorFieldName_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
    else
    {
      MR_Word CtorFieldName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorFieldName_10, (MR_Integer) 0))));
      MR_Word FieldName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorFieldName_13, (MR_Integer) 0))));
      MR_Word ExtractFuncName_16;
      MR_Word UpdateFuncName_17;
      MR_Word STATE_VARIABLE_Info_23_23;
      MR_Word UsedItems_35;
      MR_String UnqualName_36;
      MR_Word UsedCtors_37;
      MR_Word UsedItems_66;
      MR_String UnqualName_67;
      MR_Word UsedCtors_68;
      MR_Word UsedCtorAL_38;
      MR_Box conv0_UsedCtorAL_38;
      MR_Word UsedCtorAL_69;
      MR_Box conv1_UsedCtorAL_69;

      hlds__hlds_pred__field_access_function_name_3_p_0((MR_Integer) 0, FieldName_14, &ExtractFuncName_16);
      hlds__hlds_pred__field_access_function_name_3_p_0((MR_Integer) 1, FieldName_14, &UpdateFuncName_17);
      UsedItems_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4))));
      UnqualName_36 = mdbcomp__sym_name__unqualify_name_1_f_0(ExtractFuncName_16);
      UsedCtors_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_35, (MR_Integer) 5))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[9]), UsedCtors_37, ((MR_Box) (UnqualName_36)), &conv0_UsedCtorAL_38);
      if (succeeded)
      {
        UsedCtorAL_38 = ((MR_Word) (conv0_UsedCtorAL_38));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        recompilation__check__check_functor_ambiguities_2_7_p_0(NeedQualifier_6, ExtractFuncName_16, (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_10[1])), ResolvedCtor_7, UsedCtorAL_38, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_23_23);
      else
        STATE_VARIABLE_Info_23_23 = STATE_VARIABLE_Info_0_18;
      UsedItems_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_23_23, (MR_Integer) 4))));
      UnqualName_67 = mdbcomp__sym_name__unqualify_name_1_f_0(UpdateFuncName_17);
      UsedCtors_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_66, (MR_Integer) 5))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[9]), UsedCtors_68, ((MR_Box) (UnqualName_67)), &conv1_UsedCtorAL_69);
      if (succeeded)
      {
        UsedCtorAL_69 = ((MR_Word) (conv1_UsedCtorAL_69));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        recompilation__check__check_functor_ambiguities_2_7_p_0(NeedQualifier_6, UpdateFuncName_17, (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_10[2])), ResolvedCtor_7, UsedCtorAL_69, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_19);
      else
        *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_23_23;
    }
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Info_19;

    recompilation__check__check_field_ambiguities_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_19);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_19));
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_5_p_0(
  MR_Word NeedQualifier_6,
  MR_Word TypeCtor_7,
  MR_Word Ctor_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Word Name_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 2))));
    MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 3))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 4))));
    MR_Word TypeCtorItem_16;
    MR_Word ResolvedCtor_17;
    MR_Word Var_20;
    MR_Word STATE_VARIABLE_Info_21_21;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word UsedItems_38;
    MR_String UnqualName_39;
    MR_Word UsedCtors_40;
    MR_Word UsedCtorAL_41;
    MR_Box conv0_UsedCtorAL_41;
    MR_Box conv2_STATE_VARIABLE_Info_19;

    TypeCtorItem_16 = recompilation__type_ctor_to_item_name_1_f_0(TypeCtor_7);
    {
      ResolvedCtor_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ResolvedCtor_17, 0) = ((MR_Box) (TypeCtorItem_16));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Arity_14));
    }
    UsedItems_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_18, (MR_Integer) 4))));
    UnqualName_39 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_12);
    UsedCtors_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_38, (MR_Integer) 5))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[9]), UsedCtors_40, ((MR_Box) (UnqualName_39)), &conv0_UsedCtorAL_41);
    if (succeeded)
    {
      UsedCtorAL_41 = ((MR_Word) (conv0_UsedCtorAL_41));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      recompilation__check__check_functor_ambiguities_2_7_p_0(NeedQualifier_6, Name_12, Var_20, ResolvedCtor_17, UsedCtorAL_41, STATE_VARIABLE_Info_0_18, &STATE_VARIABLE_Info_21_21);
    else
      STATE_VARIABLE_Info_21_21 = STATE_VARIABLE_Info_0_18;
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Name_12));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Arity_14));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (TypeCtorItem_16));
      MR_hl_field(MR_mktag(2), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&recompilation__check_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (recompilation__check__check_functor_ambiguities_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (NeedQualifier_6));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Var_24));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_22, Args_13, ((MR_Box) (STATE_VARIABLE_Info_21_21)), &conv2_STATE_VARIABLE_Info_19);
    *STATE_VARIABLE_Info_19 = ((MR_Word) (conv2_STATE_VARIABLE_Info_19));
  }
}

static MR_Box MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__2_33;

    conv1_LambdaHeadVar__2_33 = recompilation__check__IntroducedFrom__func__check_for_pred_or_func_item_ambiguity_2__1200__1_4_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_33));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_1(
  void * env_ptr_arg)
{
  {
    struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s * env_ptr = (struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_3(
  void * env_ptr_arg)
{
  {
    struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s * env_ptr = (struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__Var_45 = ((MR_Word) ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__conv0_Var_45));
    recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_2(env_ptr);
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_2(
  void * env_ptr_arg)
{
  {
    struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s * env_ptr = (struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__TypeCtorInfo_47_47 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
    (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__ArgX1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__Var_45, (MR_Integer) 0))));
    (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__ArgY2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__Var_45, (MR_Integer) 1))));
    (MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__Var_30, (MR_Integer) 0)) = ((MR_Box) ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__ArgX1_48));
    (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__ArgX2_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__Var_30, (MR_Integer) 1))));
    (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__TypeCtorInfo_47_47, ((MR_Box) ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__ArgX2_50)), ((MR_Box) ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__ArgY2_51)));
    if ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded)
      recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_1(env_ptr);
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_4(
  void * env_ptr_arg)
{
  {
    struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s * env_ptr = (struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word TypeInfo_42_42;
          MR_Word PredModuleName_18;
          MR_String Var_19;
          MR_Word Var_20;

          (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__SymName_11)) == (MR_Integer) 1);
          if ((env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded)
          {
            PredModuleName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__SymName_11, (MR_Integer) 0))));
            Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__SymName_11, (MR_Integer) 1))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__Var_30 = base;
              MR_hl_field(MR_mktag(0), base, 0) = NULL;
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredModuleName_18));
            }
            TypeInfo_42_42 = (MR_Word) (&recompilation__check_scalar_common_2[3]);
            mercury__set__member_2_p_1(TypeInfo_42_42, &(env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__conv0_Var_45, (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__OldMatchingModuleNames_14, recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_3, env_ptr);
          }
        }
        (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0(
  MR_Word ItemType_9,
  MR_Word NeedQualifier_10,
  MR_Word SymName_11,
  MR_Integer Arity_12,
  MR_Word OldModuleQualifier_13,
  MR_Word OldMatchingModuleNames_14,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  {
    struct recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0_s env;

    (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__SymName_11 = SymName_11;
    (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__OldMatchingModuleNames_14 = OldMatchingModuleNames_14;
    {
      MR_String Name_16;
      MR_String Var_29;

      Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__SymName_11);
      (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded = (NeedQualifier_10 == (MR_Integer) 0);
      if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded)
      {
        (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) OldModuleQualifier_13)) == (MR_Integer) 0);
        if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded)
        {
          Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), OldModuleQualifier_13, (MR_Integer) 0))));
          (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded = (strcmp(Var_29, (MR_String) "") == 0);
        }
      }
      if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded)
        *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
      else
      {
        MR_Word QualifiedName_17;

        QualifiedName_17 = recompilation__module_qualify_name_2_f_0(OldModuleQualifier_13, Name_16);
        (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(QualifiedName_17, (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__SymName_11);
        if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded)
        {
          recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_4(&env);
          (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded = !((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded);
        }
        if ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__succeeded)
        {
          MR_Word AmbiguousDecls_21;
          MR_Word Reason_26;
          MR_Word Var_31;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word CollectAllReasons_58;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Unsigned packed_word_0;
          MR_Unsigned packed_word_1;

          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&recompilation__check_scalar_common_6[3]));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_5));
            MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (ItemType_9));
            MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (Arity_12));
            MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (Name_16));
          }
          Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__check_scalar_common_2[3]), (env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__OldMatchingModuleNames_14);
          AmbiguousDecls_21 = mercury__list__map_2_f_0((MR_Word) (&recompilation__check_scalar_common_2[3]), (MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), Var_31, Var_35);
          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) ((env).recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0_env_0__SymName_11));
            MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Arity_12));
          }
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = (MR_Box) ((MR_Unsigned) (ItemType_9));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Var_37));
          }
          {
            Reason_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), Reason_26, 1) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(3), Reason_26, 2) = ((MR_Box) (AmbiguousDecls_21));
          }
          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 0))));
          packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1)));
          Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 2))));
          Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 3))));
          Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 4))));
          Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 5))));
          Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 6))));
          packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 7)));
          CollectAllReasons_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 7))) & (MR_Integer) 1);
          Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_27, (MR_Integer) 8))));
          switch (CollectAllReasons_58) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_59;

                {
                  Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Reason_26));
                  MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (STATE_VARIABLE_Info_0_27));
                }
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_59)));
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_61;

                {
                  Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Reason_26));
                  MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_70));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_Info_28 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
                  MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_64));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_65));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_66));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_67));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_68));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_69));
                  MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_58));
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_61));
                }
              }
              break;
          }
        }
        else
          *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_28;

    recompilation__check__check_for_pred_or_func_item_ambiguity_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_28);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_28));
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_1_8_p_0(
  MR_Word WithType_9,
  MR_Word ItemType_10,
  MR_Word NeedQualifier_11,
  MR_Word SymName_12,
  MR_Integer Arity_13,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_bool succeeded;
    MR_Integer MatchArity_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word MatchingQualifiers_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__6_6, (MR_Integer) 1))));

    if ((WithType_9 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = (MatchArity_14 == Arity_13);
    else
      succeeded = (MatchArity_14 >= Arity_13);
    if (succeeded)
    {
      MR_Word Var_20;
      MR_Box conv1_STATE_VARIABLE_Info_19;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[4]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (recompilation__check__check_for_pred_or_func_item_ambiguity_1_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (ItemType_10));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (NeedQualifier_11));
        MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (SymName_12));
        MR_hl_field(MR_mktag(0), Var_20, 6) = ((MR_Box) (MatchArity_14));
      }
      mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[6]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_20, MatchingQualifiers_15, ((MR_Box) (STATE_VARIABLE_Info_0_18)), &conv1_STATE_VARIABLE_Info_19);
      *STATE_VARIABLE_Info_19 = ((MR_Word) (conv1_STATE_VARIABLE_Info_19));
    }
    else
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
  }
}

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_2_8_p_0(
  MR_Word ItemType_9,
  MR_Word NeedQualifier_10,
  MR_Word SymName_11,
  MR_Integer Arity_12,
  MR_Word OldModuleQualifier_13,
  MR_Word OldMatchingModuleName_14,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  {
    MR_bool succeeded;
    MR_String Name_16;
    MR_String Var_23;

    Name_16 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
    succeeded = (NeedQualifier_10 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OldModuleQualifier_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), OldModuleQualifier_13, (MR_Integer) 0))));
        succeeded = (strcmp(Var_23, (MR_String) "") == 0);
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    else
    {
      MR_Word QualifiedName_17;
      MR_Word Var_31;

      QualifiedName_17 = recompilation__module_qualify_name_2_f_0(OldModuleQualifier_13, Name_16);
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(QualifiedName_17, SymName_11);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) SymName_11)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_11, (MR_Integer) 0))));
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(OldMatchingModuleName_14, Var_31);
        }
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word OldMatchingName_19;
        MR_Word Reason_20;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word CollectAllReasons_37;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;

        {
          OldMatchingName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), OldMatchingName_19, 0) = ((MR_Box) (OldMatchingModuleName_14));
          MR_hl_field(MR_mktag(1), OldMatchingName_19, 1) = ((MR_Box) (Name_16));
        }
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (SymName_11));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Arity_12));
        }
        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_24, 0) = (MR_Box) ((MR_Unsigned) (ItemType_9));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Var_25));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (OldMatchingName_19));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (Arity_12));
        }
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = (MR_Box) ((MR_Unsigned) (ItemType_9));
          MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Var_28));
        }
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Reason_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Reason_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(3), Reason_20, 1) = ((MR_Box) (Var_24));
          MR_hl_field(MR_mktag(3), Reason_20, 2) = ((MR_Box) (Var_26));
        }
        Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 0))));
        Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 2))));
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 3))));
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 4))));
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 5))));
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 6))));
        CollectAllReasons_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_21, (MR_Integer) 8))));
        switch (CollectAllReasons_37) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_38;

              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Reason_20));
                MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (STATE_VARIABLE_Info_0_21));
              }
              {
                mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_38)));
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_40;

              {
                Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Reason_20));
                MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_49));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_22 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_43));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_44));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_45));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_46));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_47));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_37));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_40));
              }
            }
            break;
        }
      }
      else
        *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    }
  }
}

static void MR_CALL 
recompilation__check__check_class_decl_for_ambiguities_6_p_0(
  MR_Word NeedQualifier_7,
  MR_Word OldTimestamp_8,
  MR_Word VersionNumbers_9,
  MR_Word Decl_10,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  if (((MR_tag((MR_Word) Decl_10)) == (MR_Integer) 1))
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  else
  {
    MR_Word PredOrFuncInfo_12 = (MR_Word) ((MR_Word) (Decl_10));
    MR_Word MethodName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 0))));
    MR_Word PredOrFunc_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word MethodArgs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 2))));
    MR_Word MethodWithType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo_12, (MR_Integer) 3))));

    recompilation__check__check_for_pred_or_func_item_ambiguity_10_p_0((MR_Integer) 1, NeedQualifier_7, OldTimestamp_8, VersionNumbers_9, PredOrFunc_14, MethodName_13, MethodArgs_15, MethodWithType_16, STATE_VARIABLE_Info_0_26, STATE_VARIABLE_Info_27);
  }
}

static void MR_CALL 
recompilation__check__check_item_for_ambiguities_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_27;

    recompilation__check__check_class_decl_for_ambiguities_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_27);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_27));
  }
}

static void MR_CALL 
recompilation__check__check_item_for_ambiguities_6_p_0(
  MR_Word NeedQualifier_7,
  MR_Word OldTimestamp_8,
  MR_Word VersionNumbers_9,
  MR_Word Item_10,
  MR_Word STATE_VARIABLE_Info_0_77,
  MR_Word * STATE_VARIABLE_Info_78)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Item_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.check_item_for_ambiguities\'/6", (MR_String) "clause");
          return;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ItemInstDefn_22 = (MR_Word) (MR_body((MR_Word) (Item_10), (MR_Integer) 1));
          MR_Word InstSymName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_22, (MR_Integer) 0))));
          MR_Word InstParams_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn_22, (MR_Integer) 1))));
          MR_Integer InstArity_30;
          MR_Word Var_31;

          mercury__list__length_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[13]), InstParams_24, &InstArity_30);
          recompilation__check__check_for_simple_item_ambiguity_9_p_0(NeedQualifier_7, OldTimestamp_8, VersionNumbers_9, (MR_Integer) 3, InstSymName_23, InstArity_30, &Var_31, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ItemModeDefn_32 = (MR_Word) (MR_body((MR_Word) (Item_10), (MR_Integer) 2));
          MR_Word ModeSymName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_32, (MR_Integer) 0))));
          MR_Word ModeParams_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn_32, (MR_Integer) 1))));
          MR_Integer ModeArity_39;
          MR_Word Var_40;

          mercury__list__length_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[13]), ModeParams_34, &ModeArity_39);
          recompilation__check__check_for_simple_item_ambiguity_9_p_0(NeedQualifier_7, OldTimestamp_8, VersionNumbers_9, (MR_Integer) 2, ModeSymName_33, ModeArity_39, &Var_40, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ItemPredDecl_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
              MR_Word PredSymName_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_52, (MR_Integer) 0))));
              MR_Word PredOrFunc_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_52, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Args_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_52, (MR_Integer) 2))));
              MR_Word WithType_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_52, (MR_Integer) 3))));

              recompilation__check__check_for_pred_or_func_item_ambiguity_10_p_0((MR_Integer) 0, NeedQualifier_7, OldTimestamp_8, VersionNumbers_9, PredOrFunc_54, PredSymName_53, Args_55, WithType_56, STATE_VARIABLE_Info_0_77, STATE_VARIABLE_Info_78);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 3:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 4:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 5:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 6:
            {
              MR_Word ItemTypeClass_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
              MR_Word TypeClassSymName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_41, (MR_Integer) 0))));
              MR_Word TypeClassParams_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_41, (MR_Integer) 1))));
              MR_Word Interface_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass_41, (MR_Integer) 4))));
              MR_Integer TypeClassArity_50;
              MR_Word STATE_VARIABLE_Info_82_82;
              MR_Word NeedsCheck_95;
              MR_Word ClassDecls_51;

              mercury__list__length_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[12]), TypeClassParams_43, &TypeClassArity_50);
              recompilation__check__check_for_simple_item_ambiguity_9_p_0(NeedQualifier_7, OldTimestamp_8, VersionNumbers_9, (MR_Integer) 4, TypeClassSymName_42, TypeClassArity_50, &NeedsCheck_95, STATE_VARIABLE_Info_0_77, &STATE_VARIABLE_Info_82_82);
              succeeded = (NeedsCheck_95 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (Interface_46 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  ClassDecls_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface_46, (MR_Integer) 0))));
              }
              if (succeeded)
              {
                MR_Word Var_83;
                MR_Box conv1_STATE_VARIABLE_Info_78;

                {
                  Var_83 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&recompilation__check_scalar_common_11[6]));
                  MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (recompilation__check__check_item_for_ambiguities_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (NeedQualifier_7));
                  MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) (OldTimestamp_8));
                  MR_hl_field(MR_mktag(0), Var_83, 5) = ((MR_Box) (VersionNumbers_9));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_decl_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_83, ClassDecls_51, ((MR_Box) (STATE_VARIABLE_Info_82_82)), &conv1_STATE_VARIABLE_Info_78);
                *STATE_VARIABLE_Info_78 = ((MR_Word) (conv1_STATE_VARIABLE_Info_78));
              }
              else
                *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_82_82;
            }
            break;
          case (MR_Integer) 7:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 8:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 9:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 10:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 11:
            *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_0_77;
            break;
          case (MR_Integer) 12:
            {
              MR_Word ItemTypeDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item_10, (MR_Integer) 1))));
              MR_Word TypeSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_13, (MR_Integer) 0))));
              MR_Word TypeParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_13, (MR_Integer) 1))));
              MR_Word TypeBody_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn_13, (MR_Integer) 2))));
              MR_Integer TypeArity_20;
              MR_Word NeedsCheck_21;
              MR_Word STATE_VARIABLE_Info_90_90;

              mercury__list__length_2_p_0((MR_Word) (&recompilation__check_scalar_common_1[12]), TypeParams_15, &TypeArity_20);
              recompilation__check__check_for_simple_item_ambiguity_9_p_0(NeedQualifier_7, OldTimestamp_8, VersionNumbers_9, (MR_Integer) 0, TypeSymName_14, TypeArity_20, &NeedsCheck_21, STATE_VARIABLE_Info_0_77, &STATE_VARIABLE_Info_90_90);
              switch (NeedsCheck_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Info_78 = STATE_VARIABLE_Info_90_90;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_91;

                    {
                      Var_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (TypeSymName_14));
                      MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (TypeArity_20));
                    }
                    recompilation__check__check_type_defn_ambiguity_with_functor_5_p_0(NeedQualifier_7, Var_91, TypeBody_16, STATE_VARIABLE_Info_90_90, STATE_VARIABLE_Info_78);
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
recompilation__check__check_type_defn_ambiguity_with_functor_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_19;

    recompilation__check__check_functor_ambiguities_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_19);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_19));
  }
}

static void MR_CALL 
recompilation__check__check_type_defn_ambiguity_with_functor_5_p_0(
  MR_Word NeedQualifier_6,
  MR_Word TypeCtor_7,
  MR_Word TypeDefn_8,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  switch (MR_tag((MR_Word) TypeDefn_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu_14 = (MR_Word) ((MR_Word) (TypeDefn_8));
        MR_Word Ctors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_14, (MR_Integer) 0))));
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Box conv1_STATE_VARIABLE_Info_19;

        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&recompilation__check_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (recompilation__check__check_type_defn_ambiguity_with_functor_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (NeedQualifier_6));
          MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (TypeCtor_7));
        }
        Var_21 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_15);
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_20, Var_21, ((MR_Box) (STATE_VARIABLE_Info_0_18)), &conv1_STATE_VARIABLE_Info_19);
        *STATE_VARIABLE_Info_19 = ((MR_Word) (conv1_STATE_VARIABLE_Info_19));
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
          break;
      }
      break;
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_19;

    recompilation__check__check_for_pred_or_func_item_ambiguity_1_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_19);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_19));
  }
}

static void MR_CALL 
recompilation__check__check_for_pred_or_func_item_ambiguity_10_p_0(
  MR_Word NeedsCheck_11,
  MR_Word NeedQualifier_12,
  MR_Word OldTimestamp_13,
  MR_Word VersionNumbers_14,
  MR_Word PredOrFunc_15,
  MR_Word SymName_16,
  MR_Word Args_17,
  MR_Word WithType_18,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_bool succeeded;
    MR_Integer Arity_20;
    MR_Word ItemType_22;

    if ((WithType_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer Var_36;

      Var_36 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Args_17);
      parse_tree__prog_util__adjust_func_arity_3_p_1(PredOrFunc_15, &Arity_20, Var_36);
    }
    else
      Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Args_17);
    ItemType_22 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_15);
    succeeded = (NeedsCheck_11 == (MR_Integer) 1);
    if (!(succeeded))
    {
      MR_String Name_67;
      MR_Word UsedVersionNumber_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Box conv0_Var_69;
      MR_Box conv1_UsedVersionNumber_68;

      Name_67 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
      conv0_Var_69 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__check_scalar_common_2[10]), VersionNumbers_14, ItemType_22);
      Var_69 = ((MR_Word) (conv0_Var_69));
      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Name_67));
        MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Arity_20));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__check_scalar_common_2[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_69, ((MR_Box) (Var_70)), &conv1_UsedVersionNumber_68);
      if (succeeded)
      {
        UsedVersionNumber_68 = ((MR_Word) (conv1_UsedVersionNumber_68));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_76;

        libs__timestamp____Compare____timestamp_0_0(&Var_76, UsedVersionNumber_68, OldTimestamp_13);
        succeeded = ((MR_Integer) 2 == Var_76);
      }
      else
        succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word UsedItems_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 4))));
      MR_Word UsedItemMap_24;
      MR_String Name_25;
      MR_Word PredId_27;
      MR_Word STATE_VARIABLE_Info_38_38;
      MR_Box conv2_UsedItemMap_24;
      MR_Word MatchingArityList_26;
      MR_Box conv3_MatchingArityList_26;

      conv2_UsedItemMap_24 = recompilation__extract_pred_or_func_set_2_f_0((MR_Word) (&recompilation__check_scalar_common_2[2]), (MR_Word) (&recompilation__check_scalar_common_2[6]), (MR_Word) (&recompilation__check_scalar_common_2[9]), UsedItems_23, ItemType_22);
      UsedItemMap_24 = ((MR_Word) (conv2_UsedItemMap_24));
      Name_25 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_16);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[7]), UsedItemMap_24, ((MR_Box) (Name_25)), &conv3_MatchingArityList_26);
      if (succeeded)
      {
        MatchingArityList_26 = ((MR_Word) (conv3_MatchingArityList_26));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_37;
        MR_Box conv5_STATE_VARIABLE_Info_38_38;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (recompilation__check__check_for_pred_or_func_item_ambiguity_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (WithType_18));
          MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (ItemType_22));
          MR_hl_field(MR_mktag(0), Var_37, 5) = ((MR_Box) (NeedQualifier_12));
          MR_hl_field(MR_mktag(0), Var_37, 6) = ((MR_Box) (SymName_16));
          MR_hl_field(MR_mktag(0), Var_37, 7) = ((MR_Box) (Arity_20));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&recompilation__check_scalar_common_2[5]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_37, MatchingArityList_26, ((MR_Box) (STATE_VARIABLE_Info_0_34)), &conv5_STATE_VARIABLE_Info_38_38);
        STATE_VARIABLE_Info_38_38 = ((MR_Word) (conv5_STATE_VARIABLE_Info_38_38));
      }
      else
        STATE_VARIABLE_Info_38_38 = STATE_VARIABLE_Info_0_34;
      PredId_27 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      if (((MR_tag((MR_Word) SymName_16)) == (MR_Integer) 1))
      {
        MR_Word ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_16, (MR_Integer) 0))));
        MR_Word AritiesToMatch_31;
        MR_Word ResolvedFunctor_32;

        if ((WithType_18 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            AritiesToMatch_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), AritiesToMatch_31, 0) = ((MR_Box) (Arity_20));
          }
        else
          AritiesToMatch_31 = (MR_Word) ((MR_Unsigned) 0U);
        {
          ResolvedFunctor_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ResolvedFunctor_32, 0) = ((MR_Box) (PredId_27));
          MR_hl_field(MR_mktag(0), ResolvedFunctor_32, 1) = ((MR_Box) (ModuleName_28));
          MR_hl_field(MR_mktag(0), ResolvedFunctor_32, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
          MR_hl_field(MR_mktag(0), ResolvedFunctor_32, 3) = ((MR_Box) (Arity_20));
        }
        recompilation__check__check_functor_ambiguities_by_name_6_p_0(NeedQualifier_12, SymName_16, AritiesToMatch_31, ResolvedFunctor_32, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_35);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.check_for_pred_or_func_item_ambiguity\'/10", (MR_String) "unqualified predicate name");
          return;
        }
    }
    else
      *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_by_name_6_p_0(
  MR_Word NeedQualifier_7,
  MR_Word Name_8,
  MR_Word MatchArity_9,
  MR_Word ResolvedCtor_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_bool succeeded;
    MR_Word UsedItems_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4))));
    MR_String UnqualName_13;
    MR_Word UsedCtors_14;
    MR_Word UsedCtorAL_15;
    MR_Box conv0_UsedCtorAL_15;

    UnqualName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_8);
    UsedCtors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems_12, (MR_Integer) 5))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[9]), UsedCtors_14, ((MR_Box) (UnqualName_13)), &conv0_UsedCtorAL_15);
    if (succeeded)
    {
      UsedCtorAL_15 = ((MR_Word) (conv0_UsedCtorAL_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      recompilation__check__check_functor_ambiguities_2_7_p_0(NeedQualifier_7, Name_8, MatchArity_9, ResolvedCtor_10, UsedCtorAL_15, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    else
      *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_20;

    recompilation__check__check_functor_ambiguity_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Info_20);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_20;

    recompilation__check__check_functor_ambiguity_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Info_20);
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_20;

    recompilation__check__check_functor_ambiguity_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_20);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_20));
  }
}

static void MR_CALL 
recompilation__check__check_functor_ambiguities_2_7_p_0(
  MR_Word NeedQualifier_1,
  MR_Word Name_2,
  MR_Word MatchArity_3,
  MR_Word ResolvedCtor_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Integer Arity_19;
      MR_Word UsedCtorMap_20;
      MR_Word UsedCtorAL_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));

      Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
      UsedCtorMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) MatchArity_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_29;
            MR_Word STATE_VARIABLE_Info_30_30;
            MR_Box conv1_STATE_VARIABLE_Info_30_30;
            MR_Word next_value_of_HeadVar__5_5;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

            {
              Var_29 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[2]));
              MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (recompilation__check__check_functor_ambiguities_2_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (NeedQualifier_1));
              MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) (Name_2));
              MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (Arity_19));
              MR_hl_field(MR_mktag(0), Var_29, 6) = ((MR_Box) (ResolvedCtor_4));
            }
            mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[8]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_29, UsedCtorMap_20, ((MR_Box) (STATE_VARIABLE_Info_0_6)), &conv1_STATE_VARIABLE_Info_30_30);
            STATE_VARIABLE_Info_30_30 = ((MR_Word) (conv1_STATE_VARIABLE_Info_30_30));
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__5_5 = UsedCtorAL_21;
            next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_30_30;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArityToMatch_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MatchArity_3, (MR_Integer) 0))));

            succeeded = (ArityToMatch_23 == Arity_19);
            if (succeeded)
            {
              MR_Word Var_40;
              MR_Box conv3_STATE_VARIABLE_Info_7;

              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (recompilation__check__check_functor_ambiguities_2_7_p_0_2));
                MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (NeedQualifier_1));
                MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (Name_2));
                MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) (Arity_19));
                MR_hl_field(MR_mktag(0), Var_40, 6) = ((MR_Box) (ResolvedCtor_4));
              }
              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[8]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_40, UsedCtorMap_20, ((MR_Box) (STATE_VARIABLE_Info_0_6)), &conv3_STATE_VARIABLE_Info_7);
              *STATE_VARIABLE_Info_7 = ((MR_Word) (conv3_STATE_VARIABLE_Info_7));
            }
            else
            {
              succeeded = (Arity_19 < ArityToMatch_23);
              if (succeeded)
              {
                MR_Word next_value_of_HeadVar__5_5 = UsedCtorAL_21;

                // direct tailcall eliminated
                ;
                HeadVar__5_5 = next_value_of_HeadVar__5_5;
                continue;
              }
              else
                *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArityToMatch_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), MatchArity_3, (MR_Integer) 0))));

            succeeded = (Arity_19 <= ArityToMatch_32);
            if (succeeded)
            {
              MR_Word Var_53;
              MR_Word STATE_VARIABLE_Info_30_71;
              MR_Box conv5_STATE_VARIABLE_Info_30_71;
              MR_Word next_value_of_HeadVar__5_5;
              MR_Word next_value_of_STATE_VARIABLE_Info_0_6;

              {
                Var_53 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (recompilation__check__check_functor_ambiguities_2_7_p_0_3));
                MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (NeedQualifier_1));
                MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Name_2));
                MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (Arity_19));
                MR_hl_field(MR_mktag(0), Var_53, 6) = ((MR_Box) (ResolvedCtor_4));
              }
              mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[8]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_53, UsedCtorMap_20, ((MR_Box) (STATE_VARIABLE_Info_0_6)), &conv5_STATE_VARIABLE_Info_30_71);
              STATE_VARIABLE_Info_30_71 = ((MR_Word) (conv5_STATE_VARIABLE_Info_30_71));
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__5_5 = UsedCtorAL_21;
              next_value_of_STATE_VARIABLE_Info_0_6 = STATE_VARIABLE_Info_30_71;
              HeadVar__5_5 = next_value_of_HeadVar__5_5;
              STATE_VARIABLE_Info_0_6 = next_value_of_STATE_VARIABLE_Info_0_6;
              continue;
            }
            else
              *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_22;

    recompilation__check__check_for_simple_item_ambiguity_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_Info_22);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_Info_22));
  }
}

static void MR_CALL 
recompilation__check__check_for_simple_item_ambiguity_9_p_0(
  MR_Word NeedQualifier_10,
  MR_Word UsedFileTimestamp_11,
  MR_Word VersionNumbers_12,
  MR_Word ItemType_13,
  MR_Word SymName_14,
  MR_Integer Arity_15,
  MR_Word * NeedsCheck_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_String Name_51;
    MR_Word UsedVersionNumber_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Box conv0_Var_53;
    MR_Box conv1_UsedVersionNumber_52;

    Name_51 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_14);
    conv0_Var_53 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__check_scalar_common_2[10]), VersionNumbers_12, ItemType_13);
    Var_53 = ((MR_Word) (conv0_Var_53));
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Name_51));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Arity_15));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__check_scalar_common_2[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), Var_53, ((MR_Box) (Var_54)), &conv1_UsedVersionNumber_52);
    if (succeeded)
    {
      UsedVersionNumber_52 = ((MR_Word) (conv1_UsedVersionNumber_52));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_60;

      libs__timestamp____Compare____timestamp_0_0(&Var_60, UsedVersionNumber_52, UsedFileTimestamp_11);
      succeeded = ((MR_Integer) 2 == Var_60);
    }
    else
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word UsedItems_18;
      MR_Word UsedItemMap_19;
      MR_String Name_20;
      MR_Box conv2_UsedItemMap_19;
      MR_Word MatchingQualifiers_21;
      MR_Word Var_24;
      MR_Box conv3_MatchingQualifiers_21;

      *NeedsCheck_16 = (MR_Integer) 1;
      UsedItems_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 4))));
      conv2_UsedItemMap_19 = recompilation__extract_simple_item_set_2_f_0((MR_Word) (&recompilation__check_scalar_common_2[2]), (MR_Word) (&recompilation__check_scalar_common_2[6]), (MR_Word) (&recompilation__check_scalar_common_2[9]), UsedItems_18, ItemType_13);
      UsedItemMap_19 = ((MR_Word) (conv2_UsedItemMap_19));
      Name_20 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_14);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Name_20));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (Arity_15));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__check_scalar_common_2[0]), (MR_Word) (&recompilation__check_scalar_common_2[1]), UsedItemMap_19, ((MR_Box) (Var_24)), &conv3_MatchingQualifiers_21);
      if (succeeded)
      {
        MatchingQualifiers_21 = ((MR_Word) (conv3_MatchingQualifiers_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_25;
        MR_Box conv5_STATE_VARIABLE_Info_23;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (recompilation__check__check_for_simple_item_ambiguity_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (ItemType_13));
          MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (NeedQualifier_10));
          MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (SymName_14));
          MR_hl_field(MR_mktag(0), Var_25, 6) = ((MR_Box) (Arity_15));
        }
        mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_25, MatchingQualifiers_21, ((MR_Box) (STATE_VARIABLE_Info_0_22)), &conv5_STATE_VARIABLE_Info_23);
        *STATE_VARIABLE_Info_23 = ((MR_Word) (conv5_STATE_VARIABLE_Info_23));
      }
      else
        *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      *NeedsCheck_16 = (MR_Integer) 0;
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
  }
}

static void MR_CALL 
recompilation__check__check_raw_item_block_for_ambiguities_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_78;

    recompilation__check__check_item_for_ambiguities_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_78);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_78));
  }
}

static void MR_CALL 
recompilation__check__check_raw_item_block_for_ambiguities_6_p_0(
  MR_Word NeedQualifier_7,
  MR_Word OldTimestamp_8,
  MR_Word VersionNumbers_9,
  MR_Word RawItemBlock_10,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  {
    MR_Word Items_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RawItemBlock_10, (MR_Integer) 5))));
    MR_Word Var_20;
    MR_Box conv1_STATE_VARIABLE_Info_19;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&recompilation__check_scalar_common_11[5]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (recompilation__check__check_raw_item_block_for_ambiguities_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (NeedQualifier_7));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (OldTimestamp_8));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (VersionNumbers_9));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_20, Items_17, ((MR_Box) (STATE_VARIABLE_Info_0_18)), &conv1_STATE_VARIABLE_Info_19);
    *STATE_VARIABLE_Info_19 = ((MR_Word) (conv1_STATE_VARIABLE_Info_19));
  }
}

static void MR_CALL 
recompilation__check__check_instance_version_number_6_p_0(
  MR_Word ModuleName_7,
  MR_Word NewInstanceVersionNumbers_8,
  MR_Word ClassId_9,
  MR_Word UsedVersionNumber_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_bool succeeded;
    MR_Word NewVersionNumber_12;
    MR_Box conv0_NewVersionNumber_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), NewInstanceVersionNumbers_8, ((MR_Box) (ClassId_9)), &conv0_NewVersionNumber_12);
    if (succeeded)
    {
      NewVersionNumber_12 = ((MR_Word) (conv0_NewVersionNumber_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = libs__timestamp____Unify____timestamp_0_0(UsedVersionNumber_10, NewVersionNumber_12);
      if (succeeded)
        *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
      else
      {
        MR_Word Reason_13;
        MR_Word CollectAllReasons_26;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;

        {
          Reason_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Reason_13, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), Reason_13, 1) = ((MR_Box) (ModuleName_7));
          MR_hl_field(MR_mktag(3), Reason_13, 2) = ((MR_Box) (ClassId_9));
        }
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
        Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));
        Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3))));
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4))));
        Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 5))));
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 6))));
        CollectAllReasons_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 8))));
        switch (CollectAllReasons_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_27;

              {
                Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Reason_13));
                MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (STATE_VARIABLE_Info_0_14));
              }
              {
                mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_27)));
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_29;

              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Reason_13));
                MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_38));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_15 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_32));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_34));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_36));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_26));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_29));
              }
            }
            break;
        }
      }
    }
    else
    {
      MR_Word Reason_18;
      MR_Word CollectAllReasons_61;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;

      {
        Reason_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(MR_mktag(3), Reason_18, 1) = ((MR_Box) (ModuleName_7));
        MR_hl_field(MR_mktag(3), Reason_18, 2) = ((MR_Box) (ClassId_9));
      }
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
      Var_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3))));
      Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4))));
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 5))));
      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 6))));
      CollectAllReasons_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 8))));
      switch (CollectAllReasons_61) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_62;

            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Reason_18));
              MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (STATE_VARIABLE_Info_0_14));
            }
            {
              mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_62)));
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_64;

            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Reason_18));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_73));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_15 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_67));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_61));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_64));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__check_item_version_number_7_p_0(
  MR_Word ModuleName_8,
  MR_Word NewItemTypeVersionNumbers_9,
  MR_Word ItemType_10,
  MR_Word NameArity_11,
  MR_Word UsedVersionNumber_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word NewVersionNumber_14;
    MR_Box conv0_NewVersionNumber_14;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&recompilation__check_scalar_common_2[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), NewItemTypeVersionNumbers_9, ((MR_Box) (NameArity_11)), &conv0_NewVersionNumber_14);
    if (succeeded)
    {
      NewVersionNumber_14 = ((MR_Word) (conv0_NewVersionNumber_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = libs__timestamp____Unify____timestamp_0_0(NewVersionNumber_14, UsedVersionNumber_12);
      if (succeeded)
        *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
      else
      {
        MR_Word ItemId_15;
        MR_Word Reason_16;
        MR_String Name_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), NameArity_11, (MR_Integer) 0))));
        MR_Integer Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NameArity_11, (MR_Integer) 1))));
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word CollectAllReasons_36;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;

        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ModuleName_8));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Name_28));
        }
        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (Arity_29));
        }
        {
          ItemId_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemId_15, 0) = (MR_Box) ((MR_Unsigned) (ItemType_10));
          MR_hl_field(MR_mktag(0), ItemId_15, 1) = ((MR_Box) (Var_30));
        }
        Reason_16 = (MR_Word) ((MR_Word) (ItemId_15));
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
        Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 2))));
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 3))));
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 4))));
        Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 5))));
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 6))));
        CollectAllReasons_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 8))));
        switch (CollectAllReasons_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_37;

              {
                Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Reason_16));
                MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (STATE_VARIABLE_Info_0_17));
              }
              {
                mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_37)));
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_39;

              {
                Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Reason_16));
                MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_18 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_42));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_43));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_44));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_45));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_46));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_47));
                MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_36));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_39));
              }
            }
            break;
        }
      }
    }
    else
    {
      MR_Word ItemId_21;
      MR_Word Reason_22;
      MR_String Name_69 = ((MR_String) ((MR_hl_field(MR_mktag(0), NameArity_11, (MR_Integer) 0))));
      MR_Integer Arity_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NameArity_11, (MR_Integer) 1))));
      MR_Word Var_71;
      MR_Word Var_72;

      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (ModuleName_8));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Name_69));
      }
      {
        Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (Arity_70));
      }
      {
        ItemId_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemId_21, 0) = (MR_Box) ((MR_Unsigned) (ItemType_10));
        MR_hl_field(MR_mktag(0), ItemId_21, 1) = ((MR_Box) (Var_71));
      }
      Reason_22 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemId_21)));
      recompilation__check__record_recompilation_reason_3_p_0(Reason_22, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    }
  }
}

static void MR_CALL 
recompilation__check__check_item_version_numbers_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Info_18;

    recompilation__check__check_item_version_number_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_18);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
recompilation__check__check_item_version_numbers_6_p_0(
  MR_Word ModuleName_7,
  MR_Word UsedVersionNumbers_8,
  MR_Word NewVersionNumbers_9,
  MR_Word ItemType_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word NewItemTypeVersionNumbers_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Box conv0_NewItemTypeVersionNumbers_12;
    MR_Box conv2_Var_16;
    MR_Box conv3_STATE_VARIABLE_Info_14;

    conv0_NewItemTypeVersionNumbers_12 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__check_scalar_common_2[10]), NewVersionNumbers_9, ItemType_10);
    NewItemTypeVersionNumbers_12 = ((MR_Word) (conv0_NewItemTypeVersionNumbers_12));
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&recompilation__check_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (recompilation__check__check_item_version_numbers_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (NewItemTypeVersionNumbers_12));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (ItemType_10));
    }
    conv2_Var_16 = recompilation__extract_ids_2_f_0((MR_Word) (&recompilation__check_scalar_common_2[10]), UsedVersionNumbers_8, ItemType_10);
    Var_16 = ((MR_Word) (conv2_Var_16));
    mercury__map__foldl_4_p_0((MR_Word) (&recompilation__check_scalar_common_2[0]), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_15, Var_16, ((MR_Box) (STATE_VARIABLE_Info_0_13)), &conv3_STATE_VARIABLE_Info_14);
    *STATE_VARIABLE_Info_14 = ((MR_Word) (conv3_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
recompilation__check__parse_resolved_item_arity_matches_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_28;

    recompilation__check__IntroducedFrom__pred__parse_resolved_item_arity_matches__632__1_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_28);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_28));
  }
}

static void MR_CALL 
recompilation__check__parse_resolved_item_arity_matches_4_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word Info_5,
  MR_Word ParseMatches_6,
  MR_Word Term_7,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0);
    MR_Integer Arity_8;
    MR_Word MatchMap_9;
    MR_Integer Arity0_13;
    MR_Word MatchTermList_14;
    MR_Word TypeCtorInfo_35_35;
    MR_Word ArityTerm_10;
    MR_Word MatchesTerm_11;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 0))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
        succeeded = (strcmp(Var_20, (MR_String) "-") == 0);
        if (succeeded)
        {
          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArityTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
            succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MatchesTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
              Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_35_35 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_35_35, ArityTerm_10, &Arity0_13);
                if (succeeded)
                {
                  parse_tree__parse_util__conjunction_to_list_2_p_0(TypeCtorInfo_35_35, MatchesTerm_11, &MatchTermList_14);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_39_39;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Box conv1_MatchMap_9;

      Arity_8 = Arity0_13;
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&recompilation__check_scalar_common_11[4]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (recompilation__check__parse_resolved_item_arity_matches_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeInfo_for_T_34));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Info_5));
        MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (ParseMatches_6));
      }
      Var_25 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TypeInfo_for_T_34);
      {
        TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_39_39, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
        MR_hl_field(MR_mktag(0), TypeInfo_39_39, 1) = ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
        MR_hl_field(MR_mktag(0), TypeInfo_39_39, 2) = ((MR_Box) (TypeInfo_for_T_34));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), TypeInfo_39_39, Var_24, MatchTermList_14, ((MR_Box) (Var_25)), &conv1_MatchMap_9);
      MatchMap_9 = ((MR_Word) (conv1_MatchMap_9));
    }
    else
    {
      MR_Word Reason_18;
      MR_Word Var_29;
      MR_Word RecompileInfo_43;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_54;

      Var_29 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_7);
      {
        Reason_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_18, 1) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(3), Reason_18, 2) = ((MR_Box) ((MR_String) "error in resolved item matches"));
      }
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      Var_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
      Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
      {
        RecompileInfo_43 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_43, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), RecompileInfo_43, 1) = (MR_Box) ((MR_Unsigned) (Var_47));
        MR_hl_field(MR_mktag(0), RecompileInfo_43, 2) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), RecompileInfo_43, 3) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), RecompileInfo_43, 4) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), RecompileInfo_43, 5) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), RecompileInfo_43, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_43, 7) = (MR_Box) ((MR_Unsigned) (Var_53));
        MR_hl_field(MR_mktag(0), RecompileInfo_43, 8) = ((MR_Box) (Var_54));
      }
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Reason_18));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (RecompileInfo_43));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_45)));
        return;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Arity_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MatchMap_9));
    }
  }
}

static void MR_CALL 
recompilation__check__parse_resolved_functor_3_p_0(
  MR_Word Info_4,
  MR_Word Term_5,
  MR_Word * Ctor_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word PredOrFunc_11;
    MR_Word ModuleName_12;
    MR_Integer Arity_13;
    MR_Word TypeCtorInfo_45_45;
    MR_String PredOrFuncStr_7;
    MR_Word ModuleTerm_8;
    MR_Word ArityTerm_9;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    if (succeeded)
    {
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        PredOrFuncStr_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
        succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModuleTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
          succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArityTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
            Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
            succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              if ((strcmp(PredOrFuncStr_7, (MR_String) "function") == 0))
              {
                PredOrFunc_11 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              if ((strcmp(PredOrFuncStr_7, (MR_String) "predicate") == 0))
              {
                PredOrFunc_11 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                TypeCtorInfo_45_45 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_45_45, ModuleTerm_8, &ModuleName_12);
                if (succeeded)
                  succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_45_45, ArityTerm_9, &Arity_13);
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word PredId_14;

      PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *Ctor_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleName_12));
        MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Arity_13));
      }
    }
    else
    {
      MR_Word TypeName_17;
      MR_Integer TypeArity_18;
      MR_Word TypeCtorInfo_46_46;
      MR_Word NameArityTerm_15;
      MR_Word Var_29;
      MR_String Var_30;
      MR_Word Var_31;
      MR_Word Var_32;

      succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0))));
          succeeded = (strcmp(Var_30, (MR_String) "ctor") == 0);
          if (succeeded)
          {
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NameArityTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
              succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_46_46 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                succeeded = parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0(TypeCtorInfo_46_46, NameArityTerm_15, &TypeName_17, &TypeArity_18);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Var_33;

        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (TypeName_17));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (TypeArity_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Ctor_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
        }
      }
      else
      {
        MR_Word ConsName_22;
        MR_Integer ConsArity_23;
        MR_Word TypeName_43;
        MR_Integer TypeArity_44;
        MR_Word TypeCtorInfo_47_47;
        MR_Word TypeNameArityTerm_19;
        MR_Word ConsNameArityTerm_20;
        MR_Word Var_34;
        MR_String Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;

        succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
          Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_35 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_34, (MR_Integer) 0))));
            succeeded = (strcmp(Var_35, (MR_String) "field") == 0);
            if (succeeded)
            {
              succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeNameArityTerm_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0))));
                Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 1))));
                succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ConsNameArityTerm_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0))));
                  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1))));
                  succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_47_47 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                    succeeded = parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0(TypeCtorInfo_47_47, TypeNameArityTerm_19, &TypeName_43, &TypeArity_44);
                    if (succeeded)
                      succeeded = parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0(TypeCtorInfo_47_47, ConsNameArityTerm_20, &ConsName_22, &ConsArity_23);
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Word Var_39;
          MR_Word Var_40;

          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (TypeName_43));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (TypeArity_44));
          }
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (ConsName_22));
            MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ConsArity_23));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Ctor_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_40));
          }
        }
        else
        {
          MR_Word Reason_24;
          MR_Word Var_41;
          MR_Word RecompileInfo_51;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_61;
          MR_Word Var_62;

          Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
          {
            Reason_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Reason_24, 1) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(3), Reason_24, 2) = ((MR_Box) ((MR_String) "error in functor match"));
          }
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))));
          Var_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2))));
          Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3))));
          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4))));
          Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5))));
          Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7))) & (MR_Integer) 1);
          Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 8))));
          {
            RecompileInfo_51 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 1) = (MR_Box) ((MR_Unsigned) (Var_55));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 2) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 3) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 4) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 5) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 7) = (MR_Box) ((MR_Unsigned) (Var_61));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 8) = ((MR_Box) (Var_62));
          }
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Reason_24));
            MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (RecompileInfo_51));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_53)));
            return;
          }
        }
      }
    }
  }
}

static void MR_CALL 
recompilation__check__parse_functor_matches_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Ctor_6;

    recompilation__check__parse_resolved_functor_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Ctor_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Ctor_6));
  }
}

static void MR_CALL 
recompilation__check__parse_functor_matches_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Map_0_15,
  MR_Word * STATE_VARIABLE_Map_16)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word MatchesTerm_9;
    MR_Word Qualifier_11;
    MR_Word TypeCtorInfo_27_27;
    MR_Word QualifierTerm_8;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
        succeeded = (strcmp(Var_18, (MR_String) "=>") == 0);
        if (succeeded)
        {
          succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            QualifierTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
            Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
            succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MatchesTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
              Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
              succeeded = (Var_21 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_27_27 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0(TypeCtorInfo_27_27, QualifierTerm_8, &Qualifier_11);
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MatchesList_12;
      MR_Word Matches_13;
      MR_Word Var_22;
      MR_Word Var_23;

      parse_tree__parse_util__conjunction_to_list_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MatchesTerm_9, &MatchesList_12);
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&recompilation__check_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (recompilation__check__parse_functor_matches_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_5));
      }
      mercury__list__map_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), (MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), Var_22, MatchesList_12, &Matches_13);
      Var_23 = mercury__set__list_to_set_1_f_0((MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), Matches_13);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[8]), ((MR_Box) (Qualifier_11)), ((MR_Box) (Var_23)), STATE_VARIABLE_Map_0_15, STATE_VARIABLE_Map_16);
    }
    else
    {
      MR_Word Reason_14;
      MR_Word Var_25;
      MR_Word RecompileInfo_38;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_48;
      MR_Word Var_49;

      Var_25 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      {
        Reason_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_14, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_14, 1) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(3), Reason_14, 2) = ((MR_Box) ((MR_String) "error in functor match"));
      }
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
      Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
      {
        RecompileInfo_38 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_38, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), RecompileInfo_38, 1) = (MR_Box) ((MR_Unsigned) (Var_42));
        MR_hl_field(MR_mktag(0), RecompileInfo_38, 2) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), RecompileInfo_38, 3) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), RecompileInfo_38, 4) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), RecompileInfo_38, 5) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), RecompileInfo_38, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_38, 7) = (MR_Box) ((MR_Unsigned) (Var_48));
        MR_hl_field(MR_mktag(0), RecompileInfo_38, 8) = ((MR_Box) (Var_49));
      }
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Reason_14));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (RecompileInfo_38));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_40)));
        return;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__parse_functor_item_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    recompilation__check__parse_resolved_item_arity_matches_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
recompilation__check__parse_functor_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Map_16;

    recompilation__check__parse_functor_matches_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Map_16);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Map_16));
  }
}

static void MR_CALL 
recompilation__check__parse_functor_item_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word MatchesTerm_25;
    MR_String Name_27;
    MR_Word NameTerm_24;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;

    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
        succeeded = (strcmp(Var_33, (MR_String) "-") == 0);
        if (succeeded)
        {
          succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
            Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
            succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MatchesTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
              Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
              succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) NameTerm_24)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_24, (MR_Integer) 0))));
                  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_24, (MR_Integer) 1))));
                  succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
                    if (succeeded)
                      Name_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MatchTermList_29;
      MR_Word Matches_30;
      MR_Word Var_39;

      parse_tree__parse_util__conjunction_to_list_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MatchesTerm_25, &MatchTermList_29);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&recompilation__check_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (recompilation__check__parse_functor_item_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (&recompilation__check_scalar_common_1[8]));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Info_5));
        MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (&recompilation__check_scalar_common_2[16]));
      }
      mercury__list__map_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), (MR_Word) (&recompilation__check_scalar_common_2[8]), Var_39, MatchTermList_29, &Matches_30);
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[9]), ((MR_Box) (Name_27)), ((MR_Box) (Matches_30)), STATE_VARIABLE_Set_0_8, STATE_VARIABLE_Set_9);
    }
    else
    {
      MR_Word Reason_31;
      MR_Word Var_41;
      MR_Word RecompileInfo_60;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_70;
      MR_Word Var_71;

      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      {
        Reason_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_31, 1) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(3), Reason_31, 2) = ((MR_Box) ((MR_String) "error in resolved item matches"));
      }
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
      Var_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
      {
        RecompileInfo_60 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 1) = (MR_Box) ((MR_Unsigned) (Var_64));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 2) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 3) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 4) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 5) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 7) = (MR_Box) ((MR_Unsigned) (Var_70));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 8) = ((MR_Box) (Var_71));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Reason_31));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (RecompileInfo_60));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_62)));
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
recompilation__check__parse_pred_or_func_item_match_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_28;

    succeeded = recompilation__check__IntroducedFrom__pred__parse_pred_or_func_item_match__515__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_28);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_28));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check__parse_pred_or_func_item_match_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Items_0_19,
  MR_Word * STATE_VARIABLE_Items_20)
{
  {
    MR_bool succeeded;
    MR_Word PredId_8;
    MR_Word Qualifier_12;
    MR_Word Matches_17;
    MR_Word QualifierTerm_9;
    MR_Word MatchesTerm_10;
    MR_Word Var_21;
    MR_String Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    PredId_8 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
        succeeded = (strcmp(Var_22, (MR_String) "=>") == 0);
        if (succeeded)
        {
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            QualifierTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
            succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MatchesTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
              succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_39_39;
      MR_Word TypeInfo_40_40;
      MR_Word MatchesList_13;
      MR_Word Var_26;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QualifierTerm_9, &Qualifier_12);
      if (succeeded)
      {
        parse_tree__parse_util__conjunction_to_list_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MatchesTerm_10, &MatchesList_13);
        TypeInfo_39_39 = (MR_Word) (&recompilation__check_scalar_common_1[10]);
        TypeInfo_40_40 = (MR_Word) (&recompilation__check_scalar_common_2[3]);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&recompilation__check_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (recompilation__check__parse_pred_or_func_item_match_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (PredId_8));
        }
        succeeded = mercury__list__map_3_p_2(TypeInfo_39_39, TypeInfo_40_40, Var_26, MatchesList_13, &Matches_17);
      }
    }
    else
    {
      MR_Word Var_29;
      MR_Word Var_30;

      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6, &Qualifier_12);
      if (succeeded)
      {
        Var_30 = (MR_Word) ((MR_Unsigned) 0U);
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (PredId_8));
          MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Qualifier_12));
        }
        {
          Matches_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Matches_17, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Matches_17, 1) = ((MR_Box) (Var_30));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word Var_31;

      Var_31 = mercury__set__list_to_set_1_f_0((MR_Word) (&recompilation__check_scalar_common_2[3]), Matches_17);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check_scalar_common_1[6]), ((MR_Box) (Qualifier_12)), ((MR_Box) (Var_31)), STATE_VARIABLE_Items_0_19, STATE_VARIABLE_Items_20);
    }
    else
    {
      MR_Word Reason_18;
      MR_Word Var_33;
      MR_Word RecompileInfo_48;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_58;
      MR_Word Var_59;

      Var_33 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      {
        Reason_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_18, 1) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(3), Reason_18, 2) = ((MR_Box) ((MR_String) "error in pred or func match"));
      }
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      Var_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
      Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
      {
        RecompileInfo_48 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_48, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), RecompileInfo_48, 1) = (MR_Box) ((MR_Unsigned) (Var_52));
        MR_hl_field(MR_mktag(0), RecompileInfo_48, 2) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), RecompileInfo_48, 3) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), RecompileInfo_48, 4) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), RecompileInfo_48, 5) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), RecompileInfo_48, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_48, 7) = (MR_Box) ((MR_Unsigned) (Var_58));
        MR_hl_field(MR_mktag(0), RecompileInfo_48, 8) = ((MR_Box) (Var_59));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Reason_18));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (RecompileInfo_48));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_50)));
        return;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__parse_pred_or_func_item_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;

    recompilation__check__parse_resolved_item_arity_matches_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  }
}

static void MR_CALL 
recompilation__check__parse_pred_or_func_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Items_20;

    recompilation__check__parse_pred_or_func_item_match_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Items_20);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Items_20));
  }
}

static void MR_CALL 
recompilation__check__parse_pred_or_func_item_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word MatchesTerm_25;
    MR_String Name_27;
    MR_Word NameTerm_24;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;

    if (succeeded)
    {
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_32)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
        succeeded = (strcmp(Var_33, (MR_String) "-") == 0);
        if (succeeded)
        {
          succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameTerm_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
            Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
            succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MatchesTerm_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
              Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
              succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) NameTerm_24)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_24, (MR_Integer) 0))));
                  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_24, (MR_Integer) 1))));
                  succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 0);
                    if (succeeded)
                      Name_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 0))));
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MatchTermList_29;
      MR_Word Matches_30;
      MR_Word Var_39;

      parse_tree__parse_util__conjunction_to_list_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MatchesTerm_25, &MatchTermList_29);
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&recompilation__check_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (recompilation__check__parse_pred_or_func_item_4_p_0_2));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (&recompilation__check_scalar_common_1[6]));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Info_5));
        MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (&recompilation__check_scalar_common_2[15]));
      }
      mercury__list__map_3_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), (MR_Word) (&recompilation__check_scalar_common_2[5]), Var_39, MatchTermList_29, &Matches_30);
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[7]), ((MR_Box) (Name_27)), ((MR_Box) (Matches_30)), STATE_VARIABLE_Set_0_8, STATE_VARIABLE_Set_9);
    }
    else
    {
      MR_Word Reason_31;
      MR_Word Var_41;
      MR_Word RecompileInfo_60;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_70;
      MR_Word Var_71;

      Var_41 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      {
        Reason_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_31, 1) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(3), Reason_31, 2) = ((MR_Box) ((MR_String) "error in resolved item matches"));
      }
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
      Var_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
      {
        RecompileInfo_60 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 1) = (MR_Box) ((MR_Unsigned) (Var_64));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 2) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 3) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 4) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 5) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 7) = (MR_Box) ((MR_Unsigned) (Var_70));
        MR_hl_field(MR_mktag(0), RecompileInfo_60, 8) = ((MR_Box) (Var_71));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Reason_31));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (RecompileInfo_60));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_62)));
        return;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__parse_simple_item_match_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Items_0_14,
  MR_Word * STATE_VARIABLE_Items_15)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word Qualifier_11;
    MR_Word ModuleName_12;
    MR_Word QualifierTerm_8;
    MR_Word ModuleNameTerm_9;
    MR_Word Var_16;
    MR_String Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
        succeeded = (strcmp(Var_17, (MR_String) "=>") == 0);
        if (succeeded)
        {
          succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            QualifierTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
            Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));
            succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModuleNameTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
              Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
              succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), QualifierTerm_8, &Qualifier_11);
      if (succeeded)
        succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleNameTerm_9, &ModuleName_12);
    }
    else
    {
      succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6, &ModuleName_12);
      if (succeeded)
      {
        Qualifier_11 = ModuleName_12;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Qualifier_11)), ((MR_Box) (ModuleName_12)), STATE_VARIABLE_Items_0_14, STATE_VARIABLE_Items_15);
    else
    {
      MR_Word Reason_13;
      MR_Word Var_22;
      MR_Word RecompileInfo_30;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_40;
      MR_Word Var_41;

      Var_22 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      {
        Reason_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_13, 1) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(3), Reason_13, 2) = ((MR_Box) ((MR_String) "error in simple item match"));
      }
      Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      Var_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
      Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
      {
        RecompileInfo_30 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_30, 0) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), RecompileInfo_30, 1) = (MR_Box) ((MR_Unsigned) (Var_34));
        MR_hl_field(MR_mktag(0), RecompileInfo_30, 2) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), RecompileInfo_30, 3) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), RecompileInfo_30, 4) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), RecompileInfo_30, 5) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), RecompileInfo_30, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_30, 7) = (MR_Box) ((MR_Unsigned) (Var_40));
        MR_hl_field(MR_mktag(0), RecompileInfo_30, 8) = ((MR_Box) (Var_41));
      }
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Reason_13));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (RecompileInfo_30));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_32)));
        return;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__parse_simple_item_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Items_15;

    recompilation__check__parse_simple_item_match_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Items_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Items_15));
  }
}

static void MR_CALL 
recompilation__check__parse_simple_item_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word STATE_VARIABLE_Set_0_17,
  MR_Word * STATE_VARIABLE_Set_18)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_Word MatchesTerm_9;
    MR_Word SymName_11;
    MR_Integer Arity_12;
    MR_Word TypeCtorInfo_30_30;
    MR_Word NameArityTerm_8;
    MR_Word Var_19;
    MR_String Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
        succeeded = (strcmp(Var_20, (MR_String) "-") == 0);
        if (succeeded)
        {
          succeeded = (Var_21 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NameArityTerm_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 1))));
            succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MatchesTerm_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
              Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
              succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                TypeCtorInfo_30_30 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                succeeded = parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0(TypeCtorInfo_30_30, NameArityTerm_8, &SymName_11, &Arity_12);
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_String Name_13;
      MR_Word MatchTermList_14;
      MR_Word Matches_15;
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Box conv1_Matches_15;

      Name_13 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
      parse_tree__parse_util__conjunction_to_list_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MatchesTerm_9, &MatchTermList_14);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[6]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (recompilation__check__parse_simple_item_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_5));
      }
      Var_25 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
      mercury__list__foldl_4_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), (MR_Word) (&recompilation__check_scalar_common_2[1]), Var_24, MatchTermList_14, ((MR_Box) (Var_25)), &conv1_Matches_15);
      Matches_15 = ((MR_Word) (conv1_Matches_15));
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Name_13));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Arity_12));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&recompilation__check_scalar_common_2[0]), (MR_Word) (&recompilation__check_scalar_common_2[1]), ((MR_Box) (Var_26)), ((MR_Box) (Matches_15)), STATE_VARIABLE_Set_0_17, STATE_VARIABLE_Set_18);
    }
    else
    {
      MR_Word Reason_16;
      MR_Word Var_28;
      MR_Word RecompileInfo_42;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_52;
      MR_Word Var_53;

      Var_28 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      {
        Reason_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_16, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(3), Reason_16, 2) = ((MR_Box) ((MR_String) "error in simple items"));
      }
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
      Var_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
      {
        RecompileInfo_42 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_42, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), RecompileInfo_42, 1) = (MR_Box) ((MR_Unsigned) (Var_46));
        MR_hl_field(MR_mktag(0), RecompileInfo_42, 2) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), RecompileInfo_42, 3) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), RecompileInfo_42, 4) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), RecompileInfo_42, 5) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), RecompileInfo_42, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_42, 7) = (MR_Box) ((MR_Unsigned) (Var_52));
        MR_hl_field(MR_mktag(0), RecompileInfo_42, 8) = ((MR_Box) (Var_53));
      }
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Reason_16));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (RecompileInfo_42));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_44)));
        return;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__parse_used_item_set_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Set_9;

    recompilation__check__parse_functor_item_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Set_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Set_9));
  }
}

static void MR_CALL 
recompilation__check__parse_used_item_set_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Set_9;

    recompilation__check__parse_pred_or_func_item_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Set_9);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Set_9));
  }
}

static void MR_CALL 
recompilation__check__parse_used_item_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Set_18;

    recompilation__check__parse_simple_item_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Set_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Set_18));
  }
}

static void MR_CALL 
recompilation__check__parse_used_item_set_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word UsedItems0_7,
  MR_Word * UsedItems_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_6)) == (MR_Integer) 0);
    MR_String ItemTypeStr_9;
    MR_Word ItemTerms_10;
    MR_Word ItemType_12;
    MR_Word Var_17;

    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 0))));
      ItemTerms_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_6, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        ItemTypeStr_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
        succeeded = recompilation__string_to_item_type_2_p_0(ItemTypeStr_9, &ItemType_12);
      }
    }
    if (succeeded)
    {
      succeeded = recompilation__is_simple_item_type_1_p_0(ItemType_12);
      if (succeeded)
      {
        MR_Word SimpleItems_13;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Box conv1_SimpleItems_13;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[3]));
          MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (recompilation__check__parse_used_item_set_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_5));
        }
        Var_19 = mercury__map__init_0_f_0((MR_Word) (&recompilation__check_scalar_common_2[0]), (MR_Word) (&recompilation__check_scalar_common_2[1]));
        mercury__list__foldl_4_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), (MR_Word) (&recompilation__check_scalar_common_2[2]), Var_18, ItemTerms_10, ((MR_Box) (Var_19)), &conv1_SimpleItems_13);
        SimpleItems_13 = ((MR_Word) (conv1_SimpleItems_13));
        recompilation__update_simple_item_set_4_p_0((MR_Word) (&recompilation__check_scalar_common_2[2]), (MR_Word) (&recompilation__check_scalar_common_2[6]), (MR_Word) (&recompilation__check_scalar_common_2[9]), ItemType_12, ((MR_Box) (SimpleItems_13)), UsedItems0_7, UsedItems_8);
      }
      else
      {
        succeeded = recompilation__is_pred_or_func_item_type_1_p_0(ItemType_12);
        if (succeeded)
        {
          MR_Word PredOrFuncItems_14;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Box conv3_PredOrFuncItems_14;

          {
            Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[4]));
            MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (recompilation__check__parse_used_item_set_4_p_0_2));
            MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Info_5));
          }
          Var_21 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[7]));
          mercury__list__foldl_4_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), (MR_Word) (&recompilation__check_scalar_common_2[6]), Var_20, ItemTerms_10, ((MR_Box) (Var_21)), &conv3_PredOrFuncItems_14);
          PredOrFuncItems_14 = ((MR_Word) (conv3_PredOrFuncItems_14));
          recompilation__update_pred_or_func_set_4_p_0((MR_Word) (&recompilation__check_scalar_common_2[6]), (MR_Word) (&recompilation__check_scalar_common_2[2]), (MR_Word) (&recompilation__check_scalar_common_2[9]), ItemType_12, ((MR_Box) (PredOrFuncItems_14)), UsedItems0_7, UsedItems_8);
        }
        else
        {
          succeeded = (ItemType_12 == (MR_Integer) 5);
          if (succeeded)
          {
            MR_Word CtorItems_15;
            MR_Word Var_22;
            MR_Word Var_23;
            MR_Box conv5_CtorItems_15;
            MR_Word Var_30;
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_39;

            {
              Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[5]));
              MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (recompilation__check__parse_used_item_set_4_p_0_3));
              MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_5));
            }
            Var_23 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[9]));
            mercury__list__foldl_4_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), (MR_Word) (&recompilation__check_scalar_common_2[9]), Var_22, ItemTerms_10, ((MR_Box) (Var_23)), &conv5_CtorItems_15);
            CtorItems_15 = ((MR_Word) (conv5_CtorItems_15));
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems0_7, (MR_Integer) 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems0_7, (MR_Integer) 1))));
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems0_7, (MR_Integer) 2))));
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems0_7, (MR_Integer) 3))));
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems0_7, (MR_Integer) 4))));
            Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems0_7, (MR_Integer) 6))));
            Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems0_7, (MR_Integer) 7))));
            Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems0_7, (MR_Integer) 8))));
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItems0_7, (MR_Integer) 9))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              *UsedItems_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (CtorItems_15));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_39));
            }
          }
          else
          {
            MR_Word Reason_16;
            MR_Word Var_24;
            MR_String Var_25;
            MR_Word RecompileInfo_69;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_79;
            MR_Word Var_80;

            Var_24 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
            Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "error in used items: unknown item type: ", ItemTypeStr_9);
            {
              Reason_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Reason_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Reason_16, 1) = ((MR_Box) (Var_24));
              MR_hl_field(MR_mktag(3), Reason_16, 2) = ((MR_Box) (Var_25));
            }
            Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
            Var_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
            Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
            Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
            Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
            Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
            Var_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
            Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
            {
              RecompileInfo_69 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RecompileInfo_69, 0) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(0), RecompileInfo_69, 1) = (MR_Box) ((MR_Unsigned) (Var_73));
              MR_hl_field(MR_mktag(0), RecompileInfo_69, 2) = ((MR_Box) (Var_74));
              MR_hl_field(MR_mktag(0), RecompileInfo_69, 3) = ((MR_Box) (Var_75));
              MR_hl_field(MR_mktag(0), RecompileInfo_69, 4) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(0), RecompileInfo_69, 5) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), RecompileInfo_69, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), RecompileInfo_69, 7) = (MR_Box) ((MR_Unsigned) (Var_79));
              MR_hl_field(MR_mktag(0), RecompileInfo_69, 8) = ((MR_Box) (Var_80));
            }
            {
              Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Reason_16));
              MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (RecompileInfo_69));
            }
            {
              mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_71)));
              return;
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_27;
      MR_Word Reason_29;
      MR_Word RecompileInfo_84;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_94;
      MR_Word Var_95;

      Var_27 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      {
        Reason_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_29, 1) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(3), Reason_29, 2) = ((MR_Box) ((MR_String) "error in used items"));
      }
      Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      Var_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
      Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
      Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
      Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
      Var_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
      {
        RecompileInfo_84 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_84, 0) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), RecompileInfo_84, 1) = (MR_Box) ((MR_Unsigned) (Var_88));
        MR_hl_field(MR_mktag(0), RecompileInfo_84, 2) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), RecompileInfo_84, 3) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), RecompileInfo_84, 4) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), RecompileInfo_84, 5) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), RecompileInfo_84, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_84, 7) = (MR_Box) ((MR_Unsigned) (Var_94));
        MR_hl_field(MR_mktag(0), RecompileInfo_84, 8) = ((MR_Box) (Var_95));
      }
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Reason_29));
        MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (RecompileInfo_84));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_86)));
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
recompilation__check__parse_name_and_arity_to_used_2_p_0(
  MR_Word Term_3,
  MR_Word * UsedClass_4)
{
  {
    MR_bool succeeded;
    MR_Word ClassName_5;
    MR_Integer ClassArity_6;

    succeeded = parse_tree__parse_util__parse_unqualified_name_and_arity_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_3, &ClassName_5, &ClassArity_6);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *UsedClass_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_5));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ClassArity_6));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check__require_recompilation_if_not_up_to_date_6_p_0(
  MR_Word RecordedTimestamp_7,
  MR_String TargetFile_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_bool succeeded;
    MR_Word TargetModTimeResult_11;
    MR_Word TargetModTime_12;
    MR_Word TargetModTimeCompare_13;
    MR_Word Var_20;

    mercury__io__file_modification_time_4_p_0(TargetFile_8, &TargetModTimeResult_11);
    succeeded = ((MR_tag((MR_Word) TargetModTimeResult_11)) == (MR_Integer) 0);
    if (succeeded)
    {
      TargetModTime_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetModTimeResult_11, (MR_Integer) 0))));
      Var_20 = libs__timestamp__time_t_to_timestamp_1_f_0(TargetModTime_12);
      libs__timestamp____Compare____timestamp_0_0(&TargetModTimeCompare_13, Var_20, RecordedTimestamp_7);
      succeeded = (TargetModTimeCompare_13 == (MR_Integer) 2);
    }
    if (succeeded)
      *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
    else
    {
      MR_Word Reason_14;
      MR_Word CollectAllReasons_27;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;

      {
        Reason_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Reason_14, 1) = ((MR_Box) (TargetFile_8));
      }
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
      Var_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 3))));
      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 4))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 5))));
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 6))));
      CollectAllReasons_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 8))));
      switch (CollectAllReasons_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_28;

            {
              Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Reason_14));
              MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (STATE_VARIABLE_Info_0_15));
            }
            {
              mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_28)));
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_30;

            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Reason_14));
              MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Info_16 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_33));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_27));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_30));
            }
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
recompilation__check__should_recompile_3_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv7_UsedClass_4;

    succeeded = recompilation__check__parse_name_and_arity_to_used_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_UsedClass_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv7_UsedClass_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check__should_recompile_3_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Info_16;

    recompilation__check__require_recompilation_if_not_up_to_date_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Info_16);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Info_16));
  }
}

static MR_bool MR_CALL 
recompilation__check__should_recompile_3_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_182;

    succeeded = recompilation__check__IntroducedFrom__pred__should_recompile_3__317__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_182);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_182));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check__should_recompile_3_8_p_0(
  MR_Word VersionStream_9,
  MR_Word Globals_10,
  MR_Word IsSubModule_11,
  MR_Word FindTargetFiles_12,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  {
    MR_bool succeeded;
    MR_Word VersionNumberTerm_15;
    MR_Word Reason_20;
    MR_Word TimestampTerm_21;
    MR_Word ModuleTimestamp_23;
    MR_Word RecordedTimestamp_25;
    MR_Word SubModulesTerm_35;
    MR_Word TargetFiles_40;
    MR_Word UsedItemsTerm_41;
    MR_Word UsedItems_42;
    MR_Word UsedClassesTerm_43;
    MR_Word STATE_VARIABLE_Info_86_86;
    MR_Word STATE_VARIABLE_Info_102_102;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word STATE_VARIABLE_Info_108_108;
    MR_Word STATE_VARIABLE_Info_112_112;
    MR_Word STATE_VARIABLE_Info_118_118;
    MR_Word TypeCtorInfo_179_179;
    MR_Word UsageFileVersionNumberTerm_16;
    MR_Word VersionNumbersVersionNumberTerm_17;
    MR_Word Var_54;
    MR_String Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Integer Var_59;
    MR_Integer Var_60;
    MR_Integer Var_201;
    MR_Integer Var_202;
    MR_Word Var_22;
    MR_Word SubModules_38;
    MR_Word TypeInfo_184_184;
    MR_Word TypeCtorInfo_185_185;
    MR_Word SubModuleTerms_36;
    MR_Word Var_99;
    MR_String Var_100;
    MR_Word Var_101;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv3_TargetFiles_40;
    MR_Box conv2_STATE_VARIABLE_IO_106_106;
    MR_Box conv6_STATE_VARIABLE_Info_108_108;
    MR_Box conv5_STATE_VARIABLE_IO_109_109;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_164;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_169;
    MR_Word UsedClasses_46;
    MR_Word TypeInfo_197_197;
    MR_Word TypeCtorInfo_198_198;
    MR_Word UsedClassTerms_44;
    MR_Word Var_115;
    MR_String Var_116;
    MR_Word Var_117;

    recompilation__check__read_term_check_for_error_or_eof_6_p_0(VersionStream_9, STATE_VARIABLE_Info_0_48, (MR_String) "usage file version number", &VersionNumberTerm_15);
    succeeded = ((MR_tag((MR_Word) VersionNumberTerm_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VersionNumberTerm_15, (MR_Integer) 0))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VersionNumberTerm_15, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_55 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_54, (MR_Integer) 0))));
        succeeded = (strcmp(Var_55, (MR_String) ",") == 0);
        if (succeeded)
        {
          succeeded = (Var_56 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            UsageFileVersionNumberTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0))));
            Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1))));
            succeeded = (Var_57 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              VersionNumbersVersionNumberTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 0))));
              Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_57, (MR_Integer) 1))));
              succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_59 = recompilation__usage__usage_file_version_number_0_f_0();
                TypeCtorInfo_179_179 = (MR_Word) (&mercury__term__term__type_ctor_info_generic_0);
                succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_179_179, UsageFileVersionNumberTerm_16, &Var_201);
                if (succeeded)
                {
                  succeeded = (Var_59 == Var_201);
                  if (succeeded)
                  {
                    Var_60 = recompilation__version__version_numbers_version_number_0_f_0();
                    succeeded = mercury__term__decimal_term_to_int_2_p_0(TypeCtorInfo_179_179, VersionNumbersVersionNumberTerm_17, &Var_202);
                    if (succeeded)
                      succeeded = (Var_60 == Var_202);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (!(succeeded))
    {
      MR_String UsageFileName_19;
      MR_Word Var_62;
      MR_Word Var_65;
      MR_Word Var_66;

      mercury__io__input_stream_name_3_p_0(&UsageFileName_19);
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (UsageFileName_19));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[27])));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[64])));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
      }
      {
        Reason_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Reason_20, 0) = ((MR_Box) (UsageFileName_19));
        MR_hl_field(MR_mktag(2), Reason_20, 1) = ((MR_Box) (Var_62));
      }
      {
        recompilation__check__throw_syntax_error_2_p_0(Reason_20, STATE_VARIABLE_Info_0_48);
        return;
      }
    }
    recompilation__check__read_term_check_for_error_or_eof_6_p_0(VersionStream_9, STATE_VARIABLE_Info_0_48, (MR_String) "module timestamp", &TimestampTerm_21);
    recompilation__check__parse_module_timestamp_4_p_0(STATE_VARIABLE_Info_0_48, TimestampTerm_21, &Var_22, &ModuleTimestamp_23);
    RecordedTimestamp_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleTimestamp_23, (MR_Integer) 1))));
    switch (IsSubModule_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_48, (MR_Integer) 0))));
          MR_String FileName_28;
          MR_Word MaybeNewTimestamp_29;
          MR_Word ParseTree_30;
          MR_Word Specs_31;
          MR_Word Errors_32;
          MR_Word Var_79;
          MR_Word NewTimestamp_33;

          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (RecordedTimestamp_25));
          }
          parse_tree__read_modules__read_module_src_14_p_0(Globals_10, (MR_String) "Reading module", (MR_Integer) 1, (MR_Integer) 0, ModuleName_27, (MR_Word) ((MR_Unsigned) 0U), &FileName_28, Var_79, &MaybeNewTimestamp_29, &ParseTree_30, &Specs_31, &Errors_32);
          succeeded = (MaybeNewTimestamp_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NewTimestamp_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNewTimestamp_29, (MR_Integer) 0))));
            succeeded = libs__timestamp____Unify____timestamp_0_0(NewTimestamp_33, RecordedTimestamp_25);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word Var_81;
            MR_Word STATE_VARIABLE_Info_82_82;
            MR_Word STATE_VARIABLE_Info_83_83;
            MR_Word Var_85;
            MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleTimestamp_23, (MR_Integer) 0))));
            MR_Word Var_134 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleTimestamp_23, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Var_135;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_142;
            MR_Word Var_143;

            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Var_132));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (NewTimestamp_33));
              MR_hl_field(MR_mktag(0), Var_81, 2) = (MR_Box) ((MR_Unsigned) (Var_134));
            }
            recompilation__check__record_read_file_src_8_p_0(ModuleName_27, FileName_28, Var_81, ParseTree_30, Specs_31, Errors_32, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_82_82);
            Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, (MR_Integer) 0))));
            Var_136 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, (MR_Integer) 1))) & (MR_Integer) 1);
            Var_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, (MR_Integer) 2))));
            Var_138 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, (MR_Integer) 3))));
            Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, (MR_Integer) 4))));
            Var_140 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, (MR_Integer) 5))));
            Var_142 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, (MR_Integer) 7))) & (MR_Integer) 1);
            Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_82_82, (MR_Integer) 8))));
            {
              STATE_VARIABLE_Info_83_83 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, 0) = ((MR_Box) (Var_135));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, 1) = (MR_Box) ((MR_Unsigned) (Var_136));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, 2) = ((MR_Box) (Var_137));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, 3) = ((MR_Box) (Var_138));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, 4) = ((MR_Box) (Var_139));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, 5) = ((MR_Box) (Var_140));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, 7) = (MR_Box) ((MR_Unsigned) (Var_142));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_83_83, 8) = ((MR_Box) (Var_143));
            }
            {
              Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (FileName_28));
            }
            recompilation__check__record_recompilation_reason_3_p_0(Var_85, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_86_86);
          }
          else
          {
            succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_32);
            if (!(succeeded))
              succeeded = (MaybeNewTimestamp_29 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MR_Word Pieces_34;
              MR_Word Var_89;
              MR_Word Var_90;

              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) (FileName_28));
              }
              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
                MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[27])));
              }
              {
                Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[63])));
                MR_hl_field(MR_mktag(1), Pieces_34, 1) = ((MR_Box) (Var_89));
              }
              {
                Reason_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_20, 0) = ((MR_Box) (FileName_28));
                MR_hl_field(MR_mktag(2), Reason_20, 1) = ((MR_Box) (Pieces_34));
              }
              {
                recompilation__check__throw_syntax_error_2_p_0(Reason_20, STATE_VARIABLE_Info_0_48);
                return;
              }
            }
            STATE_VARIABLE_Info_86_86 = STATE_VARIABLE_Info_0_48;
          }
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Info_86_86 = STATE_VARIABLE_Info_0_48;
        break;
    }
    recompilation__check__read_term_check_for_error_or_eof_6_p_0(VersionStream_9, STATE_VARIABLE_Info_86_86, (MR_String) "inline sub-modules", &SubModulesTerm_35);
    succeeded = ((MR_tag((MR_Word) SubModulesTerm_35)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubModulesTerm_35, (MR_Integer) 0))));
      SubModuleTerms_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubModulesTerm_35, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_99)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_100 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_99, (MR_Integer) 0))));
        succeeded = (strcmp(Var_100, (MR_String) "sub_modules") == 0);
        if (succeeded)
        {
          Var_101 = (MR_Word) (&recompilation__check_scalar_common_2[13]);
          TypeInfo_184_184 = (MR_Word) (&recompilation__check_scalar_common_1[10]);
          TypeCtorInfo_185_185 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
          succeeded = mercury__list__map_3_p_2(TypeInfo_184_184, TypeCtorInfo_185_185, Var_101, SubModuleTerms_36, &SubModules_38);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_86_86, (MR_Integer) 0))));
      MR_Word Var_145 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_86_86, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_86_86, (MR_Integer) 3))));
      MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_86_86, (MR_Integer) 4))));
      MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_86_86, (MR_Integer) 5))));
      MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_86_86, (MR_Integer) 6))));
      MR_Word Var_151 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_86_86, (MR_Integer) 7))) & (MR_Integer) 1);
      MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_86_86, (MR_Integer) 8))));

      {
        STATE_VARIABLE_Info_102_102 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, 0) = ((MR_Box) (Var_144));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, 1) = (MR_Box) ((MR_Unsigned) (Var_145));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, 2) = ((MR_Box) (SubModules_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, 3) = ((MR_Box) (Var_147));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, 4) = ((MR_Box) (Var_148));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, 5) = ((MR_Box) (Var_149));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, 6) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, 7) = (MR_Box) ((MR_Unsigned) (Var_151));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, 8) = ((MR_Box) (Var_152));
      }
    }
    else
    {
      MR_Word Reason1_39;
      MR_Word Var_103;

      Var_103 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), SubModulesTerm_35);
      {
        Reason1_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason1_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason1_39, 1) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(3), Reason1_39, 2) = ((MR_Box) ((MR_String) "error in sub_modules term"));
      }
      {
        recompilation__check__throw_syntax_error_2_p_0(Reason1_39, STATE_VARIABLE_Info_86_86);
        return;
      }
    }
    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_102_102, (MR_Integer) 0))));
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), FindTargetFiles_12, (MR_Integer) 1))));
    func_1(((MR_Box) (FindTargetFiles_12)), ((MR_Box) (Var_105)), &conv3_TargetFiles_40, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_106_106);
    TargetFiles_40 = ((MR_Word) (conv3_TargetFiles_40));
    {
      Var_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&recompilation__check_scalar_common_11[3]));
      MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (recompilation__check__should_recompile_3_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (RecordedTimestamp_25));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_107, TargetFiles_40, ((MR_Box) (STATE_VARIABLE_Info_102_102)), &conv6_STATE_VARIABLE_Info_108_108, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_109_109);
    STATE_VARIABLE_Info_108_108 = ((MR_Word) (conv6_STATE_VARIABLE_Info_108_108));
    recompilation__check__read_term_check_for_error_or_eof_6_p_0(VersionStream_9, STATE_VARIABLE_Info_108_108, (MR_String) "used items", &UsedItemsTerm_41);
    recompilation__check__parse_used_items_3_p_0(STATE_VARIABLE_Info_108_108, UsedItemsTerm_41, &UsedItems_42);
    Var_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_108_108, (MR_Integer) 0))));
    Var_162 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_108_108, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_108_108, (MR_Integer) 2))));
    Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_108_108, (MR_Integer) 3))));
    Var_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_108_108, (MR_Integer) 5))));
    Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_108_108, (MR_Integer) 6))));
    Var_168 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_108_108, (MR_Integer) 7))) & (MR_Integer) 1);
    Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_108_108, (MR_Integer) 8))));
    {
      STATE_VARIABLE_Info_112_112 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 0) = ((MR_Box) (Var_161));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 1) = (MR_Box) ((MR_Unsigned) (Var_162));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 2) = ((MR_Box) (Var_163));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 3) = ((MR_Box) (Var_164));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 4) = ((MR_Box) (UsedItems_42));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 5) = ((MR_Box) (Var_166));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 6) = ((MR_Box) (Var_167));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 7) = (MR_Box) ((MR_Unsigned) (Var_168));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, 8) = ((MR_Box) (Var_169));
    }
    recompilation__check__read_term_check_for_error_or_eof_6_p_0(VersionStream_9, STATE_VARIABLE_Info_112_112, (MR_String) "used classes", &UsedClassesTerm_43);
    succeeded = ((MR_tag((MR_Word) UsedClassesTerm_43)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedClassesTerm_43, (MR_Integer) 0))));
      UsedClassTerms_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedClassesTerm_43, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_115)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_116 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 0))));
        succeeded = (strcmp(Var_116, (MR_String) "used_classes") == 0);
        if (succeeded)
        {
          Var_117 = (MR_Word) (&recompilation__check_scalar_common_2[14]);
          TypeInfo_197_197 = (MR_Word) (&recompilation__check_scalar_common_1[10]);
          TypeCtorInfo_198_198 = (MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0);
          succeeded = mercury__list__map_3_p_2(TypeInfo_197_197, TypeCtorInfo_198_198, Var_117, UsedClassTerms_44, &UsedClasses_46);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_119;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Word Var_176;
      MR_Word Var_177;
      MR_Word Var_178;

      Var_119 = mercury__set__list_to_set_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), UsedClasses_46);
      Var_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, (MR_Integer) 0))));
      Var_171 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_172 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, (MR_Integer) 2))));
      Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, (MR_Integer) 3))));
      Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, (MR_Integer) 4))));
      Var_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, (MR_Integer) 6))));
      Var_177 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_112_112, (MR_Integer) 8))));
      {
        STATE_VARIABLE_Info_118_118 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_118_118, 0) = ((MR_Box) (Var_170));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_118_118, 1) = (MR_Box) ((MR_Unsigned) (Var_171));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_118_118, 2) = ((MR_Box) (Var_172));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_118_118, 3) = ((MR_Box) (Var_173));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_118_118, 4) = ((MR_Box) (Var_174));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_118_118, 5) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_118_118, 6) = ((MR_Box) (Var_176));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_118_118, 7) = (MR_Box) ((MR_Unsigned) (Var_177));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_118_118, 8) = ((MR_Box) (Var_178));
      }
    }
    else
    {
      MR_Word Reason3_47;
      MR_Word Var_120;

      Var_120 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), UsedClassesTerm_43);
      {
        Reason3_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason3_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason3_47, 1) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(3), Reason3_47, 2) = ((MR_Box) ((MR_String) "error in used_typeclasses term"));
      }
      {
        recompilation__check__throw_syntax_error_2_p_0(Reason3_47, STATE_VARIABLE_Info_112_112);
        return;
      }
    }
    recompilation__check__check_imported_modules_6_p_0(VersionStream_9, Globals_10, STATE_VARIABLE_Info_118_118, STATE_VARIABLE_Info_49);
  }
}

static void MR_CALL 
recompilation__check__read_term_check_for_error_or_eof_6_p_0(
  MR_Word VersionStream_7,
  MR_Word Info_8,
  MR_String Item_9,
  MR_Word * Term_10)
{
  {
    MR_Word TermResult_12;

    mercury__parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VersionStream_7, &TermResult_12);
    switch (MR_tag((MR_Word) TermResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_23;
          MR_String Var_24;
          MR_String Var_26;
          MR_Integer Line_30;
          MR_String FileName_31;
          MR_Word Reason_32;
          MR_Word RecompileInfo_36;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_46;
          MR_Word Var_47;

          mercury__io__input_stream_name_4_p_0(VersionStream_7, &FileName_31);
          mercury__io__get_line_number_4_p_0(VersionStream_7, &Line_30);
          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (FileName_31));
            MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (Line_30));
          }
          Var_26 = mercury__string__f_43_43_2_f_0(Item_9, (MR_String) ".");
          Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected end of file, expected ", Var_26);
          {
            Reason_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Reason_32, 1) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(3), Reason_32, 2) = ((MR_Box) (Var_24));
          }
          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
          Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
          Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
          Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))));
          Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) & (MR_Integer) 1);
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 8))));
          {
            RecompileInfo_36 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RecompileInfo_36, 0) = ((MR_Box) (Var_39));
            MR_hl_field(MR_mktag(0), RecompileInfo_36, 1) = (MR_Box) ((MR_Unsigned) (Var_40));
            MR_hl_field(MR_mktag(0), RecompileInfo_36, 2) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(0), RecompileInfo_36, 3) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(0), RecompileInfo_36, 4) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), RecompileInfo_36, 5) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(0), RecompileInfo_36, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), RecompileInfo_36, 7) = (MR_Box) ((MR_Unsigned) (Var_46));
            MR_hl_field(MR_mktag(0), RecompileInfo_36, 8) = ((MR_Box) (Var_47));
          }
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Reason_32));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (RecompileInfo_36));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_38)));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Message_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), TermResult_12, (MR_Integer) 0))));
          MR_Integer Line_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TermResult_12, (MR_Integer) 1))));
          MR_String FileName_16;
          MR_Word Reason_17;
          MR_Word Var_29;
          MR_Word RecompileInfo_51;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_61;
          MR_Word Var_62;

          mercury__io__input_stream_name_4_p_0(VersionStream_7, &FileName_16);
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (FileName_16));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Line_15));
          }
          {
            Reason_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Reason_17, 1) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(3), Reason_17, 2) = ((MR_Box) (Message_14));
          }
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
          Var_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
          Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
          Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 5))));
          Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 7))) & (MR_Integer) 1);
          Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 8))));
          {
            RecompileInfo_51 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 1) = (MR_Box) ((MR_Unsigned) (Var_55));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 2) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 3) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 4) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 5) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 7) = (MR_Box) ((MR_Unsigned) (Var_61));
            MR_hl_field(MR_mktag(0), RecompileInfo_51, 8) = ((MR_Box) (Var_62));
          }
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Reason_17));
            MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (RecompileInfo_51));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_53)));
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        *Term_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TermResult_12, (MR_Integer) 1))));
        break;
    }
  }
}

static void MR_CALL 
recompilation__check__record_read_file_src_8_p_0(
  MR_Word ModuleName_9,
  MR_String FileName_10,
  MR_Word ModuleTimestamp_11,
  MR_Word ParseTree_12,
  MR_Word Specs_13,
  MR_Word Errors_14,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word HaveReadModuleMaps0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
    MR_Word HaveReadModuleMapSrc0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_16, (MR_Integer) 0))));
    MR_Word HaveReadModuleMapSrc_18;
    MR_Word HaveReadModuleMaps_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), Var_22, 1) = NULL;
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (FileName_10));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ModuleTimestamp_11));
      MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) (ParseTree_12));
      MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Specs_13));
      MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Errors_14));
    }
    mercury__map__set_4_p_0((MR_Word) (&recompilation__check_scalar_common_1[0]), (MR_Word) (&recompilation__check_scalar_common_1[1]), ((MR_Box) (Var_22)), ((MR_Box) (Var_23)), HaveReadModuleMapSrc0_17, &HaveReadModuleMapSrc_18);
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_16, (MR_Integer) 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_16, (MR_Integer) 2))));
    {
      HaveReadModuleMaps_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HaveReadModuleMaps_19, 0) = ((MR_Box) (HaveReadModuleMapSrc_18));
      MR_hl_field(MR_mktag(0), HaveReadModuleMaps_19, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), HaveReadModuleMaps_19, 2) = ((MR_Box) (Var_38));
    }
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
    Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 4))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 5))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 6))));
    Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 7))) & (MR_Integer) 1);
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (HaveReadModuleMaps_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (Var_46));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_47));
    }
  }
}

static void MR_CALL 
recompilation__check__check_imported_modules_6_p_0(
  MR_Word VersionStream_7,
  MR_Word Globals_8,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TermResult_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__parser__read_term_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VersionStream_7, &TermResult_11);
    switch (MR_tag((MR_Word) TermResult_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_26;
          MR_Integer Line_37;
          MR_String FileName_38;
          MR_Word Reason_39;
          MR_Word RecompileInfo_43;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_53;
          MR_Word Var_54;

          mercury__io__input_stream_name_4_p_0(VersionStream_7, &FileName_38);
          mercury__io__get_line_number_4_p_0(VersionStream_7, &Line_37);
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (FileName_38));
            MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Line_37));
          }
          {
            Reason_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Reason_39, 1) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(3), Reason_39, 2) = ((MR_Box) ((MR_String) "unexpected end of file"));
          }
          Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
          Var_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
          Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5))));
          Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7))) & (MR_Integer) 1);
          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8))));
          {
            RecompileInfo_43 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RecompileInfo_43, 0) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(0), RecompileInfo_43, 1) = (MR_Box) ((MR_Unsigned) (Var_47));
            MR_hl_field(MR_mktag(0), RecompileInfo_43, 2) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(0), RecompileInfo_43, 3) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), RecompileInfo_43, 4) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(0), RecompileInfo_43, 5) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), RecompileInfo_43, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), RecompileInfo_43, 7) = (MR_Box) ((MR_Unsigned) (Var_53));
            MR_hl_field(MR_mktag(0), RecompileInfo_43, 8) = ((MR_Box) (Var_54));
          }
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Reason_39));
            MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (RecompileInfo_43));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_45)));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Message_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), TermResult_11, (MR_Integer) 0))));
          MR_Integer Line_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), TermResult_11, (MR_Integer) 1))));
          MR_String FileName_17;
          MR_Word Reason_18;
          MR_Word Var_29;
          MR_Word RecompileInfo_58;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_68;
          MR_Word Var_69;

          mercury__io__input_stream_name_4_p_0(VersionStream_7, &FileName_17);
          {
            Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (FileName_17));
            MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Line_16));
          }
          {
            Reason_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Reason_18, 1) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(3), Reason_18, 2) = ((MR_Box) (Message_15));
          }
          Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 0))));
          Var_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 2))));
          Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 3))));
          Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 4))));
          Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 5))));
          Var_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 7))) & (MR_Integer) 1);
          Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_19, (MR_Integer) 8))));
          {
            RecompileInfo_58 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RecompileInfo_58, 0) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(0), RecompileInfo_58, 1) = (MR_Box) ((MR_Unsigned) (Var_62));
            MR_hl_field(MR_mktag(0), RecompileInfo_58, 2) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(0), RecompileInfo_58, 3) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(0), RecompileInfo_58, 4) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(0), RecompileInfo_58, 5) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(0), RecompileInfo_58, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), RecompileInfo_58, 7) = (MR_Box) ((MR_Unsigned) (Var_68));
            MR_hl_field(MR_mktag(0), RecompileInfo_58, 8) = ((MR_Box) (Var_69));
          }
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Reason_18));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (RecompileInfo_58));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_60)));
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TermResult_11, (MR_Integer) 1))));
          MR_Word Var_30;
          MR_String Var_31;
          MR_Word Var_32;

          succeeded = ((MR_tag((MR_Word) Term_13)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 0))));
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_13, (MR_Integer) 1))));
            succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
                succeeded = (strcmp(Var_31, (MR_String) "done") == 0);
              }
            }
          }
          if (succeeded)
            *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
          else
          {
            MR_Word STATE_VARIABLE_Info_33_33;
            MR_Word next_value_of_STATE_VARIABLE_Info_0_19;

            recompilation__check__check_imported_module_6_p_0(Globals_8, Term_13, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_33_33);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_Info_0_19 = STATE_VARIABLE_Info_33_33;
            STATE_VARIABLE_Info_0_19 = next_value_of_STATE_VARIABLE_Info_0_19;
            continue;
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
recompilation__check__check_imported_module_6_p_0(
  MR_Word Globals_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_Info_0_53,
  MR_Word * STATE_VARIABLE_Info_54)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_8)) == (MR_Integer) 0);
    MR_Word TimestampTerm_14;
    MR_Word MaybeUsedItemsTerm_15;
    MR_Word ImportedModuleName_16;
    MR_Word ModuleTimestamp_17;
    MR_Word FileKind_18;
    MR_Word RecordedTimestamp_19;
    MR_Word NeedQualifier_20;
    MR_Word IntFileKind_21;
    MR_Word HaveReadModuleMaps_23;
    MR_Word HaveReadModuleMapInt_24;
    MR_String FileName_30;
    MR_Word MaybeNewTimestamp_31;
    MR_Word ParseTreeInt_32;
    MR_Word Specs_33;
    MR_Word Errors_34;
    MR_Word Recorded_35;
    MR_Word TimestampTerm0_11;
    MR_Word UsedItemsTerm0_12;
    MR_Word Var_57;
    MR_String Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_String FileNamePrime_25;
    MR_Word MaybeNewTimestampPrime_26;
    MR_Word ParseTreeIntPrime_27;
    MR_Word SpecsPrime_28;
    MR_Word ErrorsPrime_29;
    MR_Word Var_66;
    MR_Word Var_67;

    if (succeeded)
    {
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 0))));
      Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_8, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_58 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_57, (MR_Integer) 0))));
        succeeded = (strcmp(Var_58, (MR_String) "=>") == 0);
        if (succeeded)
        {
          succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            TimestampTerm0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0))));
            Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 1))));
            succeeded = (Var_60 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              UsedItemsTerm0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))));
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1))));
              succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      TimestampTerm_14 = TimestampTerm0_11;
      {
        MaybeUsedItemsTerm_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeUsedItemsTerm_15, 0) = ((MR_Box) (UsedItemsTerm0_12));
      }
    }
    else
    {
      TimestampTerm_14 = Term_8;
      MaybeUsedItemsTerm_15 = (MR_Word) ((MR_Unsigned) 0U);
    }
    recompilation__check__parse_module_timestamp_4_p_0(STATE_VARIABLE_Info_0_53, TimestampTerm_14, &ImportedModuleName_16, &ModuleTimestamp_17);
    FileKind_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleTimestamp_17, (MR_Integer) 0))));
    RecordedTimestamp_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleTimestamp_17, (MR_Integer) 1))));
    NeedQualifier_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleTimestamp_17, (MR_Integer) 2))) & (MR_Integer) 1);
    switch (MR_tag((MR_Word) FileKind_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.check_imported_module\'/6", (MR_String) "fk_src");
          return;
        }
        break;
      case (MR_Integer) 1:
        IntFileKind_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), FileKind_18, (MR_Integer) 0))) & (MR_Integer) 3);
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.check_imported_module\'/6", (MR_String) "fk_opt");
          return;
        }
        break;
    }
    HaveReadModuleMaps_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 3))));
    HaveReadModuleMapInt_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps_23, (MR_Integer) 1))));
    Var_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_53, (MR_Integer) 1))) & (MR_Integer) 1);
    succeeded = (Var_66 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_67 = (MR_Integer) 0;
      succeeded = parse_tree__read_modules__find_read_module_int_9_p_0(HaveReadModuleMapInt_24, ImportedModuleName_16, IntFileKind_21, Var_67, &FileNamePrime_25, &MaybeNewTimestampPrime_26, &ParseTreeIntPrime_27, &SpecsPrime_28, &ErrorsPrime_29);
    }
    if (succeeded)
    {
      FileName_30 = FileNamePrime_25;
      MaybeNewTimestamp_31 = MaybeNewTimestampPrime_26;
      ParseTreeInt_32 = ParseTreeIntPrime_27;
      Specs_33 = SpecsPrime_28;
      Errors_34 = ErrorsPrime_29;
      Recorded_35 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_71;

      Recorded_35 = (MR_Integer) 0;
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (RecordedTimestamp_19));
      }
      parse_tree__read_modules__read_module_int_14_p_0(Globals_7, (MR_String) "Reading interface file for module", (MR_Integer) 1, (MR_Integer) 0, ImportedModuleName_16, IntFileKind_21, &FileName_30, Var_71, &MaybeNewTimestamp_31, &ParseTreeInt_32, &Specs_33, &Errors_34);
    }
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_34);
    if (succeeded)
    {
      MR_Word NewTimestamp_36;

      succeeded = (MaybeNewTimestamp_31 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        NewTimestamp_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNewTimestamp_31, (MR_Integer) 0))));
        succeeded = libs__timestamp____Unify____timestamp_0_0(NewTimestamp_36, RecordedTimestamp_19);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Info_74_74;
        MR_Word UsedItemsTerm_37;
        MR_Word ParseTreeModuleName_38;
        MR_Word IntIncls_42;
        MR_Word ImpIncls_43;
        MR_Word IntAvails_44;
        MR_Word ImpAvails_45;
        MR_Word IntFIMs_46;
        MR_Word ImpFIMs_47;
        MR_Word IntItems_48;
        MR_Word ImplItems_49;
        MR_Word VersionNumbers_50;
        MR_Word MaybeVersionNumbers_41;

        switch (Recorded_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_73;
              MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleTimestamp_17, (MR_Integer) 0))));
              MR_Word Var_111 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleTimestamp_17, (MR_Integer) 2))) & (MR_Integer) 1);

              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (Var_109));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (NewTimestamp_36));
                MR_hl_field(MR_mktag(0), Var_73, 2) = (MR_Box) ((MR_Unsigned) (Var_111));
              }
              recompilation__check__record_read_file_int_9_p_0(ImportedModuleName_16, IntFileKind_21, FileName_30, Var_73, ParseTreeInt_32, Specs_33, Errors_34, STATE_VARIABLE_Info_0_53, &STATE_VARIABLE_Info_74_74);
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Info_74_74 = STATE_VARIABLE_Info_0_53;
            break;
        }
        succeeded = (MaybeUsedItemsTerm_15 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          UsedItemsTerm_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeUsedItemsTerm_15, (MR_Integer) 0))));
          ParseTreeModuleName_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 0))));
          MaybeVersionNumbers_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 3))));
          IntIncls_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 4))));
          ImpIncls_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 5))));
          IntAvails_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 6))));
          ImpAvails_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 7))));
          IntFIMs_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 8))));
          ImpFIMs_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 9))));
          IntItems_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 10))));
          ImplItems_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt_32, (MR_Integer) 11))));
          succeeded = (MaybeVersionNumbers_41 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            VersionNumbers_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersionNumbers_41, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          MR_Word RawItemBlocks_51;

          parse_tree__prog_item__int_imp_items_to_item_blocks_12_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ParseTreeModuleName_38, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) ((MR_Integer) 1)), IntIncls_42, ImpIncls_43, IntAvails_44, ImpAvails_45, IntFIMs_46, ImpFIMs_47, IntItems_48, ImplItems_49, &RawItemBlocks_51);
          recompilation__check__check_module_used_items_8_p_0(ImportedModuleName_16, NeedQualifier_20, RecordedTimestamp_19, UsedItemsTerm_37, VersionNumbers_50, RawItemBlocks_51, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_54);
        }
        else
        {
          MR_Word Var_78;

          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (FileName_30));
          }
          recompilation__check__record_recompilation_reason_3_p_0(Var_78, STATE_VARIABLE_Info_74_74, STATE_VARIABLE_Info_54);
        }
      }
      else
        *STATE_VARIABLE_Info_54 = STATE_VARIABLE_Info_0_53;
    }
    else
    {
      MR_Word Pieces_52;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_90;

      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (FileName_30));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[27])));
      }
      {
        Pieces_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[63])));
        MR_hl_field(MR_mktag(1), Pieces_52, 1) = ((MR_Box) (Var_82));
      }
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (FileName_30));
        MR_hl_field(MR_mktag(2), Var_90, 1) = ((MR_Box) (Pieces_52));
      }
      {
        recompilation__check__throw_syntax_error_2_p_0(Var_90, STATE_VARIABLE_Info_0_53);
        return;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__throw_syntax_error_2_p_0(
  MR_Word Reason_3,
  MR_Word Info_4)
{
  {
    MR_Word RecompileInfo_5;
    MR_Word Var_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))));
    MR_Word Var_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 8))));

    {
      RecompileInfo_5 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), RecompileInfo_5, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), RecompileInfo_5, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
      MR_hl_field(MR_mktag(0), RecompileInfo_5, 2) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), RecompileInfo_5, 3) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), RecompileInfo_5, 4) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), RecompileInfo_5, 5) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), RecompileInfo_5, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), RecompileInfo_5, 7) = (MR_Box) ((MR_Unsigned) (Var_15));
      MR_hl_field(MR_mktag(0), RecompileInfo_5, 8) = ((MR_Box) (Var_16));
    }
    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Reason_3));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (RecompileInfo_5));
    }
    {
      mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_7)));
      return;
    }
  }
}

static void MR_CALL 
recompilation__check__record_read_file_int_9_p_0(
  MR_Word ModuleName_10,
  MR_Word IntFileKind_11,
  MR_String FileName_12,
  MR_Word ModuleTimestamp_13,
  MR_Word ParseTree_14,
  MR_Word Specs_15,
  MR_Word Errors_16,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word HaveReadModuleMaps0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));
    MR_Word HaveReadModuleMapInt0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_18, (MR_Integer) 1))));
    MR_Word HaveReadModuleMapInt_20;
    MR_Word HaveReadModuleMaps_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_37;
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
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (IntFileKind_11));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (FileName_12));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ModuleTimestamp_13));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (ParseTree_14));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Specs_15));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (Errors_16));
    }
    mercury__map__set_4_p_0((MR_Word) (&recompilation__check_scalar_common_1[2]), (MR_Word) (&recompilation__check_scalar_common_1[3]), ((MR_Box) (Var_24)), ((MR_Box) (Var_25)), HaveReadModuleMapInt0_19, &HaveReadModuleMapInt_20);
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_18, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_18, (MR_Integer) 2))));
    {
      HaveReadModuleMaps_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HaveReadModuleMaps_21, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), HaveReadModuleMaps_21, 1) = ((MR_Box) (HaveReadModuleMapInt_20));
      MR_hl_field(MR_mktag(0), HaveReadModuleMaps_21, 2) = ((MR_Box) (Var_39));
    }
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
    Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 4))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 5))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 6))));
    Var_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 7))) & (MR_Integer) 1);
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 8))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_41));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (HaveReadModuleMaps_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (Var_47));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_48));
    }
  }
}

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Info_19;

    recompilation__check__check_raw_item_block_for_ambiguities_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Info_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Info_19));
  }
}

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_14;

    recompilation__check__check_item_version_numbers_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Info_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
recompilation__check__check_module_used_items_8_p_0(
  MR_Word ModuleName_9,
  MR_Word NeedQualifier_10,
  MR_Word OldTimestamp_11,
  MR_Word UsedItemsTerm_12,
  MR_Word NewVersionNumbers_13,
  MR_Word RawItemBlocks_14,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_Word UsedItemsResult_16;
    MR_Word UsedVersionNumbers_17;
    MR_Word UsedItemVersionNumbers_22;
    MR_Word UsedInstanceVersionNumbers_23;
    MR_Word NewItemVersionNumbers_24;
    MR_Word NewInstanceVersionNumbers_25;
    MR_Word ModuleInstances_26;
    MR_Word UsedInstances_27;
    MR_Word UsedClasses_28;
    MR_Word AddedInstances_29;
    MR_Word AddedInstancesList_30;
    MR_Word Var_38;
    MR_Word STATE_VARIABLE_Info_40_40;
    MR_Word Var_55;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word STATE_VARIABLE_Info_57_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Box conv1_STATE_VARIABLE_Info_40_40;
    MR_Box conv3_STATE_VARIABLE_Info_56_56;

    recompilation__version__parse_version_numbers_2_p_0(UsedItemsTerm_12, &UsedItemsResult_16);
    if (((MR_tag((MR_Word) UsedItemsResult_16)) == (MR_Integer) 0))
    {
      MR_Word Specs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedItemsResult_16, (MR_Integer) 0))));

      if ((Specs_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.check_module_used_items\'/8", (MR_String) "error1([])");
          return;
        }
      else
      {
        MR_Word Reason_21;
        MR_Word RecompileInfo_83;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_93;
        MR_Word Var_94;

        {
          Reason_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Reason_21, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Reason_21, 1) = ((MR_Box) (Specs_18));
        }
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 0))));
        Var_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 1))) & (MR_Integer) 1);
        Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 2))));
        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 3))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 4))));
        Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 5))));
        Var_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_34, (MR_Integer) 8))));
        {
          RecompileInfo_83 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), RecompileInfo_83, 0) = ((MR_Box) (Var_86));
          MR_hl_field(MR_mktag(0), RecompileInfo_83, 1) = (MR_Box) ((MR_Unsigned) (Var_87));
          MR_hl_field(MR_mktag(0), RecompileInfo_83, 2) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(0), RecompileInfo_83, 3) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(0), RecompileInfo_83, 4) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(0), RecompileInfo_83, 5) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(0), RecompileInfo_83, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), RecompileInfo_83, 7) = (MR_Box) ((MR_Unsigned) (Var_93));
          MR_hl_field(MR_mktag(0), RecompileInfo_83, 8) = ((MR_Box) (Var_94));
        }
        {
          Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Reason_21));
          MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) (RecompileInfo_83));
        }
        {
          mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_85)));
          return;
        }
      }
    }
    else
      UsedVersionNumbers_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UsedItemsResult_16, (MR_Integer) 0))));
    UsedItemVersionNumbers_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedVersionNumbers_17, (MR_Integer) 0))));
    UsedInstanceVersionNumbers_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UsedVersionNumbers_17, (MR_Integer) 1))));
    NewItemVersionNumbers_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewVersionNumbers_13, (MR_Integer) 0))));
    NewInstanceVersionNumbers_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewVersionNumbers_13, (MR_Integer) 1))));
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&recompilation__check_scalar_common_11[1]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (recompilation__check__check_module_used_items_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (UsedItemVersionNumbers_22));
      MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) (NewItemVersionNumbers_24));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_type_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_38, (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[34])), ((MR_Box) (STATE_VARIABLE_Info_0_34)), &conv1_STATE_VARIABLE_Info_40_40);
    STATE_VARIABLE_Info_40_40 = ((MR_Word) (conv1_STATE_VARIABLE_Info_40_40));
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&recompilation__check_scalar_common_11[2]));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (recompilation__check__check_module_used_items_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (NeedQualifier_10));
      MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (OldTimestamp_11));
      MR_hl_field(MR_mktag(0), Var_55, 5) = ((MR_Box) (UsedItemVersionNumbers_22));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&recompilation__check_scalar_common_1[11]), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_55, RawItemBlocks_14, ((MR_Box) (STATE_VARIABLE_Info_40_40)), &conv3_STATE_VARIABLE_Info_56_56);
    STATE_VARIABLE_Info_56_56 = ((MR_Word) (conv3_STATE_VARIABLE_Info_56_56));
    recompilation__check__check_instance_version_numbers_5_p_0(ModuleName_9, UsedInstanceVersionNumbers_23, NewInstanceVersionNumbers_25, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_57_57);
    Var_58 = mercury__map__sorted_keys_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), NewInstanceVersionNumbers_25);
    ModuleInstances_26 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), Var_58);
    Var_59 = mercury__map__sorted_keys_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), UsedInstanceVersionNumbers_23);
    UsedInstances_27 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), Var_59);
    UsedClasses_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_57_57, (MR_Integer) 5))));
    Var_60 = mercury__set__intersect_2_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), UsedClasses_28, ModuleInstances_26);
    mercury__set__difference_3_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), Var_60, UsedInstances_27, &AddedInstances_29);
    AddedInstancesList_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), AddedInstances_29);
    if ((AddedInstancesList_30 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_57_57;
    else
    {
      MR_Word FirstAddedInstance_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AddedInstancesList_30, (MR_Integer) 0))));
      MR_Word Reason1_33;

      {
        Reason1_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason1_33, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Reason1_33, 1) = ((MR_Box) (ModuleName_9));
        MR_hl_field(MR_mktag(3), Reason1_33, 2) = ((MR_Box) (FirstAddedInstance_31));
      }
      recompilation__check__record_recompilation_reason_3_p_0(Reason1_33, STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_35);
    }
  }
}

static void MR_CALL 
recompilation__check__record_recompilation_reason_3_p_0(
  MR_Word Reason_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_Word CollectAllReasons_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 0))));
    MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 2))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 3))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 4))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 5))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 6))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_7, (MR_Integer) 8))));

    switch (CollectAllReasons_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_9;

          {
            Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Reason_4));
            MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (STATE_VARIABLE_Info_0_7));
          }
          {
            mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_9)));
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_11;

          {
            Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Reason_4));
            MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
            MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_14));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (CollectAllReasons_6));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_11));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__check__check_instance_version_numbers_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_15;

    recompilation__check__check_instance_version_number_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_15);
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_15));
  }
}

static void MR_CALL 
recompilation__check__check_instance_version_numbers_5_p_0(
  MR_Word ModuleName_6,
  MR_Word UsedInstanceVersionNumbers_7,
  MR_Word NewInstanceVersionNumbers_8,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_Info_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&recompilation__check_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (recompilation__check__check_instance_version_numbers_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (NewInstanceVersionNumbers_8));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_12, UsedInstanceVersionNumbers_7, ((MR_Box) (STATE_VARIABLE_Info_0_10)), &conv1_STATE_VARIABLE_Info_11);
    *STATE_VARIABLE_Info_11 = ((MR_Word) (conv1_STATE_VARIABLE_Info_11));
  }
}

static void MR_CALL 
recompilation__check__parse_used_items_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_UsedItems_8;

    recompilation__check__parse_used_item_set_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_UsedItems_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_UsedItems_8));
  }
}

static void MR_CALL 
recompilation__check__parse_used_items_3_p_0(
  MR_Word Info_4,
  MR_Word Term_5,
  MR_Word * UsedItems_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_5)) == (MR_Integer) 0);
    MR_Word UsedItemTerms_7;
    MR_Word Var_10;
    MR_String Var_11;

    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 0))));
      UsedItemTerms_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
        succeeded = (strcmp(Var_11, (MR_String) "used_items") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Word Var_16;
      MR_Box conv1_UsedItems_6;

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[2]));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (recompilation__check__parse_used_items_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_4));
      }
      Var_14 = mercury__map__init_0_f_0((MR_Word) (&recompilation__check_scalar_common_2[0]), (MR_Word) (&recompilation__check_scalar_common_2[1]));
      Var_15 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[7]));
      Var_16 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[9]));
      Var_13 = recompilation__init_item_id_set_3_f_0((MR_Word) (&recompilation__check_scalar_common_2[2]), (MR_Word) (&recompilation__check_scalar_common_2[6]), (MR_Word) (&recompilation__check_scalar_common_2[9]), ((MR_Box) (Var_14)), ((MR_Box) (Var_15)), ((MR_Box) (Var_16)));
      mercury__list__foldl_4_p_0((MR_Word) (&recompilation__check_scalar_common_1[10]), (MR_Word) (&recompilation__check_scalar_common_3[0]), Var_12, UsedItemTerms_7, ((MR_Box) (Var_13)), &conv1_UsedItems_6);
      *UsedItems_6 = ((MR_Word) (conv1_UsedItems_6));
    }
    else
    {
      MR_Word Reason_9;
      MR_Word Var_17;
      MR_Word RecompileInfo_35;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_46;

      Var_17 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_5);
      {
        Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_9, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_9, 1) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(3), Reason_9, 2) = ((MR_Box) ((MR_String) "error in used items"));
      }
      Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))));
      Var_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2))));
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3))));
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5))));
      Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 8))));
      {
        RecompileInfo_35 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_35, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), RecompileInfo_35, 1) = (MR_Box) ((MR_Unsigned) (Var_39));
        MR_hl_field(MR_mktag(0), RecompileInfo_35, 2) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), RecompileInfo_35, 3) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), RecompileInfo_35, 4) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), RecompileInfo_35, 5) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), RecompileInfo_35, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_35, 7) = (MR_Box) ((MR_Unsigned) (Var_45));
        MR_hl_field(MR_mktag(0), RecompileInfo_35, 8) = ((MR_Box) (Var_46));
      }
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Reason_9));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (RecompileInfo_35));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_37)));
        return;
      }
    }
  }
}

static void MR_CALL 
recompilation__check__parse_module_timestamp_4_p_0(
  MR_Word Info_5,
  MR_Word Term_6,
  MR_Word * ModuleName_7,
  MR_Word * ModuleTimestamp_8)
{
  {
    MR_bool succeeded;
    MR_Word Args_9;
    MR_Word ModuleNamePrime_14;
    MR_Word FileKind_17;
    MR_Word Timestamp_18;
    MR_Word NeedQualifier_20;
    MR_Word ModuleNameTerm_10;
    MR_Word SuffixTerm_11;
    MR_Word TimestampTerm_12;
    MR_Word MaybeOtherTerms_13;
    MR_String SuffixStr_15;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;

    parse_tree__parse_util__conjunction_to_list_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6, &Args_9);
    succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ModuleNameTerm_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_9, (MR_Integer) 1))));
      succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SuffixTerm_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 1))));
        succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          TimestampTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
          MaybeOtherTerms_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
          succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), ModuleNameTerm_10, &ModuleNamePrime_14);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) SuffixTerm_11)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuffixTerm_11, (MR_Integer) 0))));
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuffixTerm_11, (MR_Integer) 1))));
              succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_Integer) 2);
                if (succeeded)
                {
                  SuffixStr_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_24, (MR_Integer) 0))));
                  succeeded = parse_tree__file_kind__extension_to_file_kind_2_p_0(SuffixStr_15, &FileKind_17);
                  if (succeeded)
                  {
                    succeeded = recompilation__term_to_timestamp_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), TimestampTerm_12, &Timestamp_18);
                    if (succeeded)
                    {
                      if ((MaybeOtherTerms_13 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        NeedQualifier_20 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherTerms_13, (MR_Integer) 0))));
                        MR_Word Var_27;
                        MR_String Var_28;
                        MR_Word Var_29;
                        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherTerms_13, (MR_Integer) 1))));

                        succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0);
                          if (succeeded)
                          {
                            Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));
                            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1))));
                            succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
                            if (succeeded)
                            {
                              succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
                              if (succeeded)
                              {
                                Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
                                succeeded = (strcmp(Var_28, (MR_String) "used") == 0);
                                if (succeeded)
                                {
                                  NeedQualifier_20 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *ModuleName_7 = ModuleNamePrime_14;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *ModuleTimestamp_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileKind_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Timestamp_18));
        MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (NeedQualifier_20));
      }
    }
    else
    {
      MR_Word Reason_21;
      MR_Word Var_31;
      MR_Word RecompileInfo_36;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_47;

      Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_6);
      {
        Reason_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Reason_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Reason_21, 1) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(3), Reason_21, 2) = ((MR_Box) ((MR_String) "error in module timestamp"));
      }
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0))));
      Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
      Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8))));
      {
        RecompileInfo_36 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RecompileInfo_36, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), RecompileInfo_36, 1) = (MR_Box) ((MR_Unsigned) (Var_40));
        MR_hl_field(MR_mktag(0), RecompileInfo_36, 2) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), RecompileInfo_36, 3) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), RecompileInfo_36, 4) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), RecompileInfo_36, 5) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), RecompileInfo_36, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), RecompileInfo_36, 7) = (MR_Box) ((MR_Unsigned) (Var_46));
        MR_hl_field(MR_mktag(0), RecompileInfo_36, 8) = ((MR_Box) (Var_47));
      }
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (Reason_21));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (RecompileInfo_36));
      }
      {
        mercury__exception__throw_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), ((MR_Box) (Var_38)));
        return;
      }
    }
  }
}

void MR_CALL 
recompilation__check__should_recompile_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word FindTargetFiles_11,
  MR_Word FindTimestampFiles_12,
  MR_Word * ModulesToRecompile_13,
  MR_Word * HaveReadModuleMaps_14)
{
  {
    MR_Word FindAll_16;
    MR_Word HaveReadModuleMaps0_17;
    MR_Word Info0_18;
    MR_Word Info_19;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 67, &FindAll_16);
    Var_23 = mercury__map__init_0_f_0((MR_Word) (&recompilation__check_scalar_common_1[0]), (MR_Word) (&recompilation__check_scalar_common_1[1]));
    Var_24 = mercury__map__init_0_f_0((MR_Word) (&recompilation__check_scalar_common_1[2]), (MR_Word) (&recompilation__check_scalar_common_1[3]));
    Var_25 = mercury__map__init_0_f_0((MR_Word) (&recompilation__check_scalar_common_1[4]), (MR_Word) (&recompilation__check_scalar_common_1[5]));
    {
      HaveReadModuleMaps0_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_17, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_17, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), HaveReadModuleMaps0_17, 2) = ((MR_Box) (Var_25));
    }
    Var_29 = mercury__map__init_0_f_0((MR_Word) (&recompilation__check_scalar_common_2[0]), (MR_Word) (&recompilation__check_scalar_common_2[1]));
    Var_30 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[7]));
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&recompilation__check_scalar_common_1[9]));
    Var_28 = recompilation__init_item_id_set_3_f_0((MR_Word) (&recompilation__check_scalar_common_2[2]), (MR_Word) (&recompilation__check_scalar_common_2[6]), (MR_Word) (&recompilation__check_scalar_common_2[9]), ((MR_Box) (Var_29)), ((MR_Box) (Var_30)), ((MR_Box) (Var_31)));
    Var_32 = mercury__set__init_0_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_name_0));
    {
      Info0_18 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_18, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(0), Info0_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Info0_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info0_18, 3) = ((MR_Box) (HaveReadModuleMaps0_17));
      MR_hl_field(MR_mktag(0), Info0_18, 4) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Info0_18, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Info0_18, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_10[0])));
      MR_hl_field(MR_mktag(0), Info0_18, 7) = (MR_Box) ((MR_Unsigned) (FindAll_16));
      MR_hl_field(MR_mktag(0), Info0_18, 8) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    recompilation__check__should_recompile_2_9_p_0(Globals_9, (MR_Integer) 0, FindTargetFiles_11, FindTimestampFiles_12, ModuleName_10, Info0_18, &Info_19);
    *HaveReadModuleMaps_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_19, (MR_Integer) 3))));
    *ModulesToRecompile_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_19, (MR_Integer) 6))));
  }
}

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Info_33;

    recompilation__check__should_recompile_2_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Info_33);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Info_33));
  }
}

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__module_cmds__touch_datestamp_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__check__should_recompile_2_9_p_0(
  MR_Word Globals_10,
  MR_Word IsSubModule_11,
  MR_Word FindTargetFiles_12,
  MR_Word FindTimestampFiles_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33)
{
  {
    MR_bool succeeded;
    MR_String UsageFileName_17;
    MR_Word MaybeVersionStream_18;
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word Var_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 3))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 4))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 5))));
    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 6))));
    MR_Word Var_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_32, (MR_Integer) 8))));

    {
      STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (ModuleName_14));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 1) = (MR_Box) ((MR_Unsigned) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 7) = (MR_Box) ((MR_Unsigned) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 8) = ((MR_Box) (Var_78));
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_10, (MR_Integer) 1, (MR_String) ".used", ModuleName_14, &UsageFileName_17);
    mercury__io__open_input_4_p_0(UsageFileName_17, &MaybeVersionStream_18);
    if (((MR_tag((MR_Word) MaybeVersionStream_18)) == (MR_Integer) 1))
    {
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_128;
      MR_Word Var_129;

      recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_53_95_95_91_53_93_95_48_4_p_0(Globals_10, UsageFileName_17, ModuleName_14, Globals_10);
      Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 0))));
      Var_122 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 1))) & (MR_Integer) 1);
      Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 2))));
      Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 3))));
      Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 4))));
      Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 5))));
      Var_128 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 8))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_33 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_121));
        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_122));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_124));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (Var_128));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_129));
      }
    }
    else
    {
      MR_Word VersionStream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeVersionStream_18, (MR_Integer) 0))));
      MR_Word Result_20;
      MR_Word Reasons_21;
      MR_Word ModulesToRecompile_29;
      MR_Word STATE_VARIABLE_Info_52_52;
      MR_Word STATE_VARIABLE_Info_53_53;
      MR_Word Var_96;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;

      recompilation__check__should_recompile_3_try_8_p_0(VersionStream_19, Globals_10, IsSubModule_11, FindTimestampFiles_13, STATE_VARIABLE_Info_37_37, &Result_20);
      switch (MR_tag((MR_Word) Result_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140recompilation.check.should_recompile_2\'/9", (MR_String) "try failed");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_Info_52_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_20, (MR_Integer) 0))));
            Reasons_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_52_52, (MR_Integer) 8))));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Exception_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_20, (MR_Integer) 0))));
            MR_Word RecompileException_24;
            MR_Word Reason_25;
            MR_Word RecompileException0_23;
            MR_Box conv0_RecompileException0_23;

            succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0), Exception_22, &conv0_RecompileException0_23);
            if (succeeded)
            {
              RecompileException0_23 = ((MR_Word) (conv0_RecompileException0_23));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              RecompileException_24 = RecompileException0_23;
            else
              {
                mercury__exception__rethrow_1_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Result_20);
                return;
              }
            Reason_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecompileException_24, (MR_Integer) 0))));
            STATE_VARIABLE_Info_52_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RecompileException_24, (MR_Integer) 1))));
            {
              Reasons_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Reasons_21, 0) = ((MR_Box) (Reason_25));
              MR_hl_field(MR_mktag(1), Reasons_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      if ((Reasons_21 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TimestampFiles_26;
        MR_Word Var_60;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), FindTimestampFiles_13, (MR_Integer) 1))));
        MR_Box conv3_TimestampFiles_26;
        MR_Box conv2_STATE_VARIABLE_IO_57_57;
        MR_Box conv4_STATE_VARIABLE_IO_61_61;

        func_1(((MR_Box) (FindTimestampFiles_13)), ((MR_Box) (ModuleName_14)), &conv3_TimestampFiles_26, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_57_57);
        TimestampFiles_26 = ((MR_Word) (conv3_TimestampFiles_26));
        recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_51_95_95_91_51_93_95_48_4_p_0(ModuleName_14, Globals_10);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (recompilation__check__should_recompile_2_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (Globals_10));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_60, TimestampFiles_26, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_61_61);
        STATE_VARIABLE_Info_53_53 = STATE_VARIABLE_Info_52_52;
      }
      else
      {
        MR_Word Var_56;

        recompilation__check__add_module_to_recompile_3_p_0(ModuleName_14, STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_53_53);
        Var_56 = mercury__list__reverse_1_f_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0), Reasons_21);
        recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_52_95_95_91_53_93_95_48_4_p_0(Globals_10, ModuleName_14, Var_56, Globals_10);
      }
      mercury__io__close_input_3_p_0(VersionStream_19);
      Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 0))));
      Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 2))));
      Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 3))));
      Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 4))));
      Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 5))));
      ModulesToRecompile_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 6))));
      Var_102 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 7))) & (MR_Integer) 1);
      Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_53_53, (MR_Integer) 8))));
      if ((ModulesToRecompile_29 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Info_33 = STATE_VARIABLE_Info_53_53;
      else
      {
        MR_Word STATE_VARIABLE_Info_63_63;
        MR_Word Var_65;
        MR_Word Var_106 = Var_98;
        MR_Box conv7_STATE_VARIABLE_Info_33;
        MR_Box conv6_STATE_VARIABLE_IO_35;

        {
          STATE_VARIABLE_Info_63_63 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, 0) = ((MR_Box) (Var_96));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, 2) = ((MR_Box) (Var_106));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, 3) = ((MR_Box) (Var_99));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, 4) = ((MR_Box) (Var_100));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, 5) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, 6) = ((MR_Box) (ModulesToRecompile_29));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, 7) = (MR_Box) ((MR_Unsigned) (Var_102));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_63_63, 8) = ((MR_Box) (Var_103));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&recompilation__check_scalar_common_9[0]));
          MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (recompilation__check__should_recompile_2_9_p_0_2));
          MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Globals_10));
          MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_65, 5) = ((MR_Box) (FindTargetFiles_12));
          MR_hl_field(MR_mktag(0), Var_65, 6) = ((MR_Box) (FindTimestampFiles_13));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_65, Var_106, ((MR_Box) (STATE_VARIABLE_Info_63_63)), &conv7_STATE_VARIABLE_Info_33, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_35);
        *STATE_VARIABLE_Info_33 = ((MR_Word) (conv7_STATE_VARIABLE_Info_33));
      }
    }
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_53_95_95_91_53_93_95_48_4_p_0(
  MR_Word Var_13,
  MR_String Var_14,
  MR_Word Var_15,
  MR_Word Globals_5)
{
  {
    MR_Word Verbose_8;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 66, &Verbose_8);
    switch (Verbose_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        recompilation__check__write_not_found_reasons_message_5_p_0(Var_13, Var_14, Var_15);
        break;
    }
  }
}

static void MR_CALL 
recompilation__check__write_not_found_reasons_message_5_p_0(
  MR_Word Globals_6,
  MR_String UsageFileName_7,
  MR_Word ModuleName_8)
{
  {
    MR_Word Reason_10;
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (UsageFileName_7));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[25])));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[53])));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_16));
    }
    {
      Reason_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Reason_10, 0) = ((MR_Box) (UsageFileName_7));
      MR_hl_field(MR_mktag(2), Reason_10, 1) = ((MR_Box) (Var_13));
    }
    recompilation__check__write_recompile_reason_5_p_0(Globals_6, ModuleName_8, Reason_10);
  }
}

static void MR_CALL 
recompilation__check__write_recompile_reason_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word Reason_8)
{
  {
    MR_Word PrefixPieces_10;
    MR_Word Spec_11;
    MR_Word Var_16;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (ModuleName_7));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[36])));
    }
    {
      PrefixPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PrefixPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), PrefixPieces_10, 1) = ((MR_Box) (Var_16));
    }
    recompilation__check__recompile_reason_message_3_p_0(PrefixPieces_10, Reason_8, &Spec_11);
    parse_tree__error_util__write_error_spec_ignore_4_p_0(Spec_11, Globals_6);
  }
}

static MR_Box MR_CALL 
recompilation__check__recompile_reason_message_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_Msgs_4;

    conv2_Msgs_4 = recompilation__check__project_spec_to_msgs_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_Msgs_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
recompilation__check__recompile_reason_message_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Pieces_6;

    conv1_Pieces_6 = recompilation__check__describe_item_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Pieces_6));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
recompilation__check__recompile_reason_message_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Pieces_4;

    conv0_Pieces_4 = recompilation__check__describe_resolved_functor_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
recompilation__check__recompile_reason_message_3_p_0(
  MR_Word PrefixPieces_4,
  MR_Word Reason_5,
  MR_Word * Spec_6)
{
  switch (MR_tag((MR_Word) Reason_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Pieces_8;
        MR_Word AllPieces_24;
        MR_Word Var_86;
        MR_Word Var_141;
        MR_Word Var_142;
        MR_Word Var_145;
        MR_Word Var_146;
        MR_Word Item_150 = (MR_Word) ((MR_Word) (Reason_5));

        Var_86 = recompilation__check__describe_item_1_f_0(Item_150);
        Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_86, (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[43])));
        AllPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Pieces_8);
        {
          Var_146 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_146, 0) = ((MR_Box) (AllPieces_24));
        }
        {
          Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_142 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_142, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), Var_142, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_142, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_142, 3) = ((MR_Box) (Var_145));
        }
        {
          Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
          MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Spec_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_141));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_81;
        MR_Word Item_151 = (MR_Word) (MR_body((MR_Word) (Reason_5), (MR_Integer) 1));
        MR_Word Pieces_274;
        MR_Word AllPieces_276;
        MR_Word Var_279;
        MR_Word Var_280;
        MR_Word Var_283;
        MR_Word Var_284;

        Var_81 = recompilation__check__describe_item_1_f_0(Item_151);
        Pieces_274 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_81, (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[61])));
        AllPieces_276 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Pieces_274);
        {
          Var_284 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_284, 0) = ((MR_Box) (AllPieces_276));
        }
        {
          Var_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_283, 0) = ((MR_Box) (Var_284));
          MR_hl_field(MR_mktag(1), Var_283, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_280 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_280, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), Var_280, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_280, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_280, 3) = ((MR_Box) (Var_283));
        }
        {
          Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_279, 0) = ((MR_Box) (Var_280));
          MR_hl_field(MR_mktag(1), Var_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Spec_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_279));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Pieces_190 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_5, (MR_Integer) 1))));
        MR_Word AllPieces_192;
        MR_Word Var_195;
        MR_Word Var_196;
        MR_Word Var_199;
        MR_Word Var_200;

        AllPieces_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Pieces_190);
        {
          Var_200 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_200, 0) = ((MR_Box) (AllPieces_192));
        }
        {
          Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (Var_200));
          MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_196 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_196, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), Var_196, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_196, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_196, 3) = ((MR_Box) (Var_199));
        }
        {
          Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (Var_196));
          MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Spec_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_195));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String FileName_9 = ((MR_String) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 1))));
            MR_Word Var_133;
            MR_Word Var_134;
            MR_Word Pieces_246;
            MR_Word AllPieces_248;
            MR_Word Var_251;
            MR_Word Var_252;
            MR_Word Var_255;
            MR_Word Var_256;

            {
              Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (FileName_9));
            }
            {
              Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
              MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[58])));
            }
            {
              Pieces_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_246, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[56])));
              MR_hl_field(MR_mktag(1), Pieces_246, 1) = ((MR_Box) (Var_133));
            }
            AllPieces_248 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Pieces_246);
            {
              Var_256 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_256, 0) = ((MR_Box) (AllPieces_248));
            }
            {
              Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (Var_256));
              MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_252 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_252, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Var_252, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_252, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_252, 3) = ((MR_Box) (Var_255));
            }
            {
              Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_251, 0) = ((MR_Box) (Var_252));
              MR_hl_field(MR_mktag(1), Var_251, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Spec_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_251));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 1))));
            MR_String Msg_26 = ((MR_String) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 2))));
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word MaybeContext_155;
            MR_Word AllPieces_156;

            {
              MaybeContext_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeContext_155, 0) = ((MR_Box) (Context_25));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Msg_26));
            }
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
              MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[27])));
            }
            AllPieces_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Var_33);
            {
              Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (AllPieces_156));
            }
            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
              MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_44, 0) = ((MR_Box) (MaybeContext_155));
              MR_hl_field(MR_mktag(2), Var_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_44, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_44, 3) = ((MR_Box) (Var_47));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Spec_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_43));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Specs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 1))));
            MR_Word MsgsList_28;
            MR_Word Msgs_29;

            MsgsList_28 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&recompilation__check_scalar_common_1[15]), (MR_Word) (&recompilation__check_scalar_common_2[12]), Specs_27);
            mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MsgsList_28, &Msgs_29);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Spec_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Msgs_29));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_125;
            MR_Word Var_126;
            MR_String FileName_149 = ((MR_String) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 1))));
            MR_Word Pieces_232;
            MR_Word AllPieces_234;
            MR_Word Var_237;
            MR_Word Var_238;
            MR_Word Var_241;
            MR_Word Var_242;

            {
              Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (FileName_149));
            }
            {
              Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[55])));
            }
            {
              Pieces_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_232, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[53])));
              MR_hl_field(MR_mktag(1), Pieces_232, 1) = ((MR_Box) (Var_125));
            }
            AllPieces_234 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Pieces_232);
            {
              Var_242 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_242, 0) = ((MR_Box) (AllPieces_234));
            }
            {
              Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_241, 0) = ((MR_Box) (Var_242));
              MR_hl_field(MR_mktag(1), Var_241, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_238 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_238, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Var_238, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_238, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_238, 3) = ((MR_Box) (Var_241));
            }
            {
              Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (Var_238));
              MR_hl_field(MR_mktag(1), Var_237, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Spec_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_237));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Item_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 1))));
            MR_Word AmbiguousItems_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 2))));
            MR_Word ItemPieces_12;
            MR_Word AmbiguousItemPieces_13;
            MR_Word Var_108;
            MR_Word Var_110;
            MR_Word Var_113;
            MR_Word Var_118;
            MR_Word Pieces_218;
            MR_Word AllPieces_220;
            MR_Word Var_223;
            MR_Word Var_224;
            MR_Word Var_227;
            MR_Word Var_228;

            ItemPieces_12 = recompilation__check__describe_item_1_f_0(Item_10);
            Var_108 = mercury__list__map_2_f_0((MR_Word) (&recompilation__recompilation__type_ctor_info_item_id_0), (MR_Word) (&recompilation__check_scalar_common_1[14]), (MR_Word) (&recompilation__check_scalar_common_2[11]), AmbiguousItems_11);
            AmbiguousItemPieces_13 = parse_tree__error_util__component_lists_to_pieces_2_f_0((MR_String) "and", Var_108);
            {
              Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[48])));
              MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (ItemPieces_12));
            }
            Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), AmbiguousItemPieces_13, (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[52])));
            Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[50])), Var_118);
            Pieces_218 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_110, Var_113);
            AllPieces_220 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Pieces_218);
            {
              Var_228 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_228, 0) = ((MR_Box) (AllPieces_220));
            }
            {
              Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_227, 0) = ((MR_Box) (Var_228));
              MR_hl_field(MR_mktag(1), Var_227, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_224 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_224, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Var_224, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_224, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_224, 3) = ((MR_Box) (Var_227));
            }
            {
              Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (Var_224));
              MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Spec_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_223));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 1))));
            MR_Integer Arity_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 2))));
            MR_Word Functor_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 3))));
            MR_Word AmbiguousFunctors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 4))));
            MR_Word FunctorPieces_18;
            MR_Word AmbiguousFunctorPieces_19;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_97;
            MR_Word Var_102;
            MR_Word Pieces_204;
            MR_Word AllPieces_206;
            MR_Word Var_209;
            MR_Word Var_210;
            MR_Word Var_213;
            MR_Word Var_214;

            FunctorPieces_18 = recompilation__check__describe_resolved_functor_3_f_0(SymName_14, Arity_15, Functor_16);
            {
              Var_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&recompilation__check_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (recompilation__check__recompile_reason_message_3_p_0_1));
              MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (SymName_14));
              MR_hl_field(MR_mktag(0), Var_93, 4) = ((MR_Box) (Arity_15));
            }
            Var_92 = mercury__list__map_2_f_0((MR_Word) (&recompilation__usage__recompilation__usage__type_ctor_info_resolved_functor_0), (MR_Word) (&recompilation__check_scalar_common_1[14]), Var_93, AmbiguousFunctors_17);
            AmbiguousFunctorPieces_19 = parse_tree__error_util__component_lists_to_pieces_2_f_0((MR_String) "and", Var_92);
            {
              Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[48])));
              MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (FunctorPieces_18));
            }
            Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), AmbiguousFunctorPieces_19, (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[52])));
            Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[50])), Var_102);
            Pieces_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_94, Var_97);
            AllPieces_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Pieces_204);
            {
              Var_214 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_214, 0) = ((MR_Box) (AllPieces_206));
            }
            {
              Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (Var_214));
              MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_210 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_210, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Var_210, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_210, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_210, 3) = ((MR_Box) (Var_213));
            }
            {
              Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (Var_210));
              MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Spec_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_209));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 1))));
            MR_Word ClassName_21;
            MR_Integer ClassArity_22;
            MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 2))));
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Pieces_176;
            MR_Word AllPieces_178;
            MR_Word Var_181;
            MR_Word Var_182;
            MR_Word Var_185;
            MR_Word Var_186;

            ClassName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 0))));
            ClassArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_66, (MR_Integer) 1))));
            {
              Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (ClassName_21));
              MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ClassArity_22));
            }
            {
              Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (ModuleName_20));
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[47])));
            }
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[45])));
              MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
            }
            {
              Pieces_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[44])));
              MR_hl_field(MR_mktag(1), Pieces_176, 1) = ((MR_Box) (Var_69));
            }
            AllPieces_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Pieces_176);
            {
              Var_186 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_186, 0) = ((MR_Box) (AllPieces_178));
            }
            {
              Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (Var_186));
              MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_182 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_182, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Var_182, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_182, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_182, 3) = ((MR_Box) (Var_185));
            }
            {
              Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (Var_182));
              MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Spec_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_181));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 2))));
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word ModuleName_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_5, (MR_Integer) 1))));
            MR_Word ClassName_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 0))));
            MR_Integer ClassArity_154 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_51, (MR_Integer) 1))));
            MR_Word Pieces_260;
            MR_Word AllPieces_262;
            MR_Word Var_265;
            MR_Word Var_266;
            MR_Word Var_269;
            MR_Word Var_270;

            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (ClassName_153));
              MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ClassArity_154));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (Var_56));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (ModuleName_152));
            }
            {
              Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
              MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recompilation__check_scalar_common_1[61])));
            }
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[45])));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
            }
            {
              Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
              MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
            }
            {
              Pieces_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_260, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[59])));
              MR_hl_field(MR_mktag(1), Pieces_260, 1) = ((MR_Box) (Var_54));
            }
            AllPieces_262 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_4, Pieces_260);
            {
              Var_270 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_270, 0) = ((MR_Box) (AllPieces_262));
            }
            {
              Var_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_269, 0) = ((MR_Box) (Var_270));
              MR_hl_field(MR_mktag(1), Var_269, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_266 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_266, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), Var_266, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_266, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_266, 3) = ((MR_Box) (Var_269));
            }
            {
              Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_265, 0) = ((MR_Box) (Var_266));
              MR_hl_field(MR_mktag(1), Var_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *Spec_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_265));
            }
          }
          break;
      }
      break;
  }
}

static MR_Word MR_CALL 
recompilation__check__describe_resolved_functor_3_f_0(
  MR_Word SymName_1,
  MR_Integer HeadVar__2_2,
  MR_Word ResolvedFunctor_3)
{
  {
    MR_Word Pieces_4;

    switch (MR_tag((MR_Word) ResolvedFunctor_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResolvedFunctor_3, (MR_Integer) 1))));
          MR_Word PredOrFunc_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ResolvedFunctor_3, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Integer PredArity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ResolvedFunctor_3, (MR_Integer) 3))));
          MR_String ItemTypeStr_13;
          MR_String UnqualName_14;
          MR_Word SymNameAndArity_15;
          MR_Word SymNameAndArityPiece_16;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Word Var_19;
          MR_Word Var_20;

          Var_17 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_11);
          recompilation__string_to_item_type_2_p_1(&ItemTypeStr_13, Var_17);
          UnqualName_14 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_1);
          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (ModuleName_10));
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (UnqualName_14));
          }
          {
            SymNameAndArity_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SymNameAndArity_15, 0) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(0), SymNameAndArity_15, 1) = ((MR_Box) (PredArity_12));
          }
          {
            SymNameAndArityPiece_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SymNameAndArityPiece_16, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), SymNameAndArityPiece_16, 1) = ((MR_Box) (SymNameAndArity_15));
          }
          {
            Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (ItemTypeStr_13));
          }
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (SymNameAndArityPiece_16));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(1), Pieces_4, 1) = ((MR_Box) (Var_20));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeName_26;
          MR_Integer TypeArity_27;
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResolvedFunctor_3, (MR_Integer) 0))));
          MR_Word Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;

          TypeName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 0))));
          TypeArity_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 1))));
          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (SymName_1));
            MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (HeadVar__2_2));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (TypeName_26));
            MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (TypeArity_27));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[39])));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
          }
          {
            Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[38])));
            MR_hl_field(MR_mktag(1), Pieces_4, 1) = ((MR_Box) (Var_31));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeName_45;
          MR_Integer TypeArity_46;
          MR_Word ConsName_47;
          MR_Integer ConsArity_48;
          MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResolvedFunctor_3, (MR_Integer) 0))));
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResolvedFunctor_3, (MR_Integer) 1))));
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;

          TypeName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
          TypeArity_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
          ConsName_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
          ConsArity_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 1))));
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (SymName_1));
            MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (HeadVar__2_2));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ConsName_47));
            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ConsArity_48));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (TypeName_45));
            MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (TypeArity_46));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[39])));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[41])));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
          }
          {
            Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[40])));
            MR_hl_field(MR_mktag(1), Pieces_4, 1) = ((MR_Box) (Var_53));
          }
        }
        break;
    }
    return Pieces_4;
  }
}

static MR_Word MR_CALL 
recompilation__check__describe_item_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Pieces_6;
    MR_Word ItemType0_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
    MR_Word SymName_4;
    MR_Integer Arity_5;
    MR_Word ItemPieces_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word ItemType1_7;

    SymName_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    Arity_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    succeeded = (ItemType0_3 == (MR_Integer) 1);
    if (succeeded)
    {
      ItemType1_7 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String ItemTypeStr_8;
      MR_Word Var_13;
      MR_Word Var_14;

      recompilation__string_to_item_type_2_p_1(&ItemTypeStr_8, ItemType1_7);
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (ItemTypeStr_8));
      }
      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ItemPieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ItemPieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &recompilation__check_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), ItemPieces_9, 1) = ((MR_Box) (Var_13));
      }
    }
    else
    {
      MR_Word Var_16;
      MR_String ItemTypeStr_22;

      recompilation__string_to_item_type_2_p_1(&ItemTypeStr_22, ItemType0_3);
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (ItemTypeStr_22));
      }
      {
        ItemPieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ItemPieces_9, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(1), ItemPieces_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (SymName_4));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (Arity_5));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ItemPieces_9, Var_18);
    return Pieces_6;
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_52_95_95_91_53_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    recompilation__check__write_recompile_reason_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_52_95_95_91_53_93_95_48_4_p_0(
  MR_Word Var_13,
  MR_Word Var_14,
  MR_Word Var_15,
  MR_Word Globals_5)
{
  {
    MR_Word Verbose_8;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 66, &Verbose_8);
    switch (Verbose_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_22;
          MR_Box conv0_STATE_VARIABLE_IO_10;

          {
            Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&recompilation__check_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_52_95_95_91_53_93_95_48_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Var_13));
            MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (Var_14));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompile_reason_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, Var_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_10);
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__check__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_114_101_99_111_109_112_105_108_97_116_105_111_110_95_109_101_115_115_97_103_101_95_95_104_111_51_95_95_91_51_93_95_48_4_p_0(
  MR_Word Var_13,
  MR_Word Globals_5)
{
  {
    MR_Word Verbose_8;

    libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 66, &Verbose_8);
    switch (Verbose_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "Not recompiling module ");
          parse_tree__prog_out__write_sym_name_3_p_0(Var_13);
          mercury__io__write_string_3_p_0((MR_String) ".\n");
        }
        break;
    }
  }
}

static void MR_CALL 
recompilation__check__add_module_to_recompile_3_p_0(
  MR_Word Module_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word ModulesToRecompile0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7))) & (MR_Integer) 1);
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 8))));

    if ((ModulesToRecompile0_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
    else
    {
      MR_Word Modules0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModulesToRecompile0_6, (MR_Integer) 0))));
      MR_Word Var_11;
      MR_Word Var_12;

      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Module_4));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Modules0_7));
      }
      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (Var_14));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(0), base, 7) = (MR_Box) ((MR_Unsigned) (Var_19));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_20));
      }
    }
  }
}

static void MR_CALL 
recompilation__check__should_recompile_3_try_8_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Info_49;

    recompilation__check__should_recompile_3_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), &conv0_STATE_VARIABLE_Info_49);
    *wrapper_arg_1 = ((MR_Box) (conv0_STATE_VARIABLE_Info_49));
  }
}

static void MR_CALL 
recompilation__check__should_recompile_3_try_8_p_0(
  MR_Word VersionStream_9,
  MR_Word Globals_10,
  MR_Word IsSubModule_11,
  MR_Word FindTargetFiles_12,
  MR_Word Info_13,
  MR_Word * Result_14)
{
  {
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&recompilation__check_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (recompilation__check__should_recompile_3_try_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (VersionStream_9));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Globals_10));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (IsSubModule_11));
      MR_hl_field(MR_mktag(0), Var_18, 6) = ((MR_Box) (FindTargetFiles_12));
      MR_hl_field(MR_mktag(0), Var_18, 7) = ((MR_Box) (Info_13));
    }
    mercury__exception__try_io_4_p_0((MR_Word) (&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0), Var_18, Result_14);
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____find_target_file_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__check____Unify____find_target_file_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____find_target_file_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__check____Compare____find_target_file_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____find_timestamp_file_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__check____Unify____find_timestamp_file_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____find_timestamp_file_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__check____Compare____find_timestamp_file_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____functor_match_arity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__check____Unify____functor_match_arity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____functor_match_arity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__check____Compare____functor_match_arity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____modules_to_recompile_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__check____Unify____modules_to_recompile_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____modules_to_recompile_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__check____Compare____modules_to_recompile_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____parse_resolved_item_matches_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__check____Unify____parse_resolved_item_matches_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____parse_resolved_item_matches_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__check____Compare____parse_resolved_item_matches_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____recompilation_check_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__check____Unify____recompilation_check_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____recompilation_check_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__check____Compare____recompilation_check_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____recompile_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__check____Unify____recompile_exception_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____recompile_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__check____Compare____recompile_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
recompilation__check____Unify____recompile_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = recompilation__check____Unify____recompile_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
recompilation__check____Compare____recompile_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    recompilation__check____Compare____recompile_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__recompilation__check__init(void)
{
}

void mercury__recompilation__check__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_find_target_file_names_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_find_timestamp_file_names_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_functor_match_arity_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_modules_to_recompile_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_parse_resolved_item_matches_1);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_recompilation_check_info_0);
	MR_register_type_ctor_info(&recompilation__check__recompilation__check__type_ctor_info_recompile_exception_0);
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
