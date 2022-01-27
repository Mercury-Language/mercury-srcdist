/*
** Automatically generated from `ml_tag_switch.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module ml_backend.ml_tag_switch. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_tag_switch__init
ENDINIT
*/

#include "ml_backend.ml_tag_switch.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.switch_util.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_simplify_switch.mih"
#include "ml_backend.ml_switch_gen.mih"
#include "ml_backend.ml_unify_gen.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s {
  MR_bool ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Statement_20;
  jmp_buf ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Label_33;
  MR_Word ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36;
};


static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0[2];

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1[1];

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0[2];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0[2];

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0[1];

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0[1];

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_121_95_115_112_108_105_116_95_99_97_115_101_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word ml_backend__ml_tag_switch__Ptags_6,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_10);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__222__1_2_p_0(
  MR_Word ml_backend__ml_tag_switch__OtherPtags_21,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_52);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__200__1_2_p_0(
  MR_Word ml_backend__ml_tag_switch__SecTagLocn_22,
  MR_Word ml_backend__ml_tag_switch__SecTagLocn1_25);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_match_value_1_f_0(
  MR_Integer ml_backend__ml_tag_switch__Stag_3);

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0_1(
  MR_Box ml_backend__ml_tag_switch__closure_arg,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__CodeMap_2,
  MR_Word ml_backend__ml_tag_switch__CodeModel_3,
  MR_Word * ml_backend__ml_tag_switch__HeadVar__4_4,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_6);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(
  MR_Word ml_backend__ml_tag_switch__Cases_12,
  MR_Word ml_backend__ml_tag_switch__CodeMap_13,
  MR_Integer ml_backend__ml_tag_switch__PrimaryTag_14,
  MR_Word ml_backend__ml_tag_switch__StagLocn_15,
  MR_Word ml_backend__ml_tag_switch__Var_16,
  MR_Word ml_backend__ml_tag_switch__CodeModel_17,
  MR_Word ml_backend__ml_tag_switch__CanFail_18,
  MR_Word ml_backend__ml_tag_switch__Context_19,
  MR_Word * ml_backend__ml_tag_switch__Statement_20,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_34);

static void MR_CALL 
ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_3);

static void MR_CALL 
ml_backend__ml_tag_switch__lookup_code_map_6_p_0(
  MR_Word ml_backend__ml_tag_switch__CodeMap_7,
  MR_Word ml_backend__ml_tag_switch__CaseId_8,
  MR_Word ml_backend__ml_tag_switch__CodeModel_9,
  MR_Word * ml_backend__ml_tag_switch__Statement_10,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_14,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_15);

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_ptag_match_1_f_0(
  MR_Integer ml_backend__ml_tag_switch__Ptag_3);

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_3(
  MR_Box ml_backend__ml_tag_switch__closure_arg,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2(
  MR_Box ml_backend__ml_tag_switch__closure_arg);

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_1(
  MR_Box ml_backend__ml_tag_switch__closure_arg);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0(
  MR_Word ml_backend__ml_tag_switch__PtagCase_11,
  MR_Word ml_backend__ml_tag_switch__CodeMap_12,
  MR_Word ml_backend__ml_tag_switch__Var_13,
  MR_Word ml_backend__ml_tag_switch__CanFail_14,
  MR_Word ml_backend__ml_tag_switch__CodeModel_15,
  MR_Word ml_backend__ml_tag_switch__PtagCountMap_16,
  MR_Word ml_backend__ml_tag_switch__Context_17,
  MR_Word * ml_backend__ml_tag_switch__MLDS_Case_18,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__CodeMap_2,
  MR_Word ml_backend__ml_tag_switch__Var_3,
  MR_Word ml_backend__ml_tag_switch__CanFail_4,
  MR_Word ml_backend__ml_tag_switch__CodeModel_5,
  MR_Word ml_backend__ml_tag_switch__PtagCountMap_6,
  MR_Word ml_backend__ml_tag_switch__Context_7,
  MR_Word * ml_backend__ml_tag_switch__HeadVar__8_8,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_9,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_10);

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_4_p_0(
  MR_Word ml_backend__ml_tag_switch___CaseId_5,
  MR_Word ml_backend__ml_tag_switch__Ptags_6,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_10);

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0_1(
  MR_Box ml_backend__ml_tag_switch__closure_arg,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0(
  MR_Word ml_backend__ml_tag_switch__CaseIdPtagsMap_3,
  MR_Word * ml_backend__ml_tag_switch__IsAnyCaseSplit_4);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_1(
  void * ml_backend__ml_tag_switch__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_2(
  void * ml_backend__ml_tag_switch__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_3(
  void * ml_backend__ml_tag_switch__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0(
  MR_Word ml_backend__ml_tag_switch__CodeModel_10,
  MR_Word ml_backend__ml_tag_switch__TaggedCase_11,
  MR_Word * ml_backend__ml_tag_switch__CaseId_12,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_0_25,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_26,
  MR_Word ml_backend__ml_tag_switch__Info0_15,
  MR_Word * ml_backend__ml_tag_switch__Info_16);

static void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0_1(
  MR_Box ml_backend__ml_tag_switch__closure_arg,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_4,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_5,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_6,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_7,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_8);


static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[7][3];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[2][2];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[2][1];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_4[1][12];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_5[1][7];

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_6[3][5];




static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_tag_switch__find_any_split_cases_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_6[2])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_6[2])),
    ((MR_Box) (ml_backend__ml_tag_switch__gen_stag_cases_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_4[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__code_model__hlds__code_model__type_ctor_info_code_model_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_tag_switch_scalar_common_6[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__ml_tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_tag_switch__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_TypeInfo) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_code_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____code_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____code_map_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "code_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0 = {
  (MR_String) "no_case_is_split_between_ptags",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1 = {
  (MR_String) "some_case_is_split_between_ptags",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_0,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_functor_desc_is_a_case_split_between_ptags_0_1
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "is_a_case_split_between_ptags",
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_name_ordered_is_a_case_split_between_ptags_0 },
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__enum_value_ordered_is_a_case_split_between_ptags_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_is_a_case_split_between_ptags_0
};

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0[1] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0
};

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0 = {
  (MR_String) "immediate",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1 = {
  (MR_String) "generate",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_maybe_code_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1
};

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_maybe_code_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0[2] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_1,
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_maybe_code_0_0
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "maybe_code",
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_maybe_code_0 },
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_maybe_code_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_maybe_code_0
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_TypeInfo) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stag_rev_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_tag_switch__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0ml_backend__ml_tag_switch__type_ctor_info_stags_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_tag_switch__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0 = {
  (MR_String) "stags",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__field_types_stags_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0
};

static const MR_DuPtagLayout ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_stag_ordered_stags_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0[1] = {
  &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_functor_desc_stags_0_0
};

static const MR_Integer ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_tag_switch____Unify____stags_0_0_10001)),
  ((MR_Box) (ml_backend__ml_tag_switch____Compare____stags_0_0_10001)),
  (MR_String) "ml_backend.ml_tag_switch",
  (MR_String) "stags",
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_name_ordered_stags_0 },
  {     ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__du_ptag_ordered_stags_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__functor_number_map_stags_0
};

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;

    {
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____code_map_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

    {
      ml_backend__ml_tag_switch____Compare____code_map_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;

    {
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

    {
      ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;

    {
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____maybe_code_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

    {
      ml_backend__ml_tag_switch____Compare____maybe_code_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;

    {
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

    {
      ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0_10001(
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;

    {
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch____Unify____stags_0_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0_10001(
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__1_1;

    {
      ml_backend__ml_tag_switch____Compare____stags_0_0(&ml_backend__ml_tag_switch__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3));
    }
    *ml_backend__ml_tag_switch__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_121_95_115_112_108_105_116_95_99_97_115_101_115_95_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word ml_backend__ml_tag_switch__Ptags_6,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_10)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Integer ml_backend__ml_tag_switch___OnlyPtag_8;
    MR_Box ml_backend__ml_tag_switch__conv0__OnlyPtag_8;

    {
      ml_backend__ml_tag_switch__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_tag_switch__Ptags_6, &ml_backend__ml_tag_switch__conv0__OnlyPtag_8);
    }
    if (ml_backend__ml_tag_switch__succeeded)
      {
        ml_backend__ml_tag_switch___OnlyPtag_8 = ((MR_Integer) ml_backend__ml_tag_switch__conv0__OnlyPtag_8);
        ml_backend__ml_tag_switch__succeeded = MR_TRUE;
      }
    if (ml_backend__ml_tag_switch__succeeded)
      *ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_10 = ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_0_9;
    else
      *ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_10 = (MR_Integer) 1;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__222__1_2_p_0(
  MR_Word ml_backend__ml_tag_switch__OtherPtags_21,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_52)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;

    {
      ml_backend__ml_tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_2[1], ((MR_Box) (ml_backend__ml_tag_switch__OtherPtags_21)), ((MR_Box) (ml_backend__ml_tag_switch__HeadVar__2_52)));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__200__1_2_p_0(
  MR_Word ml_backend__ml_tag_switch__SecTagLocn_22,
  MR_Word ml_backend__ml_tag_switch__SecTagLocn1_25)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__SecTagLocn_22 == ml_backend__ml_tag_switch__SecTagLocn1_25);

    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stags_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Integer ml_backend__ml_tag_switch__CastX_9 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;
    MR_Integer ml_backend__ml_tag_switch__CastY_10 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__3_3;

    ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CastX_9 == ml_backend__ml_tag_switch__CastY_10);
    if (ml_backend__ml_tag_switch__succeeded)
      *ml_backend__ml_tag_switch__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer ml_backend__ml_tag_switch__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tag_switch__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_tag_switch__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tag_switch__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tag_switch__V_8_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_tag_switch__V_8_8, ml_backend__ml_tag_switch__V_4_4, ml_backend__ml_tag_switch__V_6_6);
        }
        ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__V_8_8 == (MR_Integer) 0);
        ml_backend__ml_tag_switch__succeeded = !(ml_backend__ml_tag_switch__succeeded);
        if (ml_backend__ml_tag_switch__succeeded)
          *ml_backend__ml_tag_switch__HeadVar__1_1 = ml_backend__ml_tag_switch__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_2[1], ml_backend__ml_tag_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tag_switch__V_5_5)), ((MR_Box) (ml_backend__ml_tag_switch__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stags_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Integer ml_backend__ml_tag_switch__CastX_7 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__1_1;
    MR_Integer ml_backend__ml_tag_switch__CastY_8 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;

    ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CastX_7 == ml_backend__ml_tag_switch__CastY_8);
    if (ml_backend__ml_tag_switch__succeeded)
      ml_backend__ml_tag_switch__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_tag_switch__TypeInfo_9_9;
        MR_Integer ml_backend__ml_tag_switch__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tag_switch__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_tag_switch__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tag_switch__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, (MR_Integer) 1)));

        ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__V_3_3 == ml_backend__ml_tag_switch__V_5_5);
        if (ml_backend__ml_tag_switch__succeeded)
          {
            ml_backend__ml_tag_switch__TypeInfo_9_9 = (MR_Word) &ml_backend__ml_tag_switch_scalar_common_2[1];
            {
              ml_backend__ml_tag_switch__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_tag_switch__TypeInfo_9_9, ((MR_Box) (ml_backend__ml_tag_switch__V_4_4)), ((MR_Box) (ml_backend__ml_tag_switch__V_6_6)));
            }
          }
      }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____stag_rev_map_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar1_4 = ml_backend__ml_tag_switch__HeadVar__2_2;
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar2_5 = ml_backend__ml_tag_switch__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[3], ml_backend__ml_tag_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____stag_rev_map_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar1_3 = ml_backend__ml_tag_switch__HeadVar__1_1;
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar2_4 = ml_backend__ml_tag_switch__HeadVar__2_2;

    {
      ml_backend__ml_tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[3], ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____maybe_code_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Integer ml_backend__ml_tag_switch__CastX_12 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;
    MR_Integer ml_backend__ml_tag_switch__CastY_13 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__3_3;

    ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CastX_12 == ml_backend__ml_tag_switch__CastY_13);
    if (ml_backend__ml_tag_switch__succeeded)
      *ml_backend__ml_tag_switch__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_tag_switch__V_16_16 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2), (MR_Integer) 1);

        if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ml_backend__ml_tag_switch__V_11_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__3_3), (MR_Integer) 1);

            {
              hlds__hlds_goal____Compare____hlds_goal_0_0(ml_backend__ml_tag_switch__HeadVar__1_1, ml_backend__ml_tag_switch__V_16_16, ml_backend__ml_tag_switch__V_11_11);
            }
          }
        else
          *ml_backend__ml_tag_switch__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word ml_backend__ml_tag_switch__V_17_17 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2), (MR_Integer) 0);

        if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *ml_backend__ml_tag_switch__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word ml_backend__ml_tag_switch__V_5_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__3_3), (MR_Integer) 0);

            {
              ml_backend__mlds____Compare____statement_0_0(ml_backend__ml_tag_switch__HeadVar__1_1, ml_backend__ml_tag_switch__V_17_17, ml_backend__ml_tag_switch__V_5_5);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____maybe_code_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Integer ml_backend__ml_tag_switch__CastX_7 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__1_1;
    MR_Integer ml_backend__ml_tag_switch__CastY_8 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;

    ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CastX_7 == ml_backend__ml_tag_switch__CastY_8);
    if (ml_backend__ml_tag_switch__succeeded)
      ml_backend__ml_tag_switch__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_tag_switch__V_5_5 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__1_1), (MR_Integer) 1);
        MR_Word ml_backend__ml_tag_switch__V_6_6;

        ml_backend__ml_tag_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_tag_switch__succeeded)
          {
            ml_backend__ml_tag_switch__V_6_6 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2), (MR_Integer) 1);
            {
              ml_backend__ml_tag_switch__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ml_backend__ml_tag_switch__V_5_5, ml_backend__ml_tag_switch__V_6_6);
            }
          }
      }
    else
      {
        MR_Word ml_backend__ml_tag_switch__V_3_3 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__1_1), (MR_Integer) 0);
        MR_Word ml_backend__ml_tag_switch__V_4_4;

        ml_backend__ml_tag_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_tag_switch__succeeded)
          {
            ml_backend__ml_tag_switch__V_4_4 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__HeadVar__2_2), (MR_Integer) 0);
            {
              ml_backend__ml_tag_switch__succeeded = ml_backend__mlds____Unify____statement_0_0(ml_backend__ml_tag_switch__V_3_3, ml_backend__ml_tag_switch__V_4_4);
            }
          }
      }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____is_a_case_split_between_ptags_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Integer ml_backend__ml_tag_switch__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__2_2;
    MR_Integer ml_backend__ml_tag_switch__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_tag_switch__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_tag_switch__HeadVar__1_1, ml_backend__ml_tag_switch__Cast_HeadVar1_4, ml_backend__ml_tag_switch__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____is_a_case_split_between_ptags_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__HeadVar__2_1 == ml_backend__ml_tag_switch__HeadVar__2_2);

    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch____Compare____code_map_0_0(
  MR_Word * ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2,
  MR_Word ml_backend__ml_tag_switch__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar1_4 = ml_backend__ml_tag_switch__HeadVar__2_2;
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar2_5 = ml_backend__ml_tag_switch__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[0], ml_backend__ml_tag_switch__HeadVar__1_1, ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch____Unify____code_map_0_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar1_3 = ml_backend__ml_tag_switch__HeadVar__1_1;
    MR_Word ml_backend__ml_tag_switch__Cast_HeadVar2_4 = ml_backend__ml_tag_switch__HeadVar__2_2;

    {
      ml_backend__ml_tag_switch__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[0], ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_tag_switch__Cast_HeadVar2_4)));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_match_value_1_f_0(
  MR_Integer ml_backend__ml_tag_switch__Stag_3)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__HeadVar__2_2;
    MR_Word ml_backend__ml_tag_switch__V_4_4;
    MR_Word ml_backend__ml_tag_switch__V_5_5;

    {
      ml_backend__ml_tag_switch__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_tag_switch__V_5_5, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Stag_3));
    }
    {
      ml_backend__ml_tag_switch__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_4_4, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_5_5));
    }
    {
      ml_backend__ml_tag_switch__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_tag_switch__V_4_4));
    }
    return ml_backend__ml_tag_switch__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0_1(
  MR_Box ml_backend__ml_tag_switch__closure_arg,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_tag_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;
    MR_Word ml_backend__ml_tag_switch__conv0_HeadVar__2_2;

    {
      ml_backend__ml_tag_switch__conv0_HeadVar__2_2 = ml_backend__ml_tag_switch__make_match_value_1_f_0(((MR_Integer) ml_backend__ml_tag_switch__wrapper_arg_1));
    }
    ml_backend__ml_tag_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_HeadVar__2_2));
    return ml_backend__ml_tag_switch__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__CodeMap_2,
  MR_Word ml_backend__ml_tag_switch__CodeModel_3,
  MR_Word * ml_backend__ml_tag_switch__HeadVar__4_4,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_6)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;

    if ((ml_backend__ml_tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_tag_switch__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tag_switch__STATE_VARIABLE_Info_6 = ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_24_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word ml_backend__ml_tag_switch__Group_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tag_switch__Groups_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tag_switch__Case_16;
        MR_Word ml_backend__ml_tag_switch__Cases_17;
        MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_21_21;
        MR_Word ml_backend__ml_tag_switch__CaseId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Group_12, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tag_switch__Stags_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Group_12, (MR_Integer) 1)));
        MR_Integer ml_backend__ml_tag_switch__FirstStag_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Stags_31, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tag_switch__RevLaterStags_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Stags_31, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tag_switch__LaterStags_34;
        MR_Word ml_backend__ml_tag_switch__FirstMatch_35;
        MR_Word ml_backend__ml_tag_switch__LaterMatches_36;
        MR_Word ml_backend__ml_tag_switch__Statement_37;
        MR_Word ml_backend__ml_tag_switch__V_45_45;
        MR_Word ml_backend__ml_tag_switch__V_46_46;
        MR_Word ml_backend__ml_tag_switch__MaybeCode_54;
        MR_Box ml_backend__ml_tag_switch__conv1_MaybeCode_54;

        {
          mercury__list__reverse_2_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_24_40, ml_backend__ml_tag_switch__RevLaterStags_33, &ml_backend__ml_tag_switch__LaterStags_34);
        }
        {
          ml_backend__ml_tag_switch__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_tag_switch__V_46_46, 0) = ((MR_Box) (ml_backend__ml_tag_switch__FirstStag_32));
        }
        {
          ml_backend__ml_tag_switch__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_45_45, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_46_46));
        }
        {
          ml_backend__ml_tag_switch__FirstMatch_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__FirstMatch_35, 0) = ((MR_Box) (ml_backend__ml_tag_switch__V_45_45));
        }
        {
          ml_backend__ml_tag_switch__LaterMatches_36 = mercury__list__map_2_f_0(ml_backend__ml_tag_switch__TypeCtorInfo_24_40, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[6], ml_backend__ml_tag_switch__LaterStags_34);
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0, ml_backend__ml_tag_switch__CodeMap_2, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_30)), &ml_backend__ml_tag_switch__conv1_MaybeCode_54);
        }
        ml_backend__ml_tag_switch__MaybeCode_54 = ((MR_Word) ml_backend__ml_tag_switch__conv1_MaybeCode_54);
        if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__MaybeCode_54)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ml_backend__ml_tag_switch__Goal_55 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__MaybeCode_54), (MR_Integer) 1);

            {
              ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_tag_switch__CodeModel_3, ml_backend__ml_tag_switch__Goal_55, &ml_backend__ml_tag_switch__Statement_37, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_21_21);
            }
          }
        else
          {
            ml_backend__ml_tag_switch__Statement_37 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__MaybeCode_54), (MR_Integer) 0);
            ml_backend__ml_tag_switch__STATE_VARIABLE_Info_21_21 = ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_5;
          }
        {
          ml_backend__ml_tag_switch__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Case_16, 0) = ((MR_Box) (ml_backend__ml_tag_switch__FirstMatch_35));
          MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Case_16, 1) = ((MR_Box) (ml_backend__ml_tag_switch__LaterMatches_36));
          MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Case_16, 2) = ((MR_Box) (ml_backend__ml_tag_switch__Statement_37));
        }
        {
          ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(ml_backend__ml_tag_switch__Groups_13, ml_backend__ml_tag_switch__CodeMap_2, ml_backend__ml_tag_switch__CodeModel_3, &ml_backend__ml_tag_switch__Cases_17, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_21_21, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tag_switch__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Case_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tag_switch__Cases_17));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(
  MR_Word ml_backend__ml_tag_switch__Cases_12,
  MR_Word ml_backend__ml_tag_switch__CodeMap_13,
  MR_Integer ml_backend__ml_tag_switch__PrimaryTag_14,
  MR_Word ml_backend__ml_tag_switch__StagLocn_15,
  MR_Word ml_backend__ml_tag_switch__Var_16,
  MR_Word ml_backend__ml_tag_switch__CodeModel_17,
  MR_Word ml_backend__ml_tag_switch__CanFail_18,
  MR_Word ml_backend__ml_tag_switch__Context_19,
  MR_Word * ml_backend__ml_tag_switch__Statement_20,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_34)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__ModuleInfo_22;
    MR_Word ml_backend__ml_tag_switch__VarType_23;
    MR_Word ml_backend__ml_tag_switch__VarLval_24;
    MR_Word ml_backend__ml_tag_switch__VarRval_25;
    MR_Word ml_backend__ml_tag_switch__STagRval_26;
    MR_Word ml_backend__ml_tag_switch__StagCases0_27;
    MR_Word ml_backend__ml_tag_switch__StagCases_28;
    MR_Word ml_backend__ml_tag_switch__Default_29;
    MR_Word ml_backend__ml_tag_switch__SwitchStmt_31;
    MR_Word ml_backend__ml_tag_switch__MLDS_Context_32;
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_40_40;
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_41_41;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33, &ml_backend__ml_tag_switch__ModuleInfo_22);
    }
    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33, ml_backend__ml_tag_switch__Var_16, &ml_backend__ml_tag_switch__VarType_23);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33, ml_backend__ml_tag_switch__Var_16, &ml_backend__ml_tag_switch__VarLval_24);
    }
    {
      ml_backend__ml_tag_switch__VarRval_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__VarRval_25, 0) = ((MR_Box) (ml_backend__ml_tag_switch__VarLval_24));
    }
    switch (ml_backend__ml_tag_switch__StagLocn_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          {
            ml_backend__ml_tag_switch__STagRval_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__STagRval_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__STagRval_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_3[1])));
            MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__STagRval_26, 2) = ((MR_Box) (ml_backend__ml_tag_switch__VarRval_25));
          }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_stag_switch\'/11", (MR_String) "no stag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          ml_backend__ml_tag_switch__STagRval_26 = ml_backend__ml_unify_gen__ml_gen_secondary_tag_rval_4_f_0(ml_backend__ml_tag_switch__ModuleInfo_22, ml_backend__ml_tag_switch__PrimaryTag_14, ml_backend__ml_tag_switch__VarType_23, ml_backend__ml_tag_switch__VarRval_25);
        }
        break;
    }
    {
      ml_backend__ml_tag_switch__gen_stag_cases_6_p_0(ml_backend__ml_tag_switch__Cases_12, ml_backend__ml_tag_switch__CodeMap_13, ml_backend__ml_tag_switch__CodeModel_17, &ml_backend__ml_tag_switch__StagCases0_27, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_33, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_40_40);
    }
    {
      mercury__list__sort_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_tag_switch__StagCases0_27, &ml_backend__ml_tag_switch__StagCases_28);
    }
    {
      ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_tag_switch__CanFail_18, ml_backend__ml_tag_switch__CodeModel_17, ml_backend__ml_tag_switch__Context_19, &ml_backend__ml_tag_switch__Default_29, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_40_40, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_41_41);
    }
    {
      ml_backend__ml_tag_switch__SwitchStmt_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 2) = ((MR_Box) (ml_backend__ml_tag_switch__STagRval_26));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 4) = ((MR_Box) (ml_backend__ml_tag_switch__StagCases_28));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt_31, 5) = ((MR_Box) (ml_backend__ml_tag_switch__Default_29));
    }
    {
      ml_backend__ml_tag_switch__MLDS_Context_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_tag_switch__Context_19);
    }
    {
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_tag_switch__SwitchStmt_31, ml_backend__ml_tag_switch__MLDS_Context_32, ml_backend__ml_tag_switch__Statement_20, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_41_41, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_34);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_tag_switch__succeeded;

        if ((ml_backend__ml_tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_3 = ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2;
        else
          {
            MR_Word ml_backend__ml_tag_switch__Entry_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tag_switch__Entries_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ml_backend__ml_tag_switch__Stag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Entry_7, (MR_Integer) 0)));
            MR_Word ml_backend__ml_tag_switch__CaseId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__Entry_7, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_19_19;
            MR_Word ml_backend__ml_tag_switch__OldEntry_12;
            MR_Box ml_backend__ml_tag_switch__conv0_OldEntry_12;

            {
              ml_backend__ml_tag_switch__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0, ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_11)), &ml_backend__ml_tag_switch__conv0_OldEntry_12);
            }
            if (ml_backend__ml_tag_switch__succeeded)
              {
                ml_backend__ml_tag_switch__OldEntry_12 = ((MR_Word) ml_backend__ml_tag_switch__conv0_OldEntry_12);
                ml_backend__ml_tag_switch__succeeded = MR_TRUE;
              }
            if (ml_backend__ml_tag_switch__succeeded)
              {
                MR_Integer ml_backend__ml_tag_switch__OldFirstStag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__OldEntry_12, (MR_Integer) 0)));
                MR_Word ml_backend__ml_tag_switch__OldLaterStags_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__OldEntry_12, (MR_Integer) 1)));
                MR_Word ml_backend__ml_tag_switch__NewEntry_15;
                MR_Word ml_backend__ml_tag_switch__V_18_18;

                {
                  ml_backend__ml_tag_switch__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__V_18_18, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Stag_10));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__V_18_18, 1) = ((MR_Box) (ml_backend__ml_tag_switch__OldLaterStags_14));
                }
                {
                  ml_backend__ml_tag_switch__NewEntry_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__NewEntry_15, 0) = ((MR_Box) (ml_backend__ml_tag_switch__OldFirstStag_13));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__NewEntry_15, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_18_18));
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_11)), ((MR_Box) (ml_backend__ml_tag_switch__NewEntry_15)), ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2, &ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_19_19);
                }
              }
            else
              {
                MR_Word ml_backend__ml_tag_switch__NewEntry_23;

                {
                  ml_backend__ml_tag_switch__NewEntry_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__NewEntry_23, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Stag_10));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__NewEntry_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_11)), ((MR_Box) (ml_backend__ml_tag_switch__NewEntry_23)), ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2, &ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_19_19);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_tag_switch__HeadVar__1__tmp_copy_1 = ml_backend__ml_tag_switch__Entries_8;
              MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0__tmp_copy_2 = ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_19_19;

              ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0_2 = ml_backend__ml_tag_switch__STATE_VARIABLE_RevMap_0__tmp_copy_2;
              ml_backend__ml_tag_switch__HeadVar__1_1 = ml_backend__ml_tag_switch__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_tag_switch__lookup_code_map_6_p_0(
  MR_Word ml_backend__ml_tag_switch__CodeMap_7,
  MR_Word ml_backend__ml_tag_switch__CaseId_8,
  MR_Word ml_backend__ml_tag_switch__CodeModel_9,
  MR_Word * ml_backend__ml_tag_switch__Statement_10,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_14,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_15)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__MaybeCode_12;
    MR_Box ml_backend__ml_tag_switch__conv0_MaybeCode_12;

    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0, ml_backend__ml_tag_switch__CodeMap_7, ((MR_Box) (ml_backend__ml_tag_switch__CaseId_8)), &ml_backend__ml_tag_switch__conv0_MaybeCode_12);
    }
    ml_backend__ml_tag_switch__MaybeCode_12 = ((MR_Word) ml_backend__ml_tag_switch__conv0_MaybeCode_12);
    if (((MR_tag((MR_Word) ml_backend__ml_tag_switch__MaybeCode_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_tag_switch__Goal_13 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__MaybeCode_12), (MR_Integer) 1);

        {
          ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_tag_switch__CodeModel_9, ml_backend__ml_tag_switch__Goal_13, ml_backend__ml_tag_switch__Statement_10, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_14, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_15);
        }
      }
    else
      {
        *ml_backend__ml_tag_switch__Statement_10 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_tag_switch__MaybeCode_12), (MR_Integer) 0);
        *ml_backend__ml_tag_switch__STATE_VARIABLE_Info_15 = ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_14;
      }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_tag_switch__make_ptag_match_1_f_0(
  MR_Integer ml_backend__ml_tag_switch__Ptag_3)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__HeadVar__2_2;
    MR_Word ml_backend__ml_tag_switch__V_4_4;
    MR_Word ml_backend__ml_tag_switch__V_5_5;

    {
      ml_backend__ml_tag_switch__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_tag_switch__V_5_5, 0) = ((MR_Box) (ml_backend__ml_tag_switch__Ptag_3));
    }
    {
      ml_backend__ml_tag_switch__V_4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_4_4, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_5_5));
    }
    {
      ml_backend__ml_tag_switch__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__HeadVar__2_2, 0) = ((MR_Box) (ml_backend__ml_tag_switch__V_4_4));
    }
    return ml_backend__ml_tag_switch__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_3(
  MR_Box ml_backend__ml_tag_switch__closure_arg,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_tag_switch__wrapper_arg_2;
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;
    MR_Word ml_backend__ml_tag_switch__conv1_HeadVar__2_2;

    {
      ml_backend__ml_tag_switch__conv1_HeadVar__2_2 = ml_backend__ml_tag_switch__make_ptag_match_1_f_0(((MR_Integer) ml_backend__ml_tag_switch__wrapper_arg_1));
    }
    ml_backend__ml_tag_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tag_switch__conv1_HeadVar__2_2));
    return ml_backend__ml_tag_switch__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2(
  MR_Box ml_backend__ml_tag_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;

    {
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__222__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_1(
  MR_Box ml_backend__ml_tag_switch__closure_arg)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;

    {
      ml_backend__ml_tag_switch__succeeded = ml_backend__ml_tag_switch__IntroducedFrom__pred__gen_ptag_case__200__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_tag_switch__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_case_10_p_0(
  MR_Word ml_backend__ml_tag_switch__PtagCase_11,
  MR_Word ml_backend__ml_tag_switch__CodeMap_12,
  MR_Word ml_backend__ml_tag_switch__Var_13,
  MR_Word ml_backend__ml_tag_switch__CanFail_14,
  MR_Word ml_backend__ml_tag_switch__CodeModel_15,
  MR_Word ml_backend__ml_tag_switch__PtagCountMap_16,
  MR_Word ml_backend__ml_tag_switch__Context_17,
  MR_Word * ml_backend__ml_tag_switch__MLDS_Case_18,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_71_71;
    MR_Integer ml_backend__ml_tag_switch__MainPtag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__PtagCase_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_tag_switch__OtherPtags_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__PtagCase_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_tag_switch__SecTagLocn_22;
    MR_Word ml_backend__ml_tag_switch__GoalMap_23;
    MR_Word ml_backend__ml_tag_switch__CountInfo_24;
    MR_Word ml_backend__ml_tag_switch__SecTagLocn1_25;
    MR_Integer ml_backend__ml_tag_switch__MaxSecondary_26;
    MR_Word ml_backend__ml_tag_switch__GoalList_27;
    MR_Word ml_backend__ml_tag_switch__Statement_30;
    MR_Word ml_backend__ml_tag_switch__MainPtagMatch_39;
    MR_Word ml_backend__ml_tag_switch__OtherPtagMatches_40;
    MR_Word ml_backend__ml_tag_switch__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__PtagCase_11, (MR_Integer) 2)));
    MR_Word ml_backend__ml_tag_switch__V_44_44;
    MR_Word ml_backend__ml_tag_switch__V_89_89;
    MR_Word ml_backend__ml_tag_switch__V_90_90;
    MR_Box ml_backend__ml_tag_switch__conv0_CountInfo_24;

    ml_backend__ml_tag_switch__SecTagLocn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_43_43, (MR_Integer) 0)));
    ml_backend__ml_tag_switch__GoalMap_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_43_43, (MR_Integer) 1)));
    ml_backend__ml_tag_switch__TypeCtorInfo_71_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[1], ml_backend__ml_tag_switch__PtagCountMap_16, ml_backend__ml_tag_switch__MainPtag_20, &ml_backend__ml_tag_switch__conv0_CountInfo_24);
    }
    ml_backend__ml_tag_switch__CountInfo_24 = ((MR_Word) ml_backend__ml_tag_switch__conv0_CountInfo_24);
    ml_backend__ml_tag_switch__SecTagLocn1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__CountInfo_24, (MR_Integer) 0)));
    ml_backend__ml_tag_switch__MaxSecondary_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__CountInfo_24, (MR_Integer) 1)));
    {
      ml_backend__ml_tag_switch__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 3) = ((MR_Box) (ml_backend__ml_tag_switch__SecTagLocn_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_44_44, 4) = ((MR_Box) (ml_backend__ml_tag_switch__SecTagLocn1_25));
    }
    {
      mercury__require__expect_4_p_0(ml_backend__ml_tag_switch__V_44_44, (MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) "secondary tag locations differ");
    }
    {
      mercury__map__to_assoc_list_2_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_71_71, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, ml_backend__ml_tag_switch__GoalMap_23, &ml_backend__ml_tag_switch__GoalList_27);
    }
    switch (ml_backend__ml_tag_switch__SecTagLocn_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_7_86;
          MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_8_87;
          MR_Word ml_backend__ml_tag_switch__CaseCanFail_34;
          MR_Word ml_backend__ml_tag_switch__GroupedGoalList_37;
          MR_Word ml_backend__ml_tag_switch__V_48_48;
          MR_Word ml_backend__ml_tag_switch__RevMap_84;
          MR_Word ml_backend__ml_tag_switch__V_85_85;
          MR_Word ml_backend__ml_tag_switch__CaseId_69;
          MR_Word ml_backend__ml_tag_switch__V_54_54;
          MR_Word ml_backend__ml_tag_switch__V_55_55;
          MR_Word ml_backend__ml_tag_switch___Stags_38;

          {
            ml_backend__ml_tag_switch__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 1) = ((MR_Box) (ml_backend__ml_tag_switch__gen_ptag_case_10_p_0_2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 3) = ((MR_Box) (ml_backend__ml_tag_switch__OtherPtags_21));
            MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mercury__require__expect_4_p_0(ml_backend__ml_tag_switch__V_48_48, (MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) ">1 ptag with secondary tag");
          }
          switch (ml_backend__ml_tag_switch__CanFail_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ml_backend__ml_tag_switch__GoalCount_35;
                MR_Integer ml_backend__ml_tag_switch__FullGoalCount_36;

                {
                  mercury__list__length_2_p_0((MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[2], ml_backend__ml_tag_switch__GoalList_27, &ml_backend__ml_tag_switch__GoalCount_35);
                }
                ml_backend__ml_tag_switch__FullGoalCount_36 = (ml_backend__ml_tag_switch__MaxSecondary_26 + (MR_Integer) 1);
                ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__FullGoalCount_36 == ml_backend__ml_tag_switch__GoalCount_35);
                if (ml_backend__ml_tag_switch__succeeded)
                  ml_backend__ml_tag_switch__CaseCanFail_34 = (MR_Integer) 1;
                else
                  ml_backend__ml_tag_switch__CaseCanFail_34 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_tag_switch__CaseCanFail_34 = (MR_Integer) 1;
              break;
          }
          ml_backend__ml_tag_switch__TypeCtorInfo_7_86 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
          ml_backend__ml_tag_switch__TypeCtorInfo_8_87 = (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0;
          {
            ml_backend__ml_tag_switch__V_85_85 = mercury__map__init_0_f_0(ml_backend__ml_tag_switch__TypeCtorInfo_7_86, ml_backend__ml_tag_switch__TypeCtorInfo_8_87);
          }
          {
            ml_backend__ml_tag_switch__build_stag_rev_map_3_p_0(ml_backend__ml_tag_switch__GoalList_27, ml_backend__ml_tag_switch__V_85_85, &ml_backend__ml_tag_switch__RevMap_84);
          }
          {
            mercury__map__to_assoc_list_2_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_7_86, ml_backend__ml_tag_switch__TypeCtorInfo_8_87, ml_backend__ml_tag_switch__RevMap_84, &ml_backend__ml_tag_switch__GroupedGoalList_37);
          }
          ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__CaseCanFail_34 == (MR_Integer) 1);
          if (ml_backend__ml_tag_switch__succeeded)
            {
              ml_backend__ml_tag_switch__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tag_switch__GroupedGoalList_37)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_tag_switch__succeeded)
                {
                  ml_backend__ml_tag_switch__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__GroupedGoalList_37, (MR_Integer) 0)));
                  ml_backend__ml_tag_switch__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__GroupedGoalList_37, (MR_Integer) 1)));
                  ml_backend__ml_tag_switch__succeeded = (ml_backend__ml_tag_switch__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (ml_backend__ml_tag_switch__succeeded)
                    {
                      ml_backend__ml_tag_switch__CaseId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_54_54, (MR_Integer) 0)));
                      ml_backend__ml_tag_switch___Stags_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_54_54, (MR_Integer) 1)));
                      ml_backend__ml_tag_switch__succeeded = MR_TRUE;
                    }
                }
            }
          if (ml_backend__ml_tag_switch__succeeded)
            {
              ml_backend__ml_tag_switch__lookup_code_map_6_p_0(ml_backend__ml_tag_switch__CodeMap_12, ml_backend__ml_tag_switch__CaseId_69, ml_backend__ml_tag_switch__CodeModel_15, &ml_backend__ml_tag_switch__Statement_30, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42);
            }
          else
            {
              ml_backend__ml_tag_switch__gen_stag_switch_11_p_0(ml_backend__ml_tag_switch__GroupedGoalList_37, ml_backend__ml_tag_switch__CodeMap_12, ml_backend__ml_tag_switch__MainPtag_20, ml_backend__ml_tag_switch__SecTagLocn_22, ml_backend__ml_tag_switch__Var_13, ml_backend__ml_tag_switch__CodeModel_15, ml_backend__ml_tag_switch__CaseCanFail_34, ml_backend__ml_tag_switch__Context_17, &ml_backend__ml_tag_switch__Statement_30, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42);
            }
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        if ((ml_backend__ml_tag_switch__GoalList_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) "no goal for non-shared tag");
              return;
            }
          }
        else
          {
            MR_Word ml_backend__ml_tag_switch__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__GoalList_27, (MR_Integer) 1)));
            MR_Word ml_backend__ml_tag_switch__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__GoalList_27, (MR_Integer) 0)));

            if ((ml_backend__ml_tag_switch__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word ml_backend__ml_tag_switch__CaseId_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_81_81, (MR_Integer) 1)));
                MR_Integer ml_backend__ml_tag_switch___Stag_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_81_81, (MR_Integer) 0)));

                {
                  ml_backend__ml_tag_switch__lookup_code_map_6_p_0(ml_backend__ml_tag_switch__CodeMap_12, ml_backend__ml_tag_switch__CaseId_29, ml_backend__ml_tag_switch__CodeModel_15, &ml_backend__ml_tag_switch__Statement_30, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_41, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42);
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_tag_switch", (MR_String) "predicate \140ml_backend.ml_tag_switch.gen_ptag_case\'/10", (MR_String) "more than one goal for non-shared tag");
                  return;
                }
              }
          }
        break;
    }
    {
      ml_backend__ml_tag_switch__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_tag_switch__V_90_90, 0) = ((MR_Box) (ml_backend__ml_tag_switch__MainPtag_20));
    }
    {
      ml_backend__ml_tag_switch__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__V_89_89, 1) = ((MR_Box) (ml_backend__ml_tag_switch__V_90_90));
    }
    {
      ml_backend__ml_tag_switch__MainPtagMatch_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__MainPtagMatch_39, 0) = ((MR_Box) (ml_backend__ml_tag_switch__V_89_89));
    }
    {
      ml_backend__ml_tag_switch__OtherPtagMatches_40 = mercury__list__map_2_f_0(ml_backend__ml_tag_switch__TypeCtorInfo_71_71, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0, (MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[5], ml_backend__ml_tag_switch__OtherPtags_21);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_tag_switch__MLDS_Case_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_tag_switch__MainPtagMatch_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_tag_switch__OtherPtagMatches_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_tag_switch__Statement_30));
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(
  MR_Word ml_backend__ml_tag_switch__HeadVar__1_1,
  MR_Word ml_backend__ml_tag_switch__CodeMap_2,
  MR_Word ml_backend__ml_tag_switch__Var_3,
  MR_Word ml_backend__ml_tag_switch__CanFail_4,
  MR_Word ml_backend__ml_tag_switch__CodeModel_5,
  MR_Word ml_backend__ml_tag_switch__PtagCountMap_6,
  MR_Word ml_backend__ml_tag_switch__Context_7,
  MR_Word * ml_backend__ml_tag_switch__HeadVar__8_8,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_9,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_10)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;

    if ((ml_backend__ml_tag_switch__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_tag_switch__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_tag_switch__STATE_VARIABLE_Info_10 = ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_9;
      }
    else
      {
        MR_Word ml_backend__ml_tag_switch__Ptag_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_tag_switch__Ptags_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_tag_switch__MLDS_Case_28;
        MR_Word ml_backend__ml_tag_switch__MLDS_Cases_29;
        MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_33_33;

        {
          ml_backend__ml_tag_switch__gen_ptag_case_10_p_0(ml_backend__ml_tag_switch__Ptag_20, ml_backend__ml_tag_switch__CodeMap_2, ml_backend__ml_tag_switch__Var_3, ml_backend__ml_tag_switch__CanFail_4, ml_backend__ml_tag_switch__CodeModel_5, ml_backend__ml_tag_switch__PtagCountMap_6, ml_backend__ml_tag_switch__Context_7, &ml_backend__ml_tag_switch__MLDS_Case_28, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_9, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_33_33);
        }
        {
          ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(ml_backend__ml_tag_switch__Ptags_21, ml_backend__ml_tag_switch__CodeMap_2, ml_backend__ml_tag_switch__Var_3, ml_backend__ml_tag_switch__CanFail_4, ml_backend__ml_tag_switch__CodeModel_5, ml_backend__ml_tag_switch__PtagCountMap_6, ml_backend__ml_tag_switch__Context_7, &ml_backend__ml_tag_switch__MLDS_Cases_29, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_33_33, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_tag_switch__HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tag_switch__MLDS_Case_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_tag_switch__MLDS_Cases_29));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_4_p_0(
  MR_Word ml_backend__ml_tag_switch___CaseId_5,
  MR_Word ml_backend__ml_tag_switch__Ptags_6,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_0_9,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_10)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;

    {
      ml_backend__ml_tag_switch__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_97_110_121_95_115_112_108_105_116_95_99_97_115_101_115_95_50_95_95_91_49_93_95_48_4_p_0(ml_backend__ml_tag_switch__Ptags_6, ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_0_9, ml_backend__ml_tag_switch__STATE_VARIABLE_IsAnyCaseSplit_10);
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0_1(
  MR_Box ml_backend__ml_tag_switch__closure_arg,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;
    MR_Word ml_backend__ml_tag_switch__conv0_STATE_VARIABLE_IsAnyCaseSplit_10;

    {
      ml_backend__ml_tag_switch__find_any_split_cases_2_4_p_0(((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_2), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3), &ml_backend__ml_tag_switch__conv0_STATE_VARIABLE_IsAnyCaseSplit_10);
    }
    *ml_backend__ml_tag_switch__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_STATE_VARIABLE_IsAnyCaseSplit_10));
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__find_any_split_cases_2_p_0(
  MR_Word ml_backend__ml_tag_switch__CaseIdPtagsMap_3,
  MR_Word * ml_backend__ml_tag_switch__IsAnyCaseSplit_4)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Box ml_backend__ml_tag_switch__conv1_IsAnyCaseSplit_4;

    {
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch_scalar_common_2[0], (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0, (MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[4], ml_backend__ml_tag_switch__CaseIdPtagsMap_3, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_tag_switch__conv1_IsAnyCaseSplit_4);
    }
    *ml_backend__ml_tag_switch__IsAnyCaseSplit_4 = ((MR_Word) ml_backend__ml_tag_switch__conv1_IsAnyCaseSplit_4);
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_1(
  void * ml_backend__ml_tag_switch__env_ptr_arg)
{
  {
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s * ml_backend__ml_tag_switch__env_ptr = (struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s *) ml_backend__ml_tag_switch__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_2(
  void * ml_backend__ml_tag_switch__env_ptr_arg)
{
  {
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s * ml_backend__ml_tag_switch__env_ptr = (struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s *) ml_backend__ml_tag_switch__env_ptr_arg;

    {
      MR_Word ml_backend__ml_tag_switch__V_35_35;
      MR_String ml_backend__ml_tag_switch__V_34_34;

      (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Label_33, (MR_Integer) 0)));
      ml_backend__ml_tag_switch__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Label_33, (MR_Integer) 1)));
      (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded)
        {
          ml_backend__ml_tag_switch__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__V_36_36, (MR_Integer) 1)));
          {
            ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_1(ml_backend__ml_tag_switch__env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_3(
  void * ml_backend__ml_tag_switch__env_ptr_arg)
{
  {
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s * ml_backend__ml_tag_switch__env_ptr = (struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s *) ml_backend__ml_tag_switch__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__commit_0) == 0)
      {
        {
          ml_backend__ml_util__statement_contains_statement_2_p_0((ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Statement_20, &(ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Label_33, ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_2, ml_backend__ml_tag_switch__env_ptr);
        }
        (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_tag_switch__env_ptr)->ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0(
  MR_Word ml_backend__ml_tag_switch__CodeModel_10,
  MR_Word ml_backend__ml_tag_switch__TaggedCase_11,
  MR_Word * ml_backend__ml_tag_switch__CaseId_12,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_0_25,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_26,
  MR_Word ml_backend__ml_tag_switch__Info0_15,
  MR_Word * ml_backend__ml_tag_switch__Info_16)
{
  {
    struct ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0_s ml_backend__ml_tag_switch__env;

    {
      MR_Word ml_backend__ml_tag_switch__OtherTaggedConsIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__TaggedCase_11, (MR_Integer) 1)));
      MR_Word ml_backend__ml_tag_switch__Goal_19;
      MR_Word ml_backend__ml_tag_switch__Info1_21;
      MR_Word ml_backend__ml_tag_switch__MaybeCode_24;
      MR_Word ml_backend__ml_tag_switch___MainTaggedConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__TaggedCase_11, (MR_Integer) 0)));
      MR_Word ml_backend__ml_tag_switch__V_22_22;
      MR_Word ml_backend__ml_tag_switch__V_23_23;

      *ml_backend__ml_tag_switch__CaseId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__TaggedCase_11, (MR_Integer) 2)));
      ml_backend__ml_tag_switch__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__TaggedCase_11, (MR_Integer) 3)));
      {
        ml_backend__ml_code_gen__ml_gen_goal_as_branch_block_5_p_0(ml_backend__ml_tag_switch__CodeModel_10, ml_backend__ml_tag_switch__Goal_19, &(ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Statement_20, ml_backend__ml_tag_switch__Info0_15, &ml_backend__ml_tag_switch__Info1_21);
      }
      (ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_tag_switch__OtherTaggedConsIds_18)) == (MR_mktag((MR_Integer) 1)));
      if ((ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded)
        {
          ml_backend__ml_tag_switch__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__OtherTaggedConsIds_18, (MR_Integer) 0)));
          ml_backend__ml_tag_switch__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__OtherTaggedConsIds_18, (MR_Integer) 1)));
          {
            ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_3(&ml_backend__ml_tag_switch__env);
          }
        }
      if ((ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__succeeded)
        {
          ml_backend__ml_tag_switch__MaybeCode_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_tag_switch__Goal_19);
          *ml_backend__ml_tag_switch__Info_16 = ml_backend__ml_tag_switch__Info0_15;
        }
      else
        {
          ml_backend__ml_tag_switch__MaybeCode_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) (ml_backend__ml_tag_switch__env).ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0_env_0__Statement_20);
          *ml_backend__ml_tag_switch__Info_16 = ml_backend__ml_tag_switch__Info1_21;
        }
      {
        mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0, ((MR_Box) (*ml_backend__ml_tag_switch__CaseId_12)), ((MR_Box) (ml_backend__ml_tag_switch__MaybeCode_24)), ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_0_25, ml_backend__ml_tag_switch__STATE_VARIABLE_CodeMap_26);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0_1(
  MR_Box ml_backend__ml_tag_switch__closure_arg,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_1,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_2,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_3,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_4,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_5,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_6,
  MR_Box ml_backend__ml_tag_switch__wrapper_arg_7,
  MR_Box * ml_backend__ml_tag_switch__wrapper_arg_8)
{
  {
    MR_Box ml_backend__ml_tag_switch__closure = ml_backend__ml_tag_switch__closure_arg;
    MR_Word ml_backend__ml_tag_switch__conv2_CaseId_12;
    MR_Word ml_backend__ml_tag_switch__conv1_STATE_VARIABLE_CodeMap_26;
    MR_Word ml_backend__ml_tag_switch__conv0_Info_16;

    {
      ml_backend__ml_tag_switch__gen_tagged_case_code_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_1), &ml_backend__ml_tag_switch__conv2_CaseId_12, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_3), &ml_backend__ml_tag_switch__conv1_STATE_VARIABLE_CodeMap_26, ((MR_Word) ml_backend__ml_tag_switch__wrapper_arg_7), &ml_backend__ml_tag_switch__conv0_Info_16);
    }
    *ml_backend__ml_tag_switch__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_tag_switch__conv2_CaseId_12));
    *ml_backend__ml_tag_switch__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_tag_switch__conv1_STATE_VARIABLE_CodeMap_26));
    *ml_backend__ml_tag_switch__wrapper_arg_8 = ((MR_Box) (ml_backend__ml_tag_switch__conv0_Info_16));
  }
}

void MR_CALL 
ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0(
  MR_Word ml_backend__ml_tag_switch__TaggedCases_9,
  MR_Word ml_backend__ml_tag_switch__Var_10,
  MR_Word ml_backend__ml_tag_switch__CodeModel_11,
  MR_Word ml_backend__ml_tag_switch__CanFail_12,
  MR_Word ml_backend__ml_tag_switch__Context_13,
  MR_Word * ml_backend__ml_tag_switch__Statements_14,
  MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35,
  MR_Word * ml_backend__ml_tag_switch__STATE_VARIABLE_Info_36)
{
  {
    MR_bool ml_backend__ml_tag_switch__succeeded;
    MR_Word ml_backend__ml_tag_switch__TypeCtorInfo_57_57;
    MR_Word ml_backend__ml_tag_switch__VarLval_16;
    MR_Word ml_backend__ml_tag_switch__VarRval_17;
    MR_Word ml_backend__ml_tag_switch__PTagRval_18;
    MR_Word ml_backend__ml_tag_switch__ModuleInfo_19;
    MR_Word ml_backend__ml_tag_switch__Type_20;
    MR_Integer ml_backend__ml_tag_switch__MaxPrimary_21;
    MR_Word ml_backend__ml_tag_switch__PtagCountMap_22;
    MR_Word ml_backend__ml_tag_switch__CodeMap_23;
    MR_Word ml_backend__ml_tag_switch__PtagCaseMap_26;
    MR_Word ml_backend__ml_tag_switch__PtagCaseList_27;
    MR_Word ml_backend__ml_tag_switch__PtagCases0_28;
    MR_Word ml_backend__ml_tag_switch__PtagCases_29;
    MR_Word ml_backend__ml_tag_switch__Default_30;
    MR_Word ml_backend__ml_tag_switch__Range_31;
    MR_Word ml_backend__ml_tag_switch__SwitchStmt0_32;
    MR_Word ml_backend__ml_tag_switch__MLDS_Context_33;
    MR_Word ml_backend__ml_tag_switch__SwitchStatement_34;
    MR_Word ml_backend__ml_tag_switch__V_39_39;
    MR_Word ml_backend__ml_tag_switch__V_40_40;
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42_42;
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_43_43;
    MR_Word ml_backend__ml_tag_switch__STATE_VARIABLE_Info_44_44;
    MR_Word ml_backend__ml_tag_switch___CaseIdPtagsMap_25;
    MR_Box ml_backend__ml_tag_switch__conv5_CodeMap_23;
    MR_Box ml_backend__ml_tag_switch__conv4_V_24_24;
    MR_Box ml_backend__ml_tag_switch__conv3_STATE_VARIABLE_Info_42_42;

    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35, ml_backend__ml_tag_switch__Var_10, &ml_backend__ml_tag_switch__VarLval_16);
    }
    {
      ml_backend__ml_tag_switch__VarRval_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__VarRval_17, 0) = ((MR_Box) (ml_backend__ml_tag_switch__VarLval_16));
    }
    {
      ml_backend__ml_tag_switch__PTagRval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__PTagRval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__PTagRval_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_tag_switch_scalar_common_3[0])));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__PTagRval_18, 2) = ((MR_Box) (ml_backend__ml_tag_switch__VarRval_17));
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35, &ml_backend__ml_tag_switch__ModuleInfo_19);
    }
    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35, ml_backend__ml_tag_switch__Var_10, &ml_backend__ml_tag_switch__Type_20);
    }
    {
      backend_libs__switch_util__get_ptag_counts_4_p_0(ml_backend__ml_tag_switch__Type_20, ml_backend__ml_tag_switch__ModuleInfo_19, &ml_backend__ml_tag_switch__MaxPrimary_21, &ml_backend__ml_tag_switch__PtagCountMap_22);
    }
    {
      ml_backend__ml_tag_switch__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_39_39, 0) = ((MR_Box) (&ml_backend__ml_tag_switch_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_39_39, 1) = ((MR_Box) (ml_backend__ml_tag_switch__ml_generate_tag_switch_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_tag_switch__V_39_39, 3) = ((MR_Box) (ml_backend__ml_tag_switch__CodeModel_11));
    }
    ml_backend__ml_tag_switch__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0;
    {
      ml_backend__ml_tag_switch__V_40_40 = mercury__map__init_0_f_0(ml_backend__ml_tag_switch__TypeCtorInfo_57_57, (MR_Word) &ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0);
    }
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      backend_libs__switch_util__group_cases_by_ptag_10_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_57_57, (MR_Word) &ml_backend__ml_tag_switch_scalar_common_1[0], (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_tag_switch__TaggedCases_9, ml_backend__ml_tag_switch__V_39_39, ((MR_Box) (ml_backend__ml_tag_switch__V_40_40)), &ml_backend__ml_tag_switch__conv5_CodeMap_23, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_tag_switch__conv4_V_24_24, ((MR_Box) (ml_backend__ml_tag_switch__STATE_VARIABLE_Info_0_35)), &ml_backend__ml_tag_switch__conv3_STATE_VARIABLE_Info_42_42, &ml_backend__ml_tag_switch___CaseIdPtagsMap_25, &ml_backend__ml_tag_switch__PtagCaseMap_26);
    }
    ml_backend__ml_tag_switch__CodeMap_23 = ((MR_Word) ml_backend__ml_tag_switch__conv5_CodeMap_23);
    ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42_42 = ((MR_Word) ml_backend__ml_tag_switch__conv3_STATE_VARIABLE_Info_42_42);
    {
      backend_libs__switch_util__order_ptags_by_count_3_p_0(ml_backend__ml_tag_switch__TypeCtorInfo_57_57, ml_backend__ml_tag_switch__PtagCountMap_22, ml_backend__ml_tag_switch__PtagCaseMap_26, &ml_backend__ml_tag_switch__PtagCaseList_27);
    }
    {
      ml_backend__ml_tag_switch__gen_ptag_cases_10_p_0(ml_backend__ml_tag_switch__PtagCaseList_27, ml_backend__ml_tag_switch__CodeMap_23, ml_backend__ml_tag_switch__Var_10, ml_backend__ml_tag_switch__CanFail_12, ml_backend__ml_tag_switch__CodeModel_11, ml_backend__ml_tag_switch__PtagCountMap_22, ml_backend__ml_tag_switch__Context_13, &ml_backend__ml_tag_switch__PtagCases0_28, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_42_42, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_43_43);
    }
    {
      mercury__list__sort_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0, ml_backend__ml_tag_switch__PtagCases0_28, &ml_backend__ml_tag_switch__PtagCases_29);
    }
    {
      ml_backend__ml_switch_gen__ml_switch_generate_default_6_p_0(ml_backend__ml_tag_switch__CanFail_12, ml_backend__ml_tag_switch__CodeModel_11, ml_backend__ml_tag_switch__Context_13, &ml_backend__ml_tag_switch__Default_30, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_43_43, &ml_backend__ml_tag_switch__STATE_VARIABLE_Info_44_44);
    }
    {
      ml_backend__ml_tag_switch__Range_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__Range_31, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), ml_backend__ml_tag_switch__Range_31, 1) = ((MR_Box) (ml_backend__ml_tag_switch__MaxPrimary_21));
    }
    {
      ml_backend__ml_tag_switch__SwitchStmt0_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 2) = ((MR_Box) (ml_backend__ml_tag_switch__PTagRval_18));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 3) = ((MR_Box) (ml_backend__ml_tag_switch__Range_31));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 4) = ((MR_Box) (ml_backend__ml_tag_switch__PtagCases_29));
      MR_hl_field(MR_mktag(3), ml_backend__ml_tag_switch__SwitchStmt0_32, 5) = ((MR_Box) (ml_backend__ml_tag_switch__Default_30));
    }
    {
      ml_backend__ml_tag_switch__MLDS_Context_33 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_tag_switch__Context_13);
    }
    {
      ml_backend__ml_simplify_switch__ml_simplify_switch_5_p_0(ml_backend__ml_tag_switch__SwitchStmt0_32, ml_backend__ml_tag_switch__MLDS_Context_33, &ml_backend__ml_tag_switch__SwitchStatement_34, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_44_44, ml_backend__ml_tag_switch__STATE_VARIABLE_Info_36);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_tag_switch__Statements_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_tag_switch__SwitchStatement_34));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

void mercury__ml_backend__ml_tag_switch__init(void)
{
}

void mercury__ml_backend__ml_tag_switch__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_code_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_is_a_case_split_between_ptags_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_maybe_code_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stag_rev_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_tag_switch__ml_backend__ml_tag_switch__type_ctor_info_stags_0);
}

void mercury__ml_backend__ml_tag_switch__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_tag_switch. */
