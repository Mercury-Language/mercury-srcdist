/*
** Automatically generated from `make_hlds_passes.m'
** by the Mercury compiler,
** version rotd-2022-04-02
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


// :- module hlds.make_hlds.make_hlds_passes.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.mih"


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
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.pred_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_stats.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_mode.mih"
#include "hlds.make_hlds.add_mutable_aux_preds.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_solver.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.mih"



struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s {
  MR_Word * hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4;
  MR_bool hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfos_7;
  jmp_buf hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__TypeInfo_26_26;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__HeadModes_13;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeDetism_14;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__Detism_15;
  MR_Word hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23;
  MR_Box hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__conv0_ProcInfo_23;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_ordinal_ordered_init_or_final_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_name_ordered_init_or_final_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_init_or_final_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__147__1_1_p_0(
  MR_Word LambdaHeadVar__1_121);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__142__1_1_p_0(
  MR_Word LambdaHeadVar__1_120);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_4(
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
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promises_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clauses_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0_1(
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
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avails_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[73][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[3][9];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[1][18];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[5][12];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[1][13];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[5][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[13][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][11];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[1][4];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[5][8];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_11[2][7];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[73][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[6]))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[1]))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "used in"))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not have a corresponding"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[26])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "det"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is either"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "<detism>"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[46])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- impure pred <predname> is <detism>."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- pred <predname>(io::di, io::uo) is <detism>."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "one of these two forms:"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A signature is valid only if it has"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[59])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has an invalid signature."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[26])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has multiple"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[3][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_inst_status_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_mode_status_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[1][18] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_info_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[5][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&hlds__make_hlds__add_clause__hlds__make_hlds__add_clause__type_ctor_info_clause_type_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__add_pred__hlds__add_pred__type_ctor_info_part_of_predmode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_class_method_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[5][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[13][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_11[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[5][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_11[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  {
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_exceptions_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_trailing_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_mm_tabling_info_0)
  }
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_0 = {
  (MR_String) "iof_init",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_1 = {
  (MR_String) "iof_final",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_ordinal_ordered_init_or_final_0[2] = {
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_0,
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_name_ordered_init_or_final_0[2] = {
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_1,
  &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_0
};

static const MR_Integer hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_init_or_final_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__type_ctor_info_init_or_final_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_passes",
  (MR_String) "init_or_final",
  { hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_name_ordered_init_or_final_0 },
  { hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_ordinal_ordered_init_or_final_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_init_or_final_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__147__1_1_p_0(
  MR_Word LambdaHeadVar__1_121)
{
  MR_bool succeeded;
  MR_Word Phase_250;

  parse_tree__error_util__extract_spec_phase_2_p_0(LambdaHeadVar__1_121, &Phase_250);
  succeeded = (Phase_250 == (MR_Word) ((MR_Unsigned) 28U));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__142__1_1_p_0(
  MR_Word LambdaHeadVar__1_120)
{
  MR_bool succeeded;
  MR_Word Phase_36;

  parse_tree__error_util__extract_spec_phase_2_p_0(LambdaHeadVar__1_120, &Phase_36);
  succeeded = (Phase_36 == (MR_Word) ((MR_Unsigned) 24U));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0(
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
hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_item_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleItemVersionNumbers_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_10,
  MR_Word * STATE_VARIABLE_RecompInfo_11)
{
  MR_Word VersionNumbersMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3))));
  MR_Word VersionNumbersMap_9;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;

  mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (ModuleItemVersionNumbers_6)), VersionNumbersMap0_8, &VersionNumbersMap_9);
  Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0))));
  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1))));
  Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_RecompInfo_11 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VersionNumbersMap_9));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_RecompInfo_11;

  hlds__make_hlds__make_hlds_passes__update_module_item_version_numbers_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_RecompInfo_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_RecompInfo_11));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleItemVersionNumbers_6,
  MR_Word STATE_VARIABLE_QualInfo_0_8,
  MR_Word * STATE_VARIABLE_QualInfo_9)
{
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_11[1]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleName_5));
    MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (ModuleItemVersionNumbers_6));
  }
  hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_10, STATE_VARIABLE_QualInfo_0_8, STATE_VARIABLE_QualInfo_9);
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalise_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word FinaliseInfo_12,
  MR_Word STATE_VARIABLE_RevPragmaFPEInfos_0_24,
  MR_Word * STATE_VARIABLE_RevPragmaFPEInfos_25,
  MR_Word STATE_VARIABLE_PredTargetNames_0_26,
  MR_Word * STATE_VARIABLE_PredTargetNames_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinaliseInfo_12, (MR_Integer) 0))));
  MR_Word Arity_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinaliseInfo_12, (MR_Integer) 1))));
  MR_Word Origin_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinaliseInfo_12, (MR_Integer) 2))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinaliseInfo_12, (MR_Integer) 3))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinaliseInfo_12, (MR_Integer) 4))));

  if (((MR_tag((MR_Word) ItemMercuryStatus_11)) == (MR_Integer) 1))
  {
    *STATE_VARIABLE_RevPragmaFPEInfos_25 = STATE_VARIABLE_RevPragmaFPEInfos_0_24;
    *STATE_VARIABLE_PredTargetNames_27 = STATE_VARIABLE_PredTargetNames_0_26;
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
  }
  else
  if ((Origin_18 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0(ModuleInfo_10, (MR_Integer) 1, SymName_16, Arity_17, Context_19, SeqNum_20, STATE_VARIABLE_RevPragmaFPEInfos_0_24, STATE_VARIABLE_RevPragmaFPEInfos_25, STATE_VARIABLE_PredTargetNames_0_26, STATE_VARIABLE_PredTargetNames_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_finalise\'/9", (MR_String) "bad introduced finalise declaration");
      return;
    }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialise_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word ItemMercuryStatus_11,
  MR_Word Initialise_12,
  MR_Word STATE_VARIABLE_RevPragmaFPEInfos_0_24,
  MR_Word * STATE_VARIABLE_RevPragmaFPEInfos_25,
  MR_Word STATE_VARIABLE_PredTargetNames_0_26,
  MR_Word * STATE_VARIABLE_PredTargetNames_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Initialise_12, (MR_Integer) 0))));
  MR_Word Arity_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Initialise_12, (MR_Integer) 1))));
  MR_Word Origin_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Initialise_12, (MR_Integer) 2))));
  MR_Word Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Initialise_12, (MR_Integer) 3))));
  MR_Word SeqNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Initialise_12, (MR_Integer) 4))));

  if (((MR_tag((MR_Word) ItemMercuryStatus_11)) == (MR_Integer) 1))
  {
    *STATE_VARIABLE_RevPragmaFPEInfos_25 = STATE_VARIABLE_RevPragmaFPEInfos_0_24;
    *STATE_VARIABLE_PredTargetNames_27 = STATE_VARIABLE_PredTargetNames_0_26;
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
  }
  else
  if ((Origin_18 == (MR_Word) ((MR_Unsigned) 0U)))
    hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0(ModuleInfo_10, (MR_Integer) 0, SymName_16, Arity_17, Context_19, SeqNum_20, STATE_VARIABLE_RevPragmaFPEInfos_0_24, STATE_VARIABLE_RevPragmaFPEInfos_25, STATE_VARIABLE_PredTargetNames_0_26, STATE_VARIABLE_PredTargetNames_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_initialise\'/9", (MR_String) "bad introduced initialise declaration");
      return;
    }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word InitOrFinal_14,
  MR_Word SymName_15,
  MR_Word UserArity_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word STATE_VARIABLE_RevPragmaFPEInfos_0_40,
  MR_Word * STATE_VARIABLE_RevPragmaFPEInfos_41,
  MR_Word STATE_VARIABLE_PredTargetNames_0_42,
  MR_Word * STATE_VARIABLE_PredTargetNames_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  MR_bool succeeded;
  MR_Word PredTable_22;
  MR_Integer UserArityInt_23;
  MR_Word PredIds_24;
  MR_String DeclName_25;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_13, &PredTable_22);
  UserArityInt_23 = (MR_Integer) (UserArity_16);
  hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_22, (MR_Integer) 1, SymName_15, UserArity_16, &PredIds_24);
  switch (InitOrFinal_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      DeclName_25 = (MR_String) "finalise";
      break;
    case (MR_Integer) 0:
      DeclName_25 = (MR_String) "initialise";
      break;
  }
  if ((PredIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Pieces_26;
    MR_Word Spec_27;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_154;
    MR_Word Var_155;

    {
      Var_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (SymName_15));
      MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) (UserArityInt_23));
    }
    {
      Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (Var_150));
    }
    {
      Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (DeclName_25));
    }
    {
      Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
      MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[34])));
    }
    {
      Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[25])));
      MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_154));
    }
    {
      Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
      MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_151));
    }
    {
      Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[24])));
      MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_148));
    }
    {
      Spec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise_finalise\'/12"));
      MR_hl_field(MR_mktag(1), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_27, 3) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(1), Spec_27, 4) = ((MR_Box) (Pieces_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_45 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
    }
    *STATE_VARIABLE_RevPragmaFPEInfos_41 = STATE_VARIABLE_RevPragmaFPEInfos_0_40;
    *STATE_VARIABLE_PredTargetNames_43 = STATE_VARIABLE_PredTargetNames_0_42;
  }
  else
  {
    MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_24, (MR_Integer) 1))));
    MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_24, (MR_Integer) 0))));

    if ((Var_183 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word PredInfo_29;
      MR_Word ExpectedHeadModes_30;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, Var_184, &PredInfo_29);
      succeeded = hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0(PredInfo_29, &ExpectedHeadModes_30);
      if (succeeded)
      {
        MR_Word ModuleName_31;
        MR_String NameIoF_32;
        MR_Word Origin_33;
        MR_String TargetName_34;
        MR_Word Globals_35;
        MR_Word PragmaFPEInfo_36;

        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_13, &ModuleName_31);
        switch (InitOrFinal_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              NameIoF_32 = (MR_String) "final";
              Origin_33 = (MR_Word) ((MR_Unsigned) 4U);
            }
            break;
          case (MR_Integer) 0:
            {
              NameIoF_32 = (MR_String) "init";
              Origin_33 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
        parse_tree__prog_foreign__new_user_init_or_final_pred_target_name_8_p_0(ModuleName_31, NameIoF_32, SeqNum_18, SymName_15, UserArity_16, &TargetName_34, STATE_VARIABLE_PredTargetNames_0_42, STATE_VARIABLE_PredTargetNames_43);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_35);
        hlds__make_hlds__make_hlds_passes__make_pragma_foreign_proc_export_7_p_0(Globals_35, SymName_15, ExpectedHeadModes_30, TargetName_34, Origin_33, Context_17, &PragmaFPEInfo_36);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevPragmaFPEInfos_41 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaFPEInfo_36));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevPragmaFPEInfos_0_40));
        }
        *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
      }
      else
      {
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Pieces_175;
        MR_Word Spec_176;

        {
          Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (SymName_15));
          MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (UserArityInt_23));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (DeclName_25));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[65])));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[25])));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
        }
        {
          Pieces_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[24])));
          MR_hl_field(MR_mktag(1), Pieces_175, 1) = ((MR_Box) (Var_82));
        }
        {
          Spec_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_176, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise_finalise\'/12"));
          MR_hl_field(MR_mktag(1), Spec_176, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_176, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(1), Spec_176, 3) = ((MR_Box) (Context_17));
          MR_hl_field(MR_mktag(1), Spec_176, 4) = ((MR_Box) (Pieces_175));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_45 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_176));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
        }
        *STATE_VARIABLE_PredTargetNames_43 = STATE_VARIABLE_PredTargetNames_0_42;
        *STATE_VARIABLE_RevPragmaFPEInfos_41 = STATE_VARIABLE_RevPragmaFPEInfos_0_40;
      }
    }
    else
    {
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Pieces_181;
      MR_Word Spec_182;

      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (SymName_15));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (UserArityInt_23));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (DeclName_25));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[71])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[25])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      {
        Pieces_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Pieces_181, 1) = ((MR_Box) (Var_50));
      }
      {
        Spec_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_182, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise_finalise\'/12"));
        MR_hl_field(MR_mktag(1), Spec_182, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_182, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_182, 3) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(1), Spec_182, 4) = ((MR_Box) (Pieces_181));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_45 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_182));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_44));
      }
      *STATE_VARIABLE_RevPragmaFPEInfos_41 = STATE_VARIABLE_RevPragmaFPEInfos_0_40;
      *STATE_VARIABLE_PredTargetNames_43 = STATE_VARIABLE_PredTargetNames_0_42;
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_pragma_foreign_proc_export_7_p_0(
  MR_Word Globals_8,
  MR_Word SymName_9,
  MR_Word HeadModes_10,
  MR_String CName_11,
  MR_Word Origin_12,
  MR_Word Context_13,
  MR_Word * PragmaFPEInfo_14)
{
  MR_Word Attrs_15 = (MR_Word) (Origin_12);
  MR_Word PEOrigin_16;
  MR_Word CompilationTarget_17;
  MR_Word ExportLang_18;
  MR_Word PredNameModesPF_19;
  MR_Word VarSet_20;
  MR_Word FPEInfo_21;

  {
    PEOrigin_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), PEOrigin_16, 0) = ((MR_Box) (Attrs_15));
  }
  libs__globals__get_target_2_p_0(Globals_8, &CompilationTarget_17);
  ExportLang_18 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(CompilationTarget_17);
  {
    PredNameModesPF_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PredNameModesPF_19, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), PredNameModesPF_19, 1) = ((MR_Box) (SymName_9));
    MR_hl_field(MR_mktag(0), PredNameModesPF_19, 2) = ((MR_Box) (HeadModes_10));
  }
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_20);
  {
    FPEInfo_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FPEInfo_21, 0) = ((MR_Box) (PEOrigin_16));
    MR_hl_field(MR_mktag(0), FPEInfo_21, 1) = (MR_Box) ((MR_Unsigned) (ExportLang_18));
    MR_hl_field(MR_mktag(0), FPEInfo_21, 2) = ((MR_Box) (PredNameModesPF_19));
    MR_hl_field(MR_mktag(0), FPEInfo_21, 3) = ((MR_Box) (CName_11));
    MR_hl_field(MR_mktag(0), FPEInfo_21, 4) = ((MR_Box) (VarSet_20));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *PragmaFPEInfo_14 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FPEInfo_21));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_13));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23 = ((MR_Word) ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__conv0_ProcInfo_23));
  hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

  hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23, &(env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12);
  (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12 != (MR_Word) ((MR_Unsigned) 0U));
  if ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
  {
    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__HeadModes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12, (MR_Integer) 0))));
    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__TypeInfo_26_26 = (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[72]);
    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__TypeInfo_26_26, ((MR_Box) ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__HeadModes_13)), ((MR_Box) (*((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4))));
    if ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23, &(env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeDetism_14);
      (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeDetism_14 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__Detism_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeDetism_14, (MR_Integer) 0))));
        switch ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__Detism_15) {
          default:
            (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 4:
            (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 0:
            (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
        if ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
          hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), &(env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__conv0_ProcInfo_23, (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfos_7, hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_3, env_ptr);
      (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * ExpectedHeadModes_4)
{
  struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s env;

  (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4 = ExpectedHeadModes_4;
  {
    MR_Word ArgTypes_5;
    MR_Word ProcTable_6;
    MR_Word ExpectedPurity_10;
    MR_Word Purity_16;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_3, &ArgTypes_5);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_3, &ProcTable_6);
    (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfos_7 = mercury__map__values_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_6);
    if ((ArgTypes_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4) = (MR_Word) ((MR_Unsigned) 0U);
      ExpectedPurity_10 = (MR_Integer) 2;
      (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Arg1Type_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_5, (MR_Integer) 0))));
      MR_Word Arg2Type_9;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypes_5, (MR_Integer) 1))));
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;

      (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
      {
        Arg2Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1))));
        (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
        if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
        {
          (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Arg1Type_8);
          if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
          {
            (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Arg2Type_9);
            if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
            {
              Var_19 = parse_tree__prog_mode__di_mode_0_f_0();
              Var_21 = parse_tree__prog_mode__uo_mode_0_f_0();
              Var_22 = (MR_Word) ((MR_Unsigned) 0U);
              ExpectedPurity_10 = (MR_Integer) 0;
              {
                Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
                MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ExpectedHeadModes_4) = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_20));
              }
              (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
    {
      hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_4(&env);
      if ((env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
      {
        hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_3, &Purity_16);
        (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = (Purity_16 == ExpectedPurity_10);
      }
    }
    return (env).hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_8_p_0(
  MR_Word PredStatus_9,
  MR_Word PromiseInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_QualInfo_0_37,
  MR_Word * STATE_VARIABLE_QualInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_Word PromiseType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 1))));
  MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 2))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 4))));
  MR_Word SeqNum_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 5))));
  MR_Word GoalType_20;
  MR_Word ClauseType_21;
  MR_String FileName_22;
  MR_Integer LineNumber_23;
  MR_String PromisePredName_24;
  MR_Word PromiseModuleName_26;
  MR_Word PromisePredSymName_27;
  MR_Word HeadVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 3))));
  MR_Word PredFormArity_29;
  MR_Word ClausesInfo_30;
  MR_Word PredOrigin_31;
  MR_Word HeadVarTerms_33;
  MR_Word ClauseInfo_34;
  MR_Word STATE_VARIABLE_Specs_41_41;
  MR_Word STATE_VARIABLE_ModuleInfo_43_43;
  MR_Word Var_45;
  MR_Word _PredId_32;

  switch (PromiseType_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(HeadVars_28, PromiseType_14, Goal_15, Context_18, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_41_41);
      break;
    case (MR_Integer) 3:
      STATE_VARIABLE_Specs_41_41 = STATE_VARIABLE_Specs_0_39;
      break;
  }
  {
    GoalType_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), GoalType_20, 0) = (MR_Box) ((MR_Unsigned) (PromiseType_14));
  }
  {
    ClauseType_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ClauseType_21, 0) = (MR_Box) ((MR_Unsigned) (PromiseType_14));
  }
  mercury__term__context_file_2_p_0(Context_18, &FileName_22);
  mercury__term__context_line_2_p_0(Context_18, &LineNumber_23);
  PromisePredName_24 = parse_tree__pred_name__promise_pred_name_3_f_0(PromiseType_14, FileName_22, LineNumber_23);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &PromiseModuleName_26);
  {
    PromisePredSymName_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), PromisePredSymName_27, 0) = ((MR_Box) (PromiseModuleName_26));
    MR_hl_field(MR_mktag(1), PromisePredSymName_27, 1) = ((MR_Box) (PromisePredName_24));
  }
  PredFormArity_29 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[21]), HeadVars_28);
  hlds__hlds_clauses__clauses_info_init_for_assertion_2_p_0(HeadVars_28, &ClausesInfo_30);
  {
    PredOrigin_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), PredOrigin_31, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(MR_mktag(3), PredOrigin_31, 1) = ((MR_Box) (FileName_22));
    MR_hl_field(MR_mktag(3), PredOrigin_31, 2) = ((MR_Box) (LineNumber_23));
  }
  hlds__add_pred__add_implicit_pred_decl_12_p_0((MR_Integer) 0, PromiseModuleName_26, PromisePredName_24, PredFormArity_29, PredStatus_9, Context_18, PredOrigin_31, GoalType_20, ClausesInfo_30, &_PredId_32, STATE_VARIABLE_ModuleInfo_0_35, &STATE_VARIABLE_ModuleInfo_43_43);
  mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVars_28, &HeadVarTerms_33);
  {
    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Goal_15));
    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ClauseInfo_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ClauseInfo_34, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(0), ClauseInfo_34, 1) = ((MR_Box) (PromisePredSymName_27));
    MR_hl_field(MR_mktag(0), ClauseInfo_34, 2) = ((MR_Box) (HeadVarTerms_33));
    MR_hl_field(MR_mktag(0), ClauseInfo_34, 3) = ((MR_Box) (VarSet_16));
    MR_hl_field(MR_mktag(0), ClauseInfo_34, 4) = ((MR_Box) (Var_45));
    MR_hl_field(MR_mktag(0), ClauseInfo_34, 5) = ((MR_Box) (Context_18));
    MR_hl_field(MR_mktag(0), ClauseInfo_34, 6) = ((MR_Box) (SeqNum_19));
  }
  hlds__make_hlds__add_clause__module_add_clause_9_p_0(PredStatus_9, ClauseType_21, ClauseInfo_34, STATE_VARIABLE_ModuleInfo_43_43, STATE_VARIABLE_ModuleInfo_36, STATE_VARIABLE_QualInfo_0_37, STATE_VARIABLE_QualInfo_38, STATE_VARIABLE_Specs_41_41, STATE_VARIABLE_Specs_40);
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(
  MR_Word PredDecl_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31)
{
  MR_bool succeeded;
  MR_Word PredSymName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredDecl_4, (MR_Integer) 0))));
  MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredDecl_4, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word TypesAndModes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredDecl_4, (MR_Integer) 2))));
  MR_String PredName_20;

  PredName_20 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_6);
  succeeded = (strcmp(PredName_20, (MR_String) "") == 0);
  if (succeeded)
    *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
  else
    switch (PredOrFunc_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PredFormArity_21;
          MR_Word UserArity_22;
          MR_Word PredTable0_23;
          MR_Word PredIds_24;

          PredFormArity_21 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_8);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_7, &UserArity_22, PredFormArity_21);
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_30, &PredTable0_23);
          hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredTable0_23, (MR_Integer) 0, PredSymName_6, UserArity_22, &PredIds_24);
          if ((PredIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.maybe_add_default_mode\'/3", (MR_String) "can\'t find func declaration");
              return;
            }
          else
          {
            MR_Word PredIdTable0_27;
            MR_Word PredIdTable_28;
            MR_Word PredTable_29;

            hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable0_23, &PredIdTable0_27);
            hlds__default_func_mode__maybe_add_default_func_modes_3_p_0(PredIds_24, PredIdTable0_27, &PredIdTable_28);
            hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(PredIdTable_28, PredTable0_23, &PredTable_29);
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_29, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31);
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
        break;
    }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_15_p_0(
  MR_Word SectionInfo_16,
  MR_Word TypeStatus_17,
  MR_Word TypeDefnInfo_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_52,
  MR_Word * STATE_VARIABLE_ModuleInfo_53,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_54,
  MR_Word * STATE_VARIABLE_FoundInvalidType_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57,
  MR_Word STATE_VARIABLE_RevPredDecls_0_58,
  MR_Word * STATE_VARIABLE_RevPredDecls_59,
  MR_Word STATE_VARIABLE_RevForeignProcs_0_60,
  MR_Word * STATE_VARIABLE_RevForeignProcs_61,
  MR_Word STATE_VARIABLE_RevMutables_0_62,
  MR_Word * STATE_VARIABLE_RevMutables_63)
{
  MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_16, (MR_Integer) 0))));
  MR_Word NeedQual_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectionInfo_16, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_18, (MR_Integer) 0))));
  MR_Word TypeParams_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_18, (MR_Integer) 1))));
  MR_Word TypeDefn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_18, (MR_Integer) 2))));
  MR_Word TypeVarSet_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_18, (MR_Integer) 3))));
  MR_Word Context_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_18, (MR_Integer) 4))));

  switch (MR_tag((MR_Word) TypeDefn_29)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_RevPredDecls_59 = STATE_VARIABLE_RevPredDecls_0_58;
        *STATE_VARIABLE_RevForeignProcs_61 = STATE_VARIABLE_RevForeignProcs_0_60;
        *STATE_VARIABLE_RevMutables_63 = STATE_VARIABLE_RevMutables_0_62;
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_RevPredDecls_59 = STATE_VARIABLE_RevPredDecls_0_58;
        *STATE_VARIABLE_RevForeignProcs_61 = STATE_VARIABLE_RevForeignProcs_0_60;
        *STATE_VARIABLE_RevMutables_63 = STATE_VARIABLE_RevMutables_0_62;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Detailssolver_33 = (MR_Word) (MR_body((MR_Word) (TypeDefn_29), (MR_Integer) 2));
        MR_Word SolverTypeDetails_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Detailssolver_33, (MR_Integer) 0))));
        MR_Word SolverAuxPredInfo_36;
        MR_Word PredDeclInfos_37;
        MR_Word PredDeclList_38;

        {
          SolverAuxPredInfo_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverAuxPredInfo_36, 0) = ((MR_Box) (SymName_27));
          MR_hl_field(MR_mktag(0), SolverAuxPredInfo_36, 1) = ((MR_Box) (TypeParams_28));
          MR_hl_field(MR_mktag(0), SolverAuxPredInfo_36, 2) = ((MR_Box) (TypeVarSet_30));
          MR_hl_field(MR_mktag(0), SolverAuxPredInfo_36, 3) = ((MR_Box) (SolverTypeDetails_34));
          MR_hl_field(MR_mktag(0), SolverAuxPredInfo_36, 4) = ((MR_Box) (Context_31));
        }
        hlds__make_hlds__add_solver__get_solver_type_aux_pred_decls_2_p_0(SolverAuxPredInfo_36, &PredDeclInfos_37);
        {
          PredDeclList_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredDeclList_38, 0) = ((MR_Box) (SectionInfo_16));
          MR_hl_field(MR_mktag(0), PredDeclList_38, 1) = ((MR_Box) (PredDeclInfos_37));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevPredDecls_59 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredDeclList_38));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_58));
        }
        if (((MR_tag((MR_Word) ItemMercuryStatus_25)) == (MR_Integer) 1))
        {
          *STATE_VARIABLE_RevForeignProcs_61 = STATE_VARIABLE_RevForeignProcs_0_60;
          *STATE_VARIABLE_RevMutables_63 = STATE_VARIABLE_RevMutables_0_62;
        }
        else
        {
          MR_Word Globals_40;
          MR_Word Target_41;
          MR_Word ForeignProcInfos_42;
          MR_Word ForeignProcList_43;
          MR_Word MutableItems_44;
          MR_Word MutableList_45;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_52, &Globals_40);
          libs__globals__get_target_2_p_0(Globals_40, &Target_41);
          hlds__make_hlds__add_solver__get_solver_type_aux_pred_defns_3_p_0(Target_41, SolverAuxPredInfo_36, &ForeignProcInfos_42);
          {
            ForeignProcList_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignProcList_43, 0) = ((MR_Box) (ItemMercuryStatus_25));
            MR_hl_field(MR_mktag(0), ForeignProcList_43, 1) = ((MR_Box) (ForeignProcInfos_42));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevForeignProcs_61 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignProcList_43));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevForeignProcs_0_60));
          }
          MutableItems_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_34, (MR_Integer) 3))));
          {
            MutableList_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), MutableList_45, 0) = ((MR_Box) (SectionInfo_16));
            MR_hl_field(MR_mktag(0), MutableList_45, 1) = ((MR_Box) (MutableItems_44));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevMutables_63 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MutableList_45));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevMutables_0_62));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_29, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_RevPredDecls_59 = STATE_VARIABLE_RevPredDecls_0_58;
            *STATE_VARIABLE_RevForeignProcs_61 = STATE_VARIABLE_RevForeignProcs_0_60;
            *STATE_VARIABLE_RevMutables_63 = STATE_VARIABLE_RevMutables_0_62;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_RevPredDecls_59 = STATE_VARIABLE_RevPredDecls_0_58;
            *STATE_VARIABLE_RevForeignProcs_61 = STATE_VARIABLE_RevForeignProcs_0_60;
            *STATE_VARIABLE_RevMutables_63 = STATE_VARIABLE_RevMutables_0_62;
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_RevPredDecls_59 = STATE_VARIABLE_RevPredDecls_0_58;
            *STATE_VARIABLE_RevForeignProcs_61 = STATE_VARIABLE_RevForeignProcs_0_60;
            *STATE_VARIABLE_RevMutables_63 = STATE_VARIABLE_RevMutables_0_62;
          }
          break;
      }
      break;
  }
  hlds__make_hlds__add_type__module_add_type_defn_9_p_0(TypeStatus_17, NeedQual_26, TypeDefnInfo_18, STATE_VARIABLE_ModuleInfo_0_52, STATE_VARIABLE_ModuleInfo_53, STATE_VARIABLE_FoundInvalidType_0_54, STATE_VARIABLE_FoundInvalidType_55, STATE_VARIABLE_Specs_0_56, STATE_VARIABLE_Specs_57);
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_6_p_0(
  MR_Word ItemMercuryStatus_7,
  MR_Word Avail_8,
  MR_Word STATE_VARIABLE_AncestorAvailModules_0_19,
  MR_Word * STATE_VARIABLE_AncestorAvailModules_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22)
{
  MR_Word ModuleName_11;
  MR_Word Context_12;
  MR_Word ImportOrUse_14;

  if (((MR_tag((MR_Word) Avail_8)) == (MR_Integer) 0))
  {
    MR_Word Var_24 = (MR_Word) ((MR_Word) (Avail_8));

    ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))));
    Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
    ImportOrUse_14 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Var_23 = (MR_Word) (MR_body((MR_Word) (Avail_8), (MR_Integer) 1));

    ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
    Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1))));
    ImportOrUse_14 = (MR_Integer) 1;
  }
  if (((MR_tag((MR_Word) ItemMercuryStatus_7)) == (MR_Integer) 1))
  {
    MR_Word ItemImport_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_7, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) ItemImport_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(ModuleName_11, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
          *STATE_VARIABLE_AncestorAvailModules_20 = STATE_VARIABLE_AncestorAvailModules_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ImportLocn_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ItemImport_17, (MR_Integer) 0))) & (MR_Integer) 7);

          switch (ImportLocn_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 4:
              {
                hlds__hlds_module__module_add_avail_module_name_6_p_0(ModuleName_11, (MR_Integer) 1, ImportOrUse_14, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
                mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_AncestorAvailModules_0_19, STATE_VARIABLE_AncestorAvailModules_20);
              }
              break;
            case (MR_Integer) 3:
              {
                hlds__hlds_module__module_add_avail_module_name_6_p_0(ModuleName_11, (MR_Integer) 0, ImportOrUse_14, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
                mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), STATE_VARIABLE_AncestorAvailModules_0_19, STATE_VARIABLE_AncestorAvailModules_20);
              }
              break;
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(ModuleName_11, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
                *STATE_VARIABLE_AncestorAvailModules_20 = STATE_VARIABLE_AncestorAvailModules_0_19;
              }
              break;
          }
        }
        break;
    }
  }
  else
  {
    MR_Word ItemExport_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_7, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Section_16;
    MR_Word Var_30;

    switch (ItemExport_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        Section_16 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        Section_16 = (MR_Integer) 1;
        break;
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Context_12));
    }
    hlds__hlds_module__module_add_avail_module_name_6_p_0(ModuleName_11, Section_16, ImportOrUse_14, Var_30, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22);
    *STATE_VARIABLE_AncestorAvailModules_20 = STATE_VARIABLE_AncestorAvailModules_0_19;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word TVarSet_6;
  MR_Word Context_7;
  MR_Word Type_9;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_6);
  mercury__term__context_init_1_p_0(&Context_7);
  parse_tree__prog_type__construct_type_3_p_0(TypeCtor_4, (MR_Word) ((MR_Unsigned) 0U), &Type_9);
  hlds__add_special_pred__add_special_pred_decl_defns_for_type_eagerly_8_p_0(TVarSet_6, Type_9, TypeCtor_4, (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[23])), (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Context_7, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv34_STATE_VARIABLE_QualInfo_9;

  hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv34_STATE_VARIABLE_QualInfo_9);
  *wrapper_arg_4 = ((MR_Box) (conv34_STATE_VARIABLE_QualInfo_9));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv31_HeadVar__3_3;
  MR_Word conv30_HeadVar__5_5;

  hlds__make_hlds__add_pragma__add_gen_pragma_mm_tabling_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv31_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv30_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv31_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv30_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_HeadVar__3_3;
  MR_Word conv26_HeadVar__5_5;

  hlds__make_hlds__add_pragma__add_gen_pragma_trailing_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv26_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv27_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv26_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv23_HeadVar__3_3;
  MR_Word conv22_HeadVar__5_5;

  hlds__make_hlds__add_pragma__add_gen_pragma_exceptions_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv22_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv23_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv22_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv19_HeadVar__3_3;
  MR_Word conv18_HeadVar__5_5;

  hlds__make_hlds__add_pragma__add_gen_pragma_unused_args_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv18_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv19_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv18_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_HeadVar__3_3;

  hlds__hlds_module__module_add_foreign_body_code_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__3_3));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_HeadVar__3_3;

  hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__3_3));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_HeadVar__3_3;
  MR_Word conv10_HeadVar__5_5;

  hlds__make_hlds__add_pragma__add_pragma_info_foreign_proc_export_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv10_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv10_HeadVar__5_5));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_ModuleInfo_12;

  hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ModuleInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_12));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_4(
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
  MR_Word conv4_HeadVar__5_5;
  MR_Word conv3_HeadVar__7_7;
  MR_Word conv2_HeadVar__9_9;

  hlds__make_hlds__add_type__add_du_ctors_check_subtype_check_foreign_type_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv3_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv2_HeadVar__9_9);
  *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv3_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv2_HeadVar__9_9));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  hlds__hlds_module__module_add_item_fim_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__147__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__parse_tree_to_hlds__142__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0(
  MR_Word AugCompUnit_12,
  MR_Word Globals_13,
  MR_String DumpBaseFileName_14,
  MR_Word MQInfo0_15,
  MR_Word TypeEqvMap_16,
  MR_Word UsedModules_17,
  MR_Word * STATE_VARIABLE_QualInfo_109,
  MR_Word * STATE_VARIABLE_FoundInvalidType_110,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_111,
  MR_Word * STATE_VARIABLE_ModuleInfo_112,
  MR_Word * STATE_VARIABLE_Specs_113)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 0))));
  MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 0))));
  MR_Word ModuleNameContext_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 1))));
  MR_Word ImplicitlyUsedModules_26;
  MR_Word PQInfo_27;
  MR_Word TypeSpecs_32;
  MR_Word InstModeSpecs_33;
  MR_Word InvalidTypeSpecs_38;
  MR_Word InvalidInstModeSpecs_39;
  MR_Word TypeErrors_40;
  MR_Word InstModeErrors_41;
  MR_Word InclMap_42;
  MR_Word Avails_43;
  MR_Word FIMs_44;
  MR_Word TypeDefnsAbstract_45;
  MR_Word TypeDefnsMercury_46;
  MR_Word TypeDefnsForeign_47;
  MR_Word InstDefns_48;
  MR_Word ModeDefns_49;
  MR_Word PredDecls_50;
  MR_Word ModeDecls_51;
  MR_Word Promises_52;
  MR_Word Typeclasses_53;
  MR_Word Instances_54;
  MR_Word Initialises_55;
  MR_Word Finalises_56;
  MR_Word Mutables_57;
  MR_Word TypeRepnMap_58;
  MR_Word ForeignEnums_59;
  MR_Word ForeignExportEnums_60;
  MR_Word PragmasDecl_61;
  MR_Word PragmasDeclTypeSpec_62;
  MR_Word PragmasDeclTermInfo_63;
  MR_Word PragmasDeclTerm2Info_64;
  MR_Word PragmasDeclSharing_65;
  MR_Word PragmasDeclReuse_66;
  MR_Word PragmasImpl_67;
  MR_Word PragmasGenUnusedArgs_68;
  MR_Word PragmasGenExceptions_69;
  MR_Word PragmasGenTrailing_70;
  MR_Word PragmasGenMMTabling_71;
  MR_Word Clauses_72;
  MR_Word IntBadClauses_73;
  MR_Word DirectArgMap_74;
  MR_Word TypeRepnDec_75;
  MR_Word AncestorAvailModules_76;
  MR_Word AncestorAvailSet0_77;
  MR_Word AncestorAvailSet_78;
  MR_Word SolverPredDecls_82;
  MR_Word SolverForeignProcs_83;
  MR_Word SolverMutables_84;
  MR_Word AllMutables_85;
  MR_Word InitPredTargetNames0_86;
  MR_Word MutablePredDecls_87;
  MR_Word MutableClauses_88;
  MR_Word MutableForeignProcs_89;
  MR_Word MutableForeignDeclCodes_90;
  MR_Word MutableForeignBodyCodes_91;
  MR_Word RevPragmaFPEInfos1_92;
  MR_Word InitPredTargetNames1_93;
  MR_Word FinalPredTargetNames1_95;
  MR_Word RevPragmaFPEInfos2_96;
  MR_Word InitPredTargetNames_97;
  MR_Word RevPragmaFPEInfos_98;
  MR_Word FinalPredTargetNames_99;
  MR_Word RevPragmasTabled_100;
  MR_Word PragmasTabled_101;
  MR_Word PragmaFPEInfos_102;
  MR_Word ModuleItemVersionNumbers_103;
  MR_Word MQInfo_104;
  MR_Word MQUndefType_105;
  MR_Word MQUndefInst_106;
  MR_Word MQUndefMode_107;
  MR_Word MQUndefTypeClass_108;
  MR_Word STATE_VARIABLE_Specs_119_119;
  MR_Word STATE_VARIABLE_FoundInvalidType_123_123;
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_125_125;
  MR_Word STATE_VARIABLE_ModuleInfo_127_127;
  MR_Word Var_128;
  MR_Word STATE_VARIABLE_ModuleInfo_129_129;
  MR_Word STATE_VARIABLE_ModuleInfo_130_130;
  MR_Word STATE_VARIABLE_ModuleInfo_134_134;
  MR_Word STATE_VARIABLE_FoundInvalidType_135_135;
  MR_Word STATE_VARIABLE_Specs_136_136;
  MR_Word STATE_VARIABLE_RevSolverPredDecls_137_137;
  MR_Word STATE_VARIABLE_RevSolverForeignProcs_138_138;
  MR_Word STATE_VARIABLE_RevSolverMutables_139_139;
  MR_Word STATE_VARIABLE_ModuleInfo_140_140;
  MR_Word STATE_VARIABLE_FoundInvalidType_141_141;
  MR_Word STATE_VARIABLE_Specs_142_142;
  MR_Word STATE_VARIABLE_RevSolverPredDecls_143_143;
  MR_Word STATE_VARIABLE_RevSolverForeignProcs_144_144;
  MR_Word STATE_VARIABLE_RevSolverMutables_145_145;
  MR_Word STATE_VARIABLE_ModuleInfo_146_146;
  MR_Word STATE_VARIABLE_FoundInvalidType_147_147;
  MR_Word STATE_VARIABLE_Specs_148_148;
  MR_Word STATE_VARIABLE_RevSolverPredDecls_149_149;
  MR_Word STATE_VARIABLE_RevSolverForeignProcs_150_150;
  MR_Word STATE_VARIABLE_RevSolverMutables_151_151;
  MR_Word STATE_VARIABLE_ModuleInfo_152_152;
  MR_Word STATE_VARIABLE_Specs_153_153;
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_154_154;
  MR_Word STATE_VARIABLE_Specs_155_155;
  MR_Word STATE_VARIABLE_ModuleInfo_156_156;
  MR_Word STATE_VARIABLE_Specs_157_157;
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_158_158;
  MR_Word STATE_VARIABLE_Specs_159_159;
  MR_Word STATE_VARIABLE_ModuleInfo_160_160;
  MR_Word STATE_VARIABLE_Specs_161_161;
  MR_Word STATE_VARIABLE_ModuleInfo_162_162;
  MR_Word STATE_VARIABLE_Specs_163_163;
  MR_Word STATE_VARIABLE_ModuleInfo_164_164;
  MR_Word STATE_VARIABLE_Specs_165_165;
  MR_Word STATE_VARIABLE_Specs_166_166;
  MR_Word STATE_VARIABLE_ModuleInfo_167_167;
  MR_Word STATE_VARIABLE_Specs_168_168;
  MR_Word STATE_VARIABLE_ModuleInfo_169_169;
  MR_Word STATE_VARIABLE_Specs_170_170;
  MR_Word STATE_VARIABLE_ModuleInfo_171_171;
  MR_Word STATE_VARIABLE_ModuleInfo_172_172;
  MR_Word STATE_VARIABLE_Specs_173_173;
  MR_Word STATE_VARIABLE_ModuleInfo_175_175;
  MR_Word STATE_VARIABLE_FoundInvalidType_177_177;
  MR_Word STATE_VARIABLE_ModuleInfo_178_178;
  MR_Word STATE_VARIABLE_Specs_179_179;
  MR_Word STATE_VARIABLE_ModuleInfo_182_182;
  MR_Word STATE_VARIABLE_ModuleInfo_183_183;
  MR_Word STATE_VARIABLE_QualInfo_184_184;
  MR_Word STATE_VARIABLE_ModuleInfo_185_185;
  MR_Word STATE_VARIABLE_QualInfo_186_186;
  MR_Word STATE_VARIABLE_Specs_187_187;
  MR_Word STATE_VARIABLE_ModuleInfo_188_188;
  MR_Word STATE_VARIABLE_QualInfo_189_189;
  MR_Word STATE_VARIABLE_Specs_190_190;
  MR_Word STATE_VARIABLE_ModuleInfo_191_191;
  MR_Word STATE_VARIABLE_QualInfo_192_192;
  MR_Word STATE_VARIABLE_Specs_193_193;
  MR_Word STATE_VARIABLE_ModuleInfo_194_194;
  MR_Word STATE_VARIABLE_ModuleInfo_195_195;
  MR_Word STATE_VARIABLE_Specs_196_196;
  MR_Word STATE_VARIABLE_ModuleInfo_197_197;
  MR_Word STATE_VARIABLE_Specs_198_198;
  MR_Word STATE_VARIABLE_Specs_199_199;
  MR_Word STATE_VARIABLE_Specs_200_200;
  MR_Word STATE_VARIABLE_ModuleInfo_201_201;
  MR_Word STATE_VARIABLE_ModuleInfo_202_202;
  MR_Word STATE_VARIABLE_ModuleInfo_203_203;
  MR_Word STATE_VARIABLE_QualInfo_204_204;
  MR_Word STATE_VARIABLE_Specs_205_205;
  MR_Word STATE_VARIABLE_ModuleInfo_206_206;
  MR_Word STATE_VARIABLE_QualInfo_207_207;
  MR_Word STATE_VARIABLE_Specs_208_208;
  MR_Word STATE_VARIABLE_ModuleInfo_209_209;
  MR_Word STATE_VARIABLE_Specs_210_210;
  MR_Word STATE_VARIABLE_ModuleInfo_211_211;
  MR_Word STATE_VARIABLE_Specs_212_212;
  MR_Word STATE_VARIABLE_ModuleInfo_213_213;
  MR_Word STATE_VARIABLE_Specs_214_214;
  MR_Word STATE_VARIABLE_ModuleInfo_215_215;
  MR_Word STATE_VARIABLE_Specs_216_216;
  MR_Word STATE_VARIABLE_ModuleInfo_218_218;
  MR_Word STATE_VARIABLE_QualInfo_219_219;
  MR_Word STATE_VARIABLE_Specs_220_220;
  MR_Word STATE_VARIABLE_ModuleInfo_221_221;
  MR_Word STATE_VARIABLE_QualInfo_222_222;
  MR_Word STATE_VARIABLE_Specs_223_223;
  MR_Word STATE_VARIABLE_ModuleInfo_225_225;
  MR_Word STATE_VARIABLE_Specs_226_226;
  MR_Word STATE_VARIABLE_ModuleInfo_228_228;
  MR_Word STATE_VARIABLE_ModuleInfo_230_230;
  MR_Word STATE_VARIABLE_ModuleInfo_232_232;
  MR_Word STATE_VARIABLE_Specs_233_233;
  MR_Word STATE_VARIABLE_ModuleInfo_235_235;
  MR_Word STATE_VARIABLE_Specs_236_236;
  MR_Word STATE_VARIABLE_ModuleInfo_238_238;
  MR_Word STATE_VARIABLE_Specs_239_239;
  MR_Word STATE_VARIABLE_Specs_242_242;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_175_175;
  MR_Word Var_489;
  MR_Box conv13_STATE_VARIABLE_ModuleInfo_225_225;
  MR_Box conv12_STATE_VARIABLE_Specs_226_226;
  MR_Box conv15_STATE_VARIABLE_ModuleInfo_228_228;
  MR_Box conv17_STATE_VARIABLE_ModuleInfo_230_230;
  MR_Box conv21_STATE_VARIABLE_ModuleInfo_232_232;
  MR_Box conv20_STATE_VARIABLE_Specs_233_233;
  MR_Box conv25_STATE_VARIABLE_ModuleInfo_235_235;
  MR_Box conv24_STATE_VARIABLE_Specs_236_236;
  MR_Box conv29_STATE_VARIABLE_ModuleInfo_238_238;
  MR_Box conv28_STATE_VARIABLE_Specs_239_239;
  MR_Box conv33_STATE_VARIABLE_ModuleInfo_112;
  MR_Box conv32_STATE_VARIABLE_Specs_242_242;
  MR_Box conv35_STATE_VARIABLE_QualInfo_109;

  parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0(Globals_13, AugCompUnit_12, &ImplicitlyUsedModules_26);
  parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(MQInfo0_15, &PQInfo_27);
  TypeSpecs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 17))));
  InstModeSpecs_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 18))));
  STATE_VARIABLE_Specs_119_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TypeSpecs_32, InstModeSpecs_33);
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[1]), TypeSpecs_32, &InvalidTypeSpecs_38);
  mercury__list__filter_3_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[2]), InstModeSpecs_33, &InvalidInstModeSpecs_39);
  TypeErrors_40 = parse_tree__error_util__contains_errors_2_f_0(Globals_13, InvalidTypeSpecs_38);
  InstModeErrors_41 = parse_tree__error_util__contains_errors_2_f_0(Globals_13, InvalidInstModeSpecs_39);
  switch (TypeErrors_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_FoundInvalidType_123_123 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_FoundInvalidType_123_123 = (MR_Integer) 1;
      break;
  }
  switch (InstModeErrors_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_FoundInvalidInstOrMode_125_125 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_FoundInvalidInstOrMode_125_125 = (MR_Integer) 1;
      break;
  }
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_33_p_0(AugCompUnit_12, &InclMap_42, &Avails_43, &FIMs_44, &TypeDefnsAbstract_45, &TypeDefnsMercury_46, &TypeDefnsForeign_47, &InstDefns_48, &ModeDefns_49, &PredDecls_50, &ModeDecls_51, &Promises_52, &Typeclasses_53, &Instances_54, &Initialises_55, &Finalises_56, &Mutables_57, &TypeRepnMap_58, &ForeignEnums_59, &ForeignExportEnums_60, &PragmasDecl_61, &PragmasDeclTypeSpec_62, &PragmasDeclTermInfo_63, &PragmasDeclTerm2Info_64, &PragmasDeclSharing_65, &PragmasDeclReuse_66, &PragmasImpl_67, &PragmasGenUnusedArgs_68, &PragmasGenExceptions_69, &PragmasGenTrailing_70, &PragmasGenMMTabling_71, &Clauses_72, &IntBadClauses_73);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[0]), &DirectArgMap_74);
  {
    TypeRepnDec_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeRepnDec_75, 0) = ((MR_Box) (TypeRepnMap_58));
    MR_hl_field(MR_mktag(0), TypeRepnDec_75, 1) = ((MR_Box) (DirectArgMap_74));
    MR_hl_field(MR_mktag(0), TypeRepnDec_75, 2) = ((MR_Box) (ForeignEnums_59));
    MR_hl_field(MR_mktag(0), TypeRepnDec_75, 3) = ((MR_Box) (ForeignExportEnums_60));
  }
  hlds__hlds_module__module_info_init_11_p_0(Globals_13, ModuleName_24, ModuleNameContext_25, DumpBaseFileName_14, InclMap_42, UsedModules_17, ImplicitlyUsedModules_26, PQInfo_27, (MR_Word) ((MR_Unsigned) 0U), TypeRepnDec_75, &STATE_VARIABLE_ModuleInfo_127_127);
  Var_128 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  hlds__make_hlds__make_hlds_passes__add_item_avails_5_p_0(Avails_43, Var_128, &AncestorAvailModules_76, STATE_VARIABLE_ModuleInfo_127_127, &STATE_VARIABLE_ModuleInfo_129_129);
  hlds__hlds_module__module_info_get_ancestor_avail_modules_2_p_0(STATE_VARIABLE_ModuleInfo_129_129, &AncestorAvailSet0_77);
  mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AncestorAvailModules_76, AncestorAvailSet0_77, &AncestorAvailSet_78);
  hlds__hlds_module__module_info_set_ancestor_avail_modules_3_p_0(AncestorAvailSet_78, STATE_VARIABLE_ModuleInfo_129_129, &STATE_VARIABLE_ModuleInfo_130_130);
  hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0(TypeDefnsAbstract_45, STATE_VARIABLE_ModuleInfo_130_130, &STATE_VARIABLE_ModuleInfo_134_134, STATE_VARIABLE_FoundInvalidType_123_123, &STATE_VARIABLE_FoundInvalidType_135_135, STATE_VARIABLE_Specs_119_119, &STATE_VARIABLE_Specs_136_136, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevSolverPredDecls_137_137, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevSolverForeignProcs_138_138, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevSolverMutables_139_139);
  hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0(TypeDefnsMercury_46, STATE_VARIABLE_ModuleInfo_134_134, &STATE_VARIABLE_ModuleInfo_140_140, STATE_VARIABLE_FoundInvalidType_135_135, &STATE_VARIABLE_FoundInvalidType_141_141, STATE_VARIABLE_Specs_136_136, &STATE_VARIABLE_Specs_142_142, STATE_VARIABLE_RevSolverPredDecls_137_137, &STATE_VARIABLE_RevSolverPredDecls_143_143, STATE_VARIABLE_RevSolverForeignProcs_138_138, &STATE_VARIABLE_RevSolverForeignProcs_144_144, STATE_VARIABLE_RevSolverMutables_139_139, &STATE_VARIABLE_RevSolverMutables_145_145);
  hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0(TypeDefnsForeign_47, STATE_VARIABLE_ModuleInfo_140_140, &STATE_VARIABLE_ModuleInfo_146_146, STATE_VARIABLE_FoundInvalidType_141_141, &STATE_VARIABLE_FoundInvalidType_147_147, STATE_VARIABLE_Specs_142_142, &STATE_VARIABLE_Specs_148_148, STATE_VARIABLE_RevSolverPredDecls_143_143, &STATE_VARIABLE_RevSolverPredDecls_149_149, STATE_VARIABLE_RevSolverForeignProcs_144_144, &STATE_VARIABLE_RevSolverForeignProcs_150_150, STATE_VARIABLE_RevSolverMutables_145_145, &STATE_VARIABLE_RevSolverMutables_151_151);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[1]), STATE_VARIABLE_RevSolverPredDecls_149_149, &SolverPredDecls_82);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]), STATE_VARIABLE_RevSolverForeignProcs_150_150, &SolverForeignProcs_83);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), STATE_VARIABLE_RevSolverMutables_151_151, &SolverMutables_84);
  hlds__make_hlds__make_hlds_passes__add_inst_defns_5_p_0(InstDefns_48, STATE_VARIABLE_ModuleInfo_146_146, &STATE_VARIABLE_ModuleInfo_152_152, STATE_VARIABLE_Specs_148_148, &STATE_VARIABLE_Specs_153_153);
  hlds__make_hlds__add_mode__check_inst_defns_6_p_0(STATE_VARIABLE_ModuleInfo_152_152, InstDefns_48, STATE_VARIABLE_FoundInvalidInstOrMode_125_125, &STATE_VARIABLE_FoundInvalidInstOrMode_154_154, STATE_VARIABLE_Specs_153_153, &STATE_VARIABLE_Specs_155_155);
  hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0(ModeDefns_49, STATE_VARIABLE_ModuleInfo_152_152, &STATE_VARIABLE_ModuleInfo_156_156, STATE_VARIABLE_Specs_155_155, &STATE_VARIABLE_Specs_157_157);
  hlds__make_hlds__add_mode__check_mode_defns_6_p_0(STATE_VARIABLE_ModuleInfo_156_156, ModeDefns_49, STATE_VARIABLE_FoundInvalidInstOrMode_154_154, &STATE_VARIABLE_FoundInvalidInstOrMode_158_158, STATE_VARIABLE_Specs_157_157, &STATE_VARIABLE_Specs_159_159);
  hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(PredDecls_50, STATE_VARIABLE_ModuleInfo_156_156, &STATE_VARIABLE_ModuleInfo_160_160, STATE_VARIABLE_Specs_159_159, &STATE_VARIABLE_Specs_161_161);
  hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(SolverPredDecls_82, STATE_VARIABLE_ModuleInfo_160_160, &STATE_VARIABLE_ModuleInfo_162_162, STATE_VARIABLE_Specs_161_161, &STATE_VARIABLE_Specs_163_163);
  hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0(ModeDecls_51, STATE_VARIABLE_ModuleInfo_162_162, &STATE_VARIABLE_ModuleInfo_164_164, STATE_VARIABLE_Specs_163_163, &STATE_VARIABLE_Specs_165_165);
  AllMutables_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), Mutables_57, SolverMutables_84);
  hlds__hlds_module__module_info_get_user_init_pred_target_names_2_p_0(STATE_VARIABLE_ModuleInfo_164_164, &InitPredTargetNames0_86);
  hlds__make_hlds__add_mutable_aux_preds__implement_mutables_if_local_12_p_0(STATE_VARIABLE_ModuleInfo_164_164, AllMutables_85, &MutablePredDecls_87, &MutableClauses_88, &MutableForeignProcs_89, &MutableForeignDeclCodes_90, &MutableForeignBodyCodes_91, &RevPragmaFPEInfos1_92, InitPredTargetNames0_86, &InitPredTargetNames1_93, STATE_VARIABLE_Specs_165_165, &STATE_VARIABLE_Specs_166_166);
  hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(MutablePredDecls_87, STATE_VARIABLE_ModuleInfo_164_164, &STATE_VARIABLE_ModuleInfo_167_167, STATE_VARIABLE_Specs_166_166, &STATE_VARIABLE_Specs_168_168);
  hlds__make_hlds__add_class__add_typeclass_defns_5_p_0(Typeclasses_53, STATE_VARIABLE_ModuleInfo_167_167, &STATE_VARIABLE_ModuleInfo_169_169, STATE_VARIABLE_Specs_168_168, &STATE_VARIABLE_Specs_170_170);
  hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0(PredDecls_50, STATE_VARIABLE_ModuleInfo_169_169, &STATE_VARIABLE_ModuleInfo_171_171);
  hlds__make_hlds__add_class__add_instance_defns_5_p_0(Instances_54, STATE_VARIABLE_ModuleInfo_171_171, &STATE_VARIABLE_ModuleInfo_172_172, STATE_VARIABLE_Specs_170_170, &STATE_VARIABLE_Specs_173_173);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[3]), FIMs_44, ((MR_Box) (STATE_VARIABLE_ModuleInfo_172_172)), &conv1_STATE_VARIABLE_ModuleInfo_175_175);
  STATE_VARIABLE_ModuleInfo_175_175 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_175_175));
  switch (STATE_VARIABLE_FoundInvalidType_147_147) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeTable0_94;
        MR_Word Var_176;
        MR_Box conv7_STATE_VARIABLE_FoundInvalidType_177_177;
        MR_Box conv6_STATE_VARIABLE_ModuleInfo_178_178;
        MR_Box conv5_STATE_VARIABLE_Specs_179_179;

        hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_175_175, &TypeTable0_94);
        {
          Var_176 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_176, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), Var_176, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__parse_tree_to_hlds_11_p_0_4));
          MR_hl_field(MR_mktag(0), Var_176, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_176, 3) = ((MR_Box) (TypeTable0_94));
        }
        hlds__hlds_data__foldl3_over_type_ctor_defns_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_176, TypeTable0_94, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_147_147)), &conv7_STATE_VARIABLE_FoundInvalidType_177_177, ((MR_Box) (STATE_VARIABLE_ModuleInfo_175_175)), &conv6_STATE_VARIABLE_ModuleInfo_178_178, ((MR_Box) (STATE_VARIABLE_Specs_173_173)), &conv5_STATE_VARIABLE_Specs_179_179);
        STATE_VARIABLE_FoundInvalidType_177_177 = ((MR_Word) (conv7_STATE_VARIABLE_FoundInvalidType_177_177));
        STATE_VARIABLE_ModuleInfo_178_178 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_178_178));
        STATE_VARIABLE_Specs_179_179 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_179_179));
      }
      break;
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_FoundInvalidType_177_177 = STATE_VARIABLE_FoundInvalidType_147_147;
        STATE_VARIABLE_ModuleInfo_178_178 = STATE_VARIABLE_ModuleInfo_175_175;
        STATE_VARIABLE_Specs_179_179 = STATE_VARIABLE_Specs_173_173;
      }
      break;
  }
  Var_489 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_24, Var_489);
  if (succeeded)
    succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(STATE_VARIABLE_ModuleInfo_178_178);
  if (succeeded)
  {
    MR_Word Var_181;
    MR_Box conv9_STATE_VARIABLE_ModuleInfo_182_182;

    Var_181 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[4]), Var_181, ((MR_Box) (STATE_VARIABLE_ModuleInfo_178_178)), &conv9_STATE_VARIABLE_ModuleInfo_182_182);
    STATE_VARIABLE_ModuleInfo_182_182 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_182_182));
  }
  else
    STATE_VARIABLE_ModuleInfo_182_182 = STATE_VARIABLE_ModuleInfo_178_178;
  hlds__hlds_module__module_info_optimize_2_p_0(STATE_VARIABLE_ModuleInfo_182_182, &STATE_VARIABLE_ModuleInfo_183_183);
  hlds__make_hlds__qual_info__init_qual_info_3_p_0(MQInfo0_15, TypeEqvMap_16, &STATE_VARIABLE_QualInfo_184_184);
  hlds__make_hlds__make_hlds_passes__add_clauses_7_p_0(Clauses_72, STATE_VARIABLE_ModuleInfo_183_183, &STATE_VARIABLE_ModuleInfo_185_185, STATE_VARIABLE_QualInfo_184_184, &STATE_VARIABLE_QualInfo_186_186, STATE_VARIABLE_Specs_179_179, &STATE_VARIABLE_Specs_187_187);
  hlds__make_hlds__make_hlds_passes__add_clauses_7_p_0(MutableClauses_88, STATE_VARIABLE_ModuleInfo_185_185, &STATE_VARIABLE_ModuleInfo_188_188, STATE_VARIABLE_QualInfo_186_186, &STATE_VARIABLE_QualInfo_189_189, STATE_VARIABLE_Specs_187_187, &STATE_VARIABLE_Specs_190_190);
  hlds__make_hlds__make_hlds_passes__add_promises_7_p_0(Promises_52, STATE_VARIABLE_ModuleInfo_188_188, &STATE_VARIABLE_ModuleInfo_191_191, STATE_VARIABLE_QualInfo_189_189, &STATE_VARIABLE_QualInfo_192_192, STATE_VARIABLE_Specs_190_190, &STATE_VARIABLE_Specs_193_193);
  hlds__hlds_module__module_info_set_int_bad_clauses_3_p_0(IntBadClauses_73, STATE_VARIABLE_ModuleInfo_191_191, &STATE_VARIABLE_ModuleInfo_194_194);
  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_procs_5_p_0(SolverForeignProcs_83, STATE_VARIABLE_ModuleInfo_194_194, &STATE_VARIABLE_ModuleInfo_195_195, STATE_VARIABLE_Specs_193_193, &STATE_VARIABLE_Specs_196_196);
  hlds__make_hlds__add_foreign_proc__add_pragma_foreign_procs_5_p_0(MutableForeignProcs_89, STATE_VARIABLE_ModuleInfo_195_195, &STATE_VARIABLE_ModuleInfo_197_197, STATE_VARIABLE_Specs_196_196, &STATE_VARIABLE_Specs_198_198);
  hlds__hlds_module__module_info_get_user_final_pred_target_names_2_p_0(STATE_VARIABLE_ModuleInfo_197_197, &FinalPredTargetNames1_95);
  hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0(STATE_VARIABLE_ModuleInfo_197_197, Initialises_55, RevPragmaFPEInfos1_92, &RevPragmaFPEInfos2_96, InitPredTargetNames1_93, &InitPredTargetNames_97, STATE_VARIABLE_Specs_198_198, &STATE_VARIABLE_Specs_199_199);
  hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0(STATE_VARIABLE_ModuleInfo_197_197, Finalises_56, RevPragmaFPEInfos2_96, &RevPragmaFPEInfos_98, FinalPredTargetNames1_95, &FinalPredTargetNames_99, STATE_VARIABLE_Specs_199_199, &STATE_VARIABLE_Specs_200_200);
  hlds__hlds_module__module_info_set_user_init_pred_target_names_3_p_0(InitPredTargetNames_97, STATE_VARIABLE_ModuleInfo_197_197, &STATE_VARIABLE_ModuleInfo_201_201);
  hlds__hlds_module__module_info_set_user_final_pred_target_names_3_p_0(FinalPredTargetNames_99, STATE_VARIABLE_ModuleInfo_201_201, &STATE_VARIABLE_ModuleInfo_202_202);
  hlds__make_hlds__add_pragma__add_decl_pragmas_7_p_0(PragmasDecl_61, STATE_VARIABLE_ModuleInfo_202_202, &STATE_VARIABLE_ModuleInfo_203_203, STATE_VARIABLE_QualInfo_192_192, &STATE_VARIABLE_QualInfo_204_204, STATE_VARIABLE_Specs_200_200, &STATE_VARIABLE_Specs_205_205);
  hlds__make_hlds__add_pragma__add_decl_pragmas_type_spec_7_p_0(PragmasDeclTypeSpec_62, STATE_VARIABLE_ModuleInfo_203_203, &STATE_VARIABLE_ModuleInfo_206_206, STATE_VARIABLE_QualInfo_204_204, &STATE_VARIABLE_QualInfo_207_207, STATE_VARIABLE_Specs_205_205, &STATE_VARIABLE_Specs_208_208);
  hlds__make_hlds__add_pragma__add_decl_pragmas_term_info_5_p_0(PragmasDeclTermInfo_63, STATE_VARIABLE_ModuleInfo_206_206, &STATE_VARIABLE_ModuleInfo_209_209, STATE_VARIABLE_Specs_208_208, &STATE_VARIABLE_Specs_210_210);
  hlds__make_hlds__add_pragma__add_decl_pragmas_term2_info_5_p_0(PragmasDeclTerm2Info_64, STATE_VARIABLE_ModuleInfo_209_209, &STATE_VARIABLE_ModuleInfo_211_211, STATE_VARIABLE_Specs_210_210, &STATE_VARIABLE_Specs_212_212);
  hlds__make_hlds__add_pragma__add_decl_pragmas_sharing_5_p_0(PragmasDeclSharing_65, STATE_VARIABLE_ModuleInfo_211_211, &STATE_VARIABLE_ModuleInfo_213_213, STATE_VARIABLE_Specs_212_212, &STATE_VARIABLE_Specs_214_214);
  hlds__make_hlds__add_pragma__add_decl_pragmas_reuse_5_p_0(PragmasDeclReuse_66, STATE_VARIABLE_ModuleInfo_213_213, &STATE_VARIABLE_ModuleInfo_215_215, STATE_VARIABLE_Specs_214_214, &STATE_VARIABLE_Specs_216_216);
  hlds__make_hlds__add_pragma__add_impl_pragmas_9_p_0(PragmasImpl_67, (MR_Word) ((MR_Unsigned) 0U), &RevPragmasTabled_100, STATE_VARIABLE_ModuleInfo_215_215, &STATE_VARIABLE_ModuleInfo_218_218, STATE_VARIABLE_QualInfo_207_207, &STATE_VARIABLE_QualInfo_219_219, STATE_VARIABLE_Specs_216_216, &STATE_VARIABLE_Specs_220_220);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]), RevPragmasTabled_100, &PragmasTabled_101);
  hlds__make_hlds__add_pragma__add_impl_pragmas_tabled_7_p_0(PragmasTabled_101, STATE_VARIABLE_ModuleInfo_218_218, &STATE_VARIABLE_ModuleInfo_221_221, STATE_VARIABLE_QualInfo_219_219, &STATE_VARIABLE_QualInfo_222_222, STATE_VARIABLE_Specs_220_220, &STATE_VARIABLE_Specs_223_223);
  mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]), RevPragmaFPEInfos_98, &PragmaFPEInfos_102);
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[5]), PragmaFPEInfos_102, ((MR_Box) (STATE_VARIABLE_ModuleInfo_221_221)), &conv13_STATE_VARIABLE_ModuleInfo_225_225, ((MR_Box) (STATE_VARIABLE_Specs_223_223)), &conv12_STATE_VARIABLE_Specs_226_226);
  STATE_VARIABLE_ModuleInfo_225_225 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_225_225));
  STATE_VARIABLE_Specs_226_226 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_226_226));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[6]), MutableForeignDeclCodes_90, ((MR_Box) (STATE_VARIABLE_ModuleInfo_225_225)), &conv15_STATE_VARIABLE_ModuleInfo_228_228);
  STATE_VARIABLE_ModuleInfo_228_228 = ((MR_Word) (conv15_STATE_VARIABLE_ModuleInfo_228_228));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[7]), MutableForeignBodyCodes_91, ((MR_Box) (STATE_VARIABLE_ModuleInfo_228_228)), &conv17_STATE_VARIABLE_ModuleInfo_230_230);
  STATE_VARIABLE_ModuleInfo_230_230 = ((MR_Word) (conv17_STATE_VARIABLE_ModuleInfo_230_230));
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[9]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[8]), PragmasGenUnusedArgs_68, ((MR_Box) (STATE_VARIABLE_ModuleInfo_230_230)), &conv21_STATE_VARIABLE_ModuleInfo_232_232, ((MR_Box) (STATE_VARIABLE_Specs_226_226)), &conv20_STATE_VARIABLE_Specs_233_233);
  STATE_VARIABLE_ModuleInfo_232_232 = ((MR_Word) (conv21_STATE_VARIABLE_ModuleInfo_232_232));
  STATE_VARIABLE_Specs_233_233 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_233_233));
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[10]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[9]), PragmasGenExceptions_69, ((MR_Box) (STATE_VARIABLE_ModuleInfo_232_232)), &conv25_STATE_VARIABLE_ModuleInfo_235_235, ((MR_Box) (STATE_VARIABLE_Specs_233_233)), &conv24_STATE_VARIABLE_Specs_236_236);
  STATE_VARIABLE_ModuleInfo_235_235 = ((MR_Word) (conv25_STATE_VARIABLE_ModuleInfo_235_235));
  STATE_VARIABLE_Specs_236_236 = ((MR_Word) (conv24_STATE_VARIABLE_Specs_236_236));
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[11]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[10]), PragmasGenTrailing_70, ((MR_Box) (STATE_VARIABLE_ModuleInfo_235_235)), &conv29_STATE_VARIABLE_ModuleInfo_238_238, ((MR_Box) (STATE_VARIABLE_Specs_236_236)), &conv28_STATE_VARIABLE_Specs_239_239);
  STATE_VARIABLE_ModuleInfo_238_238 = ((MR_Word) (conv29_STATE_VARIABLE_ModuleInfo_238_238));
  STATE_VARIABLE_Specs_239_239 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_239_239));
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[12]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[11]), PragmasGenMMTabling_71, ((MR_Box) (STATE_VARIABLE_ModuleInfo_238_238)), &conv33_STATE_VARIABLE_ModuleInfo_112, ((MR_Box) (STATE_VARIABLE_Specs_239_239)), &conv32_STATE_VARIABLE_Specs_242_242);
  *STATE_VARIABLE_ModuleInfo_112 = ((MR_Word) (conv33_STATE_VARIABLE_ModuleInfo_112));
  STATE_VARIABLE_Specs_242_242 = ((MR_Word) (conv32_STATE_VARIABLE_Specs_242_242));
  hlds__add_pred__check_preds_if_field_access_function_4_p_0(*STATE_VARIABLE_ModuleInfo_112, PredDecls_50, STATE_VARIABLE_Specs_242_242, STATE_VARIABLE_Specs_113);
  ModuleItemVersionNumbers_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 8))));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[12]), ModuleItemVersionNumbers_103, ((MR_Box) (STATE_VARIABLE_QualInfo_222_222)), &conv35_STATE_VARIABLE_QualInfo_109);
  *STATE_VARIABLE_QualInfo_109 = ((MR_Word) (conv35_STATE_VARIABLE_QualInfo_109));
  hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(*STATE_VARIABLE_QualInfo_109, &MQInfo_104);
  parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(MQInfo_104, &MQUndefType_105);
  parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(MQInfo_104, &MQUndefInst_106);
  parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(MQInfo_104, &MQUndefMode_107);
  parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(MQInfo_104, &MQUndefTypeClass_108);
  succeeded = (MQUndefType_105 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (MQUndefTypeClass_108 == (MR_Integer) 1);
  if (succeeded)
    *STATE_VARIABLE_FoundInvalidType_110 = (MR_Integer) 1;
  else
    *STATE_VARIABLE_FoundInvalidType_110 = STATE_VARIABLE_FoundInvalidType_177_177;
  succeeded = (MQUndefInst_106 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (MQUndefMode_107 == (MR_Integer) 1);
  if (succeeded)
    *STATE_VARIABLE_FoundInvalidInstOrMode_111 = (MR_Integer) 1;
  else
    *STATE_VARIABLE_FoundInvalidInstOrMode_111 = STATE_VARIABLE_FoundInvalidInstOrMode_158_158;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_RevPragmaFPEInfos_25;
  MR_Word conv1_STATE_VARIABLE_PredTargetNames_27;
  MR_Word conv0_STATE_VARIABLE_Specs_29;

  hlds__make_hlds__make_hlds_passes__add_finalise_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_RevPragmaFPEInfos_25, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_PredTargetNames_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_RevPragmaFPEInfos_25));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_PredTargetNames_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_29));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevPragmaFPEInfos_0_3,
  MR_Word * STATE_VARIABLE_RevPragmaFPEInfos_4,
  MR_Word STATE_VARIABLE_PredTargetNames_0_5,
  MR_Word * STATE_VARIABLE_PredTargetNames_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_PredTargetNames_6 = STATE_VARIABLE_PredTargetNames_0_5;
      *STATE_VARIABLE_RevPragmaFPEInfos_4 = STATE_VARIABLE_RevPragmaFPEInfos_0_3;
    }
    else
    {
      MR_Word ImsList_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ImsLists_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_20, (MR_Integer) 0))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_20, (MR_Integer) 1))));
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_RevPragmaFPEInfos_34_34;
      MR_Word STATE_VARIABLE_PredTargetNames_35_35;
      MR_Word STATE_VARIABLE_Specs_36_36;
      MR_Box conv5_STATE_VARIABLE_RevPragmaFPEInfos_34_34;
      MR_Box conv4_STATE_VARIABLE_PredTargetNames_35_35;
      MR_Box conv3_STATE_VARIABLE_Specs_36_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevPragmaFPEInfos_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredTargetNames_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[22]), (MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_33, Items_26, ((MR_Box) (STATE_VARIABLE_RevPragmaFPEInfos_0_3)), &conv5_STATE_VARIABLE_RevPragmaFPEInfos_34_34, ((MR_Box) (STATE_VARIABLE_PredTargetNames_0_5)), &conv4_STATE_VARIABLE_PredTargetNames_35_35, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_36_36);
      STATE_VARIABLE_RevPragmaFPEInfos_34_34 = ((MR_Word) (conv5_STATE_VARIABLE_RevPragmaFPEInfos_34_34));
      STATE_VARIABLE_PredTargetNames_35_35 = ((MR_Word) (conv4_STATE_VARIABLE_PredTargetNames_35_35));
      STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_36_36));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_21;
      next_value_of_STATE_VARIABLE_RevPragmaFPEInfos_0_3 = STATE_VARIABLE_RevPragmaFPEInfos_34_34;
      next_value_of_STATE_VARIABLE_PredTargetNames_0_5 = STATE_VARIABLE_PredTargetNames_35_35;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_36_36;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevPragmaFPEInfos_0_3 = next_value_of_STATE_VARIABLE_RevPragmaFPEInfos_0_3;
      STATE_VARIABLE_PredTargetNames_0_5 = next_value_of_STATE_VARIABLE_PredTargetNames_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_RevPragmaFPEInfos_25;
  MR_Word conv1_STATE_VARIABLE_PredTargetNames_27;
  MR_Word conv0_STATE_VARIABLE_Specs_29;

  hlds__make_hlds__make_hlds_passes__add_initialise_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_RevPragmaFPEInfos_25, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_PredTargetNames_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_RevPragmaFPEInfos_25));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_PredTargetNames_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_29));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevPragmaFPEInfos_0_3,
  MR_Word * STATE_VARIABLE_RevPragmaFPEInfos_4,
  MR_Word STATE_VARIABLE_PredTargetNames_0_5,
  MR_Word * STATE_VARIABLE_PredTargetNames_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_PredTargetNames_6 = STATE_VARIABLE_PredTargetNames_0_5;
      *STATE_VARIABLE_RevPragmaFPEInfos_4 = STATE_VARIABLE_RevPragmaFPEInfos_0_3;
    }
    else
    {
      MR_Word ImsList_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ImsLists_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_20, (MR_Integer) 0))));
      MR_Word Items_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_20, (MR_Integer) 1))));
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_RevPragmaFPEInfos_34_34;
      MR_Word STATE_VARIABLE_PredTargetNames_35_35;
      MR_Word STATE_VARIABLE_Specs_36_36;
      MR_Box conv5_STATE_VARIABLE_RevPragmaFPEInfos_34_34;
      MR_Box conv4_STATE_VARIABLE_PredTargetNames_35_35;
      MR_Box conv3_STATE_VARIABLE_Specs_36_36;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevPragmaFPEInfos_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredTargetNames_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[22]), (MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_33, Items_26, ((MR_Box) (STATE_VARIABLE_RevPragmaFPEInfos_0_3)), &conv5_STATE_VARIABLE_RevPragmaFPEInfos_34_34, ((MR_Box) (STATE_VARIABLE_PredTargetNames_0_5)), &conv4_STATE_VARIABLE_PredTargetNames_35_35, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_36_36);
      STATE_VARIABLE_RevPragmaFPEInfos_34_34 = ((MR_Word) (conv5_STATE_VARIABLE_RevPragmaFPEInfos_34_34));
      STATE_VARIABLE_PredTargetNames_35_35 = ((MR_Word) (conv4_STATE_VARIABLE_PredTargetNames_35_35));
      STATE_VARIABLE_Specs_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_36_36));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsLists_21;
      next_value_of_STATE_VARIABLE_RevPragmaFPEInfos_0_3 = STATE_VARIABLE_RevPragmaFPEInfos_34_34;
      next_value_of_STATE_VARIABLE_PredTargetNames_0_5 = STATE_VARIABLE_PredTargetNames_35_35;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_36_36;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevPragmaFPEInfos_0_3 = next_value_of_STATE_VARIABLE_RevPragmaFPEInfos_0_3;
      STATE_VARIABLE_PredTargetNames_0_5 = next_value_of_STATE_VARIABLE_PredTargetNames_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promises_7_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_36;
  MR_Word conv1_STATE_VARIABLE_QualInfo_38;
  MR_Word conv0_STATE_VARIABLE_Specs_40;

  hlds__make_hlds__make_hlds_passes__add_promise_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_36, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_38, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_40);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_36));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_38));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_40));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promises_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_QualInfo_0_4,
  MR_Word * STATE_VARIABLE_QualInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_QualInfo_5 = STATE_VARIABLE_QualInfo_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsList_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImsLists_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_17, (MR_Integer) 0))));
      MR_Word Items_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_17, (MR_Integer) 1))));
      MR_Word PredStatus_24;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_ModuleInfo_32_32;
      MR_Word STATE_VARIABLE_QualInfo_33_33;
      MR_Word STATE_VARIABLE_Specs_34_34;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_32_32;
      MR_Box conv4_STATE_VARIABLE_QualInfo_33_33;
      MR_Box conv3_STATE_VARIABLE_Specs_34_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_22, &PredStatus_24);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_promises_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (PredStatus_24));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_31, Items_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv5_STATE_VARIABLE_ModuleInfo_32_32, ((MR_Box) (STATE_VARIABLE_QualInfo_0_4)), &conv4_STATE_VARIABLE_QualInfo_33_33, ((MR_Box) (STATE_VARIABLE_Specs_0_6)), &conv3_STATE_VARIABLE_Specs_34_34);
      STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_32_32));
      STATE_VARIABLE_QualInfo_33_33 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_33_33));
      STATE_VARIABLE_Specs_34_34 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_34_34));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_18;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_32_32;
      next_value_of_STATE_VARIABLE_QualInfo_0_4 = STATE_VARIABLE_QualInfo_33_33;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_QualInfo_0_4 = next_value_of_STATE_VARIABLE_QualInfo_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clauses_7_p_0_1(
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
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__7_7;
  MR_Word conv0_HeadVar__9_9;

  hlds__make_hlds__add_clause__module_add_clause_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_4)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__9_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__7_7));
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__9_9));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clauses_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_QualInfo_0_4,
  MR_Word * STATE_VARIABLE_QualInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_QualInfo_5 = STATE_VARIABLE_QualInfo_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsList_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImsLists_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_17, (MR_Integer) 0))));
      MR_Word Items_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_17, (MR_Integer) 1))));
      MR_Word PredStatus_25;
      MR_Word Var_32;
      MR_Word STATE_VARIABLE_ModuleInfo_33_33;
      MR_Word STATE_VARIABLE_QualInfo_34_34;
      MR_Word STATE_VARIABLE_Specs_35_35;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_33_33;
      MR_Box conv4_STATE_VARIABLE_QualInfo_34_34;
      MR_Box conv3_STATE_VARIABLE_Specs_35_35;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_QualInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_22, &PredStatus_25);
      {
        Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_clauses_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (PredStatus_25));
        MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_32, Items_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv5_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (STATE_VARIABLE_QualInfo_0_4)), &conv4_STATE_VARIABLE_QualInfo_34_34, ((MR_Box) (STATE_VARIABLE_Specs_0_6)), &conv3_STATE_VARIABLE_Specs_35_35);
      STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_33_33));
      STATE_VARIABLE_QualInfo_34_34 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_34_34));
      STATE_VARIABLE_Specs_35_35 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_35_35));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_18;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_33_33;
      next_value_of_STATE_VARIABLE_QualInfo_0_4 = STATE_VARIABLE_QualInfo_34_34;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_35_35;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_QualInfo_0_4 = next_value_of_STATE_VARIABLE_QualInfo_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_31;

  hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_31);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_31));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    else
    {
      MR_Word SecSubList_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SecSubLists_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecSubList_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_15_15;
      MR_Box conv1_STATE_VARIABLE_ModuleInfo_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0]), Items_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv1_STATE_VARIABLE_ModuleInfo_15_15);
      STATE_VARIABLE_ModuleInfo_15_15 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_15_15));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecSubLists_8;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__6_6;
  MR_Word conv1_HeadVar__8_8;
  MR_Word conv0_HeadVar__10_10;

  hlds__add_pred__module_add_mode_decl_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__10_10);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__6_6));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__10_10));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word SecSubList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SecSubLists_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecSubList_12, (MR_Integer) 0))));
      MR_Word ModeDecls_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecSubList_12, (MR_Integer) 1))));
      MR_Word PredStatus_18;
      MR_Word Var_24;
      MR_Word STATE_VARIABLE_ModuleInfo_25_25;
      MR_Word STATE_VARIABLE_Specs_26_26;
      MR_Word _PredProcIds_19;
      MR_Box conv4_STATE_VARIABLE_ModuleInfo_25_25;
      MR_Box conv3_STATE_VARIABLE_Specs_26_26;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_16, &PredStatus_18);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (ItemMercuryStatus_16));
        MR_hl_field(MR_mktag(0), Var_24, 6) = ((MR_Box) (PredStatus_18));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_24, ModeDecls_17, &_PredProcIds_19, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv4_STATE_VARIABLE_ModuleInfo_25_25, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv3_STATE_VARIABLE_Specs_26_26);
      STATE_VARIABLE_ModuleInfo_25_25 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_25_25));
      STATE_VARIABLE_Specs_26_26 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_26_26));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_25_25;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__7_7;
  MR_Word conv0_HeadVar__9_9;

  hlds__add_pred__module_add_pred_decl_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__9_9);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__7_7));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__9_9));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word SecSubList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SecSubLists_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SectionInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecSubList_12, (MR_Integer) 0))));
      MR_Word PredDecls_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecSubList_12, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_16, (MR_Integer) 0))));
      MR_Word NeedQual_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectionInfo_16, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word PredStatus_20;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_ModuleInfo_27_27;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Word _MaybePredProcIds_21;
      MR_Box conv4_STATE_VARIABLE_ModuleInfo_27_27;
      MR_Box conv3_STATE_VARIABLE_Specs_28_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_18, &PredStatus_20);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ItemMercuryStatus_18));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (PredStatus_20));
        MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (NeedQual_19));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[20]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_26, PredDecls_17, &_MaybePredProcIds_21, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv4_STATE_VARIABLE_ModuleInfo_27_27, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv3_STATE_VARIABLE_Specs_28_28);
      STATE_VARIABLE_ModuleInfo_27_27 = ((MR_Word) (conv4_STATE_VARIABLE_ModuleInfo_27_27));
      STATE_VARIABLE_Specs_28_28 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_28_28));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_27_27;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_28_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  hlds__make_hlds__add_mode__module_add_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsSubList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImsSubLists_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_12, (MR_Integer) 0))));
      MR_Word ModeDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_12, (MR_Integer) 1))));
      MR_Word ModeStatus_18;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_ModuleInfo_24_24;
      MR_Word STATE_VARIABLE_Specs_25_25;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_24_24;
      MR_Box conv2_STATE_VARIABLE_Specs_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_mode_status_2_p_0(ItemMercuryStatus_16, &ModeStatus_18);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[2]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (ModeStatus_18));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[19]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_23, ModeDefns_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_24_24, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_25_25);
      STATE_VARIABLE_ModuleInfo_24_24 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_24_24));
      STATE_VARIABLE_Specs_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_25_25));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_24_24;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defns_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  hlds__make_hlds__add_mode__module_add_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defns_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word ImsSubList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImsSubLists_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_12, (MR_Integer) 0))));
      MR_Word InstDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsSubList_12, (MR_Integer) 1))));
      MR_Word InstStatus_18;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_ModuleInfo_24_24;
      MR_Word STATE_VARIABLE_Specs_25_25;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_24_24;
      MR_Box conv2_STATE_VARIABLE_Specs_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__status__item_mercury_status_to_inst_status_2_p_0(ItemMercuryStatus_16, &InstStatus_18);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_inst_defns_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (InstStatus_18));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[18]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_23, InstDefns_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_24_24, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_25_25);
      STATE_VARIABLE_ModuleInfo_24_24 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_24_24));
      STATE_VARIABLE_Specs_25_25 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_25_25));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsSubLists_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_24_24;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0_1(
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
  MR_Box * wrapper_arg_11,
  MR_Box wrapper_arg_12,
  MR_Box * wrapper_arg_13)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_ModuleInfo_53;
  MR_Word conv4_STATE_VARIABLE_FoundInvalidType_55;
  MR_Word conv3_STATE_VARIABLE_Specs_57;
  MR_Word conv2_STATE_VARIABLE_RevPredDecls_59;
  MR_Word conv1_STATE_VARIABLE_RevForeignProcs_61;
  MR_Word conv0_STATE_VARIABLE_RevMutables_63;

  hlds__make_hlds__make_hlds_passes__add_type_defn_15_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_ModuleInfo_53, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_FoundInvalidType_55, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_Specs_57, ((MR_Word) (wrapper_arg_8)), &conv2_STATE_VARIABLE_RevPredDecls_59, ((MR_Word) (wrapper_arg_10)), &conv1_STATE_VARIABLE_RevForeignProcs_61, ((MR_Word) (wrapper_arg_12)), &conv0_STATE_VARIABLE_RevMutables_63);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_ModuleInfo_53));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_FoundInvalidType_55));
  *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_57));
  *wrapper_arg_9 = ((MR_Box) (conv2_STATE_VARIABLE_RevPredDecls_59));
  *wrapper_arg_11 = ((MR_Box) (conv1_STATE_VARIABLE_RevForeignProcs_61));
  *wrapper_arg_13 = ((MR_Box) (conv0_STATE_VARIABLE_RevMutables_63));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_4,
  MR_Word * STATE_VARIABLE_FoundInvalidType_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7,
  MR_Word STATE_VARIABLE_RevPredDecls_0_8,
  MR_Word * STATE_VARIABLE_RevPredDecls_9,
  MR_Word STATE_VARIABLE_RevForeignProcs_0_10,
  MR_Word * STATE_VARIABLE_RevForeignProcs_11,
  MR_Word STATE_VARIABLE_RevMutables_0_12,
  MR_Word * STATE_VARIABLE_RevMutables_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RevMutables_13 = STATE_VARIABLE_RevMutables_0_12;
      *STATE_VARIABLE_RevForeignProcs_11 = STATE_VARIABLE_RevForeignProcs_0_10;
      *STATE_VARIABLE_RevPredDecls_9 = STATE_VARIABLE_RevPredDecls_0_8;
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_FoundInvalidType_5 = STATE_VARIABLE_FoundInvalidType_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word SecList_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SecLists_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SectionInfo_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecList_32, (MR_Integer) 0))));
      MR_Word TypeDefns_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecList_32, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_40, (MR_Integer) 0))));
      MR_Word TypeStatus_44;
      MR_Word Var_57;
      MR_Word STATE_VARIABLE_ModuleInfo_58_58;
      MR_Word STATE_VARIABLE_FoundInvalidType_59_59;
      MR_Word STATE_VARIABLE_Specs_60_60;
      MR_Word STATE_VARIABLE_RevPredDecls_61_61;
      MR_Word STATE_VARIABLE_RevForeignProcs_62_62;
      MR_Word STATE_VARIABLE_RevMutables_63_63;
      MR_Box conv11_STATE_VARIABLE_ModuleInfo_58_58;
      MR_Box conv10_STATE_VARIABLE_FoundInvalidType_59_59;
      MR_Box conv9_STATE_VARIABLE_Specs_60_60;
      MR_Box conv8_STATE_VARIABLE_RevPredDecls_61_61;
      MR_Box conv7_STATE_VARIABLE_RevForeignProcs_62_62;
      MR_Box conv6_STATE_VARIABLE_RevMutables_63_63;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FoundInvalidType_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevPredDecls_0_8;
      MR_Word next_value_of_STATE_VARIABLE_RevForeignProcs_0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevMutables_0_12;

      hlds__status__item_mercury_status_to_type_status_2_p_0(ItemMercuryStatus_42, &TypeStatus_44);
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0_1));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (SectionInfo_40));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (TypeStatus_44));
      }
      mercury__list__foldl6_14_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[14]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[15]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[16]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[17]), Var_57, TypeDefns_41, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv11_STATE_VARIABLE_ModuleInfo_58_58, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_0_4)), &conv10_STATE_VARIABLE_FoundInvalidType_59_59, ((MR_Box) (STATE_VARIABLE_Specs_0_6)), &conv9_STATE_VARIABLE_Specs_60_60, ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_8)), &conv8_STATE_VARIABLE_RevPredDecls_61_61, ((MR_Box) (STATE_VARIABLE_RevForeignProcs_0_10)), &conv7_STATE_VARIABLE_RevForeignProcs_62_62, ((MR_Box) (STATE_VARIABLE_RevMutables_0_12)), &conv6_STATE_VARIABLE_RevMutables_63_63);
      STATE_VARIABLE_ModuleInfo_58_58 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_58_58));
      STATE_VARIABLE_FoundInvalidType_59_59 = ((MR_Word) (conv10_STATE_VARIABLE_FoundInvalidType_59_59));
      STATE_VARIABLE_Specs_60_60 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_60_60));
      STATE_VARIABLE_RevPredDecls_61_61 = ((MR_Word) (conv8_STATE_VARIABLE_RevPredDecls_61_61));
      STATE_VARIABLE_RevForeignProcs_62_62 = ((MR_Word) (conv7_STATE_VARIABLE_RevForeignProcs_62_62));
      STATE_VARIABLE_RevMutables_63_63 = ((MR_Word) (conv6_STATE_VARIABLE_RevMutables_63_63));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SecLists_33;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_58_58;
      next_value_of_STATE_VARIABLE_FoundInvalidType_0_4 = STATE_VARIABLE_FoundInvalidType_59_59;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_60_60;
      next_value_of_STATE_VARIABLE_RevPredDecls_0_8 = STATE_VARIABLE_RevPredDecls_61_61;
      next_value_of_STATE_VARIABLE_RevForeignProcs_0_10 = STATE_VARIABLE_RevForeignProcs_62_62;
      next_value_of_STATE_VARIABLE_RevMutables_0_12 = STATE_VARIABLE_RevMutables_63_63;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_FoundInvalidType_0_4 = next_value_of_STATE_VARIABLE_FoundInvalidType_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      STATE_VARIABLE_RevPredDecls_0_8 = next_value_of_STATE_VARIABLE_RevPredDecls_0_8;
      STATE_VARIABLE_RevForeignProcs_0_10 = next_value_of_STATE_VARIABLE_RevForeignProcs_0_10;
      STATE_VARIABLE_RevMutables_0_12 = next_value_of_STATE_VARIABLE_RevMutables_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avails_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_AncestorAvailModules_20;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_22;

  hlds__make_hlds__make_hlds_passes__add_item_avail_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_AncestorAvailModules_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_AncestorAvailModules_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_22));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avails_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_AncestorAvailModules_0_2,
  MR_Word * STATE_VARIABLE_AncestorAvailModules_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
      *STATE_VARIABLE_AncestorAvailModules_3 = STATE_VARIABLE_AncestorAvailModules_0_2;
    }
    else
    {
      MR_Word ImsList_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImsLists_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_12, (MR_Integer) 0))));
      MR_Word Avails_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_12, (MR_Integer) 1))));
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_AncestorAvailModules_23_23;
      MR_Word STATE_VARIABLE_ModuleInfo_24_24;
      MR_Box conv3_STATE_VARIABLE_AncestorAvailModules_23_23;
      MR_Box conv2_STATE_VARIABLE_ModuleInfo_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_AncestorAvailModules_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;

      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_item_avails_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (ItemMercuryStatus_16));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[13]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_22, Avails_17, ((MR_Box) (STATE_VARIABLE_AncestorAvailModules_0_2)), &conv3_STATE_VARIABLE_AncestorAvailModules_23_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_4)), &conv2_STATE_VARIABLE_ModuleInfo_24_24);
      STATE_VARIABLE_AncestorAvailModules_23_23 = ((MR_Word) (conv3_STATE_VARIABLE_AncestorAvailModules_23_23));
      STATE_VARIABLE_ModuleInfo_24_24 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_24_24));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_13;
      next_value_of_STATE_VARIABLE_AncestorAvailModules_0_2 = STATE_VARIABLE_AncestorAvailModules_23_23;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_AncestorAvailModules_0_2 = next_value_of_STATE_VARIABLE_AncestorAvailModules_0_2;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__make_hlds_passes__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__type_ctor_info_init_or_final_0);
}

void mercury__hlds__make_hlds__make_hlds_passes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__make_hlds_passes__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.make_hlds_passes.
