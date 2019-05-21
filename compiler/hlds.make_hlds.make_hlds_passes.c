/*
** Automatically generated from `make_hlds_passes.m'
** by the Mercury compiler,
** version rotd-2017-07-15
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module hlds.make_hlds.make_hlds_passes. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_mode.mih"
#include "hlds.make_hlds.add_mutable_aux_preds.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_solver.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.make_hlds.make_hlds_passes.du_type_layout.mih"
#include "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.mih"



struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s {
  MR_bool hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24;
  jmp_buf hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_34;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_35;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_84;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_85;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_86;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_87;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_210;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_211;
  MR_Box hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv0_ProcInfo_30;
  jmp_buf hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_1;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_167;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_169;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_170;
  MR_Box hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv1_ProcInfo_165;
};

struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s {
  MR_bool hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24;
  jmp_buf hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_34;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_35;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_72;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_73;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_74;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_75;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_195;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_196;
  MR_Box hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv0_ProcInfo_30;
  jmp_buf hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_1;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_152;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_154;
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_155;
  MR_Box hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv1_ProcInfo_150;
};


static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

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

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_promise_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_initialise_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_finalise_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__622__1_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_17,
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_52);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__621__1_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_16,
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_47);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__550__1_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__SectionInfo_18,
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_58,
  MR_Word * hlds__make_hlds__make_hlds_passes__HeadVar__3_59);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_1(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_3(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_2(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_4(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_5(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_7(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_6(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_8(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_1(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_3(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_2(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_4(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_5(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_7(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_6(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_8(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_2(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_8);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[70][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[26][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[4][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][14];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[6][10];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[9][8];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[1][11];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[4][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[2][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[2][1];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[70][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose name is a variable."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a predicate whose name is a variable."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a mode"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not have a corresponding"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "used in"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has invalid signature."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "used in initialise declaration"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "matches multiple pred declarations."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[39])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration has invalid signature."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has multiple"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a"))
  },
  /* row 66 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: you cannot define a clause for a"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[26][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[7])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[8])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[6][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[26])))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_passes__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_promise_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_initialise_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_finalise_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__622__1_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_17,
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_52)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

    {
      hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[18], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_17)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_52)));
    }
    return hlds__make_hlds__make_hlds_passes__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__621__1_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_16,
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_47)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

    {
      hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[17], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_16)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_47)));
    }
    return hlds__make_hlds__make_hlds_passes__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__550__1_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__SectionInfo_18,
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_58,
  MR_Word * hlds__make_hlds__make_hlds_passes__HeadVar__3_59)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

    {
      hlds__make_hlds__wrap_with_section_info_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, hlds__make_hlds__make_hlds_passes__SectionInfo_18, ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_58)), hlds__make_hlds__make_hlds_passes__HeadVar__3_59);
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_passes__Var_16;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_17;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_18;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_19;

    {
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_5)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6)), hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8, &hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9);
    }
    hlds__make_hlds__make_hlds_passes__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
    hlds__make_hlds__make_hlds_passes__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
    hlds__make_hlds__make_hlds_passes__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
    hlds__make_hlds__make_hlds_passes__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11;

    {
      hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
  MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbers_6,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_8,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_9)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_10;

    {
      hlds__make_hlds__make_hlds_passes__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_10, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_5));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_10, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__VersionNumbers_6));
    }
    {
      hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(hlds__make_hlds__make_hlds_passes__Var_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_9);
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalise_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_6,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__make_hlds_passes__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 3)));
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 4)));

    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1))))
      {
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19;
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_passes__ItemExport_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

        switch (hlds__make_hlds__make_hlds_passes__ItemExport_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              {
                hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[32]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
              }
            }
            break;
          case (MR_Integer) 0:
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
            break;
        }
        if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0(hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__Arity_12, hlds__make_hlds__make_hlds_passes__Context_14, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22);
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_finalise\'/5", (MR_String) "bad introduced finalise declaration");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_1(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_3(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv0_ProcInfo_30);
    {
      hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_2(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    {
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31);
    }
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31)) == (MR_mktag((MR_Integer) 1)));
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
      {
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31, (MR_Integer) 0)));
        {
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
            {
              {
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32, (MR_Integer) 0)));
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32, (MR_Integer) 1)));
              }
              {
                {
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_210 = parse_tree__prog_mode__di_mode_0_f_0();
                }
                {
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_84, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_210);
                }
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                  {
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_85)) == (MR_mktag((MR_Integer) 1)));
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                      {
                        {
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_85, (MR_Integer) 0)));
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_85, (MR_Integer) 1)));
                        }
                        {
                          {
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_211 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
                          {
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_86, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_211);
                          }
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                            {
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                                {
                                  {
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33);
                                  }
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33)) == (MR_mktag((MR_Integer) 1)));
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                                    {
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33, (MR_Integer) 0)));
                                      {
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_34) {
                                          default:
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
                                            break;
                                          case (MR_Integer) 4:
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
                                            break;
                                          case (MR_Integer) 0:
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
                                            break;
                                        }
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                                          {
                                            {
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_35);
                                            }
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_35 == (MR_Integer) 0);
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                                              {
                                                hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
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

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_4(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_28;
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_29;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_82;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_83;

          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
            {
              {
                hlds__make_hlds__make_hlds_passes__Arg1Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 0)));
                hlds__make_hlds__make_hlds_passes__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 1)));
              }
              {
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Var_82)) == (MR_mktag((MR_Integer) 1)));
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                  {
                    {
                      hlds__make_hlds__make_hlds_passes__Arg2Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_82, (MR_Integer) 0)));
                      hlds__make_hlds__make_hlds_passes__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_82, (MR_Integer) 1)));
                    }
                    {
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__Var_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                        {
                          {
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_28);
                          }
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                            {
                              {
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_29);
                              }
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                                {
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv0_ProcInfo_30, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
                            }
                        }
                    }
                  }
              }
            }
        }
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_5(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_7(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv1_ProcInfo_165);
    {
      hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_6(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    {
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166);
    }
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166)) == (MR_mktag((MR_Integer) 1)));
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
      {
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166, (MR_Integer) 0)));
        {
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
            {
              {
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168);
              }
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168)) == (MR_mktag((MR_Integer) 1)));
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                {
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168, (MR_Integer) 0)));
                  {
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_169) {
                      default:
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 4:
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 0:
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
                        break;
                    }
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                      {
                        {
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_170);
                        }
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_170 == (MR_Integer) 2);
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                          {
                            hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
                          }
                      }
                  }
                }
            }
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_8(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_1) == 0)
      {
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
          {
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv1_ProcInfo_165, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__SymName_8,
  MR_Integer hlds__make_hlds__make_hlds_passes__Arity_9,
  MR_Word hlds__make_hlds__make_hlds_passes__Context_10,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

    {
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_13;
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_14;

      {
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__PredTable_13);
      }
      {
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_13, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__PredIds_14);
      }
      if ((hlds__make_hlds__make_hlds_passes__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_15;
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_16;
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_17;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_133;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_134;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_135;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_157;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_158;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_162;

          {
            hlds__make_hlds__make_hlds_passes__Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_135, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_135, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_134, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_135));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_133, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_134));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[51])));
          }
          {
            hlds__make_hlds__make_hlds_passes__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_133));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_158, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_15));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_157, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_158));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__make_hlds_passes__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_157));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_16));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__make_hlds_passes__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_162));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
          }
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
        }
      else
        {
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 1)));

          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_23;
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_25;
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_26;
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_27;

              {
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__make_hlds_passes__HeadPredId_18, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21);
              }
              {
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22);
              }
              {
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
              {
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209, hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__Globals_25);
              }
              {
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_25, &hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
              {
                hlds__make_hlds__make_hlds_passes__ExportLang_27 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
              {
                hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                {
                  MR_String hlds__make_hlds__make_hlds_passes__CName_36;
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_37;
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_38;
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_88_88;
                  MR_Word hlds__make_hlds__make_hlds_passes__Var_89;
                  MR_Word hlds__make_hlds__make_hlds_passes__Var_90;
                  MR_Word hlds__make_hlds__make_hlds_passes__Var_91;
                  MR_Word hlds__make_hlds__make_hlds_passes__Var_92;

                  {
                    hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_88_88);
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__Var_90 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__Var_92 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_91, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_92));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_89, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_90));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_89, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_91));
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_89));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__FPEInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_37));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_36));
                  }
                  {
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), hlds__make_hlds__make_hlds_passes__FPEInfo_38, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_88_88, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
                  }
                }
              else
                {
                  {
                    hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_99_99;
                      MR_String hlds__make_hlds__make_hlds_passes__CName_171;
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_172;
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_173;

                      {
                        hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_171, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_99_99);
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_172, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_172, 2) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__FPEInfo_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_173, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_173, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_172));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_173, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_171));
                      }
                      {
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), hlds__make_hlds__make_hlds_passes__FPEInfo_173, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_99_99, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
                      }
                    }
                  else
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_108;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_109;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_110;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_123;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_124;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_128;
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_176;
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_177;
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_178;

                      {
                        hlds__make_hlds__make_hlds_passes__Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_110, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_110, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_109, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_110));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_108, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_109));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[55])));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Pieces_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_176, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_108));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_124, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_176));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_123, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_124));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Msg_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_177, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_177, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_123));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_128, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_177));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Spec_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_178, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_128));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_178));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
                      }
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
                    }
                }
            }
          else
            {
              MR_Word hlds__make_hlds__make_hlds_passes__Var_50;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_51;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_52;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_74;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_75;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_79;
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_199;
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_200;
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_201;

              {
                hlds__make_hlds__make_hlds_passes__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_52));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_51));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[63])));
              }
              {
                hlds__make_hlds__make_hlds_passes__Pieces_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_199, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_50));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_75, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_199));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_74, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_75));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__make_hlds_passes__Msg_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_200, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_200, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_74));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_200));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__make_hlds_passes__Spec_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_201, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_79));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_201));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
              }
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
            }
        }
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialise_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_6,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__make_hlds_passes__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 3)));
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 4)));

    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1))))
      {
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19;
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_passes__ItemExport_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

        switch (hlds__make_hlds__make_hlds_passes__ItemExport_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
              {
                hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
              }
            }
            break;
          case (MR_Integer) 0:
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
            break;
        }
        if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0(hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__Arity_12, hlds__make_hlds__make_hlds_passes__Context_14, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22);
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_initialise\'/5", (MR_String) "bad introduced initialise declaration");
              return;
            }
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_1(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_3(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv0_ProcInfo_30);
    {
      hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_2(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    {
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31);
    }
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31)) == (MR_mktag((MR_Integer) 1)));
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
      {
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31, (MR_Integer) 0)));
        {
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
            {
              {
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32, (MR_Integer) 0)));
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32, (MR_Integer) 1)));
              }
              {
                {
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_195 = parse_tree__prog_mode__di_mode_0_f_0();
                }
                {
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_72, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_195);
                }
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                  {
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_73)) == (MR_mktag((MR_Integer) 1)));
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                      {
                        {
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_73, (MR_Integer) 0)));
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_73, (MR_Integer) 1)));
                        }
                        {
                          {
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_196 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
                          {
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_74, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_196);
                          }
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                            {
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                                {
                                  {
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33);
                                  }
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33)) == (MR_mktag((MR_Integer) 1)));
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                                    {
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33, (MR_Integer) 0)));
                                      {
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_34) {
                                          default:
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
                                            break;
                                          case (MR_Integer) 4:
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
                                            break;
                                          case (MR_Integer) 0:
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
                                            break;
                                        }
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                                          {
                                            {
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_35);
                                            }
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_35 == (MR_Integer) 0);
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                                              {
                                                hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
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

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_4(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_28;
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_29;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_70;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_71;

          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
            {
              {
                hlds__make_hlds__make_hlds_passes__Arg1Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 0)));
                hlds__make_hlds__make_hlds_passes__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 1)));
              }
              {
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Var_70)) == (MR_mktag((MR_Integer) 1)));
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                  {
                    {
                      hlds__make_hlds__make_hlds_passes__Arg2Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_70, (MR_Integer) 0)));
                      hlds__make_hlds__make_hlds_passes__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_70, (MR_Integer) 1)));
                    }
                    {
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                        {
                          {
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_28);
                          }
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                            {
                              {
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_29);
                              }
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                                {
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv0_ProcInfo_30, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
                            }
                        }
                    }
                  }
              }
            }
        }
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_5(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_7(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv1_ProcInfo_150);
    {
      hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_6(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    {
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151);
    }
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151)) == (MR_mktag((MR_Integer) 1)));
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
      {
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151, (MR_Integer) 0)));
        {
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
            {
              {
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153);
              }
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153)) == (MR_mktag((MR_Integer) 1)));
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                {
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153, (MR_Integer) 0)));
                  {
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_154) {
                      default:
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 4:
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 0:
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
                        break;
                    }
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                      {
                        {
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_155);
                        }
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_155 == (MR_Integer) 2);
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                          {
                            hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
                          }
                      }
                  }
                }
            }
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_8(
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_1) == 0)
      {
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
          {
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv1_ProcInfo_150, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__SymName_8,
  MR_Integer hlds__make_hlds__make_hlds_passes__Arity_9,
  MR_Word hlds__make_hlds__make_hlds_passes__Context_10,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

    {
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_13;
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_14;

      {
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__PredTable_13);
      }
      {
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_13, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__PredIds_14);
      }
      if ((hlds__make_hlds__make_hlds_passes__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_15;
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_16;
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_17;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_118;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_119;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_120;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_142;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_143;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_147;

          {
            hlds__make_hlds__make_hlds_passes__Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_120, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_120, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_119, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_120));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_118, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_119));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[42])));
          }
          {
            hlds__make_hlds__make_hlds_passes__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_118));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_143, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_15));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_142, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_143));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__make_hlds_passes__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_142));
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_147, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_16));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__make_hlds_passes__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_147));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
          }
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
        }
      else
        {
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 1)));

          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_23;
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_25;
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_26;
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_27;

              {
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__make_hlds_passes__HeadPredId_18, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21);
              }
              {
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22);
              }
              {
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
              {
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194, hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__Globals_25);
              }
              {
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_25, &hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
              {
                hlds__make_hlds__make_hlds_passes__ExportLang_27 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
              {
                hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                {
                  MR_String hlds__make_hlds__make_hlds_passes__CName_36;
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_37;
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_38;
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76;
                  MR_Word hlds__make_hlds__make_hlds_passes__Var_77;
                  MR_Word hlds__make_hlds__make_hlds_passes__Var_78;
                  MR_Word hlds__make_hlds__make_hlds_passes__Var_79;
                  MR_Word hlds__make_hlds__make_hlds_passes__Var_80;

                  {
                    hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76);
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__Var_78 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__Var_80 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_80));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_77, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_78));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_77, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_79));
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_77));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 2) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    hlds__make_hlds__make_hlds_passes__FPEInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_37));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_36));
                  }
                  {
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), hlds__make_hlds__make_hlds_passes__FPEInfo_38, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
                  }
                }
              else
                {
                  {
                    hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87;
                      MR_String hlds__make_hlds__make_hlds_passes__CName_156;
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_157;
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_158;

                      {
                        hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_156, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87);
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 2) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__FPEInfo_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_157));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_156));
                      }
                      {
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), hlds__make_hlds__make_hlds_passes__FPEInfo_158, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
                      }
                    }
                  else
                    {
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_96;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_97;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_98;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_108;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_109;
                      MR_Word hlds__make_hlds__make_hlds_passes__Var_113;
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_161;
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_162;
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_163;

                      {
                        hlds__make_hlds__make_hlds_passes__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_98, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_98, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_97, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_98));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_96, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_97));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[46])));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Pieces_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_96));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_109, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_161));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_108, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_109));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Msg_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_108));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_113, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_162));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__make_hlds_passes__Spec_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_113));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_163));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
                      }
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
                    }
                }
            }
          else
            {
              MR_Word hlds__make_hlds__make_hlds_passes__Var_50;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_51;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_52;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_62;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_63;
              MR_Word hlds__make_hlds__make_hlds_passes__Var_67;
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_184;
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_185;
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_186;

              {
                hlds__make_hlds__make_hlds_passes__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_52));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_51));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[49])));
              }
              {
                hlds__make_hlds__make_hlds_passes__Pieces_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_50));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_184));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_62, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_63));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__make_hlds_passes__Msg_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_62));
              }
              {
                hlds__make_hlds__make_hlds_passes__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_67, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_185));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__make_hlds_passes__Spec_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_67));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_186));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
              }
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
            }
        }
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_7_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_8,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_24,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_25,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_passes__UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_20;
    MR_Word hlds__make_hlds__make_hlds_passes__PredStatus_21;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 5)));

    {
      mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_passes__UnivVars_17, &hlds__make_hlds__make_hlds_passes__HeadVars_20);
    }
    switch (hlds__make_hlds__make_hlds_passes__PromiseType_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(hlds__make_hlds__make_hlds_passes__UnivVars_17, hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28);
        }
        break;
      case (MR_Integer) 3:
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26;
        break;
    }
    {
      hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, &hlds__make_hlds__make_hlds_passes__PredStatus_21);
    }
    {
      hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__HeadVars_20, hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__PredStatus_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27);
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_13,
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_14,
  MR_Word hlds__make_hlds__make_hlds_passes__VarSet_15,
  MR_Word hlds__make_hlds__make_hlds_passes__Goal_16,
  MR_Word hlds__make_hlds__make_hlds_passes__Context_17,
  MR_Word hlds__make_hlds__make_hlds_passes__Status_18,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Integer hlds__make_hlds__make_hlds_passes__Line_22;
    MR_String hlds__make_hlds__make_hlds_passes__File_23;
    MR_String hlds__make_hlds__make_hlds_passes__Name_24;
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_25;
    MR_String hlds__make_hlds__make_hlds_passes__Var_35;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_42;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_43;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_45;
    MR_String hlds__make_hlds__make_hlds_passes__Var_50;
    MR_String hlds__make_hlds__make_hlds_passes__Var_51;
    MR_String hlds__make_hlds__make_hlds_passes__Var_58;
    MR_String hlds__make_hlds__make_hlds_passes__Var_60;

    {
      mercury__term__context_line_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__Line_22);
    }
    {
      mercury__term__context_file_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__File_23);
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_35 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__make_hlds__make_hlds_passes__PromiseType_13);
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__File_23);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_10[1], hlds__make_hlds__make_hlds_passes__Line_22, &hlds__make_hlds__make_hlds_passes__Var_51);
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_58 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__Var_51, hlds__make_hlds__make_hlds_passes__Var_50);
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__Var_58);
    }
    {
      hlds__make_hlds__make_hlds_passes__Name_24 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__Var_35, hlds__make_hlds__make_hlds_passes__Var_60);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__make_hlds_passes__ModuleName_25);
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_42, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Name_24));
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_43, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Goal_16));
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PromiseType_13));
    }
    {
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_15, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__Var_42, hlds__make_hlds__make_hlds_passes__HeadVars_14, hlds__make_hlds__make_hlds_passes__Var_43, hlds__make_hlds__make_hlds_passes__Status_18, hlds__make_hlds__make_hlds_passes__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__make_hlds_passes__Var_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31);
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clause_7_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_8,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__PredSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeBodyGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__make_hlds_passes__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 6)));
    MR_Integer hlds__make_hlds__make_hlds_passes__SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 7)));
    MR_String hlds__make_hlds__make_hlds_passes__PredName_22;

    {
      hlds__make_hlds__make_hlds_passes__PredName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredSymName_14);
    }
    hlds__make_hlds__make_hlds_passes__succeeded = (strcmp(hlds__make_hlds__make_hlds_passes__PredName_22, (MR_String) "") == 0);
    if (hlds__make_hlds__make_hlds_passes__succeeded)
      {
        MR_Word hlds__make_hlds__make_hlds_passes__Pieces_23;
        MR_Word hlds__make_hlds__make_hlds_passes__Msg_24;
        MR_Word hlds__make_hlds__make_hlds_passes__Spec_25;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_42;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_43;
        MR_String hlds__make_hlds__make_hlds_passes__Var_44;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_51;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_52;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_56;

        {
          hlds__make_hlds__make_hlds_passes__Var_44 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__make_hlds__make_hlds_passes__PredOrFunc_15);
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_44));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_43));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[22])));
        }
        {
          hlds__make_hlds__make_hlds_passes__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[67])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_42));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_23));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_51, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_52));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_passes__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_20));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_51));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_56, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_24));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_passes__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_56));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38));
        }
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_passes__PredStatus_33;
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_70;

        if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12)) == (MR_mktag((MR_Integer) 1))))
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
        else
          {
            MR_Word hlds__make_hlds__make_hlds_passes__ItemExport_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, (MR_Integer) 0)));

            switch (hlds__make_hlds__make_hlds_passes__ItemExport_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                if ((hlds__make_hlds__make_hlds_passes__Origin_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Integer hlds__make_hlds__make_hlds_passes__Arity_27;
                    MR_String hlds__make_hlds__make_hlds_passes__ClauseId_28;
                    MR_Word hlds__make_hlds__make_hlds_passes__Var_62;
                    MR_Word hlds__make_hlds__make_hlds_passes__Var_63;
                    MR_Word hlds__make_hlds__make_hlds_passes__Var_64;
                    MR_Word hlds__make_hlds__make_hlds_passes__Var_66;
                    MR_String hlds__make_hlds__make_hlds_passes__Var_67;

                    {
                      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[19], hlds__make_hlds__make_hlds_passes__Args_16, &hlds__make_hlds__make_hlds_passes__Arity_27);
                    }
                    {
                      hlds__make_hlds__make_hlds_passes__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredName_22));
                    }
                    {
                      hlds__make_hlds__make_hlds_passes__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_62, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_63));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_62, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_27));
                    }
                    {
                      hlds__make_hlds__make_hlds_passes__ClauseId_28 = parse_tree__prog_out__simple_call_id_to_string_2_f_0(hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__Var_62);
                    }
                    {
                      hlds__make_hlds__make_hlds_passes__Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "clause for ", hlds__make_hlds__make_hlds_passes__ClauseId_28);
                    }
                    {
                      hlds__make_hlds__make_hlds_passes__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_66, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_67));
                    }
                    {
                      hlds__make_hlds__make_hlds_passes__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_66));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__Var_64, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65);
                    }
                  }
                else
                  {
                    MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_29 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_17), (MR_Integer) 1);
                    MR_Word hlds__make_hlds__make_hlds_passes__AllowExport_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_29, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__make_hlds_passes___IsMutable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_29, (MR_Integer) 1)));

                    switch (hlds__make_hlds__make_hlds_passes__AllowExport_30) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_clause\'/7", (MR_String) "bad introduced clause");
                            return;
                          }
                        }
                        break;
                    }
                    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
                  }
                break;
              case (MR_Integer) 0:
                hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
                break;
              case (MR_Integer) 1:
                hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
                break;
            }
          }
        {
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, &hlds__make_hlds__make_hlds_passes__PredStatus_33);
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_70, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SeqNum_21));
        }
        {
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_18, hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__PredSymName_14, hlds__make_hlds__make_hlds_passes__Args_16, hlds__make_hlds__make_hlds_passes__MaybeBodyGoal_19, hlds__make_hlds__make_hlds_passes__PredStatus_33, hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__Var_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__SectionItem_4,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_4, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__PredSymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 2)));
    MR_String hlds__make_hlds__make_hlds_passes__PredName_22;
    MR_Word hlds__make_hlds__make_hlds_passes___SectionInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_4, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes___Origin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_passes___InstVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__make_hlds_passes___ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__make_hlds_passes___WithType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 8)));
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeDet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 9)));
    MR_Word hlds__make_hlds__make_hlds_passes___Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 10)));
    MR_Word hlds__make_hlds__make_hlds_passes___ClassContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 11)));
    MR_Word hlds__make_hlds__make_hlds_passes___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 12)));
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 13)));

    {
      hlds__make_hlds__make_hlds_passes__PredName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredSymName_8);
    }
    hlds__make_hlds__make_hlds_passes__succeeded = (strcmp(hlds__make_hlds__make_hlds_passes__PredName_22, (MR_String) "") == 0);
    if (hlds__make_hlds__make_hlds_passes__succeeded)
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
    else
      switch (hlds__make_hlds__make_hlds_passes__PredOrFunc_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Integer hlds__make_hlds__make_hlds_passes__Arity_23;
            MR_Integer hlds__make_hlds__make_hlds_passes__FuncArity_24;
            MR_Word hlds__make_hlds__make_hlds_passes__PredTable0_25;
            MR_Word hlds__make_hlds__make_hlds_passes__PredIds_26;

            {
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__make_hlds_passes__TypesAndModes_10, &hlds__make_hlds__make_hlds_passes__Arity_23);
            }
            {
              parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__make_hlds_passes__FuncArity_24, hlds__make_hlds__make_hlds_passes__Arity_23);
            }
            {
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__make_hlds_passes__PredTable0_25);
            }
            {
              hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_25, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__PredSymName_8, hlds__make_hlds__make_hlds_passes__FuncArity_24, &hlds__make_hlds__make_hlds_passes__PredIds_26);
            }
            if ((hlds__make_hlds__make_hlds_passes__PredIds_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.maybe_add_default_mode\'/3", (MR_String) "can\'t find func declaration");
                  return;
                }
              }
            else
              {
                MR_Word hlds__make_hlds__make_hlds_passes__Preds0_29;
                MR_Word hlds__make_hlds__make_hlds_passes__Preds_30;
                MR_Word hlds__make_hlds__make_hlds_passes__PredTable_31;

                {
                  hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_25, &hlds__make_hlds__make_hlds_passes__Preds0_29);
                }
                {
                  check_hlds__clause_to_proc__maybe_add_default_func_modes_3_p_0(hlds__make_hlds__make_hlds_passes__PredIds_26, hlds__make_hlds__make_hlds_passes__Preds0_29, &hlds__make_hlds__make_hlds_passes__Preds_30);
                }
                {
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__make_hlds_passes__Preds_30, hlds__make_hlds__make_hlds_passes__PredTable0_25, &hlds__make_hlds__make_hlds_passes__PredTable_31);
                }
                {
                  hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__make_hlds_passes__PredTable_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33);
                }
              }
          }
          break;
        case (MR_Integer) 0:
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
          break;
      }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decl_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_6,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__PredSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__make_hlds_passes__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 6)));
    MR_Integer hlds__make_hlds__make_hlds_passes__SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 7)));
    MR_String hlds__make_hlds__make_hlds_passes__PredName_19;
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 3)));

    {
      hlds__make_hlds__make_hlds_passes__PredName_19 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredSymName_11);
    }
    hlds__make_hlds__make_hlds_passes__succeeded = (strcmp(hlds__make_hlds__make_hlds_passes__PredName_19, (MR_String) "") == 0);
    if (hlds__make_hlds__make_hlds_passes__succeeded)
      {
        MR_Word hlds__make_hlds__make_hlds_passes__Msg_21;
        MR_Word hlds__make_hlds__make_hlds_passes__Spec_22;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_43;

        {
          hlds__make_hlds__make_hlds_passes__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_21, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_17));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[66])));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_43, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_21));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_passes__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_22, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_43));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28));
        }
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
      }
    else
    if ((hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_mode_decl\'/5", (MR_String) "no pred_or_func on mode declaration");
          return;
        }
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_passes__ModeStatus_24;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_49;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_25;

        {
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9, &hlds__make_hlds__make_hlds_passes__ModeStatus_24);
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_49, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9));
        }
        {
          hlds__make_hlds__add_pred__module_add_mode_15_p_0(hlds__make_hlds__make_hlds_passes__Context_17, hlds__make_hlds__make_hlds_passes__SeqNum_18, hlds__make_hlds__make_hlds_passes__Var_49, hlds__make_hlds__make_hlds_passes__ModeStatus_24, hlds__make_hlds__make_hlds_passes__PredOrFunc_23, hlds__make_hlds__make_hlds_passes__PredSymName_11, hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__Modes_13, hlds__make_hlds__make_hlds_passes__MaybeDet_15, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__Var_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29);
        }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_2(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

    {
      hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__622__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__make_hlds_passes__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

    {
      hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__621__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__make_hlds_passes__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__SectionItem_6,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_41,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__SectionInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionInfo_9, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__NeedQual_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionInfo_9, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__PredSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_passes__WithType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__make_hlds_passes__WithInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDetism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__make_hlds_passes__InstVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 8)));
    MR_Word hlds__make_hlds__make_hlds_passes__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 9)));
    MR_Word hlds__make_hlds__make_hlds_passes__Purity_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 10)));
    MR_Word hlds__make_hlds__make_hlds_passes__ClassContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 11)));
    MR_Word hlds__make_hlds__make_hlds_passes__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 12)));
    MR_Integer hlds__make_hlds__make_hlds_passes__SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 13)));
    MR_String hlds__make_hlds__make_hlds_passes__PredName_27;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_43;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_48;

    {
      hlds__make_hlds__make_hlds_passes__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_43, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_43, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_16));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_43, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__Var_43, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pred_decl\'/5", (MR_String) "WithType != no");
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_48, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_48, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_48, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_17));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__Var_48, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pred_decl\'/5", (MR_String) "WithInst != no");
    }
    {
      hlds__make_hlds__make_hlds_passes__PredName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredSymName_13);
    }
    hlds__make_hlds__make_hlds_passes__succeeded = (strcmp(hlds__make_hlds__make_hlds_passes__PredName_27, (MR_String) "") == 0);
    if (hlds__make_hlds__make_hlds_passes__succeeded)
      {
        MR_Word hlds__make_hlds__make_hlds_passes__Pieces_28;
        MR_Word hlds__make_hlds__make_hlds_passes__Msg_29;
        MR_Word hlds__make_hlds__make_hlds_passes__Spec_30;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_55;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_56;
        MR_String hlds__make_hlds__make_hlds_passes__Var_57;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_64;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_65;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_69;

        {
          hlds__make_hlds__make_hlds_passes__Var_57 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__make_hlds__make_hlds_passes__PredOrFunc_14);
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__Var_56, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_57));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_56));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[22])));
        }
        {
          hlds__make_hlds__make_hlds_passes__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[65])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_28, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_55));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_65, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_28));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_65));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_passes__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_29, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_25));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_29, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_64));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_69, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_29));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_passes__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Var_69));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_41));
        }
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_39;
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_passes__Markers0_31;
        MR_Word hlds__make_hlds__make_hlds_passes__Markers_35;
        MR_Word hlds__make_hlds__make_hlds_passes__PredStatus_36;
        MR_Word hlds__make_hlds__make_hlds_passes__PredOrigin_37;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_73;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_38;

        {
          hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__make_hlds_passes__Markers0_31);
        }
        if ((hlds__make_hlds__make_hlds_passes__Origin_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__make_hlds__make_hlds_passes__Markers_35 = hlds__make_hlds__make_hlds_passes__Markers0_31;
        else
          {
            MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_32 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_19), (MR_Integer) 1);
            MR_Word hlds__make_hlds__make_hlds_passes__IsMutable_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_32, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_passes___AllowExport_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_32, (MR_Integer) 0)));

            switch (hlds__make_hlds__make_hlds_passes__IsMutable_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 24, hlds__make_hlds__make_hlds_passes__Markers0_31, &hlds__make_hlds__make_hlds_passes__Markers_35);
                  }
                }
                break;
              case (MR_Integer) 0:
                hlds__make_hlds__make_hlds_passes__Markers_35 = hlds__make_hlds__make_hlds_passes__Markers0_31;
                break;
            }
          }
        {
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_11, &hlds__make_hlds__make_hlds_passes__PredStatus_36);
        }
        {
          hlds__make_hlds__make_hlds_passes__PredOrigin_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredSymName_13));
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_73, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_11));
        }
        {
          hlds__make_hlds__add_pred__module_add_pred_or_func_21_p_0(hlds__make_hlds__make_hlds_passes__PredOrigin_37, hlds__make_hlds__make_hlds_passes__Context_25, hlds__make_hlds__make_hlds_passes__SeqNum_26, hlds__make_hlds__make_hlds_passes__Var_73, hlds__make_hlds__make_hlds_passes__PredStatus_36, hlds__make_hlds__make_hlds_passes__NeedQual_12, hlds__make_hlds__make_hlds_passes__PredOrFunc_14, hlds__make_hlds__make_hlds_passes__PredSymName_13, hlds__make_hlds__make_hlds_passes__TypeVarSet_20, hlds__make_hlds__make_hlds_passes__InstVarSet_21, hlds__make_hlds__make_hlds_passes__ExistQVars_22, hlds__make_hlds__make_hlds_passes__TypesAndModes_15, hlds__make_hlds__make_hlds_passes__ClassContext_24, hlds__make_hlds__make_hlds_passes__MaybeDetism_18, hlds__make_hlds__make_hlds_passes__Purity_23, hlds__make_hlds__make_hlds_passes__Markers_35, &hlds__make_hlds__make_hlds_passes__Var_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42);
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defn_7_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_8,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_18,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__ModeStatus_14;
    MR_Word hlds__make_hlds__make_hlds_passes__FoundError_15;

    {
      hlds__status__item_mercury_status_to_mode_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, &hlds__make_hlds__make_hlds_passes__ModeStatus_14);
    }
    {
      hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_13, hlds__make_hlds__make_hlds_passes__ModeStatus_14, &hlds__make_hlds__make_hlds_passes__FoundError_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21);
    }
    switch (hlds__make_hlds__make_hlds_passes__FoundError_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_18;
        break;
      case (MR_Integer) 1:
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19 = (MR_Integer) 1;
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defn_7_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_8,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_18,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__InstStatus_14;
    MR_Word hlds__make_hlds__make_hlds_passes__FoundError_15;

    {
      hlds__status__item_mercury_status_to_inst_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, &hlds__make_hlds__make_hlds_passes__InstStatus_14);
    }
    {
      hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_13, hlds__make_hlds__make_hlds_passes__InstStatus_14, &hlds__make_hlds__make_hlds_passes__FoundError_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21);
    }
    switch (hlds__make_hlds__make_hlds_passes__FoundError_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_18;
        break;
      case (MR_Integer) 1:
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19 = (MR_Integer) 1;
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_HeadVar__3_59;

    {
      hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__550__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__conv0_HeadVar__3_59);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_HeadVar__3_59));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__SectionItem_12,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_0_41,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_42,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_43,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_44,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_45,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_46,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_47,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_48)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__SectionInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_12, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_12, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionInfo_18, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__NeedQual_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionInfo_18, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__TypeParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__make_hlds_passes__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_passes__TypeStatus_38;
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 5)));

    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_45;
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_48 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_47;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_62_62;
          MR_Word hlds__make_hlds__make_hlds_passes__Detailssolver_28 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_24), (MR_Integer) 1);
          MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Detailssolver_28, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31;
          MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_32;
          MR_Word hlds__make_hlds__make_hlds_passes__TypeSectionMutableItems_33;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_50;
          MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Detailssolver_28, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__make_hlds_passes__Var_55;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_56;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_57;

          {
            hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_22));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__TypeParams_23));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__TypeVarSet_25));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SolverTypeDetails_29));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_26));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_20));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__NeedQual_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_46 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_45));
          }
          hlds__make_hlds__make_hlds_passes__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_29, (MR_Integer) 0)));
          hlds__make_hlds__make_hlds_passes__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_29, (MR_Integer) 1)));
          hlds__make_hlds__make_hlds_passes__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_29, (MR_Integer) 2)));
          hlds__make_hlds__make_hlds_passes__MutableItems_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_29, (MR_Integer) 3)));
          {
            hlds__make_hlds__make_hlds_passes__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_50, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_50, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_50, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SectionInfo_18));
          }
          hlds__make_hlds__make_hlds_passes__TypeInfo_62_62 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[5];
          {
            mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, hlds__make_hlds__make_hlds_passes__TypeInfo_62_62, hlds__make_hlds__make_hlds_passes__Var_50, hlds__make_hlds__make_hlds_passes__MutableItems_32, &hlds__make_hlds__make_hlds_passes__TypeSectionMutableItems_33);
          }
          {
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_48 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__TypeInfo_62_62, hlds__make_hlds__make_hlds_passes__TypeSectionMutableItems_33, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_47);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_45;
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_48 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_47;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_24, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_45;
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_48 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_47;
            }
            break;
          case (MR_Integer) 1:
            {
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_46 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_45;
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_48 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_47;
            }
            break;
        }
        break;
    }
    {
      hlds__status__item_mercury_status_to_type_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_20, &hlds__make_hlds__make_hlds_passes__TypeStatus_38);
    }
    {
      hlds__make_hlds__add_type__module_add_type_defn_9_p_0(hlds__make_hlds__make_hlds_passes__TypeStatus_38, hlds__make_hlds__make_hlds_passes__NeedQual_21, hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_0_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_42, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_43, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_44);
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_5,
  MR_Word hlds__make_hlds__make_hlds_passes__Avail_6,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_8;
    MR_Word hlds__make_hlds__make_hlds_passes__Context_9;
    MR_Word hlds__make_hlds__make_hlds_passes__ImportOrUse_11;

    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Avail_6)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__make_hlds_passes__Var_19 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Avail_6), (MR_Integer) 0);
        MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_10;

        hlds__make_hlds__make_hlds_passes__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_19, (MR_Integer) 0)));
        hlds__make_hlds__make_hlds_passes__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_19, (MR_Integer) 1)));
        hlds__make_hlds__make_hlds_passes___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_19, (MR_Integer) 2)));
        hlds__make_hlds__make_hlds_passes__ImportOrUse_11 = (MR_Integer) 0;
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_passes__Var_18 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Avail_6), (MR_Integer) 1);
        MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_28;

        hlds__make_hlds__make_hlds_passes__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_18, (MR_Integer) 0)));
        hlds__make_hlds__make_hlds_passes__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_18, (MR_Integer) 1)));
        hlds__make_hlds__make_hlds_passes___SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_18, (MR_Integer) 2)));
        hlds__make_hlds__make_hlds_passes__ImportOrUse_11 = (MR_Integer) 1;
      }
    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__make_hlds_passes__ItemImport_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_5, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemImport_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__make_hlds_passes__ImportLocn_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__ItemImport_14, (MR_Integer) 0)));

              switch (hlds__make_hlds__make_hlds_passes__ImportLocn_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24;

                    {
                      hlds__hlds_module__module_add_avail_module_name_6_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__ImportOrUse_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24);
                    }
                    {
                      hlds__hlds_module__module_info_add_parent_to_used_modules_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                  {
                    hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17);
                  }
                  break;
              }
            }
            break;
        }
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_passes__ItemExport_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_5, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_passes__Section_13;
        MR_Word hlds__make_hlds__make_hlds_passes__Var_26;

        switch (hlds__make_hlds__make_hlds_passes__ItemExport_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            hlds__make_hlds__make_hlds_passes__Section_13 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            hlds__make_hlds__make_hlds_passes__Section_13 = (MR_Integer) 1;
            break;
        }
        {
          hlds__make_hlds__make_hlds_passes__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Var_26, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_9));
        }
        {
          hlds__hlds_module__module_add_avail_module_name_6_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__Section_13, hlds__make_hlds__make_hlds_passes__ImportOrUse_11, hlds__make_hlds__make_hlds_passes__Var_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17);
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_17;

    {
      hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_17);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_17));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_4,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_9)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_4, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_passes__Avails_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_4, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_passes__Var_10;
    MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_9;

    {
      hlds__make_hlds__make_hlds_passes__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_10, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_6));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__make_hlds__make_hlds_passes__Var_10, hlds__make_hlds__make_hlds_passes__Avails_7, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_8)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_9);
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__TypeCtor_4,
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__TVarSet_6;
    MR_Word hlds__make_hlds__make_hlds_passes__Context_8;
    MR_Word hlds__make_hlds__make_hlds_passes__Type_10;

    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__make_hlds_passes__TVarSet_6);
    }
    {
      mercury__term__context_init_1_p_0(&hlds__make_hlds__make_hlds_passes__Context_8);
    }
    {
      parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__make_hlds_passes__TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__Type_10);
    }
    {
      hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(hlds__make_hlds__make_hlds_passes__TVarSet_6, hlds__make_hlds__make_hlds_passes__Type_10, hlds__make_hlds__make_hlds_passes__TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[64]), hlds__make_hlds__make_hlds_passes__Context_8, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_11, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv124_STATE_VARIABLE_QualInfo_9;

    {
      hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv124_STATE_VARIABLE_QualInfo_9);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv124_STATE_VARIABLE_QualInfo_9));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv122_HeadVar__4_4;

    {
      hlds__make_hlds__add_pred__check_pred_if_field_access_function_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv122_HeadVar__4_4);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv122_HeadVar__4_4));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv119_STATE_VARIABLE_ModuleInfo_20;
    MR_Word hlds__make_hlds__make_hlds_passes__conv118_STATE_VARIABLE_Specs_22;

    {
      hlds__make_hlds__make_hlds_passes__add_finalise_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv119_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv118_STATE_VARIABLE_Specs_22);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv119_STATE_VARIABLE_ModuleInfo_20));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv118_STATE_VARIABLE_Specs_22));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv115_STATE_VARIABLE_ModuleInfo_20;
    MR_Word hlds__make_hlds__make_hlds_passes__conv114_STATE_VARIABLE_Specs_22;

    {
      hlds__make_hlds__make_hlds_passes__add_initialise_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv115_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv114_STATE_VARIABLE_Specs_22);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv115_STATE_VARIABLE_ModuleInfo_20));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv114_STATE_VARIABLE_Specs_22));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv110_STATE_VARIABLE_ModuleInfo_23;
    MR_Word hlds__make_hlds__make_hlds_passes__conv109_STATE_VARIABLE_QualInfo_25;
    MR_Word hlds__make_hlds__make_hlds_passes__conv108_STATE_VARIABLE_Specs_27;

    {
      hlds__make_hlds__make_hlds_passes__add_promise_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv110_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv109_STATE_VARIABLE_QualInfo_25, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv108_STATE_VARIABLE_Specs_27);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv110_STATE_VARIABLE_ModuleInfo_23));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv109_STATE_VARIABLE_QualInfo_25));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv108_STATE_VARIABLE_Specs_27));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv104_HeadVar__3_3;
    MR_Word hlds__make_hlds__make_hlds_passes__conv103_HeadVar__5_5;
    MR_Word hlds__make_hlds__make_hlds_passes__conv102_HeadVar__7_7;

    {
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv104_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv103_HeadVar__5_5, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv102_HeadVar__7_7);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv104_HeadVar__3_3));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv103_HeadVar__5_5));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv102_HeadVar__7_7));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv98_HeadVar__3_3;
    MR_Word hlds__make_hlds__make_hlds_passes__conv97_HeadVar__5_5;
    MR_Word hlds__make_hlds__make_hlds_passes__conv96_HeadVar__7_7;

    {
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv98_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv97_HeadVar__5_5, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv96_HeadVar__7_7);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv98_HeadVar__3_3));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv97_HeadVar__5_5));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv96_HeadVar__7_7));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv92_HeadVar__3_3;
    MR_Word hlds__make_hlds__make_hlds_passes__conv91_HeadVar__5_5;
    MR_Word hlds__make_hlds__make_hlds_passes__conv90_HeadVar__7_7;

    {
      hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_if_local_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv92_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv91_HeadVar__5_5, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv90_HeadVar__7_7);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv92_HeadVar__3_3));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv91_HeadVar__5_5));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv90_HeadVar__7_7));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv86_STATE_VARIABLE_ModuleInfo_35;
    MR_Word hlds__make_hlds__make_hlds_passes__conv85_STATE_VARIABLE_QualInfo_37;
    MR_Word hlds__make_hlds__make_hlds_passes__conv84_STATE_VARIABLE_Specs_39;

    {
      hlds__make_hlds__make_hlds_passes__add_clause_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv86_STATE_VARIABLE_ModuleInfo_35, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv85_STATE_VARIABLE_QualInfo_37, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv84_STATE_VARIABLE_Specs_39);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv86_STATE_VARIABLE_ModuleInfo_35));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv85_STATE_VARIABLE_QualInfo_37));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv84_STATE_VARIABLE_Specs_39));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv82_STATE_VARIABLE_ModuleInfo_12;

    {
      hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv82_STATE_VARIABLE_ModuleInfo_12);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv82_STATE_VARIABLE_ModuleInfo_12));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_8)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv78_HeadVar__4_4;
    MR_Word hlds__make_hlds__make_hlds_passes__conv77_HeadVar__6_6;
    MR_Word hlds__make_hlds__make_hlds_passes__conv76_HeadVar__8_8;

    {
      hlds__make_hlds__add_type__process_type_defn_8_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv78_HeadVar__4_4, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_5), &hlds__make_hlds__make_hlds_passes__conv77_HeadVar__6_6, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_7), &hlds__make_hlds__make_hlds_passes__conv76_HeadVar__8_8);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv78_HeadVar__4_4));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv77_HeadVar__6_6));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv76_HeadVar__8_8));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv74_HeadVar__5_5;

    {
      hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv74_HeadVar__5_5);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv74_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv71_HeadVar__3_3;
    MR_Word hlds__make_hlds__make_hlds_passes__conv70_HeadVar__5_5;

    {
      hlds__make_hlds__add_class__add_instance_defn_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv71_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv70_HeadVar__5_5);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv71_HeadVar__3_3));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv70_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv68_STATE_VARIABLE_ModuleInfo_33;

    {
      hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv68_STATE_VARIABLE_ModuleInfo_33);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv68_STATE_VARIABLE_ModuleInfo_33));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv65_HeadVar__3_3;
    MR_Word hlds__make_hlds__make_hlds_passes__conv64_HeadVar__5_5;

    {
      hlds__make_hlds__add_class__add_typeclass_defn_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv65_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv64_HeadVar__5_5);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv65_HeadVar__3_3));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv64_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv61_HeadVar__3_3;
    MR_Word hlds__make_hlds__make_hlds_passes__conv60_HeadVar__5_5;

    {
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv61_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv60_HeadVar__5_5);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv61_HeadVar__3_3));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv60_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv57_HeadVar__3_3;
    MR_Word hlds__make_hlds__make_hlds_passes__conv56_HeadVar__5_5;

    {
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv57_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv56_HeadVar__5_5);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv57_HeadVar__3_3));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv56_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv53_HeadVar__3_3;
    MR_Word hlds__make_hlds__make_hlds_passes__conv52_HeadVar__5_5;

    {
      hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv53_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv52_HeadVar__5_5);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv53_HeadVar__3_3));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv52_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv49_STATE_VARIABLE_ModuleInfo_27;
    MR_Word hlds__make_hlds__make_hlds_passes__conv48_STATE_VARIABLE_Specs_29;

    {
      hlds__make_hlds__make_hlds_passes__add_mode_decl_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv49_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv48_STATE_VARIABLE_Specs_29);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv49_STATE_VARIABLE_ModuleInfo_27));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv48_STATE_VARIABLE_Specs_29));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv45_STATE_VARIABLE_ModuleInfo_40;
    MR_Word hlds__make_hlds__make_hlds_passes__conv44_STATE_VARIABLE_Specs_42;

    {
      hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv45_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv44_STATE_VARIABLE_Specs_42);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv45_STATE_VARIABLE_ModuleInfo_40));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv44_STATE_VARIABLE_Specs_42));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv40_STATE_VARIABLE_ModuleInfo_17;
    MR_Word hlds__make_hlds__make_hlds_passes__conv39_STATE_VARIABLE_FoundInvalidInstOrMode_19;
    MR_Word hlds__make_hlds__make_hlds_passes__conv38_STATE_VARIABLE_Specs_21;

    {
      hlds__make_hlds__make_hlds_passes__add_mode_defn_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv40_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv39_STATE_VARIABLE_FoundInvalidInstOrMode_19, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv38_STATE_VARIABLE_Specs_21);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv40_STATE_VARIABLE_ModuleInfo_17));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv39_STATE_VARIABLE_FoundInvalidInstOrMode_19));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv38_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv34_STATE_VARIABLE_ModuleInfo_17;
    MR_Word hlds__make_hlds__make_hlds_passes__conv33_STATE_VARIABLE_FoundInvalidInstOrMode_19;
    MR_Word hlds__make_hlds__make_hlds_passes__conv32_STATE_VARIABLE_Specs_21;

    {
      hlds__make_hlds__make_hlds_passes__add_inst_defn_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv34_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv33_STATE_VARIABLE_FoundInvalidInstOrMode_19, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv32_STATE_VARIABLE_Specs_21);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv34_STATE_VARIABLE_ModuleInfo_17));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv33_STATE_VARIABLE_FoundInvalidInstOrMode_19));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv32_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv26_STATE_VARIABLE_ModuleInfo_40;
    MR_Word hlds__make_hlds__make_hlds_passes__conv25_STATE_VARIABLE_FoundInvalidType_42;
    MR_Word hlds__make_hlds__make_hlds_passes__conv24_STATE_VARIABLE_Specs_44;
    MR_Word hlds__make_hlds__make_hlds_passes__conv23_STATE_VARIABLE_SolverAuxPredInfos_46;
    MR_Word hlds__make_hlds__make_hlds_passes__conv22_STATE_VARIABLE_SectionMutableItems_48;

    {
      hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv26_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv25_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv24_STATE_VARIABLE_Specs_44, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_8), &hlds__make_hlds__make_hlds_passes__conv23_STATE_VARIABLE_SolverAuxPredInfos_46, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_10), &hlds__make_hlds__make_hlds_passes__conv22_STATE_VARIABLE_SectionMutableItems_48);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv26_STATE_VARIABLE_ModuleInfo_40));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv25_STATE_VARIABLE_FoundInvalidType_42));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv24_STATE_VARIABLE_Specs_44));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv23_STATE_VARIABLE_SolverAuxPredInfos_46));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv22_STATE_VARIABLE_SectionMutableItems_48));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv16_STATE_VARIABLE_ModuleInfo_40;
    MR_Word hlds__make_hlds__make_hlds_passes__conv15_STATE_VARIABLE_FoundInvalidType_42;
    MR_Word hlds__make_hlds__make_hlds_passes__conv14_STATE_VARIABLE_Specs_44;
    MR_Word hlds__make_hlds__make_hlds_passes__conv13_STATE_VARIABLE_SolverAuxPredInfos_46;
    MR_Word hlds__make_hlds__make_hlds_passes__conv12_STATE_VARIABLE_SectionMutableItems_48;

    {
      hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv16_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv15_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv14_STATE_VARIABLE_Specs_44, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_8), &hlds__make_hlds__make_hlds_passes__conv13_STATE_VARIABLE_SolverAuxPredInfos_46, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_10), &hlds__make_hlds__make_hlds_passes__conv12_STATE_VARIABLE_SectionMutableItems_48);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv16_STATE_VARIABLE_ModuleInfo_40));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv15_STATE_VARIABLE_FoundInvalidType_42));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv14_STATE_VARIABLE_Specs_44));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv13_STATE_VARIABLE_SolverAuxPredInfos_46));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv12_STATE_VARIABLE_SectionMutableItems_48));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_40;
    MR_Word hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_FoundInvalidType_42;
    MR_Word hlds__make_hlds__make_hlds_passes__conv4_STATE_VARIABLE_Specs_44;
    MR_Word hlds__make_hlds__make_hlds_passes__conv3_STATE_VARIABLE_SolverAuxPredInfos_46;
    MR_Word hlds__make_hlds__make_hlds_passes__conv2_STATE_VARIABLE_SectionMutableItems_48;

    {
      hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv4_STATE_VARIABLE_Specs_44, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_8), &hlds__make_hlds__make_hlds_passes__conv3_STATE_VARIABLE_SolverAuxPredInfos_46, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_10), &hlds__make_hlds__make_hlds_passes__conv2_STATE_VARIABLE_SectionMutableItems_48);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_40));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_FoundInvalidType_42));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv4_STATE_VARIABLE_Specs_44));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv3_STATE_VARIABLE_SolverAuxPredInfos_46));
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv2_STATE_VARIABLE_SectionMutableItems_48));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_9;

    {
      hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_9));
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(
  MR_Word hlds__make_hlds__make_hlds_passes__AugCompUnit_12,
  MR_Word hlds__make_hlds__make_hlds_passes__Globals_13,
  MR_String hlds__make_hlds__make_hlds_passes__DumpBaseFileName_14,
  MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_15,
  MR_Word hlds__make_hlds__make_hlds_passes__TypeEqvMapMap_16,
  MR_Word hlds__make_hlds__make_hlds_passes__UsedModules_17,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_63,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_64,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_65,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_66,
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_67)
{
  {
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_203_203;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_204_204;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_205_205;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_206_206;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_207_207;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_238_238;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_239_239;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_253_253;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_265_265;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_271_271;
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_318_318;
    MR_Word hlds__make_hlds__make_hlds_passes__PQInfo_23;
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_28;
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_30;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemAvailLists_36;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnsAbstract_37;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnsMercury_38;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnsForeign_39;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInstDefns_40;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDefns_41;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecls_42;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecls_43;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPromises_44;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeclasses_45;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInstances_46;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialises_47;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalises_48;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMutables_49;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemReserveTagPragmas_50;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemForeignEnumPragmas_51;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPragmas2_52;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPragmas3_53;
    MR_Word hlds__make_hlds__make_hlds_passes__ItemClauses_54;
    MR_Word hlds__make_hlds__make_hlds_passes__SolverAuxPredInfos_55;
    MR_Word hlds__make_hlds__make_hlds_passes__SolverItemMutables_56;
    MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_58;
    MR_Word hlds__make_hlds__make_hlds_passes__MQUndefType_59;
    MR_Word hlds__make_hlds__make_hlds_passes__MQUndefInst_60;
    MR_Word hlds__make_hlds__make_hlds_passes__MQUndefMode_61;
    MR_Word hlds__make_hlds__make_hlds_passes__MQUndefTypeClass_62;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_69_69;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_70_70;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_80_80;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_84_84;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_85_85;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_86_86;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_87_87;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_88_88;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_90_90;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_91_91;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_92_92;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_93_93;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_94_94;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_96_96;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_97_97;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_98_98;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_101_101;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_102_102;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_103_103;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_104_104;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_106_106;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_107_107;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_108_108;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_110_110;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_111_111;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_112_112;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_114_114;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_115_115;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_117_117;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_118_118;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_120_120;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_121_121;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_123_123;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_124_124;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_126_126;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_127_127;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_129_129;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_130_130;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_132_132;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_134_134;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_135_135;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_136_136;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_137_137;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_144_144;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_145_145;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_146_146;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_149_149;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_150_150;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_151_151;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_153_153;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_154_154;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_155_155;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_157_157;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_158_158;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_159_159;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_161_161;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_162_162;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_163_163;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_165_165;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_166_166;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_167_167;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_169_169;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_170_170;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_171_171;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_173_173;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_174_174;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_176_176;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_177_177;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_179_179;
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_180_180;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_181;
    MR_Word hlds__make_hlds__make_hlds_passes___ModuleNameContext_29;
    MR_Word hlds__make_hlds__make_hlds_passes___SrcItemBlocks_31;
    MR_Word hlds__make_hlds__make_hlds_passes___DirectIntItemBlocks_32;
    MR_Word hlds__make_hlds__make_hlds_passes___IndirectIntItemBlocks_33;
    MR_Word hlds__make_hlds__make_hlds_passes___OptItemBlocks_34;
    MR_Word hlds__make_hlds__make_hlds_passes___IntForOptItemBlocks_35;
    MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_80_80;
    MR_Box hlds__make_hlds__make_hlds_passes__conv11_STATE_VARIABLE_ModuleInfo_84_84;
    MR_Box hlds__make_hlds__make_hlds_passes__conv10_STATE_VARIABLE_FoundInvalidType_85_85;
    MR_Box hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_Specs_86_86;
    MR_Box hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_SolverAuxPredInfos_87_87;
    MR_Box hlds__make_hlds__make_hlds_passes__conv7_STATE_VARIABLE_SolverItemMutables_88_88;
    MR_Box hlds__make_hlds__make_hlds_passes__conv21_STATE_VARIABLE_ModuleInfo_90_90;
    MR_Box hlds__make_hlds__make_hlds_passes__conv20_STATE_VARIABLE_FoundInvalidType_91_91;
    MR_Box hlds__make_hlds__make_hlds_passes__conv19_STATE_VARIABLE_Specs_92_92;
    MR_Box hlds__make_hlds__make_hlds_passes__conv18_STATE_VARIABLE_SolverAuxPredInfos_93_93;
    MR_Box hlds__make_hlds__make_hlds_passes__conv17_STATE_VARIABLE_SolverItemMutables_94_94;
    MR_Box hlds__make_hlds__make_hlds_passes__conv31_STATE_VARIABLE_ModuleInfo_96_96;
    MR_Box hlds__make_hlds__make_hlds_passes__conv30_STATE_VARIABLE_FoundInvalidType_97_97;
    MR_Box hlds__make_hlds__make_hlds_passes__conv29_STATE_VARIABLE_Specs_98_98;
    MR_Box hlds__make_hlds__make_hlds_passes__conv28_SolverAuxPredInfos_55;
    MR_Box hlds__make_hlds__make_hlds_passes__conv27_SolverItemMutables_56;
    MR_Box hlds__make_hlds__make_hlds_passes__conv37_STATE_VARIABLE_ModuleInfo_106_106;
    MR_Box hlds__make_hlds__make_hlds_passes__conv36_STATE_VARIABLE_FoundInvalidInstOrMode_107_107;
    MR_Box hlds__make_hlds__make_hlds_passes__conv35_STATE_VARIABLE_Specs_108_108;
    MR_Box hlds__make_hlds__make_hlds_passes__conv43_STATE_VARIABLE_ModuleInfo_110_110;
    MR_Box hlds__make_hlds__make_hlds_passes__conv42_STATE_VARIABLE_FoundInvalidInstOrMode_111_111;
    MR_Box hlds__make_hlds__make_hlds_passes__conv41_STATE_VARIABLE_Specs_112_112;
    MR_Box hlds__make_hlds__make_hlds_passes__conv47_STATE_VARIABLE_ModuleInfo_114_114;
    MR_Box hlds__make_hlds__make_hlds_passes__conv46_STATE_VARIABLE_Specs_115_115;
    MR_Box hlds__make_hlds__make_hlds_passes__conv51_STATE_VARIABLE_ModuleInfo_117_117;
    MR_Box hlds__make_hlds__make_hlds_passes__conv50_STATE_VARIABLE_Specs_118_118;
    MR_Box hlds__make_hlds__make_hlds_passes__conv55_STATE_VARIABLE_ModuleInfo_120_120;
    MR_Box hlds__make_hlds__make_hlds_passes__conv54_STATE_VARIABLE_Specs_121_121;
    MR_Box hlds__make_hlds__make_hlds_passes__conv59_STATE_VARIABLE_ModuleInfo_123_123;
    MR_Box hlds__make_hlds__make_hlds_passes__conv58_STATE_VARIABLE_Specs_124_124;
    MR_Box hlds__make_hlds__make_hlds_passes__conv63_STATE_VARIABLE_ModuleInfo_126_126;
    MR_Box hlds__make_hlds__make_hlds_passes__conv62_STATE_VARIABLE_Specs_127_127;
    MR_Box hlds__make_hlds__make_hlds_passes__conv67_STATE_VARIABLE_ModuleInfo_129_129;
    MR_Box hlds__make_hlds__make_hlds_passes__conv66_STATE_VARIABLE_Specs_130_130;
    MR_Box hlds__make_hlds__make_hlds_passes__conv69_STATE_VARIABLE_ModuleInfo_132_132;
    MR_Box hlds__make_hlds__make_hlds_passes__conv73_STATE_VARIABLE_ModuleInfo_134_134;
    MR_Box hlds__make_hlds__make_hlds_passes__conv72_STATE_VARIABLE_Specs_135_135;
    MR_Word hlds__make_hlds__make_hlds_passes__Var_369;
    MR_Box hlds__make_hlds__make_hlds_passes__conv89_STATE_VARIABLE_ModuleInfo_153_153;
    MR_Box hlds__make_hlds__make_hlds_passes__conv88_STATE_VARIABLE_QualInfo_154_154;
    MR_Box hlds__make_hlds__make_hlds_passes__conv87_STATE_VARIABLE_Specs_155_155;
    MR_Box hlds__make_hlds__make_hlds_passes__conv95_STATE_VARIABLE_ModuleInfo_157_157;
    MR_Box hlds__make_hlds__make_hlds_passes__conv94_STATE_VARIABLE_QualInfo_158_158;
    MR_Box hlds__make_hlds__make_hlds_passes__conv93_STATE_VARIABLE_Specs_159_159;
    MR_Box hlds__make_hlds__make_hlds_passes__conv101_STATE_VARIABLE_ModuleInfo_161_161;
    MR_Box hlds__make_hlds__make_hlds_passes__conv100_STATE_VARIABLE_QualInfo_162_162;
    MR_Box hlds__make_hlds__make_hlds_passes__conv99_STATE_VARIABLE_Specs_163_163;
    MR_Box hlds__make_hlds__make_hlds_passes__conv107_STATE_VARIABLE_ModuleInfo_165_165;
    MR_Box hlds__make_hlds__make_hlds_passes__conv106_STATE_VARIABLE_QualInfo_166_166;
    MR_Box hlds__make_hlds__make_hlds_passes__conv105_STATE_VARIABLE_Specs_167_167;
    MR_Box hlds__make_hlds__make_hlds_passes__conv113_STATE_VARIABLE_ModuleInfo_169_169;
    MR_Box hlds__make_hlds__make_hlds_passes__conv112_STATE_VARIABLE_QualInfo_170_170;
    MR_Box hlds__make_hlds__make_hlds_passes__conv111_STATE_VARIABLE_Specs_171_171;
    MR_Box hlds__make_hlds__make_hlds_passes__conv117_STATE_VARIABLE_ModuleInfo_173_173;
    MR_Box hlds__make_hlds__make_hlds_passes__conv116_STATE_VARIABLE_Specs_174_174;
    MR_Box hlds__make_hlds__make_hlds_passes__conv121_STATE_VARIABLE_ModuleInfo_176_176;
    MR_Box hlds__make_hlds__make_hlds_passes__conv120_STATE_VARIABLE_Specs_177_177;
    MR_Box hlds__make_hlds__make_hlds_passes__conv123_STATE_VARIABLE_Specs_67;
    MR_Box hlds__make_hlds__make_hlds_passes__conv125_STATE_VARIABLE_QualInfo_63;

    {
      parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo0_15, &hlds__make_hlds__make_hlds_passes__PQInfo_23);
    }
    {
      hlds__hlds_module__module_info_init_6_p_0(hlds__make_hlds__make_hlds_passes__AugCompUnit_12, hlds__make_hlds__make_hlds_passes__DumpBaseFileName_14, hlds__make_hlds__make_hlds_passes__Globals_13, hlds__make_hlds__make_hlds_passes__PQInfo_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_69_69);
    }
    {
      hlds__hlds_module__module_info_set_used_modules_3_p_0(hlds__make_hlds__make_hlds_passes__UsedModules_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_69_69, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_70_70);
    }
    hlds__make_hlds__make_hlds_passes__ModuleName_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 0)));
    hlds__make_hlds__make_hlds_passes___ModuleNameContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 1)));
    hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 2)));
    hlds__make_hlds__make_hlds_passes___SrcItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 3)));
    hlds__make_hlds__make_hlds_passes___DirectIntItemBlocks_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 4)));
    hlds__make_hlds__make_hlds_passes___IndirectIntItemBlocks_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 5)));
    hlds__make_hlds__make_hlds_passes___OptItemBlocks_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 6)));
    hlds__make_hlds__make_hlds_passes___IntForOptItemBlocks_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 7)));
    {
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_20_p_0(hlds__make_hlds__make_hlds_passes__AugCompUnit_12, &hlds__make_hlds__make_hlds_passes__ItemAvailLists_36, &hlds__make_hlds__make_hlds_passes__ItemTypeDefnsAbstract_37, &hlds__make_hlds__make_hlds_passes__ItemTypeDefnsMercury_38, &hlds__make_hlds__make_hlds_passes__ItemTypeDefnsForeign_39, &hlds__make_hlds__make_hlds_passes__ItemInstDefns_40, &hlds__make_hlds__make_hlds_passes__ItemModeDefns_41, &hlds__make_hlds__make_hlds_passes__ItemPredDecls_42, &hlds__make_hlds__make_hlds_passes__ItemModeDecls_43, &hlds__make_hlds__make_hlds_passes__ItemPromises_44, &hlds__make_hlds__make_hlds_passes__ItemTypeclasses_45, &hlds__make_hlds__make_hlds_passes__ItemInstances_46, &hlds__make_hlds__make_hlds_passes__ItemInitialises_47, &hlds__make_hlds__make_hlds_passes__ItemFinalises_48, &hlds__make_hlds__make_hlds_passes__ItemMutables_49, &hlds__make_hlds__make_hlds_passes__ItemReserveTagPragmas_50, &hlds__make_hlds__make_hlds_passes__ItemForeignEnumPragmas_51, &hlds__make_hlds__make_hlds_passes__ItemPragmas2_52, &hlds__make_hlds__make_hlds_passes__ItemPragmas3_53, &hlds__make_hlds__make_hlds_passes__ItemClauses_54);
    }
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[1], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[2], hlds__make_hlds__make_hlds_passes__ItemAvailLists_36, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_70_70)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_80_80);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_80_80 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_80_80);
    hlds__make_hlds__make_hlds_passes__TypeInfo_203_203 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[2];
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_204_204 = (MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0;
    hlds__make_hlds__make_hlds_passes__TypeInfo_205_205 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[3];
    hlds__make_hlds__make_hlds_passes__TypeInfo_206_206 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[4];
    hlds__make_hlds__make_hlds_passes__TypeInfo_207_207 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[6];
    {
      mercury__list__foldl5_12_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_203_203, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_204_204, hlds__make_hlds__make_hlds_passes__TypeInfo_205_205, hlds__make_hlds__make_hlds_passes__TypeInfo_206_206, hlds__make_hlds__make_hlds_passes__TypeInfo_207_207, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[3], hlds__make_hlds__make_hlds_passes__ItemTypeDefnsAbstract_37, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_80_80)), &hlds__make_hlds__make_hlds_passes__conv11_STATE_VARIABLE_ModuleInfo_84_84, ((MR_Box) ((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__conv10_STATE_VARIABLE_FoundInvalidType_85_85, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_Specs_86_86, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_SolverAuxPredInfos_87_87, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__make_hlds_passes__conv7_STATE_VARIABLE_SolverItemMutables_88_88);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_84_84 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv11_STATE_VARIABLE_ModuleInfo_84_84);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_85_85 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv10_STATE_VARIABLE_FoundInvalidType_85_85);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_86_86 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_Specs_86_86);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_87_87 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_SolverAuxPredInfos_87_87);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_88_88 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv7_STATE_VARIABLE_SolverItemMutables_88_88);
    {
      mercury__list__foldl5_12_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_203_203, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_204_204, hlds__make_hlds__make_hlds_passes__TypeInfo_205_205, hlds__make_hlds__make_hlds_passes__TypeInfo_206_206, hlds__make_hlds__make_hlds_passes__TypeInfo_207_207, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[4], hlds__make_hlds__make_hlds_passes__ItemTypeDefnsMercury_38, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_84_84)), &hlds__make_hlds__make_hlds_passes__conv21_STATE_VARIABLE_ModuleInfo_90_90, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_85_85)), &hlds__make_hlds__make_hlds_passes__conv20_STATE_VARIABLE_FoundInvalidType_91_91, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_86_86)), &hlds__make_hlds__make_hlds_passes__conv19_STATE_VARIABLE_Specs_92_92, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_87_87)), &hlds__make_hlds__make_hlds_passes__conv18_STATE_VARIABLE_SolverAuxPredInfos_93_93, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_88_88)), &hlds__make_hlds__make_hlds_passes__conv17_STATE_VARIABLE_SolverItemMutables_94_94);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_90_90 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv21_STATE_VARIABLE_ModuleInfo_90_90);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_91_91 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv20_STATE_VARIABLE_FoundInvalidType_91_91);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_92_92 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv19_STATE_VARIABLE_Specs_92_92);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_93_93 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv18_STATE_VARIABLE_SolverAuxPredInfos_93_93);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_94_94 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv17_STATE_VARIABLE_SolverItemMutables_94_94);
    {
      mercury__list__foldl5_12_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_203_203, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_204_204, hlds__make_hlds__make_hlds_passes__TypeInfo_205_205, hlds__make_hlds__make_hlds_passes__TypeInfo_206_206, hlds__make_hlds__make_hlds_passes__TypeInfo_207_207, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[5], hlds__make_hlds__make_hlds_passes__ItemTypeDefnsForeign_39, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_90_90)), &hlds__make_hlds__make_hlds_passes__conv31_STATE_VARIABLE_ModuleInfo_96_96, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_91_91)), &hlds__make_hlds__make_hlds_passes__conv30_STATE_VARIABLE_FoundInvalidType_97_97, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_92_92)), &hlds__make_hlds__make_hlds_passes__conv29_STATE_VARIABLE_Specs_98_98, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_93_93)), &hlds__make_hlds__make_hlds_passes__conv28_SolverAuxPredInfos_55, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_94_94)), &hlds__make_hlds__make_hlds_passes__conv27_SolverItemMutables_56);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_96_96 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv31_STATE_VARIABLE_ModuleInfo_96_96);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_97_97 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv30_STATE_VARIABLE_FoundInvalidType_97_97);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_98_98 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv29_STATE_VARIABLE_Specs_98_98);
    hlds__make_hlds__make_hlds_passes__SolverAuxPredInfos_55 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv28_SolverAuxPredInfos_55);
    hlds__make_hlds__make_hlds_passes__SolverItemMutables_56 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv27_SolverItemMutables_56);
    {
      hlds__make_hlds__add_pragma__add_reserve_tag_pragmas_5_p_0(hlds__make_hlds__make_hlds_passes__ItemReserveTagPragmas_50, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_96_96, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_101_101, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_98_98, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_102_102);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum_pragmas_5_p_0(hlds__make_hlds__make_hlds_passes__ItemForeignEnumPragmas_51, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_101_101, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_103_103, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_102_102, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_104_104);
    }
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_238_238 = (MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0;
    hlds__make_hlds__make_hlds_passes__TypeInfo_239_239 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[3];
    {
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[7], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_238_238, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[6], hlds__make_hlds__make_hlds_passes__ItemInstDefns_40, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_103_103)), &hlds__make_hlds__make_hlds_passes__conv37_STATE_VARIABLE_ModuleInfo_106_106, ((MR_Box) ((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__conv36_STATE_VARIABLE_FoundInvalidInstOrMode_107_107, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_104_104)), &hlds__make_hlds__make_hlds_passes__conv35_STATE_VARIABLE_Specs_108_108);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_106_106 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv37_STATE_VARIABLE_ModuleInfo_106_106);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_107_107 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv36_STATE_VARIABLE_FoundInvalidInstOrMode_107_107);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_108_108 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv35_STATE_VARIABLE_Specs_108_108);
    {
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[8], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_238_238, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[7], hlds__make_hlds__make_hlds_passes__ItemModeDefns_41, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_106_106)), &hlds__make_hlds__make_hlds_passes__conv43_STATE_VARIABLE_ModuleInfo_110_110, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_107_107)), &hlds__make_hlds__make_hlds_passes__conv42_STATE_VARIABLE_FoundInvalidInstOrMode_111_111, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_108_108)), &hlds__make_hlds__make_hlds_passes__conv41_STATE_VARIABLE_Specs_112_112);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_110_110 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv43_STATE_VARIABLE_ModuleInfo_110_110);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_111_111 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv42_STATE_VARIABLE_FoundInvalidInstOrMode_111_111);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_112_112 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv41_STATE_VARIABLE_Specs_112_112);
    hlds__make_hlds__make_hlds_passes__TypeInfo_253_253 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[9];
    {
      mercury__list__foldl2_6_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_253_253, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[8], hlds__make_hlds__make_hlds_passes__ItemPredDecls_42, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_110_110)), &hlds__make_hlds__make_hlds_passes__conv47_STATE_VARIABLE_ModuleInfo_114_114, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_112_112)), &hlds__make_hlds__make_hlds_passes__conv46_STATE_VARIABLE_Specs_115_115);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_114_114 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv47_STATE_VARIABLE_ModuleInfo_114_114);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_115_115 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv46_STATE_VARIABLE_Specs_115_115);
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[10], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[9], hlds__make_hlds__make_hlds_passes__ItemModeDecls_43, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_114_114)), &hlds__make_hlds__make_hlds_passes__conv51_STATE_VARIABLE_ModuleInfo_117_117, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_115_115)), &hlds__make_hlds__make_hlds_passes__conv50_STATE_VARIABLE_Specs_118_118);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_117_117 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv51_STATE_VARIABLE_ModuleInfo_117_117);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_118_118 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv50_STATE_VARIABLE_Specs_118_118);
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_265_265 = (MR_Word) &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0;
    {
      mercury__list__foldl2_6_p_0(hlds__make_hlds__make_hlds_passes__TypeCtorInfo_265_265, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[10], hlds__make_hlds__make_hlds_passes__SolverAuxPredInfos_55, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_117_117)), &hlds__make_hlds__make_hlds_passes__conv55_STATE_VARIABLE_ModuleInfo_120_120, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_118_118)), &hlds__make_hlds__make_hlds_passes__conv54_STATE_VARIABLE_Specs_121_121);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_120_120 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv55_STATE_VARIABLE_ModuleInfo_120_120);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_121_121 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv54_STATE_VARIABLE_Specs_121_121);
    hlds__make_hlds__make_hlds_passes__TypeInfo_271_271 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[5];
    {
      mercury__list__foldl2_6_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_271_271, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[11], hlds__make_hlds__make_hlds_passes__ItemMutables_49, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_120_120)), &hlds__make_hlds__make_hlds_passes__conv59_STATE_VARIABLE_ModuleInfo_123_123, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_121_121)), &hlds__make_hlds__make_hlds_passes__conv58_STATE_VARIABLE_Specs_124_124);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_123_123 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv59_STATE_VARIABLE_ModuleInfo_123_123);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_124_124 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv58_STATE_VARIABLE_Specs_124_124);
    {
      mercury__list__foldl2_6_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_271_271, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[12], hlds__make_hlds__make_hlds_passes__SolverItemMutables_56, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_123_123)), &hlds__make_hlds__make_hlds_passes__conv63_STATE_VARIABLE_ModuleInfo_126_126, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_124_124)), &hlds__make_hlds__make_hlds_passes__conv62_STATE_VARIABLE_Specs_127_127);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_126_126 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv63_STATE_VARIABLE_ModuleInfo_126_126);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_127_127 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv62_STATE_VARIABLE_Specs_127_127);
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[11], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[13], hlds__make_hlds__make_hlds_passes__ItemTypeclasses_45, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_126_126)), &hlds__make_hlds__make_hlds_passes__conv67_STATE_VARIABLE_ModuleInfo_129_129, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_127_127)), &hlds__make_hlds__make_hlds_passes__conv66_STATE_VARIABLE_Specs_130_130);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_129_129 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv67_STATE_VARIABLE_ModuleInfo_129_129);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_130_130 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv66_STATE_VARIABLE_Specs_130_130);
    {
      mercury__list__foldl_4_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_253_253, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[14], hlds__make_hlds__make_hlds_passes__ItemPredDecls_42, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_129_129)), &hlds__make_hlds__make_hlds_passes__conv69_STATE_VARIABLE_ModuleInfo_132_132);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_132_132 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv69_STATE_VARIABLE_ModuleInfo_132_132);
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[12], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[15], hlds__make_hlds__make_hlds_passes__ItemInstances_46, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_132_132)), &hlds__make_hlds__make_hlds_passes__conv73_STATE_VARIABLE_ModuleInfo_134_134, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_130_130)), &hlds__make_hlds__make_hlds_passes__conv72_STATE_VARIABLE_Specs_135_135);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_134_134 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv73_STATE_VARIABLE_ModuleInfo_134_134);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_135_135 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv72_STATE_VARIABLE_Specs_135_135);
    {
      hlds__make_hlds__add_pragma__add_pass_2_pragmas_5_p_0(hlds__make_hlds__make_hlds_passes__ItemPragmas2_52, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_134_134, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_136_136, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_135_135, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_137_137);
    }
    switch (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_97_97) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_138_138;
          MR_Word hlds__make_hlds__make_hlds_passes__Var_139;
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_141_141;
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_142_142;
          MR_Box hlds__make_hlds__make_hlds_passes__conv75_STATE_VARIABLE_TypeTable_141_141;
          MR_Box hlds__make_hlds__make_hlds_passes__conv81_STATE_VARIABLE_FoundInvalidType_144_144;
          MR_Box hlds__make_hlds__make_hlds_passes__conv80_STATE_VARIABLE_ModuleInfo_145_145;
          MR_Box hlds__make_hlds__make_hlds_passes__conv79_STATE_VARIABLE_Specs_146_146;

          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_136_136, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_138_138);
          }
          {
            hlds__make_hlds__make_hlds_passes__Var_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_139, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[6]));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_139, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_139, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_139, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_136_136));
          }
          {
            hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[1], hlds__make_hlds__make_hlds_passes__Var_139, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_138_138, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_138_138)), &hlds__make_hlds__make_hlds_passes__conv75_STATE_VARIABLE_TypeTable_141_141);
          }
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_141_141 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv75_STATE_VARIABLE_TypeTable_141_141);
          {
            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_141_141, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_136_136, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_142_142);
          }
          {
            hlds__hlds_data__foldl3_over_type_ctor_defns_8_p_0((MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[16], hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_141_141, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_97_97)), &hlds__make_hlds__make_hlds_passes__conv81_STATE_VARIABLE_FoundInvalidType_144_144, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_142_142)), &hlds__make_hlds__make_hlds_passes__conv80_STATE_VARIABLE_ModuleInfo_145_145, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_137_137)), &hlds__make_hlds__make_hlds_passes__conv79_STATE_VARIABLE_Specs_146_146);
          }
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_144_144 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv81_STATE_VARIABLE_FoundInvalidType_144_144);
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_145_145 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv80_STATE_VARIABLE_ModuleInfo_145_145);
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_146_146 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv79_STATE_VARIABLE_Specs_146_146);
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_144_144 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_97_97;
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_145_145 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_136_136;
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_146_146 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_137_137;
        }
        break;
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_369 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    {
      hlds__make_hlds__make_hlds_passes__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__make_hlds_passes__ModuleName_28, hlds__make_hlds__make_hlds_passes__Var_369);
    }
    if (hlds__make_hlds__make_hlds_passes__succeeded)
      {
        hlds__make_hlds__make_hlds_passes__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_145_145);
      }
    if (hlds__make_hlds__make_hlds_passes__succeeded)
      {
        MR_Word hlds__make_hlds__make_hlds_passes__Var_148;
        MR_Box hlds__make_hlds__make_hlds_passes__conv83_STATE_VARIABLE_ModuleInfo_149_149;

        {
          hlds__make_hlds__make_hlds_passes__Var_148 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[17], hlds__make_hlds__make_hlds_passes__Var_148, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_145_145)), &hlds__make_hlds__make_hlds_passes__conv83_STATE_VARIABLE_ModuleInfo_149_149);
        }
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_149_149 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv83_STATE_VARIABLE_ModuleInfo_149_149);
      }
    else
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_149_149 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_145_145;
    {
      hlds__hlds_module__module_info_optimize_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_149_149, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_150_150);
    }
    {
      hlds__make_hlds__qual_info__init_qual_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo0_15, hlds__make_hlds__make_hlds_passes__TypeEqvMapMap_16, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_151_151);
    }
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_318_318 = (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;
    {
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[13], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_318_318, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[18], hlds__make_hlds__make_hlds_passes__ItemClauses_54, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_150_150)), &hlds__make_hlds__make_hlds_passes__conv89_STATE_VARIABLE_ModuleInfo_153_153, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_151_151)), &hlds__make_hlds__make_hlds_passes__conv88_STATE_VARIABLE_QualInfo_154_154, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_146_146)), &hlds__make_hlds__make_hlds_passes__conv87_STATE_VARIABLE_Specs_155_155);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_153_153 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv89_STATE_VARIABLE_ModuleInfo_153_153);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_154_154 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv88_STATE_VARIABLE_QualInfo_154_154);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_155_155 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv87_STATE_VARIABLE_Specs_155_155);
    {
      mercury__list__foldl3_8_p_0(hlds__make_hlds__make_hlds_passes__TypeCtorInfo_265_265, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_318_318, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[19], hlds__make_hlds__make_hlds_passes__SolverAuxPredInfos_55, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_153_153)), &hlds__make_hlds__make_hlds_passes__conv95_STATE_VARIABLE_ModuleInfo_157_157, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_154_154)), &hlds__make_hlds__make_hlds_passes__conv94_STATE_VARIABLE_QualInfo_158_158, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_155_155)), &hlds__make_hlds__make_hlds_passes__conv93_STATE_VARIABLE_Specs_159_159);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_157_157 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv95_STATE_VARIABLE_ModuleInfo_157_157);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_158_158 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv94_STATE_VARIABLE_QualInfo_158_158);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_159_159 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv93_STATE_VARIABLE_Specs_159_159);
    {
      mercury__list__foldl3_8_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_271_271, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_318_318, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[20], hlds__make_hlds__make_hlds_passes__ItemMutables_49, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_157_157)), &hlds__make_hlds__make_hlds_passes__conv101_STATE_VARIABLE_ModuleInfo_161_161, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_158_158)), &hlds__make_hlds__make_hlds_passes__conv100_STATE_VARIABLE_QualInfo_162_162, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_159_159)), &hlds__make_hlds__make_hlds_passes__conv99_STATE_VARIABLE_Specs_163_163);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_161_161 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv101_STATE_VARIABLE_ModuleInfo_161_161);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_162_162 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv100_STATE_VARIABLE_QualInfo_162_162);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_163_163 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv99_STATE_VARIABLE_Specs_163_163);
    {
      mercury__list__foldl3_8_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_271_271, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_318_318, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[21], hlds__make_hlds__make_hlds_passes__SolverItemMutables_56, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_161_161)), &hlds__make_hlds__make_hlds_passes__conv107_STATE_VARIABLE_ModuleInfo_165_165, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_162_162)), &hlds__make_hlds__make_hlds_passes__conv106_STATE_VARIABLE_QualInfo_166_166, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_163_163)), &hlds__make_hlds__make_hlds_passes__conv105_STATE_VARIABLE_Specs_167_167);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_165_165 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv107_STATE_VARIABLE_ModuleInfo_165_165);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_166_166 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv106_STATE_VARIABLE_QualInfo_166_166);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_167_167 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv105_STATE_VARIABLE_Specs_167_167);
    {
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[14], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_318_318, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[22], hlds__make_hlds__make_hlds_passes__ItemPromises_44, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_165_165)), &hlds__make_hlds__make_hlds_passes__conv113_STATE_VARIABLE_ModuleInfo_169_169, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_166_166)), &hlds__make_hlds__make_hlds_passes__conv112_STATE_VARIABLE_QualInfo_170_170, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_167_167)), &hlds__make_hlds__make_hlds_passes__conv111_STATE_VARIABLE_Specs_171_171);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_169_169 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv113_STATE_VARIABLE_ModuleInfo_169_169);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_170_170 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv112_STATE_VARIABLE_QualInfo_170_170);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_171_171 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv111_STATE_VARIABLE_Specs_171_171);
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[15], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[23], hlds__make_hlds__make_hlds_passes__ItemInitialises_47, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_169_169)), &hlds__make_hlds__make_hlds_passes__conv117_STATE_VARIABLE_ModuleInfo_173_173, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_171_171)), &hlds__make_hlds__make_hlds_passes__conv116_STATE_VARIABLE_Specs_174_174);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_173_173 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv117_STATE_VARIABLE_ModuleInfo_173_173);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_174_174 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv116_STATE_VARIABLE_Specs_174_174);
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[16], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_191_191, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[24], hlds__make_hlds__make_hlds_passes__ItemFinalises_48, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_173_173)), &hlds__make_hlds__make_hlds_passes__conv121_STATE_VARIABLE_ModuleInfo_176_176, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_174_174)), &hlds__make_hlds__make_hlds_passes__conv120_STATE_VARIABLE_Specs_177_177);
    }
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_176_176 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv121_STATE_VARIABLE_ModuleInfo_176_176);
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_177_177 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv120_STATE_VARIABLE_Specs_177_177);
    {
      hlds__make_hlds__add_pragma__add_pass_3_pragmas_7_p_0(hlds__make_hlds__make_hlds_passes__ItemPragmas3_53, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_176_176, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_66, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_170_170, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_179_179, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_177_177, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_180_180);
    }
    {
      hlds__make_hlds__make_hlds_passes__Var_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_181, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_181, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_181, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Var_181, 3) = ((MR_Box) (*hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_66));
    }
    {
      mercury__list__foldl_4_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_253_253, hlds__make_hlds__make_hlds_passes__TypeInfo_239_239, hlds__make_hlds__make_hlds_passes__Var_181, hlds__make_hlds__make_hlds_passes__ItemPredDecls_42, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_180_180)), &hlds__make_hlds__make_hlds_passes__conv123_STATE_VARIABLE_Specs_67);
    }
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_67 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv123_STATE_VARIABLE_Specs_67);
    {
      mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_318_318, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[25], hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_30, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_179_179)), &hlds__make_hlds__make_hlds_passes__conv125_STATE_VARIABLE_QualInfo_63);
    }
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_63 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv125_STATE_VARIABLE_QualInfo_63);
    {
      hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(*hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_63, &hlds__make_hlds__make_hlds_passes__MQInfo_58);
    }
    {
      parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_58, &hlds__make_hlds__make_hlds_passes__MQUndefType_59);
    }
    {
      parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_58, &hlds__make_hlds__make_hlds_passes__MQUndefInst_60);
    }
    {
      parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_58, &hlds__make_hlds__make_hlds_passes__MQUndefMode_61);
    }
    {
      parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_58, &hlds__make_hlds__make_hlds_passes__MQUndefTypeClass_62);
    }
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQUndefType_59 == (MR_Integer) 1);
    if (!(hlds__make_hlds__make_hlds_passes__succeeded))
      hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQUndefTypeClass_62 == (MR_Integer) 1);
    if (hlds__make_hlds__make_hlds_passes__succeeded)
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_64 = (MR_Integer) 1;
    else
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_64 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_144_144;
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQUndefInst_60 == (MR_Integer) 1);
    if (!(hlds__make_hlds__make_hlds_passes__succeeded))
      hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQUndefMode_61 == (MR_Integer) 1);
    if (hlds__make_hlds__make_hlds_passes__succeeded)
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_65 = (MR_Integer) 1;
    else
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_65 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_111_111;
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

/* :- end_module hlds.make_hlds.make_hlds_passes. */
