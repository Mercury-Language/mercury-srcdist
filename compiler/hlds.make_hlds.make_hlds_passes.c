/*
** Automatically generated from `make_hlds_passes.m'
** by the Mercury compiler,
** version DEV
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
#include "enum.mih"
#include "getopt_io.mih"
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


static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_promise_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_initialise_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_finalise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_decl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_decl_pragma_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_impl_pragma_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_impl_pragma_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_ims_item_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_ims_item_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_generated_pragma_0;

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__604__1_3_p_0(
  MR_Word SectionInfo_18,
  MR_Word HeadVar__2_58,
  MR_Word * HeadVar__3_59);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1(
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
hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_27(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16(
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
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
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

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
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

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
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

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[72][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[5][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[29][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][14];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[8][10];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[9][8];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[1][11];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][12];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[4][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[1][1];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[72][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[19]))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[21]))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[23]))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[24]))
  },
  /* row 26 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_generated_pragma_0))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose name is a variable."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for a predicate whose name is a variable."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a mode"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not have a corresponding"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "used in"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has invalid signature."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "used in initialise declaration"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "matches multiple pred declarations."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration has invalid signature."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has multiple"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a"))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[29][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[6])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[7])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[6])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[7])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_27)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[8])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_28)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_30)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[8][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_decl_pragma_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[9][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
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
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 8 */
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_impl_pragma_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_ims_item_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_ims_item_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_promise_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_initialise_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_finalise_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_decl_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_decl_pragma_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_decl_pragma_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_impl_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_impl_pragma_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_impl_pragma_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_impl_pragma_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_ims_item_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_ims_item_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_ims_item_1parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__ti_item_pragma_info_1parse_tree__prog_item__type_ctor_info_pragma_info_tabled_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__parse_tree__prog_item__pti_item_pragma_info_1__plain_parse_tree__prog_item__type_ctor_info_generated_pragma_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_generated_pragma_0)
  }
};

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__604__1_3_p_0(
  MR_Word SectionInfo_18,
  MR_Word HeadVar__2_58,
  MR_Word * HeadVar__3_59)
{
  hlds__make_hlds__wrap_with_section_info_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), SectionInfo_18, ((MR_Box) (HeadVar__2_58)), HeadVar__3_59);
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleVersionNumbers_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_10,
  MR_Word * STATE_VARIABLE_RecompInfo_11)
{
  {
    MR_Word VersionNumbersMap0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3))));
    MR_Word VersionNumbersMap_9;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (ModuleVersionNumbers_6)), VersionNumbersMap0_8, &VersionNumbersMap_9);
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
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_RecompInfo_11;

    hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_RecompInfo_11);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_RecompInfo_11));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VersionNumbers_6,
  MR_Word STATE_VARIABLE_QualInfo_0_8,
  MR_Word * STATE_VARIABLE_QualInfo_9)
{
  {
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[3]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (VersionNumbers_6));
    }
    hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_10, STATE_VARIABLE_QualInfo_0_8, STATE_VARIABLE_QualInfo_9);
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalise_5_p_0(
  MR_Word StatusItem_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word ItemMercuryStatus_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 0))));
    MR_Word ItemFinaliseInfo_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 1))));
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinaliseInfo_10, (MR_Integer) 0))));
    MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemFinaliseInfo_10, (MR_Integer) 1))));
    MR_Word Origin_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinaliseInfo_10, (MR_Integer) 2))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemFinaliseInfo_10, (MR_Integer) 3))));

    if (((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1))
    {
      *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    }
    else
    if ((Origin_13 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0(SymName_11, Arity_12, Context_14, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_finalise\'/5", (MR_String) "bad introduced finalise declaration");
        return;
      }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0(
  MR_Word SymName_8,
  MR_Integer Arity_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_13;
    MR_Word PredIds_14;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &PredTable_13);
    hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_13, (MR_Integer) 1, SymName_8, Arity_9, &PredIds_14);
    if ((PredIds_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;

      {
        Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (SymName_8));
        MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (Arity_9));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (Var_90));
      }
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[55])));
      }
      {
        Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[71])));
        MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_88));
      }
      {
        Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_finalise\'/7"));
        MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
    }
    else
    {
      MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_14, (MR_Integer) 1))));
      MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_14, (MR_Integer) 0))));

      if ((Var_124 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo_18;
        MR_Word ExpectedHeadModes_19;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, Var_125, &PredInfo_18);
        succeeded = hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0(PredInfo_18, &ExpectedHeadModes_19);
        if (succeeded)
        {
          MR_String CName_20;
          MR_Word STATE_VARIABLE_ModuleInfo_61_61;

          hlds__hlds_module__module_info_new_user_final_pred_5_p_0(SymName_8, Arity_9, &CName_20, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_61_61);
          hlds__make_hlds__make_hlds_passes__make_and_add_pragma_foreign_proc_export_9_p_0(SymName_8, ExpectedHeadModes_19, CName_20, (MR_Word) ((MR_Unsigned) 4U), Context_10, STATE_VARIABLE_ModuleInfo_61_61, STATE_VARIABLE_ModuleInfo_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
        }
        else
        {
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Pieces_116;
          MR_Word Spec_117;

          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (SymName_8));
            MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (Arity_9));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[59])));
          }
          {
            Pieces_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[71])));
            MR_hl_field(MR_mktag(1), Pieces_116, 1) = ((MR_Box) (Var_67));
          }
          {
            Spec_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_117, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_finalise\'/7"));
            MR_hl_field(MR_mktag(1), Spec_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_117, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_117, 3) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(1), Spec_117, 4) = ((MR_Box) (Pieces_116));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_27 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_117));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
          }
          *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
        }
      }
      else
      {
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Pieces_122;
        MR_Word Spec_123;

        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (SymName_8));
          MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Arity_9));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[67])));
        }
        {
          Pieces_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[71])));
          MR_hl_field(MR_mktag(1), Pieces_122, 1) = ((MR_Box) (Var_32));
        }
        {
          Spec_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_123, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_finalise\'/7"));
          MR_hl_field(MR_mktag(1), Spec_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_123, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_123, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_123, 4) = ((MR_Box) (Pieces_122));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_27 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_123));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
        }
        *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialise_5_p_0(
  MR_Word StatusItem_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word ItemMercuryStatus_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 0))));
    MR_Word ItemInitialise_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 1))));
    MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise_10, (MR_Integer) 0))));
    MR_Integer Arity_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInitialise_10, (MR_Integer) 1))));
    MR_Word Origin_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise_10, (MR_Integer) 2))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInitialise_10, (MR_Integer) 3))));

    if (((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_Integer) 1))
    {
      *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    }
    else
    if ((Origin_13 == (MR_Word) ((MR_Unsigned) 0U)))
      hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0(SymName_11, Arity_12, Context_14, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_initialise\'/5", (MR_String) "bad introduced initialise declaration");
        return;
      }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0(
  MR_Word SymName_8,
  MR_Integer Arity_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_13;
    MR_Word PredIds_14;

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &PredTable_13);
    hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_13, (MR_Integer) 1, SymName_8, Arity_9, &PredIds_14);
    if ((PredIds_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_15;
      MR_Word Spec_16;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;

      {
        Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (SymName_8));
        MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (Arity_9));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (Var_75));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[45])));
      }
      {
        Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[71])));
        MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_73));
      }
      {
        Spec_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise\'/7"));
        MR_hl_field(MR_mktag(1), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_16, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_16, 4) = ((MR_Box) (Pieces_15));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
      *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
    }
    else
    {
      MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_14, (MR_Integer) 1))));
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_14, (MR_Integer) 0))));

      if ((Var_109 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredInfo_18;
        MR_Word ExpectedHeadModes_19;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_24, Var_110, &PredInfo_18);
        succeeded = hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0(PredInfo_18, &ExpectedHeadModes_19);
        if (succeeded)
        {
          MR_String CName_20;
          MR_Word STATE_VARIABLE_ModuleInfo_49_49;

          hlds__hlds_module__module_info_new_user_init_pred_5_p_0(SymName_8, Arity_9, &CName_20, STATE_VARIABLE_ModuleInfo_0_24, &STATE_VARIABLE_ModuleInfo_49_49);
          hlds__make_hlds__make_hlds_passes__make_and_add_pragma_foreign_proc_export_9_p_0(SymName_8, ExpectedHeadModes_19, CName_20, (MR_Word) ((MR_Unsigned) 0U), Context_10, STATE_VARIABLE_ModuleInfo_49_49, STATE_VARIABLE_ModuleInfo_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
        }
        else
        {
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Pieces_101;
          MR_Word Spec_102;

          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (SymName_8));
            MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (Arity_9));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[49])));
          }
          {
            Pieces_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[71])));
            MR_hl_field(MR_mktag(1), Pieces_101, 1) = ((MR_Box) (Var_55));
          }
          {
            Spec_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_102, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise\'/7"));
            MR_hl_field(MR_mktag(1), Spec_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_102, 2) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(1), Spec_102, 3) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(1), Spec_102, 4) = ((MR_Box) (Pieces_101));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_27 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_102));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
          }
          *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
        }
      }
      else
      {
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Pieces_107;
        MR_Word Spec_108;

        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (SymName_8));
          MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Arity_9));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[52])));
        }
        {
          Pieces_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[71])));
          MR_hl_field(MR_mktag(1), Pieces_107, 1) = ((MR_Box) (Var_32));
        }
        {
          Spec_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_108, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.implement_initialise\'/7"));
          MR_hl_field(MR_mktag(1), Spec_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_108, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(1), Spec_108, 3) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(1), Spec_108, 4) = ((MR_Box) (Pieces_107));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_27 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_108));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
        }
        *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_and_add_pragma_foreign_proc_export_9_p_0(
  MR_Word SymName_10,
  MR_Word HeadModes_11,
  MR_String CName_12,
  MR_Word Origin_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_Word Attrs_17 = (MR_Word) (Origin_13);
    MR_Word PEOrigin_18;
    MR_Word Globals_19;
    MR_Word CompilationTarget_20;
    MR_Word ExportLang_21;
    MR_Word PredNameModesPF_22;
    MR_Word FPEInfo_23;

    {
      PEOrigin_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PEOrigin_18, 0) = ((MR_Box) (Attrs_17));
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &Globals_19);
    libs__globals__get_target_2_p_0(Globals_19, &CompilationTarget_20);
    ExportLang_21 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(CompilationTarget_20);
    {
      PredNameModesPF_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameModesPF_22, 0) = ((MR_Box) (SymName_10));
      MR_hl_field(MR_mktag(0), PredNameModesPF_22, 1) = ((MR_Box) (HeadModes_11));
      MR_hl_field(MR_mktag(0), PredNameModesPF_22, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      FPEInfo_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FPEInfo_23, 0) = ((MR_Box) (PEOrigin_18));
      MR_hl_field(MR_mktag(0), FPEInfo_23, 1) = (MR_Box) ((MR_Unsigned) (ExportLang_21));
      MR_hl_field(MR_mktag(0), FPEInfo_23, 2) = ((MR_Box) (PredNameModesPF_22));
      MR_hl_field(MR_mktag(0), FPEInfo_23, 3) = ((MR_Box) (CName_12));
    }
    hlds__make_hlds__add_pragma__add_pragma_foreign_proc_export_6_p_0(FPEInfo_23, Context_14, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
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
      (env_ptr)->hlds__make_hlds__make_hlds_passes__is_valid_init_or_final_pred_2_p_0_env_0__TypeInfo_26_26 = (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[68]);
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
hlds__make_hlds__make_hlds_passes__add_promise_7_p_0(
  MR_Word StatusItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_QualInfo_0_24,
  MR_Word * STATE_VARIABLE_QualInfo_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 0))));
    MR_Word ItemPromiseInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 1))));
    MR_Word PromiseType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 1))));
    MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 2))));
    MR_Word UnivVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 3))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 4))));
    MR_Word HeadVars_20;
    MR_Word PredStatus_21;
    MR_Word STATE_VARIABLE_Specs_28_28;

    mercury__term__var_list_to_term_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), UnivVars_17, &HeadVars_20);
    switch (PromiseType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(UnivVars_17, PromiseType_14, Goal_15, Context_18, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_28_28);
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_Specs_28_28 = STATE_VARIABLE_Specs_0_26;
        break;
    }
    hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_21);
    hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(PromiseType_14, HeadVars_20, VarSet_16, Goal_15, Context_18, PredStatus_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23, STATE_VARIABLE_QualInfo_0_24, STATE_VARIABLE_QualInfo_25, STATE_VARIABLE_Specs_28_28, STATE_VARIABLE_Specs_27);
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(
  MR_Word PromiseType_13,
  MR_Word HeadVars_14,
  MR_Word VarSet_15,
  MR_Word Goal_16,
  MR_Word Context_17,
  MR_Word Status_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_QualInfo_0_28,
  MR_Word * STATE_VARIABLE_QualInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Integer Line_22;
    MR_String File_23;
    MR_String Name_24;
    MR_Word ModuleName_25;
    MR_String Var_35;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_String Var_51;
    MR_String Var_52;
    MR_String Var_59;
    MR_String Var_61;

    mercury__term__context_line_2_p_0(Context_17, &Line_22);
    mercury__term__context_file_2_p_0(Context_17, &File_23);
    Var_35 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_13);
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "__", File_23);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[0]), Line_22, &Var_52);
    Var_59 = mercury__string__f_43_43_2_f_0(Var_52, Var_51);
    Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_59);
    Name_24 = mercury__string__f_43_43_2_f_0(Var_35, Var_61);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &ModuleName_25);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (ModuleName_25));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Name_24));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Goal_16));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = (MR_Box) ((MR_Unsigned) (PromiseType_13));
    }
    hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSet_15, (MR_Integer) 0, Var_42, HeadVars_14, Var_43, Status_18, Context_17, (MR_Word) ((MR_Unsigned) 0U), Var_45, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_QualInfo_0_28, STATE_VARIABLE_QualInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clause_7_p_0(
  MR_Word StatusItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_QualInfo_0_26,
  MR_Word * STATE_VARIABLE_QualInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 0))));
    MR_Word ItemClauseInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 1))));
    MR_Word PredSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 0))));
    MR_Word PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Args_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 2))));
    MR_Word VarSet_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 4))));
    MR_Word MaybeBodyGoal_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 5))));
    MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 6))));
    MR_Integer SeqNum_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 7))));
    MR_Word PredStatus_23;
    MR_Word Var_30;

    hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_23);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (SeqNum_21));
    }
    hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSet_18, PredOrFunc_15, PredSymName_14, Args_16, MaybeBodyGoal_19, PredStatus_23, Context_20, Var_30, (MR_Word) ((MR_Unsigned) 12U), STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25, STATE_VARIABLE_QualInfo_0_26, STATE_VARIABLE_QualInfo_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(
  MR_Word SectionItem_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33)
{
  {
    MR_bool succeeded;
    MR_Word ItemPredDecl_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_4, (MR_Integer) 1))));
    MR_Word PredSymName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 0))));
    MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 2))));
    MR_String PredName_22;

    PredName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_8);
    succeeded = (strcmp(PredName_22, (MR_String) "") == 0);
    if (succeeded)
      *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
    else
      switch (PredOrFunc_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer Arity_23;
            MR_Integer FuncArity_24;
            MR_Word PredTable0_25;
            MR_Word PredIds_26;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes_10, &Arity_23);
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_24, Arity_23);
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &PredTable0_25);
            hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredTable0_25, (MR_Integer) 0, PredSymName_8, FuncArity_24, &PredIds_26);
            if ((PredIds_26 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.maybe_add_default_mode\'/3", (MR_String) "can\'t find func declaration");
                return;
              }
            else
            {
              MR_Word Preds0_29;
              MR_Word Preds_30;
              MR_Word PredTable_31;

              hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable0_25, &Preds0_29);
              hlds__default_func_mode__maybe_add_default_func_modes_3_p_0(PredIds_26, Preds0_29, &Preds_30);
              hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_30, PredTable0_25, &PredTable_31);
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_31, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33);
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
          break;
      }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decl_5_p_0(
  MR_Word StatusItem_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_bool succeeded;
    MR_Word ItemMercuryStatus_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 0))));
    MR_Word ItemModeDecl_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 1))));
    MR_Word PredSymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 0))));
    MR_Word MaybePredOrFunc_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 1))));
    MR_Word Modes_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 2))));
    MR_Word MaybeDet_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 4))));
    MR_Word VarSet_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 5))));
    MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 6))));
    MR_Integer SeqNum_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 7))));
    MR_String PredName_19;

    PredName_19 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_11);
    succeeded = (strcmp(PredName_19, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word Spec_21;

      {
        Spec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_mode_decl\'/5"));
        MR_hl_field(MR_mktag(1), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_21, 3) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(1), Spec_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[33])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_28 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
      }
      *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
    }
    else
    if ((MaybePredOrFunc_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_mode_decl\'/5", (MR_String) "no pred_or_func on mode declaration");
        return;
      }
    else
    {
      MR_Word PredOrFunc_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_12, (MR_Integer) 0))));
      MR_Word ModeStatus_23;
      MR_Word Var_43;
      MR_Word Var_24;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &ModeStatus_23);
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (ItemMercuryStatus_9));
      }
      hlds__add_pred__module_add_mode_15_p_0(Context_17, SeqNum_18, Var_43, ModeStatus_23, PredOrFunc_22, PredSymName_11, VarSet_16, Modes_13, MaybeDet_15, (MR_Integer) 0, &Var_24, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0(
  MR_Word SectionItem_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * STATE_VARIABLE_ModuleInfo_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    MR_bool succeeded;
    MR_Word SectionInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 0))));
    MR_Word ItemPredDecl_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 1))));
    MR_Word PredSymName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 0))));
    MR_Word PredOrFunc_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word Context_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 12))));
    MR_String PredName_25;

    PredName_25 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_11);
    succeeded = (strcmp(PredName_25, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word Pieces_26;
      MR_Word Spec_27;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_String Var_40;

      Var_40 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[29])));
      }
      {
        Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[70])));
        MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_38));
      }
      {
        Spec_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pred_decl\'/5"));
        MR_hl_field(MR_mktag(1), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_27, 3) = ((MR_Box) (Context_23));
        MR_hl_field(MR_mktag(1), Spec_27, 4) = ((MR_Box) (Pieces_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_35 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_34));
      }
      *STATE_VARIABLE_ModuleInfo_33 = STATE_VARIABLE_ModuleInfo_0_32;
    }
    else
    {
      MR_Word ItemMercuryStatus_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_9, (MR_Integer) 0))));
      MR_Word NeedQual_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectionInfo_9, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word PredStatus_30;
      MR_Word _MaybePredProcId_31;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_28, &PredStatus_30);
      hlds__add_pred__module_add_pred_decl_8_p_0(PredStatus_30, NeedQual_29, ItemPredDecl_10, &_MaybePredProcId_31, STATE_VARIABLE_ModuleInfo_0_32, STATE_VARIABLE_ModuleInfo_33, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defn_7_p_0(
  MR_Word StatusItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_0_17,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 0))));
    MR_Word ItemModeDefnInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 1))));
    MR_Word ModeStatus_14;

    hlds__status__item_mercury_status_to_mode_status_2_p_0(ItemMercuryStatus_12, &ModeStatus_14);
    hlds__make_hlds__add_mode__module_add_mode_defn_8_p_0(ItemModeDefnInfo_13, ModeStatus_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_FoundInvalidInstOrMode_0_17, STATE_VARIABLE_FoundInvalidInstOrMode_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defn_7_p_0(
  MR_Word StatusItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_0_17,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 0))));
    MR_Word ItemInstDefnInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 1))));
    MR_Word InstStatus_14;

    hlds__status__item_mercury_status_to_inst_status_2_p_0(ItemMercuryStatus_12, &InstStatus_14);
    hlds__make_hlds__add_mode__module_add_inst_defn_8_p_0(ItemInstDefnInfo_13, InstStatus_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_FoundInvalidInstOrMode_0_17, STATE_VARIABLE_FoundInvalidInstOrMode_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_59;

    hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__604__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_59);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_59));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(
  MR_Word SectionItem_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_41,
  MR_Word * STATE_VARIABLE_FoundInvalidType_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44,
  MR_Word STATE_VARIABLE_SolverAuxPredInfos_0_45,
  MR_Word * STATE_VARIABLE_SolverAuxPredInfos_46,
  MR_Word STATE_VARIABLE_SectionMutableItems_0_47,
  MR_Word * STATE_VARIABLE_SectionMutableItems_48)
{
  {
    MR_Word SectionInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_12, (MR_Integer) 0))));
    MR_Word ItemTypeDefnInfo_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionItem_12, (MR_Integer) 1))));
    MR_Word ItemMercuryStatus_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SectionInfo_18, (MR_Integer) 0))));
    MR_Word NeedQual_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SectionInfo_18, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 0))));
    MR_Word TypeParams_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 1))));
    MR_Word TypeDefn_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 2))));
    MR_Word TypeVarSet_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 3))));
    MR_Word Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 4))));
    MR_Word TypeStatus_38;

    switch (MR_tag((MR_Word) TypeDefn_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_SolverAuxPredInfos_46 = STATE_VARIABLE_SolverAuxPredInfos_0_45;
          *STATE_VARIABLE_SectionMutableItems_48 = STATE_VARIABLE_SectionMutableItems_0_47;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Detailssolver_28 = (MR_Word) (MR_body((MR_Word) (TypeDefn_24), (MR_Integer) 1));
          MR_Word SolverTypeDetails_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Detailssolver_28, (MR_Integer) 0))));
          MR_Word SolverAuxPredInfo_31;
          MR_Word MutableItems_32;
          MR_Word TypeSectionMutableItems_33;
          MR_Word Var_50;

          {
            SolverAuxPredInfo_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 0) = ((MR_Box) (SymName_22));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 1) = ((MR_Box) (TypeParams_23));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 2) = ((MR_Box) (TypeVarSet_25));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 3) = ((MR_Box) (SolverTypeDetails_29));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 4) = ((MR_Box) (Context_26));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 5) = ((MR_Box) (ItemMercuryStatus_20));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 6) = (MR_Box) ((MR_Unsigned) (NeedQual_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_SolverAuxPredInfos_46 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SolverAuxPredInfo_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_SolverAuxPredInfos_0_45));
          }
          MutableItems_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_29, (MR_Integer) 3))));
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[4]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (SectionInfo_18));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]), Var_50, MutableItems_32, &TypeSectionMutableItems_33);
          *STATE_VARIABLE_SectionMutableItems_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]), TypeSectionMutableItems_33, STATE_VARIABLE_SectionMutableItems_0_47);
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_SolverAuxPredInfos_46 = STATE_VARIABLE_SolverAuxPredInfos_0_45;
          *STATE_VARIABLE_SectionMutableItems_48 = STATE_VARIABLE_SectionMutableItems_0_47;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_24, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_SolverAuxPredInfos_46 = STATE_VARIABLE_SolverAuxPredInfos_0_45;
              *STATE_VARIABLE_SectionMutableItems_48 = STATE_VARIABLE_SectionMutableItems_0_47;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_SolverAuxPredInfos_46 = STATE_VARIABLE_SolverAuxPredInfos_0_45;
              *STATE_VARIABLE_SectionMutableItems_48 = STATE_VARIABLE_SectionMutableItems_0_47;
            }
            break;
        }
        break;
    }
    hlds__status__item_mercury_status_to_type_status_2_p_0(ItemMercuryStatus_20, &TypeStatus_38);
    hlds__make_hlds__add_type__module_add_type_defn_9_p_0(TypeStatus_38, NeedQual_21, ItemTypeDefnInfo_19, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, STATE_VARIABLE_Specs_0_43, STATE_VARIABLE_Specs_44);
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

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1(
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
hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0(
  MR_Word StatusItem_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_Word ItemMercuryStatus_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_4, (MR_Integer) 0))));
    MR_Word Avails_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StatusItem_4, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[2]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ItemMercuryStatus_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_10, Avails_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_9));
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
    hlds__add_special_pred__add_special_pred_decl_defns_for_type_eagerly_8_p_0(TVarSet_6, Type_9, TypeCtor_4, (MR_Word) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[69])), (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), Context_7, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_30(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv148_STATE_VARIABLE_QualInfo_9;

    hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv148_STATE_VARIABLE_QualInfo_9);
    *wrapper_arg_4 = ((MR_Box) (conv148_STATE_VARIABLE_QualInfo_9));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_29(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv146_HeadVar__4_4;

    hlds__add_pred__check_pred_if_field_access_function_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv146_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv146_HeadVar__4_4));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_28(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv143_HeadVar__3_3;
    MR_Word conv142_HeadVar__5_5;

    hlds__make_hlds__add_pragma__add_gen_pragma_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv143_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv142_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv143_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv142_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_27(
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
    MR_Word conv138_HeadVar__3_3;
    MR_Word conv137_HeadVar__5_5;
    MR_Word conv136_HeadVar__7_7;

    hlds__make_hlds__add_pragma__add_impl_pragma_tabled_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv138_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv137_HeadVar__5_5, ((MR_Word) (wrapper_arg_6)), &conv136_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv138_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv137_HeadVar__5_5));
    *wrapper_arg_7 = ((MR_Box) (conv136_HeadVar__7_7));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv131_HeadVar__3_3;
    MR_Word conv130_HeadVar__5_5;
    MR_Word conv129_HeadVar__7_7;
    MR_Word conv128_HeadVar__9_9;

    hlds__make_hlds__add_pragma__add_impl_pragma_9_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv131_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv130_HeadVar__5_5, ((MR_Word) (wrapper_arg_6)), &conv129_HeadVar__7_7, ((MR_Word) (wrapper_arg_8)), &conv128_HeadVar__9_9);
    *wrapper_arg_3 = ((MR_Box) (conv131_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv130_HeadVar__5_5));
    *wrapper_arg_7 = ((MR_Box) (conv129_HeadVar__7_7));
    *wrapper_arg_9 = ((MR_Box) (conv128_HeadVar__9_9));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25(
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
    MR_Word conv124_HeadVar__3_3;
    MR_Word conv123_HeadVar__5_5;
    MR_Word conv122_HeadVar__7_7;

    hlds__make_hlds__add_pragma__add_decl_pragma_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv124_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv123_HeadVar__5_5, ((MR_Word) (wrapper_arg_6)), &conv122_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv124_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv123_HeadVar__5_5));
    *wrapper_arg_7 = ((MR_Box) (conv122_HeadVar__7_7));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv119_STATE_VARIABLE_ModuleInfo_20;
    MR_Word conv118_STATE_VARIABLE_Specs_22;

    hlds__make_hlds__make_hlds_passes__add_finalise_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv119_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) (wrapper_arg_4)), &conv118_STATE_VARIABLE_Specs_22);
    *wrapper_arg_3 = ((MR_Box) (conv119_STATE_VARIABLE_ModuleInfo_20));
    *wrapper_arg_5 = ((MR_Box) (conv118_STATE_VARIABLE_Specs_22));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv115_STATE_VARIABLE_ModuleInfo_20;
    MR_Word conv114_STATE_VARIABLE_Specs_22;

    hlds__make_hlds__make_hlds_passes__add_initialise_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv115_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) (wrapper_arg_4)), &conv114_STATE_VARIABLE_Specs_22);
    *wrapper_arg_3 = ((MR_Box) (conv115_STATE_VARIABLE_ModuleInfo_20));
    *wrapper_arg_5 = ((MR_Box) (conv114_STATE_VARIABLE_Specs_22));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22(
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
    MR_Word conv110_STATE_VARIABLE_ModuleInfo_23;
    MR_Word conv109_STATE_VARIABLE_QualInfo_25;
    MR_Word conv108_STATE_VARIABLE_Specs_27;

    hlds__make_hlds__make_hlds_passes__add_promise_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv110_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) (wrapper_arg_4)), &conv109_STATE_VARIABLE_QualInfo_25, ((MR_Word) (wrapper_arg_6)), &conv108_STATE_VARIABLE_Specs_27);
    *wrapper_arg_3 = ((MR_Box) (conv110_STATE_VARIABLE_ModuleInfo_23));
    *wrapper_arg_5 = ((MR_Box) (conv109_STATE_VARIABLE_QualInfo_25));
    *wrapper_arg_7 = ((MR_Box) (conv108_STATE_VARIABLE_Specs_27));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21(
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
    MR_Word conv104_HeadVar__3_3;
    MR_Word conv103_HeadVar__5_5;
    MR_Word conv102_HeadVar__7_7;

    hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv104_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv103_HeadVar__5_5, ((MR_Word) (wrapper_arg_6)), &conv102_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv104_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv103_HeadVar__5_5));
    *wrapper_arg_7 = ((MR_Box) (conv102_HeadVar__7_7));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20(
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
    MR_Word conv98_HeadVar__3_3;
    MR_Word conv97_HeadVar__5_5;
    MR_Word conv96_HeadVar__7_7;

    hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv98_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv97_HeadVar__5_5, ((MR_Word) (wrapper_arg_6)), &conv96_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv98_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv97_HeadVar__5_5));
    *wrapper_arg_7 = ((MR_Box) (conv96_HeadVar__7_7));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19(
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
    MR_Word conv92_HeadVar__3_3;
    MR_Word conv91_HeadVar__5_5;
    MR_Word conv90_HeadVar__7_7;

    hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_if_local_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv92_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv91_HeadVar__5_5, ((MR_Word) (wrapper_arg_6)), &conv90_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv92_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv91_HeadVar__5_5));
    *wrapper_arg_7 = ((MR_Box) (conv90_HeadVar__7_7));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18(
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
    MR_Word conv86_STATE_VARIABLE_ModuleInfo_25;
    MR_Word conv85_STATE_VARIABLE_QualInfo_27;
    MR_Word conv84_STATE_VARIABLE_Specs_29;

    hlds__make_hlds__make_hlds_passes__add_clause_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv86_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) (wrapper_arg_4)), &conv85_STATE_VARIABLE_QualInfo_27, ((MR_Word) (wrapper_arg_6)), &conv84_STATE_VARIABLE_Specs_29);
    *wrapper_arg_3 = ((MR_Box) (conv86_STATE_VARIABLE_ModuleInfo_25));
    *wrapper_arg_5 = ((MR_Box) (conv85_STATE_VARIABLE_QualInfo_27));
    *wrapper_arg_7 = ((MR_Box) (conv84_STATE_VARIABLE_Specs_29));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv82_STATE_VARIABLE_ModuleInfo_12;

    hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv82_STATE_VARIABLE_ModuleInfo_12);
    *wrapper_arg_3 = ((MR_Box) (conv82_STATE_VARIABLE_ModuleInfo_12));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16(
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
    MR_Word conv78_HeadVar__4_4;
    MR_Word conv77_HeadVar__6_6;
    MR_Word conv76_HeadVar__8_8;

    hlds__make_hlds__add_type__add_du_ctors_check_foreign_type_for_cur_backend_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv78_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv77_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv76_HeadVar__8_8);
    *wrapper_arg_4 = ((MR_Box) (conv78_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv77_HeadVar__6_6));
    *wrapper_arg_8 = ((MR_Box) (conv76_HeadVar__8_8));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv74_HeadVar__3_3;

    hlds__hlds_module__module_add_item_fim_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv74_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv74_HeadVar__3_3));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv71_HeadVar__3_3;
    MR_Word conv70_HeadVar__5_5;

    hlds__make_hlds__add_class__add_instance_defn_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv71_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv70_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv71_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv70_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv68_STATE_VARIABLE_ModuleInfo_33;

    hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv68_STATE_VARIABLE_ModuleInfo_33);
    *wrapper_arg_3 = ((MR_Box) (conv68_STATE_VARIABLE_ModuleInfo_33));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv65_HeadVar__3_3;
    MR_Word conv64_HeadVar__5_5;

    hlds__make_hlds__add_class__add_typeclass_defn_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv65_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv64_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv65_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv64_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv61_HeadVar__3_3;
    MR_Word conv60_HeadVar__5_5;

    hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv61_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv60_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv61_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv60_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv57_HeadVar__3_3;
    MR_Word conv56_HeadVar__5_5;

    hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv57_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv56_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv57_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv56_HeadVar__5_5));
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
    MR_Word conv53_HeadVar__3_3;
    MR_Word conv52_HeadVar__5_5;

    hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv53_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv52_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv53_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv52_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv49_STATE_VARIABLE_ModuleInfo_26;
    MR_Word conv48_STATE_VARIABLE_Specs_28;

    hlds__make_hlds__make_hlds_passes__add_mode_decl_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv49_STATE_VARIABLE_ModuleInfo_26, ((MR_Word) (wrapper_arg_4)), &conv48_STATE_VARIABLE_Specs_28);
    *wrapper_arg_3 = ((MR_Box) (conv49_STATE_VARIABLE_ModuleInfo_26));
    *wrapper_arg_5 = ((MR_Box) (conv48_STATE_VARIABLE_Specs_28));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv45_STATE_VARIABLE_ModuleInfo_33;
    MR_Word conv44_STATE_VARIABLE_Specs_35;

    hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv45_STATE_VARIABLE_ModuleInfo_33, ((MR_Word) (wrapper_arg_4)), &conv44_STATE_VARIABLE_Specs_35);
    *wrapper_arg_3 = ((MR_Box) (conv45_STATE_VARIABLE_ModuleInfo_33));
    *wrapper_arg_5 = ((MR_Box) (conv44_STATE_VARIABLE_Specs_35));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6(
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
    MR_Word conv40_STATE_VARIABLE_ModuleInfo_16;
    MR_Word conv39_STATE_VARIABLE_FoundInvalidInstOrMode_18;
    MR_Word conv38_STATE_VARIABLE_Specs_20;

    hlds__make_hlds__make_hlds_passes__add_mode_defn_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv40_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) (wrapper_arg_4)), &conv39_STATE_VARIABLE_FoundInvalidInstOrMode_18, ((MR_Word) (wrapper_arg_6)), &conv38_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv40_STATE_VARIABLE_ModuleInfo_16));
    *wrapper_arg_5 = ((MR_Box) (conv39_STATE_VARIABLE_FoundInvalidInstOrMode_18));
    *wrapper_arg_7 = ((MR_Box) (conv38_STATE_VARIABLE_Specs_20));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5(
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
    MR_Word conv34_STATE_VARIABLE_ModuleInfo_16;
    MR_Word conv33_STATE_VARIABLE_FoundInvalidInstOrMode_18;
    MR_Word conv32_STATE_VARIABLE_Specs_20;

    hlds__make_hlds__make_hlds_passes__add_inst_defn_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv34_STATE_VARIABLE_ModuleInfo_16, ((MR_Word) (wrapper_arg_4)), &conv33_STATE_VARIABLE_FoundInvalidInstOrMode_18, ((MR_Word) (wrapper_arg_6)), &conv32_STATE_VARIABLE_Specs_20);
    *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_ModuleInfo_16));
    *wrapper_arg_5 = ((MR_Box) (conv33_STATE_VARIABLE_FoundInvalidInstOrMode_18));
    *wrapper_arg_7 = ((MR_Box) (conv32_STATE_VARIABLE_Specs_20));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
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
    MR_Word conv26_STATE_VARIABLE_ModuleInfo_40;
    MR_Word conv25_STATE_VARIABLE_FoundInvalidType_42;
    MR_Word conv24_STATE_VARIABLE_Specs_44;
    MR_Word conv23_STATE_VARIABLE_SolverAuxPredInfos_46;
    MR_Word conv22_STATE_VARIABLE_SectionMutableItems_48;

    hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv26_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) (wrapper_arg_4)), &conv25_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) (wrapper_arg_6)), &conv24_STATE_VARIABLE_Specs_44, ((MR_Word) (wrapper_arg_8)), &conv23_STATE_VARIABLE_SolverAuxPredInfos_46, ((MR_Word) (wrapper_arg_10)), &conv22_STATE_VARIABLE_SectionMutableItems_48);
    *wrapper_arg_3 = ((MR_Box) (conv26_STATE_VARIABLE_ModuleInfo_40));
    *wrapper_arg_5 = ((MR_Box) (conv25_STATE_VARIABLE_FoundInvalidType_42));
    *wrapper_arg_7 = ((MR_Box) (conv24_STATE_VARIABLE_Specs_44));
    *wrapper_arg_9 = ((MR_Box) (conv23_STATE_VARIABLE_SolverAuxPredInfos_46));
    *wrapper_arg_11 = ((MR_Box) (conv22_STATE_VARIABLE_SectionMutableItems_48));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
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
    MR_Word conv16_STATE_VARIABLE_ModuleInfo_40;
    MR_Word conv15_STATE_VARIABLE_FoundInvalidType_42;
    MR_Word conv14_STATE_VARIABLE_Specs_44;
    MR_Word conv13_STATE_VARIABLE_SolverAuxPredInfos_46;
    MR_Word conv12_STATE_VARIABLE_SectionMutableItems_48;

    hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) (wrapper_arg_4)), &conv15_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) (wrapper_arg_6)), &conv14_STATE_VARIABLE_Specs_44, ((MR_Word) (wrapper_arg_8)), &conv13_STATE_VARIABLE_SolverAuxPredInfos_46, ((MR_Word) (wrapper_arg_10)), &conv12_STATE_VARIABLE_SectionMutableItems_48);
    *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_ModuleInfo_40));
    *wrapper_arg_5 = ((MR_Box) (conv15_STATE_VARIABLE_FoundInvalidType_42));
    *wrapper_arg_7 = ((MR_Box) (conv14_STATE_VARIABLE_Specs_44));
    *wrapper_arg_9 = ((MR_Box) (conv13_STATE_VARIABLE_SolverAuxPredInfos_46));
    *wrapper_arg_11 = ((MR_Box) (conv12_STATE_VARIABLE_SectionMutableItems_48));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
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
    MR_Word conv6_STATE_VARIABLE_ModuleInfo_40;
    MR_Word conv5_STATE_VARIABLE_FoundInvalidType_42;
    MR_Word conv4_STATE_VARIABLE_Specs_44;
    MR_Word conv3_STATE_VARIABLE_SolverAuxPredInfos_46;
    MR_Word conv2_STATE_VARIABLE_SectionMutableItems_48;

    hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_Specs_44, ((MR_Word) (wrapper_arg_8)), &conv3_STATE_VARIABLE_SolverAuxPredInfos_46, ((MR_Word) (wrapper_arg_10)), &conv2_STATE_VARIABLE_SectionMutableItems_48);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_40));
    *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_FoundInvalidType_42));
    *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_44));
    *wrapper_arg_9 = ((MR_Box) (conv3_STATE_VARIABLE_SolverAuxPredInfos_46));
    *wrapper_arg_11 = ((MR_Box) (conv2_STATE_VARIABLE_SectionMutableItems_48));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_9;

    hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(
  MR_Word AugCompUnit_12,
  MR_Word Globals_13,
  MR_String DumpBaseFileName_14,
  MR_Word MQInfo0_15,
  MR_Word TypeEqvMapMap_16,
  MR_Word UsedModules_17,
  MR_Word * STATE_VARIABLE_QualInfo_73,
  MR_Word * STATE_VARIABLE_FoundInvalidType_74,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_75,
  MR_Word * STATE_VARIABLE_ModuleInfo_76,
  MR_Word * STATE_VARIABLE_Specs_77)
{
  {
    MR_bool succeeded;
    MR_Word PQInfo_23;
    MR_Word ModuleName_28;
    MR_Word ModuleVersionNumbers_30;
    MR_Word ItemAvailLists_38;
    MR_Word ItemFIMs_39;
    MR_Word ItemTypeDefnsAbstract_40;
    MR_Word ItemTypeDefnsMercury_41;
    MR_Word ItemTypeDefnsForeign_42;
    MR_Word ItemInstDefns_43;
    MR_Word ItemModeDefns_44;
    MR_Word ItemPredDecls_45;
    MR_Word ItemModeDecls_46;
    MR_Word ItemPromises_47;
    MR_Word ItemTypeclasses_48;
    MR_Word ItemInstances_49;
    MR_Word ItemInitialises_50;
    MR_Word ItemFinalises_51;
    MR_Word ItemMutables_52;
    MR_Word TypeRepnMap_53;
    MR_Word ItemForeignEnums_54;
    MR_Word ItemForeignExportEnums_55;
    MR_Word ItemPragmasDecl_56;
    MR_Word ItemPragmasImpl_57;
    MR_Word PragmasGen_58;
    MR_Word ItemClauses_59;
    MR_Word IntBadClauses_60;
    MR_Word DirectArgMap_61;
    MR_Word TypeRepnDec_62;
    MR_Word SolverAuxPredInfos_63;
    MR_Word SolverItemMutables_64;
    MR_Word RevItemPragmasTabled_66;
    MR_Word ItemPragmasTabled_67;
    MR_Word MQInfo_68;
    MR_Word MQUndefType_69;
    MR_Word MQUndefInst_70;
    MR_Word MQUndefMode_71;
    MR_Word MQUndefTypeClass_72;
    MR_Word STATE_VARIABLE_ModuleInfo_79_79;
    MR_Word STATE_VARIABLE_ModuleInfo_80_80;
    MR_Word STATE_VARIABLE_ModuleInfo_86_86;
    MR_Word STATE_VARIABLE_ModuleInfo_91_91;
    MR_Word STATE_VARIABLE_ModuleInfo_95_95;
    MR_Word STATE_VARIABLE_FoundInvalidType_96_96;
    MR_Word STATE_VARIABLE_Specs_97_97;
    MR_Word STATE_VARIABLE_SolverAuxPredInfos_98_98;
    MR_Word STATE_VARIABLE_SolverItemMutables_99_99;
    MR_Word STATE_VARIABLE_ModuleInfo_101_101;
    MR_Word STATE_VARIABLE_FoundInvalidType_102_102;
    MR_Word STATE_VARIABLE_Specs_103_103;
    MR_Word STATE_VARIABLE_SolverAuxPredInfos_104_104;
    MR_Word STATE_VARIABLE_SolverItemMutables_105_105;
    MR_Word STATE_VARIABLE_ModuleInfo_107_107;
    MR_Word STATE_VARIABLE_FoundInvalidType_108_108;
    MR_Word STATE_VARIABLE_Specs_109_109;
    MR_Word STATE_VARIABLE_ModuleInfo_113_113;
    MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_114_114;
    MR_Word STATE_VARIABLE_Specs_115_115;
    MR_Word STATE_VARIABLE_ModuleInfo_117_117;
    MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_118_118;
    MR_Word STATE_VARIABLE_Specs_119_119;
    MR_Word STATE_VARIABLE_ModuleInfo_121_121;
    MR_Word STATE_VARIABLE_Specs_122_122;
    MR_Word STATE_VARIABLE_ModuleInfo_124_124;
    MR_Word STATE_VARIABLE_Specs_125_125;
    MR_Word STATE_VARIABLE_ModuleInfo_127_127;
    MR_Word STATE_VARIABLE_Specs_128_128;
    MR_Word STATE_VARIABLE_ModuleInfo_130_130;
    MR_Word STATE_VARIABLE_Specs_131_131;
    MR_Word STATE_VARIABLE_ModuleInfo_133_133;
    MR_Word STATE_VARIABLE_Specs_134_134;
    MR_Word STATE_VARIABLE_ModuleInfo_136_136;
    MR_Word STATE_VARIABLE_Specs_137_137;
    MR_Word STATE_VARIABLE_ModuleInfo_139_139;
    MR_Word STATE_VARIABLE_ModuleInfo_141_141;
    MR_Word STATE_VARIABLE_Specs_142_142;
    MR_Word STATE_VARIABLE_ModuleInfo_144_144;
    MR_Word STATE_VARIABLE_FoundInvalidType_146_146;
    MR_Word STATE_VARIABLE_ModuleInfo_147_147;
    MR_Word STATE_VARIABLE_Specs_148_148;
    MR_Word STATE_VARIABLE_ModuleInfo_151_151;
    MR_Word STATE_VARIABLE_ModuleInfo_152_152;
    MR_Word STATE_VARIABLE_QualInfo_153_153;
    MR_Word STATE_VARIABLE_ModuleInfo_155_155;
    MR_Word STATE_VARIABLE_QualInfo_156_156;
    MR_Word STATE_VARIABLE_Specs_157_157;
    MR_Word STATE_VARIABLE_ModuleInfo_158_158;
    MR_Word STATE_VARIABLE_ModuleInfo_160_160;
    MR_Word STATE_VARIABLE_QualInfo_161_161;
    MR_Word STATE_VARIABLE_Specs_162_162;
    MR_Word STATE_VARIABLE_ModuleInfo_164_164;
    MR_Word STATE_VARIABLE_QualInfo_165_165;
    MR_Word STATE_VARIABLE_Specs_166_166;
    MR_Word STATE_VARIABLE_ModuleInfo_168_168;
    MR_Word STATE_VARIABLE_QualInfo_169_169;
    MR_Word STATE_VARIABLE_Specs_170_170;
    MR_Word STATE_VARIABLE_ModuleInfo_172_172;
    MR_Word STATE_VARIABLE_QualInfo_173_173;
    MR_Word STATE_VARIABLE_Specs_174_174;
    MR_Word STATE_VARIABLE_ModuleInfo_176_176;
    MR_Word STATE_VARIABLE_Specs_177_177;
    MR_Word STATE_VARIABLE_ModuleInfo_179_179;
    MR_Word STATE_VARIABLE_Specs_180_180;
    MR_Word STATE_VARIABLE_ModuleInfo_182_182;
    MR_Word STATE_VARIABLE_QualInfo_183_183;
    MR_Word STATE_VARIABLE_Specs_184_184;
    MR_Word STATE_VARIABLE_ModuleInfo_187_187;
    MR_Word STATE_VARIABLE_QualInfo_188_188;
    MR_Word STATE_VARIABLE_Specs_189_189;
    MR_Word STATE_VARIABLE_ModuleInfo_191_191;
    MR_Word STATE_VARIABLE_QualInfo_192_192;
    MR_Word STATE_VARIABLE_Specs_193_193;
    MR_Word STATE_VARIABLE_Specs_196_196;
    MR_Word Var_197;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_91_91;
    MR_Box conv11_STATE_VARIABLE_ModuleInfo_95_95;
    MR_Box conv10_STATE_VARIABLE_FoundInvalidType_96_96;
    MR_Box conv9_STATE_VARIABLE_Specs_97_97;
    MR_Box conv8_STATE_VARIABLE_SolverAuxPredInfos_98_98;
    MR_Box conv7_STATE_VARIABLE_SolverItemMutables_99_99;
    MR_Box conv21_STATE_VARIABLE_ModuleInfo_101_101;
    MR_Box conv20_STATE_VARIABLE_FoundInvalidType_102_102;
    MR_Box conv19_STATE_VARIABLE_Specs_103_103;
    MR_Box conv18_STATE_VARIABLE_SolverAuxPredInfos_104_104;
    MR_Box conv17_STATE_VARIABLE_SolverItemMutables_105_105;
    MR_Box conv31_STATE_VARIABLE_ModuleInfo_107_107;
    MR_Box conv30_STATE_VARIABLE_FoundInvalidType_108_108;
    MR_Box conv29_STATE_VARIABLE_Specs_109_109;
    MR_Box conv28_SolverAuxPredInfos_63;
    MR_Box conv27_SolverItemMutables_64;
    MR_Box conv37_STATE_VARIABLE_ModuleInfo_113_113;
    MR_Box conv36_STATE_VARIABLE_FoundInvalidInstOrMode_114_114;
    MR_Box conv35_STATE_VARIABLE_Specs_115_115;
    MR_Box conv43_STATE_VARIABLE_ModuleInfo_117_117;
    MR_Box conv42_STATE_VARIABLE_FoundInvalidInstOrMode_118_118;
    MR_Box conv41_STATE_VARIABLE_Specs_119_119;
    MR_Box conv47_STATE_VARIABLE_ModuleInfo_121_121;
    MR_Box conv46_STATE_VARIABLE_Specs_122_122;
    MR_Box conv51_STATE_VARIABLE_ModuleInfo_124_124;
    MR_Box conv50_STATE_VARIABLE_Specs_125_125;
    MR_Box conv55_STATE_VARIABLE_ModuleInfo_127_127;
    MR_Box conv54_STATE_VARIABLE_Specs_128_128;
    MR_Box conv59_STATE_VARIABLE_ModuleInfo_130_130;
    MR_Box conv58_STATE_VARIABLE_Specs_131_131;
    MR_Box conv63_STATE_VARIABLE_ModuleInfo_133_133;
    MR_Box conv62_STATE_VARIABLE_Specs_134_134;
    MR_Box conv67_STATE_VARIABLE_ModuleInfo_136_136;
    MR_Box conv66_STATE_VARIABLE_Specs_137_137;
    MR_Box conv69_STATE_VARIABLE_ModuleInfo_139_139;
    MR_Box conv73_STATE_VARIABLE_ModuleInfo_141_141;
    MR_Box conv72_STATE_VARIABLE_Specs_142_142;
    MR_Box conv75_STATE_VARIABLE_ModuleInfo_144_144;
    MR_Word Var_418;
    MR_Box conv89_STATE_VARIABLE_ModuleInfo_155_155;
    MR_Box conv88_STATE_VARIABLE_QualInfo_156_156;
    MR_Box conv87_STATE_VARIABLE_Specs_157_157;
    MR_Box conv95_STATE_VARIABLE_ModuleInfo_160_160;
    MR_Box conv94_STATE_VARIABLE_QualInfo_161_161;
    MR_Box conv93_STATE_VARIABLE_Specs_162_162;
    MR_Box conv101_STATE_VARIABLE_ModuleInfo_164_164;
    MR_Box conv100_STATE_VARIABLE_QualInfo_165_165;
    MR_Box conv99_STATE_VARIABLE_Specs_166_166;
    MR_Box conv107_STATE_VARIABLE_ModuleInfo_168_168;
    MR_Box conv106_STATE_VARIABLE_QualInfo_169_169;
    MR_Box conv105_STATE_VARIABLE_Specs_170_170;
    MR_Box conv113_STATE_VARIABLE_ModuleInfo_172_172;
    MR_Box conv112_STATE_VARIABLE_QualInfo_173_173;
    MR_Box conv111_STATE_VARIABLE_Specs_174_174;
    MR_Box conv117_STATE_VARIABLE_ModuleInfo_176_176;
    MR_Box conv116_STATE_VARIABLE_Specs_177_177;
    MR_Box conv121_STATE_VARIABLE_ModuleInfo_179_179;
    MR_Box conv120_STATE_VARIABLE_Specs_180_180;
    MR_Box conv127_STATE_VARIABLE_ModuleInfo_182_182;
    MR_Box conv126_STATE_VARIABLE_QualInfo_183_183;
    MR_Box conv125_STATE_VARIABLE_Specs_184_184;
    MR_Box conv135_RevItemPragmasTabled_66;
    MR_Box conv134_STATE_VARIABLE_ModuleInfo_187_187;
    MR_Box conv133_STATE_VARIABLE_QualInfo_188_188;
    MR_Box conv132_STATE_VARIABLE_Specs_189_189;
    MR_Box conv141_STATE_VARIABLE_ModuleInfo_191_191;
    MR_Box conv140_STATE_VARIABLE_QualInfo_192_192;
    MR_Box conv139_STATE_VARIABLE_Specs_193_193;
    MR_Box conv145_STATE_VARIABLE_ModuleInfo_76;
    MR_Box conv144_STATE_VARIABLE_Specs_196_196;
    MR_Box conv147_STATE_VARIABLE_Specs_77;
    MR_Box conv149_STATE_VARIABLE_QualInfo_73;

    parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(MQInfo0_15, &PQInfo_23);
    hlds__hlds_module__module_info_init_6_p_0(AugCompUnit_12, DumpBaseFileName_14, Globals_13, PQInfo_23, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_ModuleInfo_79_79);
    hlds__hlds_module__module_info_set_used_modules_3_p_0(UsedModules_17, STATE_VARIABLE_ModuleInfo_79_79, &STATE_VARIABLE_ModuleInfo_80_80);
    ModuleName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 0))));
    ModuleVersionNumbers_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 2))));
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_24_p_0(AugCompUnit_12, &ItemAvailLists_38, &ItemFIMs_39, &ItemTypeDefnsAbstract_40, &ItemTypeDefnsMercury_41, &ItemTypeDefnsForeign_42, &ItemInstDefns_43, &ItemModeDefns_44, &ItemPredDecls_45, &ItemModeDecls_46, &ItemPromises_47, &ItemTypeclasses_48, &ItemInstances_49, &ItemInitialises_50, &ItemFinalises_51, &ItemMutables_52, &TypeRepnMap_53, &ItemForeignEnums_54, &ItemForeignExportEnums_55, &ItemPragmasDecl_56, &ItemPragmasImpl_57, &PragmasGen_58, &ItemClauses_59, &IntBadClauses_60);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[0]), &DirectArgMap_61);
    {
      TypeRepnDec_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeRepnDec_62, 0) = ((MR_Box) (TypeRepnMap_53));
      MR_hl_field(MR_mktag(0), TypeRepnDec_62, 1) = ((MR_Box) (DirectArgMap_61));
      MR_hl_field(MR_mktag(0), TypeRepnDec_62, 2) = ((MR_Box) (ItemForeignEnums_54));
      MR_hl_field(MR_mktag(0), TypeRepnDec_62, 3) = ((MR_Box) (ItemForeignExportEnums_55));
    }
    hlds__hlds_module__module_info_set_type_repn_dec_3_p_0(TypeRepnDec_62, STATE_VARIABLE_ModuleInfo_80_80, &STATE_VARIABLE_ModuleInfo_86_86);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[2]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[0]), ItemAvailLists_38, ((MR_Box) (STATE_VARIABLE_ModuleInfo_86_86)), &conv1_STATE_VARIABLE_ModuleInfo_91_91);
    STATE_VARIABLE_ModuleInfo_91_91 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_91_91));
    mercury__list__foldl5_12_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[6]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[1]), ItemTypeDefnsAbstract_40, ((MR_Box) (STATE_VARIABLE_ModuleInfo_91_91)), &conv11_STATE_VARIABLE_ModuleInfo_95_95, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_FoundInvalidType_96_96, ((MR_Box) ((MR_Unsigned) 0U)), &conv9_STATE_VARIABLE_Specs_97_97, ((MR_Box) ((MR_Unsigned) 0U)), &conv8_STATE_VARIABLE_SolverAuxPredInfos_98_98, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_STATE_VARIABLE_SolverItemMutables_99_99);
    STATE_VARIABLE_ModuleInfo_95_95 = ((MR_Word) (conv11_STATE_VARIABLE_ModuleInfo_95_95));
    STATE_VARIABLE_FoundInvalidType_96_96 = ((MR_Word) (conv10_STATE_VARIABLE_FoundInvalidType_96_96));
    STATE_VARIABLE_Specs_97_97 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_97_97));
    STATE_VARIABLE_SolverAuxPredInfos_98_98 = ((MR_Word) (conv8_STATE_VARIABLE_SolverAuxPredInfos_98_98));
    STATE_VARIABLE_SolverItemMutables_99_99 = ((MR_Word) (conv7_STATE_VARIABLE_SolverItemMutables_99_99));
    mercury__list__foldl5_12_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[6]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[2]), ItemTypeDefnsMercury_41, ((MR_Box) (STATE_VARIABLE_ModuleInfo_95_95)), &conv21_STATE_VARIABLE_ModuleInfo_101_101, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_96_96)), &conv20_STATE_VARIABLE_FoundInvalidType_102_102, ((MR_Box) (STATE_VARIABLE_Specs_97_97)), &conv19_STATE_VARIABLE_Specs_103_103, ((MR_Box) (STATE_VARIABLE_SolverAuxPredInfos_98_98)), &conv18_STATE_VARIABLE_SolverAuxPredInfos_104_104, ((MR_Box) (STATE_VARIABLE_SolverItemMutables_99_99)), &conv17_STATE_VARIABLE_SolverItemMutables_105_105);
    STATE_VARIABLE_ModuleInfo_101_101 = ((MR_Word) (conv21_STATE_VARIABLE_ModuleInfo_101_101));
    STATE_VARIABLE_FoundInvalidType_102_102 = ((MR_Word) (conv20_STATE_VARIABLE_FoundInvalidType_102_102));
    STATE_VARIABLE_Specs_103_103 = ((MR_Word) (conv19_STATE_VARIABLE_Specs_103_103));
    STATE_VARIABLE_SolverAuxPredInfos_104_104 = ((MR_Word) (conv18_STATE_VARIABLE_SolverAuxPredInfos_104_104));
    STATE_VARIABLE_SolverItemMutables_105_105 = ((MR_Word) (conv17_STATE_VARIABLE_SolverItemMutables_105_105));
    mercury__list__foldl5_12_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[4]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[6]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[8]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[3]), ItemTypeDefnsForeign_42, ((MR_Box) (STATE_VARIABLE_ModuleInfo_101_101)), &conv31_STATE_VARIABLE_ModuleInfo_107_107, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_102_102)), &conv30_STATE_VARIABLE_FoundInvalidType_108_108, ((MR_Box) (STATE_VARIABLE_Specs_103_103)), &conv29_STATE_VARIABLE_Specs_109_109, ((MR_Box) (STATE_VARIABLE_SolverAuxPredInfos_104_104)), &conv28_SolverAuxPredInfos_63, ((MR_Box) (STATE_VARIABLE_SolverItemMutables_105_105)), &conv27_SolverItemMutables_64);
    STATE_VARIABLE_ModuleInfo_107_107 = ((MR_Word) (conv31_STATE_VARIABLE_ModuleInfo_107_107));
    STATE_VARIABLE_FoundInvalidType_108_108 = ((MR_Word) (conv30_STATE_VARIABLE_FoundInvalidType_108_108));
    STATE_VARIABLE_Specs_109_109 = ((MR_Word) (conv29_STATE_VARIABLE_Specs_109_109));
    SolverAuxPredInfos_63 = ((MR_Word) (conv28_SolverAuxPredInfos_63));
    SolverItemMutables_64 = ((MR_Word) (conv27_SolverItemMutables_64));
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[9]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[4]), ItemInstDefns_43, ((MR_Box) (STATE_VARIABLE_ModuleInfo_107_107)), &conv37_STATE_VARIABLE_ModuleInfo_113_113, ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_FoundInvalidInstOrMode_114_114, ((MR_Box) (STATE_VARIABLE_Specs_109_109)), &conv35_STATE_VARIABLE_Specs_115_115);
    STATE_VARIABLE_ModuleInfo_113_113 = ((MR_Word) (conv37_STATE_VARIABLE_ModuleInfo_113_113));
    STATE_VARIABLE_FoundInvalidInstOrMode_114_114 = ((MR_Word) (conv36_STATE_VARIABLE_FoundInvalidInstOrMode_114_114));
    STATE_VARIABLE_Specs_115_115 = ((MR_Word) (conv35_STATE_VARIABLE_Specs_115_115));
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[10]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[5]), ItemModeDefns_44, ((MR_Box) (STATE_VARIABLE_ModuleInfo_113_113)), &conv43_STATE_VARIABLE_ModuleInfo_117_117, ((MR_Box) (STATE_VARIABLE_FoundInvalidInstOrMode_114_114)), &conv42_STATE_VARIABLE_FoundInvalidInstOrMode_118_118, ((MR_Box) (STATE_VARIABLE_Specs_115_115)), &conv41_STATE_VARIABLE_Specs_119_119);
    STATE_VARIABLE_ModuleInfo_117_117 = ((MR_Word) (conv43_STATE_VARIABLE_ModuleInfo_117_117));
    STATE_VARIABLE_FoundInvalidInstOrMode_118_118 = ((MR_Word) (conv42_STATE_VARIABLE_FoundInvalidInstOrMode_118_118));
    STATE_VARIABLE_Specs_119_119 = ((MR_Word) (conv41_STATE_VARIABLE_Specs_119_119));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[11]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[6]), ItemPredDecls_45, ((MR_Box) (STATE_VARIABLE_ModuleInfo_117_117)), &conv47_STATE_VARIABLE_ModuleInfo_121_121, ((MR_Box) (STATE_VARIABLE_Specs_119_119)), &conv46_STATE_VARIABLE_Specs_122_122);
    STATE_VARIABLE_ModuleInfo_121_121 = ((MR_Word) (conv47_STATE_VARIABLE_ModuleInfo_121_121));
    STATE_VARIABLE_Specs_122_122 = ((MR_Word) (conv46_STATE_VARIABLE_Specs_122_122));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[12]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[7]), ItemModeDecls_46, ((MR_Box) (STATE_VARIABLE_ModuleInfo_121_121)), &conv51_STATE_VARIABLE_ModuleInfo_124_124, ((MR_Box) (STATE_VARIABLE_Specs_122_122)), &conv50_STATE_VARIABLE_Specs_125_125);
    STATE_VARIABLE_ModuleInfo_124_124 = ((MR_Word) (conv51_STATE_VARIABLE_ModuleInfo_124_124));
    STATE_VARIABLE_Specs_125_125 = ((MR_Word) (conv50_STATE_VARIABLE_Specs_125_125));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[8]), SolverAuxPredInfos_63, ((MR_Box) (STATE_VARIABLE_ModuleInfo_124_124)), &conv55_STATE_VARIABLE_ModuleInfo_127_127, ((MR_Box) (STATE_VARIABLE_Specs_125_125)), &conv54_STATE_VARIABLE_Specs_128_128);
    STATE_VARIABLE_ModuleInfo_127_127 = ((MR_Word) (conv55_STATE_VARIABLE_ModuleInfo_127_127));
    STATE_VARIABLE_Specs_128_128 = ((MR_Word) (conv54_STATE_VARIABLE_Specs_128_128));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[9]), ItemMutables_52, ((MR_Box) (STATE_VARIABLE_ModuleInfo_127_127)), &conv59_STATE_VARIABLE_ModuleInfo_130_130, ((MR_Box) (STATE_VARIABLE_Specs_128_128)), &conv58_STATE_VARIABLE_Specs_131_131);
    STATE_VARIABLE_ModuleInfo_130_130 = ((MR_Word) (conv59_STATE_VARIABLE_ModuleInfo_130_130));
    STATE_VARIABLE_Specs_131_131 = ((MR_Word) (conv58_STATE_VARIABLE_Specs_131_131));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[10]), SolverItemMutables_64, ((MR_Box) (STATE_VARIABLE_ModuleInfo_130_130)), &conv63_STATE_VARIABLE_ModuleInfo_133_133, ((MR_Box) (STATE_VARIABLE_Specs_131_131)), &conv62_STATE_VARIABLE_Specs_134_134);
    STATE_VARIABLE_ModuleInfo_133_133 = ((MR_Word) (conv63_STATE_VARIABLE_ModuleInfo_133_133));
    STATE_VARIABLE_Specs_134_134 = ((MR_Word) (conv62_STATE_VARIABLE_Specs_134_134));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[13]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[11]), ItemTypeclasses_48, ((MR_Box) (STATE_VARIABLE_ModuleInfo_133_133)), &conv67_STATE_VARIABLE_ModuleInfo_136_136, ((MR_Box) (STATE_VARIABLE_Specs_134_134)), &conv66_STATE_VARIABLE_Specs_137_137);
    STATE_VARIABLE_ModuleInfo_136_136 = ((MR_Word) (conv67_STATE_VARIABLE_ModuleInfo_136_136));
    STATE_VARIABLE_Specs_137_137 = ((MR_Word) (conv66_STATE_VARIABLE_Specs_137_137));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[11]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[12]), ItemPredDecls_45, ((MR_Box) (STATE_VARIABLE_ModuleInfo_136_136)), &conv69_STATE_VARIABLE_ModuleInfo_139_139);
    STATE_VARIABLE_ModuleInfo_139_139 = ((MR_Word) (conv69_STATE_VARIABLE_ModuleInfo_139_139));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[14]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[13]), ItemInstances_49, ((MR_Box) (STATE_VARIABLE_ModuleInfo_139_139)), &conv73_STATE_VARIABLE_ModuleInfo_141_141, ((MR_Box) (STATE_VARIABLE_Specs_137_137)), &conv72_STATE_VARIABLE_Specs_142_142);
    STATE_VARIABLE_ModuleInfo_141_141 = ((MR_Word) (conv73_STATE_VARIABLE_ModuleInfo_141_141));
    STATE_VARIABLE_Specs_142_142 = ((MR_Word) (conv72_STATE_VARIABLE_Specs_142_142));
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[14]), ItemFIMs_39, ((MR_Box) (STATE_VARIABLE_ModuleInfo_141_141)), &conv75_STATE_VARIABLE_ModuleInfo_144_144);
    STATE_VARIABLE_ModuleInfo_144_144 = ((MR_Word) (conv75_STATE_VARIABLE_ModuleInfo_144_144));
    switch (STATE_VARIABLE_FoundInvalidType_108_108) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeTable0_65;
          MR_Box conv81_STATE_VARIABLE_FoundInvalidType_146_146;
          MR_Box conv80_STATE_VARIABLE_ModuleInfo_147_147;
          MR_Box conv79_STATE_VARIABLE_Specs_148_148;

          hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_144_144, &TypeTable0_65);
          hlds__hlds_data__foldl3_over_type_ctor_defns_8_p_0((MR_Word) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[15]), TypeTable0_65, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_108_108)), &conv81_STATE_VARIABLE_FoundInvalidType_146_146, ((MR_Box) (STATE_VARIABLE_ModuleInfo_144_144)), &conv80_STATE_VARIABLE_ModuleInfo_147_147, ((MR_Box) (STATE_VARIABLE_Specs_142_142)), &conv79_STATE_VARIABLE_Specs_148_148);
          STATE_VARIABLE_FoundInvalidType_146_146 = ((MR_Word) (conv81_STATE_VARIABLE_FoundInvalidType_146_146));
          STATE_VARIABLE_ModuleInfo_147_147 = ((MR_Word) (conv80_STATE_VARIABLE_ModuleInfo_147_147));
          STATE_VARIABLE_Specs_148_148 = ((MR_Word) (conv79_STATE_VARIABLE_Specs_148_148));
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_FoundInvalidType_146_146 = STATE_VARIABLE_FoundInvalidType_108_108;
          STATE_VARIABLE_ModuleInfo_147_147 = STATE_VARIABLE_ModuleInfo_144_144;
          STATE_VARIABLE_Specs_148_148 = STATE_VARIABLE_Specs_142_142;
        }
        break;
    }
    Var_418 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_28, Var_418);
    if (succeeded)
      succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(STATE_VARIABLE_ModuleInfo_147_147);
    if (succeeded)
    {
      MR_Word Var_150;
      MR_Box conv83_STATE_VARIABLE_ModuleInfo_151_151;

      Var_150 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[16]), Var_150, ((MR_Box) (STATE_VARIABLE_ModuleInfo_147_147)), &conv83_STATE_VARIABLE_ModuleInfo_151_151);
      STATE_VARIABLE_ModuleInfo_151_151 = ((MR_Word) (conv83_STATE_VARIABLE_ModuleInfo_151_151));
    }
    else
      STATE_VARIABLE_ModuleInfo_151_151 = STATE_VARIABLE_ModuleInfo_147_147;
    hlds__hlds_module__module_info_optimize_2_p_0(STATE_VARIABLE_ModuleInfo_151_151, &STATE_VARIABLE_ModuleInfo_152_152);
    hlds__make_hlds__qual_info__init_qual_info_3_p_0(MQInfo0_15, TypeEqvMapMap_16, &STATE_VARIABLE_QualInfo_153_153);
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[15]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[17]), ItemClauses_59, ((MR_Box) (STATE_VARIABLE_ModuleInfo_152_152)), &conv89_STATE_VARIABLE_ModuleInfo_155_155, ((MR_Box) (STATE_VARIABLE_QualInfo_153_153)), &conv88_STATE_VARIABLE_QualInfo_156_156, ((MR_Box) (STATE_VARIABLE_Specs_148_148)), &conv87_STATE_VARIABLE_Specs_157_157);
    STATE_VARIABLE_ModuleInfo_155_155 = ((MR_Word) (conv89_STATE_VARIABLE_ModuleInfo_155_155));
    STATE_VARIABLE_QualInfo_156_156 = ((MR_Word) (conv88_STATE_VARIABLE_QualInfo_156_156));
    STATE_VARIABLE_Specs_157_157 = ((MR_Word) (conv87_STATE_VARIABLE_Specs_157_157));
    hlds__hlds_module__module_info_set_int_bad_clauses_3_p_0(IntBadClauses_60, STATE_VARIABLE_ModuleInfo_155_155, &STATE_VARIABLE_ModuleInfo_158_158);
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[18]), SolverAuxPredInfos_63, ((MR_Box) (STATE_VARIABLE_ModuleInfo_158_158)), &conv95_STATE_VARIABLE_ModuleInfo_160_160, ((MR_Box) (STATE_VARIABLE_QualInfo_156_156)), &conv94_STATE_VARIABLE_QualInfo_161_161, ((MR_Box) (STATE_VARIABLE_Specs_157_157)), &conv93_STATE_VARIABLE_Specs_162_162);
    STATE_VARIABLE_ModuleInfo_160_160 = ((MR_Word) (conv95_STATE_VARIABLE_ModuleInfo_160_160));
    STATE_VARIABLE_QualInfo_161_161 = ((MR_Word) (conv94_STATE_VARIABLE_QualInfo_161_161));
    STATE_VARIABLE_Specs_162_162 = ((MR_Word) (conv93_STATE_VARIABLE_Specs_162_162));
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[19]), ItemMutables_52, ((MR_Box) (STATE_VARIABLE_ModuleInfo_160_160)), &conv101_STATE_VARIABLE_ModuleInfo_164_164, ((MR_Box) (STATE_VARIABLE_QualInfo_161_161)), &conv100_STATE_VARIABLE_QualInfo_165_165, ((MR_Box) (STATE_VARIABLE_Specs_162_162)), &conv99_STATE_VARIABLE_Specs_166_166);
    STATE_VARIABLE_ModuleInfo_164_164 = ((MR_Word) (conv101_STATE_VARIABLE_ModuleInfo_164_164));
    STATE_VARIABLE_QualInfo_165_165 = ((MR_Word) (conv100_STATE_VARIABLE_QualInfo_165_165));
    STATE_VARIABLE_Specs_166_166 = ((MR_Word) (conv99_STATE_VARIABLE_Specs_166_166));
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[7]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[20]), SolverItemMutables_64, ((MR_Box) (STATE_VARIABLE_ModuleInfo_164_164)), &conv107_STATE_VARIABLE_ModuleInfo_168_168, ((MR_Box) (STATE_VARIABLE_QualInfo_165_165)), &conv106_STATE_VARIABLE_QualInfo_169_169, ((MR_Box) (STATE_VARIABLE_Specs_166_166)), &conv105_STATE_VARIABLE_Specs_170_170);
    STATE_VARIABLE_ModuleInfo_168_168 = ((MR_Word) (conv107_STATE_VARIABLE_ModuleInfo_168_168));
    STATE_VARIABLE_QualInfo_169_169 = ((MR_Word) (conv106_STATE_VARIABLE_QualInfo_169_169));
    STATE_VARIABLE_Specs_170_170 = ((MR_Word) (conv105_STATE_VARIABLE_Specs_170_170));
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[16]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[21]), ItemPromises_47, ((MR_Box) (STATE_VARIABLE_ModuleInfo_168_168)), &conv113_STATE_VARIABLE_ModuleInfo_172_172, ((MR_Box) (STATE_VARIABLE_QualInfo_169_169)), &conv112_STATE_VARIABLE_QualInfo_173_173, ((MR_Box) (STATE_VARIABLE_Specs_170_170)), &conv111_STATE_VARIABLE_Specs_174_174);
    STATE_VARIABLE_ModuleInfo_172_172 = ((MR_Word) (conv113_STATE_VARIABLE_ModuleInfo_172_172));
    STATE_VARIABLE_QualInfo_173_173 = ((MR_Word) (conv112_STATE_VARIABLE_QualInfo_173_173));
    STATE_VARIABLE_Specs_174_174 = ((MR_Word) (conv111_STATE_VARIABLE_Specs_174_174));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[17]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[22]), ItemInitialises_50, ((MR_Box) (STATE_VARIABLE_ModuleInfo_172_172)), &conv117_STATE_VARIABLE_ModuleInfo_176_176, ((MR_Box) (STATE_VARIABLE_Specs_174_174)), &conv116_STATE_VARIABLE_Specs_177_177);
    STATE_VARIABLE_ModuleInfo_176_176 = ((MR_Word) (conv117_STATE_VARIABLE_ModuleInfo_176_176));
    STATE_VARIABLE_Specs_177_177 = ((MR_Word) (conv116_STATE_VARIABLE_Specs_177_177));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[18]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[23]), ItemFinalises_51, ((MR_Box) (STATE_VARIABLE_ModuleInfo_176_176)), &conv121_STATE_VARIABLE_ModuleInfo_179_179, ((MR_Box) (STATE_VARIABLE_Specs_177_177)), &conv120_STATE_VARIABLE_Specs_180_180);
    STATE_VARIABLE_ModuleInfo_179_179 = ((MR_Word) (conv121_STATE_VARIABLE_ModuleInfo_179_179));
    STATE_VARIABLE_Specs_180_180 = ((MR_Word) (conv120_STATE_VARIABLE_Specs_180_180));
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[20]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[24]), ItemPragmasDecl_56, ((MR_Box) (STATE_VARIABLE_ModuleInfo_179_179)), &conv127_STATE_VARIABLE_ModuleInfo_182_182, ((MR_Box) (STATE_VARIABLE_QualInfo_173_173)), &conv126_STATE_VARIABLE_QualInfo_183_183, ((MR_Box) (STATE_VARIABLE_Specs_180_180)), &conv125_STATE_VARIABLE_Specs_184_184);
    STATE_VARIABLE_ModuleInfo_182_182 = ((MR_Word) (conv127_STATE_VARIABLE_ModuleInfo_182_182));
    STATE_VARIABLE_QualInfo_183_183 = ((MR_Word) (conv126_STATE_VARIABLE_QualInfo_183_183));
    STATE_VARIABLE_Specs_184_184 = ((MR_Word) (conv125_STATE_VARIABLE_Specs_184_184));
    mercury__list__foldl4_10_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[22]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[25]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[25]), ItemPragmasImpl_57, ((MR_Box) ((MR_Unsigned) 0U)), &conv135_RevItemPragmasTabled_66, ((MR_Box) (STATE_VARIABLE_ModuleInfo_182_182)), &conv134_STATE_VARIABLE_ModuleInfo_187_187, ((MR_Box) (STATE_VARIABLE_QualInfo_183_183)), &conv133_STATE_VARIABLE_QualInfo_188_188, ((MR_Box) (STATE_VARIABLE_Specs_184_184)), &conv132_STATE_VARIABLE_Specs_189_189);
    RevItemPragmasTabled_66 = ((MR_Word) (conv135_RevItemPragmasTabled_66));
    STATE_VARIABLE_ModuleInfo_187_187 = ((MR_Word) (conv134_STATE_VARIABLE_ModuleInfo_187_187));
    STATE_VARIABLE_QualInfo_188_188 = ((MR_Word) (conv133_STATE_VARIABLE_QualInfo_188_188));
    STATE_VARIABLE_Specs_189_189 = ((MR_Word) (conv132_STATE_VARIABLE_Specs_189_189));
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[24]), RevItemPragmasTabled_66, &ItemPragmasTabled_67);
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[24]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[26]), ItemPragmasTabled_67, ((MR_Box) (STATE_VARIABLE_ModuleInfo_187_187)), &conv141_STATE_VARIABLE_ModuleInfo_191_191, ((MR_Box) (STATE_VARIABLE_QualInfo_188_188)), &conv140_STATE_VARIABLE_QualInfo_192_192, ((MR_Box) (STATE_VARIABLE_Specs_189_189)), &conv139_STATE_VARIABLE_Specs_193_193);
    STATE_VARIABLE_ModuleInfo_191_191 = ((MR_Word) (conv141_STATE_VARIABLE_ModuleInfo_191_191));
    STATE_VARIABLE_QualInfo_192_192 = ((MR_Word) (conv140_STATE_VARIABLE_QualInfo_192_192));
    STATE_VARIABLE_Specs_193_193 = ((MR_Word) (conv139_STATE_VARIABLE_Specs_193_193));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[26]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[27]), PragmasGen_58, ((MR_Box) (STATE_VARIABLE_ModuleInfo_191_191)), &conv145_STATE_VARIABLE_ModuleInfo_76, ((MR_Box) (STATE_VARIABLE_Specs_193_193)), &conv144_STATE_VARIABLE_Specs_196_196);
    *STATE_VARIABLE_ModuleInfo_76 = ((MR_Word) (conv145_STATE_VARIABLE_ModuleInfo_76));
    STATE_VARIABLE_Specs_196_196 = ((MR_Word) (conv144_STATE_VARIABLE_Specs_196_196));
    {
      Var_197 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_197, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_197, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_29));
      MR_hl_field(MR_mktag(0), Var_197, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_197, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_76));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[11]), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]), Var_197, ItemPredDecls_45, ((MR_Box) (STATE_VARIABLE_Specs_196_196)), &conv147_STATE_VARIABLE_Specs_77);
    *STATE_VARIABLE_Specs_77 = ((MR_Word) (conv147_STATE_VARIABLE_Specs_77));
    mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&recompilation__recompilation__type_ctor_info_version_numbers_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[28]), ModuleVersionNumbers_30, ((MR_Box) (STATE_VARIABLE_QualInfo_192_192)), &conv149_STATE_VARIABLE_QualInfo_73);
    *STATE_VARIABLE_QualInfo_73 = ((MR_Word) (conv149_STATE_VARIABLE_QualInfo_73));
    hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(*STATE_VARIABLE_QualInfo_73, &MQInfo_68);
    parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(MQInfo_68, &MQUndefType_69);
    parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(MQInfo_68, &MQUndefInst_70);
    parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(MQInfo_68, &MQUndefMode_71);
    parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(MQInfo_68, &MQUndefTypeClass_72);
    succeeded = (MQUndefType_69 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (MQUndefTypeClass_72 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_FoundInvalidType_74 = (MR_Integer) 1;
    else
      *STATE_VARIABLE_FoundInvalidType_74 = STATE_VARIABLE_FoundInvalidType_146_146;
    succeeded = (MQUndefInst_70 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (MQUndefMode_71 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_FoundInvalidInstOrMode_75 = (MR_Integer) 1;
    else
      *STATE_VARIABLE_FoundInvalidInstOrMode_75 = STATE_VARIABLE_FoundInvalidInstOrMode_118_118;
  }
}

void mercury__hlds__make_hlds__make_hlds_passes__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__init_type_tables(void)
{
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
