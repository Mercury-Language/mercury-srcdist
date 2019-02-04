/*
** Automatically generated from `make_hlds_passes.m'
** by the Mercury compiler,
** version rotd-2018-01-09
** configured for x86_64-pc-linux-gnu.
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


// :- module hlds.make_hlds.make_hlds_passes.
// :- implementation.

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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
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
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__616__1_2_p_0(
  MR_Word WithInst_17,
  MR_Word HeadVar__2_52);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__615__1_2_p_0(
  MR_Word WithType_16,
  MR_Word HeadVar__2_47);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__544__1_3_p_0(
  MR_Word SectionInfo_18,
  MR_Word HeadVar__2_58,
  MR_Word * HeadVar__3_59);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_8(
  void * env_ptr_arg);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_1(
  MR_Box closure_arg);

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
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[70][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[4][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[24][3];

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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[4][6] = {
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[24][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[7])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[8])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__616__1_2_p_0(
  MR_Word WithInst_17,
  MR_Word HeadVar__2_52)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[18], ((MR_Box) (WithInst_17)), ((MR_Box) (HeadVar__2_52)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__615__1_2_p_0(
  MR_Word WithType_16,
  MR_Word HeadVar__2_47)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[17], ((MR_Box) (WithType_16)), ((MR_Box) (HeadVar__2_47)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__544__1_3_p_0(
  MR_Word SectionInfo_18,
  MR_Word HeadVar__2_58,
  MR_Word * HeadVar__3_59)
{
  {
    hlds__make_hlds__wrap_with_section_info_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, SectionInfo_18, ((MR_Box) (HeadVar__2_58)), HeadVar__3_59);
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ModuleVersionNumbers_6,
  MR_Word STATE_VARIABLE_RecompInfo_0_10,
  MR_Word * STATE_VARIABLE_RecompInfo_11)
{
  {
    MR_Word VersionNumbersMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
    MR_Word VersionNumbersMap_9;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;

    mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, ((MR_Box) (ModuleName_5)), ((MR_Box) (ModuleVersionNumbers_6)), VersionNumbersMap0_8, &VersionNumbersMap_9);
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
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

    hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_RecompInfo_11);
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
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
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
    MR_Word ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 0)));
    MR_Word ItemFinaliseInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 1)));
    MR_Word SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinaliseInfo_10, (MR_Integer) 0)));
    MR_Integer Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemFinaliseInfo_10, (MR_Integer) 1)));
    MR_Word Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinaliseInfo_10, (MR_Integer) 2)));
    MR_Word Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemFinaliseInfo_10, (MR_Integer) 3)));
    MR_Integer _SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemFinaliseInfo_10, (MR_Integer) 4)));

    if (((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1))))
    {
      *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    }
    else
    {
      MR_Word ItemExport_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMercuryStatus_9, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Specs_24_24;

      switch (ItemExport_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[32]), STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_24_24);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_24_24 = STATE_VARIABLE_Specs_0_21;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_24_24 = STATE_VARIABLE_Specs_0_21;
          break;
      }
      if ((Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0(SymName_11, Arity_12, Context_14, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, STATE_VARIABLE_Specs_24_24, STATE_VARIABLE_Specs_22);
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
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30 = ((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv0_ProcInfo_30);
    hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) env_ptr_arg;

    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31);
    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31)) == (MR_mktag((MR_Integer) 1)));
    if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31, (MR_Integer) 0)));
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32)) == (MR_mktag((MR_Integer) 1)));
      if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32, (MR_Integer) 0)));
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32, (MR_Integer) 1)));
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_210 = parse_tree__prog_mode__di_mode_0_f_0();
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_84, (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_210);
        if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
        {
          (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_85)) == (MR_mktag((MR_Integer) 1)));
          if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
          {
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_85, (MR_Integer) 0)));
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_85, (MR_Integer) 1)));
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_211 = parse_tree__prog_mode__uo_mode_0_f_0();
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_86, (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_211);
            if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
            {
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Var_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
              {
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33);
                (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33)) == (MR_mktag((MR_Integer) 1)));
                if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                {
                  (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33, (MR_Integer) 0)));
                  switch ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_34) {
                    default:
                      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 4:
                      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 0:
                      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
                      break;
                  }
                  if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                  {
                    hlds__hlds_pred__pred_info_get_purity_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_35);
                    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_35 == (MR_Integer) 0);
                    if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                      hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_1(env_ptr);
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
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Arg1Type_28;
          MR_Word Arg2Type_29;
          MR_Word Var_82;
          MR_Word Var_83;

          (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22)) == (MR_mktag((MR_Integer) 1)));
          if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
          {
            Arg1Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 0)));
            Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 1)));
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_82)) == (MR_mktag((MR_Integer) 1)));
            if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
            {
              Arg2Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 0)));
              Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_82, (MR_Integer) 1)));
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = (Var_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
              {
                (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Arg1Type_28);
                if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                {
                  (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Arg2Type_29);
                  if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
                    mercury__list__member_2_p_1((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv0_ProcInfo_30, (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_3, env_ptr);
                }
              }
            }
          }
        }
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_7(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165 = ((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv1_ProcInfo_165);
    hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_6(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_6(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) env_ptr_arg;

    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166);
    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166)) == (MR_mktag((MR_Integer) 1)));
    if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166, (MR_Integer) 0)));
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
      {
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168);
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168)) == (MR_mktag((MR_Integer) 1)));
        if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
        {
          (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168, (MR_Integer) 0)));
          switch ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_169) {
            default:
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 4:
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
              break;
          }
          if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
          {
            hlds__hlds_pred__pred_info_get_purity_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_170);
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_170 == (MR_Integer) 2);
            if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
              hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_5(env_ptr);
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_8(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_1) == 0)
      {
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
          mercury__list__member_2_p_1((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv1_ProcInfo_165, (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_7, env_ptr);
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0(
  MR_Word SymName_8,
  MR_Integer Arity_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s env;

    {
      MR_Word PredTable_13;
      MR_Word PredIds_14;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &PredTable_13);
      hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_13, (MR_Integer) 1, SymName_8, Arity_9, &PredIds_14);
      if ((PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Pieces_15;
        MR_Word Msg_16;
        MR_Word Spec_17;
        MR_Word Var_133;
        MR_Word Var_134;
        MR_Word Var_135;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_162;

        {
          Var_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (SymName_8));
          MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (Arity_9));
        }
        {
          Var_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_134, 1) = ((MR_Box) (Var_135));
        }
        {
          Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
          MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[51])));
        }
        {
          Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
          MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_133));
        }
        {
          Var_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (Pieces_15));
        }
        {
          Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Var_158));
          MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_16, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), Msg_16, 1) = ((MR_Box) (Var_157));
        }
        {
          Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Msg_16));
          MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_162));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_46 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
        }
        *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
      }
      else
      {
        MR_Word HeadPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_14, (MR_Integer) 0)));
        MR_Word TailPredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_14, (MR_Integer) 1)));

        if ((TailPredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word ProcTable_23;
          MR_Word Globals_25;
          MR_Word CompilationTarget_26;
          MR_Word ExportLang_27;

          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_43, HeadPredId_18, &(env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21);
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0((env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &(env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22);
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0((env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &ProcTable_23);
          (env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
          (env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24 = mercury__map__values_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209, ProcTable_23);
          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &Globals_25);
          libs__globals__get_target_2_p_0(Globals_25, &CompilationTarget_26);
          ExportLang_27 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(CompilationTarget_26);
          hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_4(&env);
          if ((env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
          {
            MR_String CName_36;
            MR_Word PredNameModesPF_37;
            MR_Word FPEInfo_38;
            MR_Word STATE_VARIABLE_ModuleInfo_88_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;

            hlds__hlds_module__module_info_new_user_final_pred_5_p_0(SymName_8, Arity_9, &CName_36, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_88_88);
            Var_90 = parse_tree__prog_mode__di_mode_0_f_0();
            Var_92 = parse_tree__prog_mode__uo_mode_0_f_0();
            {
              Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
              MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Var_90));
              MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_91));
            }
            {
              PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_37, 0) = ((MR_Box) (SymName_8));
              MR_hl_field(MR_mktag(0), PredNameModesPF_37, 1) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(0), PredNameModesPF_37, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              FPEInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FPEInfo_38, 0) = ((MR_Box) (ExportLang_27));
              MR_hl_field(MR_mktag(0), FPEInfo_38, 1) = ((MR_Box) (PredNameModesPF_37));
              MR_hl_field(MR_mktag(0), FPEInfo_38, 2) = ((MR_Box) (CName_36));
            }
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), FPEInfo_38, Context_10, STATE_VARIABLE_ModuleInfo_88_88, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
          }
          else
          {
            hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_8(&env);
            if ((env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
            {
              MR_Word STATE_VARIABLE_ModuleInfo_99_99;
              MR_String CName_171;
              MR_Word PredNameModesPF_172;
              MR_Word FPEInfo_173;

              hlds__hlds_module__module_info_new_user_final_pred_5_p_0(SymName_8, Arity_9, &CName_171, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_99_99);
              {
                PredNameModesPF_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredNameModesPF_172, 0) = ((MR_Box) (SymName_8));
                MR_hl_field(MR_mktag(0), PredNameModesPF_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), PredNameModesPF_172, 2) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                FPEInfo_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FPEInfo_173, 0) = ((MR_Box) (ExportLang_27));
                MR_hl_field(MR_mktag(0), FPEInfo_173, 1) = ((MR_Box) (PredNameModesPF_172));
                MR_hl_field(MR_mktag(0), FPEInfo_173, 2) = ((MR_Box) (CName_171));
              }
              hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), FPEInfo_173, Context_10, STATE_VARIABLE_ModuleInfo_99_99, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
            }
            else
            {
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_123;
              MR_Word Var_124;
              MR_Word Var_128;
              MR_Word Pieces_176;
              MR_Word Msg_177;
              MR_Word Spec_178;

              {
                Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_110, 0) = ((MR_Box) (SymName_8));
                MR_hl_field(MR_mktag(0), Var_110, 1) = ((MR_Box) (Arity_9));
              }
              {
                Var_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_109, 1) = ((MR_Box) (Var_110));
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
                MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[55])));
              }
              {
                Pieces_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
                MR_hl_field(MR_mktag(1), Pieces_176, 1) = ((MR_Box) (Var_108));
              }
              {
                Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Pieces_176));
              }
              {
                Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (Var_124));
                MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Msg_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Msg_177, 0) = ((MR_Box) (Context_10));
                MR_hl_field(MR_mktag(0), Msg_177, 1) = ((MR_Box) (Var_123));
              }
              {
                Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Msg_177));
                MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Spec_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Spec_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), Spec_178, 2) = ((MR_Box) (Var_128));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_46 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_178));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
              }
              *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
            }
          }
        }
        else
        {
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_79;
          MR_Word Pieces_199;
          MR_Word Msg_200;
          MR_Word Spec_201;

          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (SymName_8));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Arity_9));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[63])));
          }
          {
            Pieces_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
            MR_hl_field(MR_mktag(1), Pieces_199, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Pieces_199));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Msg_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_200, 0) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), Msg_200, 1) = ((MR_Box) (Var_74));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Msg_200));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), Spec_201, 2) = ((MR_Box) (Var_79));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_46 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_201));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
          }
          *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
        }
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
    MR_Word ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 0)));
    MR_Word ItemInitialise_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 1)));
    MR_Word SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise_10, (MR_Integer) 0)));
    MR_Integer Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInitialise_10, (MR_Integer) 1)));
    MR_Word Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise_10, (MR_Integer) 2)));
    MR_Word Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemInitialise_10, (MR_Integer) 3)));
    MR_Integer _SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemInitialise_10, (MR_Integer) 4)));

    if (((MR_tag((MR_Word) ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1))))
    {
      *STATE_VARIABLE_ModuleInfo_20 = STATE_VARIABLE_ModuleInfo_0_19;
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    }
    else
    {
      MR_Word ItemExport_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMercuryStatus_9, (MR_Integer) 0)));
      MR_Word STATE_VARIABLE_Specs_24_24;

      switch (ItemExport_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30]), STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_24_24);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_24_24 = STATE_VARIABLE_Specs_0_21;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_24_24 = STATE_VARIABLE_Specs_0_21;
          break;
      }
      if ((Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0(SymName_11, Arity_12, Context_14, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20, STATE_VARIABLE_Specs_24_24, STATE_VARIABLE_Specs_22);
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
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30 = ((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv0_ProcInfo_30);
    hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) env_ptr_arg;

    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31);
    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31)) == (MR_mktag((MR_Integer) 1)));
    if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31, (MR_Integer) 0)));
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32)) == (MR_mktag((MR_Integer) 1)));
      if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
      {
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32, (MR_Integer) 0)));
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32, (MR_Integer) 1)));
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_195 = parse_tree__prog_mode__di_mode_0_f_0();
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_72, (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_195);
        if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
        {
          (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_73)) == (MR_mktag((MR_Integer) 1)));
          if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
          {
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_73, (MR_Integer) 0)));
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_73, (MR_Integer) 1)));
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_196 = parse_tree__prog_mode__uo_mode_0_f_0();
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_74, (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_196);
            if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
            {
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Var_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
              {
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33);
                (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33)) == (MR_mktag((MR_Integer) 1)));
                if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                {
                  (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33, (MR_Integer) 0)));
                  switch ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_34) {
                    default:
                      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 4:
                      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 0:
                      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
                      break;
                  }
                  if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                  {
                    hlds__hlds_pred__pred_info_get_purity_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_35);
                    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_35 == (MR_Integer) 0);
                    if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                      hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_1(env_ptr);
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
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Arg1Type_28;
          MR_Word Arg2Type_29;
          MR_Word Var_70;
          MR_Word Var_71;

          (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22)) == (MR_mktag((MR_Integer) 1)));
          if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
          {
            Arg1Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 0)));
            Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 1)));
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 1)));
            if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
            {
              Arg2Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0)));
              Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 1)));
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
              {
                (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Arg1Type_28);
                if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                {
                  (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(Arg2Type_29);
                  if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
                    mercury__list__member_2_p_1((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv0_ProcInfo_30, (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_3, env_ptr);
                }
              }
            }
          }
        }
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_7(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150 = ((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv1_ProcInfo_150);
    hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_6(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_6(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) env_ptr_arg;

    hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151);
    (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151)) == (MR_mktag((MR_Integer) 1)));
    if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151, (MR_Integer) 0)));
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
      {
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153);
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153)) == (MR_mktag((MR_Integer) 1)));
        if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
        {
          (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153, (MR_Integer) 0)));
          switch ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_154) {
            default:
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 4:
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 0:
              (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
              break;
          }
          if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
          {
            hlds__hlds_pred__pred_info_get_purity_2_p_0((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_155);
            (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_155 == (MR_Integer) 2);
            if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
              hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_5(env_ptr);
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_8(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_1) == 0)
      {
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if ((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
          mercury__list__member_2_p_1((env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194, &(env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv1_ProcInfo_150, (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_7, env_ptr);
        (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0(
  MR_Word SymName_8,
  MR_Integer Arity_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s env;

    {
      MR_Word PredTable_13;
      MR_Word PredIds_14;

      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &PredTable_13);
      hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_13, (MR_Integer) 1, SymName_8, Arity_9, &PredIds_14);
      if ((PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Pieces_15;
        MR_Word Msg_16;
        MR_Word Spec_17;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_120;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word Var_147;

        {
          Var_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (SymName_8));
          MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (Arity_9));
        }
        {
          Var_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_119, 1) = ((MR_Box) (Var_120));
        }
        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
          MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[42])));
        }
        {
          Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
          MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_118));
        }
        {
          Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (Pieces_15));
        }
        {
          Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_16, 0) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(0), Msg_16, 1) = ((MR_Box) (Var_142));
        }
        {
          Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Msg_16));
          MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) (Var_147));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_46 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
        }
        *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
      }
      else
      {
        MR_Word HeadPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_14, (MR_Integer) 0)));
        MR_Word TailPredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), PredIds_14, (MR_Integer) 1)));

        if ((TailPredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word ProcTable_23;
          MR_Word Globals_25;
          MR_Word CompilationTarget_26;
          MR_Word ExportLang_27;

          hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_43, HeadPredId_18, &(env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21);
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0((env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &(env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22);
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0((env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &ProcTable_23);
          (env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
          (env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24 = mercury__map__values_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194, ProcTable_23);
          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &Globals_25);
          libs__globals__get_target_2_p_0(Globals_25, &CompilationTarget_26);
          ExportLang_27 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(CompilationTarget_26);
          hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_4(&env);
          if ((env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
          {
            MR_String CName_36;
            MR_Word PredNameModesPF_37;
            MR_Word FPEInfo_38;
            MR_Word STATE_VARIABLE_ModuleInfo_76_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;

            hlds__hlds_module__module_info_new_user_init_pred_5_p_0(SymName_8, Arity_9, &CName_36, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_76_76);
            Var_78 = parse_tree__prog_mode__di_mode_0_f_0();
            Var_80 = parse_tree__prog_mode__uo_mode_0_f_0();
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
            }
            {
              PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_37, 0) = ((MR_Box) (SymName_8));
              MR_hl_field(MR_mktag(0), PredNameModesPF_37, 1) = ((MR_Box) (Var_77));
              MR_hl_field(MR_mktag(0), PredNameModesPF_37, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              FPEInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FPEInfo_38, 0) = ((MR_Box) (ExportLang_27));
              MR_hl_field(MR_mktag(0), FPEInfo_38, 1) = ((MR_Box) (PredNameModesPF_37));
              MR_hl_field(MR_mktag(0), FPEInfo_38, 2) = ((MR_Box) (CName_36));
            }
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), FPEInfo_38, Context_10, STATE_VARIABLE_ModuleInfo_76_76, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
          }
          else
          {
            hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_8(&env);
            if ((env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
            {
              MR_Word STATE_VARIABLE_ModuleInfo_87_87;
              MR_String CName_156;
              MR_Word PredNameModesPF_157;
              MR_Word FPEInfo_158;

              hlds__hlds_module__module_info_new_user_init_pred_5_p_0(SymName_8, Arity_9, &CName_156, STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_87_87);
              {
                PredNameModesPF_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), PredNameModesPF_157, 0) = ((MR_Box) (SymName_8));
                MR_hl_field(MR_mktag(0), PredNameModesPF_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), PredNameModesPF_157, 2) = ((MR_Box) ((MR_Integer) 0));
              }
              {
                FPEInfo_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FPEInfo_158, 0) = ((MR_Box) (ExportLang_27));
                MR_hl_field(MR_mktag(0), FPEInfo_158, 1) = ((MR_Box) (PredNameModesPF_157));
                MR_hl_field(MR_mktag(0), FPEInfo_158, 2) = ((MR_Box) (CName_156));
              }
              hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), FPEInfo_158, Context_10, STATE_VARIABLE_ModuleInfo_87_87, STATE_VARIABLE_ModuleInfo_44, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
            }
            else
            {
              MR_Word Var_96;
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word Var_113;
              MR_Word Pieces_161;
              MR_Word Msg_162;
              MR_Word Spec_163;

              {
                Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (SymName_8));
                MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) (Arity_9));
              }
              {
                Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (Var_98));
              }
              {
                Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
                MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[46])));
              }
              {
                Pieces_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
                MR_hl_field(MR_mktag(1), Pieces_161, 1) = ((MR_Box) (Var_96));
              }
              {
                Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (Pieces_161));
              }
              {
                Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Var_109));
                MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Msg_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Msg_162, 0) = ((MR_Box) (Context_10));
                MR_hl_field(MR_mktag(0), Msg_162, 1) = ((MR_Box) (Var_108));
              }
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Msg_162));
                MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Spec_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), Spec_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), Spec_163, 2) = ((MR_Box) (Var_113));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_46 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_163));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
              }
              *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
            }
          }
        }
        else
        {
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_67;
          MR_Word Pieces_184;
          MR_Word Msg_185;
          MR_Word Spec_186;

          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (SymName_8));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Arity_9));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[49])));
          }
          {
            Pieces_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
            MR_hl_field(MR_mktag(1), Pieces_184, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Pieces_184));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Msg_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_185, 0) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), Msg_185, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Msg_185));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), Spec_186, 2) = ((MR_Box) (Var_67));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_46 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_186));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_45));
          }
          *STATE_VARIABLE_ModuleInfo_44 = STATE_VARIABLE_ModuleInfo_0_43;
        }
      }
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
    MR_Word ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 0)));
    MR_Word ItemPromiseInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 1)));
    MR_Word PromiseType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 0)));
    MR_Word Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 1)));
    MR_Word VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 2)));
    MR_Word UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 3)));
    MR_Word Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 4)));
    MR_Word HeadVars_20;
    MR_Word PredStatus_21;
    MR_Word STATE_VARIABLE_Specs_28_28;
    MR_Integer _SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPromiseInfo_13, (MR_Integer) 5)));

    mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, UnivVars_17, &HeadVars_20);
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
    MR_String Var_50;
    MR_String Var_51;
    MR_String Var_58;
    MR_String Var_60;

    mercury__term__context_line_2_p_0(Context_17, &Line_22);
    mercury__term__context_file_2_p_0(Context_17, &File_23);
    Var_35 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_13);
    Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "__", File_23);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_10[1], Line_22, &Var_51);
    Var_58 = mercury__string__f_43_43_2_f_0(Var_51, Var_50);
    Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_58);
    Name_24 = mercury__string__f_43_43_2_f_0(Var_35, Var_60);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &ModuleName_25);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (ModuleName_25));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Name_24));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Goal_16));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (PromiseType_13));
    }
    hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSet_15, (MR_Integer) 0, Var_42, HeadVars_14, Var_43, Status_18, Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_45, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_QualInfo_0_28, STATE_VARIABLE_QualInfo_29, STATE_VARIABLE_Specs_0_30, STATE_VARIABLE_Specs_31);
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clause_7_p_0(
  MR_Word StatusItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_QualInfo_0_36,
  MR_Word * STATE_VARIABLE_QualInfo_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_bool succeeded;
    MR_Word ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 0)));
    MR_Word ItemClauseInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 1)));
    MR_Word PredSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 0)));
    MR_Word PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 1)));
    MR_Word Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 2)));
    MR_Word Origin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 3)));
    MR_Word VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 4)));
    MR_Word MaybeBodyGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 5)));
    MR_Word Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 6)));
    MR_Integer SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemClauseInfo_13, (MR_Integer) 7)));
    MR_String PredName_22;

    PredName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_14);
    succeeded = (strcmp(PredName_22, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_String Var_44;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_56;

      Var_44 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_15);
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[22])));
      }
      {
        Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[67])));
        MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_20));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_56));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_39 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
      }
      *STATE_VARIABLE_QualInfo_37 = STATE_VARIABLE_QualInfo_0_36;
      *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
    }
    else
    {
      MR_Word PredStatus_33;
      MR_Word STATE_VARIABLE_Specs_65_65;
      MR_Word Var_70;

      if (((MR_tag((MR_Word) ItemMercuryStatus_12)) == (MR_mktag((MR_Integer) 1))))
        STATE_VARIABLE_Specs_65_65 = STATE_VARIABLE_Specs_0_38;
      else
      {
        MR_Word ItemExport_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMercuryStatus_12, (MR_Integer) 0)));

        switch (ItemExport_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            if ((Origin_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Integer Arity_27;
              MR_String ClauseId_28;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_66;
              MR_String Var_67;

              mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[19], Args_16, &Arity_27);
              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (PredName_22));
              }
              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Arity_27));
              }
              ClauseId_28 = parse_tree__prog_out__simple_call_id_to_string_2_f_0(PredOrFunc_15, Var_62);
              Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "clause for ", ClauseId_28);
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_66));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(Context_20, Var_64, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_65_65);
            }
            else
            {
              MR_Word CompilerAttrs_29 = (MR_Word) MR_body(((MR_Word) Origin_17), (MR_Integer) 1);
              MR_Word AllowExport_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompilerAttrs_29, (MR_Integer) 0)));
              MR_Word _IsMutable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompilerAttrs_29, (MR_Integer) 1)));

              switch (AllowExport_30) {
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
              STATE_VARIABLE_Specs_65_65 = STATE_VARIABLE_Specs_0_38;
            }
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_65_65 = STATE_VARIABLE_Specs_0_38;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Specs_65_65 = STATE_VARIABLE_Specs_0_38;
            break;
        }
      }
      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_12, &PredStatus_33);
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (SeqNum_21));
      }
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(VarSet_18, PredOrFunc_15, PredSymName_14, Args_16, MaybeBodyGoal_19, PredStatus_33, Context_20, Var_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35, STATE_VARIABLE_QualInfo_0_36, STATE_VARIABLE_QualInfo_37, STATE_VARIABLE_Specs_65_65, STATE_VARIABLE_Specs_39);
    }
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
    MR_Word ItemPredDecl_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionItem_4, (MR_Integer) 1)));
    MR_Word PredSymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 0)));
    MR_Word PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 1)));
    MR_Word TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 2)));
    MR_String PredName_22;
    MR_Word _SectionInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionItem_4, (MR_Integer) 0)));
    MR_Word _Origin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 3)));
    MR_Word _TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 4)));
    MR_Word _InstVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 5)));
    MR_Word _ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 6)));
    MR_Word _WithType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 7)));
    MR_Word _WithInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 8)));
    MR_Word _MaybeDet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 9)));
    MR_Word _Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 10)));
    MR_Word _ClassContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 11)));
    MR_Word _Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 12)));
    MR_Integer _SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPredDecl_7, (MR_Integer) 13)));

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

            mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, TypesAndModes_10, &Arity_23);
            parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &FuncArity_24, Arity_23);
            hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_32, &PredTable0_25);
            hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(PredTable0_25, (MR_Integer) 0, PredSymName_8, FuncArity_24, &PredIds_26);
            if ((PredIds_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.maybe_add_default_mode\'/3", (MR_String) "can\'t find func declaration");
                return;
              }
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 0)));
    MR_Word ItemModeDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_6, (MR_Integer) 1)));
    MR_Word PredSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 0)));
    MR_Word MaybePredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 1)));
    MR_Word Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 2)));
    MR_Word MaybeDet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 4)));
    MR_Word VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 5)));
    MR_Word Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 6)));
    MR_Integer SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 7)));
    MR_String PredName_19;
    MR_Word _WithInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemModeDecl_10, (MR_Integer) 3)));

    PredName_19 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_11);
    succeeded = (strcmp(PredName_19, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word Msg_21;
      MR_Word Spec_22;
      MR_Word Var_43;

      {
        Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_21, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), Msg_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[66])));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Msg_21));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_29 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
      }
      *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
    }
    else
    if ((MaybePredOrFunc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_mode_decl\'/5", (MR_String) "no pred_or_func on mode declaration");
        return;
      }
    }
    else
    {
      MR_Word PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredOrFunc_12, (MR_Integer) 0)));
      MR_Word ModeStatus_24;
      MR_Word Var_49;
      MR_Word Var_25;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_9, &ModeStatus_24);
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (ItemMercuryStatus_9));
      }
      hlds__make_hlds__add_pred__module_add_mode_15_p_0(Context_17, SeqNum_18, Var_49, ModeStatus_24, PredOrFunc_23, PredSymName_11, VarSet_16, Modes_13, MaybeDet_15, (MR_Integer) 0, &Var_25, STATE_VARIABLE_ModuleInfo_0_26, STATE_VARIABLE_ModuleInfo_27, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__616__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__615__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0(
  MR_Word SectionItem_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  {
    MR_bool succeeded;
    MR_Word SectionInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 0)));
    MR_Word ItemPredDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionItem_6, (MR_Integer) 1)));
    MR_Word ItemMercuryStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_9, (MR_Integer) 0)));
    MR_Word NeedQual_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_9, (MR_Integer) 1)));
    MR_Word PredSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 0)));
    MR_Word PredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 1)));
    MR_Word TypesAndModes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 2)));
    MR_Word WithType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 3)));
    MR_Word WithInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 4)));
    MR_Word MaybeDetism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 5)));
    MR_Word Origin_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 6)));
    MR_Word TypeVarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 7)));
    MR_Word InstVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 8)));
    MR_Word ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 9)));
    MR_Word Purity_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 10)));
    MR_Word ClassContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 11)));
    MR_Word Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 12)));
    MR_Integer SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPredDecl_10, (MR_Integer) 13)));
    MR_String PredName_27;
    MR_Word Var_43;
    MR_Word Var_48;

    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (WithType_16));
      MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_43, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pred_decl\'/5", (MR_String) "WithType != no");
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (WithInst_17));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_4_p_0(Var_48, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pred_decl\'/5", (MR_String) "WithInst != no");
    PredName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(PredSymName_13);
    succeeded = (strcmp(PredName_27, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word Pieces_28;
      MR_Word Msg_29;
      MR_Word Spec_30;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_String Var_57;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_69;

      Var_57 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_14);
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[22])));
      }
      {
        Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[65])));
        MR_hl_field(MR_mktag(1), Pieces_28, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Pieces_28));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_29, 0) = ((MR_Box) (Context_25));
        MR_hl_field(MR_mktag(0), Msg_29, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Msg_29));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_69));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_42 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
      }
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
    }
    else
    {
      MR_Word Markers0_31;
      MR_Word Markers_35;
      MR_Word PredStatus_36;
      MR_Word PredOrigin_37;
      MR_Word Var_73;
      MR_Word Var_38;

      hlds__hlds_pred__init_markers_1_p_0(&Markers0_31);
      if ((Origin_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Markers_35 = Markers0_31;
      else
      {
        MR_Word CompilerAttrs_32 = (MR_Word) MR_body(((MR_Word) Origin_19), (MR_Integer) 1);
        MR_Word IsMutable_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompilerAttrs_32, (MR_Integer) 1)));
        MR_Word _AllowExport_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), CompilerAttrs_32, (MR_Integer) 0)));

        switch (IsMutable_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 24, Markers0_31, &Markers_35);
            }
            break;
          case (MR_Integer) 0:
            Markers_35 = Markers0_31;
            break;
        }
      }
      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_11, &PredStatus_36);
      {
        PredOrigin_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), PredOrigin_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), PredOrigin_37, 1) = ((MR_Box) (PredSymName_13));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (ItemMercuryStatus_11));
      }
      hlds__make_hlds__add_pred__module_add_pred_or_func_21_p_0(PredOrigin_37, Context_25, SeqNum_26, Var_73, PredStatus_36, NeedQual_12, PredOrFunc_14, PredSymName_13, TypeVarSet_20, InstVarSet_21, ExistQVars_22, TypesAndModes_15, ClassContext_24, MaybeDetism_18, Purity_23, Markers_35, &Var_38, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_Specs_0_41, STATE_VARIABLE_Specs_42);
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defn_7_p_0(
  MR_Word StatusItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_0_18,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 0)));
    MR_Word ItemModeDefnInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 1)));
    MR_Word ModeStatus_14;
    MR_Word FoundError_15;

    hlds__status__item_mercury_status_to_mode_status_2_p_0(ItemMercuryStatus_12, &ModeStatus_14);
    hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(ItemModeDefnInfo_13, ModeStatus_14, &FoundError_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
    switch (FoundError_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_FoundInvalidInstOrMode_19 = STATE_VARIABLE_FoundInvalidInstOrMode_0_18;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_FoundInvalidInstOrMode_19 = (MR_Integer) 1;
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defn_7_p_0(
  MR_Word StatusItem_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_0_18,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 0)));
    MR_Word ItemInstDefnInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_8, (MR_Integer) 1)));
    MR_Word InstStatus_14;
    MR_Word FoundError_15;

    hlds__status__item_mercury_status_to_inst_status_2_p_0(ItemMercuryStatus_12, &InstStatus_14);
    hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(ItemInstDefnInfo_13, InstStatus_14, &FoundError_15, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
    switch (FoundError_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_FoundInvalidInstOrMode_19 = STATE_VARIABLE_FoundInvalidInstOrMode_0_18;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_FoundInvalidInstOrMode_19 = (MR_Integer) 1;
        break;
    }
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

    hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__544__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__3_59);
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
    MR_Word SectionInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionItem_12, (MR_Integer) 0)));
    MR_Word ItemTypeDefnInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionItem_12, (MR_Integer) 1)));
    MR_Word ItemMercuryStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_18, (MR_Integer) 0)));
    MR_Word NeedQual_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), SectionInfo_18, (MR_Integer) 1)));
    MR_Word SymName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 0)));
    MR_Word TypeParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 1)));
    MR_Word TypeDefn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 2)));
    MR_Word TypeVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 3)));
    MR_Word Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 4)));
    MR_Word TypeStatus_38;
    MR_Integer _SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_19, (MR_Integer) 5)));

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
          MR_Word TypeInfo_62_62;
          MR_Word Detailssolver_28 = (MR_Word) MR_body(((MR_Word) TypeDefn_24), (MR_Integer) 1);
          MR_Word SolverTypeDetails_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Detailssolver_28, (MR_Integer) 0)));
          MR_Word SolverAuxPredInfo_31;
          MR_Word MutableItems_32;
          MR_Word TypeSectionMutableItems_33;
          MR_Word Var_50;
          MR_Word _MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Detailssolver_28, (MR_Integer) 1)));
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;

          {
            SolverAuxPredInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 0) = ((MR_Box) (SymName_22));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 1) = ((MR_Box) (TypeParams_23));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 2) = ((MR_Box) (TypeVarSet_25));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 3) = ((MR_Box) (SolverTypeDetails_29));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 4) = ((MR_Box) (Context_26));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 5) = ((MR_Box) (ItemMercuryStatus_20));
            MR_hl_field(MR_mktag(0), SolverAuxPredInfo_31, 6) = ((MR_Box) (NeedQual_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_SolverAuxPredInfos_46 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SolverAuxPredInfo_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_SolverAuxPredInfos_0_45));
          }
          Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails_29, (MR_Integer) 0)));
          Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails_29, (MR_Integer) 1)));
          Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails_29, (MR_Integer) 2)));
          MutableItems_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), SolverTypeDetails_29, (MR_Integer) 3)));
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[3]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (SectionInfo_18));
          }
          TypeInfo_62_62 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[5];
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, TypeInfo_62_62, Var_50, MutableItems_32, &TypeSectionMutableItems_33);
          *STATE_VARIABLE_SectionMutableItems_48 = mercury__list__f_43_43_2_f_0(TypeInfo_62_62, TypeSectionMutableItems_33, STATE_VARIABLE_SectionMutableItems_0_47);
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_SolverAuxPredInfos_46 = STATE_VARIABLE_SolverAuxPredInfos_0_45;
          *STATE_VARIABLE_SectionMutableItems_48 = STATE_VARIABLE_SectionMutableItems_0_47;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeDefn_24, (MR_Integer) 0)))) {
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

    if (((MR_tag((MR_Word) Avail_6)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_19 = (MR_Word) MR_body(((MR_Word) Avail_6), (MR_Integer) 0);
      MR_Integer _SeqNum_10;

      ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));
      Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1)));
      _SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 2)));
      ImportOrUse_11 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Var_18 = (MR_Word) MR_body(((MR_Word) Avail_6), (MR_Integer) 1);
      MR_Integer _SeqNum_28;

      ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0)));
      Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
      _SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2)));
      ImportOrUse_11 = (MR_Integer) 1;
    }
    if (((MR_tag((MR_Word) ItemMercuryStatus_5)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ItemImport_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ItemMercuryStatus_5, (MR_Integer) 0)));

      switch (MR_tag((MR_Word) ItemImport_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(ModuleName_8, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
          break;
        case (MR_Integer) 1:
          {
            MR_Word ImportLocn_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ItemImport_14, (MR_Integer) 0)));

            switch (ImportLocn_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                {
                  MR_Word STATE_VARIABLE_ModuleInfo_24_24;

                  hlds__hlds_module__module_add_avail_module_name_6_p_0(ModuleName_8, (MR_Integer) 1, ImportOrUse_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_ModuleInfo_0_16, &STATE_VARIABLE_ModuleInfo_24_24);
                  hlds__hlds_module__module_info_add_parent_to_used_modules_3_p_0(ModuleName_8, STATE_VARIABLE_ModuleInfo_24_24, STATE_VARIABLE_ModuleInfo_17);
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
      MR_Word ItemExport_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMercuryStatus_5, (MR_Integer) 0)));
      MR_Word Section_13;
      MR_Word Var_26;

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
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Context_9));
      }
      hlds__hlds_module__module_add_avail_module_name_6_p_0(ModuleName_8, Section_13, ImportOrUse_11, Var_26, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17);
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

    hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_17);
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
    MR_Word ItemMercuryStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_4, (MR_Integer) 0)));
    MR_Word Avails_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), StatusItem_4, (MR_Integer) 1)));
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ItemMercuryStatus_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, Var_10, Avails_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_8)), &conv1_STATE_VARIABLE_ModuleInfo_9);
    *STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_9);
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
    MR_Word Context_8;
    MR_Word Type_10;

    mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &TVarSet_6);
    mercury__term__context_init_1_p_0(&Context_8);
    parse_tree__prog_type__construct_type_3_p_0(TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Type_10);
    hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(TVarSet_6, Type_10, TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[64]), Context_8, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv124_STATE_VARIABLE_QualInfo_9;

    hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv124_STATE_VARIABLE_QualInfo_9);
    *wrapper_arg_4 = ((MR_Box) (conv124_STATE_VARIABLE_QualInfo_9));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv122_HeadVar__4_4;

    hlds__make_hlds__add_pred__check_pred_if_field_access_function_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv122_HeadVar__4_4);
    *wrapper_arg_3 = ((MR_Box) (conv122_HeadVar__4_4));
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

    hlds__make_hlds__make_hlds_passes__add_finalise_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv119_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) wrapper_arg_4), &conv118_STATE_VARIABLE_Specs_22);
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

    hlds__make_hlds__make_hlds_passes__add_initialise_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv115_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) wrapper_arg_4), &conv114_STATE_VARIABLE_Specs_22);
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

    hlds__make_hlds__make_hlds_passes__add_promise_7_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv110_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) wrapper_arg_4), &conv109_STATE_VARIABLE_QualInfo_25, ((MR_Word) wrapper_arg_6), &conv108_STATE_VARIABLE_Specs_27);
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

    hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv104_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv103_HeadVar__5_5, ((MR_Word) wrapper_arg_6), &conv102_HeadVar__7_7);
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

    hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv98_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv97_HeadVar__5_5, ((MR_Word) wrapper_arg_6), &conv96_HeadVar__7_7);
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

    hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_if_local_7_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv92_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv91_HeadVar__5_5, ((MR_Word) wrapper_arg_6), &conv90_HeadVar__7_7);
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
    MR_Word conv86_STATE_VARIABLE_ModuleInfo_35;
    MR_Word conv85_STATE_VARIABLE_QualInfo_37;
    MR_Word conv84_STATE_VARIABLE_Specs_39;

    hlds__make_hlds__make_hlds_passes__add_clause_7_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv86_STATE_VARIABLE_ModuleInfo_35, ((MR_Word) wrapper_arg_4), &conv85_STATE_VARIABLE_QualInfo_37, ((MR_Word) wrapper_arg_6), &conv84_STATE_VARIABLE_Specs_39);
    *wrapper_arg_3 = ((MR_Box) (conv86_STATE_VARIABLE_ModuleInfo_35));
    *wrapper_arg_5 = ((MR_Box) (conv85_STATE_VARIABLE_QualInfo_37));
    *wrapper_arg_7 = ((MR_Box) (conv84_STATE_VARIABLE_Specs_39));
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

    hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv82_STATE_VARIABLE_ModuleInfo_12);
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

    hlds__make_hlds__add_type__process_type_defn_8_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv78_HeadVar__4_4, ((MR_Word) wrapper_arg_5), &conv77_HeadVar__6_6, ((MR_Word) wrapper_arg_7), &conv76_HeadVar__8_8);
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
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv74_HeadVar__5_5;

    hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv74_HeadVar__5_5);
    *wrapper_arg_4 = ((MR_Box) (conv74_HeadVar__5_5));
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

    hlds__make_hlds__add_class__add_instance_defn_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv71_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv70_HeadVar__5_5);
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

    hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv68_STATE_VARIABLE_ModuleInfo_33);
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

    hlds__make_hlds__add_class__add_typeclass_defn_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv65_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv64_HeadVar__5_5);
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

    hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv61_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv60_HeadVar__5_5);
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

    hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv57_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv56_HeadVar__5_5);
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

    hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv53_HeadVar__3_3, ((MR_Word) wrapper_arg_4), &conv52_HeadVar__5_5);
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
    MR_Word conv49_STATE_VARIABLE_ModuleInfo_27;
    MR_Word conv48_STATE_VARIABLE_Specs_29;

    hlds__make_hlds__make_hlds_passes__add_mode_decl_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv49_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) wrapper_arg_4), &conv48_STATE_VARIABLE_Specs_29);
    *wrapper_arg_3 = ((MR_Box) (conv49_STATE_VARIABLE_ModuleInfo_27));
    *wrapper_arg_5 = ((MR_Box) (conv48_STATE_VARIABLE_Specs_29));
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
    MR_Word conv45_STATE_VARIABLE_ModuleInfo_40;
    MR_Word conv44_STATE_VARIABLE_Specs_42;

    hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv45_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) wrapper_arg_4), &conv44_STATE_VARIABLE_Specs_42);
    *wrapper_arg_3 = ((MR_Box) (conv45_STATE_VARIABLE_ModuleInfo_40));
    *wrapper_arg_5 = ((MR_Box) (conv44_STATE_VARIABLE_Specs_42));
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
    MR_Word conv40_STATE_VARIABLE_ModuleInfo_17;
    MR_Word conv39_STATE_VARIABLE_FoundInvalidInstOrMode_19;
    MR_Word conv38_STATE_VARIABLE_Specs_21;

    hlds__make_hlds__make_hlds_passes__add_mode_defn_7_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv40_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) wrapper_arg_4), &conv39_STATE_VARIABLE_FoundInvalidInstOrMode_19, ((MR_Word) wrapper_arg_6), &conv38_STATE_VARIABLE_Specs_21);
    *wrapper_arg_3 = ((MR_Box) (conv40_STATE_VARIABLE_ModuleInfo_17));
    *wrapper_arg_5 = ((MR_Box) (conv39_STATE_VARIABLE_FoundInvalidInstOrMode_19));
    *wrapper_arg_7 = ((MR_Box) (conv38_STATE_VARIABLE_Specs_21));
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
    MR_Word conv34_STATE_VARIABLE_ModuleInfo_17;
    MR_Word conv33_STATE_VARIABLE_FoundInvalidInstOrMode_19;
    MR_Word conv32_STATE_VARIABLE_Specs_21;

    hlds__make_hlds__make_hlds_passes__add_inst_defn_7_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv34_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) wrapper_arg_4), &conv33_STATE_VARIABLE_FoundInvalidInstOrMode_19, ((MR_Word) wrapper_arg_6), &conv32_STATE_VARIABLE_Specs_21);
    *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_ModuleInfo_17));
    *wrapper_arg_5 = ((MR_Box) (conv33_STATE_VARIABLE_FoundInvalidInstOrMode_19));
    *wrapper_arg_7 = ((MR_Box) (conv32_STATE_VARIABLE_Specs_21));
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

    hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv26_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) wrapper_arg_4), &conv25_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) wrapper_arg_6), &conv24_STATE_VARIABLE_Specs_44, ((MR_Word) wrapper_arg_8), &conv23_STATE_VARIABLE_SolverAuxPredInfos_46, ((MR_Word) wrapper_arg_10), &conv22_STATE_VARIABLE_SectionMutableItems_48);
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

    hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv16_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) wrapper_arg_4), &conv15_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) wrapper_arg_6), &conv14_STATE_VARIABLE_Specs_44, ((MR_Word) wrapper_arg_8), &conv13_STATE_VARIABLE_SolverAuxPredInfos_46, ((MR_Word) wrapper_arg_10), &conv12_STATE_VARIABLE_SectionMutableItems_48);
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

    hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) wrapper_arg_4), &conv5_STATE_VARIABLE_FoundInvalidType_42, ((MR_Word) wrapper_arg_6), &conv4_STATE_VARIABLE_Specs_44, ((MR_Word) wrapper_arg_8), &conv3_STATE_VARIABLE_SolverAuxPredInfos_46, ((MR_Word) wrapper_arg_10), &conv2_STATE_VARIABLE_SectionMutableItems_48);
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

    hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ModuleInfo_9);
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
  MR_Word * STATE_VARIABLE_QualInfo_63,
  MR_Word * STATE_VARIABLE_FoundInvalidType_64,
  MR_Word * STATE_VARIABLE_FoundInvalidInstOrMode_65,
  MR_Word * STATE_VARIABLE_ModuleInfo_66,
  MR_Word * STATE_VARIABLE_Specs_67)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_191_191;
    MR_Word TypeInfo_203_203;
    MR_Word TypeCtorInfo_204_204;
    MR_Word TypeInfo_205_205;
    MR_Word TypeInfo_206_206;
    MR_Word TypeInfo_207_207;
    MR_Word TypeCtorInfo_238_238;
    MR_Word TypeInfo_239_239;
    MR_Word TypeInfo_253_253;
    MR_Word TypeCtorInfo_265_265;
    MR_Word TypeInfo_271_271;
    MR_Word TypeCtorInfo_318_318;
    MR_Word PQInfo_23;
    MR_Word ModuleName_28;
    MR_Word ModuleVersionNumbers_30;
    MR_Word ItemAvailLists_36;
    MR_Word ItemTypeDefnsAbstract_37;
    MR_Word ItemTypeDefnsMercury_38;
    MR_Word ItemTypeDefnsForeign_39;
    MR_Word ItemInstDefns_40;
    MR_Word ItemModeDefns_41;
    MR_Word ItemPredDecls_42;
    MR_Word ItemModeDecls_43;
    MR_Word ItemPromises_44;
    MR_Word ItemTypeclasses_45;
    MR_Word ItemInstances_46;
    MR_Word ItemInitialises_47;
    MR_Word ItemFinalises_48;
    MR_Word ItemMutables_49;
    MR_Word ItemReserveTagPragmas_50;
    MR_Word ItemForeignEnumPragmas_51;
    MR_Word ItemPragmas2_52;
    MR_Word ItemPragmas3_53;
    MR_Word ItemClauses_54;
    MR_Word SolverAuxPredInfos_55;
    MR_Word SolverItemMutables_56;
    MR_Word MQInfo_58;
    MR_Word MQUndefType_59;
    MR_Word MQUndefInst_60;
    MR_Word MQUndefMode_61;
    MR_Word MQUndefTypeClass_62;
    MR_Word STATE_VARIABLE_ModuleInfo_69_69;
    MR_Word STATE_VARIABLE_ModuleInfo_70_70;
    MR_Word STATE_VARIABLE_ModuleInfo_80_80;
    MR_Word STATE_VARIABLE_ModuleInfo_84_84;
    MR_Word STATE_VARIABLE_FoundInvalidType_85_85;
    MR_Word STATE_VARIABLE_Specs_86_86;
    MR_Word STATE_VARIABLE_SolverAuxPredInfos_87_87;
    MR_Word STATE_VARIABLE_SolverItemMutables_88_88;
    MR_Word STATE_VARIABLE_ModuleInfo_90_90;
    MR_Word STATE_VARIABLE_FoundInvalidType_91_91;
    MR_Word STATE_VARIABLE_Specs_92_92;
    MR_Word STATE_VARIABLE_SolverAuxPredInfos_93_93;
    MR_Word STATE_VARIABLE_SolverItemMutables_94_94;
    MR_Word STATE_VARIABLE_ModuleInfo_96_96;
    MR_Word STATE_VARIABLE_FoundInvalidType_97_97;
    MR_Word STATE_VARIABLE_Specs_98_98;
    MR_Word STATE_VARIABLE_ModuleInfo_101_101;
    MR_Word STATE_VARIABLE_Specs_102_102;
    MR_Word STATE_VARIABLE_ModuleInfo_103_103;
    MR_Word STATE_VARIABLE_Specs_104_104;
    MR_Word STATE_VARIABLE_ModuleInfo_106_106;
    MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_107_107;
    MR_Word STATE_VARIABLE_Specs_108_108;
    MR_Word STATE_VARIABLE_ModuleInfo_110_110;
    MR_Word STATE_VARIABLE_FoundInvalidInstOrMode_111_111;
    MR_Word STATE_VARIABLE_Specs_112_112;
    MR_Word STATE_VARIABLE_ModuleInfo_114_114;
    MR_Word STATE_VARIABLE_Specs_115_115;
    MR_Word STATE_VARIABLE_ModuleInfo_117_117;
    MR_Word STATE_VARIABLE_Specs_118_118;
    MR_Word STATE_VARIABLE_ModuleInfo_120_120;
    MR_Word STATE_VARIABLE_Specs_121_121;
    MR_Word STATE_VARIABLE_ModuleInfo_123_123;
    MR_Word STATE_VARIABLE_Specs_124_124;
    MR_Word STATE_VARIABLE_ModuleInfo_126_126;
    MR_Word STATE_VARIABLE_Specs_127_127;
    MR_Word STATE_VARIABLE_ModuleInfo_129_129;
    MR_Word STATE_VARIABLE_Specs_130_130;
    MR_Word STATE_VARIABLE_ModuleInfo_132_132;
    MR_Word STATE_VARIABLE_ModuleInfo_134_134;
    MR_Word STATE_VARIABLE_Specs_135_135;
    MR_Word STATE_VARIABLE_ModuleInfo_136_136;
    MR_Word STATE_VARIABLE_Specs_137_137;
    MR_Word STATE_VARIABLE_FoundInvalidType_144_144;
    MR_Word STATE_VARIABLE_ModuleInfo_145_145;
    MR_Word STATE_VARIABLE_Specs_146_146;
    MR_Word STATE_VARIABLE_ModuleInfo_149_149;
    MR_Word STATE_VARIABLE_ModuleInfo_150_150;
    MR_Word STATE_VARIABLE_QualInfo_151_151;
    MR_Word STATE_VARIABLE_ModuleInfo_153_153;
    MR_Word STATE_VARIABLE_QualInfo_154_154;
    MR_Word STATE_VARIABLE_Specs_155_155;
    MR_Word STATE_VARIABLE_ModuleInfo_157_157;
    MR_Word STATE_VARIABLE_QualInfo_158_158;
    MR_Word STATE_VARIABLE_Specs_159_159;
    MR_Word STATE_VARIABLE_ModuleInfo_161_161;
    MR_Word STATE_VARIABLE_QualInfo_162_162;
    MR_Word STATE_VARIABLE_Specs_163_163;
    MR_Word STATE_VARIABLE_ModuleInfo_165_165;
    MR_Word STATE_VARIABLE_QualInfo_166_166;
    MR_Word STATE_VARIABLE_Specs_167_167;
    MR_Word STATE_VARIABLE_ModuleInfo_169_169;
    MR_Word STATE_VARIABLE_QualInfo_170_170;
    MR_Word STATE_VARIABLE_Specs_171_171;
    MR_Word STATE_VARIABLE_ModuleInfo_173_173;
    MR_Word STATE_VARIABLE_Specs_174_174;
    MR_Word STATE_VARIABLE_ModuleInfo_176_176;
    MR_Word STATE_VARIABLE_Specs_177_177;
    MR_Word STATE_VARIABLE_QualInfo_179_179;
    MR_Word STATE_VARIABLE_Specs_180_180;
    MR_Word Var_181;
    MR_Word _ModuleNameContext_29;
    MR_Word _SrcItemBlocks_31;
    MR_Word _DirectIntItemBlocks_32;
    MR_Word _IndirectIntItemBlocks_33;
    MR_Word _OptItemBlocks_34;
    MR_Word _IntForOptItemBlocks_35;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_80_80;
    MR_Box conv11_STATE_VARIABLE_ModuleInfo_84_84;
    MR_Box conv10_STATE_VARIABLE_FoundInvalidType_85_85;
    MR_Box conv9_STATE_VARIABLE_Specs_86_86;
    MR_Box conv8_STATE_VARIABLE_SolverAuxPredInfos_87_87;
    MR_Box conv7_STATE_VARIABLE_SolverItemMutables_88_88;
    MR_Box conv21_STATE_VARIABLE_ModuleInfo_90_90;
    MR_Box conv20_STATE_VARIABLE_FoundInvalidType_91_91;
    MR_Box conv19_STATE_VARIABLE_Specs_92_92;
    MR_Box conv18_STATE_VARIABLE_SolverAuxPredInfos_93_93;
    MR_Box conv17_STATE_VARIABLE_SolverItemMutables_94_94;
    MR_Box conv31_STATE_VARIABLE_ModuleInfo_96_96;
    MR_Box conv30_STATE_VARIABLE_FoundInvalidType_97_97;
    MR_Box conv29_STATE_VARIABLE_Specs_98_98;
    MR_Box conv28_SolverAuxPredInfos_55;
    MR_Box conv27_SolverItemMutables_56;
    MR_Box conv37_STATE_VARIABLE_ModuleInfo_106_106;
    MR_Box conv36_STATE_VARIABLE_FoundInvalidInstOrMode_107_107;
    MR_Box conv35_STATE_VARIABLE_Specs_108_108;
    MR_Box conv43_STATE_VARIABLE_ModuleInfo_110_110;
    MR_Box conv42_STATE_VARIABLE_FoundInvalidInstOrMode_111_111;
    MR_Box conv41_STATE_VARIABLE_Specs_112_112;
    MR_Box conv47_STATE_VARIABLE_ModuleInfo_114_114;
    MR_Box conv46_STATE_VARIABLE_Specs_115_115;
    MR_Box conv51_STATE_VARIABLE_ModuleInfo_117_117;
    MR_Box conv50_STATE_VARIABLE_Specs_118_118;
    MR_Box conv55_STATE_VARIABLE_ModuleInfo_120_120;
    MR_Box conv54_STATE_VARIABLE_Specs_121_121;
    MR_Box conv59_STATE_VARIABLE_ModuleInfo_123_123;
    MR_Box conv58_STATE_VARIABLE_Specs_124_124;
    MR_Box conv63_STATE_VARIABLE_ModuleInfo_126_126;
    MR_Box conv62_STATE_VARIABLE_Specs_127_127;
    MR_Box conv67_STATE_VARIABLE_ModuleInfo_129_129;
    MR_Box conv66_STATE_VARIABLE_Specs_130_130;
    MR_Box conv69_STATE_VARIABLE_ModuleInfo_132_132;
    MR_Box conv73_STATE_VARIABLE_ModuleInfo_134_134;
    MR_Box conv72_STATE_VARIABLE_Specs_135_135;
    MR_Word Var_369;
    MR_Box conv89_STATE_VARIABLE_ModuleInfo_153_153;
    MR_Box conv88_STATE_VARIABLE_QualInfo_154_154;
    MR_Box conv87_STATE_VARIABLE_Specs_155_155;
    MR_Box conv95_STATE_VARIABLE_ModuleInfo_157_157;
    MR_Box conv94_STATE_VARIABLE_QualInfo_158_158;
    MR_Box conv93_STATE_VARIABLE_Specs_159_159;
    MR_Box conv101_STATE_VARIABLE_ModuleInfo_161_161;
    MR_Box conv100_STATE_VARIABLE_QualInfo_162_162;
    MR_Box conv99_STATE_VARIABLE_Specs_163_163;
    MR_Box conv107_STATE_VARIABLE_ModuleInfo_165_165;
    MR_Box conv106_STATE_VARIABLE_QualInfo_166_166;
    MR_Box conv105_STATE_VARIABLE_Specs_167_167;
    MR_Box conv113_STATE_VARIABLE_ModuleInfo_169_169;
    MR_Box conv112_STATE_VARIABLE_QualInfo_170_170;
    MR_Box conv111_STATE_VARIABLE_Specs_171_171;
    MR_Box conv117_STATE_VARIABLE_ModuleInfo_173_173;
    MR_Box conv116_STATE_VARIABLE_Specs_174_174;
    MR_Box conv121_STATE_VARIABLE_ModuleInfo_176_176;
    MR_Box conv120_STATE_VARIABLE_Specs_177_177;
    MR_Box conv123_STATE_VARIABLE_Specs_67;
    MR_Box conv125_STATE_VARIABLE_QualInfo_63;

    parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(MQInfo0_15, &PQInfo_23);
    hlds__hlds_module__module_info_init_6_p_0(AugCompUnit_12, DumpBaseFileName_14, Globals_13, PQInfo_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_ModuleInfo_69_69);
    hlds__hlds_module__module_info_set_used_modules_3_p_0(UsedModules_17, STATE_VARIABLE_ModuleInfo_69_69, &STATE_VARIABLE_ModuleInfo_70_70);
    ModuleName_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 0)));
    _ModuleNameContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 1)));
    ModuleVersionNumbers_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 2)));
    _SrcItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 3)));
    _DirectIntItemBlocks_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 4)));
    _IndirectIntItemBlocks_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 5)));
    _OptItemBlocks_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 6)));
    _IntForOptItemBlocks_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), AugCompUnit_12, (MR_Integer) 7)));
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_20_p_0(AugCompUnit_12, &ItemAvailLists_36, &ItemTypeDefnsAbstract_37, &ItemTypeDefnsMercury_38, &ItemTypeDefnsForeign_39, &ItemInstDefns_40, &ItemModeDefns_41, &ItemPredDecls_42, &ItemModeDecls_43, &ItemPromises_44, &ItemTypeclasses_45, &ItemInstances_46, &ItemInitialises_47, &ItemFinalises_48, &ItemMutables_49, &ItemReserveTagPragmas_50, &ItemForeignEnumPragmas_51, &ItemPragmas2_52, &ItemPragmas3_53, &ItemClauses_54);
    TypeCtorInfo_191_191 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
    mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[1], TypeCtorInfo_191_191, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[0], ItemAvailLists_36, ((MR_Box) (STATE_VARIABLE_ModuleInfo_70_70)), &conv1_STATE_VARIABLE_ModuleInfo_80_80);
    STATE_VARIABLE_ModuleInfo_80_80 = ((MR_Word) conv1_STATE_VARIABLE_ModuleInfo_80_80);
    TypeInfo_203_203 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[2];
    TypeCtorInfo_204_204 = (MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0;
    TypeInfo_205_205 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[3];
    TypeInfo_206_206 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[4];
    TypeInfo_207_207 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[6];
    mercury__list__foldl5_12_p_0(TypeInfo_203_203, TypeCtorInfo_191_191, TypeCtorInfo_204_204, TypeInfo_205_205, TypeInfo_206_206, TypeInfo_207_207, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[1], ItemTypeDefnsAbstract_37, ((MR_Box) (STATE_VARIABLE_ModuleInfo_80_80)), &conv11_STATE_VARIABLE_ModuleInfo_84_84, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_FoundInvalidType_85_85, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv9_STATE_VARIABLE_Specs_86_86, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv8_STATE_VARIABLE_SolverAuxPredInfos_87_87, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv7_STATE_VARIABLE_SolverItemMutables_88_88);
    STATE_VARIABLE_ModuleInfo_84_84 = ((MR_Word) conv11_STATE_VARIABLE_ModuleInfo_84_84);
    STATE_VARIABLE_FoundInvalidType_85_85 = ((MR_Word) conv10_STATE_VARIABLE_FoundInvalidType_85_85);
    STATE_VARIABLE_Specs_86_86 = ((MR_Word) conv9_STATE_VARIABLE_Specs_86_86);
    STATE_VARIABLE_SolverAuxPredInfos_87_87 = ((MR_Word) conv8_STATE_VARIABLE_SolverAuxPredInfos_87_87);
    STATE_VARIABLE_SolverItemMutables_88_88 = ((MR_Word) conv7_STATE_VARIABLE_SolverItemMutables_88_88);
    mercury__list__foldl5_12_p_0(TypeInfo_203_203, TypeCtorInfo_191_191, TypeCtorInfo_204_204, TypeInfo_205_205, TypeInfo_206_206, TypeInfo_207_207, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[2], ItemTypeDefnsMercury_38, ((MR_Box) (STATE_VARIABLE_ModuleInfo_84_84)), &conv21_STATE_VARIABLE_ModuleInfo_90_90, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_85_85)), &conv20_STATE_VARIABLE_FoundInvalidType_91_91, ((MR_Box) (STATE_VARIABLE_Specs_86_86)), &conv19_STATE_VARIABLE_Specs_92_92, ((MR_Box) (STATE_VARIABLE_SolverAuxPredInfos_87_87)), &conv18_STATE_VARIABLE_SolverAuxPredInfos_93_93, ((MR_Box) (STATE_VARIABLE_SolverItemMutables_88_88)), &conv17_STATE_VARIABLE_SolverItemMutables_94_94);
    STATE_VARIABLE_ModuleInfo_90_90 = ((MR_Word) conv21_STATE_VARIABLE_ModuleInfo_90_90);
    STATE_VARIABLE_FoundInvalidType_91_91 = ((MR_Word) conv20_STATE_VARIABLE_FoundInvalidType_91_91);
    STATE_VARIABLE_Specs_92_92 = ((MR_Word) conv19_STATE_VARIABLE_Specs_92_92);
    STATE_VARIABLE_SolverAuxPredInfos_93_93 = ((MR_Word) conv18_STATE_VARIABLE_SolverAuxPredInfos_93_93);
    STATE_VARIABLE_SolverItemMutables_94_94 = ((MR_Word) conv17_STATE_VARIABLE_SolverItemMutables_94_94);
    mercury__list__foldl5_12_p_0(TypeInfo_203_203, TypeCtorInfo_191_191, TypeCtorInfo_204_204, TypeInfo_205_205, TypeInfo_206_206, TypeInfo_207_207, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[3], ItemTypeDefnsForeign_39, ((MR_Box) (STATE_VARIABLE_ModuleInfo_90_90)), &conv31_STATE_VARIABLE_ModuleInfo_96_96, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_91_91)), &conv30_STATE_VARIABLE_FoundInvalidType_97_97, ((MR_Box) (STATE_VARIABLE_Specs_92_92)), &conv29_STATE_VARIABLE_Specs_98_98, ((MR_Box) (STATE_VARIABLE_SolverAuxPredInfos_93_93)), &conv28_SolverAuxPredInfos_55, ((MR_Box) (STATE_VARIABLE_SolverItemMutables_94_94)), &conv27_SolverItemMutables_56);
    STATE_VARIABLE_ModuleInfo_96_96 = ((MR_Word) conv31_STATE_VARIABLE_ModuleInfo_96_96);
    STATE_VARIABLE_FoundInvalidType_97_97 = ((MR_Word) conv30_STATE_VARIABLE_FoundInvalidType_97_97);
    STATE_VARIABLE_Specs_98_98 = ((MR_Word) conv29_STATE_VARIABLE_Specs_98_98);
    SolverAuxPredInfos_55 = ((MR_Word) conv28_SolverAuxPredInfos_55);
    SolverItemMutables_56 = ((MR_Word) conv27_SolverItemMutables_56);
    hlds__make_hlds__add_pragma__add_reserve_tag_pragmas_5_p_0(ItemReserveTagPragmas_50, STATE_VARIABLE_ModuleInfo_96_96, &STATE_VARIABLE_ModuleInfo_101_101, STATE_VARIABLE_Specs_98_98, &STATE_VARIABLE_Specs_102_102);
    hlds__make_hlds__add_pragma__add_foreign_enum_pragmas_5_p_0(ItemForeignEnumPragmas_51, STATE_VARIABLE_ModuleInfo_101_101, &STATE_VARIABLE_ModuleInfo_103_103, STATE_VARIABLE_Specs_102_102, &STATE_VARIABLE_Specs_104_104);
    TypeCtorInfo_238_238 = (MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0;
    TypeInfo_239_239 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[3];
    mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[7], TypeCtorInfo_191_191, TypeCtorInfo_238_238, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[4], ItemInstDefns_40, ((MR_Box) (STATE_VARIABLE_ModuleInfo_103_103)), &conv37_STATE_VARIABLE_ModuleInfo_106_106, ((MR_Box) ((MR_Integer) 0)), &conv36_STATE_VARIABLE_FoundInvalidInstOrMode_107_107, ((MR_Box) (STATE_VARIABLE_Specs_104_104)), &conv35_STATE_VARIABLE_Specs_108_108);
    STATE_VARIABLE_ModuleInfo_106_106 = ((MR_Word) conv37_STATE_VARIABLE_ModuleInfo_106_106);
    STATE_VARIABLE_FoundInvalidInstOrMode_107_107 = ((MR_Word) conv36_STATE_VARIABLE_FoundInvalidInstOrMode_107_107);
    STATE_VARIABLE_Specs_108_108 = ((MR_Word) conv35_STATE_VARIABLE_Specs_108_108);
    mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[8], TypeCtorInfo_191_191, TypeCtorInfo_238_238, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[5], ItemModeDefns_41, ((MR_Box) (STATE_VARIABLE_ModuleInfo_106_106)), &conv43_STATE_VARIABLE_ModuleInfo_110_110, ((MR_Box) (STATE_VARIABLE_FoundInvalidInstOrMode_107_107)), &conv42_STATE_VARIABLE_FoundInvalidInstOrMode_111_111, ((MR_Box) (STATE_VARIABLE_Specs_108_108)), &conv41_STATE_VARIABLE_Specs_112_112);
    STATE_VARIABLE_ModuleInfo_110_110 = ((MR_Word) conv43_STATE_VARIABLE_ModuleInfo_110_110);
    STATE_VARIABLE_FoundInvalidInstOrMode_111_111 = ((MR_Word) conv42_STATE_VARIABLE_FoundInvalidInstOrMode_111_111);
    STATE_VARIABLE_Specs_112_112 = ((MR_Word) conv41_STATE_VARIABLE_Specs_112_112);
    TypeInfo_253_253 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[9];
    mercury__list__foldl2_6_p_0(TypeInfo_253_253, TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[6], ItemPredDecls_42, ((MR_Box) (STATE_VARIABLE_ModuleInfo_110_110)), &conv47_STATE_VARIABLE_ModuleInfo_114_114, ((MR_Box) (STATE_VARIABLE_Specs_112_112)), &conv46_STATE_VARIABLE_Specs_115_115);
    STATE_VARIABLE_ModuleInfo_114_114 = ((MR_Word) conv47_STATE_VARIABLE_ModuleInfo_114_114);
    STATE_VARIABLE_Specs_115_115 = ((MR_Word) conv46_STATE_VARIABLE_Specs_115_115);
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[10], TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[7], ItemModeDecls_43, ((MR_Box) (STATE_VARIABLE_ModuleInfo_114_114)), &conv51_STATE_VARIABLE_ModuleInfo_117_117, ((MR_Box) (STATE_VARIABLE_Specs_115_115)), &conv50_STATE_VARIABLE_Specs_118_118);
    STATE_VARIABLE_ModuleInfo_117_117 = ((MR_Word) conv51_STATE_VARIABLE_ModuleInfo_117_117);
    STATE_VARIABLE_Specs_118_118 = ((MR_Word) conv50_STATE_VARIABLE_Specs_118_118);
    TypeCtorInfo_265_265 = (MR_Word) &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0;
    mercury__list__foldl2_6_p_0(TypeCtorInfo_265_265, TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[8], SolverAuxPredInfos_55, ((MR_Box) (STATE_VARIABLE_ModuleInfo_117_117)), &conv55_STATE_VARIABLE_ModuleInfo_120_120, ((MR_Box) (STATE_VARIABLE_Specs_118_118)), &conv54_STATE_VARIABLE_Specs_121_121);
    STATE_VARIABLE_ModuleInfo_120_120 = ((MR_Word) conv55_STATE_VARIABLE_ModuleInfo_120_120);
    STATE_VARIABLE_Specs_121_121 = ((MR_Word) conv54_STATE_VARIABLE_Specs_121_121);
    TypeInfo_271_271 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[5];
    mercury__list__foldl2_6_p_0(TypeInfo_271_271, TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[9], ItemMutables_49, ((MR_Box) (STATE_VARIABLE_ModuleInfo_120_120)), &conv59_STATE_VARIABLE_ModuleInfo_123_123, ((MR_Box) (STATE_VARIABLE_Specs_121_121)), &conv58_STATE_VARIABLE_Specs_124_124);
    STATE_VARIABLE_ModuleInfo_123_123 = ((MR_Word) conv59_STATE_VARIABLE_ModuleInfo_123_123);
    STATE_VARIABLE_Specs_124_124 = ((MR_Word) conv58_STATE_VARIABLE_Specs_124_124);
    mercury__list__foldl2_6_p_0(TypeInfo_271_271, TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[10], SolverItemMutables_56, ((MR_Box) (STATE_VARIABLE_ModuleInfo_123_123)), &conv63_STATE_VARIABLE_ModuleInfo_126_126, ((MR_Box) (STATE_VARIABLE_Specs_124_124)), &conv62_STATE_VARIABLE_Specs_127_127);
    STATE_VARIABLE_ModuleInfo_126_126 = ((MR_Word) conv63_STATE_VARIABLE_ModuleInfo_126_126);
    STATE_VARIABLE_Specs_127_127 = ((MR_Word) conv62_STATE_VARIABLE_Specs_127_127);
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[11], TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[11], ItemTypeclasses_45, ((MR_Box) (STATE_VARIABLE_ModuleInfo_126_126)), &conv67_STATE_VARIABLE_ModuleInfo_129_129, ((MR_Box) (STATE_VARIABLE_Specs_127_127)), &conv66_STATE_VARIABLE_Specs_130_130);
    STATE_VARIABLE_ModuleInfo_129_129 = ((MR_Word) conv67_STATE_VARIABLE_ModuleInfo_129_129);
    STATE_VARIABLE_Specs_130_130 = ((MR_Word) conv66_STATE_VARIABLE_Specs_130_130);
    mercury__list__foldl_4_p_0(TypeInfo_253_253, TypeCtorInfo_191_191, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[12], ItemPredDecls_42, ((MR_Box) (STATE_VARIABLE_ModuleInfo_129_129)), &conv69_STATE_VARIABLE_ModuleInfo_132_132);
    STATE_VARIABLE_ModuleInfo_132_132 = ((MR_Word) conv69_STATE_VARIABLE_ModuleInfo_132_132);
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[12], TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[13], ItemInstances_46, ((MR_Box) (STATE_VARIABLE_ModuleInfo_132_132)), &conv73_STATE_VARIABLE_ModuleInfo_134_134, ((MR_Box) (STATE_VARIABLE_Specs_130_130)), &conv72_STATE_VARIABLE_Specs_135_135);
    STATE_VARIABLE_ModuleInfo_134_134 = ((MR_Word) conv73_STATE_VARIABLE_ModuleInfo_134_134);
    STATE_VARIABLE_Specs_135_135 = ((MR_Word) conv72_STATE_VARIABLE_Specs_135_135);
    hlds__make_hlds__add_pragma__add_pass_2_pragmas_5_p_0(ItemPragmas2_52, STATE_VARIABLE_ModuleInfo_134_134, &STATE_VARIABLE_ModuleInfo_136_136, STATE_VARIABLE_Specs_135_135, &STATE_VARIABLE_Specs_137_137);
    switch (STATE_VARIABLE_FoundInvalidType_97_97) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_TypeTable_138_138;
          MR_Word Var_139;
          MR_Word STATE_VARIABLE_TypeTable_141_141;
          MR_Word STATE_VARIABLE_ModuleInfo_142_142;
          MR_Box conv75_STATE_VARIABLE_TypeTable_141_141;
          MR_Box conv81_STATE_VARIABLE_FoundInvalidType_144_144;
          MR_Box conv80_STATE_VARIABLE_ModuleInfo_145_145;
          MR_Box conv79_STATE_VARIABLE_Specs_146_146;

          hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_136_136, &STATE_VARIABLE_TypeTable_138_138);
          {
            Var_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[6]));
            MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15));
            MR_hl_field(MR_mktag(0), Var_139, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_139, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_136_136));
          }
          hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0, Var_139, STATE_VARIABLE_TypeTable_138_138, ((MR_Box) (STATE_VARIABLE_TypeTable_138_138)), &conv75_STATE_VARIABLE_TypeTable_141_141);
          STATE_VARIABLE_TypeTable_141_141 = ((MR_Word) conv75_STATE_VARIABLE_TypeTable_141_141);
          hlds__hlds_module__module_info_set_type_table_3_p_0(STATE_VARIABLE_TypeTable_141_141, STATE_VARIABLE_ModuleInfo_136_136, &STATE_VARIABLE_ModuleInfo_142_142);
          hlds__hlds_data__foldl3_over_type_ctor_defns_8_p_0((MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0, TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[14], STATE_VARIABLE_TypeTable_141_141, ((MR_Box) (STATE_VARIABLE_FoundInvalidType_97_97)), &conv81_STATE_VARIABLE_FoundInvalidType_144_144, ((MR_Box) (STATE_VARIABLE_ModuleInfo_142_142)), &conv80_STATE_VARIABLE_ModuleInfo_145_145, ((MR_Box) (STATE_VARIABLE_Specs_137_137)), &conv79_STATE_VARIABLE_Specs_146_146);
          STATE_VARIABLE_FoundInvalidType_144_144 = ((MR_Word) conv81_STATE_VARIABLE_FoundInvalidType_144_144);
          STATE_VARIABLE_ModuleInfo_145_145 = ((MR_Word) conv80_STATE_VARIABLE_ModuleInfo_145_145);
          STATE_VARIABLE_Specs_146_146 = ((MR_Word) conv79_STATE_VARIABLE_Specs_146_146);
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_FoundInvalidType_144_144 = STATE_VARIABLE_FoundInvalidType_97_97;
          STATE_VARIABLE_ModuleInfo_145_145 = STATE_VARIABLE_ModuleInfo_136_136;
          STATE_VARIABLE_Specs_146_146 = STATE_VARIABLE_Specs_137_137;
        }
        break;
    }
    Var_369 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_28, Var_369);
    if (succeeded)
      succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(STATE_VARIABLE_ModuleInfo_145_145);
    if (succeeded)
    {
      MR_Word Var_148;
      MR_Box conv83_STATE_VARIABLE_ModuleInfo_149_149;

      Var_148 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, TypeCtorInfo_191_191, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[15], Var_148, ((MR_Box) (STATE_VARIABLE_ModuleInfo_145_145)), &conv83_STATE_VARIABLE_ModuleInfo_149_149);
      STATE_VARIABLE_ModuleInfo_149_149 = ((MR_Word) conv83_STATE_VARIABLE_ModuleInfo_149_149);
    }
    else
      STATE_VARIABLE_ModuleInfo_149_149 = STATE_VARIABLE_ModuleInfo_145_145;
    hlds__hlds_module__module_info_optimize_2_p_0(STATE_VARIABLE_ModuleInfo_149_149, &STATE_VARIABLE_ModuleInfo_150_150);
    hlds__make_hlds__qual_info__init_qual_info_3_p_0(MQInfo0_15, TypeEqvMapMap_16, &STATE_VARIABLE_QualInfo_151_151);
    TypeCtorInfo_318_318 = (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;
    mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[13], TypeCtorInfo_191_191, TypeCtorInfo_318_318, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[16], ItemClauses_54, ((MR_Box) (STATE_VARIABLE_ModuleInfo_150_150)), &conv89_STATE_VARIABLE_ModuleInfo_153_153, ((MR_Box) (STATE_VARIABLE_QualInfo_151_151)), &conv88_STATE_VARIABLE_QualInfo_154_154, ((MR_Box) (STATE_VARIABLE_Specs_146_146)), &conv87_STATE_VARIABLE_Specs_155_155);
    STATE_VARIABLE_ModuleInfo_153_153 = ((MR_Word) conv89_STATE_VARIABLE_ModuleInfo_153_153);
    STATE_VARIABLE_QualInfo_154_154 = ((MR_Word) conv88_STATE_VARIABLE_QualInfo_154_154);
    STATE_VARIABLE_Specs_155_155 = ((MR_Word) conv87_STATE_VARIABLE_Specs_155_155);
    mercury__list__foldl3_8_p_0(TypeCtorInfo_265_265, TypeCtorInfo_191_191, TypeCtorInfo_318_318, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[17], SolverAuxPredInfos_55, ((MR_Box) (STATE_VARIABLE_ModuleInfo_153_153)), &conv95_STATE_VARIABLE_ModuleInfo_157_157, ((MR_Box) (STATE_VARIABLE_QualInfo_154_154)), &conv94_STATE_VARIABLE_QualInfo_158_158, ((MR_Box) (STATE_VARIABLE_Specs_155_155)), &conv93_STATE_VARIABLE_Specs_159_159);
    STATE_VARIABLE_ModuleInfo_157_157 = ((MR_Word) conv95_STATE_VARIABLE_ModuleInfo_157_157);
    STATE_VARIABLE_QualInfo_158_158 = ((MR_Word) conv94_STATE_VARIABLE_QualInfo_158_158);
    STATE_VARIABLE_Specs_159_159 = ((MR_Word) conv93_STATE_VARIABLE_Specs_159_159);
    mercury__list__foldl3_8_p_0(TypeInfo_271_271, TypeCtorInfo_191_191, TypeCtorInfo_318_318, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[18], ItemMutables_49, ((MR_Box) (STATE_VARIABLE_ModuleInfo_157_157)), &conv101_STATE_VARIABLE_ModuleInfo_161_161, ((MR_Box) (STATE_VARIABLE_QualInfo_158_158)), &conv100_STATE_VARIABLE_QualInfo_162_162, ((MR_Box) (STATE_VARIABLE_Specs_159_159)), &conv99_STATE_VARIABLE_Specs_163_163);
    STATE_VARIABLE_ModuleInfo_161_161 = ((MR_Word) conv101_STATE_VARIABLE_ModuleInfo_161_161);
    STATE_VARIABLE_QualInfo_162_162 = ((MR_Word) conv100_STATE_VARIABLE_QualInfo_162_162);
    STATE_VARIABLE_Specs_163_163 = ((MR_Word) conv99_STATE_VARIABLE_Specs_163_163);
    mercury__list__foldl3_8_p_0(TypeInfo_271_271, TypeCtorInfo_191_191, TypeCtorInfo_318_318, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[19], SolverItemMutables_56, ((MR_Box) (STATE_VARIABLE_ModuleInfo_161_161)), &conv107_STATE_VARIABLE_ModuleInfo_165_165, ((MR_Box) (STATE_VARIABLE_QualInfo_162_162)), &conv106_STATE_VARIABLE_QualInfo_166_166, ((MR_Box) (STATE_VARIABLE_Specs_163_163)), &conv105_STATE_VARIABLE_Specs_167_167);
    STATE_VARIABLE_ModuleInfo_165_165 = ((MR_Word) conv107_STATE_VARIABLE_ModuleInfo_165_165);
    STATE_VARIABLE_QualInfo_166_166 = ((MR_Word) conv106_STATE_VARIABLE_QualInfo_166_166);
    STATE_VARIABLE_Specs_167_167 = ((MR_Word) conv105_STATE_VARIABLE_Specs_167_167);
    mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[14], TypeCtorInfo_191_191, TypeCtorInfo_318_318, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[20], ItemPromises_44, ((MR_Box) (STATE_VARIABLE_ModuleInfo_165_165)), &conv113_STATE_VARIABLE_ModuleInfo_169_169, ((MR_Box) (STATE_VARIABLE_QualInfo_166_166)), &conv112_STATE_VARIABLE_QualInfo_170_170, ((MR_Box) (STATE_VARIABLE_Specs_167_167)), &conv111_STATE_VARIABLE_Specs_171_171);
    STATE_VARIABLE_ModuleInfo_169_169 = ((MR_Word) conv113_STATE_VARIABLE_ModuleInfo_169_169);
    STATE_VARIABLE_QualInfo_170_170 = ((MR_Word) conv112_STATE_VARIABLE_QualInfo_170_170);
    STATE_VARIABLE_Specs_171_171 = ((MR_Word) conv111_STATE_VARIABLE_Specs_171_171);
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[15], TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[21], ItemInitialises_47, ((MR_Box) (STATE_VARIABLE_ModuleInfo_169_169)), &conv117_STATE_VARIABLE_ModuleInfo_173_173, ((MR_Box) (STATE_VARIABLE_Specs_171_171)), &conv116_STATE_VARIABLE_Specs_174_174);
    STATE_VARIABLE_ModuleInfo_173_173 = ((MR_Word) conv117_STATE_VARIABLE_ModuleInfo_173_173);
    STATE_VARIABLE_Specs_174_174 = ((MR_Word) conv116_STATE_VARIABLE_Specs_174_174);
    mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[16], TypeCtorInfo_191_191, TypeInfo_239_239, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[22], ItemFinalises_48, ((MR_Box) (STATE_VARIABLE_ModuleInfo_173_173)), &conv121_STATE_VARIABLE_ModuleInfo_176_176, ((MR_Box) (STATE_VARIABLE_Specs_174_174)), &conv120_STATE_VARIABLE_Specs_177_177);
    STATE_VARIABLE_ModuleInfo_176_176 = ((MR_Word) conv121_STATE_VARIABLE_ModuleInfo_176_176);
    STATE_VARIABLE_Specs_177_177 = ((MR_Word) conv120_STATE_VARIABLE_Specs_177_177);
    hlds__make_hlds__add_pragma__add_pass_3_pragmas_7_p_0(ItemPragmas3_53, STATE_VARIABLE_ModuleInfo_176_176, STATE_VARIABLE_ModuleInfo_66, STATE_VARIABLE_QualInfo_170_170, &STATE_VARIABLE_QualInfo_179_179, STATE_VARIABLE_Specs_177_177, &STATE_VARIABLE_Specs_180_180);
    {
      Var_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_181, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_181, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25));
      MR_hl_field(MR_mktag(0), Var_181, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_181, 3) = ((MR_Box) (*STATE_VARIABLE_ModuleInfo_66));
    }
    mercury__list__foldl_4_p_0(TypeInfo_253_253, TypeInfo_239_239, Var_181, ItemPredDecls_42, ((MR_Box) (STATE_VARIABLE_Specs_180_180)), &conv123_STATE_VARIABLE_Specs_67);
    *STATE_VARIABLE_Specs_67 = ((MR_Word) conv123_STATE_VARIABLE_Specs_67);
    mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, TypeCtorInfo_318_318, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_3[23], ModuleVersionNumbers_30, ((MR_Box) (STATE_VARIABLE_QualInfo_179_179)), &conv125_STATE_VARIABLE_QualInfo_63);
    *STATE_VARIABLE_QualInfo_63 = ((MR_Word) conv125_STATE_VARIABLE_QualInfo_63);
    hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(*STATE_VARIABLE_QualInfo_63, &MQInfo_58);
    parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(MQInfo_58, &MQUndefType_59);
    parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(MQInfo_58, &MQUndefInst_60);
    parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(MQInfo_58, &MQUndefMode_61);
    parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(MQInfo_58, &MQUndefTypeClass_62);
    succeeded = (MQUndefType_59 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (MQUndefTypeClass_62 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_FoundInvalidType_64 = (MR_Integer) 1;
    else
      *STATE_VARIABLE_FoundInvalidType_64 = STATE_VARIABLE_FoundInvalidType_144_144;
    succeeded = (MQUndefInst_60 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (MQUndefMode_61 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_FoundInvalidInstOrMode_65 = (MR_Integer) 1;
    else
      *STATE_VARIABLE_FoundInvalidInstOrMode_65 = STATE_VARIABLE_FoundInvalidInstOrMode_111_111;
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
