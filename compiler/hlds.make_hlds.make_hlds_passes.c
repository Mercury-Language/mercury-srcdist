/*
** Automatically generated from `make_hlds_passes.m'
** by the Mercury compiler,
** version 22.01.5-beta-2022-12-27
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_stats.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
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


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_inst_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_mode_defn_info_general_1__plain_parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_generated_pragma_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_functor_desc_init_or_final_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_ordinal_ordered_init_or_final_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_name_ordered_init_or_final_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_init_or_final_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__do_parse_tree_to_hlds__147__1_1_p_0(
  MR_Word LambdaHeadVar__1_112);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__do_parse_tree_to_hlds__142__1_1_p_0(
  MR_Word LambdaHeadVar__1_111);

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
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
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
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
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
hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[66][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[1][1];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[3][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][18];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[2][9];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[5][12];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[1][13];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[5][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[10][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[1][11];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_11[1][4];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_12[2][8];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[66][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_export_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_generated_pragma_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[1]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "used in"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not have a corresponding"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[21])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is either"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "<detism>"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "where"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- impure pred <predname> is <detism>."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- pred <predname>(io::di, io::uo) is <detism>."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "one of these two forms:"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A signature is valid only if it has"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has an invalid signature."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[21])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has multiple"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0))
  },
  /* row 2 */
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][18] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[2][9] = {
  /* row 0 */
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
  /* row 1 */
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[5][12] = {
  /* row 0 */
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
  /* row 1 */
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
  /* row 2 */
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
  /* row 3 */
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
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[1][13] = {
  /* row 0 */
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_11[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_11[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_12[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_12[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[1][11] = {
  /* row 0 */
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_11[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_12[2][8] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_generated_pragma_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_sub_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_sub_list_1,
  {
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_ims_sub_list_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_sub_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_generated_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_generated_pragma_0)
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
  {     hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_name_ordered_init_or_final_0 },
  {     hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__enum_ordinal_ordered_init_or_final_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__functor_number_map_init_or_final_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__do_parse_tree_to_hlds__147__1_1_p_0(
  MR_Word LambdaHeadVar__1_112)
{
  {
    MR_bool succeeded;
    MR_Word Phase_217;

    parse_tree__error_util__extract_spec_phase_2_p_0(LambdaHeadVar__1_112, &Phase_217);
    succeeded = (Phase_217 == (MR_Word) ((MR_Unsigned) 28U));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__do_parse_tree_to_hlds__142__1_1_p_0(
  MR_Word LambdaHeadVar__1_111)
{
  {
    MR_bool succeeded;
    MR_Word Phase_41;

    parse_tree__error_util__extract_spec_phase_2_p_0(LambdaHeadVar__1_111, &Phase_41);
    succeeded = (Phase_41 == (MR_Word) ((MR_Unsigned) 24U));
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0(
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

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_item_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleItemVersionNumbers_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_10,
  MR_Word * STATE_VARIABLE_RecompInfo_11)
{
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
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RecompInfo_11;

    hlds__make_hlds__make_hlds_passes__update_module_item_version_numbers_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_RecompInfo_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_RecompInfo_11));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleItemVersionNumbers_6,
  MR_Word STATE_VARIABLE_QualInfo_0_8,
  MR_Word * STATE_VARIABLE_QualInfo_9)
{
  {
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (ModuleItemVersionNumbers_6));
    }
    hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_10, STATE_VARIABLE_QualInfo_0_8, STATE_VARIABLE_QualInfo_9);
  }
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
  {
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FinaliseInfo_12, (MR_Integer) 0))));
    MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FinaliseInfo_12, (MR_Integer) 1))));
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
  {
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Initialise_12, (MR_Integer) 0))));
    MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Initialise_12, (MR_Integer) 1))));
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
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_finalise_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word InitOrFinal_14,
  MR_Word SymName_15,
  MR_Integer Arity_16,
  MR_Word Context_17,
  MR_Word SeqNum_18,
  MR_Word STATE_VARIABLE_RevPragmaFPEInfos_0_39,
  MR_Word * STATE_VARIABLE_RevPragmaFPEInfos_40,
  MR_Word STATE_VARIABLE_PredTargetNames_0_41,
  MR_Word * STATE_VARIABLE_PredTargetNames_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_22;
    MR_Word PredIds_23;
    MR_String DeclName_24;
    MR_Integer SeqNumInt_25;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_13, &PredTable_22);
    hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_22, (MR_Integer) 1, SymName_15, Arity_16, &PredIds_23);
    switch (InitOrFinal_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        DeclName_24 = (MR_String) "finalise";
        break;
      case (MR_Integer) 0:
        DeclName_24 = (MR_String) "initialise";
        break;
    }
    if ((SeqNum_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise_finalise\'/12", (MR_String) "item_no_seq_num");
        return;
      }
    else
      SeqNumInt_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SeqNum_18, (MR_Integer) 0))));
    if ((PredIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
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
        MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) (Arity_16));
      }
      {
        Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) (Var_150));
      }
      {
        Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (DeclName_24));
      }
      {
        Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
        MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[29])));
      }
      {
        Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])));
        MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_154));
      }
      {
        Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (Var_149));
        MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_151));
      }
      {
        Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[19])));
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
        *STATE_VARIABLE_Specs_44 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
      }
      *STATE_VARIABLE_RevPragmaFPEInfos_40 = STATE_VARIABLE_RevPragmaFPEInfos_0_39;
      *STATE_VARIABLE_PredTargetNames_42 = STATE_VARIABLE_PredTargetNames_0_41;
    }
    else
    {
      MR_Word Var_183 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_23, (MR_Integer) 1))));
      MR_Word Var_184 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_23, (MR_Integer) 0))));

      if ((Var_183 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo_29;
        MR_Word ExpectedHeadModes_30;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_13, Var_184, &PredInfo_29);
        succeeded = hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0(PredInfo_29, &ExpectedHeadModes_30);
        if (succeeded)
        {
          MR_Word ModuleName_31;
          MR_Word Origin_32;
          MR_String CName_33;
          MR_Word Globals_34;
          MR_Word PragmaFPEInfo_35;

          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_13, &ModuleName_31);
          switch (InitOrFinal_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                Origin_32 = (MR_Word) ((MR_Unsigned) 4U);
                parse_tree__prog_foreign__new_user_final_pred_7_p_0(ModuleName_31, SeqNumInt_25, SymName_15, Arity_16, &CName_33, STATE_VARIABLE_PredTargetNames_0_41, STATE_VARIABLE_PredTargetNames_42);
              }
              break;
            case (MR_Integer) 0:
              {
                Origin_32 = (MR_Word) ((MR_Unsigned) 0U);
                parse_tree__prog_foreign__new_user_init_pred_7_p_0(ModuleName_31, SeqNumInt_25, SymName_15, Arity_16, &CName_33, STATE_VARIABLE_PredTargetNames_0_41, STATE_VARIABLE_PredTargetNames_42);
              }
              break;
          }
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_13, &Globals_34);
          hlds__make_hlds__make_hlds_passes__make_pragma_foreign_proc_export_7_p_0(Globals_34, SymName_15, ExpectedHeadModes_30, CName_33, Origin_32, Context_17, &PragmaFPEInfo_35);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevPragmaFPEInfos_40 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaFPEInfo_35));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevPragmaFPEInfos_0_39));
          }
          *STATE_VARIABLE_Specs_44 = STATE_VARIABLE_Specs_0_43;
        }
        else
        {
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_Word Pieces_175;
          MR_Word Spec_176;

          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (SymName_15));
            MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) (Arity_16));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (Var_86));
          }
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (DeclName_24));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[58])));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])));
            MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
          }
          {
            Pieces_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[19])));
            MR_hl_field(MR_mktag(1), Pieces_175, 1) = ((MR_Box) (Var_84));
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
            *STATE_VARIABLE_Specs_44 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_176));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
          }
          *STATE_VARIABLE_PredTargetNames_42 = STATE_VARIABLE_PredTargetNames_0_41;
          *STATE_VARIABLE_RevPragmaFPEInfos_40 = STATE_VARIABLE_RevPragmaFPEInfos_0_39;
        }
      }
      else
      {
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Pieces_181;
        MR_Word Spec_182;

        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (SymName_15));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (Arity_16));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (DeclName_24));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[64])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
        }
        {
          Pieces_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[19])));
          MR_hl_field(MR_mktag(1), Pieces_181, 1) = ((MR_Box) (Var_51));
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
          *STATE_VARIABLE_Specs_44 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_182));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
        }
        *STATE_VARIABLE_RevPragmaFPEInfos_40 = STATE_VARIABLE_RevPragmaFPEInfos_0_39;
        *STATE_VARIABLE_PredTargetNames_42 = STATE_VARIABLE_PredTargetNames_0_41;
      }
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
  {
    MR_Word Attrs_15 = (MR_Word) (Origin_12);
    MR_Word PEOrigin_16;
    MR_Word CompilationTarget_17;
    MR_Word ExportLang_18;
    MR_Word PredNameModesPF_19;
    MR_Word FPEInfo_20;

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
    {
      FPEInfo_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FPEInfo_20, 0) = ((MR_Box) (PEOrigin_16));
      MR_hl_field(MR_mktag(0), FPEInfo_20, 1) = (MR_Box) ((MR_Unsigned) (ExportLang_18));
      MR_hl_field(MR_mktag(0), FPEInfo_20, 2) = ((MR_Box) (PredNameModesPF_19));
      MR_hl_field(MR_mktag(0), FPEInfo_20, 3) = ((MR_Box) (CName_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *PragmaFPEInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FPEInfo_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23 = ((MR_Word) ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__conv0_ProcInfo_23));
    hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0_s *) (env_ptr_arg);

    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__ProcInfo_23, &(env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12);
    (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__HeadModes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__MaybeHeadModes_12, (MR_Integer) 0))));
      (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__TypeInfo_26_26 = (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[65]);
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
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_4(
  void * env_ptr_arg)
{
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
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0(
  MR_Word PredInfo_3,
  MR_Word * ExpectedHeadModes_4)
{
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
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_8_p_0(
  MR_Word PredStatus_9,
  MR_Word PromiseInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_QualInfo_0_30,
  MR_Word * STATE_VARIABLE_QualInfo_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_Word PromiseType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 1))));
    MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 2))));
    MR_Word UnivVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 3))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 4))));
    MR_Word SeqNum_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PromiseInfo_10, (MR_Integer) 5))));
    MR_Word ClauseType_20;
    MR_Integer Line_21;
    MR_String File_22;
    MR_String Name_23;
    MR_Word ModuleName_24;
    MR_Word PromisePredSymName_25;
    MR_Word HeadVars_26;
    MR_Word ClauseInfo_27;
    MR_Word STATE_VARIABLE_Specs_34_34;
    MR_String Var_38;
    MR_Word Var_45;
    MR_String Var_52;
    MR_String Var_53;
    MR_String Var_60;
    MR_String Var_62;

    switch (PromiseType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(UnivVars_17, PromiseType_14, Goal_15, Context_18, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_34_34);
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_Specs_34_34 = STATE_VARIABLE_Specs_0_32;
        break;
    }
    {
      ClauseType_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ClauseType_20, 0) = (MR_Box) ((MR_Unsigned) (PromiseType_14));
    }
    mercury__term__context_line_2_p_0(Context_18, &Line_21);
    mercury__term__context_file_2_p_0(Context_18, &File_22);
    Var_38 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_14);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "__", File_22);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[0]), Line_21, &Var_53);
    Var_60 = mercury__string__f_43_43_2_f_0(Var_53, Var_52);
    Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_60);
    Name_23 = mercury__string__f_43_43_2_f_0(Var_38, Var_62);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &ModuleName_24);
    {
      PromisePredSymName_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PromisePredSymName_25, 0) = ((MR_Box) (ModuleName_24));
      MR_hl_field(MR_mktag(1), PromisePredSymName_25, 1) = ((MR_Box) (Name_23));
    }
    mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UnivVars_17, &HeadVars_26);
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Goal_15));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ClauseInfo_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClauseInfo_27, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ClauseInfo_27, 1) = ((MR_Box) (PromisePredSymName_25));
      MR_hl_field(MR_mktag(0), ClauseInfo_27, 2) = ((MR_Box) (HeadVars_26));
      MR_hl_field(MR_mktag(0), ClauseInfo_27, 3) = ((MR_Box) (VarSet_16));
      MR_hl_field(MR_mktag(0), ClauseInfo_27, 4) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), ClauseInfo_27, 5) = ((MR_Box) (Context_18));
      MR_hl_field(MR_mktag(0), ClauseInfo_27, 6) = ((MR_Box) (SeqNum_19));
    }
    hlds__make_hlds__add_clause__module_add_clause_9_p_0(PredStatus_9, ClauseType_20, ClauseInfo_27, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_QualInfo_0_30, STATE_VARIABLE_QualInfo_31, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_33);
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(
  MR_Word PredDecl_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_30,
  MR_Word * STATE_VARIABLE_ModuleInfo_31)
{
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
            MR_Integer Arity_21;
            MR_Integer FuncArity_22;
            MR_Word PredTable0_23;
            MR_Word PredIds_24;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_8, &Arity_21);
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_22, Arity_21);
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_30, &PredTable0_23);
            hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredTable0_23, (MR_Integer) 0, PredSymName_6, FuncArity_22, &PredIds_24);
            if ((PredIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.maybe_add_default_mode\'/3", (MR_String) "can\'t find func declaration");
                return;
              }
            else
            {
              MR_Word Preds0_27;
              MR_Word Preds_28;
              MR_Word PredTable_29;

              hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable0_23, &Preds0_27);
              hlds__default_func_mode__maybe_add_default_func_modes_3_p_0(PredIds_24, Preds0_27, &Preds_28);
              hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_28, PredTable0_23, &PredTable_29);
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_29, STATE_VARIABLE_ModuleInfo_0_30, STATE_VARIABLE_ModuleInfo_31);
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_ModuleInfo_31 = STATE_VARIABLE_ModuleInfo_0_30;
          break;
      }
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
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(
  MR_Word ItemMercuryStatus_5,
  MR_Word Avail_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17)
{
  {
    MR_Word ModuleName_8;
    MR_Word Context_9;
    MR_Word ImportOrUse_11;

    if (((MR_tag((MR_Word) Avail_6)) == (MR_Integer) 0))
    {
      MR_Word Var_19 = (MR_Word) ((MR_Word) (Avail_6));

      ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
      Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
      ImportOrUse_11 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Var_18 = (MR_Word) (MR_body((MR_Word) (Avail_6), (MR_Integer) 1));

      ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      ImportOrUse_11 = (MR_Integer) 1;
    }
    if (((MR_tag((MR_Word) ItemMercuryStatus_5)) == (MR_Integer) 1))
    {
      MR_Word ItemImport_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ItemMercuryStatus_5, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) ItemImport_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(ModuleName_8, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
          break;
        case (MR_Integer) 1:
          {
            MR_Word ImportLocn_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ItemImport_14, (MR_Integer) 0))) & (MR_Integer) 7);

            switch (ImportLocn_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
                {
                  MR_Word STATE_VARIABLE_ModuleInfo_24_24;

                  hlds__hlds_module__module_add_avail_module_name_6_p_0(ModuleName_8, (MR_Integer) 1, ImportOrUse_11, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_24_24);
                  hlds__hlds_module__module_info_add_parent_to_used_modules_3_p_0(ModuleName_8, STATE_VARIABLE_ModuleInfo_24_24, STATE_VARIABLE_ModuleInfo_17);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word STATE_VARIABLE_ModuleInfo_28_28;

                  hlds__hlds_module__module_add_avail_module_name_6_p_0(ModuleName_8, (MR_Integer) 0, ImportOrUse_11, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_28_28);
                  hlds__hlds_module__module_info_add_parent_to_used_modules_3_p_0(ModuleName_8, STATE_VARIABLE_ModuleInfo_28_28, STATE_VARIABLE_ModuleInfo_17);
                }
                break;
              case (MR_Integer) 0:
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(ModuleName_8, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
                break;
            }
          }
          break;
      }
    }
    else
    {
      MR_Word ItemExport_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemMercuryStatus_5, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word Section_13;
      MR_Word Var_30;

      switch (ItemExport_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          Section_13 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          Section_13 = (MR_Integer) 1;
          break;
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Context_9));
      }
      hlds__hlds_module__module_add_avail_module_name_6_p_0(ModuleName_8, Section_13, ImportOrUse_11, Var_30, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word TVarSet_6;
    MR_Word Context_7;
    MR_Word Type_9;

    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_6);
    mercury__term__context_init_1_p_0(&Context_7);
    parse_tree__prog_type__construct_type_3_p_0(TypeCtor_4, (MR_Word) ((MR_Unsigned) 0U), &Type_9);
    hlds__add_special_pred__add_special_pred_decl_defns_for_type_eagerly_8_p_0(TVarSet_6, Type_9, TypeCtor_4, (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[18])), (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Context_7, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv22_STATE_VARIABLE_QualInfo_9;

    hlds__make_hlds__make_hlds_passes__add_module_item_version_numbers_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv22_STATE_VARIABLE_QualInfo_9);
    *wrapper_arg_4 = ((MR_Box) (conv22_STATE_VARIABLE_QualInfo_9));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv19_HeadVar__3_3;
    MR_Word conv18_HeadVar__5_5;

    hlds__make_hlds__add_pragma__add_gen_pragma_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv18_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv19_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv18_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_HeadVar__3_3;

    hlds__hlds_module__module_add_foreign_body_code_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv16_HeadVar__3_3));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_HeadVar__3_3;

    hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv14_HeadVar__3_3));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv11_HeadVar__3_3;
    MR_Word conv10_HeadVar__5_5;

    hlds__make_hlds__add_pragma__add_pragma_info_foreign_proc_export_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv10_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv11_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv10_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_ModuleInfo_12;

    hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_ModuleInfo_12));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
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
    MR_Word conv4_HeadVar__5_5;
    MR_Word conv3_HeadVar__7_7;
    MR_Word conv2_HeadVar__9_9;

    hlds__make_hlds__add_type__add_du_ctors_check_subtype_check_foreign_type_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv3_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv2_HeadVar__9_9);
    *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__5_5));
    *wrapper_arg_6 = ((MR_Box) (conv3_HeadVar__7_7));
    *wrapper_arg_8 = ((MR_Box) (conv2_HeadVar__9_9));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__hlds_module__module_add_item_fim_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__do_parse_tree_to_hlds__147__1_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__do_parse_tree_to_hlds__142__1_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(
  MR_Word AugCompUnit_12,
  MR_Word Globals_13,
  MR_String DumpBaseFileName_14,
  MR_Word MQInfo0_15,
  MR_Word TypeEqvMap_16,
  MR_Word UsedModules_17,
  MR_Word * STATE_VARIABLE_QualInfo_97,
  MR_Word * STATE_VARIABLE_FoundInvalidType_98,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_99,
  MR_Word * STATE_VARIABLE_ModuleInfo_100,
  MR_Word * STATE_VARIABLE_Specs_101)
{
  {
    MR_bool succeeded;
    MR_Word ParseTreeModuleSrc_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 0))));
    MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 0))));
    MR_Word ModuleNameContext_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 1))));
    MR_Word ImplicitlyUsedModules_26;
    MR_Word PQInfo_27;
    MR_Word DirectArgMap_32;
    MR_Word TypeRepnDec_33;
    MR_Word TypeRepnMap_34;
    MR_Word ForeignEnums_35;
    MR_Word ForeignExportEnums_36;
    MR_Word TypeSpecs_37;
    MR_Word InstModeSpecs_38;
    MR_Word InvalidTypeSpecs_43;
    MR_Word InvalidInstModeSpecs_44;
    MR_Word TypeErrors_45;
    MR_Word InstModeErrors_46;
    MR_Word Avails_47;
    MR_Word FIMs_48;
    MR_Word TypeDefnsAbstract_49;
    MR_Word TypeDefnsMercury_50;
    MR_Word TypeDefnsForeign_51;
    MR_Word InstDefns_52;
    MR_Word ModeDefns_53;
    MR_Word PredDecls_54;
    MR_Word ModeDecls_55;
    MR_Word Promises_56;
    MR_Word Typeclasses_57;
    MR_Word Instances_58;
    MR_Word Initialises_59;
    MR_Word Finalises_60;
    MR_Word Mutables_61;
    MR_Word PragmasDecl_62;
    MR_Word PragmasImpl_63;
    MR_Word PragmasGen_64;
    MR_Word Clauses_65;
    MR_Word IntBadClauses_66;
    MR_Word SolverPredDecls_70;
    MR_Word SolverForeignProcs_71;
    MR_Word SolverMutables_72;
    MR_Word AllMutables_73;
    MR_Word InitPredTargetNames0_74;
    MR_Word MutablePredDecls_75;
    MR_Word MutableClauses_76;
    MR_Word MutableForeignProcs_77;
    MR_Word MutableForeignDeclCodes_78;
    MR_Word MutableForeignBodyCodes_79;
    MR_Word RevPragmaFPEInfos1_80;
    MR_Word InitPredTargetNames1_81;
    MR_Word FinalPredTargetNames1_83;
    MR_Word RevPragmaFPEInfos2_84;
    MR_Word InitPredTargetNames_85;
    MR_Word RevPragmaFPEInfos_86;
    MR_Word FinalPredTargetNames_87;
    MR_Word RevPragmasTabled_88;
    MR_Word PragmasTabled_89;
    MR_Word PragmaFPEInfos_90;
    MR_Word ModuleItemVersionNumbers_91;
    MR_Word MQInfo_92;
    MR_Word MQUndefType_93;
    MR_Word MQUndefInst_94;
    MR_Word MQUndefMode_95;
    MR_Word MQUndefTypeClass_96;
    MR_Word STATE_VARIABLE_ModuleInfo_103_103;
    MR_Word STATE_VARIABLE_ModuleInfo_109_109;
    MR_Word STATE_VARIABLE_Specs_110_110;
    MR_Word STATE_VARIABLE_FoundInvalidType_114_114;
    MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_116_116;
    MR_Word STATE_VARIABLE_ModuleInfo_117_117;
    MR_Word STATE_VARIABLE_ModuleInfo_121_121;
    MR_Word STATE_VARIABLE_FoundInvalidType_122_122;
    MR_Word STATE_VARIABLE_Specs_123_123;
    MR_Word STATE_VARIABLE_RevSolverPredDecls_124_124;
    MR_Word STATE_VARIABLE_RevSolverForeignProcs_125_125;
    MR_Word STATE_VARIABLE_RevSolverMutables_126_126;
    MR_Word STATE_VARIABLE_ModuleInfo_127_127;
    MR_Word STATE_VARIABLE_FoundInvalidType_128_128;
    MR_Word STATE_VARIABLE_Specs_129_129;
    MR_Word STATE_VARIABLE_RevSolverPredDecls_130_130;
    MR_Word STATE_VARIABLE_RevSolverForeignProcs_131_131;
    MR_Word STATE_VARIABLE_RevSolverMutables_132_132;
    MR_Word STATE_VARIABLE_ModuleInfo_133_133;
    MR_Word STATE_VARIABLE_FoundInvalidType_134_134;
    MR_Word STATE_VARIABLE_Specs_135_135;
    MR_Word STATE_VARIABLE_RevSolverPredDecls_136_136;
    MR_Word STATE_VARIABLE_RevSolverForeignProcs_137_137;
    MR_Word STATE_VARIABLE_RevSolverMutables_138_138;
    MR_Word STATE_VARIABLE_ModuleInfo_139_139;
    MR_Word STATE_VARIABLE_Specs_140_140;
    MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_141_141;
    MR_Word STATE_VARIABLE_Specs_142_142;
    MR_Word STATE_VARIABLE_ModuleInfo_143_143;
    MR_Word STATE_VARIABLE_Specs_144_144;
    MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_145_145;
    MR_Word STATE_VARIABLE_Specs_146_146;
    MR_Word STATE_VARIABLE_ModuleInfo_147_147;
    MR_Word STATE_VARIABLE_Specs_148_148;
    MR_Word STATE_VARIABLE_ModuleInfo_149_149;
    MR_Word STATE_VARIABLE_Specs_150_150;
    MR_Word STATE_VARIABLE_ModuleInfo_151_151;
    MR_Word STATE_VARIABLE_Specs_152_152;
    MR_Word STATE_VARIABLE_Specs_153_153;
    MR_Word STATE_VARIABLE_ModuleInfo_154_154;
    MR_Word STATE_VARIABLE_Specs_155_155;
    MR_Word STATE_VARIABLE_ModuleInfo_156_156;
    MR_Word STATE_VARIABLE_Specs_157_157;
    MR_Word STATE_VARIABLE_ModuleInfo_158_158;
    MR_Word STATE_VARIABLE_ModuleInfo_159_159;
    MR_Word STATE_VARIABLE_Specs_160_160;
    MR_Word STATE_VARIABLE_ModuleInfo_162_162;
    MR_Word STATE_VARIABLE_FoundInvalidType_164_164;
    MR_Word STATE_VARIABLE_ModuleInfo_165_165;
    MR_Word STATE_VARIABLE_Specs_166_166;
    MR_Word STATE_VARIABLE_ModuleInfo_169_169;
    MR_Word STATE_VARIABLE_ModuleInfo_170_170;
    MR_Word STATE_VARIABLE_QualInfo_171_171;
    MR_Word STATE_VARIABLE_ModuleInfo_172_172;
    MR_Word STATE_VARIABLE_QualInfo_173_173;
    MR_Word STATE_VARIABLE_Specs_174_174;
    MR_Word STATE_VARIABLE_ModuleInfo_175_175;
    MR_Word STATE_VARIABLE_QualInfo_176_176;
    MR_Word STATE_VARIABLE_Specs_177_177;
    MR_Word STATE_VARIABLE_ModuleInfo_178_178;
    MR_Word STATE_VARIABLE_QualInfo_179_179;
    MR_Word STATE_VARIABLE_Specs_180_180;
    MR_Word STATE_VARIABLE_ModuleInfo_181_181;
    MR_Word STATE_VARIABLE_ModuleInfo_182_182;
    MR_Word STATE_VARIABLE_Specs_183_183;
    MR_Word STATE_VARIABLE_ModuleInfo_184_184;
    MR_Word STATE_VARIABLE_Specs_185_185;
    MR_Word STATE_VARIABLE_Specs_186_186;
    MR_Word STATE_VARIABLE_Specs_187_187;
    MR_Word STATE_VARIABLE_ModuleInfo_188_188;
    MR_Word STATE_VARIABLE_ModuleInfo_189_189;
    MR_Word STATE_VARIABLE_ModuleInfo_190_190;
    MR_Word STATE_VARIABLE_QualInfo_191_191;
    MR_Word STATE_VARIABLE_Specs_192_192;
    MR_Word STATE_VARIABLE_ModuleInfo_194_194;
    MR_Word STATE_VARIABLE_QualInfo_195_195;
    MR_Word STATE_VARIABLE_Specs_196_196;
    MR_Word STATE_VARIABLE_ModuleInfo_197_197;
    MR_Word STATE_VARIABLE_QualInfo_198_198;
    MR_Word STATE_VARIABLE_Specs_199_199;
    MR_Word STATE_VARIABLE_ModuleInfo_201_201;
    MR_Word STATE_VARIABLE_Specs_202_202;
    MR_Word STATE_VARIABLE_ModuleInfo_204_204;
    MR_Word STATE_VARIABLE_ModuleInfo_206_206;
    MR_Word STATE_VARIABLE_Specs_209_209;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_162_162;
    MR_Word Var_438;
    MR_Box conv13_STATE_VARIABLE_ModuleInfo_201_201;
    MR_Box conv12_STATE_VARIABLE_Specs_202_202;
    MR_Box conv15_STATE_VARIABLE_ModuleInfo_204_204;
    MR_Box conv17_STATE_VARIABLE_ModuleInfo_206_206;
    MR_Box conv21_STATE_VARIABLE_ModuleInfo_100;
    MR_Box conv20_STATE_VARIABLE_Specs_209_209;
    MR_Box conv23_STATE_VARIABLE_QualInfo_97;

    parse_tree__get_dependencies__get_implicit_avail_needs_in_aug_compilation_unit_3_p_0(Globals_13, AugCompUnit_12, &ImplicitlyUsedModules_26);
    parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(MQInfo0_15, &PQInfo_27);
    hlds__hlds_module__module_info_init_9_p_0(Globals_13, ModuleName_24, ModuleNameContext_25, DumpBaseFileName_14, UsedModules_17, ImplicitlyUsedModules_26, PQInfo_27, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ModuleInfo_103_103);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[0]), &DirectArgMap_32);
    TypeSpecs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 17))));
    InstModeSpecs_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 18))));
    STATE_VARIABLE_Specs_110_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TypeSpecs_37, InstModeSpecs_38);
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[1]), TypeSpecs_37, &InvalidTypeSpecs_43);
    mercury__list__filter_3_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[2]), InstModeSpecs_38, &InvalidInstModeSpecs_44);
    TypeErrors_45 = parse_tree__error_util__contains_errors_2_f_0(Globals_13, InvalidTypeSpecs_43);
    InstModeErrors_46 = parse_tree__error_util__contains_errors_2_f_0(Globals_13, InvalidInstModeSpecs_44);
    switch (TypeErrors_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_FoundInvalidType_114_114 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_FoundInvalidType_114_114 = (MR_Integer) 1;
        break;
    }
    switch (InstModeErrors_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_FoundInvalidInstOrMode_116_116 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_FoundInvalidInstOrMode_116_116 = (MR_Integer) 1;
        break;
    }
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_24_p_0(AugCompUnit_12, &Avails_47, &FIMs_48, &TypeDefnsAbstract_49, &TypeDefnsMercury_50, &TypeDefnsForeign_51, &InstDefns_52, &ModeDefns_53, &PredDecls_54, &ModeDecls_55, &Promises_56, &Typeclasses_57, &Instances_58, &Initialises_59, &Finalises_60, &Mutables_61, &TypeRepnMap_34, &ForeignEnums_35, &ForeignExportEnums_36, &PragmasDecl_62, &PragmasImpl_63, &PragmasGen_64, &Clauses_65, &IntBadClauses_66);
    {
      TypeRepnDec_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeRepnDec_33, 0) = ((MR_Box) (TypeRepnMap_34));
      MR_hl_field(MR_mktag(0), TypeRepnDec_33, 1) = ((MR_Box) (DirectArgMap_32));
      MR_hl_field(MR_mktag(0), TypeRepnDec_33, 2) = ((MR_Box) (ForeignEnums_35));
      MR_hl_field(MR_mktag(0), TypeRepnDec_33, 3) = ((MR_Box) (ForeignExportEnums_36));
    }
    hlds__hlds_module__module_info_set_type_repn_dec_3_p_0(TypeRepnDec_33, STATE_VARIABLE_ModuleInfo_103_103, &STATE_VARIABLE_ModuleInfo_109_109);
    hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0(Avails_47, STATE_VARIABLE_ModuleInfo_109_109, &STATE_VARIABLE_ModuleInfo_117_117);
    hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0(TypeDefnsAbstract_49, STATE_VARIABLE_ModuleInfo_117_117, &STATE_VARIABLE_ModuleInfo_121_121, STATE_VARIABLE_FoundInvalidType_114_114, &STATE_VARIABLE_FoundInvalidType_122_122, STATE_VARIABLE_Specs_110_110, &STATE_VARIABLE_Specs_123_123, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevSolverPredDecls_124_124, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevSolverForeignProcs_125_125, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_RevSolverMutables_126_126);
    hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0(TypeDefnsMercury_50, STATE_VARIABLE_ModuleInfo_121_121, &STATE_VARIABLE_ModuleInfo_127_127, STATE_VARIABLE_FoundInvalidType_122_122, &STATE_VARIABLE_FoundInvalidType_128_128, STATE_VARIABLE_Specs_123_123, &STATE_VARIABLE_Specs_129_129, STATE_VARIABLE_RevSolverPredDecls_124_124, &STATE_VARIABLE_RevSolverPredDecls_130_130, STATE_VARIABLE_RevSolverForeignProcs_125_125, &STATE_VARIABLE_RevSolverForeignProcs_131_131, STATE_VARIABLE_RevSolverMutables_126_126, &STATE_VARIABLE_RevSolverMutables_132_132);
    hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0(TypeDefnsForeign_51, STATE_VARIABLE_ModuleInfo_127_127, &STATE_VARIABLE_ModuleInfo_133_133, STATE_VARIABLE_FoundInvalidType_128_128, &STATE_VARIABLE_FoundInvalidType_134_134, STATE_VARIABLE_Specs_129_129, &STATE_VARIABLE_Specs_135_135, STATE_VARIABLE_RevSolverPredDecls_130_130, &STATE_VARIABLE_RevSolverPredDecls_136_136, STATE_VARIABLE_RevSolverForeignProcs_131_131, &STATE_VARIABLE_RevSolverForeignProcs_137_137, STATE_VARIABLE_RevSolverMutables_132_132, &STATE_VARIABLE_RevSolverMutables_138_138);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[1]), STATE_VARIABLE_RevSolverPredDecls_136_136, &SolverPredDecls_70);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]), STATE_VARIABLE_RevSolverForeignProcs_137_137, &SolverForeignProcs_71);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), STATE_VARIABLE_RevSolverMutables_138_138, &SolverMutables_72);
    hlds__make_hlds__make_hlds_passes__add_inst_defns_5_p_0(InstDefns_52, STATE_VARIABLE_ModuleInfo_133_133, &STATE_VARIABLE_ModuleInfo_139_139, STATE_VARIABLE_Specs_135_135, &STATE_VARIABLE_Specs_140_140);
    hlds__make_hlds__add_mode__check_inst_defns_6_p_0(STATE_VARIABLE_ModuleInfo_139_139, InstDefns_52, STATE_VARIABLE_FoundInvalidInstOrMode_116_116, &STATE_VARIABLE_FoundInvalidInstOrMode_141_141, STATE_VARIABLE_Specs_140_140, &STATE_VARIABLE_Specs_142_142);
    hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0(ModeDefns_53, STATE_VARIABLE_ModuleInfo_139_139, &STATE_VARIABLE_ModuleInfo_143_143, STATE_VARIABLE_Specs_142_142, &STATE_VARIABLE_Specs_144_144);
    hlds__make_hlds__add_mode__check_mode_defns_6_p_0(STATE_VARIABLE_ModuleInfo_143_143, ModeDefns_53, STATE_VARIABLE_FoundInvalidInstOrMode_141_141, &STATE_VARIABLE_FoundInvalidInstOrMode_145_145, STATE_VARIABLE_Specs_144_144, &STATE_VARIABLE_Specs_146_146);
    hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(PredDecls_54, STATE_VARIABLE_ModuleInfo_143_143, &STATE_VARIABLE_ModuleInfo_147_147, STATE_VARIABLE_Specs_146_146, &STATE_VARIABLE_Specs_148_148);
    hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(SolverPredDecls_70, STATE_VARIABLE_ModuleInfo_147_147, &STATE_VARIABLE_ModuleInfo_149_149, STATE_VARIABLE_Specs_148_148, &STATE_VARIABLE_Specs_150_150);
    hlds__make_hlds__make_hlds_passes__add_mode_decls_5_p_0(ModeDecls_55, STATE_VARIABLE_ModuleInfo_149_149, &STATE_VARIABLE_ModuleInfo_151_151, STATE_VARIABLE_Specs_150_150, &STATE_VARIABLE_Specs_152_152);
    AllMutables_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), Mutables_61, SolverMutables_72);
    hlds__hlds_module__module_info_get_user_init_pred_target_names_2_p_0(STATE_VARIABLE_ModuleInfo_151_151, &InitPredTargetNames0_74);
    hlds__make_hlds__add_mutable_aux_preds__implement_mutables_if_local_12_p_0(STATE_VARIABLE_ModuleInfo_151_151, AllMutables_73, &MutablePredDecls_75, &MutableClauses_76, &MutableForeignProcs_77, &MutableForeignDeclCodes_78, &MutableForeignBodyCodes_79, &RevPragmaFPEInfos1_80, InitPredTargetNames0_74, &InitPredTargetNames1_81, STATE_VARIABLE_Specs_152_152, &STATE_VARIABLE_Specs_153_153);
    hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0(MutablePredDecls_75, STATE_VARIABLE_ModuleInfo_151_151, &STATE_VARIABLE_ModuleInfo_154_154, STATE_VARIABLE_Specs_153_153, &STATE_VARIABLE_Specs_155_155);
    hlds__make_hlds__add_class__add_typeclass_defns_5_p_0(Typeclasses_57, STATE_VARIABLE_ModuleInfo_154_154, &STATE_VARIABLE_ModuleInfo_156_156, STATE_VARIABLE_Specs_155_155, &STATE_VARIABLE_Specs_157_157);
    hlds__make_hlds__make_hlds_passes__maybe_add_default_modes_3_p_0(PredDecls_54, STATE_VARIABLE_ModuleInfo_156_156, &STATE_VARIABLE_ModuleInfo_158_158);
    hlds__make_hlds__add_class__add_instance_defns_5_p_0(Instances_58, STATE_VARIABLE_ModuleInfo_158_158, &STATE_VARIABLE_ModuleInfo_159_159, STATE_VARIABLE_Specs_157_157, &STATE_VARIABLE_Specs_160_160);
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[3]), FIMs_48, ((MR_Box) (STATE_VARIABLE_ModuleInfo_159_159)), &conv1_STATE_VARIABLE_ModuleInfo_162_162);
    STATE_VARIABLE_ModuleInfo_162_162 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_162_162));
    switch (STATE_VARIABLE_FoundInvalidType_134_134) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeTable0_82;
          MR_Word Var_163;
          MR_Box conv7_STATE_VARIABLE_FoundInvalidType_164_164;
          MR_Box conv6_STATE_VARIABLE_ModuleInfo_165_165;
          MR_Box conv5_STATE_VARIABLE_Specs_166_166;

          hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_162_162, &TypeTable0_82);
          {
            Var_163 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[4]));
            MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4));
            MR_hl_field(MR_mktag(0), Var_163, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_163, 3) = ((MR_Box) (TypeTable0_82));
          }
          hlds__hlds_data__foldl3_over_type_ctor_defns_8_p_0((MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_163, TypeTable0_82, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_134_134)), &conv7_STATE_VARIABLE_FoundInvalidType_164_164, ((MR_Box) (STATE_VARIABLE_ModuleInfo_162_162)), &conv6_STATE_VARIABLE_ModuleInfo_165_165, ((MR_Box) (STATE_VARIABLE_Specs_160_160)), &conv5_STATE_VARIABLE_Specs_166_166);
          STATE_VARIABLE_FoundInvalidType_164_164 = ((MR_Word) (conv7_STATE_VARIABLE_FoundInvalidType_164_164));
          STATE_VARIABLE_ModuleInfo_165_165 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_165_165));
          STATE_VARIABLE_Specs_166_166 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_166_166));
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_FoundInvalidType_164_164 = STATE_VARIABLE_FoundInvalidType_134_134;
          STATE_VARIABLE_ModuleInfo_165_165 = STATE_VARIABLE_ModuleInfo_162_162;
          STATE_VARIABLE_Specs_166_166 = STATE_VARIABLE_Specs_160_160;
        }
        break;
    }
    Var_438 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_24, Var_438);
    if (succeeded)
      succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(STATE_VARIABLE_ModuleInfo_165_165);
    if (succeeded)
    {
      MR_Word Var_168;
      MR_Box conv9_STATE_VARIABLE_ModuleInfo_169_169;

      Var_168 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[4]), Var_168, ((MR_Box) (STATE_VARIABLE_ModuleInfo_165_165)), &conv9_STATE_VARIABLE_ModuleInfo_169_169);
      STATE_VARIABLE_ModuleInfo_169_169 = ((MR_Word) (conv9_STATE_VARIABLE_ModuleInfo_169_169));
    }
    else
      STATE_VARIABLE_ModuleInfo_169_169 = STATE_VARIABLE_ModuleInfo_165_165;
    hlds__hlds_module__module_info_optimize_2_p_0(STATE_VARIABLE_ModuleInfo_169_169, &STATE_VARIABLE_ModuleInfo_170_170);
    hlds__make_hlds__qual_info__init_qual_info_3_p_0(MQInfo0_15, TypeEqvMap_16, &STATE_VARIABLE_QualInfo_171_171);
    hlds__make_hlds__make_hlds_passes__add_clauses_7_p_0(Clauses_65, STATE_VARIABLE_ModuleInfo_170_170, &STATE_VARIABLE_ModuleInfo_172_172, STATE_VARIABLE_QualInfo_171_171, &STATE_VARIABLE_QualInfo_173_173, STATE_VARIABLE_Specs_166_166, &STATE_VARIABLE_Specs_174_174);
    hlds__make_hlds__make_hlds_passes__add_clauses_7_p_0(MutableClauses_76, STATE_VARIABLE_ModuleInfo_172_172, &STATE_VARIABLE_ModuleInfo_175_175, STATE_VARIABLE_QualInfo_173_173, &STATE_VARIABLE_QualInfo_176_176, STATE_VARIABLE_Specs_174_174, &STATE_VARIABLE_Specs_177_177);
    hlds__make_hlds__make_hlds_passes__add_promises_7_p_0(Promises_56, STATE_VARIABLE_ModuleInfo_175_175, &STATE_VARIABLE_ModuleInfo_178_178, STATE_VARIABLE_QualInfo_176_176, &STATE_VARIABLE_QualInfo_179_179, STATE_VARIABLE_Specs_177_177, &STATE_VARIABLE_Specs_180_180);
    hlds__hlds_module__module_info_set_int_bad_clauses_3_p_0(IntBadClauses_66, STATE_VARIABLE_ModuleInfo_178_178, &STATE_VARIABLE_ModuleInfo_181_181);
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_procs_5_p_0(SolverForeignProcs_71, STATE_VARIABLE_ModuleInfo_181_181, &STATE_VARIABLE_ModuleInfo_182_182, STATE_VARIABLE_Specs_180_180, &STATE_VARIABLE_Specs_183_183);
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_procs_5_p_0(MutableForeignProcs_77, STATE_VARIABLE_ModuleInfo_182_182, &STATE_VARIABLE_ModuleInfo_184_184, STATE_VARIABLE_Specs_183_183, &STATE_VARIABLE_Specs_185_185);
    hlds__hlds_module__module_info_get_user_final_pred_target_names_2_p_0(STATE_VARIABLE_ModuleInfo_184_184, &FinalPredTargetNames1_83);
    hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0(STATE_VARIABLE_ModuleInfo_184_184, Initialises_59, RevPragmaFPEInfos1_80, &RevPragmaFPEInfos2_84, InitPredTargetNames1_81, &InitPredTargetNames_85, STATE_VARIABLE_Specs_185_185, &STATE_VARIABLE_Specs_186_186);
    hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0(STATE_VARIABLE_ModuleInfo_184_184, Finalises_60, RevPragmaFPEInfos2_84, &RevPragmaFPEInfos_86, FinalPredTargetNames1_83, &FinalPredTargetNames_87, STATE_VARIABLE_Specs_186_186, &STATE_VARIABLE_Specs_187_187);
    hlds__hlds_module__module_info_set_user_init_pred_target_names_3_p_0(InitPredTargetNames_85, STATE_VARIABLE_ModuleInfo_184_184, &STATE_VARIABLE_ModuleInfo_188_188);
    hlds__hlds_module__module_info_set_user_final_pred_target_names_3_p_0(FinalPredTargetNames_87, STATE_VARIABLE_ModuleInfo_188_188, &STATE_VARIABLE_ModuleInfo_189_189);
    hlds__make_hlds__add_pragma__add_decl_pragmas_7_p_0(PragmasDecl_62, STATE_VARIABLE_ModuleInfo_189_189, &STATE_VARIABLE_ModuleInfo_190_190, STATE_VARIABLE_QualInfo_179_179, &STATE_VARIABLE_QualInfo_191_191, STATE_VARIABLE_Specs_187_187, &STATE_VARIABLE_Specs_192_192);
    hlds__make_hlds__add_pragma__add_impl_pragmas_9_p_0(PragmasImpl_63, (MR_Word) ((MR_Unsigned) 0U), &RevPragmasTabled_88, STATE_VARIABLE_ModuleInfo_190_190, &STATE_VARIABLE_ModuleInfo_194_194, STATE_VARIABLE_QualInfo_191_191, &STATE_VARIABLE_QualInfo_195_195, STATE_VARIABLE_Specs_192_192, &STATE_VARIABLE_Specs_196_196);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]), RevPragmasTabled_88, &PragmasTabled_89);
    hlds__make_hlds__add_pragma__add_impl_pragmas_tabled_7_p_0(PragmasTabled_89, STATE_VARIABLE_ModuleInfo_194_194, &STATE_VARIABLE_ModuleInfo_197_197, STATE_VARIABLE_QualInfo_195_195, &STATE_VARIABLE_QualInfo_198_198, STATE_VARIABLE_Specs_196_196, &STATE_VARIABLE_Specs_199_199);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]), RevPragmaFPEInfos_86, &PragmaFPEInfos_90);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[5]), PragmaFPEInfos_90, ((MR_Box) (STATE_VARIABLE_ModuleInfo_197_197)), &conv13_STATE_VARIABLE_ModuleInfo_201_201, ((MR_Box) (STATE_VARIABLE_Specs_199_199)), &conv12_STATE_VARIABLE_Specs_202_202);
    STATE_VARIABLE_ModuleInfo_201_201 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_201_201));
    STATE_VARIABLE_Specs_202_202 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_202_202));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[6]), MutableForeignDeclCodes_78, ((MR_Box) (STATE_VARIABLE_ModuleInfo_201_201)), &conv15_STATE_VARIABLE_ModuleInfo_204_204);
    STATE_VARIABLE_ModuleInfo_204_204 = ((MR_Word) (conv15_STATE_VARIABLE_ModuleInfo_204_204));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[7]), MutableForeignBodyCodes_79, ((MR_Box) (STATE_VARIABLE_ModuleInfo_204_204)), &conv17_STATE_VARIABLE_ModuleInfo_206_206);
    STATE_VARIABLE_ModuleInfo_206_206 = ((MR_Word) (conv17_STATE_VARIABLE_ModuleInfo_206_206));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[9]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[8]), PragmasGen_64, ((MR_Box) (STATE_VARIABLE_ModuleInfo_206_206)), &conv21_STATE_VARIABLE_ModuleInfo_100, ((MR_Box) (STATE_VARIABLE_Specs_202_202)), &conv20_STATE_VARIABLE_Specs_209_209);
    *STATE_VARIABLE_ModuleInfo_100 = ((MR_Word) (conv21_STATE_VARIABLE_ModuleInfo_100));
    STATE_VARIABLE_Specs_209_209 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_209_209));
    hlds__add_pred__check_preds_if_field_access_function_4_p_0(*STATE_VARIABLE_ModuleInfo_100, PredDecls_54, STATE_VARIABLE_Specs_209_209, STATE_VARIABLE_Specs_101);
    ModuleItemVersionNumbers_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 8))));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_module_item_version_numbers_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[9]), ModuleItemVersionNumbers_91, ((MR_Box) (STATE_VARIABLE_QualInfo_198_198)), &conv23_STATE_VARIABLE_QualInfo_97);
    *STATE_VARIABLE_QualInfo_97 = ((MR_Word) (conv23_STATE_VARIABLE_QualInfo_97));
    hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(*STATE_VARIABLE_QualInfo_97, &MQInfo_92);
    parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(MQInfo_92, &MQUndefType_93);
    parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(MQInfo_92, &MQUndefInst_94);
    parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(MQInfo_92, &MQUndefMode_95);
    parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(MQInfo_92, &MQUndefTypeClass_96);
    succeeded = (MQUndefType_93 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (MQUndefTypeClass_96 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_FoundInvalidType_98 = (MR_Integer) 1;
    else
      *STATE_VARIABLE_FoundInvalidType_98 = STATE_VARIABLE_FoundInvalidType_164_164;
    succeeded = (MQUndefInst_94 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (MQUndefMode_95 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_FoundInvalidInstOrMode_99 = (MR_Integer) 1;
    else
      *STATE_VARIABLE_FoundInvalidInstOrMode_99 = STATE_VARIABLE_FoundInvalidInstOrMode_145_145;
  }
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
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_finalises_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_33, Items_26, ((MR_Box) (STATE_VARIABLE_RevPragmaFPEInfos_0_3)), &conv5_STATE_VARIABLE_RevPragmaFPEInfos_34_34, ((MR_Box) (STATE_VARIABLE_PredTargetNames_0_5)), &conv4_STATE_VARIABLE_PredTargetNames_35_35, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_36_36);
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
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[2]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_initialises_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ModuleInfo_1));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (ItemMercuryStatus_25));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[17]), (MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_33, Items_26, ((MR_Box) (STATE_VARIABLE_RevPragmaFPEInfos_0_3)), &conv5_STATE_VARIABLE_RevPragmaFPEInfos_34_34, ((MR_Box) (STATE_VARIABLE_PredTargetNames_0_5)), &conv4_STATE_VARIABLE_PredTargetNames_35_35, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_36_36);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_29;
    MR_Word conv1_STATE_VARIABLE_QualInfo_31;
    MR_Word conv0_STATE_VARIABLE_Specs_33;

    hlds__make_hlds__make_hlds_passes__add_promise_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_29, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_31, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_33);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_29));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_31));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_33));
  }
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
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[0]));
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
        MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1]));
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_31;

    hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_31);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_31));
  }
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

      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[0]), Items_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv1_STATE_VARIABLE_ModuleInfo_15_15);
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
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0]));
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
        MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pred_decls_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (ItemMercuryStatus_18));
        MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (PredStatus_20));
        MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (NeedQual_19));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[16]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_26, PredDecls_17, &_MaybePredProcIds_21, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv4_STATE_VARIABLE_ModuleInfo_27_27, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv3_STATE_VARIABLE_Specs_28_28);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_HeadVar__6_6;

    hlds__make_hlds__add_mode__module_add_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
  }
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
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_mode_defns_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (ModeStatus_18));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[15]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_23, ModeDefns_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_24_24, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_25_25);
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_HeadVar__6_6;

    hlds__make_hlds__add_mode__module_add_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
  }
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
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_inst_defns_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (InstStatus_18));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[14]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_23, InstDefns_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv3_STATE_VARIABLE_ModuleInfo_24_24, ((MR_Box) (STATE_VARIABLE_Specs_0_4)), &conv2_STATE_VARIABLE_Specs_25_25);
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
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_type_defns_13_p_0_1));
        MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (SectionInfo_40));
        MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (TypeStatus_44));
      }
      mercury__list__foldl6_14_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[10]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[11]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[12]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[13]), Var_57, TypeDefns_41, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv11_STATE_VARIABLE_ModuleInfo_58_58, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_0_4)), &conv10_STATE_VARIABLE_FoundInvalidType_59_59, ((MR_Box) (STATE_VARIABLE_Specs_0_6)), &conv9_STATE_VARIABLE_Specs_60_60, ((MR_Box) (STATE_VARIABLE_RevPredDecls_0_8)), &conv8_STATE_VARIABLE_RevPredDecls_61_61, ((MR_Box) (STATE_VARIABLE_RevForeignProcs_0_10)), &conv7_STATE_VARIABLE_RevForeignProcs_62_62, ((MR_Box) (STATE_VARIABLE_RevMutables_0_12)), &conv6_STATE_VARIABLE_RevMutables_63_63);
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
hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_17;

    hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_17));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0(
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
      MR_Word ImsList_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ImsLists_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_7, (MR_Integer) 0))));
      MR_Word Avails_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImsList_7, (MR_Integer) 1))));
      MR_Word Var_14;
      MR_Word STATE_VARIABLE_ModuleInfo_15_15;
      MR_Box conv1_STATE_VARIABLE_ModuleInfo_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;

      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_item_avails_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ItemMercuryStatus_10));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_14, Avails_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_2)), &conv1_STATE_VARIABLE_ModuleInfo_15_15);
      STATE_VARIABLE_ModuleInfo_15_15 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_15_15));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ImsLists_8;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
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
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__make_hlds_passes____Unify____init_or_final_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__make_hlds_passes____Compare____init_or_final_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
