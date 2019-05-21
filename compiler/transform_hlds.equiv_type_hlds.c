/*
** Automatically generated from `equiv_type_hlds.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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


/* :- module transform_hlds.equiv_type_hlds. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__equiv_type_hlds__init
ENDINIT
*/

#include "transform_hlds.equiv_type_hlds.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0[6];

static const MR_ConstString transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0[1];

static const MR_Integer transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0[1];

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal_expr__1521__1_2_p_0(
  MR_Word transform_hlds__equiv_type_hlds__PolySpecs_95,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_153);

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1362__1_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__1_38,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39,
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40,
  MR_Tuple transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41,
  MR_Tuple * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42);

static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_51_54_50_95_95_49_95_95_91_50_93_95_48_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39,
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40,
  MR_Tuple transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41,
  MR_Tuple * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42);

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__596__1_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeMap_30,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_99,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_100);

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__590__1_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__1_61,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_62,
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_63,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__4_64,
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_65);

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0(
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
  MR_Word transform_hlds__equiv_type_hlds__MayOccur_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
  MR_Word * transform_hlds__equiv_type_hlds__Found_2,
  MR_Word * transform_hlds__equiv_type_hlds__MayOccur_3);

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
  MR_Word transform_hlds__equiv_type_hlds__Type0_7,
  MR_Word * transform_hlds__equiv_type_hlds__Type_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_11,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_12);

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_8,
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9,
  MR_Word transform_hlds__equiv_type_hlds__Type0_10,
  MR_Word * transform_hlds__equiv_type_hlds__Type_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_36,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_37);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_44,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_45,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__GoalExpr0_8,
  MR_Word * transform_hlds__equiv_type_hlds__GoalExpr_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__Goal0_8,
  MR_Word * transform_hlds__equiv_type_hlds__Goal_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_32,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__Uni0_8,
  MR_Word * transform_hlds__equiv_type_hlds__Uni_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_37,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_38);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__UnifyMode0_8,
  MR_Word * transform_hlds__equiv_type_hlds__UnifyMode_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_from_to_insts_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__FromToInsts0_10,
  MR_Word * transform_hlds__equiv_type_hlds__FromToInsts_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_21,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_22,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_7,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__PredId_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_31,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_32);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
  MR_Word transform_hlds__equiv_type_hlds__CtorArg0_7,
  MR_Word * transform_hlds__equiv_type_hlds__CtorArg_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_4,
  MR_Word transform_hlds__equiv_type_hlds__ConsDefn0_5,
  MR_Word * transform_hlds__equiv_type_hlds__ConsDefn_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__ModuleName_8,
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_49,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_50,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_51,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_52);

static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9);

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_7,
  MR_Word transform_hlds__equiv_type_hlds__Defn_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_29,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_30,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_31,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_32);

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3);

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__Type_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_35,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__UnifyInstInfo0_8,
  MR_Word * transform_hlds__equiv_type_hlds__UnifyInstInfo_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__MergeInstInfo0_8,
  MR_Word * transform_hlds__equiv_type_hlds__MergeInstInfo_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_21,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__MaybeInstDet0_8,
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInstDet_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__MaybeInst0_8,
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInst_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__InstName0_10,
  MR_Word * transform_hlds__equiv_type_hlds__InstName_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20);

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1);

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(
  MR_Word transform_hlds__equiv_type_hlds__Inst_3);

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001(
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001(
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001(
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2);

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001(
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_1[14][3];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[2][5];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_4[4][9];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_5[4][6];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_6[1][10];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_7[2][8];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_8[1][12];




static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_1[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_2[2])),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_1[3]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_4[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "transform_hlds.equiv_type_hlds.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_recompilation_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_inst_cache_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001)),
  ((MR_Box) (transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001)),
  (MR_String) "transform_hlds.equiv_type_hlds",
  (MR_String) "inst_cache",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0[6] = {
  (MR_String) "ethri_module_info",
  (MR_String) "ethri_pred_info",
  (MR_String) "ethri_proc_info",
  (MR_String) "ethri_tvarset",
  (MR_String) "ethri_inst_cache",
  (MR_String) "ethri_recompute"
};

static const MR_DuFunctorDesc transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0 = {
  (MR_String) "replace_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1] = {
  &transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0
};

static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0[1] = {
  &transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0
};

static const MR_Integer transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_replace_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001)),
  ((MR_Box) (transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001)),
  (MR_String) "transform_hlds.equiv_type_hlds",
  (MR_String) "replace_info",
  {     transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0 },
  {     transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0
};

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal_expr__1521__1_2_p_0(
  MR_Word transform_hlds__equiv_type_hlds__PolySpecs_95,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_153)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    {
      transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[4], ((MR_Box) (transform_hlds__equiv_type_hlds__PolySpecs_95)), ((MR_Box) (transform_hlds__equiv_type_hlds__HeadVar__2_153)));
    }
    return transform_hlds__equiv_type_hlds__succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1362__1_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__1_38,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39,
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40,
  MR_Tuple transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41,
  MR_Tuple * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    {
      transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_51_54_50_95_95_49_95_95_91_50_93_95_48_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39, transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40, transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41, transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42);
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_51_54_50_95_95_49_95_95_91_50_93_95_48_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39,
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40,
  MR_Tuple transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41,
  MR_Tuple * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__Var_43;
    MR_Word transform_hlds__equiv_type_hlds__Changed1_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__TVarSet1_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__Cache1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41, (MR_Integer) 2)));
    MR_Word transform_hlds__equiv_type_hlds__InstChanged_53;
    MR_Word transform_hlds__equiv_type_hlds__TVarSet2_54;
    MR_Word transform_hlds__equiv_type_hlds__Cache2_55;

    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39, transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40, &transform_hlds__equiv_type_hlds__InstChanged_53, transform_hlds__equiv_type_hlds__TVarSet1_51, &transform_hlds__equiv_type_hlds__TVarSet2_54, transform_hlds__equiv_type_hlds__Cache1_52, &transform_hlds__equiv_type_hlds__Cache2_55);
    }
    {
      transform_hlds__equiv_type_hlds__Var_43 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_50, transform_hlds__equiv_type_hlds__InstChanged_53);
    }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet2_54));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache2_55));
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__596__1_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeMap_30,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_99,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_100)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_101_101 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Box transform_hlds__equiv_type_hlds__conv0_HeadVar__3_100;

    {
      mercury__map__lookup_3_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_101_101, transform_hlds__equiv_type_hlds__TypeCtorInfo_101_101, transform_hlds__equiv_type_hlds__TypeMap_30, ((MR_Box) (transform_hlds__equiv_type_hlds__HeadVar__2_99)), &transform_hlds__equiv_type_hlds__conv0_HeadVar__3_100);
    }
    *transform_hlds__equiv_type_hlds__HeadVar__3_100 = ((MR_Word) transform_hlds__equiv_type_hlds__conv0_HeadVar__3_100);
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__590__1_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__1_61,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_62,
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_63,
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__4_64,
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_65)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96;
    MR_Word transform_hlds__equiv_type_hlds__NewType_29;

    {
      transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__LambdaHeadVar__1_61, &transform_hlds__equiv_type_hlds__NewType_29, transform_hlds__equiv_type_hlds__LambdaHeadVar__4_64, transform_hlds__equiv_type_hlds__LambdaHeadVar__5_65);
    }
    transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      mercury__map__set_4_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96, transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96, ((MR_Box) (transform_hlds__equiv_type_hlds__LambdaHeadVar__1_61)), ((MR_Box) (transform_hlds__equiv_type_hlds__NewType_29)), transform_hlds__equiv_type_hlds__LambdaHeadVar__2_62, transform_hlds__equiv_type_hlds__LambdaHeadVar__3_63);
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Integer transform_hlds__equiv_type_hlds__CastX_21 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__2_2;
    MR_Integer transform_hlds__equiv_type_hlds__CastY_22 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__3_3;

    transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__CastX_21 == transform_hlds__equiv_type_hlds__CastY_22);
    if (transform_hlds__equiv_type_hlds__succeeded)
      *transform_hlds__equiv_type_hlds__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word transform_hlds__equiv_type_hlds__Var_16;

        {
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__equiv_type_hlds__Var_16, transform_hlds__equiv_type_hlds__ArgX1_4, transform_hlds__equiv_type_hlds__ArgY1_5);
        }
        transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__Var_16 == (MR_Integer) 0);
        transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
        if (transform_hlds__equiv_type_hlds__succeeded)
          *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__Var_16;
        else
          {
            MR_Word transform_hlds__equiv_type_hlds__Var_17;

            {
              hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__equiv_type_hlds__Var_17, transform_hlds__equiv_type_hlds__ArgX2_6, transform_hlds__equiv_type_hlds__ArgY2_7);
            }
            transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__Var_17 == (MR_Integer) 0);
            transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
            if (transform_hlds__equiv_type_hlds__succeeded)
              *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__Var_17;
            else
              {
                MR_Word transform_hlds__equiv_type_hlds__Var_18;

                {
                  hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__equiv_type_hlds__Var_18, transform_hlds__equiv_type_hlds__ArgX3_8, transform_hlds__equiv_type_hlds__ArgY3_9);
                }
                transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__Var_18 == (MR_Integer) 0);
                transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
                if (transform_hlds__equiv_type_hlds__succeeded)
                  *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__Var_18;
                else
                  {
                    MR_Word transform_hlds__equiv_type_hlds__Var_19;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2], &transform_hlds__equiv_type_hlds__Var_19, ((MR_Box) (transform_hlds__equiv_type_hlds__ArgX4_10)), ((MR_Box) (transform_hlds__equiv_type_hlds__ArgY4_11)));
                    }
                    transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__Var_19 == (MR_Integer) 0);
                    transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
                    if (transform_hlds__equiv_type_hlds__succeeded)
                      *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__Var_19;
                    else
                      {
                        MR_Word transform_hlds__equiv_type_hlds__Var_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], &transform_hlds__equiv_type_hlds__Var_20, ((MR_Box) (transform_hlds__equiv_type_hlds__ArgX5_12)), ((MR_Box) (transform_hlds__equiv_type_hlds__ArgY5_13)));
                        }
                        transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__Var_20 == (MR_Integer) 0);
                        transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
                        if (transform_hlds__equiv_type_hlds__succeeded)
                          *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__Var_20;
                        else
                          {
                            MR_Integer transform_hlds__equiv_type_hlds__Var_29 = (MR_Integer) transform_hlds__equiv_type_hlds__ArgX6_14;
                            MR_Integer transform_hlds__equiv_type_hlds__Var_30 = (MR_Integer) transform_hlds__equiv_type_hlds__ArgY6_15;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Var_29, transform_hlds__equiv_type_hlds__Var_30);
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
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Integer transform_hlds__equiv_type_hlds__CastX_15 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__1_1;
    MR_Integer transform_hlds__equiv_type_hlds__CastY_16 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__2_2;

    transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__CastX_15 == transform_hlds__equiv_type_hlds__CastY_16);
    if (transform_hlds__equiv_type_hlds__succeeded)
      transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_20_20;
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_21_21;
        MR_Word transform_hlds__equiv_type_hlds__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__equiv_type_hlds__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word transform_hlds__equiv_type_hlds__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 5)));

        {
          transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__equiv_type_hlds__ArgX1_3, transform_hlds__equiv_type_hlds__ArgY1_4);
        }
        if (transform_hlds__equiv_type_hlds__succeeded)
          {
            {
              transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__equiv_type_hlds__ArgX2_5, transform_hlds__equiv_type_hlds__ArgY2_6);
            }
            if (transform_hlds__equiv_type_hlds__succeeded)
              {
                {
                  transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__equiv_type_hlds__ArgX3_7, transform_hlds__equiv_type_hlds__ArgY3_8);
                }
                if (transform_hlds__equiv_type_hlds__succeeded)
                  {
                    transform_hlds__equiv_type_hlds__TypeInfo_20_20 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2];
                    {
                      transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_20_20, ((MR_Box) (transform_hlds__equiv_type_hlds__ArgX4_9)), ((MR_Box) (transform_hlds__equiv_type_hlds__ArgY4_10)));
                    }
                    if (transform_hlds__equiv_type_hlds__succeeded)
                      {
                        transform_hlds__equiv_type_hlds__TypeInfo_21_21 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3];
                        {
                          transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_21_21, ((MR_Box) (transform_hlds__equiv_type_hlds__ArgX5_11)), ((MR_Box) (transform_hlds__equiv_type_hlds__ArgY5_12)));
                        }
                        if (transform_hlds__equiv_type_hlds__succeeded)
                          transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__ArgX6_13 == transform_hlds__equiv_type_hlds__ArgY6_14);
                      }
                  }
              }
          }
      }
    return transform_hlds__equiv_type_hlds__succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar1_4 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar2_5 = transform_hlds__equiv_type_hlds__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], transform_hlds__equiv_type_hlds__HeadVar__1_1, ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar1_3 = transform_hlds__equiv_type_hlds__HeadVar__1_1;
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar2_4 = transform_hlds__equiv_type_hlds__HeadVar__2_2;

    {
      transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar2_4)));
    }
    return transform_hlds__equiv_type_hlds__succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0(
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
  MR_Word transform_hlds__equiv_type_hlds__MayOccur_2)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_1 ;
	MayOccur =  transform_hlds__equiv_type_hlds__MayOccur_2 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
  MR_Word * transform_hlds__equiv_type_hlds__Found_2,
  MR_Word * transform_hlds__equiv_type_hlds__MayOccur_3)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_1 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;

    if (type_in_inst_cache[hash].tice_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        MayOccur = type_in_inst_cache[hash].tice_may_occur;
    } else {
        Found = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	 *transform_hlds__equiv_type_hlds__Found_2  = Found;
	 *transform_hlds__equiv_type_hlds__MayOccur_3  = MayOccur;
}
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
  MR_Word transform_hlds__equiv_type_hlds__Type0_7,
  MR_Word * transform_hlds__equiv_type_hlds__Type_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_11,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_12)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds___Changed_10;

    {
      transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__equiv_type_hlds__Type0_7, transform_hlds__equiv_type_hlds__Type_8, &transform_hlds__equiv_type_hlds___Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_11, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_12);
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__Types0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__Type_21;
        MR_Word transform_hlds__equiv_type_hlds__Types_22;
        MR_Word transform_hlds__equiv_type_hlds__TypeChanged_25;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_30_30;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_31_31;

        {
          transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__HeadVar__2_2, transform_hlds__equiv_type_hlds__Type0_19, &transform_hlds__equiv_type_hlds__Type_21, &transform_hlds__equiv_type_hlds__TypeChanged_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_30_30);
        }
        {
          mercury__bool__or_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5, transform_hlds__equiv_type_hlds__TypeChanged_25, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_31_31);
        }
        {
          transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__HeadVar__2_2, transform_hlds__equiv_type_hlds__Types0_20, &transform_hlds__equiv_type_hlds__Types_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_31_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_30_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Types_22));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_8,
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9,
  MR_Word transform_hlds__equiv_type_hlds__Type0_10,
  MR_Word * transform_hlds__equiv_type_hlds__Type_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_36,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_37)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Type0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
          *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_37 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__TypeArgs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));
          MR_Word transform_hlds__equiv_type_hlds__TypeArgs_20;
          MR_Word transform_hlds__equiv_type_hlds__ArgsChanged_21;
          MR_Integer transform_hlds__equiv_type_hlds__Arity_22;
          MR_Word transform_hlds__equiv_type_hlds__TypeCtor_23;
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45;
          MR_Word transform_hlds__equiv_type_hlds__AlreadyExpanded_66;
          MR_Word transform_hlds__equiv_type_hlds__Params0_69;
          MR_Word transform_hlds__equiv_type_hlds__Body0_70;
          MR_Word transform_hlds__equiv_type_hlds__Renaming_71;
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39_80;
          MR_Word transform_hlds__equiv_type_hlds__EqvTypeBody_67;
          MR_Word transform_hlds__equiv_type_hlds__EqvVarSet_68;
          MR_Box transform_hlds__equiv_type_hlds__conv0_EqvTypeBody_67;

          {
            transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__TypeArgs0_18, &transform_hlds__equiv_type_hlds__TypeArgs_20, (MR_Integer) 0, &transform_hlds__equiv_type_hlds__ArgsChanged_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45);
          }
          {
            transform_hlds__equiv_type_hlds__Arity_22 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__equiv_type_hlds__TypeArgs_20);
          }
          {
            transform_hlds__equiv_type_hlds__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_23, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__SymName_17));
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_23, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Arity_22));
          }
          {
            transform_hlds__equiv_type_hlds__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_23)), transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9);
          }
          if (transform_hlds__equiv_type_hlds__succeeded)
            transform_hlds__equiv_type_hlds__AlreadyExpanded_66 = (MR_Integer) 1;
          else
            transform_hlds__equiv_type_hlds__AlreadyExpanded_66 = (MR_Integer) 0;
          {
            transform_hlds__equiv_type_hlds__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, transform_hlds__equiv_type_hlds__TypeEqvMap_8, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_23)), &transform_hlds__equiv_type_hlds__conv0_EqvTypeBody_67);
          }
          if (transform_hlds__equiv_type_hlds__succeeded)
            {
              transform_hlds__equiv_type_hlds__EqvTypeBody_67 = ((MR_Word) transform_hlds__equiv_type_hlds__conv0_EqvTypeBody_67);
              transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
            }
          if (transform_hlds__equiv_type_hlds__succeeded)
            {
              transform_hlds__equiv_type_hlds__EqvVarSet_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__EqvTypeBody_67, (MR_Integer) 0)));
              transform_hlds__equiv_type_hlds__Params0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__EqvTypeBody_67, (MR_Integer) 1)));
              transform_hlds__equiv_type_hlds__Body0_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__EqvTypeBody_67, (MR_Integer) 2)));
              {
                parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45, transform_hlds__equiv_type_hlds__EqvVarSet_68, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39_80, &transform_hlds__equiv_type_hlds__Renaming_71);
              }
              transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__AlreadyExpanded_66 == (MR_Integer) 0);
            }
          if (transform_hlds__equiv_type_hlds__succeeded)
            {
              MR_Word transform_hlds__equiv_type_hlds__TypeInfo_45_86 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[3];
              MR_Word transform_hlds__equiv_type_hlds__Params_72;
              MR_Word transform_hlds__equiv_type_hlds__Body1_73;
              MR_Word transform_hlds__equiv_type_hlds__Subst_74;
              MR_Word transform_hlds__equiv_type_hlds__Body_75;
              MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_76;
              MR_Word transform_hlds__equiv_type_hlds___BodyChanged_77;

              {
                mercury__map__apply_to_list_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_45_86, transform_hlds__equiv_type_hlds__TypeInfo_45_86, transform_hlds__equiv_type_hlds__Params0_69, transform_hlds__equiv_type_hlds__Renaming_71, &transform_hlds__equiv_type_hlds__Params_72);
              }
              {
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(transform_hlds__equiv_type_hlds__Renaming_71, transform_hlds__equiv_type_hlds__Body0_70, &transform_hlds__equiv_type_hlds__Body1_73);
              }
              {
                mercury__map__from_corresponding_lists_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_45_86, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__equiv_type_hlds__Params_72, transform_hlds__equiv_type_hlds__TypeArgs_20, &transform_hlds__equiv_type_hlds__Subst_74);
              }
              {
                parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(transform_hlds__equiv_type_hlds__Subst_74, transform_hlds__equiv_type_hlds__Body1_73, &transform_hlds__equiv_type_hlds__Body_75);
              }
              {
                transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_76, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_23));
                MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_76, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9));
              }
              {
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_76, transform_hlds__equiv_type_hlds__Body_75, transform_hlds__equiv_type_hlds__Type_11, &transform_hlds__equiv_type_hlds___BodyChanged_77, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39_80, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_37);
              }
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 1;
            }
          else
            {
              switch (transform_hlds__equiv_type_hlds__ArgsChanged_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__equiv_type_hlds__SymName_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_23, (MR_Integer) 0)));
                    MR_Integer transform_hlds__equiv_type_hlds___Arity_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_23, (MR_Integer) 1)));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__equiv_type_hlds__Type_11 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__SymName_78));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeArgs_20));
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_19));
                    }
                  }
                  break;
              }
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_37 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45;
              *transform_hlds__equiv_type_hlds__Changed_12 = transform_hlds__equiv_type_hlds__ArgsChanged_21;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__equiv_type_hlds__Args0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Args_32;
              MR_Word transform_hlds__equiv_type_hlds__Kind_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));

              {
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__Args0_31, &transform_hlds__equiv_type_hlds__Args_32, (MR_Integer) 0, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_37);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_32));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_47));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__equiv_type_hlds__PorF_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__ArgTypes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__HOInstInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 4)));
              MR_Word transform_hlds__equiv_type_hlds__ArgTypes_30;

              {
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__ArgTypes0_25, &transform_hlds__equiv_type_hlds__ArgTypes_30, (MR_Integer) 0, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_37);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__PorF_24));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__ArgTypes_30));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__HOInstInfo_26));
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Purity_27));
                    MR_hl_field(MR_mktag(3), base, 5) = NULL;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__equiv_type_hlds__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Kind_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Args0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Args_50;

              {
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__Args0_49, &transform_hlds__equiv_type_hlds__Args_50, (MR_Integer) 0, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_37);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_33));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_50));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_48));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__equiv_type_hlds__RawType0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__RawType_35;
              MR_Word transform_hlds__equiv_type_hlds__Kind_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));

              {
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__RawType0_34, &transform_hlds__equiv_type_hlds__RawType_35, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_37);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__RawType_35));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_51));
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
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv7_HeadVar__3_100;

    {
      transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__596__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv7_HeadVar__3_100);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv7_HeadVar__3_100));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv4_LambdaHeadVar__3_63;
    MR_Word transform_hlds__equiv_type_hlds__conv3_LambdaHeadVar__5_65;

    {
      transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__590__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv4_LambdaHeadVar__3_63, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv3_LambdaHeadVar__5_65);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv4_LambdaHeadVar__3_63));
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv3_LambdaHeadVar__5_65));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv1_Type_8;
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_VarSet_12;

    {
      transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv1_Type_8, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_VarSet_12);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_Type_8));
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_VarSet_12));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_44,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_45,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__TypeInfo_95_95;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97;
    MR_Word transform_hlds__equiv_type_hlds__ArgModes0_16;
    MR_Word transform_hlds__equiv_type_hlds__ArgModes_17;
    MR_Word transform_hlds__equiv_type_hlds__MaybeDeclModes0_19;
    MR_Word transform_hlds__equiv_type_hlds__VarTypes0_23;
    MR_Word transform_hlds__equiv_type_hlds__VarTypes_24;
    MR_Word transform_hlds__equiv_type_hlds__RttiVarMaps0_25;
    MR_Word transform_hlds__equiv_type_hlds__AllTypes_26;
    MR_Word transform_hlds__equiv_type_hlds__TypeMap_30;
    MR_Word transform_hlds__equiv_type_hlds__RttiVarMaps_31;
    MR_Word transform_hlds__equiv_type_hlds__Goal0_32;
    MR_Word transform_hlds__equiv_type_hlds__ReplaceInfo0_33;
    MR_Word transform_hlds__equiv_type_hlds__Goal_34;
    MR_Word transform_hlds__equiv_type_hlds__Changed_35;
    MR_Word transform_hlds__equiv_type_hlds__ReplaceInfo_36;
    MR_Word transform_hlds__equiv_type_hlds__Recompute_38;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_47_47;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54;
    MR_Word transform_hlds__equiv_type_hlds__Var_55;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57;
    MR_Word transform_hlds__equiv_type_hlds__Var_58;
    MR_Word transform_hlds__equiv_type_hlds__Var_59;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_60_60;
    MR_Word transform_hlds__equiv_type_hlds__Var_72;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_76_76;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_78_78;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79;
    MR_Word transform_hlds__equiv_type_hlds__Var_18;
    MR_Box transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_TVarSet_56_56;
    MR_Box transform_hlds__equiv_type_hlds__conv6_TypeMap_30;
    MR_Box transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_TVarSet_60_60;
    MR_Word transform_hlds__equiv_type_hlds___XXX_37;

    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_47_47);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__equiv_type_hlds__ArgModes0_16);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__ArgModes0_16, &transform_hlds__equiv_type_hlds__ArgModes_17, &transform_hlds__equiv_type_hlds__Var_18, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_47_47, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_45, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49);
    }
    {
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__equiv_type_hlds__ArgModes_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__equiv_type_hlds__MaybeDeclModes0_19);
    }
    if ((transform_hlds__equiv_type_hlds__MaybeDeclModes0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49;
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__DeclModes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeDeclModes0_19, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__DeclModes_21;
        MR_Word transform_hlds__equiv_type_hlds__Var_53;
        MR_Word transform_hlds__equiv_type_hlds__Var_22;

        {
          transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__DeclModes0_20, &transform_hlds__equiv_type_hlds__DeclModes_21, &transform_hlds__equiv_type_hlds__Var_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46);
        }
        {
          transform_hlds__equiv_type_hlds__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Var_53, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__DeclModes_21));
        }
        {
          hlds__hlds_pred__proc_info_set_maybe_declared_argmodes_3_p_0(transform_hlds__equiv_type_hlds__Var_53, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54);
        }
      }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__equiv_type_hlds__VarTypes0_23);
    }
    {
      transform_hlds__equiv_type_hlds__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_55, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_55, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_55, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_10));
    }
    transform_hlds__equiv_type_hlds__TypeInfo_95_95 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2];
    {
      hlds__vartypes__transform_foldl_var_types_5_p_0(transform_hlds__equiv_type_hlds__TypeInfo_95_95, transform_hlds__equiv_type_hlds__Var_55, transform_hlds__equiv_type_hlds__VarTypes0_23, &transform_hlds__equiv_type_hlds__VarTypes_24, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51)), &transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_TVarSet_56_56);
    }
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56 = ((MR_Word) transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_TVarSet_56_56);
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__equiv_type_hlds__VarTypes_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__equiv_type_hlds__RttiVarMaps0_25);
    }
    {
      hlds__hlds_rtti__rtti_varmaps_types_2_p_0(transform_hlds__equiv_type_hlds__RttiVarMaps0_25, &transform_hlds__equiv_type_hlds__AllTypes_26);
    }
    {
      transform_hlds__equiv_type_hlds__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_58, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_58, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_58, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_10));
    }
    transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      transform_hlds__equiv_type_hlds__Var_59 = mercury__map__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97, transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97);
    }
    {
      mercury__list__foldl2_6_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[4], transform_hlds__equiv_type_hlds__TypeInfo_95_95, transform_hlds__equiv_type_hlds__Var_58, transform_hlds__equiv_type_hlds__AllTypes_26, ((MR_Box) (transform_hlds__equiv_type_hlds__Var_59)), &transform_hlds__equiv_type_hlds__conv6_TypeMap_30, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56)), &transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_TVarSet_60_60);
    }
    transform_hlds__equiv_type_hlds__TypeMap_30 = ((MR_Word) transform_hlds__equiv_type_hlds__conv6_TypeMap_30);
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_60_60 = ((MR_Word) transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_TVarSet_60_60);
    {
      transform_hlds__equiv_type_hlds__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_72, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_72, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_72, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeMap_30));
    }
    {
      hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(transform_hlds__equiv_type_hlds__Var_72, transform_hlds__equiv_type_hlds__RttiVarMaps0_25, &transform_hlds__equiv_type_hlds__RttiVarMaps_31);
    }
    {
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__equiv_type_hlds__RttiVarMaps_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73, &transform_hlds__equiv_type_hlds__Goal0_32);
    }
    {
      transform_hlds__equiv_type_hlds__ReplaceInfo0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_41));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_60_60));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 4) = ((MR_Box) (*transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 5) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__Goal0_32, &transform_hlds__equiv_type_hlds__Goal_34, &transform_hlds__equiv_type_hlds__Changed_35, transform_hlds__equiv_type_hlds__ReplaceInfo0_33, &transform_hlds__equiv_type_hlds__ReplaceInfo_36);
    }
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 0)));
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 1)));
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 2)));
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 3)));
    transform_hlds__equiv_type_hlds___XXX_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 4)));
    transform_hlds__equiv_type_hlds__Recompute_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 5)));
    switch (transform_hlds__equiv_type_hlds__Changed_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77;
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__equiv_type_hlds__Goal_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79);
        }
        break;
    }
    switch (transform_hlds__equiv_type_hlds__Recompute_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_81_81;

          {
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_81_81);
          }
          {
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_81_81, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42);
          }
        }
        break;
    }
    {
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_78_78, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_76_76, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_44);
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__T_18;
        MR_Word transform_hlds__equiv_type_hlds__Changed0_19;
        MR_Word transform_hlds__equiv_type_hlds__H_20;
        MR_Word transform_hlds__equiv_type_hlds__Changed1_21;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;
        MR_Word transform_hlds__equiv_type_hlds__MainConsId_33;
        MR_Word transform_hlds__equiv_type_hlds__OtherConsIds_34;
        MR_Word transform_hlds__equiv_type_hlds__CaseGoal0_35;
        MR_Word transform_hlds__equiv_type_hlds__CaseGoal_36;

        {
          transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__T0_14, &transform_hlds__equiv_type_hlds__T_18, &transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24);
        }
        transform_hlds__equiv_type_hlds__MainConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 0)));
        transform_hlds__equiv_type_hlds__OtherConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 1)));
        transform_hlds__equiv_type_hlds__CaseGoal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 2)));
        {
          transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__CaseGoal0_35, &transform_hlds__equiv_type_hlds__CaseGoal_36, &transform_hlds__equiv_type_hlds__Changed1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);
        }
        switch (transform_hlds__equiv_type_hlds__Changed1_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            transform_hlds__equiv_type_hlds__H_20 = transform_hlds__equiv_type_hlds__H0_13;
            break;
          case (MR_Integer) 1:
            {
              transform_hlds__equiv_type_hlds__H_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__MainConsId_33));
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__OtherConsIds_34));
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__CaseGoal_36));
            }
            break;
        }
        {
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__Changed1_21);
        }
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__H_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__T_18));
            }
            break;
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;

    {
      transform_hlds__equiv_type_hlds__succeeded = transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal_expr__1521__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 4))));
    }
    return transform_hlds__equiv_type_hlds__succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__GoalExpr0_8,
  MR_Word * transform_hlds__equiv_type_hlds__GoalExpr_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__equiv_type_hlds__NegGoal0_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__GoalExpr0_8), (MR_Integer) 0);
          MR_Word transform_hlds__equiv_type_hlds__NegGoal_20;

          {
            transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__NegGoal0_19, &transform_hlds__equiv_type_hlds__NegGoal_20, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
          }
          switch (*transform_hlds__equiv_type_hlds__Changed_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
              break;
            case (MR_Integer) 1:
              *transform_hlds__equiv_type_hlds__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__equiv_type_hlds__NegGoal_20);
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__TypeTable_68;
          MR_Word transform_hlds__equiv_type_hlds__VarTypes_69;
          MR_Word transform_hlds__equiv_type_hlds__RttiVarMaps_70;
          MR_Word transform_hlds__equiv_type_hlds__VarType_71;
          MR_Word transform_hlds__equiv_type_hlds__TypeCtorCat_72;
          MR_Word transform_hlds__equiv_type_hlds__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Var_140;
          MR_Word transform_hlds__equiv_type_hlds__Var_141;
          MR_Word transform_hlds__equiv_type_hlds__Var_142;
          MR_Word transform_hlds__equiv_type_hlds__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Var_458;
          MR_Word transform_hlds__equiv_type_hlds__Var_459;
          MR_Word transform_hlds__equiv_type_hlds__Var_460;
          MR_Word transform_hlds__equiv_type_hlds__Var_461;
          MR_Word transform_hlds__equiv_type_hlds__Var_462;
          MR_Word transform_hlds__equiv_type_hlds__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word transform_hlds__equiv_type_hlds__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word transform_hlds__equiv_type_hlds__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
          MR_Word transform_hlds__equiv_type_hlds__Var_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Var_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
          MR_Word transform_hlds__equiv_type_hlds__Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
          MR_Word transform_hlds__equiv_type_hlds__Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
          MR_Word transform_hlds__equiv_type_hlds__Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
          MR_Word transform_hlds__equiv_type_hlds__Var_330;
          MR_Word transform_hlds__equiv_type_hlds__Var_331;
          MR_Word transform_hlds__equiv_type_hlds__Var_332;
          MR_Word transform_hlds__equiv_type_hlds__Var_333;
          MR_Word transform_hlds__equiv_type_hlds__Var_334;
          MR_Word transform_hlds__equiv_type_hlds__Var_335;
          MR_Word transform_hlds__equiv_type_hlds__Var_336;
          MR_Word transform_hlds__equiv_type_hlds__Var_337;
          MR_Word transform_hlds__equiv_type_hlds__Var_338;
          MR_Word transform_hlds__equiv_type_hlds__Var_339;
          MR_Word transform_hlds__equiv_type_hlds__Var_340;
          MR_Word transform_hlds__equiv_type_hlds__Var_341;
          MR_Word transform_hlds__equiv_type_hlds__Var_342;
          MR_Word transform_hlds__equiv_type_hlds__Var_343;
          MR_Word transform_hlds__equiv_type_hlds__Var_344;
          MR_Word transform_hlds__equiv_type_hlds__Var_457;
          MR_Word transform_hlds__equiv_type_hlds__ConsId_74;
          MR_Word transform_hlds__equiv_type_hlds__TypeCtor_80;
          MR_Word transform_hlds__equiv_type_hlds__TypeDefn_81;
          MR_Word transform_hlds__equiv_type_hlds__Body_82;
          MR_Word transform_hlds__equiv_type_hlds__Var_143;
          MR_Word transform_hlds__equiv_type_hlds__Var_144;
          MR_Word transform_hlds__equiv_type_hlds__Var_345;
          MR_Word transform_hlds__equiv_type_hlds__Var_346;
          MR_Word transform_hlds__equiv_type_hlds__Var_347;
          MR_Word transform_hlds__equiv_type_hlds__Var_348;
          MR_Word transform_hlds__equiv_type_hlds__Var_73;
          MR_Word transform_hlds__equiv_type_hlds__Var_75;
          MR_Word transform_hlds__equiv_type_hlds__Var_76;
          MR_Word transform_hlds__equiv_type_hlds__Var_77;
          MR_Word transform_hlds__equiv_type_hlds__Var_78;
          MR_Word transform_hlds__equiv_type_hlds__Var_79;
          MR_Word transform_hlds__equiv_type_hlds__Var_83;

          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__equiv_type_hlds__Var_139, &transform_hlds__equiv_type_hlds__TypeTable_68);
          }
          transform_hlds__equiv_type_hlds__Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
          transform_hlds__equiv_type_hlds__Var_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
          transform_hlds__equiv_type_hlds__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
          transform_hlds__equiv_type_hlds__Var_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
          transform_hlds__equiv_type_hlds__Var_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
          transform_hlds__equiv_type_hlds__Var_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
          {
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__equiv_type_hlds__Var_140, &transform_hlds__equiv_type_hlds__VarTypes_69);
          }
          transform_hlds__equiv_type_hlds__Var_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
          transform_hlds__equiv_type_hlds__Var_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
          transform_hlds__equiv_type_hlds__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
          transform_hlds__equiv_type_hlds__Var_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
          transform_hlds__equiv_type_hlds__Var_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
          transform_hlds__equiv_type_hlds__Var_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
          {
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__equiv_type_hlds__Var_141, &transform_hlds__equiv_type_hlds__RttiVarMaps_70);
          }
          {
            hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__equiv_type_hlds__VarTypes_69, transform_hlds__equiv_type_hlds__Var_248, &transform_hlds__equiv_type_hlds__VarType_71);
          }
          transform_hlds__equiv_type_hlds__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
          transform_hlds__equiv_type_hlds__Var_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
          transform_hlds__equiv_type_hlds__Var_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
          transform_hlds__equiv_type_hlds__Var_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
          transform_hlds__equiv_type_hlds__Var_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
          transform_hlds__equiv_type_hlds__Var_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
          {
            transform_hlds__equiv_type_hlds__TypeCtorCat_72 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__equiv_type_hlds__Var_142, transform_hlds__equiv_type_hlds__VarType_71);
          }
          transform_hlds__equiv_type_hlds__Var_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
          transform_hlds__equiv_type_hlds__Var_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
          transform_hlds__equiv_type_hlds__Var_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
          transform_hlds__equiv_type_hlds__Var_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
          transform_hlds__equiv_type_hlds__Var_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
          transform_hlds__equiv_type_hlds__Var_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
          transform_hlds__equiv_type_hlds__Var_345 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
          transform_hlds__equiv_type_hlds__Var_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
          transform_hlds__equiv_type_hlds__Var_347 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
          transform_hlds__equiv_type_hlds__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
          transform_hlds__equiv_type_hlds__Var_348 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
          transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Var_143)) == (MR_mktag((MR_Integer) 0)));
          if (transform_hlds__equiv_type_hlds__succeeded)
            {
              transform_hlds__equiv_type_hlds__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_143, (MR_Integer) 0)));
              transform_hlds__equiv_type_hlds__ConsId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_143, (MR_Integer) 1)));
              transform_hlds__equiv_type_hlds__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_143, (MR_Integer) 2)));
              transform_hlds__equiv_type_hlds__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_143, (MR_Integer) 3)));
              transform_hlds__equiv_type_hlds__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_143, (MR_Integer) 4)));
              transform_hlds__equiv_type_hlds__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_143, (MR_Integer) 5)));
              transform_hlds__equiv_type_hlds__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_143, (MR_Integer) 6)));
              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__ConsId_74)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__equiv_type_hlds__succeeded)
                {
                  transform_hlds__equiv_type_hlds__TypeCtor_80 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__ConsId_74), (MR_Integer) 1);
                  transform_hlds__equiv_type_hlds__succeeded = ((((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__TypeCtorCat_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (transform_hlds__equiv_type_hlds__succeeded)
                    {
                      transform_hlds__equiv_type_hlds__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 1)));
                      transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__Var_144 == (MR_Integer) 0);
                      if (transform_hlds__equiv_type_hlds__succeeded)
                        {
                          {
                            transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__equiv_type_hlds__TypeTable_68, transform_hlds__equiv_type_hlds__TypeCtor_80, &transform_hlds__equiv_type_hlds__TypeDefn_81);
                          }
                          if (transform_hlds__equiv_type_hlds__succeeded)
                            {
                              {
                                hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__TypeDefn_81, &transform_hlds__equiv_type_hlds__Body_82);
                              }
                              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body_82)) == (MR_mktag((MR_Integer) 2)));
                              if (transform_hlds__equiv_type_hlds__succeeded)
                                transform_hlds__equiv_type_hlds__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_82, (MR_Integer) 0)));
                            }
                        }
                    }
                }
            }
          if (transform_hlds__equiv_type_hlds__succeeded)
            {
              MR_Word transform_hlds__equiv_type_hlds__TypeInfo_450_450;
              MR_Word transform_hlds__equiv_type_hlds__PredInfo0_85;
              MR_Word transform_hlds__equiv_type_hlds__ProcInfo0_86;
              MR_Word transform_hlds__equiv_type_hlds__PredInfo1_87;
              MR_Word transform_hlds__equiv_type_hlds__PolyInfo0_88;
              MR_Word transform_hlds__equiv_type_hlds__VarInfo_89;
              MR_Word transform_hlds__equiv_type_hlds__TypeInfoType_91;
              MR_Word transform_hlds__equiv_type_hlds__TypeInfoVar_93;
              MR_Word transform_hlds__equiv_type_hlds__PolyInfo_94;
              MR_Word transform_hlds__equiv_type_hlds__PolySpecs_95;
              MR_Word transform_hlds__equiv_type_hlds__PredInfo_96;
              MR_Word transform_hlds__equiv_type_hlds__ProcInfo_97;
              MR_Word transform_hlds__equiv_type_hlds__ModuleInfo_98;
              MR_Word transform_hlds__equiv_type_hlds__Var_148;
              MR_Word transform_hlds__equiv_type_hlds__Var_149;
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157;
              MR_Word transform_hlds__equiv_type_hlds__Var_159;
              MR_Word transform_hlds__equiv_type_hlds__Var_160;
              MR_Word transform_hlds__equiv_type_hlds__Var_161;
              MR_Word transform_hlds__equiv_type_hlds__Goals0_204;
              MR_Word transform_hlds__equiv_type_hlds__Goals_205;
              MR_Word transform_hlds__equiv_type_hlds__TVarSet0_206;
              MR_Word transform_hlds__equiv_type_hlds__TVarSet_207;
              MR_Word transform_hlds__equiv_type_hlds__Var_373;
              MR_Word transform_hlds__equiv_type_hlds__Var_374;
              MR_Word transform_hlds__equiv_type_hlds__Var_375;
              MR_Word transform_hlds__equiv_type_hlds__Var_379;
              MR_Word transform_hlds__equiv_type_hlds__Var_380;
              MR_Word transform_hlds__equiv_type_hlds__Var_381;
              MR_Word transform_hlds__equiv_type_hlds__Var_382;
              MR_Word transform_hlds__equiv_type_hlds__Var_385;
              MR_Word transform_hlds__equiv_type_hlds__Var_386;
              MR_Word transform_hlds__equiv_type_hlds__Var_354;
              MR_Word transform_hlds__equiv_type_hlds__Var_357;
              MR_Word transform_hlds__equiv_type_hlds__Var_358;
              MR_Word transform_hlds__equiv_type_hlds__Var_369;
              MR_Word transform_hlds__equiv_type_hlds__Var_370;
              MR_Word transform_hlds__equiv_type_hlds__Var_371;
              MR_Word transform_hlds__equiv_type_hlds__Var_372;
              MR_Word transform_hlds__equiv_type_hlds__GoalExpr1_99;
              MR_Word transform_hlds__equiv_type_hlds__Var_163;
              MR_Word transform_hlds__equiv_type_hlds__Var_164;
              MR_Word transform_hlds__equiv_type_hlds__Var_100;
              MR_Word transform_hlds__equiv_type_hlds__Var_393;
              MR_Word transform_hlds__equiv_type_hlds__Var_394;
              MR_Word transform_hlds__equiv_type_hlds__Var_395;
              MR_Word transform_hlds__equiv_type_hlds__Var_396;
              MR_Word transform_hlds__equiv_type_hlds__Var_397;
              MR_Word transform_hlds__equiv_type_hlds__Var_398;

              *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 1;
              transform_hlds__equiv_type_hlds__Var_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
              transform_hlds__equiv_type_hlds__PredInfo0_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
              transform_hlds__equiv_type_hlds__ProcInfo0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
              transform_hlds__equiv_type_hlds__TVarSet0_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
              transform_hlds__equiv_type_hlds__Var_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
              transform_hlds__equiv_type_hlds__Var_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
              {
                hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__equiv_type_hlds__TVarSet0_206, transform_hlds__equiv_type_hlds__PredInfo0_85, &transform_hlds__equiv_type_hlds__PredInfo1_87);
              }
              {
                check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__equiv_type_hlds__Var_462, transform_hlds__equiv_type_hlds__PredInfo1_87, transform_hlds__equiv_type_hlds__ProcInfo0_86, &transform_hlds__equiv_type_hlds__PolyInfo0_88);
              }
              {
                hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__equiv_type_hlds__RttiVarMaps_70, transform_hlds__equiv_type_hlds__Var_248, &transform_hlds__equiv_type_hlds__VarInfo_89);
              }
              switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__VarInfo_89)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  transform_hlds__equiv_type_hlds__TypeInfoType_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__VarInfo_89, (MR_Integer) 0)));
                  break;
                case (MR_Integer) 2:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
                      return;
                    }
                  }
                  break;
              }
              {
                transform_hlds__equiv_type_hlds__Var_148 = mercury__term__context_init_0_f_0();
              }
              {
                check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__equiv_type_hlds__TypeInfoType_91, transform_hlds__equiv_type_hlds__Var_148, &transform_hlds__equiv_type_hlds__TypeInfoVar_93, &transform_hlds__equiv_type_hlds__Goals0_204, transform_hlds__equiv_type_hlds__PolyInfo0_88, &transform_hlds__equiv_type_hlds__PolyInfo_94);
              }
              {
                check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__equiv_type_hlds__PolyInfo_94, &transform_hlds__equiv_type_hlds__PolySpecs_95, transform_hlds__equiv_type_hlds__PredInfo1_87, &transform_hlds__equiv_type_hlds__PredInfo_96, transform_hlds__equiv_type_hlds__ProcInfo0_86, &transform_hlds__equiv_type_hlds__ProcInfo_97, &transform_hlds__equiv_type_hlds__ModuleInfo_98);
              }
              {
                transform_hlds__equiv_type_hlds__Var_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_149, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_149, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_149, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_149, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__PolySpecs_95));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_149, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                mercury__require__expect_4_p_0(transform_hlds__equiv_type_hlds__Var_149, (MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "got errors while making type_info_var");
              }
              {
                hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__equiv_type_hlds__PredInfo_96, &transform_hlds__equiv_type_hlds__TVarSet_207);
              }
              transform_hlds__equiv_type_hlds__Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
              transform_hlds__equiv_type_hlds__Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
              transform_hlds__equiv_type_hlds__Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
              transform_hlds__equiv_type_hlds__Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
              transform_hlds__equiv_type_hlds__Var_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
              transform_hlds__equiv_type_hlds__Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
              transform_hlds__equiv_type_hlds__Var_375 = transform_hlds__equiv_type_hlds__ModuleInfo_98;
              transform_hlds__equiv_type_hlds__Var_379 = transform_hlds__equiv_type_hlds__Var_373;
              transform_hlds__equiv_type_hlds__Var_380 = transform_hlds__equiv_type_hlds__Var_374;
              transform_hlds__equiv_type_hlds__Var_381 = transform_hlds__equiv_type_hlds__Var_375;
              transform_hlds__equiv_type_hlds__Var_382 = transform_hlds__equiv_type_hlds__PredInfo_96;
              transform_hlds__equiv_type_hlds__Var_385 = transform_hlds__equiv_type_hlds__Var_379;
              transform_hlds__equiv_type_hlds__Var_386 = transform_hlds__equiv_type_hlds__Var_380;
              {
                transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_381));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_382));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__ProcInfo_97));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_207));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_385));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_386));
              }
              transform_hlds__equiv_type_hlds__TypeInfo_450_450 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[5];
              {
                transform_hlds__equiv_type_hlds__Var_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_161, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeInfoVar_93));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_161, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_248));
              }
              {
                transform_hlds__equiv_type_hlds__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Var_160, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_161));
                MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Var_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                transform_hlds__equiv_type_hlds__Var_159 = mercury__map__from_assoc_list_1_f_0(transform_hlds__equiv_type_hlds__TypeInfo_450_450, transform_hlds__equiv_type_hlds__TypeInfo_450_450, transform_hlds__equiv_type_hlds__Var_160);
              }
              {
                hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__Var_159, transform_hlds__equiv_type_hlds__Goals0_204, &transform_hlds__equiv_type_hlds__Goals_205);
              }
              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Goals_205)) == (MR_mktag((MR_Integer) 1)));
              if (transform_hlds__equiv_type_hlds__succeeded)
                {
                  transform_hlds__equiv_type_hlds__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Goals_205, (MR_Integer) 0)));
                  transform_hlds__equiv_type_hlds__Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Goals_205, (MR_Integer) 1)));
                  transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__Var_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (transform_hlds__equiv_type_hlds__succeeded)
                    {
                      transform_hlds__equiv_type_hlds__GoalExpr1_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_163, (MR_Integer) 0)));
                      transform_hlds__equiv_type_hlds__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_163, (MR_Integer) 1)));
                      transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
                    }
                }
              if (transform_hlds__equiv_type_hlds__succeeded)
                *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr1_99;
              else
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Goals_205));
                  }
                }
              transform_hlds__equiv_type_hlds__Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 0)));
              transform_hlds__equiv_type_hlds__Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 1)));
              transform_hlds__equiv_type_hlds__Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 2)));
              transform_hlds__equiv_type_hlds__Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 3)));
              transform_hlds__equiv_type_hlds__Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 4)));
              transform_hlds__equiv_type_hlds__Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 5)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_393));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_394));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_395));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_396));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_397));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
              }
            }
          else
            {
              MR_Word transform_hlds__equiv_type_hlds__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Var_169;
              MR_Word transform_hlds__equiv_type_hlds__ConsId_208;
              MR_Word transform_hlds__equiv_type_hlds__TypeCtor_209;
              MR_Word transform_hlds__equiv_type_hlds__TypeDefn_210;
              MR_Word transform_hlds__equiv_type_hlds__Body_211;
              MR_Word transform_hlds__equiv_type_hlds__Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
              MR_Word transform_hlds__equiv_type_hlds__Var_400 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Var_401 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Var_402 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word transform_hlds__equiv_type_hlds__Var_101;
              MR_Word transform_hlds__equiv_type_hlds__Var_102;
              MR_Word transform_hlds__equiv_type_hlds__Var_103;
              MR_Word transform_hlds__equiv_type_hlds__Var_104;
              MR_Word transform_hlds__equiv_type_hlds__Var_105;
              MR_Word transform_hlds__equiv_type_hlds__Var_106;
              MR_Word transform_hlds__equiv_type_hlds__Var_107;

              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Var_168)) == (MR_mktag((MR_Integer) 0)));
              if (transform_hlds__equiv_type_hlds__succeeded)
                {
                  transform_hlds__equiv_type_hlds__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_168, (MR_Integer) 0)));
                  transform_hlds__equiv_type_hlds__ConsId_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_168, (MR_Integer) 1)));
                  transform_hlds__equiv_type_hlds__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_168, (MR_Integer) 2)));
                  transform_hlds__equiv_type_hlds__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_168, (MR_Integer) 3)));
                  transform_hlds__equiv_type_hlds__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_168, (MR_Integer) 4)));
                  transform_hlds__equiv_type_hlds__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_168, (MR_Integer) 5)));
                  transform_hlds__equiv_type_hlds__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_168, (MR_Integer) 6)));
                  transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__ConsId_208)) == (MR_mktag((MR_Integer) 1)));
                  if (transform_hlds__equiv_type_hlds__succeeded)
                    {
                      transform_hlds__equiv_type_hlds__TypeCtor_209 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__ConsId_208), (MR_Integer) 1);
                      transform_hlds__equiv_type_hlds__succeeded = ((((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__TypeCtorCat_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 0)))) == (MR_Integer) 0)));
                      if (transform_hlds__equiv_type_hlds__succeeded)
                        {
                          transform_hlds__equiv_type_hlds__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 1)));
                          transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__Var_169 == (MR_Integer) 1);
                          if (transform_hlds__equiv_type_hlds__succeeded)
                            {
                              {
                                transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__equiv_type_hlds__TypeTable_68, transform_hlds__equiv_type_hlds__TypeCtor_209, &transform_hlds__equiv_type_hlds__TypeDefn_210);
                              }
                              if (transform_hlds__equiv_type_hlds__succeeded)
                                {
                                  {
                                    hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__TypeDefn_210, &transform_hlds__equiv_type_hlds__Body_211);
                                  }
                                  transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body_211)) == (MR_mktag((MR_Integer) 2)));
                                  if (transform_hlds__equiv_type_hlds__succeeded)
                                    transform_hlds__equiv_type_hlds__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_211, (MR_Integer) 0)));
                                }
                            }
                        }
                    }
                }
              if (transform_hlds__equiv_type_hlds__succeeded)
                {
                  *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 1;
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__equiv_type_hlds_scalar_common_1[13]);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_462));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_461));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_460));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_459));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_458));
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
                  }
                }
              else
                {
                  MR_Word transform_hlds__equiv_type_hlds__LMode0_108;
                  MR_Word transform_hlds__equiv_type_hlds__RMode0_109;
                  MR_Word transform_hlds__equiv_type_hlds__LMode_110;
                  MR_Word transform_hlds__equiv_type_hlds__Cache1_111;
                  MR_Word transform_hlds__equiv_type_hlds__RMode_112;
                  MR_Word transform_hlds__equiv_type_hlds__Unification_113;
                  MR_Word transform_hlds__equiv_type_hlds__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
                  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176;
                  MR_Word transform_hlds__equiv_type_hlds__Var_177;
                  MR_Word transform_hlds__equiv_type_hlds__Var_179;
                  MR_Word transform_hlds__equiv_type_hlds__Changed1_214;
                  MR_Word transform_hlds__equiv_type_hlds__Changed2_215;
                  MR_Word transform_hlds__equiv_type_hlds__Changed3_216;
                  MR_Word transform_hlds__equiv_type_hlds__TVarSet1_218;
                  MR_Word transform_hlds__equiv_type_hlds__TVarSet_219;
                  MR_Word transform_hlds__equiv_type_hlds__Cache0_220;
                  MR_Word transform_hlds__equiv_type_hlds__Cache_221;
                  MR_Word transform_hlds__equiv_type_hlds__Var_423;
                  MR_Word transform_hlds__equiv_type_hlds__Var_424;
                  MR_Word transform_hlds__equiv_type_hlds__Var_425;
                  MR_Word transform_hlds__equiv_type_hlds__Var_428;
                  MR_Word transform_hlds__equiv_type_hlds__Var_409 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
                  MR_Word transform_hlds__equiv_type_hlds__Var_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
                  MR_Word transform_hlds__equiv_type_hlds__Var_411 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
                  MR_Word transform_hlds__equiv_type_hlds__Var_412 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
                  MR_Word transform_hlds__equiv_type_hlds__Var_418;
                  MR_Word transform_hlds__equiv_type_hlds__Var_419;
                  MR_Word transform_hlds__equiv_type_hlds__Var_420;
                  MR_Word transform_hlds__equiv_type_hlds__Var_421;
                  MR_Word transform_hlds__equiv_type_hlds__Var_422;
                  MR_Word transform_hlds__equiv_type_hlds__Var_426;
                  MR_Word transform_hlds__equiv_type_hlds__Var_427;
                  MR_Word transform_hlds__equiv_type_hlds__Var_435;
                  MR_Word transform_hlds__equiv_type_hlds__Var_436;
                  MR_Word transform_hlds__equiv_type_hlds__Var_437;
                  MR_Word transform_hlds__equiv_type_hlds__Var_438;

                  transform_hlds__equiv_type_hlds__LMode0_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_174, (MR_Integer) 0)));
                  transform_hlds__equiv_type_hlds__RMode0_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_174, (MR_Integer) 1)));
                  transform_hlds__equiv_type_hlds__Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
                  transform_hlds__equiv_type_hlds__Var_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
                  transform_hlds__equiv_type_hlds__Var_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
                  transform_hlds__equiv_type_hlds__Var_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
                  transform_hlds__equiv_type_hlds__Cache0_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
                  transform_hlds__equiv_type_hlds__Var_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
                  {
                    transform_hlds__equiv_type_hlds__replace_in_from_to_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__LMode0_108, &transform_hlds__equiv_type_hlds__LMode_110, &transform_hlds__equiv_type_hlds__Changed1_214, transform_hlds__equiv_type_hlds__Var_459, &transform_hlds__equiv_type_hlds__TVarSet1_218, transform_hlds__equiv_type_hlds__Cache0_220, &transform_hlds__equiv_type_hlds__Cache1_111);
                  }
                  {
                    transform_hlds__equiv_type_hlds__replace_in_from_to_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__RMode0_109, &transform_hlds__equiv_type_hlds__RMode_112, &transform_hlds__equiv_type_hlds__Changed2_215, transform_hlds__equiv_type_hlds__TVarSet1_218, &transform_hlds__equiv_type_hlds__TVarSet_219, transform_hlds__equiv_type_hlds__Cache1_111, &transform_hlds__equiv_type_hlds__Cache_221);
                  }
                  transform_hlds__equiv_type_hlds__Var_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
                  transform_hlds__equiv_type_hlds__Var_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
                  transform_hlds__equiv_type_hlds__Var_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
                  transform_hlds__equiv_type_hlds__Var_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
                  transform_hlds__equiv_type_hlds__Var_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
                  transform_hlds__equiv_type_hlds__Var_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_423));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_424));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_425));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_219));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache_221));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_428));
                  }
                  transform_hlds__equiv_type_hlds__Var_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
                  transform_hlds__equiv_type_hlds__Var_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
                  transform_hlds__equiv_type_hlds__Var_437 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
                  transform_hlds__equiv_type_hlds__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
                  transform_hlds__equiv_type_hlds__Var_438 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
                  {
                    transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Var_177, &transform_hlds__equiv_type_hlds__Unification_113, &transform_hlds__equiv_type_hlds__Changed3_216, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
                  }
                  {
                    transform_hlds__equiv_type_hlds__Var_179 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_214, transform_hlds__equiv_type_hlds__Changed2_215);
                  }
                  {
                    *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Var_179, transform_hlds__equiv_type_hlds__Changed3_216);
                  }
                  switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word transform_hlds__equiv_type_hlds__Var_180;
                        MR_Word transform_hlds__equiv_type_hlds__Var_439;
                        MR_Word transform_hlds__equiv_type_hlds__Var_440;
                        MR_Word transform_hlds__equiv_type_hlds__Var_443;
                        MR_Word transform_hlds__equiv_type_hlds__Var_441;
                        MR_Word transform_hlds__equiv_type_hlds__Var_442;

                        {
                          transform_hlds__equiv_type_hlds__Var_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_180, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__LMode_110));
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_180, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__RMode_112));
                        }
                        transform_hlds__equiv_type_hlds__Var_439 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
                        transform_hlds__equiv_type_hlds__Var_440 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
                        transform_hlds__equiv_type_hlds__Var_441 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
                        transform_hlds__equiv_type_hlds__Var_442 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
                        transform_hlds__equiv_type_hlds__Var_443 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                          *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_439));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_440));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_180));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Unification_113));
                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_443));
                        }
                      }
                      break;
                  }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
          *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__equiv_type_hlds__Details_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Modes0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__MaybeArgRegs_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word transform_hlds__equiv_type_hlds__Detism_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
              MR_Word transform_hlds__equiv_type_hlds__Cache0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
              MR_Word transform_hlds__equiv_type_hlds__Modes_62;
              MR_Word transform_hlds__equiv_type_hlds__Cache_63;
              MR_Word transform_hlds__equiv_type_hlds__TVarSet0_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Args_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__TVarSet_203;
              MR_Word transform_hlds__equiv_type_hlds__Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
              MR_Word transform_hlds__equiv_type_hlds__Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Var_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Var_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));

              {
                transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Modes0_58, &transform_hlds__equiv_type_hlds__Modes_62, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__TVarSet0_201, &transform_hlds__equiv_type_hlds__TVarSet_203, transform_hlds__equiv_type_hlds__Cache0_61, &transform_hlds__equiv_type_hlds__Cache_63);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__equiv_type_hlds__Var_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_313));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_314));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_315));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_203));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache_63));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_318));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Details_57));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_202));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_62));
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeArgRegs_59));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Detism_60));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__equiv_type_hlds__TVarSet0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Args_49;
              MR_Word transform_hlds__equiv_type_hlds__ChangedArgs_50;
              MR_Word transform_hlds__equiv_type_hlds__TVarSet1_51;
              MR_Word transform_hlds__equiv_type_hlds__ExtraArgs_53;
              MR_Word transform_hlds__equiv_type_hlds__ChangedExtraArgs_54;
              MR_Word transform_hlds__equiv_type_hlds__TVarSet_55;
              MR_Word transform_hlds__equiv_type_hlds__Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word transform_hlds__equiv_type_hlds__Var_185;
              MR_Word transform_hlds__equiv_type_hlds__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
              MR_Word transform_hlds__equiv_type_hlds__Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
              MR_Word transform_hlds__equiv_type_hlds__Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
              MR_Word transform_hlds__equiv_type_hlds__Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
              MR_Integer transform_hlds__equiv_type_hlds__Var_273 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
              MR_Word transform_hlds__equiv_type_hlds__Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 6)));
              MR_Word transform_hlds__equiv_type_hlds__Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 7)));
              MR_Word transform_hlds__equiv_type_hlds__Var_52;
              MR_Word transform_hlds__equiv_type_hlds__Var_277;
              MR_Word transform_hlds__equiv_type_hlds__Var_278;
              MR_Integer transform_hlds__equiv_type_hlds__Var_279;
              MR_Word transform_hlds__equiv_type_hlds__Var_280;
              MR_Word transform_hlds__equiv_type_hlds__Var_281;
              MR_Word transform_hlds__equiv_type_hlds__Var_282;
              MR_Word transform_hlds__equiv_type_hlds__Var_56;

              {
                transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Var_183, &transform_hlds__equiv_type_hlds__Args_49, &transform_hlds__equiv_type_hlds__ChangedArgs_50, transform_hlds__equiv_type_hlds__TVarSet0_48, &transform_hlds__equiv_type_hlds__TVarSet1_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__Var_52);
              }
              transform_hlds__equiv_type_hlds__Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
              transform_hlds__equiv_type_hlds__Var_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
              transform_hlds__equiv_type_hlds__Var_279 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
              transform_hlds__equiv_type_hlds__Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
              transform_hlds__equiv_type_hlds__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
              transform_hlds__equiv_type_hlds__Var_281 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 6)));
              transform_hlds__equiv_type_hlds__Var_282 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 7)));
              {
                transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Var_185, &transform_hlds__equiv_type_hlds__ExtraArgs_53, &transform_hlds__equiv_type_hlds__ChangedExtraArgs_54, transform_hlds__equiv_type_hlds__TVarSet1_51, &transform_hlds__equiv_type_hlds__TVarSet_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__Var_56);
              }
              {
                *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedArgs_50, transform_hlds__equiv_type_hlds__ChangedExtraArgs_54);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__equiv_type_hlds__Var_289;
                    MR_Word transform_hlds__equiv_type_hlds__Var_290;
                    MR_Integer transform_hlds__equiv_type_hlds__Var_291;
                    MR_Word transform_hlds__equiv_type_hlds__Var_294;
                    MR_Word transform_hlds__equiv_type_hlds__Var_295;
                    MR_Word transform_hlds__equiv_type_hlds__Var_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
                    MR_Word transform_hlds__equiv_type_hlds__Var_292;
                    MR_Word transform_hlds__equiv_type_hlds__Var_293;

                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_283));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_284));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_285));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_55));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_287));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_288));
                    }
                    transform_hlds__equiv_type_hlds__Var_289 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
                    transform_hlds__equiv_type_hlds__Var_290 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
                    transform_hlds__equiv_type_hlds__Var_291 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
                    transform_hlds__equiv_type_hlds__Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
                    transform_hlds__equiv_type_hlds__Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
                    transform_hlds__equiv_type_hlds__Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 6)));
                    transform_hlds__equiv_type_hlds__Var_295 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 7)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_289));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_290));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_291));
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_49));
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__ExtraArgs_53));
                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_294));
                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_295));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__equiv_type_hlds__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Goals_14;

              {
                transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Goals0_13, &transform_hlds__equiv_type_hlds__Goals_14, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ConjType_12));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Goals_14));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__equiv_type_hlds__Goals0_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Goals_200;

              {
                transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Goals0_199, &transform_hlds__equiv_type_hlds__Goals_200, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Goals_200));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__equiv_type_hlds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__CanFail_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Cases_18;

              {
                transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Cases0_17, &transform_hlds__equiv_type_hlds__Cases_18, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_15));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__CanFail_16));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cases_18));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__equiv_type_hlds__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__SomeGoal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Var_193;
              MR_Word transform_hlds__equiv_type_hlds__Var_23;

              transform_hlds__equiv_type_hlds__succeeded = ((((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Reason_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Reason_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (transform_hlds__equiv_type_hlds__succeeded)
                {
                  transform_hlds__equiv_type_hlds__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Reason_21, (MR_Integer) 1)));
                  transform_hlds__equiv_type_hlds__Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Reason_21, (MR_Integer) 2)));
                  transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__Var_193 == (MR_Integer) 1);
                }
              if (transform_hlds__equiv_type_hlds__succeeded)
                {
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                  *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
                  *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131;
                }
              else
                {
                  MR_Word transform_hlds__equiv_type_hlds__SomeGoal_24;

                  {
                    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__SomeGoal0_22, &transform_hlds__equiv_type_hlds__SomeGoal_24, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
                  }
                  switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Reason_21));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__SomeGoal_24));
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__equiv_type_hlds__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word transform_hlds__equiv_type_hlds__Cond_29;
              MR_Word transform_hlds__equiv_type_hlds__Changed1_30;
              MR_Word transform_hlds__equiv_type_hlds__Then_31;
              MR_Word transform_hlds__equiv_type_hlds__Changed2_32;
              MR_Word transform_hlds__equiv_type_hlds__Else_33;
              MR_Word transform_hlds__equiv_type_hlds__Changed3_34;
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_189_189;
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_190_190;
              MR_Word transform_hlds__equiv_type_hlds__Var_192;

              {
                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Cond0_26, &transform_hlds__equiv_type_hlds__Cond_29, &transform_hlds__equiv_type_hlds__Changed1_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_189_189);
              }
              {
                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Then0_27, &transform_hlds__equiv_type_hlds__Then_31, &transform_hlds__equiv_type_hlds__Changed2_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_189_189, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_190_190);
              }
              {
                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Else0_28, &transform_hlds__equiv_type_hlds__Else_33, &transform_hlds__equiv_type_hlds__Changed3_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_190_190, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
              }
              {
                transform_hlds__equiv_type_hlds__Var_192 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_30, transform_hlds__equiv_type_hlds__Changed2_32);
              }
              {
                *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Var_192, transform_hlds__equiv_type_hlds__Changed3_34);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Vars_25));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cond_29));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Then_31));
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Else_33));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word transform_hlds__equiv_type_hlds__ShortHand0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__ShortHand0_114)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__equiv_type_hlds__GoalType_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 0)));
                    MR_Word transform_hlds__equiv_type_hlds__Outer_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 1)));
                    MR_Word transform_hlds__equiv_type_hlds__Inner_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 2)));
                    MR_Word transform_hlds__equiv_type_hlds__MaybeOutputVars_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 3)));
                    MR_Word transform_hlds__equiv_type_hlds__MainGoal0_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 4)));
                    MR_Word transform_hlds__equiv_type_hlds__OrElseGoals0_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 5)));
                    MR_Word transform_hlds__equiv_type_hlds__OrElseInners_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 6)));
                    MR_Word transform_hlds__equiv_type_hlds__MainGoal_122;
                    MR_Word transform_hlds__equiv_type_hlds__OrElseGoals_123;
                    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_137_137;
                    MR_Word transform_hlds__equiv_type_hlds__Changed1_257;
                    MR_Word transform_hlds__equiv_type_hlds__Changed2_258;

                    {
                      transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__MainGoal0_119, &transform_hlds__equiv_type_hlds__MainGoal_122, &transform_hlds__equiv_type_hlds__Changed1_257, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_137_137);
                    }
                    {
                      transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__OrElseGoals0_120, &transform_hlds__equiv_type_hlds__OrElseGoals_123, &transform_hlds__equiv_type_hlds__Changed2_258, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_137_137, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
                    }
                    {
                      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_257, transform_hlds__equiv_type_hlds__Changed2_258);
                    }
                    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word transform_hlds__equiv_type_hlds__ShortHand_124;

                          {
                            transform_hlds__equiv_type_hlds__ShortHand_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__GoalType_115));
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Outer_116));
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inner_117));
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeOutputVars_118));
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__MainGoal_122));
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__OrElseGoals_123));
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__OrElseInners_121));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ShortHand_124));
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word transform_hlds__equiv_type_hlds__MaybeIO_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 0)));
                    MR_Word transform_hlds__equiv_type_hlds__ResultVar_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 1)));
                    MR_Word transform_hlds__equiv_type_hlds__SubGoal0_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 2)));
                    MR_Word transform_hlds__equiv_type_hlds__SubGoal_128;

                    {
                      transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__SubGoal0_127, &transform_hlds__equiv_type_hlds__SubGoal_128, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
                    }
                    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word transform_hlds__equiv_type_hlds__ShortHand_259;

                          {
                            transform_hlds__equiv_type_hlds__ShortHand_259 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand_259, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeIO_125));
                            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand_259, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ResultVar_126));
                            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand_259, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__SubGoal_128));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ShortHand_259));
                          }
                        }
                        break;
                    }
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
transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__T_18;
        MR_Word transform_hlds__equiv_type_hlds__Changed0_19;
        MR_Word transform_hlds__equiv_type_hlds__H_20;
        MR_Word transform_hlds__equiv_type_hlds__Changed1_21;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;

        {
          transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__T0_14, &transform_hlds__equiv_type_hlds__T_18, &transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24);
        }
        {
          transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__H0_13, &transform_hlds__equiv_type_hlds__H_20, &transform_hlds__equiv_type_hlds__Changed1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);
        }
        {
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__Changed1_21);
        }
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__H_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__T_18));
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv1_LambdaHeadVar__3_40;
    MR_Tuple transform_hlds__equiv_type_hlds__conv0_LambdaHeadVar__5_42;

    {
      transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1362__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv1_LambdaHeadVar__3_40, ((MR_Tuple) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv0_LambdaHeadVar__5_42);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_LambdaHeadVar__3_40));
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_LambdaHeadVar__5_42));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__Goal0_8,
  MR_Word * transform_hlds__equiv_type_hlds__Goal_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_32,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Goal0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Goal0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__GoalExpr_14;
    MR_Word transform_hlds__equiv_type_hlds__Changed0_15;
    MR_Word transform_hlds__equiv_type_hlds__InstMapDelta0_16;
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_17;
    MR_Word transform_hlds__equiv_type_hlds__Cache0_18;
    MR_Word transform_hlds__equiv_type_hlds__InstMapDelta_28;
    MR_Word transform_hlds__equiv_type_hlds__TVarSet_29;
    MR_Word transform_hlds__equiv_type_hlds__Cache_30;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34;
    MR_Word transform_hlds__equiv_type_hlds__Var_35;
    MR_Tuple transform_hlds__equiv_type_hlds__Var_36;
    MR_Tuple transform_hlds__equiv_type_hlds__Var_37;
    MR_Word transform_hlds__equiv_type_hlds__Var_56;
    MR_Word transform_hlds__equiv_type_hlds__Var_57;
    MR_Word transform_hlds__equiv_type_hlds__Var_58;
    MR_Word transform_hlds__equiv_type_hlds__Var_60;
    MR_Box transform_hlds__equiv_type_hlds__conv2_Var_37;

    {
      transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__GoalExpr0_12, &transform_hlds__equiv_type_hlds__GoalExpr_14, &transform_hlds__equiv_type_hlds__Changed0_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_32, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34);
    }
    {
      transform_hlds__equiv_type_hlds__InstMapDelta0_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__equiv_type_hlds__GoalInfo0_13);
    }
    transform_hlds__equiv_type_hlds__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 0)));
    transform_hlds__equiv_type_hlds__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 1)));
    transform_hlds__equiv_type_hlds__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 2)));
    transform_hlds__equiv_type_hlds__TVarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 3)));
    transform_hlds__equiv_type_hlds__Cache0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 4)));
    transform_hlds__equiv_type_hlds__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 5)));
    {
      transform_hlds__equiv_type_hlds__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_35, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_35, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_35, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_7));
    }
    {
      transform_hlds__equiv_type_hlds__Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_36, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Changed0_15));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_36, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet0_17));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_36, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache0_18));
    }
    {
      hlds__instmap__instmap_delta_map_foldl_5_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_3[0], transform_hlds__equiv_type_hlds__Var_35, transform_hlds__equiv_type_hlds__InstMapDelta0_16, &transform_hlds__equiv_type_hlds__InstMapDelta_28, ((MR_Box) (transform_hlds__equiv_type_hlds__Var_36)), &transform_hlds__equiv_type_hlds__conv2_Var_37);
    }
    transform_hlds__equiv_type_hlds__Var_37 = ((MR_Tuple) transform_hlds__equiv_type_hlds__conv2_Var_37);
    *transform_hlds__equiv_type_hlds__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_37, (MR_Integer) 0)));
    transform_hlds__equiv_type_hlds__TVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_37, (MR_Integer) 1)));
    transform_hlds__equiv_type_hlds__Cache_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_37, (MR_Integer) 2)));
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *transform_hlds__equiv_type_hlds__Goal_9 = transform_hlds__equiv_type_hlds__Goal0_8;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__GoalInfo_31;
          MR_Word transform_hlds__equiv_type_hlds__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 2)));
          MR_Word transform_hlds__equiv_type_hlds__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 5)));
          MR_Word transform_hlds__equiv_type_hlds__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 3)));
          MR_Word transform_hlds__equiv_type_hlds__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 4)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_66));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_67));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_68));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_29));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache_30));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_71));
          }
          {
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__equiv_type_hlds__InstMapDelta_28, transform_hlds__equiv_type_hlds__GoalInfo0_13, &transform_hlds__equiv_type_hlds__GoalInfo_31);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__equiv_type_hlds__Goal_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__GoalExpr_14));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__GoalInfo_31));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__A0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__As0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__A_24;
        MR_Word transform_hlds__equiv_type_hlds__Changed0_25;
        MR_Word transform_hlds__equiv_type_hlds__As_26;
        MR_Word transform_hlds__equiv_type_hlds__Changed1_27;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_32_32;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33_33;
        MR_Word transform_hlds__equiv_type_hlds__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__NameMode_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__Type0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 2)));
        MR_Word transform_hlds__equiv_type_hlds__BoxPolicy_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 3)));
        MR_Word transform_hlds__equiv_type_hlds__Type_50;

        {
          parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Type0_48, &transform_hlds__equiv_type_hlds__Type_50, &transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33_33);
        }
        switch (transform_hlds__equiv_type_hlds__Changed0_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            transform_hlds__equiv_type_hlds__A_24 = transform_hlds__equiv_type_hlds__A0_18;
            break;
          case (MR_Integer) 1:
            {
              transform_hlds__equiv_type_hlds__A_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_46));
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__NameMode_47));
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_50));
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoxPolicy_49));
            }
            break;
        }
        {
          transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__As0_19, &transform_hlds__equiv_type_hlds__As_26, &transform_hlds__equiv_type_hlds__Changed1_27, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8);
        }
        {
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__Changed1_27);
        }
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__A_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__As_26));
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__Uni0_8,
  MR_Word * transform_hlds__equiv_type_hlds__Uni_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_37,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_38)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Uni0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__equiv_type_hlds__ArgModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));
          MR_Word transform_hlds__equiv_type_hlds__ArgModes_28;
          MR_Word transform_hlds__equiv_type_hlds__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
          MR_Word transform_hlds__equiv_type_hlds__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
          MR_Word transform_hlds__equiv_type_hlds__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));
          MR_Word transform_hlds__equiv_type_hlds__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 6)));

          {
            transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__ArgModes0_27, &transform_hlds__equiv_type_hlds__ArgModes_28, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_37, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_38);
          }
          switch (*transform_hlds__equiv_type_hlds__Changed_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__equiv_type_hlds__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
                MR_Word transform_hlds__equiv_type_hlds__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
                MR_Word transform_hlds__equiv_type_hlds__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
                MR_Word transform_hlds__equiv_type_hlds__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
                MR_Word transform_hlds__equiv_type_hlds__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));
                MR_Word transform_hlds__equiv_type_hlds__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 6)));
                MR_Word transform_hlds__equiv_type_hlds__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__equiv_type_hlds__Uni_9 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_48));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_49));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_50));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__ArgModes_28));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_52));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_53));
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_54));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__UnifyModes0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));
          MR_Word transform_hlds__equiv_type_hlds__UnifyModes_36;
          MR_Word transform_hlds__equiv_type_hlds__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
          MR_Word transform_hlds__equiv_type_hlds__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
          MR_Word transform_hlds__equiv_type_hlds__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));

          {
            transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__UnifyModes0_35, &transform_hlds__equiv_type_hlds__UnifyModes_36, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_37, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_38);
          }
          switch (*transform_hlds__equiv_type_hlds__Changed_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__equiv_type_hlds__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
                MR_Word transform_hlds__equiv_type_hlds__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
                MR_Word transform_hlds__equiv_type_hlds__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
                MR_Word transform_hlds__equiv_type_hlds__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
                MR_Word transform_hlds__equiv_type_hlds__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));
                MR_Word transform_hlds__equiv_type_hlds__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__equiv_type_hlds__Uni_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_60));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_61));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_62));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__UnifyModes_36));
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_64));
                  MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_65));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
          *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_38 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_37;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
              *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_38 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_37;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__equiv_type_hlds__UnifyMode0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__B_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__C_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__UnifyMode_19;

              {
                transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__UnifyMode0_16, &transform_hlds__equiv_type_hlds__UnifyMode_19, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_37, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_38);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__Uni_9 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__UnifyMode_19));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__B_17));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__C_18));
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
transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_6)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__UnifyMode0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__UnifyModes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__UnifyMode_18;
        MR_Word transform_hlds__equiv_type_hlds__Changed0_19;
        MR_Word transform_hlds__equiv_type_hlds__UnifyModes_20;
        MR_Word transform_hlds__equiv_type_hlds__Changed1_21;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_24_24;

        {
          transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__UnifyMode0_13, &transform_hlds__equiv_type_hlds__UnifyMode_18, &transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_24_24);
        }
        {
          transform_hlds__equiv_type_hlds__replace_in_unify_modes_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__UnifyModes0_14, &transform_hlds__equiv_type_hlds__UnifyModes_20, &transform_hlds__equiv_type_hlds__Changed1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_24_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_6);
        }
        {
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__Changed1_21);
        }
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__UnifyMode_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__UnifyModes_20));
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_mode_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__UnifyMode0_8,
  MR_Word * transform_hlds__equiv_type_hlds__UnifyMode_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_21)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__LHSFromToInsts0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyMode0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__RHSFromToInsts0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyMode0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__LHSFromToInsts_16;
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_17;
    MR_Word transform_hlds__equiv_type_hlds__RHSFromToInsts_18;
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_19;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_24_24;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_26_26;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27_27;
    MR_Word transform_hlds__equiv_type_hlds__Init0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LHSFromToInsts0_12, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__Final0_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LHSFromToInsts0_12, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__Init_64;
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_65;
    MR_Word transform_hlds__equiv_type_hlds__Final_66;
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_67;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25_68;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_26_69;
    MR_Word transform_hlds__equiv_type_hlds__Init0_82;
    MR_Word transform_hlds__equiv_type_hlds__Final0_83;
    MR_Word transform_hlds__equiv_type_hlds__Init_84;
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_85;
    MR_Word transform_hlds__equiv_type_hlds__Final_86;
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_87;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25_88;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_26_89;
    MR_Word transform_hlds__equiv_type_hlds__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
    MR_Word transform_hlds__equiv_type_hlds__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));

    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Init0_62, &transform_hlds__equiv_type_hlds__Init_64, &transform_hlds__equiv_type_hlds__ChangedA_65, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_22_22, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25_68, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_26_69);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Final0_63, &transform_hlds__equiv_type_hlds__Final_66, &transform_hlds__equiv_type_hlds__ChangedB_67, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25_68, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_24_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_26_69, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25);
    }
    {
      transform_hlds__equiv_type_hlds__ChangedA_17 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_65, transform_hlds__equiv_type_hlds__ChangedB_67);
    }
    switch (transform_hlds__equiv_type_hlds__ChangedA_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__equiv_type_hlds__LHSFromToInsts_16 = transform_hlds__equiv_type_hlds__LHSFromToInsts0_12;
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__equiv_type_hlds__LHSFromToInsts_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LHSFromToInsts_16, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Init_64));
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LHSFromToInsts_16, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Final_66));
        }
        break;
    }
    transform_hlds__equiv_type_hlds__Init0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__RHSFromToInsts0_13, (MR_Integer) 0)));
    transform_hlds__equiv_type_hlds__Final0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__RHSFromToInsts0_13, (MR_Integer) 1)));
    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Init0_82, &transform_hlds__equiv_type_hlds__Init_84, &transform_hlds__equiv_type_hlds__ChangedA_85, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_24_24, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25_88, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_26_89);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Final0_83, &transform_hlds__equiv_type_hlds__Final_86, &transform_hlds__equiv_type_hlds__ChangedB_87, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25_88, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_26_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_26_89, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27_27);
    }
    {
      transform_hlds__equiv_type_hlds__ChangedB_19 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_85, transform_hlds__equiv_type_hlds__ChangedB_87);
    }
    switch (transform_hlds__equiv_type_hlds__ChangedB_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__equiv_type_hlds__RHSFromToInsts_18 = transform_hlds__equiv_type_hlds__RHSFromToInsts0_13;
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__equiv_type_hlds__RHSFromToInsts_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__RHSFromToInsts_18, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Init_84));
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__RHSFromToInsts_18, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Final_86));
        }
        break;
    }
    {
      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_17, transform_hlds__equiv_type_hlds__ChangedB_19);
    }
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *transform_hlds__equiv_type_hlds__UnifyMode_9 = transform_hlds__equiv_type_hlds__UnifyMode0_8;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_21 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
          MR_Word transform_hlds__equiv_type_hlds__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
          MR_Word transform_hlds__equiv_type_hlds__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
          MR_Word transform_hlds__equiv_type_hlds__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_40));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_41));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_42));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_26_26));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27_27));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__equiv_type_hlds__UnifyMode_9 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__LHSFromToInsts_16));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__RHSFromToInsts_18));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_from_to_insts_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__FromToInsts0_10,
  MR_Word * transform_hlds__equiv_type_hlds__FromToInsts_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_21,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_22,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__Init0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__FromToInsts0_10, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__Final0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__FromToInsts0_10, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__Init_17;
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_18;
    MR_Word transform_hlds__equiv_type_hlds__Final_19;
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_20;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25_25;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_26_26;

    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Init0_15, &transform_hlds__equiv_type_hlds__Init_17, &transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_21, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_26_26);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Final0_16, &transform_hlds__equiv_type_hlds__Final_19, &transform_hlds__equiv_type_hlds__ChangedB_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_26_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24);
    }
    {
      *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__ChangedB_20);
    }
    switch (*transform_hlds__equiv_type_hlds__Changed_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__equiv_type_hlds__FromToInsts_11 = transform_hlds__equiv_type_hlds__FromToInsts0_10;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__equiv_type_hlds__FromToInsts_11 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Init_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Final_19));
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_7,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_8)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv3_STATE_VARIABLE_ProcInfo_40;
    MR_Word transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_ModuleInfo_42;
    MR_Word transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_PredInfo_44;
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Cache_46;

    {
      transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv3_STATE_VARIABLE_ProcInfo_40, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_5), &transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_PredInfo_44, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_7), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Cache_46);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv3_STATE_VARIABLE_ProcInfo_40));
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_ModuleInfo_42));
    *transform_hlds__equiv_type_hlds__wrapper_arg_6 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_PredInfo_44));
    *transform_hlds__equiv_type_hlds__wrapper_arg_8 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Cache_46));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__PredId_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_31,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_32)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61;
    MR_Word transform_hlds__equiv_type_hlds__ModuleName_13;
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14;
    MR_String transform_hlds__equiv_type_hlds__PredName_15;
    MR_Word transform_hlds__equiv_type_hlds__ArgTVarSet0_16;
    MR_Word transform_hlds__equiv_type_hlds__ExistQVars_17;
    MR_Word transform_hlds__equiv_type_hlds__ArgTypes0_18;
    MR_Word transform_hlds__equiv_type_hlds__ArgTypes_19;
    MR_Word transform_hlds__equiv_type_hlds__ArgTVarSet1_21;
    MR_Word transform_hlds__equiv_type_hlds__ClassContext0_22;
    MR_Word transform_hlds__equiv_type_hlds__ClassContext_23;
    MR_Word transform_hlds__equiv_type_hlds__ArgTVarSet_24;
    MR_Word transform_hlds__equiv_type_hlds__ItemId_25;
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo_26;
    MR_Word transform_hlds__equiv_type_hlds__ProcMap0_27;
    MR_Word transform_hlds__equiv_type_hlds__ProcMap_28;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33;
    MR_Word transform_hlds__equiv_type_hlds__Var_34;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_35_35;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_36_36;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_37_37;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_38_38;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39;
    MR_Word transform_hlds__equiv_type_hlds__Var_40;
    MR_Word transform_hlds__equiv_type_hlds__Var_41;
    MR_Word transform_hlds__equiv_type_hlds__Var_42;
    MR_Word transform_hlds__equiv_type_hlds__Var_43;
    MR_Word transform_hlds__equiv_type_hlds__Var_44;
    MR_Integer transform_hlds__equiv_type_hlds__Var_45;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_46_46;
    MR_Word transform_hlds__equiv_type_hlds__Var_47;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_48_48;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_49_49;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_51_51;
    MR_Word transform_hlds__equiv_type_hlds__Var_20;
    MR_Box transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_ModuleInfo_48_48;
    MR_Box transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_PredInfo_49_49;
    MR_Box transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_Cache_32;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__equiv_type_hlds__ModuleName_13);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__equiv_type_hlds__PredId_8, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33);
    }
    {
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14);
    }
    {
      transform_hlds__equiv_type_hlds__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33);
    }
    {
      transform_hlds__equiv_type_hlds__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Var_34, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__ModuleName_13));
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Var_34, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__PredName_15));
    }
    {
      recompilation__maybe_start_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ModuleName_13, transform_hlds__equiv_type_hlds__Var_34, transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_35_35);
    }
    {
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33, &transform_hlds__equiv_type_hlds__ArgTVarSet0_16, &transform_hlds__equiv_type_hlds__ExistQVars_17, &transform_hlds__equiv_type_hlds__ArgTypes0_18);
    }
    {
      parse_tree__equiv_type__replace_in_type_list_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__ArgTypes0_18, &transform_hlds__equiv_type_hlds__ArgTypes_19, &transform_hlds__equiv_type_hlds__Var_20, transform_hlds__equiv_type_hlds__ArgTVarSet0_16, &transform_hlds__equiv_type_hlds__ArgTVarSet1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_35_35, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_36_36);
    }
    {
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33, &transform_hlds__equiv_type_hlds__ClassContext0_22);
    }
    {
      parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__ClassContext0_22, &transform_hlds__equiv_type_hlds__ClassContext_23, transform_hlds__equiv_type_hlds__ArgTVarSet1_21, &transform_hlds__equiv_type_hlds__ArgTVarSet_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_36_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_37_37);
    }
    {
      hlds__hlds_pred__pred_info_set_class_context_3_p_0(transform_hlds__equiv_type_hlds__ClassContext_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_38_38);
    }
    {
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__equiv_type_hlds__ArgTVarSet_24, transform_hlds__equiv_type_hlds__ExistQVars_17, transform_hlds__equiv_type_hlds__ArgTypes_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_38_38, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
    {
      transform_hlds__equiv_type_hlds__Var_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
    {
      transform_hlds__equiv_type_hlds__Var_40 = recompilation__pred_or_func_to_item_type_1_f_0(transform_hlds__equiv_type_hlds__Var_41);
    }
    {
      transform_hlds__equiv_type_hlds__Var_44 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
    {
      transform_hlds__equiv_type_hlds__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Var_43, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_44));
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Var_43, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__PredName_15));
    }
    {
      transform_hlds__equiv_type_hlds__Var_45 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
    {
      transform_hlds__equiv_type_hlds__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_42, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_43));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_42, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_45));
    }
    {
      transform_hlds__equiv_type_hlds__ItemId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_25, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_40));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_25, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_42));
    }
    {
      recompilation__finish_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ItemId_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_37_37, transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14, &transform_hlds__equiv_type_hlds__MaybeRecompInfo_26);
    }
    {
      hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(transform_hlds__equiv_type_hlds__MaybeRecompInfo_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_46_46);
    }
    {
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39, &transform_hlds__equiv_type_hlds__ProcMap0_27);
    }
    {
      transform_hlds__equiv_type_hlds__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_47, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_47, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_7));
    }
    transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    {
      mercury__map__map_values_foldl3_9_p_3(transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61, transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__equiv_type_hlds__Var_47, transform_hlds__equiv_type_hlds__ProcMap0_27, &transform_hlds__equiv_type_hlds__ProcMap_28, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_46_46)), &transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_ModuleInfo_48_48, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39)), &transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_PredInfo_49_49, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_31)), &transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_Cache_32);
    }
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_ModuleInfo_48_48);
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_49_49 = ((MR_Word) transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_PredInfo_49_49);
    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_32 = ((MR_Word) transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_Cache_32);
    {
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__equiv_type_hlds__ProcMap_28, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_49_49, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_51_51);
    }
    {
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__equiv_type_hlds__PredId_8, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_51_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_48_48, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30);
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
  MR_Word transform_hlds__equiv_type_hlds__CtorArg0_7,
  MR_Word * transform_hlds__equiv_type_hlds__CtorArg_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_21)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__MaybeFieldName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__Type0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__Width_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 2)));
    MR_Word transform_hlds__equiv_type_hlds__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 3)));
    MR_Word transform_hlds__equiv_type_hlds__Type_14;
    MR_Word transform_hlds__equiv_type_hlds__Changed_15;
    MR_Word transform_hlds__equiv_type_hlds__Var_16;

    {
      parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__Type0_11, &transform_hlds__equiv_type_hlds__Type_14, &transform_hlds__equiv_type_hlds__Changed_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__Var_16);
    }
    switch (transform_hlds__equiv_type_hlds__Changed_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__equiv_type_hlds__CtorArg_8 = transform_hlds__equiv_type_hlds__CtorArg0_7;
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Width_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__equiv_type_hlds__CtorArg_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeFieldName_10));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_14));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Width_12));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Context_13));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_constructor_arg\'/5", (MR_String) "changed type of packed argument");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv1_CtorArg_8;
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_TVarSet_21;

    {
      transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv1_CtorArg_8, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_TVarSet_21);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_CtorArg_8));
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_TVarSet_21));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_4,
  MR_Word transform_hlds__equiv_type_hlds__ConsDefn0_5,
  MR_Word * transform_hlds__equiv_type_hlds__ConsDefn_6)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__TypeParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 2)));
    MR_Word transform_hlds__equiv_type_hlds__KindMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 3)));
    MR_Word transform_hlds__equiv_type_hlds__ExistQTVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 4)));
    MR_Word transform_hlds__equiv_type_hlds__ProgConstraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 5)));
    MR_Word transform_hlds__equiv_type_hlds__ConstructorArgs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 6)));
    MR_Word transform_hlds__equiv_type_hlds__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 7)));
    MR_Word transform_hlds__equiv_type_hlds__ConstructorArgs_15;
    MR_Word transform_hlds__equiv_type_hlds__TVarSet_16;
    MR_Word transform_hlds__equiv_type_hlds__Var_17;
    MR_Box transform_hlds__equiv_type_hlds__conv2_TVarSet_16;

    {
      transform_hlds__equiv_type_hlds__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_17, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_17, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_17, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_4));
    }
    transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
    {
      mercury__list__map_foldl_5_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22, transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2], transform_hlds__equiv_type_hlds__Var_17, transform_hlds__equiv_type_hlds__ConstructorArgs0_13, &transform_hlds__equiv_type_hlds__ConstructorArgs_15, ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet0_8)), &transform_hlds__equiv_type_hlds__conv2_TVarSet_16);
    }
    transform_hlds__equiv_type_hlds__TVarSet_16 = ((MR_Word) transform_hlds__equiv_type_hlds__conv2_TVarSet_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__equiv_type_hlds__ConsDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeParams_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__KindMap_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__ExistQTVars_11));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__ProgConstraints_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__ConstructorArgs_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__equiv_type_hlds__Context_14));
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__ModuleName_8,
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_49,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_50,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_51,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_52)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_13;
    MR_Word transform_hlds__equiv_type_hlds__Body0_14;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorSymName_15;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorItem_17;
    MR_Word transform_hlds__equiv_type_hlds__EquivTypeInfo0_18;
    MR_Word transform_hlds__equiv_type_hlds__TVarSet_29;
    MR_Word transform_hlds__equiv_type_hlds__EquivTypeInfo_30;
    MR_Word transform_hlds__equiv_type_hlds__Body_31;
    MR_Word transform_hlds__equiv_type_hlds__ItemId_48;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_55_55;
    MR_Integer transform_hlds__equiv_type_hlds___TypeCtorArity_16;

    {
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_49, &transform_hlds__equiv_type_hlds__TVarSet0_13);
    }
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_49, &transform_hlds__equiv_type_hlds__Body0_14);
    }
    transform_hlds__equiv_type_hlds__TypeCtorSymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_10, (MR_Integer) 0)));
    transform_hlds__equiv_type_hlds___TypeCtorArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_10, (MR_Integer) 1)));
    {
      transform_hlds__equiv_type_hlds__TypeCtorItem_17 = recompilation__type_ctor_to_item_name_1_f_0(transform_hlds__equiv_type_hlds__TypeCtor_10);
    }
    {
      recompilation__maybe_start_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ModuleName_8, transform_hlds__equiv_type_hlds__TypeCtorSymName_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_51, &transform_hlds__equiv_type_hlds__EquivTypeInfo0_18);
    }
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body0_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__equiv_type_hlds__EquivTypeInfo_30 = transform_hlds__equiv_type_hlds__EquivTypeInfo0_18;
          transform_hlds__equiv_type_hlds__Body_31 = transform_hlds__equiv_type_hlds__Body0_14;
          transform_hlds__equiv_type_hlds__TVarSet_29 = transform_hlds__equiv_type_hlds__TVarSet0_13;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__Ctors0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Ctors_28;
          MR_Word transform_hlds__equiv_type_hlds__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 2)));
          MR_Word transform_hlds__equiv_type_hlds__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 3)));
          MR_Word transform_hlds__equiv_type_hlds__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 4)));
          MR_Word transform_hlds__equiv_type_hlds__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 5)));
          MR_Word transform_hlds__equiv_type_hlds__Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word transform_hlds__equiv_type_hlds__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word transform_hlds__equiv_type_hlds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 7)));
          MR_Word transform_hlds__equiv_type_hlds__Var_58;
          MR_Word transform_hlds__equiv_type_hlds__Var_59;
          MR_Word transform_hlds__equiv_type_hlds__Var_60;
          MR_Word transform_hlds__equiv_type_hlds__Var_61;
          MR_Word transform_hlds__equiv_type_hlds__Var_62;
          MR_Word transform_hlds__equiv_type_hlds__Var_63;
          MR_Word transform_hlds__equiv_type_hlds__Var_64;
          MR_Word transform_hlds__equiv_type_hlds__Var_65;
          MR_Word transform_hlds__equiv_type_hlds__Var_57;

          {
            parse_tree__equiv_type__replace_in_ctors_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Ctors0_19, &transform_hlds__equiv_type_hlds__Ctors_28, transform_hlds__equiv_type_hlds__TVarSet0_13, &transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__EquivTypeInfo0_18, &transform_hlds__equiv_type_hlds__EquivTypeInfo_30);
          }
          transform_hlds__equiv_type_hlds__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)));
          transform_hlds__equiv_type_hlds__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 1)));
          transform_hlds__equiv_type_hlds__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 2)));
          transform_hlds__equiv_type_hlds__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 3)));
          transform_hlds__equiv_type_hlds__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 4)));
          transform_hlds__equiv_type_hlds__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 5)));
          transform_hlds__equiv_type_hlds__Var_63 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) & (MR_Integer) 1);
          transform_hlds__equiv_type_hlds__Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          transform_hlds__equiv_type_hlds__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 7)));
          {
            transform_hlds__equiv_type_hlds__Body_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Ctors_28));
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_58));
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_59));
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_60));
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_61));
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_62));
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 6) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Var_63 | ((transform_hlds__equiv_type_hlds__Var_64 << (MR_Integer) 1)))));
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 7) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_65));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__equiv_type_hlds__Type0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Type_33;
          MR_Word transform_hlds__equiv_type_hlds__Var_34;

          {
            parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_32, &transform_hlds__equiv_type_hlds__Type_33, &transform_hlds__equiv_type_hlds__Var_34, transform_hlds__equiv_type_hlds__TVarSet0_13, &transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__EquivTypeInfo0_18, &transform_hlds__equiv_type_hlds__EquivTypeInfo_30);
          }
          {
            transform_hlds__equiv_type_hlds__Body_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_33));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__equiv_type_hlds__DetailsSolver0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__SolverTypeDetails0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__DetailsSolver0_36, (MR_Integer) 0)));
              MR_Word transform_hlds__equiv_type_hlds__UserEq_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__DetailsSolver0_36, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__RepnType0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_37, (MR_Integer) 0)));
              MR_Word transform_hlds__equiv_type_hlds__GroundInst_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_37, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__AnyInst_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_37, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__MutableItems_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_37, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__RepnType_43;
              MR_Word transform_hlds__equiv_type_hlds__SolverTypeDetails_45;
              MR_Word transform_hlds__equiv_type_hlds__DetailsSolver_46;
              MR_Word transform_hlds__equiv_type_hlds__Var_44;

              {
                parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__RepnType0_39, &transform_hlds__equiv_type_hlds__RepnType_43, &transform_hlds__equiv_type_hlds__Var_44, transform_hlds__equiv_type_hlds__TVarSet0_13, &transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__EquivTypeInfo0_18, &transform_hlds__equiv_type_hlds__EquivTypeInfo_30);
              }
              {
                transform_hlds__equiv_type_hlds__SolverTypeDetails_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__RepnType_43));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__GroundInst_40));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__AnyInst_41));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__MutableItems_42));
              }
              {
                transform_hlds__equiv_type_hlds__DetailsSolver_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__DetailsSolver_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__SolverTypeDetails_45));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__DetailsSolver_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__UserEq_38));
              }
              {
                transform_hlds__equiv_type_hlds__Body_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__DetailsSolver_46));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              transform_hlds__equiv_type_hlds__EquivTypeInfo_30 = transform_hlds__equiv_type_hlds__EquivTypeInfo0_18;
              transform_hlds__equiv_type_hlds__Body_31 = transform_hlds__equiv_type_hlds__Body0_14;
              transform_hlds__equiv_type_hlds__TVarSet_29 = transform_hlds__equiv_type_hlds__TVarSet0_13;
            }
            break;
        }
        break;
    }
    {
      transform_hlds__equiv_type_hlds__ItemId_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_48, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_48, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtorItem_17));
    }
    {
      recompilation__finish_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ItemId_48, transform_hlds__equiv_type_hlds__EquivTypeInfo_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_52);
    }
    {
      hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__equiv_type_hlds__Body_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_49, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_55_55);
    }
    {
      hlds__hlds_data__set_type_defn_tvarset_3_p_0(transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_55_55, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_50);
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__TypeDefn0_6;

    {
      transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8, transform_hlds__equiv_type_hlds__TypeCtor_4, &transform_hlds__equiv_type_hlds__TypeDefn0_6);
    }
    if (transform_hlds__equiv_type_hlds__succeeded)
      {
        MR_Word transform_hlds__equiv_type_hlds__TypeDefn_7;

        {
          hlds__hlds_data__set_type_defn_in_exported_eqv_3_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__TypeDefn0_6, &transform_hlds__equiv_type_hlds__TypeDefn_7);
        }
        {
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(transform_hlds__equiv_type_hlds__TypeCtor_4, transform_hlds__equiv_type_hlds__TypeDefn_7, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9);
        }
      }
    else
      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_7,
  MR_Word transform_hlds__equiv_type_hlds__Defn_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_29,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_30,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_31,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_32)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__Body_11;

    {
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__Body_11);
    }
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_30 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_29;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_32 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_31;
        }
        break;
      case (MR_Integer) 1:
        {
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_30 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_29;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_32 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_31;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__equiv_type_hlds__EqvType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_11, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__TVarSet_13;
          MR_Word transform_hlds__equiv_type_hlds__Params_14;
          MR_Word transform_hlds__equiv_type_hlds__TypeStatus_15;
          MR_Word transform_hlds__equiv_type_hlds__IsExported_16;
          MR_Word transform_hlds__equiv_type_hlds__Var_33;

          {
            hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__TVarSet_13);
          }
          {
            hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__Params_14);
          }
          {
            hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__TypeStatus_15);
          }
          {
            transform_hlds__equiv_type_hlds__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_33, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_13));
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_33, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Params_14));
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_33, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__EqvType_12));
          }
          {
            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_7)), ((MR_Box) (transform_hlds__equiv_type_hlds__Var_33)), transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_29, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_30);
          }
          {
            transform_hlds__equiv_type_hlds__IsExported_16 = hlds__status__type_status_is_exported_1_f_0(transform_hlds__equiv_type_hlds__TypeStatus_15);
          }
          switch (transform_hlds__equiv_type_hlds__IsExported_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_32 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_31;
              break;
            case (MR_Integer) 1:
              {
                transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(transform_hlds__equiv_type_hlds__EqvType_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_32);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_30 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_29;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_32 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_30 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_29;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_32 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_31;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Set_9;

    {
      transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Set_9);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Set_9));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(
  MR_Word transform_hlds__equiv_type_hlds__Type_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtor_6;
    MR_Word transform_hlds__equiv_type_hlds__Args_7;

    {
      transform_hlds__equiv_type_hlds__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__equiv_type_hlds__Type_4, &transform_hlds__equiv_type_hlds__TypeCtor_6, &transform_hlds__equiv_type_hlds__Args_7);
    }
    if (transform_hlds__equiv_type_hlds__succeeded)
      {
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_10_10;
        MR_Box transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_Set_9;

        {
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_6)), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_10_10);
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[0], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[12], transform_hlds__equiv_type_hlds__Args_7, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_10_10)), &transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_Set_9);
        }
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9 = ((MR_Word) transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_Set_9);
      }
    else
      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv11_STATE_VARIABLE_ModuleInfo_30;
    MR_Word transform_hlds__equiv_type_hlds__conv10_STATE_VARIABLE_Cache_32;

    {
      transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv11_STATE_VARIABLE_ModuleInfo_30, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv10_STATE_VARIABLE_Cache_32);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv11_STATE_VARIABLE_ModuleInfo_30));
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv10_STATE_VARIABLE_Cache_32));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv9_ConsDefn_6;

    {
      transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv9_ConsDefn_6);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv9_ConsDefn_6));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv7_STATE_VARIABLE_Defn_50;
    MR_Word transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_MaybeRecompInfo_52;

    {
      transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv7_STATE_VARIABLE_Defn_50, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_MaybeRecompInfo_52);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv7_STATE_VARIABLE_Defn_50));
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_MaybeRecompInfo_52));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_TypeTable_9;

    {
      transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_TypeTable_9);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_TypeTable_9));
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1(
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6)
{
  {
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
    MR_Word transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_TypeEqvMap_30;
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_EqvExportTypes_32;

    {
      transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_TypeEqvMap_30, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_5), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_EqvExportTypes_32);
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_TypeEqvMap_30));
    *transform_hlds__equiv_type_hlds__wrapper_arg_6 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_EqvExportTypes_32));
  }
}

void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0(
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_21)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39;
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53;
    MR_Word transform_hlds__equiv_type_hlds__TypeTable0_4;
    MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_5;
    MR_Word transform_hlds__equiv_type_hlds__EqvExportTypes_6;
    MR_Word transform_hlds__equiv_type_hlds__TypeTable1_7;
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo0_8;
    MR_Word transform_hlds__equiv_type_hlds__ModuleName_9;
    MR_Word transform_hlds__equiv_type_hlds__TypeTable_10;
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo_11;
    MR_Word transform_hlds__equiv_type_hlds__Insts0_12;
    MR_Word transform_hlds__equiv_type_hlds__InstCache0_13;
    MR_Word transform_hlds__equiv_type_hlds__Insts_14;
    MR_Word transform_hlds__equiv_type_hlds__InstCache_15;
    MR_Word transform_hlds__equiv_type_hlds__ConsTable0_16;
    MR_Word transform_hlds__equiv_type_hlds__ConsTable_17;
    MR_Word transform_hlds__equiv_type_hlds__PredIds_18;
    MR_Word transform_hlds__equiv_type_hlds__Var_23;
    MR_Word transform_hlds__equiv_type_hlds__Var_24;
    MR_Word transform_hlds__equiv_type_hlds__Var_26;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_27_27;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30;
    MR_Word transform_hlds__equiv_type_hlds__Var_31;
    MR_Word transform_hlds__equiv_type_hlds__Var_66;
    MR_Box transform_hlds__equiv_type_hlds__conv3_TypeEqvMap_5;
    MR_Box transform_hlds__equiv_type_hlds__conv2_EqvExportTypes_6;
    MR_Box transform_hlds__equiv_type_hlds__conv5_TypeTable1_7;
    MR_Box transform_hlds__equiv_type_hlds__conv8_MaybeRecompInfo_11;
    MR_Word transform_hlds__equiv_type_hlds__Var_19;
    MR_Box transform_hlds__equiv_type_hlds__conv13_STATE_VARIABLE_ModuleInfo_21;
    MR_Box transform_hlds__equiv_type_hlds__conv12_Var_19;

    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__TypeTable0_4);
    }
    transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
    {
      transform_hlds__equiv_type_hlds__Var_23 = mercury__map__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0);
    }
    {
      transform_hlds__equiv_type_hlds__Var_24 = mercury__set__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39);
    }
    {
      hlds__hlds_data__foldl2_over_type_ctor_defns_6_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[0], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[0], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[10], transform_hlds__equiv_type_hlds__TypeTable0_4, ((MR_Box) (transform_hlds__equiv_type_hlds__Var_23)), &transform_hlds__equiv_type_hlds__conv3_TypeEqvMap_5, ((MR_Box) (transform_hlds__equiv_type_hlds__Var_24)), &transform_hlds__equiv_type_hlds__conv2_EqvExportTypes_6);
    }
    transform_hlds__equiv_type_hlds__TypeEqvMap_5 = ((MR_Word) transform_hlds__equiv_type_hlds__conv3_TypeEqvMap_5);
    transform_hlds__equiv_type_hlds__EqvExportTypes_6 = ((MR_Word) transform_hlds__equiv_type_hlds__conv2_EqvExportTypes_6);
    {
      mercury__set__fold_4_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[2], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[11], transform_hlds__equiv_type_hlds__EqvExportTypes_6, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeTable0_4)), &transform_hlds__equiv_type_hlds__conv5_TypeTable1_7);
    }
    transform_hlds__equiv_type_hlds__TypeTable1_7 = ((MR_Word) transform_hlds__equiv_type_hlds__conv5_TypeTable1_7);
    {
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__MaybeRecompInfo0_8);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__ModuleName_9);
    }
    {
      transform_hlds__equiv_type_hlds__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_26, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_26, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_26, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__ModuleName_9));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_26, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_5));
    }
    {
      hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[1], transform_hlds__equiv_type_hlds__Var_26, transform_hlds__equiv_type_hlds__TypeTable1_7, &transform_hlds__equiv_type_hlds__TypeTable_10, ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeRecompInfo0_8)), &transform_hlds__equiv_type_hlds__conv8_MaybeRecompInfo_11);
    }
    transform_hlds__equiv_type_hlds__MaybeRecompInfo_11 = ((MR_Word) transform_hlds__equiv_type_hlds__conv8_MaybeRecompInfo_11);
    {
      hlds__hlds_module__module_info_set_type_table_3_p_0(transform_hlds__equiv_type_hlds__TypeTable_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_27_27);
    }
    {
      hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(transform_hlds__equiv_type_hlds__MaybeRecompInfo_11, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_27_27, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28);
    }
    {
      hlds__hlds_module__module_info_get_inst_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__equiv_type_hlds__Insts0_12);
    }
    transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
    {
      transform_hlds__equiv_type_hlds__InstCache0_13 = mercury__map__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53, transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_5, transform_hlds__equiv_type_hlds__Insts0_12, &transform_hlds__equiv_type_hlds__Insts_14, transform_hlds__equiv_type_hlds__InstCache0_13, &transform_hlds__equiv_type_hlds__InstCache_15);
    }
    {
      hlds__hlds_module__module_info_set_inst_table_3_p_0(transform_hlds__equiv_type_hlds__Insts_14, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29);
    }
    {
      hlds__hlds_module__module_info_get_cons_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__equiv_type_hlds__ConsTable0_16);
    }
    {
      transform_hlds__equiv_type_hlds__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_66, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_66, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_66, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_5));
    }
    {
      hlds__hlds_data__replace_cons_defns_in_cons_table_3_p_0(transform_hlds__equiv_type_hlds__Var_66, transform_hlds__equiv_type_hlds__ConsTable0_16, &transform_hlds__equiv_type_hlds__ConsTable_17);
    }
    {
      hlds__hlds_module__module_info_set_cons_table_3_p_0(transform_hlds__equiv_type_hlds__ConsTable_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30);
    }
    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__equiv_type_hlds__PredIds_18);
    }
    {
      transform_hlds__equiv_type_hlds__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_31, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_31, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_5));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], transform_hlds__equiv_type_hlds__Var_31, transform_hlds__equiv_type_hlds__PredIds_18, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__equiv_type_hlds__conv13_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (transform_hlds__equiv_type_hlds__InstCache_15)), &transform_hlds__equiv_type_hlds__conv12_Var_19);
    }
    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__equiv_type_hlds__conv13_STATE_VARIABLE_ModuleInfo_21);
    transform_hlds__equiv_type_hlds__Var_19 = ((MR_Word) transform_hlds__equiv_type_hlds__conv12_Var_19);
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_35,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__UnifyInsts0_9;
    MR_Word transform_hlds__equiv_type_hlds__MergeInsts0_10;
    MR_Word transform_hlds__equiv_type_hlds__GroundInsts0_11;
    MR_Word transform_hlds__equiv_type_hlds__AnyInsts0_12;
    MR_Word transform_hlds__equiv_type_hlds__SharedInsts0_13;
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInsts0_14;
    MR_Word transform_hlds__equiv_type_hlds__UnifyInstPairs0_15;
    MR_Word transform_hlds__equiv_type_hlds__MergeInstPairs0_16;
    MR_Word transform_hlds__equiv_type_hlds__GroundInstPairs0_17;
    MR_Word transform_hlds__equiv_type_hlds__AnyInstPairs0_18;
    MR_Word transform_hlds__equiv_type_hlds__SharedInstPairs0_19;
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInstPairs0_20;
    MR_Word transform_hlds__equiv_type_hlds__UnifyInstPairs_21;
    MR_Word transform_hlds__equiv_type_hlds__MergeInstPairs_22;
    MR_Word transform_hlds__equiv_type_hlds__GroundInstPairs_23;
    MR_Word transform_hlds__equiv_type_hlds__AnyInstPairs_24;
    MR_Word transform_hlds__equiv_type_hlds__SharedInstPairs_25;
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInstPairs_26;
    MR_Word transform_hlds__equiv_type_hlds__UnifyInsts_28;
    MR_Word transform_hlds__equiv_type_hlds__MergeInsts_29;
    MR_Word transform_hlds__equiv_type_hlds__GroundInsts_30;
    MR_Word transform_hlds__equiv_type_hlds__AnyInsts_31;
    MR_Word transform_hlds__equiv_type_hlds__SharedInsts_32;
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInsts_33;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_40_40;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_43_43;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46_46;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_55_55;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_56_56;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_57_57;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_58_58;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_59_59;
    MR_Word transform_hlds__equiv_type_hlds__Var_27;

    {
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__UnifyInsts0_9);
    }
    {
      hlds__hlds_data__inst_table_get_merge_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__MergeInsts0_10);
    }
    {
      hlds__hlds_data__inst_table_get_ground_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__GroundInsts0_11);
    }
    {
      hlds__hlds_data__inst_table_get_any_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__AnyInsts0_12);
    }
    {
      hlds__hlds_data__inst_table_get_shared_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__SharedInsts0_13);
    }
    {
      hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__MostlyUniqInsts0_14);
    }
    {
      hlds__hlds_data__unify_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__UnifyInsts0_9, &transform_hlds__equiv_type_hlds__UnifyInstPairs0_15);
    }
    {
      hlds__hlds_data__merge_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MergeInsts0_10, &transform_hlds__equiv_type_hlds__MergeInstPairs0_16);
    }
    {
      hlds__hlds_data__ground_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__GroundInsts0_11, &transform_hlds__equiv_type_hlds__GroundInstPairs0_17);
    }
    {
      hlds__hlds_data__any_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__AnyInsts0_12, &transform_hlds__equiv_type_hlds__AnyInstPairs0_18);
    }
    {
      hlds__hlds_data__shared_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__SharedInsts0_13, &transform_hlds__equiv_type_hlds__SharedInstPairs0_19);
    }
    {
      hlds__hlds_data__mostly_uniq_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MostlyUniqInsts0_14, &transform_hlds__equiv_type_hlds__MostlyUniqInstPairs0_20);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__UnifyInstPairs0_15, &transform_hlds__equiv_type_hlds__UnifyInstPairs_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_40_40);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__MergeInstPairs0_16, &transform_hlds__equiv_type_hlds__MergeInstPairs_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_40_40, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_43_43);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__GroundInstPairs0_17, &transform_hlds__equiv_type_hlds__GroundInstPairs_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_43_43, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46_46);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__AnyInstPairs0_18, &transform_hlds__equiv_type_hlds__AnyInstPairs_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46_46, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__SharedInstPairs0_19, &transform_hlds__equiv_type_hlds__SharedInstPairs_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__MostlyUniqInstPairs0_20, &transform_hlds__equiv_type_hlds__MostlyUniqInstPairs_26, *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37, &transform_hlds__equiv_type_hlds__Var_27);
    }
    {
      hlds__hlds_data__unify_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__UnifyInstPairs_21, &transform_hlds__equiv_type_hlds__UnifyInsts_28);
    }
    {
      hlds__hlds_data__merge_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MergeInstPairs_22, &transform_hlds__equiv_type_hlds__MergeInsts_29);
    }
    {
      hlds__hlds_data__ground_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__GroundInstPairs_23, &transform_hlds__equiv_type_hlds__GroundInsts_30);
    }
    {
      hlds__hlds_data__any_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__AnyInstPairs_24, &transform_hlds__equiv_type_hlds__AnyInsts_31);
    }
    {
      hlds__hlds_data__shared_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__SharedInstPairs_25, &transform_hlds__equiv_type_hlds__SharedInsts_32);
    }
    {
      hlds__hlds_data__mostly_uniq_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MostlyUniqInstPairs_26, &transform_hlds__equiv_type_hlds__MostlyUniqInsts_33);
    }
    {
      hlds__hlds_data__inst_table_set_unify_insts_3_p_0(transform_hlds__equiv_type_hlds__UnifyInsts_28, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_55_55);
    }
    {
      hlds__hlds_data__inst_table_set_merge_insts_3_p_0(transform_hlds__equiv_type_hlds__MergeInsts_29, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_55_55, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_56_56);
    }
    {
      hlds__hlds_data__inst_table_set_ground_insts_3_p_0(transform_hlds__equiv_type_hlds__GroundInsts_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_56_56, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_57_57);
    }
    {
      hlds__hlds_data__inst_table_set_any_insts_3_p_0(transform_hlds__equiv_type_hlds__AnyInsts_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_57_57, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_58_58);
    }
    {
      hlds__hlds_data__inst_table_set_shared_insts_3_p_0(transform_hlds__equiv_type_hlds__SharedInsts_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_58_58, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_59_59);
    }
    {
      hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(transform_hlds__equiv_type_hlds__MostlyUniqInsts_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_59_59, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_35);
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[9], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[9];
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

        {
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
        {
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
        {
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
          }
        else
          {
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Key_33;
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;

            {
              transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Key0_31, &transform_hlds__equiv_type_hlds__Key_33, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
            {
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
                      break;
                    case (MR_Integer) 1:
                      {
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                      }
                      break;
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;

                  {
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_33));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4 = transform_hlds__equiv_type_hlds__Elements0_27;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__UnifyInstInfo0_8,
  MR_Word * transform_hlds__equiv_type_hlds__UnifyInstInfo_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__Live_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__Real_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__InstA0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__equiv_type_hlds__InstB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_16;
    MR_Word transform_hlds__equiv_type_hlds__InstA_17;
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_18;
    MR_Word transform_hlds__equiv_type_hlds__TVarSet1_19;
    MR_Word transform_hlds__equiv_type_hlds__InstB_20;
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_21;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25;
    MR_Word transform_hlds__equiv_type_hlds___TVarSet_22;

    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_16);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstA0_14, &transform_hlds__equiv_type_hlds__InstA_17, &transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__TVarSet0_16, &transform_hlds__equiv_type_hlds__TVarSet1_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstB0_15, &transform_hlds__equiv_type_hlds__InstB_20, &transform_hlds__equiv_type_hlds__ChangedB_21, transform_hlds__equiv_type_hlds__TVarSet1_19, &transform_hlds__equiv_type_hlds___TVarSet_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24);
    }
    {
      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__ChangedB_21);
    }
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__equiv_type_hlds__UnifyInstInfo_9 = transform_hlds__equiv_type_hlds__UnifyInstInfo0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__equiv_type_hlds__UnifyInstInfo_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Live_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Real_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_17));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_20));
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[8], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[8];
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

        {
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
        {
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
        {
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
          }
        else
          {
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Key_33;
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;

            {
              transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Key0_31, &transform_hlds__equiv_type_hlds__Key_33, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
            {
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
                      break;
                    case (MR_Integer) 1:
                      {
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                      }
                      break;
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;

                  {
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_33));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4 = transform_hlds__equiv_type_hlds__Elements0_27;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__MergeInstInfo0_8,
  MR_Word * transform_hlds__equiv_type_hlds__MergeInstInfo_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_21,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__InstA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__MergeInstInfo0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__equiv_type_hlds__InstB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__MergeInstInfo0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_14;
    MR_Word transform_hlds__equiv_type_hlds__InstA_15;
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_16;
    MR_Word transform_hlds__equiv_type_hlds__TVarSet1_17;
    MR_Word transform_hlds__equiv_type_hlds__InstB_18;
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_19;
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23;
    MR_Word transform_hlds__equiv_type_hlds___TVarSet_20;

    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_14);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstA0_12, &transform_hlds__equiv_type_hlds__InstA_15, &transform_hlds__equiv_type_hlds__ChangedA_16, transform_hlds__equiv_type_hlds__TVarSet0_14, &transform_hlds__equiv_type_hlds__TVarSet1_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_21, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23);
    }
    {
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstB0_13, &transform_hlds__equiv_type_hlds__InstB_18, &transform_hlds__equiv_type_hlds__ChangedB_19, transform_hlds__equiv_type_hlds__TVarSet1_17, &transform_hlds__equiv_type_hlds___TVarSet_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22);
    }
    {
      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_16, transform_hlds__equiv_type_hlds__ChangedB_19);
    }
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__equiv_type_hlds__MergeInstInfo_9 = transform_hlds__equiv_type_hlds__MergeInstInfo0_8;
        break;
      case (MR_Integer) 1:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__equiv_type_hlds__MergeInstInfo_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_15));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_18));
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[7], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[7];
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

        {
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
        {
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
        {
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
          }
        else
          {
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
            MR_Word transform_hlds__equiv_type_hlds__InstName0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Uniq_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) & (MR_Integer) 7);
            MR_Word transform_hlds__equiv_type_hlds__Live_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word transform_hlds__equiv_type_hlds__Real_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word transform_hlds__equiv_type_hlds__InstName_65;
            MR_Word transform_hlds__equiv_type_hlds__TVarSet0_74;
            MR_Word transform_hlds__equiv_type_hlds___TVarSet_75;

            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_74);
            }
            {
              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__InstName0_61, &transform_hlds__equiv_type_hlds__InstName_65, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__TVarSet0_74, &transform_hlds__equiv_type_hlds___TVarSet_75, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
            {
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
                      break;
                    case (MR_Integer) 1:
                      {
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                      }
                      break;
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;
                  MR_Word transform_hlds__equiv_type_hlds__Key_78;

                  {
                    transform_hlds__equiv_type_hlds__Key_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstName_65));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 1) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Uniq_62 | ((((transform_hlds__equiv_type_hlds__Live_63 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_64 << (MR_Integer) 4)))))));
                  }
                  {
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_78));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4 = transform_hlds__equiv_type_hlds__Elements0_27;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[6], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[6];
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

        {
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
        {
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
        {
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
          }
        else
          {
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
            MR_Word transform_hlds__equiv_type_hlds__InstName0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Uniq_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) & (MR_Integer) 7);
            MR_Word transform_hlds__equiv_type_hlds__Live_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word transform_hlds__equiv_type_hlds__Real_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word transform_hlds__equiv_type_hlds__InstName_65;
            MR_Word transform_hlds__equiv_type_hlds__TVarSet0_74;
            MR_Word transform_hlds__equiv_type_hlds___TVarSet_75;

            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_74);
            }
            {
              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__InstName0_61, &transform_hlds__equiv_type_hlds__InstName_65, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__TVarSet0_74, &transform_hlds__equiv_type_hlds___TVarSet_75, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
            {
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
                      break;
                    case (MR_Integer) 1:
                      {
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                      }
                      break;
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;
                  MR_Word transform_hlds__equiv_type_hlds__Key_78;

                  {
                    transform_hlds__equiv_type_hlds__Key_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstName_65));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 1) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Uniq_62 | ((((transform_hlds__equiv_type_hlds__Live_63 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_64 << (MR_Integer) 4)))))));
                  }
                  {
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_78));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4 = transform_hlds__equiv_type_hlds__Elements0_27;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__MaybeInstDet0_8,
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInstDet_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__MaybeInstDet0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__MaybeInstDet_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeInstDet0_8, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeInstDet0_8, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__TVarSet_14;
        MR_Word transform_hlds__equiv_type_hlds__Inst_15;
        MR_Word transform_hlds__equiv_type_hlds__Var_16;

        {
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet_14);
        }
        {
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Inst0_12, &transform_hlds__equiv_type_hlds__Inst_15, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__TVarSet_14, &transform_hlds__equiv_type_hlds__Var_16, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18);
        }
        switch (*transform_hlds__equiv_type_hlds__Changed_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__equiv_type_hlds__MaybeInstDet_9 = transform_hlds__equiv_type_hlds__MaybeInstDet0_8;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__equiv_type_hlds__MaybeInstDet_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inst_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Det_13));
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

    {
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[5], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[5];
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

        {
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
        {
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
        {
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
          }
        else
          {
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Key_33;
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
            MR_Word transform_hlds__equiv_type_hlds__TVarSet0_61;
            MR_Word transform_hlds__equiv_type_hlds___TVarSet_62;

            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_61);
            }
            {
              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Key0_31, &transform_hlds__equiv_type_hlds__Key_33, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__TVarSet0_61, &transform_hlds__equiv_type_hlds___TVarSet_62, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
            {
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
                      break;
                    case (MR_Integer) 1:
                      {
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                      }
                      break;
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;

                  {
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_33));
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
                  }
                  {
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
                  }
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4 = transform_hlds__equiv_type_hlds__Elements0_27;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
              MR_Word transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_Cache_0_9;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_UnSortedElements_0_7;
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__next_value_of_STATE_VARIABLE_RevSortedElements_0_5;
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
  MR_Word transform_hlds__equiv_type_hlds__MaybeInst0_8,
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInst_9,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__MaybeInst0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__MaybeInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeInst0_8, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__TVarSet_13;
        MR_Word transform_hlds__equiv_type_hlds__Inst_14;
        MR_Word transform_hlds__equiv_type_hlds__Var_15;

        {
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet_13);
        }
        {
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Inst0_12, &transform_hlds__equiv_type_hlds__Inst_14, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__TVarSet_13, &transform_hlds__equiv_type_hlds__Var_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17);
        }
        switch (*transform_hlds__equiv_type_hlds__Changed_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__equiv_type_hlds__MaybeInst_9 = transform_hlds__equiv_type_hlds__MaybeInst0_8;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__equiv_type_hlds__MaybeInst_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inst_14));
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__Inst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__Insts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__Inst_24;
        MR_Word transform_hlds__equiv_type_hlds__Changed0_25;
        MR_Word transform_hlds__equiv_type_hlds__Insts_26;
        MR_Word transform_hlds__equiv_type_hlds__Changed1_27;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33;

        {
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Inst0_18, &transform_hlds__equiv_type_hlds__Inst_24, &transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33);
        }
        {
          transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Insts0_19, &transform_hlds__equiv_type_hlds__Insts_26, &transform_hlds__equiv_type_hlds__Changed1_27, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);
        }
        {
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__Changed1_27);
        }
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inst_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_26));
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__ConsId_18;
        MR_Word transform_hlds__equiv_type_hlds__Insts0_19;
        MR_Word transform_hlds__equiv_type_hlds__BoundInsts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__Insts_25;
        MR_Word transform_hlds__equiv_type_hlds__InstsChanged_26;
        MR_Word transform_hlds__equiv_type_hlds__BoundInsts_27;
        MR_Word transform_hlds__equiv_type_hlds__BoundInstsChanged_28;
        MR_Word transform_hlds__equiv_type_hlds__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35;

        transform_hlds__equiv_type_hlds__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_33, (MR_Integer) 0)));
        transform_hlds__equiv_type_hlds__Insts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_33, (MR_Integer) 1)));
        {
          transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Insts0_19, &transform_hlds__equiv_type_hlds__Insts_25, &transform_hlds__equiv_type_hlds__InstsChanged_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35);
        }
        {
          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__BoundInsts0_20, &transform_hlds__equiv_type_hlds__BoundInsts_27, &transform_hlds__equiv_type_hlds__BoundInstsChanged_28, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);
        }
        {
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__InstsChanged_26, transform_hlds__equiv_type_hlds__BoundInstsChanged_28);
        }
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__equiv_type_hlds__Var_38;

              {
                transform_hlds__equiv_type_hlds__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_38, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__ConsId_18));
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Var_38, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_25));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_38));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_27));
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__InstName0_10,
  MR_Word * transform_hlds__equiv_type_hlds__InstName_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__InstName0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__equiv_type_hlds__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Insts_17;

          {
            transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Insts0_16, &transform_hlds__equiv_type_hlds__Insts_17, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
          }
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__equiv_type_hlds__InstName_11 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_15));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_17));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__Live_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Real_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__InstA0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)));
          MR_Word transform_hlds__equiv_type_hlds__InstB0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 3)));
          MR_Word transform_hlds__equiv_type_hlds__InstA_22;
          MR_Word transform_hlds__equiv_type_hlds__ChangedA_23;
          MR_Word transform_hlds__equiv_type_hlds__InstB_24;
          MR_Word transform_hlds__equiv_type_hlds__ChangedB_25;
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56;
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_57_57;

          {
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstA0_20, &transform_hlds__equiv_type_hlds__InstA_22, &transform_hlds__equiv_type_hlds__ChangedA_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_57_57);
          }
          {
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstB0_21, &transform_hlds__equiv_type_hlds__InstB_24, &transform_hlds__equiv_type_hlds__ChangedB_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_57_57, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
          }
          {
            *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_23, transform_hlds__equiv_type_hlds__ChangedB_25);
          }
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__equiv_type_hlds__InstName_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Live_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Real_19));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_22));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_24));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_52_52;
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_53_53;
          MR_Word transform_hlds__equiv_type_hlds__InstA0_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__InstB0_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__InstA_64;
          MR_Word transform_hlds__equiv_type_hlds__ChangedA_65;
          MR_Word transform_hlds__equiv_type_hlds__InstB_66;
          MR_Word transform_hlds__equiv_type_hlds__ChangedB_67;

          {
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstA0_62, &transform_hlds__equiv_type_hlds__InstA_64, &transform_hlds__equiv_type_hlds__ChangedA_65, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_52_52, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_53_53);
          }
          {
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstB0_63, &transform_hlds__equiv_type_hlds__InstB_66, &transform_hlds__equiv_type_hlds__ChangedB_67, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_52_52, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_53_53, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
          }
          {
            *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_65, transform_hlds__equiv_type_hlds__ChangedB_67);
          }
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__equiv_type_hlds__InstName_11 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_64));
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_66));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__equiv_type_hlds__Name0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Uniq_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word transform_hlds__equiv_type_hlds__Name_68;
              MR_Word transform_hlds__equiv_type_hlds__Live_69 = ((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Word transform_hlds__equiv_type_hlds__Real_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

              {
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_26, &transform_hlds__equiv_type_hlds__Name_68, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_68));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Live_69 | ((((transform_hlds__equiv_type_hlds__Uniq_27 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_70 << (MR_Integer) 4)))))));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__equiv_type_hlds__Name_71;
              MR_Word transform_hlds__equiv_type_hlds__Live_72 = ((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Word transform_hlds__equiv_type_hlds__Real_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word transform_hlds__equiv_type_hlds__Name0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Uniq_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

              {
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_74, &transform_hlds__equiv_type_hlds__Name_71, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_71));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Live_72 | ((((transform_hlds__equiv_type_hlds__Uniq_75 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_73 << (MR_Integer) 4)))))));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__equiv_type_hlds__Name_76;
              MR_Word transform_hlds__equiv_type_hlds__Name0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));

              {
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_77, &transform_hlds__equiv_type_hlds__Name_76, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_76));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__equiv_type_hlds__Name_78;
              MR_Word transform_hlds__equiv_type_hlds__Name0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));

              {
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_79, &transform_hlds__equiv_type_hlds__Name_78, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_78));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__equiv_type_hlds__Type0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Type_29;
              MR_Word transform_hlds__equiv_type_hlds__Uniq_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Var_30;

              {
                parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_28, &transform_hlds__equiv_type_hlds__Type_29, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__Var_30);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_80));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_29));
                  }
                  break;
              }
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__equiv_type_hlds__TypeChanged_31;
              MR_Word transform_hlds__equiv_type_hlds__Changed0_33;
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38;
              MR_Word transform_hlds__equiv_type_hlds__Name_81;
              MR_Word transform_hlds__equiv_type_hlds__Name0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Type0_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Type_84;
              MR_Word transform_hlds__equiv_type_hlds__Var_32;

              {
                parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_83, &transform_hlds__equiv_type_hlds__Type_84, &transform_hlds__equiv_type_hlds__TypeChanged_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__Var_32);
              }
              {
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_82, &transform_hlds__equiv_type_hlds__Name_81, &transform_hlds__equiv_type_hlds__Changed0_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
              {
                *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__TypeChanged_31, transform_hlds__equiv_type_hlds__Changed0_33);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_84));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_81));
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
transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Inst0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(transform_hlds__equiv_type_hlds__Inst0_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
            }
            break;
          case (MR_Integer) 1:
            {
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__Type0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 0)));
          MR_Word transform_hlds__equiv_type_hlds__Type_27;
          MR_Word transform_hlds__equiv_type_hlds__Var_28;

          {
            parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_26, &transform_hlds__equiv_type_hlds__Type_27, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__Var_28);
          }
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
              break;
            case (MR_Integer) 1:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *transform_hlds__equiv_type_hlds__Inst_11 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_27));
              }
              break;
          }
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__equiv_type_hlds__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
          MR_Word transform_hlds__equiv_type_hlds__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 0)));

          if ((transform_hlds__equiv_type_hlds__Var_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
            }
          else
            {
              MR_Word transform_hlds__equiv_type_hlds__PredInstInfo0_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__Var_87), (MR_Integer) 1);
              MR_Word transform_hlds__equiv_type_hlds__PorF_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 0)));
              MR_Word transform_hlds__equiv_type_hlds__Modes0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__MaybeArgRegs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Modes_24;

              {
                transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Modes0_21, &transform_hlds__equiv_type_hlds__Modes_24, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__equiv_type_hlds__PredInstInfo_25;
                    MR_Word transform_hlds__equiv_type_hlds__Var_72;

                    {
                      transform_hlds__equiv_type_hlds__PredInstInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__PorF_20));
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_24));
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeArgRegs_22));
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Det_23));
                    }
                    transform_hlds__equiv_type_hlds__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__equiv_type_hlds__PredInstInfo_25);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__equiv_type_hlds__Inst_11 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_88));
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_72));
                    }
                  }
                  break;
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__equiv_type_hlds__InstResults0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__BoundInsts0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 3)));
              MR_Word transform_hlds__equiv_type_hlds__Uniq_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__InstResults0_29)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(transform_hlds__equiv_type_hlds__InstResults0_29)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word transform_hlds__equiv_type_hlds__BoundInsts_40;

                        {
                          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__BoundInsts0_30, &transform_hlds__equiv_type_hlds__BoundInsts_40, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                        }
                        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              *transform_hlds__equiv_type_hlds__Inst_11 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_75));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstResults0_29));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_40));
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
                        *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
                        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__equiv_type_hlds__GroundnessResult_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 0)));
                    MR_Word transform_hlds__equiv_type_hlds__AnyResult_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 1)));
                    MR_Word transform_hlds__equiv_type_hlds__InstNamesResult_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 2)));
                    MR_Word transform_hlds__equiv_type_hlds__InstVarsResult_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 3)));
                    MR_Word transform_hlds__equiv_type_hlds__TypeResult_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 4)));
                    MR_Word transform_hlds__equiv_type_hlds__PropagatedResult_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 5)));

                    if ((transform_hlds__equiv_type_hlds__TypeResult_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word transform_hlds__equiv_type_hlds__BoundInsts_102;

                        {
                          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__BoundInsts0_30, &transform_hlds__equiv_type_hlds__BoundInsts_102, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                        }
                        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                              *transform_hlds__equiv_type_hlds__Inst_11 = base;
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_75));
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstResults0_29));
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_102));
                            }
                            break;
                        }
                      }
                    else
                      {
                        MR_Word transform_hlds__equiv_type_hlds__TypeCtors_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeResult_35, (MR_Integer) 0)));

                        {
                          transform_hlds__equiv_type_hlds__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__equiv_type_hlds__TypeCtors_38);
                        }
                        if (transform_hlds__equiv_type_hlds__succeeded)
                          {
                            *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
                            *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
                            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
                          }
                        else
                          {
                            MR_Word transform_hlds__equiv_type_hlds__InstResults_91;
                            MR_Word transform_hlds__equiv_type_hlds__BoundInsts_92;

                            {
                              transform_hlds__equiv_type_hlds__InstResults_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__GroundnessResult_31));
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__AnyResult_32));
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstNamesResult_33));
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstVarsResult_34));
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__PropagatedResult_36));
                            }
                            {
                              transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__BoundInsts0_30, &transform_hlds__equiv_type_hlds__BoundInsts_92, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                            }
                            switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                  *transform_hlds__equiv_type_hlds__Inst_11 = base;
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_75));
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstResults_91));
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_92));
                                }
                                break;
                            }
                          }
                      }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word transform_hlds__equiv_type_hlds__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));

              if ((transform_hlds__equiv_type_hlds__Var_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                  *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
                  *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
                  *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
                }
              else
                {
                  MR_Word transform_hlds__equiv_type_hlds__PredInstInfo0_79 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__Var_89), (MR_Integer) 1);
                  MR_Word transform_hlds__equiv_type_hlds__PorF_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 0)));
                  MR_Word transform_hlds__equiv_type_hlds__Modes0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 1)));
                  MR_Word transform_hlds__equiv_type_hlds__MaybeArgRegs_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 2)));
                  MR_Word transform_hlds__equiv_type_hlds__Det_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 3)));
                  MR_Word transform_hlds__equiv_type_hlds__Modes_84;

                  {
                    transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Modes0_81, &transform_hlds__equiv_type_hlds__Modes_84, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                  }
                  switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word transform_hlds__equiv_type_hlds__Var_62;
                        MR_Word transform_hlds__equiv_type_hlds__PredInstInfo_76;

                        {
                          transform_hlds__equiv_type_hlds__PredInstInfo_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__PorF_80));
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_84));
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeArgRegs_82));
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Det_83));
                        }
                        transform_hlds__equiv_type_hlds__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__equiv_type_hlds__PredInstInfo_76);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *transform_hlds__equiv_type_hlds__Inst_11 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_90));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_62));
                        }
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__equiv_type_hlds__Vars_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__CInst0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__CInst_43;

              {
                transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__CInst0_42, &transform_hlds__equiv_type_hlds__CInst_43, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__Inst_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Vars_41));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__CInst_43));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__equiv_type_hlds__InstName0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__InstName_45;

              {
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstName0_44, &transform_hlds__equiv_type_hlds__InstName_45, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__Inst_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstName_45));
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__equiv_type_hlds__Name_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__ArgInsts0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
              MR_Word transform_hlds__equiv_type_hlds__ArgInsts_48;

              {
                transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__ArgInsts0_47, &transform_hlds__equiv_type_hlds__ArgInsts_48, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *transform_hlds__equiv_type_hlds__Inst_11 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_46));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__ArgInsts_48));
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
transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
    MR_Word transform_hlds__equiv_type_hlds__ContainsType_15;

    {
      transform_hlds__equiv_type_hlds__ContainsType_15 = transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(transform_hlds__equiv_type_hlds__Inst0_10);
    }
    switch (transform_hlds__equiv_type_hlds__ContainsType_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
          *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17;
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__equiv_type_hlds__Inst1_16;
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22;

          {
            transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Inst0_10, &transform_hlds__equiv_type_hlds__Inst1_16, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22);
          }
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst1_16;
                *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__equiv_type_hlds__Inst1_29;
                MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_13_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                MR_Box transform_hlds__equiv_type_hlds__conv0_Inst1_29;

                {
                  transform_hlds__equiv_type_hlds__succeeded = mercury__map__search_3_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_13_32, transform_hlds__equiv_type_hlds__TypeCtorInfo_13_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22, ((MR_Box) (transform_hlds__equiv_type_hlds__Inst1_16)), &transform_hlds__equiv_type_hlds__conv0_Inst1_29);
                }
                if (transform_hlds__equiv_type_hlds__succeeded)
                  {
                    transform_hlds__equiv_type_hlds__Inst1_29 = ((MR_Word) transform_hlds__equiv_type_hlds__conv0_Inst1_29);
                    transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
                  }
                if (transform_hlds__equiv_type_hlds__succeeded)
                  {
                    *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst1_29;
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22;
                  }
                else
                  {
                    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33;

                    *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst1_16;
                    transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                    {
                      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33, transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22, ((MR_Box) (*transform_hlds__equiv_type_hlds__Inst_11)), ((MR_Box) (*transform_hlds__equiv_type_hlds__Inst_11)));
                    }
                  }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7;
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5;
      }
    else
      {
        MR_Word transform_hlds__equiv_type_hlds__Mode0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__equiv_type_hlds__Modes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__equiv_type_hlds__Mode_24;
        MR_Word transform_hlds__equiv_type_hlds__Changed0_25;
        MR_Word transform_hlds__equiv_type_hlds__Modes_26;
        MR_Word transform_hlds__equiv_type_hlds__Changed1_27;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32;
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33;

        if (((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Mode0_18)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word transform_hlds__equiv_type_hlds__Init0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Mode0_18, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Final0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Mode0_18, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Init_48;
            MR_Word transform_hlds__equiv_type_hlds__ChangedA_49;
            MR_Word transform_hlds__equiv_type_hlds__Final_50;
            MR_Word transform_hlds__equiv_type_hlds__ChangedB_51;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_57;
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_58;

            {
              transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Init0_46, &transform_hlds__equiv_type_hlds__Init_48, &transform_hlds__equiv_type_hlds__ChangedA_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_57, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_58);
            }
            {
              transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Final0_47, &transform_hlds__equiv_type_hlds__Final_50, &transform_hlds__equiv_type_hlds__ChangedB_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_57, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_58, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33);
            }
            {
              transform_hlds__equiv_type_hlds__Changed0_25 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_49, transform_hlds__equiv_type_hlds__ChangedB_51);
            }
            switch (transform_hlds__equiv_type_hlds__Changed0_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                transform_hlds__equiv_type_hlds__Mode_24 = transform_hlds__equiv_type_hlds__Mode0_18;
                break;
              case (MR_Integer) 1:
                {
                  transform_hlds__equiv_type_hlds__Mode_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Mode_24, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Init_48));
                  MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Mode_24, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Final_50));
                }
                break;
            }
          }
        else
          {
            MR_Word transform_hlds__equiv_type_hlds__Name_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Mode0_18, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Insts0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Mode0_18, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Insts_54;

            {
              transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Insts0_53, &transform_hlds__equiv_type_hlds__Insts_54, &transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33);
            }
            switch (transform_hlds__equiv_type_hlds__Changed0_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                transform_hlds__equiv_type_hlds__Mode_24 = transform_hlds__equiv_type_hlds__Mode0_18;
                break;
              case (MR_Integer) 1:
                {
                  transform_hlds__equiv_type_hlds__Mode_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Mode_24, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_52));
                  MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Mode_24, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_54));
                }
                break;
            }
          }
        {
          transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Modes0_19, &transform_hlds__equiv_type_hlds__Modes_26, &transform_hlds__equiv_type_hlds__Changed1_27, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);
        }
        {
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__Changed1_27);
        }
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Mode_24));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_26));
            }
            break;
        }
      }
  }
}

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__equiv_type_hlds__succeeded;
        MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2;

        if ((transform_hlds__equiv_type_hlds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word transform_hlds__equiv_type_hlds__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__Insts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__MayOccurInInst_6;

            {
              transform_hlds__equiv_type_hlds__MayOccurInInst_6 = transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(transform_hlds__equiv_type_hlds__Inst_3);
            }
            switch (transform_hlds__equiv_type_hlds__MayOccurInInst_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__equiv_type_hlds__next_value_of_HeadVar__1_1 = transform_hlds__equiv_type_hlds__Insts_4;

                    transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 1;
                break;
            }
          }
        return transform_hlds__equiv_type_hlds__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__equiv_type_hlds__succeeded;
        MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2;

        if ((transform_hlds__equiv_type_hlds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word transform_hlds__equiv_type_hlds__BoundInst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__equiv_type_hlds__BoundInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__Insts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__BoundInst_3, (MR_Integer) 1)));
            MR_Word transform_hlds__equiv_type_hlds__MayOccurInInsts_8;
            MR_Word transform_hlds__equiv_type_hlds__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__BoundInst_3, (MR_Integer) 0)));

            {
              transform_hlds__equiv_type_hlds__MayOccurInInsts_8 = transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(transform_hlds__equiv_type_hlds__Insts_7);
            }
            switch (transform_hlds__equiv_type_hlds__MayOccurInInsts_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__equiv_type_hlds__next_value_of_HeadVar__1_1 = transform_hlds__equiv_type_hlds__BoundInsts_4;

                    transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 1;
                break;
            }
          }
        return transform_hlds__equiv_type_hlds__HeadVar__2_2;
      }
      break;
    }
}

static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(
  MR_Word transform_hlds__equiv_type_hlds__Inst_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__equiv_type_hlds__succeeded;
        MR_Word transform_hlds__equiv_type_hlds__MayOccur_4;

        switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Inst_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(transform_hlds__equiv_type_hlds__Inst_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
                break;
            }
            break;
          case (MR_Integer) 1:
            transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__equiv_type_hlds__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));
              MR_Word transform_hlds__equiv_type_hlds__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 0)));

              if ((transform_hlds__equiv_type_hlds__Var_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
              else
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word transform_hlds__equiv_type_hlds__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
                  MR_Word transform_hlds__equiv_type_hlds__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 3)));
                  MR_Word transform_hlds__equiv_type_hlds__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__InstResults_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(transform_hlds__equiv_type_hlds__InstResults_14)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word transform_hlds__equiv_type_hlds__Found_23;
                            MR_Word transform_hlds__equiv_type_hlds__OldMayOccur_24;

{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;

    if (type_in_inst_cache[hash].tice_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        MayOccur = type_in_inst_cache[hash].tice_may_occur;
    } else {
        Found = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	 transform_hlds__equiv_type_hlds__Found_23  = Found;
	 transform_hlds__equiv_type_hlds__OldMayOccur_24  = MayOccur;
}
                            switch (transform_hlds__equiv_type_hlds__Found_23) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  {
                                    transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(transform_hlds__equiv_type_hlds__BoundInsts_15);
                                  }
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
	MayOccur =  transform_hlds__equiv_type_hlds__MayOccur_4 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;


		;}
#undef MR_PROC_LABEL
}
                                }
                                break;
                              case (MR_Integer) 1:
                                transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__OldMayOccur_24;
                                break;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word transform_hlds__equiv_type_hlds__TypeResult_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 4)));
                        MR_Word transform_hlds__equiv_type_hlds__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 0)));
                        MR_Word transform_hlds__equiv_type_hlds__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 1)));
                        MR_Word transform_hlds__equiv_type_hlds__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 2)));
                        MR_Word transform_hlds__equiv_type_hlds__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 3)));
                        MR_Word transform_hlds__equiv_type_hlds__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 5)));

                        if ((transform_hlds__equiv_type_hlds__TypeResult_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            MR_Word transform_hlds__equiv_type_hlds__Found_36;
                            MR_Word transform_hlds__equiv_type_hlds__OldMayOccur_37;

{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;

    if (type_in_inst_cache[hash].tice_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        MayOccur = type_in_inst_cache[hash].tice_may_occur;
    } else {
        Found = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	 transform_hlds__equiv_type_hlds__Found_36  = Found;
	 transform_hlds__equiv_type_hlds__OldMayOccur_37  = MayOccur;
}
                            switch (transform_hlds__equiv_type_hlds__Found_36) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  {
                                    transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(transform_hlds__equiv_type_hlds__BoundInsts_15);
                                  }
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
	MayOccur =  transform_hlds__equiv_type_hlds__MayOccur_4 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;


		;}
#undef MR_PROC_LABEL
}
                                }
                                break;
                              case (MR_Integer) 1:
                                transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__OldMayOccur_37;
                                break;
                            }
                          }
                        else
                          {
                            MR_Word transform_hlds__equiv_type_hlds__TypeCtors_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeResult_44, (MR_Integer) 0)));

                            {
                              transform_hlds__equiv_type_hlds__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__equiv_type_hlds__TypeCtors_22);
                            }
                            if (transform_hlds__equiv_type_hlds__succeeded)
                              transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
                            else
                              transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
                          }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word transform_hlds__equiv_type_hlds__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
                  MR_Word transform_hlds__equiv_type_hlds__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

                  if ((transform_hlds__equiv_type_hlds__Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
                  else
                    transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
                }
                break;
              case (MR_Integer) 2:
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word transform_hlds__equiv_type_hlds__CInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
                  MR_Word transform_hlds__equiv_type_hlds__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__equiv_type_hlds__next_value_of_Inst_3 = transform_hlds__equiv_type_hlds__CInst_28;

                    transform_hlds__equiv_type_hlds__Inst_3 = transform_hlds__equiv_type_hlds__next_value_of_Inst_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 5:
                {
                  MR_Word transform_hlds__equiv_type_hlds__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
                  MR_Word transform_hlds__equiv_type_hlds__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

                  {
                    transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(transform_hlds__equiv_type_hlds__ArgInsts_26);
                  }
                }
                break;
            }
            break;
        }
        return transform_hlds__equiv_type_hlds__MayOccur_4;
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001(
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    {
      transform_hlds__equiv_type_hlds__succeeded = transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2));
    }
    return transform_hlds__equiv_type_hlds__succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001(
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1;

    {
      transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(&transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3));
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_1 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001(
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

    {
      transform_hlds__equiv_type_hlds__succeeded = transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2));
    }
    return transform_hlds__equiv_type_hlds__succeeded;
  }
}

static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001(
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1;

    {
      transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(&transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3));
    }
    *transform_hlds__equiv_type_hlds__wrapper_arg_1 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__equiv_type_hlds__init(void)
{
}

void mercury__transform_hlds__equiv_type_hlds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_inst_cache_0);
	MR_register_type_ctor_info(&transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_replace_info_0);
}

void mercury__transform_hlds__equiv_type_hlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__equiv_type_hlds__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.equiv_type_hlds. */
