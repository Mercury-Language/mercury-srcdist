/*
** Automatically generated from `size_prof.m'
** by the Mercury compiler,
** version DEV
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


/* :- module transform_hlds.size_prof. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__size_prof__init
ENDINIT
*/

#include "transform_hlds.size_prof.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.passes_aux.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0;

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2];

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_size_prof_info_0_0[11];

static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_size_prof_info_0_0[11];

static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_size_prof_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_size_prof_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_size_prof_info_0[1];

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_size_prof_info_0[1];

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____size_prof_info_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_51_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
  MR_Word * transform_hlds__size_prof__HeadVar__3_140);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_50_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
  MR_Word * transform_hlds__size_prof__HeadVar__3_136);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
  MR_Box transform_hlds__size_prof__X_4,
  MR_Box * transform_hlds__size_prof__X_3);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3);

static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg);

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
  MR_Word transform_hlds__size_prof__LHS_16,
  MR_Word transform_hlds__size_prof__RHS_17,
  MR_Word transform_hlds__size_prof__UniMode_18,
  MR_Word transform_hlds__size_prof__UnifyContext_19,
  MR_Word transform_hlds__size_prof__Var_20,
  MR_Word transform_hlds__size_prof__ConsId_22,
  MR_Word transform_hlds__size_prof__Args_23,
  MR_Word transform_hlds__size_prof__ArgModes_24,
  MR_Word transform_hlds__size_prof__How_25,
  MR_Word transform_hlds__size_prof__Unique_26,
  MR_Word transform_hlds__size_prof__GoalInfo0_27,
  MR_Word * transform_hlds__size_prof__GoalExpr_28,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_49,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_50);

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1108__1_3_p_0(
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12,
  MR_Word transform_hlds__size_prof__HeadVar__2_45,
  MR_Word * transform_hlds__size_prof__HeadVar__3_46);

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__773__1_2_p_0(
  MR_Word transform_hlds__size_prof__ArgGoals_21,
  MR_Word transform_hlds__size_prof__HeadVar__2_56);

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__730__1_2_p_0(
  MR_Word transform_hlds__size_prof__ArgGoals_36,
  MR_Word transform_hlds__size_prof__HeadVar__2_69);

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__603__1_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
  MR_Word transform_hlds__size_prof__HeadVar__2_139,
  MR_Word * transform_hlds__size_prof__HeadVar__3_140);

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__562__1_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
  MR_Word transform_hlds__size_prof__HeadVar__2_135,
  MR_Word * transform_hlds__size_prof__HeadVar__3_136);

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__444__1_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
  MR_Word transform_hlds__size_prof__HeadVar__2_1038,
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039);

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____size_prof_info_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
  MR_Word transform_hlds__size_prof__Info_3,
  MR_Word transform_hlds__size_prof__UnifyMode_4);

static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
  MR_Word transform_hlds__size_prof__Args_6,
  MR_Word transform_hlds__size_prof__Modes_7,
  MR_Word * transform_hlds__size_prof__DefinedArgs_8,
  MR_Word * transform_hlds__size_prof__NonDefinedArgs_9,
  MR_Word transform_hlds__size_prof__Info_10);

static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
  MR_Word transform_hlds__size_prof__TypeInfoMap_5,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10);

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9);

static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
  MR_Word transform_hlds__size_prof__TypeInfo_for_T_20,
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__VarCounts_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_RevMap_4);

static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_11,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_12);

static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
  MR_Word transform_hlds__size_prof__RttiVarMaps_5,
  MR_Word transform_hlds__size_prof__TVar_6,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14);

static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
  MR_Word transform_hlds__size_prof__Var_5,
  MR_Integer transform_hlds__size_prof__KnownSize_6,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_10,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_11);

static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
  MR_Word transform_hlds__size_prof__Type_5,
  MR_Word transform_hlds__size_prof__Var_6,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14);

static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box * transform_hlds__size_prof__wrapper_arg_2);

static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
  MR_Word transform_hlds__size_prof__Var_6,
  MR_Word transform_hlds__size_prof__TypeCtorInfoVar_7,
  MR_Word transform_hlds__size_prof__ArgTypeInfoVars_8,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_19,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_20);

static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
  MR_Word transform_hlds__size_prof__Var_7,
  MR_Word transform_hlds__size_prof__TypeCtorModule_8,
  MR_String transform_hlds__size_prof__TypeCtorName_9,
  MR_Integer transform_hlds__size_prof__TypeCtorArity_10,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_17,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_18);

static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
  MR_Word transform_hlds__size_prof__Type_6,
  MR_String transform_hlds__size_prof__Prefix_7,
  MR_Word * transform_hlds__size_prof__Var_8,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_18,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_19);

static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
  MR_Word transform_hlds__size_prof__TypeInfoVar_9,
  MR_Word transform_hlds__size_prof__Arg_10,
  MR_Word transform_hlds__size_prof__Context_11,
  MR_Word * transform_hlds__size_prof__SizeGoal_12,
  MR_Word transform_hlds__size_prof__MaybeSizeVar0_13,
  MR_Word * transform_hlds__size_prof__MaybeSizeVar_14,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_21,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_22);

static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
  MR_Word transform_hlds__size_prof__TypeCtor_7,
  MR_Word transform_hlds__size_prof__TypeArgs_8,
  MR_Word * transform_hlds__size_prof__TypeCtorVar_9,
  MR_Word * transform_hlds__size_prof__TypeCtorGoals_10,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_25,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_26);

static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box * transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3,
  MR_Box transform_hlds__size_prof__wrapper_arg_4,
  MR_Box * transform_hlds__size_prof__wrapper_arg_5);

static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
  MR_Word transform_hlds__size_prof__Context_10,
  MR_Word transform_hlds__size_prof__Type_11,
  MR_Word transform_hlds__size_prof__TypeCtor_12,
  MR_Word transform_hlds__size_prof__ArgTypes_13,
  MR_Word transform_hlds__size_prof__CtorIsVarArity_14,
  MR_Word * transform_hlds__size_prof__TypeInfoVar_15,
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_16,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_42,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_43);

static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
  MR_Word transform_hlds__size_prof__Context_7,
  MR_Word transform_hlds__size_prof__Type_8,
  MR_Word * transform_hlds__size_prof__TypeInfoVar_9,
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_10,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_38,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_39);

static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
  MR_Word transform_hlds__size_prof__SizeVar0_8,
  MR_Integer transform_hlds__size_prof__KnownSize_9,
  MR_Word transform_hlds__size_prof__Context_10,
  MR_Word * transform_hlds__size_prof__SizeVar_11,
  MR_Word * transform_hlds__size_prof__Goals_12,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_22,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_23);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2,
  MR_Integer * transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5,
  MR_Word transform_hlds__size_prof__Context_6,
  MR_Word * transform_hlds__size_prof__HeadVar__7_7,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9);

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
  MR_Word transform_hlds__size_prof__Var_8,
  MR_Word transform_hlds__size_prof__Args_9,
  MR_Word transform_hlds__size_prof__ArgModes_10,
  MR_Word transform_hlds__size_prof__UnifyGoal_11,
  MR_Word * transform_hlds__size_prof__GoalExpr_12,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
  MR_Word transform_hlds__size_prof__Var_9,
  MR_Word transform_hlds__size_prof__ConsId_10,
  MR_Word transform_hlds__size_prof__Args_11,
  MR_Word transform_hlds__size_prof__ArgModes_12,
  MR_Word transform_hlds__size_prof__Goal0_13,
  MR_Word * transform_hlds__size_prof__GoalExpr_14,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
  MR_Word transform_hlds__size_prof__LHS_15,
  MR_Word transform_hlds__size_prof__RHS_16,
  MR_Word transform_hlds__size_prof__UniMode_17,
  MR_Word transform_hlds__size_prof__UnifyContext_18,
  MR_Word transform_hlds__size_prof__Var_19,
  MR_Word transform_hlds__size_prof__ConsId_20,
  MR_Word transform_hlds__size_prof__Args_21,
  MR_Word transform_hlds__size_prof__ArgModes_22,
  MR_Word transform_hlds__size_prof__How_23,
  MR_Word transform_hlds__size_prof__Unique_24,
  MR_Word transform_hlds__size_prof__GoalInfo_25,
  MR_Word * transform_hlds__size_prof__GoalExpr_26,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_45,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_46);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
  MR_Word transform_hlds__size_prof__First0_15,
  MR_Word * transform_hlds__size_prof__First_16,
  MR_Word transform_hlds__size_prof__Later0_17,
  MR_Word * transform_hlds__size_prof__Later_18,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_41,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_42,
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
  MR_Word transform_hlds__size_prof__First0_15,
  MR_Word * transform_hlds__size_prof__First_16,
  MR_Word transform_hlds__size_prof__Later0_17,
  MR_Word * transform_hlds__size_prof__Later_18,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_37,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_38,
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4,
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_5,
  MR_Word transform_hlds__size_prof__TypeInfoMap0_6,
  MR_Word transform_hlds__size_prof__TypeCtorMap0_7,
  MR_Word transform_hlds__size_prof__KnownSizeMap0_8);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4);

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
  MR_Word transform_hlds__size_prof__Goal0_5,
  MR_Word * transform_hlds__size_prof__Goal_6,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_95,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_96);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3);

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
  MR_Word transform_hlds__size_prof__Transform_7,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_38,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_40);


static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_2[9][3];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_3[2][7];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[2][6];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[2][5];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_7[4][1];

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_8[1][9];


/* sealed */ struct transform_hlds__size_prof__vector_common_type_6_0_s {
  const MR_String transform_hlds__size_prof__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct transform_hlds__size_prof__vector_common_type_6_0_s transform_hlds__size_prof_vector_common_6[8];



static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_disj_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__size_prof__size_prof_process_switch_14_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_7[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "KnownSize"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "TypeClassInfoSlot"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "TupleArity"))
  },
};

static /* final */ const MR_Box transform_hlds__size_prof_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0))
  },
};


static /* final */ const struct transform_hlds__size_prof__vector_common_type_6_0_s transform_hlds__size_prof_vector_common_6[8] = {
  /* row 0 */   {     (MR_String) "base_typeclass_info" },
  /* row 1 */   {     (MR_String) "type_ctor_info" },
  /* row 2 */   {     (MR_String) "type_info" },
  /* row 3 */   {     (MR_String) "typeclass_info" },
  /* row 4 */   {     (MR_String) "base_typeclass_info" },
  /* row 5 */   {     (MR_String) "type_ctor_info" },
  /* row 6 */   {     (MR_String) "type_info" },
  /* row 7 */   {     (MR_String) "typeclass_info" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__size_prof__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__size_prof__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0 = {
  (MR_String) "term_words",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1 = {
  (MR_String) "term_cells",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0[2] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_1,
  &transform_hlds__size_prof__transform_hlds__size_prof__enum_functor_desc_construct_transform_0_0
};

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__size_prof____Unify____construct_transform_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____construct_transform_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "construct_transform",
  {     transform_hlds__size_prof__transform_hlds__size_prof__enum_name_ordered_construct_transform_0 },
  {     transform_hlds__size_prof__transform_hlds__size_prof__enum_value_ordered_construct_transform_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_construct_transform_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_known_size_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____known_size_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____known_size_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "known_size_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_ctor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "rev_type_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_TypeInfo) &transform_hlds__size_prof__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__size_prof__transform_hlds__size_prof__field_types_size_prof_info_0_0[11] = {
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_type_ctor_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

static const MR_ConstString transform_hlds__size_prof__transform_hlds__size_prof__field_names_size_prof_info_0_0[11] = {
  (MR_String) "spi_type_ctor_map",
  (MR_String) "spi_type_info_map",
  (MR_String) "spi_rev_type_ctor_map",
  (MR_String) "spi_rev_type_info_map",
  (MR_String) "spi_target_type_info_map",
  (MR_String) "spi_known_size_map",
  (MR_String) "spi_varset",
  (MR_String) "spi_vartypes",
  (MR_String) "spi_transform_op",
  (MR_String) "spi_rtti_varmaps",
  (MR_String) "spi_module_info"
};

static const MR_DuFunctorDesc transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0 = {
  (MR_String) "size_prof_info",
  (MR_Integer) 11,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__size_prof__transform_hlds__size_prof__field_types_size_prof_info_0_0,
  transform_hlds__size_prof__transform_hlds__size_prof__field_names_size_prof_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_size_prof_info_0_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0
};

static const MR_DuPtagLayout transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_size_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__size_prof__transform_hlds__size_prof__du_stag_ordered_size_prof_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_size_prof_info_0[1] = {
  &transform_hlds__size_prof__transform_hlds__size_prof__du_functor_desc_size_prof_info_0_0
};

static const MR_Integer transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_size_prof_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__size_prof____Unify____size_prof_info_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____size_prof_info_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "size_prof_info",
  {     transform_hlds__size_prof__transform_hlds__size_prof__du_name_ordered_size_prof_info_0 },
  {     transform_hlds__size_prof__transform_hlds__size_prof__du_ptag_ordered_size_prof_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__size_prof__transform_hlds__size_prof__functor_number_map_size_prof_info_0
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_ctor_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_ctor_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__size_prof____Unify____type_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__size_prof____Compare____type_info_map_0_0_10001)),
  (MR_String) "transform_hlds.size_prof",
  (MR_String) "type_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__size_prof__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____construct_transform_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

    {
      transform_hlds__size_prof____Compare____construct_transform_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____known_size_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

    {
      transform_hlds__size_prof____Compare____known_size_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

    {
      transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____rev_type_info_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

    {
      transform_hlds__size_prof____Compare____rev_type_info_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____size_prof_info_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____size_prof_info_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

    {
      transform_hlds__size_prof____Compare____size_prof_info_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____type_ctor_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

    {
      transform_hlds__size_prof____Compare____type_ctor_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0_10001(
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof____Unify____type_info_map_0_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0_10001(
  MR_Box * transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__size_prof__conv0_HeadVar__1_1;

    {
      transform_hlds__size_prof____Compare____type_info_map_0_0(&transform_hlds__size_prof__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), ((MR_Word) transform_hlds__size_prof__wrapper_arg_3));
    }
    *transform_hlds__size_prof__wrapper_arg_1 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_51_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
  MR_Word * transform_hlds__size_prof__HeadVar__3_140)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_140;

    {
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_138)), &transform_hlds__size_prof__conv0_HeadVar__3_140);
    }
    *transform_hlds__size_prof__HeadVar__3_140 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_140);
  }
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_50_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
  MR_Word * transform_hlds__size_prof__HeadVar__3_136)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_136;

    {
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_134)), &transform_hlds__size_prof__conv0_HeadVar__3_136);
    }
    *transform_hlds__size_prof__HeadVar__3_136 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_136);
  }
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_1039;

    {
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(((MR_Box) (transform_hlds__size_prof__HeadVar__1_1037)), &transform_hlds__size_prof__conv0_HeadVar__3_1039);
    }
    *transform_hlds__size_prof__HeadVar__3_1039 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_1039);
  }
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_108_101_99_116_95_102_105_114_115_116_95_95_91_49_44_32_51_93_95_48_3_p_0(
  MR_Box transform_hlds__size_prof__X_4,
  MR_Box * transform_hlds__size_prof__X_3)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    *transform_hlds__size_prof__X_3 = transform_hlds__size_prof__X_4;
  }
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__size_prof__succeeded;

        if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__size_prof__STATE_VARIABLE_VarCounts_3 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2;
        else
          {
            MR_Word transform_hlds__size_prof__Var_8;
            MR_Word transform_hlds__size_prof__AssocList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__size_prof__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16;
            MR_Box transform_hlds__size_prof__Var_7 = (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_14, (MR_Integer) 0));
            MR_Integer transform_hlds__size_prof__Count_11;
            MR_Box transform_hlds__size_prof__conv0_Count_11;

            transform_hlds__size_prof__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_14, (MR_Integer) 1)));
            {
              transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, ((MR_Box) (transform_hlds__size_prof__Var_8)), &transform_hlds__size_prof__conv0_Count_11);
            }
            if (transform_hlds__size_prof__succeeded)
              {
                transform_hlds__size_prof__Count_11 = ((MR_Integer) transform_hlds__size_prof__conv0_Count_11);
                transform_hlds__size_prof__succeeded = MR_TRUE;
              }
            if (transform_hlds__size_prof__succeeded)
              {
                MR_Integer transform_hlds__size_prof__Var_15 = (transform_hlds__size_prof__Count_11 + (MR_Integer) 1);

                {
                  mercury__map__det_update_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) (transform_hlds__size_prof__Var_15)), transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, &transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16);
                }
              }
            else
              {
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) ((MR_Integer) 1)), transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2, &transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__size_prof__next_value_of_HeadVar__1_1 = transform_hlds__size_prof__AssocList_9;
              MR_Word transform_hlds__size_prof__next_value_of_STATE_VARIABLE_VarCounts_0_2 = transform_hlds__size_prof__STATE_VARIABLE_VarCounts_16_16;

              transform_hlds__size_prof__STATE_VARIABLE_VarCounts_0_2 = transform_hlds__size_prof__next_value_of_STATE_VARIABLE_VarCounts_0_2;
              transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__730__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 4))));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(
  MR_Word transform_hlds__size_prof__LHS_16,
  MR_Word transform_hlds__size_prof__RHS_17,
  MR_Word transform_hlds__size_prof__UniMode_18,
  MR_Word transform_hlds__size_prof__UnifyContext_19,
  MR_Word transform_hlds__size_prof__Var_20,
  MR_Word transform_hlds__size_prof__ConsId_22,
  MR_Word transform_hlds__size_prof__Args_23,
  MR_Word transform_hlds__size_prof__ArgModes_24,
  MR_Word transform_hlds__size_prof__How_25,
  MR_Word transform_hlds__size_prof__Unique_26,
  MR_Word transform_hlds__size_prof__GoalInfo0_27,
  MR_Word * transform_hlds__size_prof__GoalExpr_28,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_49,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_50)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Integer transform_hlds__size_prof__FunctorSize_30;
    MR_Word transform_hlds__size_prof__DefinedArgs_31;
    MR_Word transform_hlds__size_prof__NonDefinedArgs_32;
    MR_Word transform_hlds__size_prof__Context_33;
    MR_Integer transform_hlds__size_prof__KnownSize_34;
    MR_Word transform_hlds__size_prof__MaybeDynamicSizeVar_35;
    MR_Word transform_hlds__size_prof__ArgGoals_36;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_52_52;
    MR_Word transform_hlds__size_prof__TransformOp_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, (MR_Integer) 10)));

    switch (transform_hlds__size_prof__TransformOp_82) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        transform_hlds__size_prof__FunctorSize_30 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        {
          {
            transform_hlds__size_prof__FunctorSize_30 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__Args_23);
          }
        }
        break;
    }
    {
      transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__Args_23, transform_hlds__size_prof__ArgModes_24, &transform_hlds__size_prof__DefinedArgs_31, &transform_hlds__size_prof__NonDefinedArgs_32, transform_hlds__size_prof__STATE_VARIABLE_Info_0_49);
    }
    {
      transform_hlds__size_prof__Context_33 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__size_prof__GoalInfo0_27);
    }
    {
      transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__DefinedArgs_31, transform_hlds__size_prof__FunctorSize_30, &transform_hlds__size_prof__KnownSize_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__MaybeDynamicSizeVar_35, transform_hlds__size_prof__Context_33, &transform_hlds__size_prof__ArgGoals_36, transform_hlds__size_prof__STATE_VARIABLE_Info_0_49, &transform_hlds__size_prof__STATE_VARIABLE_Info_52_52);
    }
    if ((transform_hlds__size_prof__MaybeDynamicSizeVar_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__size_prof__Unification_39;
        MR_Word transform_hlds__size_prof__Var_65;
        MR_Word transform_hlds__size_prof__Var_71;
        MR_Word transform_hlds__size_prof__Var_73;
        MR_Word transform_hlds__size_prof__Var_74;

        {
          transform_hlds__size_prof__Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_65, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_65, 1) = ((MR_Box) (transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_65, 3) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_36));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(transform_hlds__size_prof__Var_65, (MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_construct\'/15", (MR_String) "nonempty ArgGoals");
        }
        if ((transform_hlds__size_prof__NonDefinedArgs_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            transform_hlds__size_prof__record_known_size_4_p_0(transform_hlds__size_prof__Var_20, transform_hlds__size_prof__KnownSize_34, transform_hlds__size_prof__STATE_VARIABLE_Info_52_52, transform_hlds__size_prof__STATE_VARIABLE_Info_50);
          }
        else
          *transform_hlds__size_prof__STATE_VARIABLE_Info_50 = transform_hlds__size_prof__STATE_VARIABLE_Info_52_52;
        {
          transform_hlds__size_prof__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_74, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSize_34));
        }
        {
          transform_hlds__size_prof__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_73, 0) = ((MR_Box) (transform_hlds__size_prof__Var_74));
        }
        {
          transform_hlds__size_prof__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_71, 1) = ((MR_Box) (transform_hlds__size_prof__Var_73));
        }
        {
          transform_hlds__size_prof__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_20));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_22));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 2) = ((MR_Box) (transform_hlds__size_prof__Args_23));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_24));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 4) = ((MR_Box) (transform_hlds__size_prof__How_25));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_26));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 6) = ((MR_Box) (transform_hlds__size_prof__Var_71));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__size_prof__GoalExpr_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_17));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_18));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_39));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_19));
        }
      }
    else
      {
        MR_Word transform_hlds__size_prof__SizeVar0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeDynamicSizeVar_35, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__SizeVar_41;
        MR_Word transform_hlds__size_prof__SizeGoals_42;
        MR_Word transform_hlds__size_prof__UnifyExpr_43;
        MR_Word transform_hlds__size_prof__NonLocals0_44;
        MR_Word transform_hlds__size_prof__NonLocals_45;
        MR_Word transform_hlds__size_prof__GoalInfo_46;
        MR_Word transform_hlds__size_prof__UnifyGoal_47;
        MR_Word transform_hlds__size_prof__Goals_48;
        MR_Word transform_hlds__size_prof__Var_54;
        MR_Word transform_hlds__size_prof__Var_56;
        MR_Word transform_hlds__size_prof__Var_57;
        MR_Word transform_hlds__size_prof__Var_58;
        MR_Word transform_hlds__size_prof__Var_59;
        MR_Word transform_hlds__size_prof__Var_60;
        MR_Word transform_hlds__size_prof__Var_61;
        MR_Word transform_hlds__size_prof__Unification_75;

        {
          transform_hlds__size_prof__generate_size_var_7_p_0(transform_hlds__size_prof__SizeVar0_40, transform_hlds__size_prof__KnownSize_34, transform_hlds__size_prof__Context_33, &transform_hlds__size_prof__SizeVar_41, &transform_hlds__size_prof__SizeGoals_42, transform_hlds__size_prof__STATE_VARIABLE_Info_52_52, transform_hlds__size_prof__STATE_VARIABLE_Info_50);
        }
        {
          transform_hlds__size_prof__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_57, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_41));
        }
        {
          transform_hlds__size_prof__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_56, 0) = ((MR_Box) (transform_hlds__size_prof__Var_57));
        }
        {
          transform_hlds__size_prof__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_54, 1) = ((MR_Box) (transform_hlds__size_prof__Var_56));
        }
        {
          transform_hlds__size_prof__Unification_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 0) = ((MR_Box) (transform_hlds__size_prof__Var_20));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_22));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 2) = ((MR_Box) (transform_hlds__size_prof__Args_23));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_24));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 4) = ((MR_Box) (transform_hlds__size_prof__How_25));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_26));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_75, 6) = ((MR_Box) (transform_hlds__size_prof__Var_54));
        }
        {
          transform_hlds__size_prof__UnifyExpr_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_16));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_17));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_18));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_75));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__UnifyExpr_43, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_19));
        }
        {
          transform_hlds__size_prof__NonLocals0_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__size_prof__GoalInfo0_27);
        }
        {
          parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__size_prof__SizeVar_41, transform_hlds__size_prof__NonLocals0_44, &transform_hlds__size_prof__NonLocals_45);
        }
        {
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(transform_hlds__size_prof__NonLocals_45, transform_hlds__size_prof__GoalInfo0_27, &transform_hlds__size_prof__GoalInfo_46);
        }
        {
          transform_hlds__size_prof__UnifyGoal_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_47, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyExpr_43));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_47, 1) = ((MR_Box) (transform_hlds__size_prof__GoalInfo_46));
        }
        {
          transform_hlds__size_prof__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_61, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyGoal_47));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__size_prof__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_60, 0) = ((MR_Box) (transform_hlds__size_prof__Var_61));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__size_prof__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_59, 0) = ((MR_Box) (transform_hlds__size_prof__SizeGoals_42));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_59, 1) = ((MR_Box) (transform_hlds__size_prof__Var_60));
        }
        {
          transform_hlds__size_prof__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_58, 0) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_36));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_58, 1) = ((MR_Box) (transform_hlds__size_prof__Var_59));
        }
        {
          transform_hlds__size_prof__Goals_48 = mercury__list__condense_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__Var_58);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__size_prof__GoalExpr_28 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_48));
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1108__1_3_p_0(
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12,
  MR_Word transform_hlds__size_prof__HeadVar__2_45,
  MR_Word * transform_hlds__size_prof__HeadVar__3_46)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Box transform_hlds__size_prof__conv0_HeadVar__3_46;

    {
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__RevTypeInfoMap0_12, ((MR_Box) (transform_hlds__size_prof__HeadVar__2_45)), &transform_hlds__size_prof__conv0_HeadVar__3_46);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        *transform_hlds__size_prof__HeadVar__3_46 = ((MR_Word) transform_hlds__size_prof__conv0_HeadVar__3_46);
        transform_hlds__size_prof__succeeded = MR_TRUE;
      }
    return transform_hlds__size_prof__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__773__1_2_p_0(
  MR_Word transform_hlds__size_prof__ArgGoals_21,
  MR_Word transform_hlds__size_prof__HeadVar__2_56)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[2], ((MR_Box) (transform_hlds__size_prof__ArgGoals_21)), ((MR_Box) (transform_hlds__size_prof__HeadVar__2_56)));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_construct__730__1_2_p_0(
  MR_Word transform_hlds__size_prof__ArgGoals_36,
  MR_Word transform_hlds__size_prof__HeadVar__2_69)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[2], ((MR_Box) (transform_hlds__size_prof__ArgGoals_36)), ((MR_Box) (transform_hlds__size_prof__HeadVar__2_69)));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__603__1_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_138,
  MR_Word transform_hlds__size_prof__HeadVar__2_139,
  MR_Word * transform_hlds__size_prof__HeadVar__3_140)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_115_119_105_116_99_104_95_95_54_48_51_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_138, transform_hlds__size_prof__HeadVar__3_140);
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__562__1_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_134,
  MR_Word transform_hlds__size_prof__HeadVar__2_135,
  MR_Word * transform_hlds__size_prof__HeadVar__3_136)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_100_105_115_106_95_95_53_54_50_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_134, transform_hlds__size_prof__HeadVar__3_136);
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__444__1_3_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1037,
  MR_Word transform_hlds__size_prof__HeadVar__2_1038,
  MR_Word * transform_hlds__size_prof__HeadVar__3_1039)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_103_111_97_108_95_95_52_52_52_95_95_49_95_95_91_50_93_95_48_3_p_0(transform_hlds__size_prof__HeadVar__1_1037, transform_hlds__size_prof__HeadVar__3_1039);
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_info_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_info_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

    {
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____type_ctor_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____type_ctor_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

    {
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____size_prof_info_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Integer transform_hlds__size_prof__CastX_36 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;
    MR_Integer transform_hlds__size_prof__CastY_37 = (MR_Integer) transform_hlds__size_prof__HeadVar__3_3;

    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__CastX_36 == transform_hlds__size_prof__CastY_37);
    if (transform_hlds__size_prof__succeeded)
      *transform_hlds__size_prof__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__size_prof__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__size_prof__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__size_prof__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__size_prof__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__size_prof__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word transform_hlds__size_prof__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word transform_hlds__size_prof__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word transform_hlds__size_prof__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word transform_hlds__size_prof__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__size_prof__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__size_prof__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word transform_hlds__size_prof__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word transform_hlds__size_prof__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word transform_hlds__size_prof__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word transform_hlds__size_prof__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word transform_hlds__size_prof__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word transform_hlds__size_prof__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word transform_hlds__size_prof__Var_26;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], &transform_hlds__size_prof__Var_26, ((MR_Box) (transform_hlds__size_prof__Var_4)), ((MR_Box) (transform_hlds__size_prof__Var_15)));
        }
        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_26 == (MR_Integer) 0);
        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
        if (transform_hlds__size_prof__succeeded)
          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_26;
        else
          {
            MR_Word transform_hlds__size_prof__Var_27;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], &transform_hlds__size_prof__Var_27, ((MR_Box) (transform_hlds__size_prof__Var_5)), ((MR_Box) (transform_hlds__size_prof__Var_16)));
            }
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_27 == (MR_Integer) 0);
            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
            if (transform_hlds__size_prof__succeeded)
              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_27;
            else
              {
                MR_Word transform_hlds__size_prof__Var_28;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], &transform_hlds__size_prof__Var_28, ((MR_Box) (transform_hlds__size_prof__Var_6)), ((MR_Box) (transform_hlds__size_prof__Var_17)));
                }
                transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_28 == (MR_Integer) 0);
                transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
                if (transform_hlds__size_prof__succeeded)
                  *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_28;
                else
                  {
                    MR_Word transform_hlds__size_prof__Var_29;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], &transform_hlds__size_prof__Var_29, ((MR_Box) (transform_hlds__size_prof__Var_7)), ((MR_Box) (transform_hlds__size_prof__Var_18)));
                    }
                    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_29 == (MR_Integer) 0);
                    transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
                    if (transform_hlds__size_prof__succeeded)
                      *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_29;
                    else
                      {
                        MR_Word transform_hlds__size_prof__Var_30;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[1], &transform_hlds__size_prof__Var_30, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) (transform_hlds__size_prof__Var_19)));
                        }
                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_30 == (MR_Integer) 0);
                        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
                        if (transform_hlds__size_prof__succeeded)
                          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_30;
                        else
                          {
                            MR_Word transform_hlds__size_prof__Var_31;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], &transform_hlds__size_prof__Var_31, ((MR_Box) (transform_hlds__size_prof__Var_9)), ((MR_Box) (transform_hlds__size_prof__Var_20)));
                            }
                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_31 == (MR_Integer) 0);
                            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
                            if (transform_hlds__size_prof__succeeded)
                              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_31;
                            else
                              {
                                MR_Word transform_hlds__size_prof__Var_32;

                                {
                                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[3], &transform_hlds__size_prof__Var_32, ((MR_Box) (transform_hlds__size_prof__Var_10)), ((MR_Box) (transform_hlds__size_prof__Var_21)));
                                }
                                transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_32 == (MR_Integer) 0);
                                transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
                                if (transform_hlds__size_prof__succeeded)
                                  *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_32;
                                else
                                  {
                                    MR_Word transform_hlds__size_prof__Var_33;

                                    {
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], &transform_hlds__size_prof__Var_33, ((MR_Box) (transform_hlds__size_prof__Var_11)), ((MR_Box) (transform_hlds__size_prof__Var_22)));
                                    }
                                    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_33 == (MR_Integer) 0);
                                    transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
                                    if (transform_hlds__size_prof__succeeded)
                                      *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_33;
                                    else
                                      {
                                        MR_Word transform_hlds__size_prof__Var_34;
                                        MR_Integer transform_hlds__size_prof__Var_49 = (MR_Integer) transform_hlds__size_prof__Var_12;
                                        MR_Integer transform_hlds__size_prof__Var_50 = (MR_Integer) transform_hlds__size_prof__Var_23;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__size_prof__Var_34, transform_hlds__size_prof__Var_49, transform_hlds__size_prof__Var_50);
                                        }
                                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_34 == (MR_Integer) 0);
                                        transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
                                        if (transform_hlds__size_prof__succeeded)
                                          *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_34;
                                        else
                                          {
                                            MR_Word transform_hlds__size_prof__Var_35;

                                            {
                                              hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__size_prof__Var_35, transform_hlds__size_prof__Var_13, transform_hlds__size_prof__Var_24);
                                            }
                                            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_35 == (MR_Integer) 0);
                                            transform_hlds__size_prof__succeeded = !(transform_hlds__size_prof__succeeded);
                                            if (transform_hlds__size_prof__succeeded)
                                              *transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__Var_35;
                                            else
                                              {
                                                hlds__hlds_module____Compare____module_info_0_0(transform_hlds__size_prof__HeadVar__1_1, transform_hlds__size_prof__Var_14, transform_hlds__size_prof__Var_25);
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

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____size_prof_info_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Integer transform_hlds__size_prof__CastX_25 = (MR_Integer) transform_hlds__size_prof__HeadVar__1_1;
    MR_Integer transform_hlds__size_prof__CastY_26 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;

    transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__CastX_25 == transform_hlds__size_prof__CastY_26);
    if (transform_hlds__size_prof__succeeded)
      transform_hlds__size_prof__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__size_prof__TypeInfo_28_28;
        MR_Word transform_hlds__size_prof__TypeInfo_29_29;
        MR_Word transform_hlds__size_prof__TypeInfo_30_30;
        MR_Word transform_hlds__size_prof__TypeInfo_31_31;
        MR_Word transform_hlds__size_prof__TypeInfo_32_32;
        MR_Word transform_hlds__size_prof__TypeInfo_33_33;
        MR_Word transform_hlds__size_prof__TypeInfo_34_34;
        MR_Word transform_hlds__size_prof__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__size_prof__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__size_prof__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word transform_hlds__size_prof__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word transform_hlds__size_prof__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word transform_hlds__size_prof__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word transform_hlds__size_prof__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word transform_hlds__size_prof__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word transform_hlds__size_prof__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word transform_hlds__size_prof__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__size_prof__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__size_prof__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word transform_hlds__size_prof__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word transform_hlds__size_prof__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word transform_hlds__size_prof__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word transform_hlds__size_prof__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word transform_hlds__size_prof__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word transform_hlds__size_prof__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 10)));

        {
          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[5], ((MR_Box) (transform_hlds__size_prof__Var_3)), ((MR_Box) (transform_hlds__size_prof__Var_14)));
        }
        if (transform_hlds__size_prof__succeeded)
          {
            transform_hlds__size_prof__TypeInfo_28_28 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[1];
            {
              transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_28_28, ((MR_Box) (transform_hlds__size_prof__Var_4)), ((MR_Box) (transform_hlds__size_prof__Var_15)));
            }
            if (transform_hlds__size_prof__succeeded)
              {
                transform_hlds__size_prof__TypeInfo_29_29 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[3];
                {
                  transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_29_29, ((MR_Box) (transform_hlds__size_prof__Var_5)), ((MR_Box) (transform_hlds__size_prof__Var_16)));
                }
                if (transform_hlds__size_prof__succeeded)
                  {
                    transform_hlds__size_prof__TypeInfo_30_30 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[4];
                    {
                      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_30_30, ((MR_Box) (transform_hlds__size_prof__Var_6)), ((MR_Box) (transform_hlds__size_prof__Var_17)));
                    }
                    if (transform_hlds__size_prof__succeeded)
                      {
                        transform_hlds__size_prof__TypeInfo_31_31 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[1];
                        {
                          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_31_31, ((MR_Box) (transform_hlds__size_prof__Var_7)), ((MR_Box) (transform_hlds__size_prof__Var_18)));
                        }
                        if (transform_hlds__size_prof__succeeded)
                          {
                            transform_hlds__size_prof__TypeInfo_32_32 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[2];
                            {
                              transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_32_32, ((MR_Box) (transform_hlds__size_prof__Var_8)), ((MR_Box) (transform_hlds__size_prof__Var_19)));
                            }
                            if (transform_hlds__size_prof__succeeded)
                              {
                                transform_hlds__size_prof__TypeInfo_33_33 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[3];
                                {
                                  transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_33_33, ((MR_Box) (transform_hlds__size_prof__Var_9)), ((MR_Box) (transform_hlds__size_prof__Var_20)));
                                }
                                if (transform_hlds__size_prof__succeeded)
                                  {
                                    transform_hlds__size_prof__TypeInfo_34_34 = (MR_Word) &transform_hlds__size_prof_scalar_common_2[4];
                                    {
                                      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_34_34, ((MR_Box) (transform_hlds__size_prof__Var_10)), ((MR_Box) (transform_hlds__size_prof__Var_21)));
                                    }
                                    if (transform_hlds__size_prof__succeeded)
                                      {
                                        transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_11 == transform_hlds__size_prof__Var_22);
                                        if (transform_hlds__size_prof__succeeded)
                                          {
                                            {
                                              transform_hlds__size_prof__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__size_prof__Var_12, transform_hlds__size_prof__Var_23);
                                            }
                                            if (transform_hlds__size_prof__succeeded)
                                              {
                                                transform_hlds__size_prof__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__size_prof__Var_13, transform_hlds__size_prof__Var_24);
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
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_info_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_info_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

    {
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[4], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____rev_type_ctor_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____rev_type_ctor_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

    {
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[3], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof____Compare____known_size_map_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_4 = transform_hlds__size_prof__HeadVar__2_2;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_5 = transform_hlds__size_prof__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], transform_hlds__size_prof__HeadVar__1_1, ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof____Unify____known_size_map_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Cast_HeadVar1_3 = transform_hlds__size_prof__HeadVar__1_1;
    MR_Word transform_hlds__size_prof__Cast_HeadVar2_4 = transform_hlds__size_prof__HeadVar__2_2;

    {
      transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[2], ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__size_prof__Cast_HeadVar2_4)));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

void MR_CALL 
transform_hlds__size_prof____Compare____construct_transform_0_0(
  MR_Word * transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Integer transform_hlds__size_prof__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__size_prof__HeadVar__2_2;
    MR_Integer transform_hlds__size_prof__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__size_prof__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__size_prof__HeadVar__1_1, transform_hlds__size_prof__Cast_HeadVar1_4, transform_hlds__size_prof__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__size_prof____Unify____construct_transform_0_0(
  MR_Word transform_hlds__size_prof__HeadVar__2_1,
  MR_Word transform_hlds__size_prof__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__HeadVar__2_1 == transform_hlds__size_prof__HeadVar__2_2);

    return transform_hlds__size_prof__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__binds_arg_in_cell_2_p_0(
  MR_Word transform_hlds__size_prof__Info_3,
  MR_Word transform_hlds__size_prof__UnifyMode_4)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 10)));
    MR_Word transform_hlds__size_prof__LHSFromToInsts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyMode_4, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__CellInitInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__LHSFromToInsts_6, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__CellFinalInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__LHSFromToInsts_6, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_3, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyMode_4, (MR_Integer) 1)));

    {
      transform_hlds__size_prof__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__size_prof__ModuleInfo_5, transform_hlds__size_prof__CellInitInst_8);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        transform_hlds__size_prof__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__size_prof__ModuleInfo_5, transform_hlds__size_prof__CellFinalInst_9);
      }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__find_defined_args_5_p_0(
  MR_Word transform_hlds__size_prof__Args_6,
  MR_Word transform_hlds__size_prof__Modes_7,
  MR_Word * transform_hlds__size_prof__DefinedArgs_8,
  MR_Word * transform_hlds__size_prof__NonDefinedArgs_9,
  MR_Word transform_hlds__size_prof__Info_10)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    if ((transform_hlds__size_prof__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__size_prof__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__size_prof__DefinedArgs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__size_prof__NonDefinedArgs_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__size_prof__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_6, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_6, (MR_Integer) 0)));

        if ((transform_hlds__size_prof__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.find_defined_args\'/5", (MR_String) "length mismatch");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__size_prof__FirstMode_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Modes_7, (MR_Integer) 0)));
            MR_Word transform_hlds__size_prof__LaterModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Modes_7, (MR_Integer) 1)));
            MR_Word transform_hlds__size_prof__LaterDefinedArgs_19;
            MR_Word transform_hlds__size_prof__LaterNonDefinedArgs_20;
            MR_Word transform_hlds__size_prof__ModuleInfo_31;
            MR_Word transform_hlds__size_prof__LHSFromToInsts_32;
            MR_Word transform_hlds__size_prof__CellInitInst_34;
            MR_Word transform_hlds__size_prof__CellFinalInst_35;
            MR_Word transform_hlds__size_prof__Var_36;
            MR_Word transform_hlds__size_prof__Var_37;
            MR_Word transform_hlds__size_prof__Var_38;
            MR_Word transform_hlds__size_prof__Var_39;
            MR_Word transform_hlds__size_prof__Var_40;
            MR_Word transform_hlds__size_prof__Var_41;
            MR_Word transform_hlds__size_prof__Var_42;
            MR_Word transform_hlds__size_prof__Var_43;
            MR_Word transform_hlds__size_prof__Var_44;
            MR_Word transform_hlds__size_prof__Var_45;
            MR_Word transform_hlds__size_prof__Var_33;

            {
              transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__Var_27, transform_hlds__size_prof__LaterModes_18, &transform_hlds__size_prof__LaterDefinedArgs_19, &transform_hlds__size_prof__LaterNonDefinedArgs_20, transform_hlds__size_prof__Info_10);
            }
            transform_hlds__size_prof__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 0)));
            transform_hlds__size_prof__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 1)));
            transform_hlds__size_prof__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 2)));
            transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 3)));
            transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 4)));
            transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 5)));
            transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 6)));
            transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 7)));
            transform_hlds__size_prof__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 8)));
            transform_hlds__size_prof__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 9)));
            transform_hlds__size_prof__ModuleInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_10, (MR_Integer) 10)));
            transform_hlds__size_prof__LHSFromToInsts_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__FirstMode_17, (MR_Integer) 0)));
            transform_hlds__size_prof__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__FirstMode_17, (MR_Integer) 1)));
            transform_hlds__size_prof__CellInitInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__LHSFromToInsts_32, (MR_Integer) 0)));
            transform_hlds__size_prof__CellFinalInst_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__LHSFromToInsts_32, (MR_Integer) 1)));
            {
              transform_hlds__size_prof__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__size_prof__ModuleInfo_31, transform_hlds__size_prof__CellInitInst_34);
            }
            if (transform_hlds__size_prof__succeeded)
              {
                transform_hlds__size_prof__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__size_prof__ModuleInfo_31, transform_hlds__size_prof__CellFinalInst_35);
              }
            if (transform_hlds__size_prof__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__size_prof__DefinedArgs_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_28));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__LaterDefinedArgs_19));
                }
                *transform_hlds__size_prof__NonDefinedArgs_9 = transform_hlds__size_prof__LaterNonDefinedArgs_20;
              }
            else
              {
                *transform_hlds__size_prof__DefinedArgs_8 = transform_hlds__size_prof__LaterDefinedArgs_19;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__size_prof__NonDefinedArgs_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_28));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__LaterNonDefinedArgs_20));
                }
              }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__include_in_target_map_4_p_0(
  MR_Word transform_hlds__size_prof__TypeInfoMap_5,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__TypeInfoVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__TypeInfo_17_17;
    MR_Word transform_hlds__size_prof__Var_16;
    MR_Box transform_hlds__size_prof__conv0_Var_16;

    {
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__TypeInfoMap_5, ((MR_Box) (transform_hlds__size_prof__Type_6)), &transform_hlds__size_prof__conv0_Var_16);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        transform_hlds__size_prof__Var_16 = ((MR_Word) transform_hlds__size_prof__conv0_Var_16);
        transform_hlds__size_prof__succeeded = MR_TRUE;
      }
    if (transform_hlds__size_prof__succeeded)
      {
        transform_hlds__size_prof__TypeInfo_17_17 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
        {
          transform_hlds__size_prof__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__size_prof__TypeInfo_17_17, ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_7)), ((MR_Box) (transform_hlds__size_prof__Var_16)));
        }
      }
    if (transform_hlds__size_prof__succeeded)
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], ((MR_Box) (transform_hlds__size_prof__Type_6)), ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_7)), transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9, transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10);
        }
      }
    else
      *transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_10 = transform_hlds__size_prof__STATE_VARIABLE_TargetTypeInfoMap_0_9;
  }
}

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10;

    {
      transform_hlds__size_prof__include_in_target_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10);
    }
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_TargetTypeInfoMap_10));
  }
}

static void MR_CALL 
transform_hlds__size_prof__update_target_map_2_p_0(
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word transform_hlds__size_prof__TypeInfo_45_45 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__TypeInfoMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__TargetTypeInfoList_6;
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap_7;
    MR_Word transform_hlds__size_prof__Var_10;
    MR_Word transform_hlds__size_prof__Var_11;
    MR_Word transform_hlds__size_prof__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
    MR_Box transform_hlds__size_prof__conv1_TargetTypeInfoMap_7;
    MR_Word transform_hlds__size_prof__Var_33;
    MR_Word transform_hlds__size_prof__Var_34;
    MR_Word transform_hlds__size_prof__Var_35;
    MR_Word transform_hlds__size_prof__Var_36;
    MR_Word transform_hlds__size_prof__Var_38;
    MR_Word transform_hlds__size_prof__Var_39;
    MR_Word transform_hlds__size_prof__Var_40;
    MR_Word transform_hlds__size_prof__Var_41;
    MR_Word transform_hlds__size_prof__Var_42;
    MR_Word transform_hlds__size_prof__Var_43;
    MR_Word transform_hlds__size_prof__Var_37;

    {
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_44_44, transform_hlds__size_prof__TypeInfo_45_45, transform_hlds__size_prof__TargetTypeInfoMap0_4, &transform_hlds__size_prof__TargetTypeInfoList_6);
    }
    {
      transform_hlds__size_prof__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_10, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_10, 1) = ((MR_Box) (transform_hlds__size_prof__update_target_map_2_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_10, 3) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_5));
    }
    {
      transform_hlds__size_prof__Var_11 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_44_44, transform_hlds__size_prof__TypeInfo_45_45);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_2[0], (MR_Word) &transform_hlds__size_prof_scalar_common_2[1], transform_hlds__size_prof__Var_10, transform_hlds__size_prof__TargetTypeInfoList_6, ((MR_Box) (transform_hlds__size_prof__Var_11)), &transform_hlds__size_prof__conv1_TargetTypeInfoMap_7);
    }
    transform_hlds__size_prof__TargetTypeInfoMap_7 = ((MR_Word) transform_hlds__size_prof__conv1_TargetTypeInfoMap_7);
    transform_hlds__size_prof__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__size_prof__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_36));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_38));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_39));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_40));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_41));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_42));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_43));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__construct_rev_map_4_p_0(
  MR_Word transform_hlds__size_prof__TypeInfo_for_T_20,
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word transform_hlds__size_prof__VarCounts_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_RevMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__size_prof__succeeded;

        if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__size_prof__STATE_VARIABLE_RevMap_4 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3;
        else
          {
            MR_Word transform_hlds__size_prof__TypeInfo_21_21;
            MR_Box transform_hlds__size_prof__T_9;
            MR_Word transform_hlds__size_prof__Var_10;
            MR_Word transform_hlds__size_prof__AssocList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer transform_hlds__size_prof__Count_14;
            MR_Word transform_hlds__size_prof__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18;
            MR_Box transform_hlds__size_prof__conv0_Count_14;

            transform_hlds__size_prof__T_9 = (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_17, (MR_Integer) 0));
            transform_hlds__size_prof__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_17, (MR_Integer) 1)));
            transform_hlds__size_prof__TypeInfo_21_21 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
            {
              mercury__map__lookup_3_p_0(transform_hlds__size_prof__TypeInfo_21_21, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__VarCounts_2, ((MR_Box) (transform_hlds__size_prof__Var_10)), &transform_hlds__size_prof__conv0_Count_14);
            }
            transform_hlds__size_prof__Count_14 = ((MR_Integer) transform_hlds__size_prof__conv0_Count_14);
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Count_14 == (MR_Integer) 1);
            if (transform_hlds__size_prof__succeeded)
              {
                mercury__map__det_insert_4_p_0(transform_hlds__size_prof__TypeInfo_21_21, transform_hlds__size_prof__TypeInfo_for_T_20, ((MR_Box) (transform_hlds__size_prof__Var_10)), transform_hlds__size_prof__T_9, transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3, &transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18);
              }
            else
              transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__size_prof__next_value_of_HeadVar__1_1 = transform_hlds__size_prof__AssocList_11;
              MR_Word transform_hlds__size_prof__next_value_of_STATE_VARIABLE_RevMap_0_3 = transform_hlds__size_prof__STATE_VARIABLE_RevMap_18_18;

              transform_hlds__size_prof__STATE_VARIABLE_RevMap_0_3 = transform_hlds__size_prof__next_value_of_STATE_VARIABLE_RevMap_0_3;
              transform_hlds__size_prof__HeadVar__1_1 = transform_hlds__size_prof__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__size_prof__update_rev_maps_2_p_0(
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_11,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_12)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word transform_hlds__size_prof__TypeInfo_62_62 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
    MR_Word transform_hlds__size_prof__TypeCtorInfo_63_63;
    MR_Word transform_hlds__size_prof__TypeInfoList_4;
    MR_Word transform_hlds__size_prof__TypeCtorList_5;
    MR_Word transform_hlds__size_prof__VarCounts0_6;
    MR_Word transform_hlds__size_prof__VarCounts1_7;
    MR_Word transform_hlds__size_prof__VarCounts_8;
    MR_Word transform_hlds__size_prof__RevTypeInfoMap_9;
    MR_Word transform_hlds__size_prof__RevTypeCtorMap_10;
    MR_Word transform_hlds__size_prof__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_14;
    MR_Word transform_hlds__size_prof__Var_15;
    MR_Word transform_hlds__size_prof__Var_16;
    MR_Word transform_hlds__size_prof__Var_39;
    MR_Word transform_hlds__size_prof__Var_40;
    MR_Word transform_hlds__size_prof__Var_43;
    MR_Word transform_hlds__size_prof__Var_44;
    MR_Word transform_hlds__size_prof__Var_45;
    MR_Word transform_hlds__size_prof__Var_46;
    MR_Word transform_hlds__size_prof__Var_47;
    MR_Word transform_hlds__size_prof__Var_48;
    MR_Word transform_hlds__size_prof__Var_49;
    MR_Word transform_hlds__size_prof__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
    MR_Word transform_hlds__size_prof__Var_29;
    MR_Word transform_hlds__size_prof__Var_30;
    MR_Word transform_hlds__size_prof__Var_31;
    MR_Word transform_hlds__size_prof__Var_32;
    MR_Word transform_hlds__size_prof__Var_33;
    MR_Word transform_hlds__size_prof__Var_34;
    MR_Word transform_hlds__size_prof__Var_35;
    MR_Word transform_hlds__size_prof__Var_36;
    MR_Word transform_hlds__size_prof__Var_37;
    MR_Word transform_hlds__size_prof__Var_38;
    MR_Word transform_hlds__size_prof__Var_41;
    MR_Word transform_hlds__size_prof__Var_42;

    {
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_61_61, transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__Var_13, &transform_hlds__size_prof__TypeInfoList_4);
    }
    transform_hlds__size_prof__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
    transform_hlds__size_prof__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
    {
      mercury__map__to_sorted_assoc_list_2_p_0(transform_hlds__size_prof__TypeCtorInfo_63_63, transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__Var_14, &transform_hlds__size_prof__TypeCtorList_5);
    }
    {
      mercury__map__init_1_p_0(transform_hlds__size_prof__TypeInfo_62_62, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &transform_hlds__size_prof__VarCounts0_6);
    }
    {
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__size_prof__TypeInfoList_4, transform_hlds__size_prof__VarCounts0_6, &transform_hlds__size_prof__VarCounts1_7);
    }
    {
      transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_117_110_116_95_97_112_112_101_97_114_97_110_99_101_115_95_95_91_49_93_95_48_3_p_0(transform_hlds__size_prof__TypeCtorList_5, transform_hlds__size_prof__VarCounts1_7, &transform_hlds__size_prof__VarCounts_8);
    }
    {
      transform_hlds__size_prof__Var_15 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__TypeCtorInfo_61_61);
    }
    {
      transform_hlds__size_prof__construct_rev_map_4_p_0(transform_hlds__size_prof__TypeCtorInfo_61_61, transform_hlds__size_prof__TypeInfoList_4, transform_hlds__size_prof__VarCounts_8, transform_hlds__size_prof__Var_15, &transform_hlds__size_prof__RevTypeInfoMap_9);
    }
    {
      transform_hlds__size_prof__Var_16 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_62_62, transform_hlds__size_prof__TypeCtorInfo_63_63);
    }
    {
      transform_hlds__size_prof__construct_rev_map_4_p_0(transform_hlds__size_prof__TypeCtorInfo_63_63, transform_hlds__size_prof__TypeCtorList_5, transform_hlds__size_prof__VarCounts_8, transform_hlds__size_prof__Var_16, &transform_hlds__size_prof__RevTypeCtorMap_10);
    }
    transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_11, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__size_prof__STATE_VARIABLE_Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_39));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_43));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_44));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_45));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_46));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_47));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_48));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_49));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(
  MR_Word transform_hlds__size_prof__RttiVarMaps_5,
  MR_Word transform_hlds__size_prof__TVar_6,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeInfoLocn_8;
    MR_Word transform_hlds__size_prof__Type_9;

    {
      hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__size_prof__RttiVarMaps_5, transform_hlds__size_prof__TVar_6, &transform_hlds__size_prof__TypeInfoLocn_8);
    }
    {
      transform_hlds__size_prof__Type_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_9, 0) = ((MR_Box) (transform_hlds__size_prof__TVar_6));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (((MR_tag((MR_Word) transform_hlds__size_prof__TypeInfoLocn_8)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word transform_hlds__size_prof__TypeCtorInfo_59_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        MR_Word transform_hlds__size_prof__TypeInfo_60_72 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
        MR_Word transform_hlds__size_prof__TypeInfoVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeInfoLocn_8, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
        MR_Word transform_hlds__size_prof__TypeInfoMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__TypeInfoMap_24;
        MR_Word transform_hlds__size_prof__RevTypeInfoMap_26;
        MR_Word transform_hlds__size_prof__Var_49;
        MR_Word transform_hlds__size_prof__Var_51;
        MR_Word transform_hlds__size_prof__Var_53;
        MR_Word transform_hlds__size_prof__Var_54;
        MR_Word transform_hlds__size_prof__Var_55;
        MR_Word transform_hlds__size_prof__Var_56;
        MR_Word transform_hlds__size_prof__Var_57;
        MR_Word transform_hlds__size_prof__Var_58;
        MR_Word transform_hlds__size_prof__Var_59;
        MR_Word transform_hlds__size_prof__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
        MR_Word transform_hlds__size_prof__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
        MR_Word transform_hlds__size_prof__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
        MR_Word transform_hlds__size_prof__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
        MR_Word transform_hlds__size_prof__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
        MR_Word transform_hlds__size_prof__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
        MR_Word transform_hlds__size_prof__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
        MR_Word transform_hlds__size_prof__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
        MR_Word transform_hlds__size_prof__RevTypeInfoMap1_25;
        MR_Word transform_hlds__size_prof__Var_50;
        MR_Word transform_hlds__size_prof__Var_52;

        {
          mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_59_71, transform_hlds__size_prof__TypeInfo_60_72, ((MR_Box) (transform_hlds__size_prof__Type_9)), ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_10)), transform_hlds__size_prof__TypeInfoMap0_23, &transform_hlds__size_prof__TypeInfoMap_24);
        }
        {
          transform_hlds__size_prof__succeeded = mercury__map__insert_4_p_0(transform_hlds__size_prof__TypeInfo_60_72, transform_hlds__size_prof__TypeCtorInfo_59_71, ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_10)), ((MR_Box) (transform_hlds__size_prof__Type_9)), transform_hlds__size_prof__RevTypeInfoMap0_22, &transform_hlds__size_prof__RevTypeInfoMap1_25);
        }
        if (transform_hlds__size_prof__succeeded)
          transform_hlds__size_prof__RevTypeInfoMap_26 = transform_hlds__size_prof__RevTypeInfoMap1_25;
        else
          transform_hlds__size_prof__RevTypeInfoMap_26 = transform_hlds__size_prof__RevTypeInfoMap0_22;
        transform_hlds__size_prof__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
        transform_hlds__size_prof__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
        transform_hlds__size_prof__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
        transform_hlds__size_prof__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
        transform_hlds__size_prof__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
        transform_hlds__size_prof__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
        transform_hlds__size_prof__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
        transform_hlds__size_prof__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
        transform_hlds__size_prof__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
        transform_hlds__size_prof__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_49));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_24));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_51));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_26));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_53));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_54));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_55));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_56));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_57));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_58));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_59));
        }
      }
    else
      *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_13;
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_known_size_4_p_0(
  MR_Word transform_hlds__size_prof__Var_5,
  MR_Integer transform_hlds__size_prof__KnownSize_6,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_10,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_11)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__KnownSizeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__KnownSizeMap_9;
    MR_Word transform_hlds__size_prof__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
    MR_Word transform_hlds__size_prof__Var_23;
    MR_Word transform_hlds__size_prof__Var_24;
    MR_Word transform_hlds__size_prof__Var_25;
    MR_Word transform_hlds__size_prof__Var_26;
    MR_Word transform_hlds__size_prof__Var_27;
    MR_Word transform_hlds__size_prof__Var_29;
    MR_Word transform_hlds__size_prof__Var_30;
    MR_Word transform_hlds__size_prof__Var_31;
    MR_Word transform_hlds__size_prof__Var_32;
    MR_Word transform_hlds__size_prof__Var_33;
    MR_Word transform_hlds__size_prof__Var_28;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_5)), ((MR_Box) (transform_hlds__size_prof__KnownSize_6)), transform_hlds__size_prof__KnownSizeMap0_8, &transform_hlds__size_prof__KnownSizeMap_9);
    }
    transform_hlds__size_prof__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_10, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__size_prof__STATE_VARIABLE_Info_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_9));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_29));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_30));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_31));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_32));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_33));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_type_info_var_4_p_0(
  MR_Word transform_hlds__size_prof__Type_5,
  MR_Word transform_hlds__size_prof__Var_6,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_13,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_14)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word transform_hlds__size_prof__TypeInfo_60_60 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__TypeInfoMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__TypeInfoMap_10;
    MR_Word transform_hlds__size_prof__RevTypeInfoMap_12;
    MR_Word transform_hlds__size_prof__Var_37;
    MR_Word transform_hlds__size_prof__Var_39;
    MR_Word transform_hlds__size_prof__Var_41;
    MR_Word transform_hlds__size_prof__Var_42;
    MR_Word transform_hlds__size_prof__Var_43;
    MR_Word transform_hlds__size_prof__Var_44;
    MR_Word transform_hlds__size_prof__Var_45;
    MR_Word transform_hlds__size_prof__Var_46;
    MR_Word transform_hlds__size_prof__Var_47;
    MR_Word transform_hlds__size_prof__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
    MR_Word transform_hlds__size_prof__RevTypeInfoMap1_11;
    MR_Word transform_hlds__size_prof__Var_38;
    MR_Word transform_hlds__size_prof__Var_40;

    {
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_59_59, transform_hlds__size_prof__TypeInfo_60_60, ((MR_Box) (transform_hlds__size_prof__Type_5)), ((MR_Box) (transform_hlds__size_prof__Var_6)), transform_hlds__size_prof__TypeInfoMap0_9, &transform_hlds__size_prof__TypeInfoMap_10);
    }
    {
      transform_hlds__size_prof__succeeded = mercury__map__insert_4_p_0(transform_hlds__size_prof__TypeInfo_60_60, transform_hlds__size_prof__TypeCtorInfo_59_59, ((MR_Box) (transform_hlds__size_prof__Var_6)), ((MR_Box) (transform_hlds__size_prof__Type_5)), transform_hlds__size_prof__RevTypeInfoMap0_8, &transform_hlds__size_prof__RevTypeInfoMap1_11);
    }
    if (transform_hlds__size_prof__succeeded)
      transform_hlds__size_prof__RevTypeInfoMap_12 = transform_hlds__size_prof__RevTypeInfoMap1_11;
    else
      transform_hlds__size_prof__RevTypeInfoMap_12 = transform_hlds__size_prof__RevTypeInfoMap0_8;
    transform_hlds__size_prof__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_13, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__size_prof__STATE_VARIABLE_Info_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_44));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_45));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_46));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_47));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box * transform_hlds__size_prof__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
    MR_Word transform_hlds__size_prof__conv1_HeadVar__3_46;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__record_known_type_info__1108__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), &transform_hlds__size_prof__conv1_HeadVar__3_46);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        *transform_hlds__size_prof__wrapper_arg_2 = ((MR_Box) (transform_hlds__size_prof__conv1_HeadVar__3_46));
        transform_hlds__size_prof__succeeded = MR_TRUE;
      }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_known_type_info_5_p_0(
  MR_Word transform_hlds__size_prof__Var_6,
  MR_Word transform_hlds__size_prof__TypeCtorInfoVar_7,
  MR_Word transform_hlds__size_prof__ArgTypeInfoVars_8,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_19,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_20)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
    MR_Word transform_hlds__size_prof__TypeCtor0_11;
    MR_Box transform_hlds__size_prof__conv0_TypeCtor0_11;

    {
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__size_prof__RevTypeCtorMap0_10, ((MR_Box) (transform_hlds__size_prof__TypeCtorInfoVar_7)), &transform_hlds__size_prof__conv0_TypeCtor0_11);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        transform_hlds__size_prof__TypeCtor0_11 = ((MR_Word) transform_hlds__size_prof__conv0_TypeCtor0_11);
        transform_hlds__size_prof__succeeded = MR_TRUE;
      }
    if (transform_hlds__size_prof__succeeded)
      {
        MR_Word transform_hlds__size_prof__RevTypeInfoMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
        MR_Word transform_hlds__size_prof__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
        MR_Word transform_hlds__size_prof__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
        MR_Word transform_hlds__size_prof__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
        MR_Word transform_hlds__size_prof__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
        MR_Word transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
        MR_Word transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));
        MR_Word transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 9)));
        MR_Word transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, (MR_Integer) 10)));
        MR_Word transform_hlds__size_prof__ArgTypes_13;
        MR_Word transform_hlds__size_prof__Var_21;

        {
          transform_hlds__size_prof__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_21, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_21, 1) = ((MR_Box) (transform_hlds__size_prof__record_known_type_info_5_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_21, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_12));
        }
        {
          transform_hlds__size_prof__succeeded = mercury__list__map_3_p_2((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__Var_21, transform_hlds__size_prof__ArgTypeInfoVars_8, &transform_hlds__size_prof__ArgTypes_13);
        }
        if (transform_hlds__size_prof__succeeded)
          {
            MR_Integer transform_hlds__size_prof__Arity_14;
            MR_Word transform_hlds__size_prof__SymName_15;
            MR_Word transform_hlds__size_prof__TypeCtor1_17;
            MR_Word transform_hlds__size_prof__Type_18;
            MR_Integer transform_hlds__size_prof___DeclArity_16;

            {
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Arity_14);
            }
            transform_hlds__size_prof__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor0_11, (MR_Integer) 0)));
            transform_hlds__size_prof___DeclArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor0_11, (MR_Integer) 1)));
            {
              transform_hlds__size_prof__TypeCtor1_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor1_17, 0) = ((MR_Box) (transform_hlds__size_prof__SymName_15));
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor1_17, 1) = ((MR_Box) (transform_hlds__size_prof__Arity_14));
            }
            {
              parse_tree__prog_type__construct_type_3_p_0(transform_hlds__size_prof__TypeCtor1_17, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Type_18);
            }
            {
              transform_hlds__size_prof__record_type_info_var_4_p_0(transform_hlds__size_prof__Type_18, transform_hlds__size_prof__Var_6, transform_hlds__size_prof__STATE_VARIABLE_Info_0_19, transform_hlds__size_prof__STATE_VARIABLE_Info_20);
            }
          }
        else
          *transform_hlds__size_prof__STATE_VARIABLE_Info_20 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_19;
      }
    else
      *transform_hlds__size_prof__STATE_VARIABLE_Info_20 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_19;
  }
}

static void MR_CALL 
transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(
  MR_Word transform_hlds__size_prof__Var_7,
  MR_Word transform_hlds__size_prof__TypeCtorModule_8,
  MR_String transform_hlds__size_prof__TypeCtorName_9,
  MR_Integer transform_hlds__size_prof__TypeCtorArity_10,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_17,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_18)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeCtorInfo_64_64;
    MR_Word transform_hlds__size_prof__TypeInfo_65_65;
    MR_Word transform_hlds__size_prof__TypeCtor_12;
    MR_Word transform_hlds__size_prof__TypeCtorMap0_13;
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_14;
    MR_Word transform_hlds__size_prof__TypeCtorMap_15;
    MR_Word transform_hlds__size_prof__RevTypeCtorMap_16;
    MR_Word transform_hlds__size_prof__Var_19;
    MR_Word transform_hlds__size_prof__Var_43;
    MR_Word transform_hlds__size_prof__Var_45;
    MR_Word transform_hlds__size_prof__Var_46;
    MR_Word transform_hlds__size_prof__Var_47;
    MR_Word transform_hlds__size_prof__Var_48;
    MR_Word transform_hlds__size_prof__Var_49;
    MR_Word transform_hlds__size_prof__Var_50;
    MR_Word transform_hlds__size_prof__Var_51;
    MR_Word transform_hlds__size_prof__Var_52;
    MR_Word transform_hlds__size_prof__Var_22;
    MR_Word transform_hlds__size_prof__Var_24;
    MR_Word transform_hlds__size_prof__Var_25;
    MR_Word transform_hlds__size_prof__Var_26;
    MR_Word transform_hlds__size_prof__Var_27;
    MR_Word transform_hlds__size_prof__Var_28;
    MR_Word transform_hlds__size_prof__Var_29;
    MR_Word transform_hlds__size_prof__Var_30;
    MR_Word transform_hlds__size_prof__Var_31;
    MR_Word transform_hlds__size_prof__Var_42;
    MR_Word transform_hlds__size_prof__Var_44;

    {
      transform_hlds__size_prof__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorModule_8));
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_19, 1) = ((MR_Box) (transform_hlds__size_prof__TypeCtorName_9));
    }
    {
      transform_hlds__size_prof__TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor_12, 0) = ((MR_Box) (transform_hlds__size_prof__Var_19));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TypeCtor_12, 1) = ((MR_Box) (transform_hlds__size_prof__TypeCtorArity_10));
    }
    transform_hlds__size_prof__TypeCtorMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    transform_hlds__size_prof__RevTypeCtorMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
    transform_hlds__size_prof__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
    transform_hlds__size_prof__TypeInfo_65_65 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
    {
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, transform_hlds__size_prof__TypeInfo_65_65, ((MR_Box) (transform_hlds__size_prof__TypeCtor_12)), ((MR_Box) (transform_hlds__size_prof__Var_7)), transform_hlds__size_prof__TypeCtorMap0_13, &transform_hlds__size_prof__TypeCtorMap_15);
    }
    {
      mercury__map__set_4_p_0(transform_hlds__size_prof__TypeInfo_65_65, transform_hlds__size_prof__TypeCtorInfo_64_64, ((MR_Box) (transform_hlds__size_prof__Var_7)), ((MR_Box) (transform_hlds__size_prof__TypeCtor_12)), transform_hlds__size_prof__RevTypeCtorMap0_14, &transform_hlds__size_prof__RevTypeCtorMap_16);
    }
    transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_17, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__size_prof__STATE_VARIABLE_Info_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_48));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_49));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_50));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_51));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_52));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__get_new_var_5_p_0(
  MR_Word transform_hlds__size_prof__Type_6,
  MR_String transform_hlds__size_prof__Prefix_7,
  MR_Word * transform_hlds__size_prof__Var_8,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_18,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_19)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word transform_hlds__size_prof__VarSet0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__VarTypes0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__VarSet1_12;
    MR_Integer transform_hlds__size_prof__VarNum_13;
    MR_String transform_hlds__size_prof__VarNumStr_14;
    MR_String transform_hlds__size_prof__Name_15;
    MR_Word transform_hlds__size_prof__VarSet_16;
    MR_Word transform_hlds__size_prof__VarTypes_17;
    MR_Word transform_hlds__size_prof__Var_42;
    MR_Word transform_hlds__size_prof__Var_43;
    MR_Word transform_hlds__size_prof__Var_44;
    MR_Word transform_hlds__size_prof__Var_45;
    MR_Word transform_hlds__size_prof__Var_46;
    MR_Word transform_hlds__size_prof__Var_47;
    MR_Word transform_hlds__size_prof__Var_50;
    MR_Word transform_hlds__size_prof__Var_51;
    MR_Word transform_hlds__size_prof__Var_52;
    MR_Word transform_hlds__size_prof__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
    MR_Word transform_hlds__size_prof__Var_48;
    MR_Word transform_hlds__size_prof__Var_49;

    {
      mercury__varset__new_var_3_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, transform_hlds__size_prof__Var_8, transform_hlds__size_prof__VarSet0_10, &transform_hlds__size_prof__VarSet1_12);
    }
    {
      mercury__term__var_to_int_2_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, *transform_hlds__size_prof__Var_8, &transform_hlds__size_prof__VarNum_13);
    }
    {
      mercury__string__int_to_string_2_p_0(transform_hlds__size_prof__VarNum_13, &transform_hlds__size_prof__VarNumStr_14);
    }
    {
      mercury__string__append_3_p_2(transform_hlds__size_prof__Prefix_7, transform_hlds__size_prof__VarNumStr_14, &transform_hlds__size_prof__Name_15);
    }
    {
      mercury__varset__name_var_4_p_0(transform_hlds__size_prof__TypeCtorInfo_64_64, *transform_hlds__size_prof__Var_8, transform_hlds__size_prof__Name_15, transform_hlds__size_prof__VarSet1_12, &transform_hlds__size_prof__VarSet_16);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*transform_hlds__size_prof__Var_8, transform_hlds__size_prof__Type_6, transform_hlds__size_prof__VarTypes0_11, &transform_hlds__size_prof__VarTypes_17);
    }
    transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_18, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__size_prof__STATE_VARIABLE_Info_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_43));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_44));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_45));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_46));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_47));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_50));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_51));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_52));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__make_size_goal_8_p_0(
  MR_Word transform_hlds__size_prof__TypeInfoVar_9,
  MR_Word transform_hlds__size_prof__Arg_10,
  MR_Word transform_hlds__size_prof__Context_11,
  MR_Word * transform_hlds__size_prof__SizeGoal_12,
  MR_Word transform_hlds__size_prof__MaybeSizeVar0_13,
  MR_Word * transform_hlds__size_prof__MaybeSizeVar_14,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_21,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_22)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__SizeVar_16;
    MR_String transform_hlds__size_prof__Pred_18;
    MR_Word transform_hlds__size_prof__Args_19;
    MR_Word transform_hlds__size_prof__TermSizeProfBuiltin_20;
    MR_Word transform_hlds__size_prof__Var_23;
    MR_Word transform_hlds__size_prof__Var_38;
    MR_Word transform_hlds__size_prof__Var_39;
    MR_Word transform_hlds__size_prof__Var_40;
    MR_Word transform_hlds__size_prof__Var_41;
    MR_Word transform_hlds__size_prof__Var_42;
    MR_Word transform_hlds__size_prof__Var_43;
    MR_Word transform_hlds__size_prof__Var_44;
    MR_Word transform_hlds__size_prof__Var_45;
    MR_Word transform_hlds__size_prof__Var_46;
    MR_Word transform_hlds__size_prof__Var_47;
    MR_Word transform_hlds__size_prof__Var_48;
    MR_Word transform_hlds__size_prof__Var_49;

    {
      transform_hlds__size_prof__Var_23 = parse_tree__builtin_lib_types__int_type_0_f_0();
    }
    {
      transform_hlds__size_prof__get_new_var_5_p_0(transform_hlds__size_prof__Var_23, (MR_String) "SizeVar", &transform_hlds__size_prof__SizeVar_16, transform_hlds__size_prof__STATE_VARIABLE_Info_0_21, transform_hlds__size_prof__STATE_VARIABLE_Info_22);
    }
    if ((transform_hlds__size_prof__MaybeSizeVar0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__size_prof__Var_26;
        MR_Word transform_hlds__size_prof__Var_27;

        transform_hlds__size_prof__Pred_18 = (MR_String) "measure_size";
        {
          transform_hlds__size_prof__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_27, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__size_prof__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_26, 0) = ((MR_Box) (transform_hlds__size_prof__Arg_10));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_26, 1) = ((MR_Box) (transform_hlds__size_prof__Var_27));
        }
        {
          transform_hlds__size_prof__Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_9));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 1) = ((MR_Box) (transform_hlds__size_prof__Var_26));
        }
      }
    else
      {
        MR_Word transform_hlds__size_prof__SizeVar0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeSizeVar0_13, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_29;
        MR_Word transform_hlds__size_prof__Var_30;
        MR_Word transform_hlds__size_prof__Var_31;

        transform_hlds__size_prof__Pred_18 = (MR_String) "measure_size_acc";
        {
          transform_hlds__size_prof__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_31, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__size_prof__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_30, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar0_17));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_30, 1) = ((MR_Box) (transform_hlds__size_prof__Var_31));
        }
        {
          transform_hlds__size_prof__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_29, 0) = ((MR_Box) (transform_hlds__size_prof__Arg_10));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_29, 1) = ((MR_Box) (transform_hlds__size_prof__Var_30));
        }
        {
          transform_hlds__size_prof__Args_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoVar_9));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_19, 1) = ((MR_Box) (transform_hlds__size_prof__Var_29));
        }
      }
    {
      transform_hlds__size_prof__TermSizeProfBuiltin_20 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
    }
    {
      transform_hlds__size_prof__Var_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(transform_hlds__size_prof__SizeVar_16);
    }
    transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_22, (MR_Integer) 10)));
    {
      hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfBuiltin_20, transform_hlds__size_prof__Pred_18, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__Args_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__Var_38, transform_hlds__size_prof__Var_39, transform_hlds__size_prof__Context_11, transform_hlds__size_prof__SizeGoal_12);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__size_prof__MaybeSizeVar_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_16));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__make_type_ctor_info_6_p_0(
  MR_Word transform_hlds__size_prof__TypeCtor_7,
  MR_Word transform_hlds__size_prof__TypeArgs_8,
  MR_Word * transform_hlds__size_prof__TypeCtorVar_9,
  MR_Word * transform_hlds__size_prof__TypeCtorGoals_10,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_25,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_26)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeCtorVarPrime_12;
    MR_Word transform_hlds__size_prof__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
    MR_Box transform_hlds__size_prof__conv0_TypeCtorVarPrime_12;

    {
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__Var_27, ((MR_Box) (transform_hlds__size_prof__TypeCtor_7)), &transform_hlds__size_prof__conv0_TypeCtorVarPrime_12);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        transform_hlds__size_prof__TypeCtorVarPrime_12 = ((MR_Word) transform_hlds__size_prof__conv0_TypeCtorVarPrime_12);
        transform_hlds__size_prof__succeeded = MR_TRUE;
      }
    if (transform_hlds__size_prof__succeeded)
      {
        *transform_hlds__size_prof__TypeCtorVar_9 = transform_hlds__size_prof__TypeCtorVarPrime_12;
        *transform_hlds__size_prof__TypeCtorGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__size_prof__STATE_VARIABLE_Info_26 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_25;
      }
    else
      {
        MR_Word transform_hlds__size_prof__Type_16;
        MR_Word transform_hlds__size_prof__VarSet0_17;
        MR_Word transform_hlds__size_prof__VarTypes0_18;
        MR_Word transform_hlds__size_prof__RttiVarMaps0_19;
        MR_Word transform_hlds__size_prof__TypeCtorGoal_21;
        MR_Word transform_hlds__size_prof__VarSet_22;
        MR_Word transform_hlds__size_prof__VarTypes_23;
        MR_Word transform_hlds__size_prof__RttiVarMaps_24;
        MR_Word transform_hlds__size_prof__Var_73;
        MR_Word transform_hlds__size_prof__Var_74;
        MR_Word transform_hlds__size_prof__Var_75;
        MR_Word transform_hlds__size_prof__Var_76;
        MR_Word transform_hlds__size_prof__Var_77;
        MR_Word transform_hlds__size_prof__Var_78;
        MR_Word transform_hlds__size_prof__Var_81;
        MR_Word transform_hlds__size_prof__Var_83;
        MR_Word transform_hlds__size_prof__Var_84;
        MR_Word transform_hlds__size_prof__Var_85;
        MR_Word transform_hlds__size_prof__Var_86;
        MR_Word transform_hlds__size_prof__Var_87;
        MR_Word transform_hlds__size_prof__Var_88;
        MR_Word transform_hlds__size_prof__Var_89;
        MR_Word transform_hlds__size_prof__Var_90;
        MR_Word transform_hlds__size_prof__Var_92;
        MR_Word transform_hlds__size_prof__Var_94;
        MR_Word transform_hlds__size_prof__Purity_13;
        MR_Word transform_hlds__size_prof__PredOrFunc_14;
        MR_Word transform_hlds__size_prof__Var_43;
        MR_Word transform_hlds__size_prof__Var_44;
        MR_Word transform_hlds__size_prof__Var_45;
        MR_Word transform_hlds__size_prof__Var_46;
        MR_Word transform_hlds__size_prof__Var_47;
        MR_Word transform_hlds__size_prof__Var_48;
        MR_Word transform_hlds__size_prof__Var_50;
        MR_Word transform_hlds__size_prof__Var_52;
        MR_Word transform_hlds__size_prof__Var_20;
        MR_Word transform_hlds__size_prof__Var_79;
        MR_Word transform_hlds__size_prof__Var_80;
        MR_Word transform_hlds__size_prof__Var_82;

        {
          transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(transform_hlds__size_prof__TypeCtor_7, &transform_hlds__size_prof__Purity_13, &transform_hlds__size_prof__PredOrFunc_14);
        }
        if (transform_hlds__size_prof__succeeded)
          {
            parse_tree__prog_type__construct_higher_order_type_5_p_0(transform_hlds__size_prof__Purity_13, transform_hlds__size_prof__PredOrFunc_14, transform_hlds__size_prof__TypeArgs_8, &transform_hlds__size_prof__Type_16);
          }
        else
          {
            {
              parse_tree__prog_type__construct_type_3_p_0(transform_hlds__size_prof__TypeCtor_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__Type_16);
            }
          }
        transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
        transform_hlds__size_prof__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
        transform_hlds__size_prof__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
        transform_hlds__size_prof__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
        transform_hlds__size_prof__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
        transform_hlds__size_prof__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
        transform_hlds__size_prof__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
        transform_hlds__size_prof__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
        transform_hlds__size_prof__RttiVarMaps0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
        transform_hlds__size_prof__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
        {
          check_hlds__polymorphism__init_const_type_ctor_info_var_11_p_0(transform_hlds__size_prof__Type_16, transform_hlds__size_prof__TypeCtor_7, transform_hlds__size_prof__TypeCtorVar_9, &transform_hlds__size_prof__Var_20, &transform_hlds__size_prof__TypeCtorGoal_21, transform_hlds__size_prof__VarSet0_17, &transform_hlds__size_prof__VarSet_22, transform_hlds__size_prof__VarTypes0_18, &transform_hlds__size_prof__VarTypes_23, transform_hlds__size_prof__RttiVarMaps0_19, &transform_hlds__size_prof__RttiVarMaps_24);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__size_prof__TypeCtorGoals_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorGoal_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        transform_hlds__size_prof__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
        transform_hlds__size_prof__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
        transform_hlds__size_prof__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
        transform_hlds__size_prof__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
        transform_hlds__size_prof__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
        transform_hlds__size_prof__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
        transform_hlds__size_prof__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
        transform_hlds__size_prof__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 8)));
        transform_hlds__size_prof__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 9)));
        transform_hlds__size_prof__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_25, (MR_Integer) 10)));
        transform_hlds__size_prof__Var_84 = transform_hlds__size_prof__Var_73;
        transform_hlds__size_prof__Var_85 = transform_hlds__size_prof__Var_74;
        transform_hlds__size_prof__Var_86 = transform_hlds__size_prof__Var_75;
        transform_hlds__size_prof__Var_87 = transform_hlds__size_prof__Var_76;
        transform_hlds__size_prof__Var_88 = transform_hlds__size_prof__Var_77;
        transform_hlds__size_prof__Var_89 = transform_hlds__size_prof__Var_78;
        transform_hlds__size_prof__Var_90 = transform_hlds__size_prof__VarSet_22;
        transform_hlds__size_prof__Var_92 = transform_hlds__size_prof__Var_81;
        transform_hlds__size_prof__Var_94 = transform_hlds__size_prof__Var_83;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__size_prof__STATE_VARIABLE_Info_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_84));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_85));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_86));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_87));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_88));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_89));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_90));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_23));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_92));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_24));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_94));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box * transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3,
  MR_Box transform_hlds__size_prof__wrapper_arg_4,
  MR_Box * transform_hlds__size_prof__wrapper_arg_5)
{
  {
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
    MR_Word transform_hlds__size_prof__conv2_TypeInfoVar_9;
    MR_Word transform_hlds__size_prof__conv1_TypeInfoGoals_10;
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39;

    {
      transform_hlds__size_prof__make_type_info_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), &transform_hlds__size_prof__conv2_TypeInfoVar_9, &transform_hlds__size_prof__conv1_TypeInfoGoals_10, ((MR_Word) transform_hlds__size_prof__wrapper_arg_4), &transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39);
    }
    *transform_hlds__size_prof__wrapper_arg_2 = ((MR_Box) (transform_hlds__size_prof__conv2_TypeInfoVar_9));
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv1_TypeInfoGoals_10));
    *transform_hlds__size_prof__wrapper_arg_5 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_39));
  }
}

static void MR_CALL 
transform_hlds__size_prof__construct_type_info_9_p_0(
  MR_Word transform_hlds__size_prof__Context_10,
  MR_Word transform_hlds__size_prof__Type_11,
  MR_Word transform_hlds__size_prof__TypeCtor_12,
  MR_Word transform_hlds__size_prof__ArgTypes_13,
  MR_Word transform_hlds__size_prof__CtorIsVarArity_14,
  MR_Word * transform_hlds__size_prof__TypeInfoVar_15,
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_16,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_42,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_43)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeCtorInfo_180_180;
    MR_Word transform_hlds__size_prof__TypeInfo_181_181;
    MR_Word transform_hlds__size_prof__TypeCtorInfo_184_184;
    MR_Word transform_hlds__size_prof__ArgTypeInfoVars_18;
    MR_Word transform_hlds__size_prof__ArgTypeInfoGoalLists_19;
    MR_Word transform_hlds__size_prof__ArgTypeInfoGoals_20;
    MR_Word transform_hlds__size_prof__TypeCtorVar_21;
    MR_Word transform_hlds__size_prof__TypeCtorGoals_22;
    MR_Word transform_hlds__size_prof__FrontGoals_30;
    MR_Word transform_hlds__size_prof__ArgVars_31;
    MR_Word transform_hlds__size_prof__VarSet2_32;
    MR_Word transform_hlds__size_prof__VarTypes2_33;
    MR_Word transform_hlds__size_prof__RttiVarMaps0_34;
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap_35;
    MR_Word transform_hlds__size_prof__MaybePreferredVar_37;
    MR_Word transform_hlds__size_prof__TypeInfoGoal_38;
    MR_Word transform_hlds__size_prof__VarSet_39;
    MR_Word transform_hlds__size_prof__VarTypes_40;
    MR_Word transform_hlds__size_prof__RttiVarMaps_41;
    MR_Word transform_hlds__size_prof__Var_44;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_45_45;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_50_50;
    MR_Word transform_hlds__size_prof__Var_57;
    MR_Word transform_hlds__size_prof__Var_58;
    MR_Word transform_hlds__size_prof__Var_142;
    MR_Word transform_hlds__size_prof__Var_143;
    MR_Word transform_hlds__size_prof__Var_144;
    MR_Word transform_hlds__size_prof__Var_145;
    MR_Word transform_hlds__size_prof__Var_146;
    MR_Word transform_hlds__size_prof__Var_147;
    MR_Word transform_hlds__size_prof__Var_150;
    MR_Word transform_hlds__size_prof__Var_152;
    MR_Word transform_hlds__size_prof__Var_153;
    MR_Word transform_hlds__size_prof__Var_154;
    MR_Word transform_hlds__size_prof__Var_155;
    MR_Word transform_hlds__size_prof__Var_156;
    MR_Word transform_hlds__size_prof__Var_157;
    MR_Word transform_hlds__size_prof__Var_158;
    MR_Word transform_hlds__size_prof__Var_159;
    MR_Word transform_hlds__size_prof__Var_161;
    MR_Word transform_hlds__size_prof__Var_163;
    MR_Box transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45;
    MR_Word transform_hlds__size_prof__Var_102;
    MR_Word transform_hlds__size_prof__Var_103;
    MR_Word transform_hlds__size_prof__Var_104;
    MR_Word transform_hlds__size_prof__Var_105;
    MR_Word transform_hlds__size_prof__Var_107;
    MR_Word transform_hlds__size_prof__Var_109;
    MR_Word transform_hlds__size_prof__Var_111;
    MR_Word transform_hlds__size_prof__PrefTIVar_36;
    MR_Box transform_hlds__size_prof__conv4_PrefTIVar_36;
    MR_Word transform_hlds__size_prof__Var_148;
    MR_Word transform_hlds__size_prof__Var_149;
    MR_Word transform_hlds__size_prof__Var_151;

    {
      transform_hlds__size_prof__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_44, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_44, 1) = ((MR_Box) (transform_hlds__size_prof__construct_type_info_9_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_44, 3) = ((MR_Box) (transform_hlds__size_prof__Context_10));
    }
    transform_hlds__size_prof__TypeCtorInfo_180_180 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    transform_hlds__size_prof__TypeInfo_181_181 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
    {
      mercury__list__map2_foldl_6_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__TypeInfo_181_181, (MR_Word) &transform_hlds__size_prof_scalar_common_1[2], (MR_Word) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0, transform_hlds__size_prof__Var_44, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__ArgTypeInfoVars_18, &transform_hlds__size_prof__ArgTypeInfoGoalLists_19, ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_Info_0_42)), &transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45);
    }
    transform_hlds__size_prof__STATE_VARIABLE_Info_45_45 = ((MR_Word) transform_hlds__size_prof__conv3_STATE_VARIABLE_Info_45_45);
    transform_hlds__size_prof__TypeCtorInfo_184_184 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
    {
      transform_hlds__size_prof__ArgTypeInfoGoals_20 = mercury__list__condense_1_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__ArgTypeInfoGoalLists_19);
    }
    {
      transform_hlds__size_prof__make_type_ctor_info_6_p_0(transform_hlds__size_prof__TypeCtor_12, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__TypeCtorVar_21, &transform_hlds__size_prof__TypeCtorGoals_22, transform_hlds__size_prof__STATE_VARIABLE_Info_45_45, &transform_hlds__size_prof__STATE_VARIABLE_Info_46_46);
    }
    switch (transform_hlds__size_prof__CtorIsVarArity_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__size_prof__FrontGoals_30 = transform_hlds__size_prof__TypeCtorGoals_22;
          {
            transform_hlds__size_prof__ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorVar_21));
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 1) = ((MR_Box) (transform_hlds__size_prof__ArgTypeInfoVars_18));
          }
          transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer transform_hlds__size_prof__Arity_23;
          MR_Word transform_hlds__size_prof__VarSet0_24;
          MR_Word transform_hlds__size_prof__VarTypes0_25;
          MR_Word transform_hlds__size_prof__ArityGoal_26;
          MR_Word transform_hlds__size_prof__ArityVar_27;
          MR_Word transform_hlds__size_prof__VarSet1_28;
          MR_Word transform_hlds__size_prof__VarTypes1_29;
          MR_Word transform_hlds__size_prof__Var_51;
          MR_Word transform_hlds__size_prof__Var_53;
          MR_Word transform_hlds__size_prof__Var_80;
          MR_Word transform_hlds__size_prof__Var_81;
          MR_Word transform_hlds__size_prof__Var_82;
          MR_Word transform_hlds__size_prof__Var_83;
          MR_Word transform_hlds__size_prof__Var_84;
          MR_Word transform_hlds__size_prof__Var_85;
          MR_Word transform_hlds__size_prof__Var_88;
          MR_Word transform_hlds__size_prof__Var_89;
          MR_Word transform_hlds__size_prof__Var_90;
          MR_Word transform_hlds__size_prof__Var_60;
          MR_Word transform_hlds__size_prof__Var_61;
          MR_Word transform_hlds__size_prof__Var_62;
          MR_Word transform_hlds__size_prof__Var_63;
          MR_Word transform_hlds__size_prof__Var_64;
          MR_Word transform_hlds__size_prof__Var_65;
          MR_Word transform_hlds__size_prof__Var_67;
          MR_Word transform_hlds__size_prof__Var_68;
          MR_Word transform_hlds__size_prof__Var_69;
          MR_Word transform_hlds__size_prof__Var_86;
          MR_Word transform_hlds__size_prof__Var_87;

          {
            mercury__list__length_2_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__ArgTypes_13, &transform_hlds__size_prof__Arity_23);
          }
          transform_hlds__size_prof__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 0)));
          transform_hlds__size_prof__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 1)));
          transform_hlds__size_prof__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 2)));
          transform_hlds__size_prof__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 3)));
          transform_hlds__size_prof__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 4)));
          transform_hlds__size_prof__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 5)));
          transform_hlds__size_prof__VarSet0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 6)));
          transform_hlds__size_prof__VarTypes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 7)));
          transform_hlds__size_prof__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 8)));
          transform_hlds__size_prof__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 9)));
          transform_hlds__size_prof__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 10)));
          {
            hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__Arity_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_7[3]), &transform_hlds__size_prof__ArityGoal_26, &transform_hlds__size_prof__ArityVar_27, transform_hlds__size_prof__VarSet0_24, &transform_hlds__size_prof__VarSet1_28, transform_hlds__size_prof__VarTypes0_25, &transform_hlds__size_prof__VarTypes1_29);
          }
          transform_hlds__size_prof__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 0)));
          transform_hlds__size_prof__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 1)));
          transform_hlds__size_prof__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 2)));
          transform_hlds__size_prof__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 3)));
          transform_hlds__size_prof__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 4)));
          transform_hlds__size_prof__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 5)));
          transform_hlds__size_prof__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 6)));
          transform_hlds__size_prof__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 7)));
          transform_hlds__size_prof__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 8)));
          transform_hlds__size_prof__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 9)));
          transform_hlds__size_prof__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, (MR_Integer) 10)));
          {
            transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (transform_hlds__size_prof__Var_80));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (transform_hlds__size_prof__Var_81));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (transform_hlds__size_prof__Var_82));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (transform_hlds__size_prof__Var_83));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (transform_hlds__size_prof__Var_84));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (transform_hlds__size_prof__Var_85));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet1_28));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes1_29));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (transform_hlds__size_prof__Var_88));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (transform_hlds__size_prof__Var_89));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (transform_hlds__size_prof__Var_90));
          }
          {
            transform_hlds__size_prof__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_51, 0) = ((MR_Box) (transform_hlds__size_prof__ArityGoal_26));
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            transform_hlds__size_prof__FrontGoals_30 = mercury__list__append_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__TypeCtorGoals_22, transform_hlds__size_prof__Var_51);
          }
          {
            transform_hlds__size_prof__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_53, 0) = ((MR_Box) (transform_hlds__size_prof__ArityVar_27));
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_53, 1) = ((MR_Box) (transform_hlds__size_prof__ArgTypeInfoVars_18));
          }
          {
            transform_hlds__size_prof__ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorVar_21));
            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__ArgVars_31, 1) = ((MR_Box) (transform_hlds__size_prof__Var_53));
          }
        }
        break;
    }
    transform_hlds__size_prof__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
    transform_hlds__size_prof__TargetTypeInfoMap_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
    transform_hlds__size_prof__VarSet2_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
    transform_hlds__size_prof__VarTypes2_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
    transform_hlds__size_prof__RttiVarMaps0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
    {
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0(transform_hlds__size_prof__TypeCtorInfo_180_180, transform_hlds__size_prof__TypeInfo_181_181, transform_hlds__size_prof__TargetTypeInfoMap_35, ((MR_Box) (transform_hlds__size_prof__Type_11)), &transform_hlds__size_prof__conv4_PrefTIVar_36);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        transform_hlds__size_prof__PrefTIVar_36 = ((MR_Word) transform_hlds__size_prof__conv4_PrefTIVar_36);
        transform_hlds__size_prof__succeeded = MR_TRUE;
      }
    if (transform_hlds__size_prof__succeeded)
      {
        transform_hlds__size_prof__MaybePreferredVar_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybePreferredVar_37, 0) = ((MR_Box) (transform_hlds__size_prof__PrefTIVar_36));
      }
    else
      transform_hlds__size_prof__MaybePreferredVar_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      check_hlds__polymorphism__init_type_info_var_11_p_0(transform_hlds__size_prof__Type_11, transform_hlds__size_prof__ArgVars_31, transform_hlds__size_prof__MaybePreferredVar_37, transform_hlds__size_prof__TypeInfoVar_15, &transform_hlds__size_prof__TypeInfoGoal_38, transform_hlds__size_prof__VarSet2_32, &transform_hlds__size_prof__VarSet_39, transform_hlds__size_prof__VarTypes2_33, &transform_hlds__size_prof__VarTypes_40, transform_hlds__size_prof__RttiVarMaps0_34, &transform_hlds__size_prof__RttiVarMaps_41);
    }
    transform_hlds__size_prof__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, (MR_Integer) 10)));
    transform_hlds__size_prof__Var_153 = transform_hlds__size_prof__Var_142;
    transform_hlds__size_prof__Var_154 = transform_hlds__size_prof__Var_143;
    transform_hlds__size_prof__Var_155 = transform_hlds__size_prof__Var_144;
    transform_hlds__size_prof__Var_156 = transform_hlds__size_prof__Var_145;
    transform_hlds__size_prof__Var_157 = transform_hlds__size_prof__Var_146;
    transform_hlds__size_prof__Var_158 = transform_hlds__size_prof__Var_147;
    transform_hlds__size_prof__Var_159 = transform_hlds__size_prof__VarSet_39;
    transform_hlds__size_prof__Var_161 = transform_hlds__size_prof__Var_150;
    transform_hlds__size_prof__Var_163 = transform_hlds__size_prof__Var_152;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__size_prof__STATE_VARIABLE_Info_43 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_153));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_154));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_155));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_156));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_157));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_158));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_159));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_40));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_161));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_41));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_163));
    }
    {
      transform_hlds__size_prof__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_58, 0) = ((MR_Box) (transform_hlds__size_prof__TypeInfoGoal_38));
      MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      transform_hlds__size_prof__Var_57 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__FrontGoals_30, transform_hlds__size_prof__Var_58);
    }
    {
      *transform_hlds__size_prof__TypeInfoGoals_16 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_184_184, transform_hlds__size_prof__ArgTypeInfoGoals_20, transform_hlds__size_prof__Var_57);
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__make_type_info_6_p_0(
  MR_Word transform_hlds__size_prof__Context_7,
  MR_Word transform_hlds__size_prof__Type_8,
  MR_Word * transform_hlds__size_prof__TypeInfoVar_9,
  MR_Word * transform_hlds__size_prof__TypeInfoGoals_10,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_38,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_39)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeInfoVarPrime_12;
    MR_Word transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
    MR_Box transform_hlds__size_prof__conv0_TypeInfoVarPrime_12;

    {
      transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__Var_40, ((MR_Box) (transform_hlds__size_prof__Type_8)), &transform_hlds__size_prof__conv0_TypeInfoVarPrime_12);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        transform_hlds__size_prof__TypeInfoVarPrime_12 = ((MR_Word) transform_hlds__size_prof__conv0_TypeInfoVarPrime_12);
        transform_hlds__size_prof__succeeded = MR_TRUE;
      }
    if (transform_hlds__size_prof__succeeded)
      {
        *transform_hlds__size_prof__TypeInfoVar_9 = transform_hlds__size_prof__TypeInfoVarPrime_12;
        *transform_hlds__size_prof__TypeInfoGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__size_prof__STATE_VARIABLE_Info_39 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
      }
    else
      {
        MR_Word transform_hlds__size_prof__TypeCtor_13;
        MR_Word transform_hlds__size_prof__ArgTypes_14;

        {
          transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_has_variable_arity_ctor_3_p_0(transform_hlds__size_prof__Type_8, &transform_hlds__size_prof__TypeCtor_13, &transform_hlds__size_prof__ArgTypes_14);
        }
        if (transform_hlds__size_prof__succeeded)
          {
            {
              transform_hlds__size_prof__construct_type_info_9_p_0(transform_hlds__size_prof__Context_7, transform_hlds__size_prof__Type_8, transform_hlds__size_prof__TypeCtor_13, transform_hlds__size_prof__ArgTypes_14, (MR_Integer) 1, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
            }
          }
        else
          {
            MR_Word transform_hlds__size_prof__TypeCtor_72;
            MR_Word transform_hlds__size_prof__ArgTypes_73;

            {
              transform_hlds__size_prof__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__size_prof__Type_8, &transform_hlds__size_prof__TypeCtor_72, &transform_hlds__size_prof__ArgTypes_73);
            }
            if (transform_hlds__size_prof__succeeded)
              if ((transform_hlds__size_prof__ArgTypes_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    transform_hlds__size_prof__make_type_ctor_info_6_p_0(transform_hlds__size_prof__TypeCtor_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
                  }
                }
              else
                {
                  {
                    transform_hlds__size_prof__construct_type_info_9_p_0(transform_hlds__size_prof__Context_7, transform_hlds__size_prof__Type_8, transform_hlds__size_prof__TypeCtor_72, transform_hlds__size_prof__ArgTypes_73, (MR_Integer) 0, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__TypeInfoGoals_10, transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
                  }
                }
            else
              {
                MR_Word transform_hlds__size_prof__TVar_19;
                MR_Word transform_hlds__size_prof__Var_20;

                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Type_8)) == (MR_mktag((MR_Integer) 0)));
                if (transform_hlds__size_prof__succeeded)
                  {
                    transform_hlds__size_prof__TVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_8, (MR_Integer) 0)));
                    transform_hlds__size_prof__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Type_8, (MR_Integer) 1)));
                    {
                      MR_Word transform_hlds__size_prof__TVarLocn_21;
                      MR_Word transform_hlds__size_prof__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
                      MR_Word transform_hlds__size_prof__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
                      MR_Word transform_hlds__size_prof__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
                      MR_Word transform_hlds__size_prof__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
                      MR_Word transform_hlds__size_prof__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
                      MR_Word transform_hlds__size_prof__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
                      MR_Word transform_hlds__size_prof__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
                      MR_Word transform_hlds__size_prof__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
                      MR_Word transform_hlds__size_prof__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
                      MR_Word transform_hlds__size_prof__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
                      MR_Word transform_hlds__size_prof__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));

                      {
                        hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(transform_hlds__size_prof__Var_47, transform_hlds__size_prof__TVar_19, &transform_hlds__size_prof__TVarLocn_21);
                      }
                      if (((MR_tag((MR_Word) transform_hlds__size_prof__TVarLocn_21)) == (MR_mktag((MR_Integer) 0))))
                        {
                          *transform_hlds__size_prof__TypeInfoVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 0)));
                          *transform_hlds__size_prof__TypeInfoGoals_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          *transform_hlds__size_prof__STATE_VARIABLE_Info_39 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
                        }
                      else
                        {
                          MR_Word transform_hlds__size_prof__TypeClassInfoVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 0)));
                          MR_Integer transform_hlds__size_prof__Slot_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__TVarLocn_21, (MR_Integer) 1)));
                          MR_Word transform_hlds__size_prof__TargetTypeInfoMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
                          MR_Word transform_hlds__size_prof__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
                          MR_Word transform_hlds__size_prof__VarTypes0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
                          MR_Word transform_hlds__size_prof__VarSet1_28;
                          MR_Word transform_hlds__size_prof__VarTypes1_29;
                          MR_Word transform_hlds__size_prof__SlotGoal_32;
                          MR_Word transform_hlds__size_prof__SlotVar_33;
                          MR_Word transform_hlds__size_prof__VarSet_34;
                          MR_Word transform_hlds__size_prof__VarTypes_35;
                          MR_Word transform_hlds__size_prof__PrivateBuiltin_36;
                          MR_Word transform_hlds__size_prof__ExtractGoal_37;
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_49_49;
                          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_53_53;
                          MR_Word transform_hlds__size_prof__Var_59;
                          MR_Word transform_hlds__size_prof__Var_61;
                          MR_Word transform_hlds__size_prof__Var_62;
                          MR_Word transform_hlds__size_prof__Var_63;
                          MR_Word transform_hlds__size_prof__Var_64;
                          MR_Word transform_hlds__size_prof__Var_67;
                          MR_Word transform_hlds__size_prof__Var_145;
                          MR_Word transform_hlds__size_prof__Var_146;
                          MR_Word transform_hlds__size_prof__Var_147;
                          MR_Word transform_hlds__size_prof__Var_148;
                          MR_Word transform_hlds__size_prof__Var_149;
                          MR_Word transform_hlds__size_prof__Var_150;
                          MR_Word transform_hlds__size_prof__Var_153;
                          MR_Word transform_hlds__size_prof__Var_154;
                          MR_Word transform_hlds__size_prof__Var_155;
                          MR_Word transform_hlds__size_prof__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
                          MR_Word transform_hlds__size_prof__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
                          MR_Word transform_hlds__size_prof__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
                          MR_Word transform_hlds__size_prof__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
                          MR_Word transform_hlds__size_prof__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
                          MR_Word transform_hlds__size_prof__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
                          MR_Word transform_hlds__size_prof__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
                          MR_Word transform_hlds__size_prof__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
                          MR_Word transform_hlds__size_prof__TargetVar_27;
                          MR_Box transform_hlds__size_prof__conv1_TargetVar_27;
                          MR_Word transform_hlds__size_prof__Var_151;
                          MR_Word transform_hlds__size_prof__Var_152;
                          MR_Word transform_hlds__size_prof__Var_167;
                          MR_Word transform_hlds__size_prof__Var_168;
                          MR_Word transform_hlds__size_prof__Var_169;
                          MR_Word transform_hlds__size_prof__Var_170;
                          MR_Word transform_hlds__size_prof__Var_171;
                          MR_Word transform_hlds__size_prof__Var_172;
                          MR_Word transform_hlds__size_prof__Var_173;
                          MR_Word transform_hlds__size_prof__Var_174;
                          MR_Word transform_hlds__size_prof__Var_175;
                          MR_Word transform_hlds__size_prof__Var_176;

                          {
                            transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__size_prof_scalar_common_1[0], transform_hlds__size_prof__TargetTypeInfoMap_24, ((MR_Box) (transform_hlds__size_prof__Type_8)), &transform_hlds__size_prof__conv1_TargetVar_27);
                          }
                          if (transform_hlds__size_prof__succeeded)
                            {
                              transform_hlds__size_prof__TargetVar_27 = ((MR_Word) transform_hlds__size_prof__conv1_TargetVar_27);
                              transform_hlds__size_prof__succeeded = MR_TRUE;
                            }
                          if (transform_hlds__size_prof__succeeded)
                            {
                              *transform_hlds__size_prof__TypeInfoVar_9 = transform_hlds__size_prof__TargetVar_27;
                              transform_hlds__size_prof__VarSet1_28 = transform_hlds__size_prof__VarSet0_25;
                              transform_hlds__size_prof__VarTypes1_29 = transform_hlds__size_prof__VarTypes0_26;
                              transform_hlds__size_prof__STATE_VARIABLE_Info_49_49 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_38;
                            }
                          else
                            {
                              MR_Word transform_hlds__size_prof__RttiVarMaps0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
                              MR_Word transform_hlds__size_prof__RttiVarMaps_31;
                              MR_Word transform_hlds__size_prof__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
                              MR_Word transform_hlds__size_prof__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
                              MR_Word transform_hlds__size_prof__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
                              MR_Word transform_hlds__size_prof__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
                              MR_Word transform_hlds__size_prof__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
                              MR_Word transform_hlds__size_prof__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
                              MR_Word transform_hlds__size_prof__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
                              MR_Word transform_hlds__size_prof__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
                              MR_Word transform_hlds__size_prof__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
                              MR_Word transform_hlds__size_prof__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
                              MR_Word transform_hlds__size_prof__Var_134;
                              MR_Word transform_hlds__size_prof__Var_135;
                              MR_Word transform_hlds__size_prof__Var_136;
                              MR_Word transform_hlds__size_prof__Var_137;
                              MR_Word transform_hlds__size_prof__Var_138;
                              MR_Word transform_hlds__size_prof__Var_139;
                              MR_Word transform_hlds__size_prof__Var_140;
                              MR_Word transform_hlds__size_prof__Var_141;
                              MR_Word transform_hlds__size_prof__Var_142;
                              MR_Word transform_hlds__size_prof__Var_144;
                              MR_Word transform_hlds__size_prof__Var_143;

                              {
                                check_hlds__polymorphism__new_type_info_var_raw_9_p_0(transform_hlds__size_prof__Type_8, (MR_Integer) 0, transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__VarSet0_25, &transform_hlds__size_prof__VarSet1_28, transform_hlds__size_prof__VarTypes0_26, &transform_hlds__size_prof__VarTypes1_29, transform_hlds__size_prof__RttiVarMaps0_30, &transform_hlds__size_prof__RttiVarMaps_31);
                              }
                              transform_hlds__size_prof__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 0)));
                              transform_hlds__size_prof__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 1)));
                              transform_hlds__size_prof__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 2)));
                              transform_hlds__size_prof__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 3)));
                              transform_hlds__size_prof__Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 4)));
                              transform_hlds__size_prof__Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 5)));
                              transform_hlds__size_prof__Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 6)));
                              transform_hlds__size_prof__Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 7)));
                              transform_hlds__size_prof__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 8)));
                              transform_hlds__size_prof__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 9)));
                              transform_hlds__size_prof__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_38, (MR_Integer) 10)));
                              {
                                transform_hlds__size_prof__STATE_VARIABLE_Info_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 0) = ((MR_Box) (transform_hlds__size_prof__Var_134));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 1) = ((MR_Box) (transform_hlds__size_prof__Var_135));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 2) = ((MR_Box) (transform_hlds__size_prof__Var_136));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 3) = ((MR_Box) (transform_hlds__size_prof__Var_137));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 4) = ((MR_Box) (transform_hlds__size_prof__Var_138));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 5) = ((MR_Box) (transform_hlds__size_prof__Var_139));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 6) = ((MR_Box) (transform_hlds__size_prof__Var_140));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 7) = ((MR_Box) (transform_hlds__size_prof__Var_141));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 8) = ((MR_Box) (transform_hlds__size_prof__Var_142));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps_31));
                                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, 10) = ((MR_Box) (transform_hlds__size_prof__Var_144));
                              }
                            }
                          {
                            hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__Slot_23, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_7[2]), &transform_hlds__size_prof__SlotGoal_32, &transform_hlds__size_prof__SlotVar_33, transform_hlds__size_prof__VarSet1_28, &transform_hlds__size_prof__VarSet_34, transform_hlds__size_prof__VarTypes1_29, &transform_hlds__size_prof__VarTypes_35);
                          }
                          transform_hlds__size_prof__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 0)));
                          transform_hlds__size_prof__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 1)));
                          transform_hlds__size_prof__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 2)));
                          transform_hlds__size_prof__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 3)));
                          transform_hlds__size_prof__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 4)));
                          transform_hlds__size_prof__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 5)));
                          transform_hlds__size_prof__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 6)));
                          transform_hlds__size_prof__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 7)));
                          transform_hlds__size_prof__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 8)));
                          transform_hlds__size_prof__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 9)));
                          transform_hlds__size_prof__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_49_49, (MR_Integer) 10)));
                          {
                            transform_hlds__size_prof__STATE_VARIABLE_Info_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 0) = ((MR_Box) (transform_hlds__size_prof__Var_145));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 1) = ((MR_Box) (transform_hlds__size_prof__Var_146));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 2) = ((MR_Box) (transform_hlds__size_prof__Var_147));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 3) = ((MR_Box) (transform_hlds__size_prof__Var_148));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 4) = ((MR_Box) (transform_hlds__size_prof__Var_149));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 5) = ((MR_Box) (transform_hlds__size_prof__Var_150));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet_34));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes_35));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 8) = ((MR_Box) (transform_hlds__size_prof__Var_153));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 9) = ((MR_Box) (transform_hlds__size_prof__Var_154));
                            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, 10) = ((MR_Box) (transform_hlds__size_prof__Var_155));
                          }
                          {
                            transform_hlds__size_prof__PrivateBuiltin_36 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                          }
                          {
                            transform_hlds__size_prof__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_64, 0) = ((MR_Box) (*transform_hlds__size_prof__TypeInfoVar_9));
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            transform_hlds__size_prof__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_63, 0) = ((MR_Box) (transform_hlds__size_prof__SlotVar_33));
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_63, 1) = ((MR_Box) (transform_hlds__size_prof__Var_64));
                          }
                          {
                            transform_hlds__size_prof__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_59, 0) = ((MR_Box) (transform_hlds__size_prof__TypeClassInfoVar_22));
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_59, 1) = ((MR_Box) (transform_hlds__size_prof__Var_63));
                          }
                          {
                            transform_hlds__size_prof__Var_61 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__size_prof__TypeInfoVar_9);
                          }
                          transform_hlds__size_prof__Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 0)));
                          transform_hlds__size_prof__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 1)));
                          transform_hlds__size_prof__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 2)));
                          transform_hlds__size_prof__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 3)));
                          transform_hlds__size_prof__Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 4)));
                          transform_hlds__size_prof__Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 5)));
                          transform_hlds__size_prof__Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 6)));
                          transform_hlds__size_prof__Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 7)));
                          transform_hlds__size_prof__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 8)));
                          transform_hlds__size_prof__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 9)));
                          transform_hlds__size_prof__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, (MR_Integer) 10)));
                          {
                            hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__PrivateBuiltin_36, (MR_String) "type_info_from_typeclass_info", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__Var_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__Var_61, transform_hlds__size_prof__Var_62, transform_hlds__size_prof__Context_7, &transform_hlds__size_prof__ExtractGoal_37);
                          }
                          {
                            transform_hlds__size_prof__record_type_info_var_4_p_0(transform_hlds__size_prof__Type_8, *transform_hlds__size_prof__TypeInfoVar_9, transform_hlds__size_prof__STATE_VARIABLE_Info_53_53, transform_hlds__size_prof__STATE_VARIABLE_Info_39);
                          }
                          {
                            transform_hlds__size_prof__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_67, 0) = ((MR_Box) (transform_hlds__size_prof__ExtractGoal_37));
                            MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *transform_hlds__size_prof__TypeInfoGoals_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__SlotGoal_32));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_67));
                          }
                        }
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.make_type_info\'/6", (MR_String) "cannot happen");
                      return;
                    }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__generate_size_var_7_p_0(
  MR_Word transform_hlds__size_prof__SizeVar0_8,
  MR_Integer transform_hlds__size_prof__KnownSize_9,
  MR_Word transform_hlds__size_prof__Context_10,
  MR_Word * transform_hlds__size_prof__SizeVar_11,
  MR_Word * transform_hlds__size_prof__Goals_12,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_22,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_23)
{
  {
    MR_bool transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__KnownSize_9 == (MR_Integer) 0);

    if (transform_hlds__size_prof__succeeded)
      {
        *transform_hlds__size_prof__SizeVar_11 = transform_hlds__size_prof__SizeVar0_8;
        *transform_hlds__size_prof__Goals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__size_prof__STATE_VARIABLE_Info_23 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_22;
      }
    else
      {
        MR_Word transform_hlds__size_prof__VarSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
        MR_Word transform_hlds__size_prof__VarTypes0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
        MR_Word transform_hlds__size_prof__KnownSizeGoal_16;
        MR_Word transform_hlds__size_prof__KnownSizeVar_17;
        MR_Word transform_hlds__size_prof__VarSet1_18;
        MR_Word transform_hlds__size_prof__VarTypes1_19;
        MR_Word transform_hlds__size_prof__TermSizeProfModule_20;
        MR_Word transform_hlds__size_prof__AddGoal_21;
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_27_27;
        MR_Word transform_hlds__size_prof__Var_28;
        MR_Word transform_hlds__size_prof__Var_36;
        MR_Word transform_hlds__size_prof__Var_38;
        MR_Word transform_hlds__size_prof__Var_39;
        MR_Word transform_hlds__size_prof__Var_41;
        MR_Word transform_hlds__size_prof__Var_42;
        MR_Word transform_hlds__size_prof__Var_44;
        MR_Word transform_hlds__size_prof__Var_66;
        MR_Word transform_hlds__size_prof__Var_67;
        MR_Word transform_hlds__size_prof__Var_68;
        MR_Word transform_hlds__size_prof__Var_69;
        MR_Word transform_hlds__size_prof__Var_70;
        MR_Word transform_hlds__size_prof__Var_71;
        MR_Word transform_hlds__size_prof__Var_74;
        MR_Word transform_hlds__size_prof__Var_75;
        MR_Word transform_hlds__size_prof__Var_76;
        MR_Word transform_hlds__size_prof__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
        MR_Word transform_hlds__size_prof__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
        MR_Word transform_hlds__size_prof__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
        MR_Word transform_hlds__size_prof__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
        MR_Word transform_hlds__size_prof__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
        MR_Word transform_hlds__size_prof__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
        MR_Word transform_hlds__size_prof__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
        MR_Word transform_hlds__size_prof__Var_72;
        MR_Word transform_hlds__size_prof__Var_73;
        MR_Word transform_hlds__size_prof__Var_88;
        MR_Word transform_hlds__size_prof__Var_89;
        MR_Word transform_hlds__size_prof__Var_90;
        MR_Word transform_hlds__size_prof__Var_91;
        MR_Word transform_hlds__size_prof__Var_92;
        MR_Word transform_hlds__size_prof__Var_93;
        MR_Word transform_hlds__size_prof__Var_94;
        MR_Word transform_hlds__size_prof__Var_95;
        MR_Word transform_hlds__size_prof__Var_96;
        MR_Word transform_hlds__size_prof__Var_97;

        {
          hlds__make_goal__make_int_const_construction_alloc_8_p_0(transform_hlds__size_prof__KnownSize_9, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_7[0]), &transform_hlds__size_prof__KnownSizeGoal_16, &transform_hlds__size_prof__KnownSizeVar_17, transform_hlds__size_prof__VarSet0_14, &transform_hlds__size_prof__VarSet1_18, transform_hlds__size_prof__VarTypes0_15, &transform_hlds__size_prof__VarTypes1_19);
        }
        transform_hlds__size_prof__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
        transform_hlds__size_prof__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
        transform_hlds__size_prof__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
        transform_hlds__size_prof__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
        transform_hlds__size_prof__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
        transform_hlds__size_prof__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
        transform_hlds__size_prof__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
        transform_hlds__size_prof__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
        transform_hlds__size_prof__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
        transform_hlds__size_prof__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
        {
          transform_hlds__size_prof__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (transform_hlds__size_prof__Var_66));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (transform_hlds__size_prof__Var_67));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (transform_hlds__size_prof__Var_68));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (transform_hlds__size_prof__Var_69));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (transform_hlds__size_prof__Var_70));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 5) = ((MR_Box) (transform_hlds__size_prof__Var_71));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet1_18));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes1_19));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 8) = ((MR_Box) (transform_hlds__size_prof__Var_74));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 9) = ((MR_Box) (transform_hlds__size_prof__Var_75));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, 10) = ((MR_Box) (transform_hlds__size_prof__Var_76));
        }
        {
          transform_hlds__size_prof__Var_28 = parse_tree__builtin_lib_types__int_type_0_f_0();
        }
        {
          transform_hlds__size_prof__get_new_var_5_p_0(transform_hlds__size_prof__Var_28, (MR_String) "FinalSizeVar", transform_hlds__size_prof__SizeVar_11, transform_hlds__size_prof__STATE_VARIABLE_Info_27_27, transform_hlds__size_prof__STATE_VARIABLE_Info_23);
        }
        {
          transform_hlds__size_prof__TermSizeProfModule_20 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
        }
        {
          transform_hlds__size_prof__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_42, 0) = ((MR_Box) (*transform_hlds__size_prof__SizeVar_11));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__size_prof__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_41, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSizeVar_17));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_41, 1) = ((MR_Box) (transform_hlds__size_prof__Var_42));
        }
        {
          transform_hlds__size_prof__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_36, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar0_8));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_36, 1) = ((MR_Box) (transform_hlds__size_prof__Var_41));
        }
        {
          transform_hlds__size_prof__Var_38 = hlds__instmap__instmap_delta_bind_var_1_f_0(*transform_hlds__size_prof__SizeVar_11);
        }
        transform_hlds__size_prof__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 1)));
        transform_hlds__size_prof__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 2)));
        transform_hlds__size_prof__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 3)));
        transform_hlds__size_prof__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 4)));
        transform_hlds__size_prof__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 5)));
        transform_hlds__size_prof__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 6)));
        transform_hlds__size_prof__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 7)));
        transform_hlds__size_prof__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 8)));
        transform_hlds__size_prof__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 9)));
        transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_23, (MR_Integer) 10)));
        {
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfModule_20, (MR_String) "term_size_plus", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__size_prof_scalar_common_7[1]), (MR_Integer) 0, (MR_Integer) 0, transform_hlds__size_prof__Var_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__Var_38, transform_hlds__size_prof__Var_39, transform_hlds__size_prof__Context_10, &transform_hlds__size_prof__AddGoal_21);
        }
        {
          transform_hlds__size_prof__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_44, 0) = ((MR_Box) (transform_hlds__size_prof__AddGoal_21));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__size_prof__Goals_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__KnownSizeGoal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_44));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_args_9_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2,
  MR_Integer * transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5,
  MR_Word transform_hlds__size_prof__Context_6,
  MR_Word * transform_hlds__size_prof__HeadVar__7_7,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_8,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_9)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__size_prof__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__size_prof__STATE_VARIABLE_Info_9 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
        *transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
        *transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3 = transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2;
      }
    else
      {
        MR_Word transform_hlds__size_prof__Arg_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Type_27;
        MR_Word transform_hlds__size_prof__ArgGoals_29;
        MR_Word transform_hlds__size_prof__LaterGoals_33;
        MR_Word transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
        MR_Integer transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42;
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45;
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
        MR_Word transform_hlds__size_prof__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
        MR_Word transform_hlds__size_prof__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
        MR_Word transform_hlds__size_prof__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
        MR_Word transform_hlds__size_prof__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
        MR_Word transform_hlds__size_prof__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
        MR_Word transform_hlds__size_prof__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
        MR_Word transform_hlds__size_prof__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
        MR_Word transform_hlds__size_prof__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
        MR_Integer transform_hlds__size_prof__ArgSize_28;
        MR_Word transform_hlds__size_prof__Var_41;
        MR_Word transform_hlds__size_prof__Var_62;
        MR_Word transform_hlds__size_prof__Var_63;
        MR_Word transform_hlds__size_prof__Var_64;
        MR_Word transform_hlds__size_prof__Var_65;
        MR_Word transform_hlds__size_prof__Var_66;
        MR_Word transform_hlds__size_prof__Var_67;
        MR_Word transform_hlds__size_prof__Var_68;
        MR_Word transform_hlds__size_prof__Var_69;
        MR_Word transform_hlds__size_prof__Var_70;
        MR_Word transform_hlds__size_prof__Var_71;
        MR_Box transform_hlds__size_prof__conv0_ArgSize_28;

        {
          hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__size_prof__Var_40, transform_hlds__size_prof__Arg_20, &transform_hlds__size_prof__Type_27);
        }
        transform_hlds__size_prof__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
        transform_hlds__size_prof__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
        transform_hlds__size_prof__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
        transform_hlds__size_prof__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
        transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
        transform_hlds__size_prof__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
        transform_hlds__size_prof__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
        transform_hlds__size_prof__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
        transform_hlds__size_prof__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));
        transform_hlds__size_prof__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
        {
          transform_hlds__size_prof__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__Var_41, ((MR_Box) (transform_hlds__size_prof__Arg_20)), &transform_hlds__size_prof__conv0_ArgSize_28);
        }
        if (transform_hlds__size_prof__succeeded)
          {
            transform_hlds__size_prof__ArgSize_28 = ((MR_Integer) transform_hlds__size_prof__conv0_ArgSize_28);
            transform_hlds__size_prof__succeeded = MR_TRUE;
          }
        if (transform_hlds__size_prof__succeeded)
          {
            transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42 = (transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2 + transform_hlds__size_prof__ArgSize_28);
            transform_hlds__size_prof__ArgGoals_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
            transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
          }
        else
          {
            MR_Word transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 10)));
            MR_Word transform_hlds__size_prof__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
            MR_Word transform_hlds__size_prof__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
            MR_Word transform_hlds__size_prof__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
            MR_Word transform_hlds__size_prof__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
            MR_Word transform_hlds__size_prof__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
            MR_Word transform_hlds__size_prof__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
            MR_Word transform_hlds__size_prof__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
            MR_Word transform_hlds__size_prof__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
            MR_Word transform_hlds__size_prof__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 8)));
            MR_Word transform_hlds__size_prof__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, (MR_Integer) 9)));

            {
              transform_hlds__size_prof__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__size_prof__Var_43, transform_hlds__size_prof__Type_27);
            }
            if (transform_hlds__size_prof__succeeded)
              {
                transform_hlds__size_prof__ArgGoals_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_8;
                transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45 = transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4;
              }
            else
              {
                MR_Word transform_hlds__size_prof__TypeInfoVar_30;
                MR_Word transform_hlds__size_prof__TypeInfoGoals_31;
                MR_Word transform_hlds__size_prof__SizeGoal_32;
                MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
                MR_Word transform_hlds__size_prof__Var_47;

                {
                  transform_hlds__size_prof__make_type_info_6_p_0(transform_hlds__size_prof__Context_6, transform_hlds__size_prof__Type_27, &transform_hlds__size_prof__TypeInfoVar_30, &transform_hlds__size_prof__TypeInfoGoals_31, transform_hlds__size_prof__STATE_VARIABLE_Info_0_8, &transform_hlds__size_prof__STATE_VARIABLE_Info_44_44);
                }
                {
                  transform_hlds__size_prof__make_size_goal_8_p_0(transform_hlds__size_prof__TypeInfoVar_30, transform_hlds__size_prof__Arg_20, transform_hlds__size_prof__Context_6, &transform_hlds__size_prof__SizeGoal_32, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_0_4, &transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45, transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, &transform_hlds__size_prof__STATE_VARIABLE_Info_46_46);
                }
                {
                  transform_hlds__size_prof__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_47, 0) = ((MR_Box) (transform_hlds__size_prof__SizeGoal_32));
                  MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__TypeInfoGoals_31, transform_hlds__size_prof__Var_47, &transform_hlds__size_prof__ArgGoals_29);
                }
              }
            transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42 = transform_hlds__size_prof__STATE_VARIABLE_KnownSize_0_2;
          }
        {
          transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__Args_21, transform_hlds__size_prof__STATE_VARIABLE_KnownSize_42_42, transform_hlds__size_prof__STATE_VARIABLE_KnownSize_3, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_45_45, transform_hlds__size_prof__STATE_VARIABLE_MaybeSizeVar_5, transform_hlds__size_prof__Context_6, &transform_hlds__size_prof__LaterGoals_33, transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, transform_hlds__size_prof__STATE_VARIABLE_Info_9);
        }
        {
          *transform_hlds__size_prof__HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__ArgGoals_29, transform_hlds__size_prof__LaterGoals_33);
        }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_cons_deconstruct__773__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 4))));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(
  MR_Word transform_hlds__size_prof__Var_8,
  MR_Word transform_hlds__size_prof__Args_9,
  MR_Word transform_hlds__size_prof__ArgModes_10,
  MR_Word transform_hlds__size_prof__UnifyGoal_11,
  MR_Word * transform_hlds__size_prof__GoalExpr_12,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__DefinedArgs_14;
    MR_Word transform_hlds__size_prof__GoalExpr0_16;
    MR_Word transform_hlds__size_prof__GoalInfo0_17;
    MR_Word transform_hlds__size_prof__Context_18;
    MR_Integer transform_hlds__size_prof__KnownSize_19;
    MR_Word transform_hlds__size_prof__MaybeDynamicSizeVar_20;
    MR_Word transform_hlds__size_prof__ArgGoals_21;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_32_32;
    MR_Word transform_hlds__size_prof___NonDefArgs_15;

    {
      transform_hlds__size_prof__find_defined_args_5_p_0(transform_hlds__size_prof__Args_9, transform_hlds__size_prof__ArgModes_10, &transform_hlds__size_prof__DefinedArgs_14, &transform_hlds__size_prof___NonDefArgs_15, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28);
    }
    transform_hlds__size_prof__GoalExpr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_11, (MR_Integer) 0)));
    transform_hlds__size_prof__GoalInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__UnifyGoal_11, (MR_Integer) 1)));
    {
      transform_hlds__size_prof__Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(transform_hlds__size_prof__GoalInfo0_17);
    }
    {
      transform_hlds__size_prof__size_prof_process_args_9_p_0(transform_hlds__size_prof__DefinedArgs_14, (MR_Integer) 0, &transform_hlds__size_prof__KnownSize_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__size_prof__MaybeDynamicSizeVar_20, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__ArgGoals_21, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, &transform_hlds__size_prof__STATE_VARIABLE_Info_32_32);
    }
    if ((transform_hlds__size_prof__MaybeDynamicSizeVar_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__size_prof__Var_52;

        {
          transform_hlds__size_prof__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_52, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_52, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_52, 3) = ((MR_Box) (transform_hlds__size_prof__ArgGoals_21));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(transform_hlds__size_prof__Var_52, (MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_cons_deconstruct\'/7", (MR_String) "nonempty ArgGoals");
        }
        *transform_hlds__size_prof__GoalExpr_12 = transform_hlds__size_prof__GoalExpr0_16;
        *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = transform_hlds__size_prof__STATE_VARIABLE_Info_32_32;
      }
    else
      {
        MR_Word transform_hlds__size_prof__TypeCtorInfo_68_68;
        MR_Word transform_hlds__size_prof__SizeVar0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__MaybeDynamicSizeVar_20, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__SizeVar_23;
        MR_Word transform_hlds__size_prof__SizeGoals_24;
        MR_Word transform_hlds__size_prof__TermSizeProfBuiltin_25;
        MR_Word transform_hlds__size_prof__UpdateGoal_26;
        MR_Word transform_hlds__size_prof__Goals_27;
        MR_Word transform_hlds__size_prof__Var_39;
        MR_Word transform_hlds__size_prof__Var_41;
        MR_Word transform_hlds__size_prof__Var_42;
        MR_Word transform_hlds__size_prof__Var_43;
        MR_Word transform_hlds__size_prof__Var_45;
        MR_Word transform_hlds__size_prof__Var_47;
        MR_Word transform_hlds__size_prof__Var_48;
        MR_Word transform_hlds__size_prof__Var_49;
        MR_Word transform_hlds__size_prof__Var_57;
        MR_Word transform_hlds__size_prof__Var_58;
        MR_Word transform_hlds__size_prof__Var_59;
        MR_Word transform_hlds__size_prof__Var_60;
        MR_Word transform_hlds__size_prof__Var_61;
        MR_Word transform_hlds__size_prof__Var_62;
        MR_Word transform_hlds__size_prof__Var_63;
        MR_Word transform_hlds__size_prof__Var_64;
        MR_Word transform_hlds__size_prof__Var_65;
        MR_Word transform_hlds__size_prof__Var_66;

        {
          transform_hlds__size_prof__generate_size_var_7_p_0(transform_hlds__size_prof__SizeVar0_22, transform_hlds__size_prof__KnownSize_19, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__SizeVar_23, &transform_hlds__size_prof__SizeGoals_24, transform_hlds__size_prof__STATE_VARIABLE_Info_32_32, transform_hlds__size_prof__STATE_VARIABLE_Info_29);
        }
        {
          transform_hlds__size_prof__TermSizeProfBuiltin_25 = mdbcomp__builtin_modules__mercury_term_size_prof_builtin_module_0_f_0();
        }
        {
          transform_hlds__size_prof__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_43, 0) = ((MR_Box) (transform_hlds__size_prof__SizeVar_23));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__size_prof__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_8));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_39, 1) = ((MR_Box) (transform_hlds__size_prof__Var_43));
        }
        {
          transform_hlds__size_prof__Var_41 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
        }
        transform_hlds__size_prof__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 1)));
        transform_hlds__size_prof__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 2)));
        transform_hlds__size_prof__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 3)));
        transform_hlds__size_prof__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 4)));
        transform_hlds__size_prof__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 5)));
        transform_hlds__size_prof__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 6)));
        transform_hlds__size_prof__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 7)));
        transform_hlds__size_prof__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 8)));
        transform_hlds__size_prof__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 9)));
        transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *transform_hlds__size_prof__STATE_VARIABLE_Info_29, (MR_Integer) 10)));
        {
          hlds__goal_util__generate_simple_call_12_p_0(transform_hlds__size_prof__TermSizeProfBuiltin_25, (MR_String) "increment_size", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 2, transform_hlds__size_prof__Var_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__size_prof__Var_41, transform_hlds__size_prof__Var_42, transform_hlds__size_prof__Context_18, &transform_hlds__size_prof__UpdateGoal_26);
        }
        transform_hlds__size_prof__TypeCtorInfo_68_68 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
        {
          transform_hlds__size_prof__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_45, 0) = ((MR_Box) (transform_hlds__size_prof__UnifyGoal_11));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__size_prof__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_49, 0) = ((MR_Box) (transform_hlds__size_prof__UpdateGoal_26));
          MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          transform_hlds__size_prof__Var_48 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__SizeGoals_24, transform_hlds__size_prof__Var_49);
        }
        {
          transform_hlds__size_prof__Var_47 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__ArgGoals_21, transform_hlds__size_prof__Var_48);
        }
        {
          transform_hlds__size_prof__Goals_27 = mercury__list__f_43_43_2_f_0(transform_hlds__size_prof__TypeCtorInfo_68_68, transform_hlds__size_prof__Var_45, transform_hlds__size_prof__Var_47);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__size_prof__GoalExpr_12 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_27));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(
  MR_Word transform_hlds__size_prof__Var_9,
  MR_Word transform_hlds__size_prof__ConsId_10,
  MR_Word transform_hlds__size_prof__Args_11,
  MR_Word transform_hlds__size_prof__ArgModes_12,
  MR_Word transform_hlds__size_prof__Goal0_13,
  MR_Word * transform_hlds__size_prof__GoalExpr_14,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_28,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_29)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__VarType_16;
    MR_Word transform_hlds__size_prof__VarTypeCtor_17;
    MR_Word transform_hlds__size_prof__VarTypeCtorModule_18;
    MR_String transform_hlds__size_prof__VarTypeCtorName_19;
    MR_Word transform_hlds__size_prof__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
    MR_Integer transform_hlds__size_prof__Var_20;
    MR_Word transform_hlds__size_prof__Var_47;
    MR_Integer transform_hlds__size_prof__lo_0;
    MR_Integer transform_hlds__size_prof__hi_1;
    MR_Integer transform_hlds__size_prof__mid_2;
    MR_Integer transform_hlds__size_prof__result_3;

    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__size_prof__Var_30, transform_hlds__size_prof__Var_9, &transform_hlds__size_prof__VarType_16);
    }
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__size_prof__VarType_16, &transform_hlds__size_prof__VarTypeCtor_17);
    }
    {
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__size_prof__VarTypeCtor_17, &transform_hlds__size_prof__VarTypeCtorModule_18, &transform_hlds__size_prof__VarTypeCtorName_19, &transform_hlds__size_prof__Var_20);
    }
    {
      transform_hlds__size_prof__Var_47 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      transform_hlds__size_prof__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__size_prof__VarTypeCtorModule_18, transform_hlds__size_prof__Var_47);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        /* binary string simple lookup switch */
        transform_hlds__size_prof__lo_0 = (MR_Integer) 0;
        transform_hlds__size_prof__hi_1 = (MR_Integer) 3;
        do
          {
            transform_hlds__size_prof__mid_2 = (((transform_hlds__size_prof__lo_0 + transform_hlds__size_prof__hi_1)) / (MR_Integer) 2);
            transform_hlds__size_prof__result_3 = MR_strcmp(transform_hlds__size_prof__VarTypeCtorName_19, ((&transform_hlds__size_prof_vector_common_6[4 + transform_hlds__size_prof__mid_2]))->transform_hlds__size_prof__vector_common_type_6_0__vct_6_f_0);
            if ((transform_hlds__size_prof__result_3 == (MR_Integer) 0))
              {
                transform_hlds__size_prof__succeeded = MR_TRUE;
                /* jump out of search loop */
                goto label_0;
              }
            else
            if ((transform_hlds__size_prof__result_3 < (MR_Integer) 0))
              transform_hlds__size_prof__hi_1 = (transform_hlds__size_prof__mid_2 - (MR_Integer) 1);
            else
              transform_hlds__size_prof__lo_0 = (transform_hlds__size_prof__mid_2 + (MR_Integer) 1);
          }
        while ((transform_hlds__size_prof__lo_0 <= transform_hlds__size_prof__hi_1));
        transform_hlds__size_prof__succeeded = MR_FALSE;
      label_0:;
      }
    if (transform_hlds__size_prof__succeeded)
      {
        MR_Word transform_hlds__size_prof__Var_21;

        *transform_hlds__size_prof__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 1)));
        *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_28;
      }
    else
      {
        MR_Word transform_hlds__size_prof__Var_25;
        MR_Word transform_hlds__size_prof__Var_26;

        if (((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 2))))
          transform_hlds__size_prof__succeeded = MR_TRUE;
        else
        if (((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_10, (MR_Integer) 0)))) == (MR_Integer) 3))))
          transform_hlds__size_prof__succeeded = MR_TRUE;
        else
          transform_hlds__size_prof__succeeded = MR_FALSE;
        if (transform_hlds__size_prof__succeeded)
          {
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_11)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__size_prof__succeeded)
              {
                transform_hlds__size_prof__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_11, (MR_Integer) 0)));
                transform_hlds__size_prof__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_11, (MR_Integer) 1)));
              }
          }
        if (transform_hlds__size_prof__succeeded)
          {
            transform_hlds__size_prof__size_prof_process_cons_deconstruct_7_p_0(transform_hlds__size_prof__Var_9, transform_hlds__size_prof__Args_11, transform_hlds__size_prof__ArgModes_12, transform_hlds__size_prof__Goal0_13, transform_hlds__size_prof__GoalExpr_14, transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, transform_hlds__size_prof__STATE_VARIABLE_Info_29);
          }
        else
          {
            MR_Word transform_hlds__size_prof__KnownSizeMap0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
            MR_Word transform_hlds__size_prof__KnownSizeMap_55;
            MR_Word transform_hlds__size_prof__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
            MR_Word transform_hlds__size_prof__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
            MR_Word transform_hlds__size_prof__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
            MR_Word transform_hlds__size_prof__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
            MR_Word transform_hlds__size_prof__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
            MR_Word transform_hlds__size_prof__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
            MR_Word transform_hlds__size_prof__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
            MR_Word transform_hlds__size_prof__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
            MR_Word transform_hlds__size_prof__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
            MR_Word transform_hlds__size_prof__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
            MR_Word transform_hlds__size_prof__Var_67;
            MR_Word transform_hlds__size_prof__Var_68;
            MR_Word transform_hlds__size_prof__Var_69;
            MR_Word transform_hlds__size_prof__Var_70;
            MR_Word transform_hlds__size_prof__Var_71;
            MR_Word transform_hlds__size_prof__Var_73;
            MR_Word transform_hlds__size_prof__Var_74;
            MR_Word transform_hlds__size_prof__Var_75;
            MR_Word transform_hlds__size_prof__Var_76;
            MR_Word transform_hlds__size_prof__Var_77;
            MR_Word transform_hlds__size_prof__Var_72;
            MR_Word transform_hlds__size_prof__Var_27;

            {
              mercury__map__det_insert_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (transform_hlds__size_prof__Var_9)), ((MR_Box) ((MR_Integer) 0)), transform_hlds__size_prof__KnownSizeMap0_54, &transform_hlds__size_prof__KnownSizeMap_55);
            }
            transform_hlds__size_prof__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
            transform_hlds__size_prof__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
            transform_hlds__size_prof__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
            transform_hlds__size_prof__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
            transform_hlds__size_prof__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
            transform_hlds__size_prof__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 5)));
            transform_hlds__size_prof__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 6)));
            transform_hlds__size_prof__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 7)));
            transform_hlds__size_prof__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 8)));
            transform_hlds__size_prof__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 9)));
            transform_hlds__size_prof__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_28, (MR_Integer) 10)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
              *transform_hlds__size_prof__STATE_VARIABLE_Info_29 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_67));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_68));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_69));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_70));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_71));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_55));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_73));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_74));
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_75));
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_76));
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_77));
            }
            *transform_hlds__size_prof__GoalExpr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 0)));
            transform_hlds__size_prof__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_13, (MR_Integer) 1)));
          }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_construct_14_p_0(
  MR_Word transform_hlds__size_prof__LHS_15,
  MR_Word transform_hlds__size_prof__RHS_16,
  MR_Word transform_hlds__size_prof__UniMode_17,
  MR_Word transform_hlds__size_prof__UnifyContext_18,
  MR_Word transform_hlds__size_prof__Var_19,
  MR_Word transform_hlds__size_prof__ConsId_20,
  MR_Word transform_hlds__size_prof__Args_21,
  MR_Word transform_hlds__size_prof__ArgModes_22,
  MR_Word transform_hlds__size_prof__How_23,
  MR_Word transform_hlds__size_prof__Unique_24,
  MR_Word transform_hlds__size_prof__GoalInfo_25,
  MR_Word * transform_hlds__size_prof__GoalExpr_26,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_45,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_46)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__VarType_28;
    MR_Word transform_hlds__size_prof__VarTypeCtor_29;
    MR_Word transform_hlds__size_prof__VarTypeCtorModule_30;
    MR_String transform_hlds__size_prof__VarTypeCtorName_31;
    MR_Word transform_hlds__size_prof__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, (MR_Integer) 10)));
    MR_Integer transform_hlds__size_prof__Var_32;
    MR_Word transform_hlds__size_prof__Var_83;
    MR_Integer transform_hlds__size_prof__lo_0;
    MR_Integer transform_hlds__size_prof__hi_1;
    MR_Integer transform_hlds__size_prof__mid_2;
    MR_Integer transform_hlds__size_prof__result_3;

    {
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__size_prof__Var_47, transform_hlds__size_prof__Var_19, &transform_hlds__size_prof__VarType_28);
    }
    {
      parse_tree__prog_type__type_to_ctor_det_2_p_0(transform_hlds__size_prof__VarType_28, &transform_hlds__size_prof__VarTypeCtor_29);
    }
    {
      check_hlds__type_util__type_ctor_module_name_arity_4_p_0(transform_hlds__size_prof__VarTypeCtor_29, &transform_hlds__size_prof__VarTypeCtorModule_30, &transform_hlds__size_prof__VarTypeCtorName_31, &transform_hlds__size_prof__Var_32);
    }
    {
      transform_hlds__size_prof__Var_83 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      transform_hlds__size_prof__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__size_prof__VarTypeCtorModule_30, transform_hlds__size_prof__Var_83);
    }
    if (transform_hlds__size_prof__succeeded)
      {
        /* binary string simple lookup switch */
        transform_hlds__size_prof__lo_0 = (MR_Integer) 0;
        transform_hlds__size_prof__hi_1 = (MR_Integer) 3;
        do
          {
            transform_hlds__size_prof__mid_2 = (((transform_hlds__size_prof__lo_0 + transform_hlds__size_prof__hi_1)) / (MR_Integer) 2);
            transform_hlds__size_prof__result_3 = MR_strcmp(transform_hlds__size_prof__VarTypeCtorName_31, ((&transform_hlds__size_prof_vector_common_6[0 + transform_hlds__size_prof__mid_2]))->transform_hlds__size_prof__vector_common_type_6_0__vct_6_f_0);
            if ((transform_hlds__size_prof__result_3 == (MR_Integer) 0))
              {
                transform_hlds__size_prof__succeeded = MR_TRUE;
                /* jump out of search loop */
                goto label_0;
              }
            else
            if ((transform_hlds__size_prof__result_3 < (MR_Integer) 0))
              transform_hlds__size_prof__hi_1 = (transform_hlds__size_prof__mid_2 - (MR_Integer) 1);
            else
              transform_hlds__size_prof__lo_0 = (transform_hlds__size_prof__mid_2 + (MR_Integer) 1);
          }
        while ((transform_hlds__size_prof__lo_0 <= transform_hlds__size_prof__hi_1));
        transform_hlds__size_prof__succeeded = MR_FALSE;
      label_0:;
      }
    if (transform_hlds__size_prof__succeeded)
      {
        MR_Word transform_hlds__size_prof__Unification_39;

        transform_hlds__size_prof__succeeded = (strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_info") == 0);
        if (transform_hlds__size_prof__succeeded)
          {
            MR_Word transform_hlds__size_prof__TypeCtorInfoVar_34;
            MR_Word transform_hlds__size_prof__ArgTypeInfoVars_35;
            MR_Word transform_hlds__size_prof__Var_33;

            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__size_prof__succeeded)
              {
                transform_hlds__size_prof__Var_33 = (MR_Word) MR_body(((MR_Word) transform_hlds__size_prof__ConsId_20), (MR_Integer) 1);
                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_21)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__size_prof__succeeded)
                  {
                    transform_hlds__size_prof__TypeCtorInfoVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 0)));
                    transform_hlds__size_prof__ArgTypeInfoVars_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 1)));
                  }
              }
            if (transform_hlds__size_prof__succeeded)
              {
                transform_hlds__size_prof__record_known_type_info_5_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__TypeCtorInfoVar_34, transform_hlds__size_prof__ArgTypeInfoVars_35, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
              }
            else
              {
                MR_Word transform_hlds__size_prof__M_36;
                MR_String transform_hlds__size_prof__N_37;
                MR_Integer transform_hlds__size_prof__A_38;

                transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 11)));
                if (transform_hlds__size_prof__succeeded)
                  {
                    transform_hlds__size_prof__M_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
                    transform_hlds__size_prof__N_37 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
                    transform_hlds__size_prof__A_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
                    {
                      transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__M_36, transform_hlds__size_prof__N_37, transform_hlds__size_prof__A_38, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_info");
                      return;
                    }
                  }
              }
          }
        else
          {
            transform_hlds__size_prof__succeeded = (strcmp(transform_hlds__size_prof__VarTypeCtorName_31, (MR_String) "type_ctor_info") == 0);
            if (transform_hlds__size_prof__succeeded)
              {
                MR_Word transform_hlds__size_prof__M_63;
                MR_String transform_hlds__size_prof__N_64;
                MR_Integer transform_hlds__size_prof__A_65;

                transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 11)));
                if (transform_hlds__size_prof__succeeded)
                  {
                    transform_hlds__size_prof__M_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
                    transform_hlds__size_prof__N_64 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
                    transform_hlds__size_prof__A_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
                    {
                      transform_hlds__size_prof__record_known_type_ctor_info_6_p_0(transform_hlds__size_prof__Var_19, transform_hlds__size_prof__M_63, transform_hlds__size_prof__N_64, transform_hlds__size_prof__A_65, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
                    }
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_construct\'/14", (MR_String) "bad type_ctor_info");
                      return;
                    }
                  }
              }
            else
              *transform_hlds__size_prof__STATE_VARIABLE_Info_46 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_45;
          }
        {
          transform_hlds__size_prof__Unification_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 0) = ((MR_Box) (transform_hlds__size_prof__Var_19));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_20));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 2) = ((MR_Box) (transform_hlds__size_prof__Args_21));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_22));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 4) = ((MR_Box) (transform_hlds__size_prof__How_23));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_24));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_39, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__size_prof__GoalExpr_26 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_16));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_17));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_39));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_18));
        }
      }
    else
      {
        MR_Word transform_hlds__size_prof___Name_40;
        MR_Integer transform_hlds__size_prof___Arity_41;
        MR_Word transform_hlds__size_prof___TypeCtor_42;
        MR_Word transform_hlds__size_prof__Var_43;
        MR_Word transform_hlds__size_prof__Var_44;

        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__ConsId_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (transform_hlds__size_prof__succeeded)
          {
            transform_hlds__size_prof___Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 1)));
            transform_hlds__size_prof___Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 2)));
            transform_hlds__size_prof___TypeCtor_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__ConsId_20, (MR_Integer) 3)));
            transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__Args_21)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__size_prof__succeeded)
              {
                transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 0)));
                transform_hlds__size_prof__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Args_21, (MR_Integer) 1)));
              }
          }
        if (transform_hlds__size_prof__succeeded)
          {
            transform_hlds__size_prof__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_122_101_95_112_114_111_102_95_112_114_111_99_101_115_115_95_99_111_110_115_95_99_111_110_115_116_114_117_99_116_95_95_91_54_93_95_48_15_p_0(transform_hlds__size_prof__LHS_15, transform_hlds__size_prof__RHS_16, transform_hlds__size_prof__UniMode_17, transform_hlds__size_prof__UnifyContext_18, transform_hlds__size_prof__Var_19, transform_hlds__size_prof__ConsId_20, transform_hlds__size_prof__Args_21, transform_hlds__size_prof__ArgModes_22, transform_hlds__size_prof__How_23, transform_hlds__size_prof__Unique_24, transform_hlds__size_prof__GoalInfo_25, transform_hlds__size_prof__GoalExpr_26, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
          }
        else
          {
            MR_Word transform_hlds__size_prof__Unification_69;

            {
              transform_hlds__size_prof__record_known_size_4_p_0(transform_hlds__size_prof__Var_19, (MR_Integer) 0, transform_hlds__size_prof__STATE_VARIABLE_Info_0_45, transform_hlds__size_prof__STATE_VARIABLE_Info_46);
            }
            {
              transform_hlds__size_prof__Unification_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 0) = ((MR_Box) (transform_hlds__size_prof__Var_19));
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 1) = ((MR_Box) (transform_hlds__size_prof__ConsId_20));
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 2) = ((MR_Box) (transform_hlds__size_prof__Args_21));
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 3) = ((MR_Box) (transform_hlds__size_prof__ArgModes_22));
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 4) = ((MR_Box) (transform_hlds__size_prof__How_23));
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 5) = ((MR_Box) (transform_hlds__size_prof__Unique_24));
              MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unification_69, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__size_prof__GoalExpr_26 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__LHS_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__RHS_16));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__size_prof__UniMode_17));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__size_prof__Unification_69));
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__size_prof__UnifyContext_18));
            }
          }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_140;

    {
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_switch__603__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_140);
    }
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_140));
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_switch_14_p_0(
  MR_Word transform_hlds__size_prof__First0_15,
  MR_Word * transform_hlds__size_prof__First_16,
  MR_Word transform_hlds__size_prof__Later0_17,
  MR_Word * transform_hlds__size_prof__Later_18,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_41,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_42,
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__FirstMainConsId_28;
    MR_Word transform_hlds__size_prof__FirstOtherConsIds_29;
    MR_Word transform_hlds__size_prof__FirstGoal0_30;
    MR_Word transform_hlds__size_prof__FirstGoal_31;
    MR_Word transform_hlds__size_prof__TypeInfoMapFirst_32;
    MR_Word transform_hlds__size_prof__KnownSizeMapFirst_33;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_47_47;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_48_48;
    MR_Word transform_hlds__size_prof__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 10)));
    MR_Word transform_hlds__size_prof__Var_64 = transform_hlds__size_prof__TypeInfoMap0_21;
    MR_Word transform_hlds__size_prof__Var_67 = transform_hlds__size_prof__Var_56;
    MR_Word transform_hlds__size_prof__Var_69 = transform_hlds__size_prof__Var_58;
    MR_Word transform_hlds__size_prof__Var_70 = transform_hlds__size_prof__Var_59;
    MR_Word transform_hlds__size_prof__Var_71 = transform_hlds__size_prof__Var_60;
    MR_Word transform_hlds__size_prof__Var_72 = transform_hlds__size_prof__Var_61;
    MR_Word transform_hlds__size_prof__Var_73 = transform_hlds__size_prof__Var_62;
    MR_Word transform_hlds__size_prof__Var_75 = transform_hlds__size_prof__Var_64;
    MR_Word transform_hlds__size_prof__Var_77 = transform_hlds__size_prof__RevTypeInfoMap0_22;
    MR_Word transform_hlds__size_prof__Var_78 = transform_hlds__size_prof__Var_67;
    MR_Word transform_hlds__size_prof__Var_80 = transform_hlds__size_prof__Var_69;
    MR_Word transform_hlds__size_prof__Var_81 = transform_hlds__size_prof__Var_70;
    MR_Word transform_hlds__size_prof__Var_82 = transform_hlds__size_prof__Var_71;
    MR_Word transform_hlds__size_prof__Var_83 = transform_hlds__size_prof__Var_72;
    MR_Word transform_hlds__size_prof__Var_84 = transform_hlds__size_prof__Var_73;
    MR_Word transform_hlds__size_prof__Var_85 = transform_hlds__size_prof__TypeCtorMap0_23;
    MR_Word transform_hlds__size_prof__Var_86 = transform_hlds__size_prof__Var_75;
    MR_Word transform_hlds__size_prof__Var_88 = transform_hlds__size_prof__Var_77;
    MR_Word transform_hlds__size_prof__Var_89 = transform_hlds__size_prof__Var_78;
    MR_Word transform_hlds__size_prof__Var_91 = transform_hlds__size_prof__Var_80;
    MR_Word transform_hlds__size_prof__Var_92 = transform_hlds__size_prof__Var_81;
    MR_Word transform_hlds__size_prof__Var_93 = transform_hlds__size_prof__Var_82;
    MR_Word transform_hlds__size_prof__Var_94 = transform_hlds__size_prof__Var_83;
    MR_Word transform_hlds__size_prof__Var_95 = transform_hlds__size_prof__Var_84;
    MR_Word transform_hlds__size_prof__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_41, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_107;
    MR_Word transform_hlds__size_prof__Var_108;
    MR_Word transform_hlds__size_prof__Var_109;
    MR_Word transform_hlds__size_prof__Var_110;
    MR_Word transform_hlds__size_prof__Var_112;
    MR_Word transform_hlds__size_prof__Var_113;
    MR_Word transform_hlds__size_prof__Var_114;
    MR_Word transform_hlds__size_prof__Var_115;
    MR_Word transform_hlds__size_prof__Var_116;

    {
      transform_hlds__size_prof__STATE_VARIABLE_Info_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 0) = ((MR_Box) (transform_hlds__size_prof__Var_85));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 1) = ((MR_Box) (transform_hlds__size_prof__Var_86));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_24));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 3) = ((MR_Box) (transform_hlds__size_prof__Var_88));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 4) = ((MR_Box) (transform_hlds__size_prof__Var_89));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_26));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 6) = ((MR_Box) (transform_hlds__size_prof__Var_91));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 7) = ((MR_Box) (transform_hlds__size_prof__Var_92));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 8) = ((MR_Box) (transform_hlds__size_prof__Var_93));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 9) = ((MR_Box) (transform_hlds__size_prof__Var_94));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, 10) = ((MR_Box) (transform_hlds__size_prof__Var_95));
    }
    transform_hlds__size_prof__FirstMainConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 0)));
    transform_hlds__size_prof__FirstOtherConsIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 1)));
    transform_hlds__size_prof__FirstGoal0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__First0_15, (MR_Integer) 2)));
    {
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__FirstGoal0_30, &transform_hlds__size_prof__FirstGoal_31, transform_hlds__size_prof__STATE_VARIABLE_Info_47_47, &transform_hlds__size_prof__STATE_VARIABLE_Info_48_48);
    }
    transform_hlds__size_prof__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
    transform_hlds__size_prof__TypeInfoMapFirst_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
    transform_hlds__size_prof__KnownSizeMapFirst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__size_prof__First_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__FirstMainConsId_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__FirstOtherConsIds_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__FirstGoal_31));
    }
    if ((transform_hlds__size_prof__Later0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__size_prof__Later_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__size_prof__TypeInfoMap_25 = transform_hlds__size_prof__TypeInfoMapFirst_32;
        *transform_hlds__size_prof__KnownSizeMap_27 = transform_hlds__size_prof__KnownSizeMapFirst_33;
        *transform_hlds__size_prof__STATE_VARIABLE_Info_42 = transform_hlds__size_prof__STATE_VARIABLE_Info_48_48;
      }
    else
      {
        MR_Word transform_hlds__size_prof__TypeInfo_142_142 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
        MR_Word transform_hlds__size_prof__TypeCtorInfo_143_143 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        MR_Word transform_hlds__size_prof__Head0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Tail0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__LaterTargetTypeInfoMap_36;
        MR_Word transform_hlds__size_prof__Head_37;
        MR_Word transform_hlds__size_prof__Tail_38;
        MR_Word transform_hlds__size_prof__TypeInfoMapLater_39;
        MR_Word transform_hlds__size_prof__KnownSizeMapLater_40;
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_50_50;
        MR_Word transform_hlds__size_prof__Var_127;
        MR_Word transform_hlds__size_prof__Var_128;
        MR_Word transform_hlds__size_prof__Var_129;
        MR_Word transform_hlds__size_prof__Var_130;
        MR_Word transform_hlds__size_prof__Var_132;
        MR_Word transform_hlds__size_prof__Var_133;
        MR_Word transform_hlds__size_prof__Var_134;
        MR_Word transform_hlds__size_prof__Var_135;
        MR_Word transform_hlds__size_prof__Var_136;
        MR_Word transform_hlds__size_prof__Var_137;
        MR_Word transform_hlds__size_prof__Var_131;

        {
          mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_142_142, transform_hlds__size_prof__TypeCtorInfo_143_143, (MR_Word) &transform_hlds__size_prof_scalar_common_2[8], transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMapFirst_32, &transform_hlds__size_prof__LaterTargetTypeInfoMap_36);
        }
        transform_hlds__size_prof__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
        transform_hlds__size_prof__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
        transform_hlds__size_prof__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
        transform_hlds__size_prof__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
        transform_hlds__size_prof__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
        transform_hlds__size_prof__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
        transform_hlds__size_prof__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
        transform_hlds__size_prof__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
        transform_hlds__size_prof__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
        transform_hlds__size_prof__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
        {
          transform_hlds__size_prof__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (transform_hlds__size_prof__Var_127));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (transform_hlds__size_prof__Var_128));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (transform_hlds__size_prof__Var_129));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (transform_hlds__size_prof__Var_130));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (transform_hlds__size_prof__LaterTargetTypeInfoMap_36));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (transform_hlds__size_prof__Var_132));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (transform_hlds__size_prof__Var_133));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (transform_hlds__size_prof__Var_134));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 8) = ((MR_Box) (transform_hlds__size_prof__Var_135));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 9) = ((MR_Box) (transform_hlds__size_prof__Var_136));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, 10) = ((MR_Box) (transform_hlds__size_prof__Var_137));
        }
        {
          transform_hlds__size_prof__size_prof_process_switch_14_p_0(transform_hlds__size_prof__Head0_34, &transform_hlds__size_prof__Head_37, transform_hlds__size_prof__Tail0_35, &transform_hlds__size_prof__Tail_38, transform_hlds__size_prof__STATE_VARIABLE_Info_50_50, transform_hlds__size_prof__STATE_VARIABLE_Info_42, transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMap0_21, transform_hlds__size_prof__RevTypeInfoMap0_22, transform_hlds__size_prof__TypeCtorMap0_23, transform_hlds__size_prof__RevTypeCtorMap0_24, &transform_hlds__size_prof__TypeInfoMapLater_39, transform_hlds__size_prof__KnownSizeMap0_26, &transform_hlds__size_prof__KnownSizeMapLater_40);
        }
        {
          *transform_hlds__size_prof__TypeInfoMap_25 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_143_143, transform_hlds__size_prof__TypeInfo_142_142, transform_hlds__size_prof__TypeInfoMapFirst_32, transform_hlds__size_prof__TypeInfoMapLater_39);
        }
        {
          *transform_hlds__size_prof__KnownSizeMap_27 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_142_142, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapFirst_33, transform_hlds__size_prof__KnownSizeMapLater_40);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__size_prof__Later_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Head_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Tail_38));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_136;

    {
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_disj__562__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_136);
    }
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_136));
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_disj_14_p_0(
  MR_Word transform_hlds__size_prof__First0_15,
  MR_Word * transform_hlds__size_prof__First_16,
  MR_Word transform_hlds__size_prof__Later0_17,
  MR_Word * transform_hlds__size_prof__Later_18,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_37,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_38,
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap_20,
  MR_Word transform_hlds__size_prof__TypeInfoMap0_21,
  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_22,
  MR_Word transform_hlds__size_prof__TypeCtorMap0_23,
  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_24,
  MR_Word * transform_hlds__size_prof__TypeInfoMap_25,
  MR_Word transform_hlds__size_prof__KnownSizeMap0_26,
  MR_Word * transform_hlds__size_prof__KnownSizeMap_27)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeInfoMapFirst_28;
    MR_Word transform_hlds__size_prof__KnownSizeMapFirst_29;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_43_43;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
    MR_Word transform_hlds__size_prof__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 4)));
    MR_Word transform_hlds__size_prof__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 6)));
    MR_Word transform_hlds__size_prof__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 7)));
    MR_Word transform_hlds__size_prof__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 8)));
    MR_Word transform_hlds__size_prof__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 9)));
    MR_Word transform_hlds__size_prof__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 10)));
    MR_Word transform_hlds__size_prof__Var_60 = transform_hlds__size_prof__TypeInfoMap0_21;
    MR_Word transform_hlds__size_prof__Var_63 = transform_hlds__size_prof__Var_52;
    MR_Word transform_hlds__size_prof__Var_65 = transform_hlds__size_prof__Var_54;
    MR_Word transform_hlds__size_prof__Var_66 = transform_hlds__size_prof__Var_55;
    MR_Word transform_hlds__size_prof__Var_67 = transform_hlds__size_prof__Var_56;
    MR_Word transform_hlds__size_prof__Var_68 = transform_hlds__size_prof__Var_57;
    MR_Word transform_hlds__size_prof__Var_69 = transform_hlds__size_prof__Var_58;
    MR_Word transform_hlds__size_prof__Var_71 = transform_hlds__size_prof__Var_60;
    MR_Word transform_hlds__size_prof__Var_73 = transform_hlds__size_prof__RevTypeInfoMap0_22;
    MR_Word transform_hlds__size_prof__Var_74 = transform_hlds__size_prof__Var_63;
    MR_Word transform_hlds__size_prof__Var_76 = transform_hlds__size_prof__Var_65;
    MR_Word transform_hlds__size_prof__Var_77 = transform_hlds__size_prof__Var_66;
    MR_Word transform_hlds__size_prof__Var_78 = transform_hlds__size_prof__Var_67;
    MR_Word transform_hlds__size_prof__Var_79 = transform_hlds__size_prof__Var_68;
    MR_Word transform_hlds__size_prof__Var_80 = transform_hlds__size_prof__Var_69;
    MR_Word transform_hlds__size_prof__Var_81 = transform_hlds__size_prof__TypeCtorMap0_23;
    MR_Word transform_hlds__size_prof__Var_82 = transform_hlds__size_prof__Var_71;
    MR_Word transform_hlds__size_prof__Var_84 = transform_hlds__size_prof__Var_73;
    MR_Word transform_hlds__size_prof__Var_85 = transform_hlds__size_prof__Var_74;
    MR_Word transform_hlds__size_prof__Var_87 = transform_hlds__size_prof__Var_76;
    MR_Word transform_hlds__size_prof__Var_88 = transform_hlds__size_prof__Var_77;
    MR_Word transform_hlds__size_prof__Var_89 = transform_hlds__size_prof__Var_78;
    MR_Word transform_hlds__size_prof__Var_90 = transform_hlds__size_prof__Var_79;
    MR_Word transform_hlds__size_prof__Var_91 = transform_hlds__size_prof__Var_80;
    MR_Word transform_hlds__size_prof__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 2)));
    MR_Word transform_hlds__size_prof__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 3)));
    MR_Word transform_hlds__size_prof__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_37, (MR_Integer) 5)));
    MR_Word transform_hlds__size_prof__Var_103;
    MR_Word transform_hlds__size_prof__Var_104;
    MR_Word transform_hlds__size_prof__Var_105;
    MR_Word transform_hlds__size_prof__Var_106;
    MR_Word transform_hlds__size_prof__Var_108;
    MR_Word transform_hlds__size_prof__Var_109;
    MR_Word transform_hlds__size_prof__Var_110;
    MR_Word transform_hlds__size_prof__Var_111;
    MR_Word transform_hlds__size_prof__Var_112;

    {
      transform_hlds__size_prof__STATE_VARIABLE_Info_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 0) = ((MR_Box) (transform_hlds__size_prof__Var_81));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 1) = ((MR_Box) (transform_hlds__size_prof__Var_82));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_24));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 3) = ((MR_Box) (transform_hlds__size_prof__Var_84));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 4) = ((MR_Box) (transform_hlds__size_prof__Var_85));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_26));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 6) = ((MR_Box) (transform_hlds__size_prof__Var_87));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 7) = ((MR_Box) (transform_hlds__size_prof__Var_88));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 8) = ((MR_Box) (transform_hlds__size_prof__Var_89));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 9) = ((MR_Box) (transform_hlds__size_prof__Var_90));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, 10) = ((MR_Box) (transform_hlds__size_prof__Var_91));
    }
    {
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__First0_15, transform_hlds__size_prof__First_16, transform_hlds__size_prof__STATE_VARIABLE_Info_43_43, &transform_hlds__size_prof__STATE_VARIABLE_Info_44_44);
    }
    transform_hlds__size_prof__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 0)));
    transform_hlds__size_prof__TypeInfoMapFirst_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 4)));
    transform_hlds__size_prof__KnownSizeMapFirst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 10)));
    if ((transform_hlds__size_prof__Later0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__size_prof__Later_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__size_prof__TypeInfoMap_25 = transform_hlds__size_prof__TypeInfoMapFirst_28;
        *transform_hlds__size_prof__KnownSizeMap_27 = transform_hlds__size_prof__KnownSizeMapFirst_29;
        *transform_hlds__size_prof__STATE_VARIABLE_Info_38 = transform_hlds__size_prof__STATE_VARIABLE_Info_44_44;
      }
    else
      {
        MR_Word transform_hlds__size_prof__TypeInfo_138_138 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
        MR_Word transform_hlds__size_prof__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
        MR_Word transform_hlds__size_prof__Head0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Tail0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Later0_17, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__LaterTargetTypeInfoMap_32;
        MR_Word transform_hlds__size_prof__Head_33;
        MR_Word transform_hlds__size_prof__Tail_34;
        MR_Word transform_hlds__size_prof__TypeInfoMapLater_35;
        MR_Word transform_hlds__size_prof__KnownSizeMapLater_36;
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_46_46;
        MR_Word transform_hlds__size_prof__Var_123;
        MR_Word transform_hlds__size_prof__Var_124;
        MR_Word transform_hlds__size_prof__Var_125;
        MR_Word transform_hlds__size_prof__Var_126;
        MR_Word transform_hlds__size_prof__Var_128;
        MR_Word transform_hlds__size_prof__Var_129;
        MR_Word transform_hlds__size_prof__Var_130;
        MR_Word transform_hlds__size_prof__Var_131;
        MR_Word transform_hlds__size_prof__Var_132;
        MR_Word transform_hlds__size_prof__Var_133;
        MR_Word transform_hlds__size_prof__Var_127;

        {
          mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_138_138, transform_hlds__size_prof__TypeCtorInfo_139_139, (MR_Word) &transform_hlds__size_prof_scalar_common_2[7], transform_hlds__size_prof__TypeInfoMapFirst_28, transform_hlds__size_prof__TargetTypeInfoMap_20, &transform_hlds__size_prof__LaterTargetTypeInfoMap_32);
        }
        transform_hlds__size_prof__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 1)));
        transform_hlds__size_prof__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 2)));
        transform_hlds__size_prof__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 3)));
        transform_hlds__size_prof__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 4)));
        transform_hlds__size_prof__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 5)));
        transform_hlds__size_prof__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 6)));
        transform_hlds__size_prof__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 7)));
        transform_hlds__size_prof__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 8)));
        transform_hlds__size_prof__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 9)));
        transform_hlds__size_prof__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_44_44, (MR_Integer) 10)));
        {
          transform_hlds__size_prof__STATE_VARIABLE_Info_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 0) = ((MR_Box) (transform_hlds__size_prof__Var_123));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 1) = ((MR_Box) (transform_hlds__size_prof__Var_124));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 2) = ((MR_Box) (transform_hlds__size_prof__Var_125));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 3) = ((MR_Box) (transform_hlds__size_prof__Var_126));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 4) = ((MR_Box) (transform_hlds__size_prof__LaterTargetTypeInfoMap_32));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 5) = ((MR_Box) (transform_hlds__size_prof__Var_128));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 6) = ((MR_Box) (transform_hlds__size_prof__Var_129));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 7) = ((MR_Box) (transform_hlds__size_prof__Var_130));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 8) = ((MR_Box) (transform_hlds__size_prof__Var_131));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 9) = ((MR_Box) (transform_hlds__size_prof__Var_132));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, 10) = ((MR_Box) (transform_hlds__size_prof__Var_133));
        }
        {
          transform_hlds__size_prof__size_prof_process_disj_14_p_0(transform_hlds__size_prof__Head0_30, &transform_hlds__size_prof__Head_33, transform_hlds__size_prof__Tail0_31, &transform_hlds__size_prof__Tail_34, transform_hlds__size_prof__STATE_VARIABLE_Info_46_46, transform_hlds__size_prof__STATE_VARIABLE_Info_38, transform_hlds__size_prof__TargetTypeInfoMap_20, transform_hlds__size_prof__TypeInfoMap0_21, transform_hlds__size_prof__RevTypeInfoMap0_22, transform_hlds__size_prof__TypeCtorMap0_23, transform_hlds__size_prof__RevTypeCtorMap0_24, &transform_hlds__size_prof__TypeInfoMapLater_35, transform_hlds__size_prof__KnownSizeMap0_26, &transform_hlds__size_prof__KnownSizeMapLater_36);
        }
        {
          *transform_hlds__size_prof__TypeInfoMap_25 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_139_139, transform_hlds__size_prof__TypeInfo_138_138, transform_hlds__size_prof__TypeInfoMapFirst_28, transform_hlds__size_prof__TypeInfoMapLater_35);
        }
        {
          *transform_hlds__size_prof__KnownSizeMap_27 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_138_138, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapFirst_29, transform_hlds__size_prof__KnownSizeMapLater_36);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__size_prof__Later_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Head_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Tail_34));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4,
  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_5,
  MR_Word transform_hlds__size_prof__TypeInfoMap0_6,
  MR_Word transform_hlds__size_prof__TypeCtorMap0_7,
  MR_Word transform_hlds__size_prof__KnownSizeMap0_8)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__size_prof__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__size_prof__STATE_VARIABLE_Info_4 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word transform_hlds__size_prof__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Goal_18;
        MR_Word transform_hlds__size_prof__Goals_19;
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_30_30;
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_31_31;
        MR_Word transform_hlds__size_prof__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 2)));
        MR_Word transform_hlds__size_prof__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 3)));
        MR_Word transform_hlds__size_prof__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 6)));
        MR_Word transform_hlds__size_prof__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 7)));
        MR_Word transform_hlds__size_prof__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 8)));
        MR_Word transform_hlds__size_prof__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 9)));
        MR_Word transform_hlds__size_prof__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 10)));
        MR_Word transform_hlds__size_prof__Var_46 = transform_hlds__size_prof__Var_35;
        MR_Word transform_hlds__size_prof__Var_47 = transform_hlds__size_prof__Var_36;
        MR_Word transform_hlds__size_prof__Var_48 = transform_hlds__size_prof__TargetTypeInfoMap0_5;
        MR_Word transform_hlds__size_prof__Var_50 = transform_hlds__size_prof__Var_39;
        MR_Word transform_hlds__size_prof__Var_51 = transform_hlds__size_prof__Var_40;
        MR_Word transform_hlds__size_prof__Var_52 = transform_hlds__size_prof__Var_41;
        MR_Word transform_hlds__size_prof__Var_53 = transform_hlds__size_prof__Var_42;
        MR_Word transform_hlds__size_prof__Var_54 = transform_hlds__size_prof__Var_43;
        MR_Word transform_hlds__size_prof__Var_56 = transform_hlds__size_prof__TypeInfoMap0_6;
        MR_Word transform_hlds__size_prof__Var_57 = transform_hlds__size_prof__Var_46;
        MR_Word transform_hlds__size_prof__Var_58 = transform_hlds__size_prof__Var_47;
        MR_Word transform_hlds__size_prof__Var_59 = transform_hlds__size_prof__Var_48;
        MR_Word transform_hlds__size_prof__Var_61 = transform_hlds__size_prof__Var_50;
        MR_Word transform_hlds__size_prof__Var_62 = transform_hlds__size_prof__Var_51;
        MR_Word transform_hlds__size_prof__Var_63 = transform_hlds__size_prof__Var_52;
        MR_Word transform_hlds__size_prof__Var_64 = transform_hlds__size_prof__Var_53;
        MR_Word transform_hlds__size_prof__Var_65 = transform_hlds__size_prof__Var_54;
        MR_Word transform_hlds__size_prof__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 4)));
        MR_Word transform_hlds__size_prof__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, (MR_Integer) 5)));

        {
          transform_hlds__size_prof__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap0_7));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (transform_hlds__size_prof__Var_56));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (transform_hlds__size_prof__Var_57));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (transform_hlds__size_prof__Var_58));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (transform_hlds__size_prof__Var_59));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_8));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (transform_hlds__size_prof__Var_61));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 7) = ((MR_Box) (transform_hlds__size_prof__Var_62));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 8) = ((MR_Box) (transform_hlds__size_prof__Var_63));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 9) = ((MR_Box) (transform_hlds__size_prof__Var_64));
          MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, 10) = ((MR_Box) (transform_hlds__size_prof__Var_65));
        }
        {
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_16, &transform_hlds__size_prof__Goal_18, transform_hlds__size_prof__STATE_VARIABLE_Info_30_30, &transform_hlds__size_prof__STATE_VARIABLE_Info_31_31);
        }
        {
          transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(transform_hlds__size_prof__Goals0_17, &transform_hlds__size_prof__Goals_19, transform_hlds__size_prof__STATE_VARIABLE_Info_31_31, transform_hlds__size_prof__STATE_VARIABLE_Info_4, transform_hlds__size_prof__TargetTypeInfoMap0_5, transform_hlds__size_prof__TypeInfoMap0_6, transform_hlds__size_prof__TypeCtorMap0_7, transform_hlds__size_prof__KnownSizeMap0_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__size_prof__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Goal_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Goals_19));
        }
      }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_conj_4_p_0(
  MR_Word transform_hlds__size_prof__HeadVar__1_1,
  MR_Word * transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_4)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    if ((transform_hlds__size_prof__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *transform_hlds__size_prof__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *transform_hlds__size_prof__STATE_VARIABLE_Info_4 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word transform_hlds__size_prof__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__size_prof__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__size_prof__Goal_12;
        MR_Word transform_hlds__size_prof__Goals_13;
        MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_18_18;
        MR_Word transform_hlds__size_prof__SubConj_14;
        MR_Word transform_hlds__size_prof__Var_20;
        MR_Word transform_hlds__size_prof__Var_21;
        MR_Word transform_hlds__size_prof__Var_15;

        {
          transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_8, &transform_hlds__size_prof__Goal_12, transform_hlds__size_prof__STATE_VARIABLE_Info_0_3, &transform_hlds__size_prof__STATE_VARIABLE_Info_18_18);
        }
        {
          transform_hlds__size_prof__size_prof_process_conj_4_p_0(transform_hlds__size_prof__Goals0_9, &transform_hlds__size_prof__Goals_13, transform_hlds__size_prof__STATE_VARIABLE_Info_18_18, transform_hlds__size_prof__STATE_VARIABLE_Info_4);
        }
        transform_hlds__size_prof__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal_12, (MR_Integer) 0)));
        transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal_12, (MR_Integer) 1)));
        transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__Var_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Var_20, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (transform_hlds__size_prof__succeeded)
          {
            transform_hlds__size_prof__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Var_20, (MR_Integer) 1)));
            transform_hlds__size_prof__SubConj_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Var_20, (MR_Integer) 2)));
            transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_21 == (MR_Integer) 0);
          }
        if (transform_hlds__size_prof__succeeded)
          {
            {
              *transform_hlds__size_prof__HeadVar__2_2 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__size_prof__SubConj_14, transform_hlds__size_prof__Goals_13);
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *transform_hlds__size_prof__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__size_prof__Goal_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__size_prof__Goals_13));
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_2(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;

    {
      transform_hlds__size_prof__succeeded = transform_hlds__size_prof__binds_arg_in_cell_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1));
    }
    return transform_hlds__size_prof__succeeded;
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
    MR_Word transform_hlds__size_prof__conv0_HeadVar__3_1039;

    {
      transform_hlds__size_prof__IntroducedFrom__pred__size_prof_process_goal__444__1_3_p_0(((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_HeadVar__3_1039);
    }
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_HeadVar__3_1039));
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_goal_4_p_0(
  MR_Word transform_hlds__size_prof__Goal0_5,
  MR_Word * transform_hlds__size_prof__Goal_6,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_0_95,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_Info_96)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__size_prof__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Goal0_5, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__GoalExpr_22;

    switch (MR_tag((MR_Word) transform_hlds__size_prof__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__size_prof__NegGoal0_87 = (MR_Word) MR_body(((MR_Word) transform_hlds__size_prof__GoalExpr0_8), (MR_Integer) 0);
          MR_Word transform_hlds__size_prof__NegGoal_88;
          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_103_103;
          MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
          MR_Word transform_hlds__size_prof__TypeInfoMap0_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
          MR_Word transform_hlds__size_prof__RevTypeInfoMap0_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
          MR_Word transform_hlds__size_prof__TypeCtorMap0_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
          MR_Word transform_hlds__size_prof__KnownSizeMap0_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
          MR_Word transform_hlds__size_prof__RevTypeCtorMap0_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
          MR_Word transform_hlds__size_prof__Var_960;
          MR_Word transform_hlds__size_prof__Var_961;
          MR_Word transform_hlds__size_prof__Var_962;
          MR_Word transform_hlds__size_prof__Var_963;
          MR_Word transform_hlds__size_prof__Var_964;
          MR_Word transform_hlds__size_prof__Var_969;
          MR_Word transform_hlds__size_prof__Var_971;
          MR_Word transform_hlds__size_prof__Var_972;
          MR_Word transform_hlds__size_prof__Var_973;
          MR_Word transform_hlds__size_prof__Var_974;
          MR_Word transform_hlds__size_prof__Var_975;
          MR_Word transform_hlds__size_prof__Var_977;
          MR_Word transform_hlds__size_prof__Var_980;
          MR_Word transform_hlds__size_prof__Var_982;
          MR_Word transform_hlds__size_prof__Var_983;
          MR_Word transform_hlds__size_prof__Var_984;
          MR_Word transform_hlds__size_prof__Var_985;
          MR_Word transform_hlds__size_prof__Var_986;
          MR_Word transform_hlds__size_prof__Var_988;
          MR_Word transform_hlds__size_prof__Var_990;
          MR_Word transform_hlds__size_prof__Var_991;
          MR_Word transform_hlds__size_prof__Var_993;
          MR_Word transform_hlds__size_prof__Var_994;
          MR_Word transform_hlds__size_prof__Var_995;
          MR_Word transform_hlds__size_prof__Var_996;
          MR_Word transform_hlds__size_prof__Var_997;
          MR_Word transform_hlds__size_prof__Var_998;
          MR_Word transform_hlds__size_prof__Var_999;
          MR_Word transform_hlds__size_prof__Var_1001;
          MR_Word transform_hlds__size_prof__Var_1002;
          MR_Word transform_hlds__size_prof__Var_1004;
          MR_Word transform_hlds__size_prof__Var_1005;
          MR_Word transform_hlds__size_prof__Var_1006;
          MR_Word transform_hlds__size_prof__Var_1007;
          MR_Word transform_hlds__size_prof__Var_1008;
          MR_Word transform_hlds__size_prof__Var_899 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
          MR_Word transform_hlds__size_prof__Var_900 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
          MR_Word transform_hlds__size_prof__Var_901 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
          MR_Word transform_hlds__size_prof__Var_902 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
          MR_Word transform_hlds__size_prof__Var_903 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
          MR_Word transform_hlds__size_prof__Var_954;
          MR_Word transform_hlds__size_prof__Var_955;
          MR_Word transform_hlds__size_prof__Var_956;
          MR_Word transform_hlds__size_prof__Var_957;
          MR_Word transform_hlds__size_prof__Var_958;
          MR_Word transform_hlds__size_prof__Var_959;

          {
            transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__NegGoal0_87, &transform_hlds__size_prof__NegGoal_88, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_103_103);
          }
          transform_hlds__size_prof__Var_954 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 0)));
          transform_hlds__size_prof__Var_955 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 1)));
          transform_hlds__size_prof__Var_956 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 2)));
          transform_hlds__size_prof__Var_957 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 3)));
          transform_hlds__size_prof__Var_958 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 4)));
          transform_hlds__size_prof__Var_959 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 5)));
          transform_hlds__size_prof__Var_960 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 6)));
          transform_hlds__size_prof__Var_961 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 7)));
          transform_hlds__size_prof__Var_962 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 8)));
          transform_hlds__size_prof__Var_963 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 9)));
          transform_hlds__size_prof__Var_964 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_103_103, (MR_Integer) 10)));
          transform_hlds__size_prof__Var_969 = transform_hlds__size_prof__TargetTypeInfoMap0_245;
          transform_hlds__size_prof__Var_971 = transform_hlds__size_prof__Var_960;
          transform_hlds__size_prof__Var_972 = transform_hlds__size_prof__Var_961;
          transform_hlds__size_prof__Var_973 = transform_hlds__size_prof__Var_962;
          transform_hlds__size_prof__Var_974 = transform_hlds__size_prof__Var_963;
          transform_hlds__size_prof__Var_975 = transform_hlds__size_prof__Var_964;
          transform_hlds__size_prof__Var_977 = transform_hlds__size_prof__TypeInfoMap0_246;
          transform_hlds__size_prof__Var_980 = transform_hlds__size_prof__Var_969;
          transform_hlds__size_prof__Var_982 = transform_hlds__size_prof__Var_971;
          transform_hlds__size_prof__Var_983 = transform_hlds__size_prof__Var_972;
          transform_hlds__size_prof__Var_984 = transform_hlds__size_prof__Var_973;
          transform_hlds__size_prof__Var_985 = transform_hlds__size_prof__Var_974;
          transform_hlds__size_prof__Var_986 = transform_hlds__size_prof__Var_975;
          transform_hlds__size_prof__Var_988 = transform_hlds__size_prof__Var_977;
          transform_hlds__size_prof__Var_990 = transform_hlds__size_prof__RevTypeInfoMap0_247;
          transform_hlds__size_prof__Var_991 = transform_hlds__size_prof__Var_980;
          transform_hlds__size_prof__Var_993 = transform_hlds__size_prof__Var_982;
          transform_hlds__size_prof__Var_994 = transform_hlds__size_prof__Var_983;
          transform_hlds__size_prof__Var_995 = transform_hlds__size_prof__Var_984;
          transform_hlds__size_prof__Var_996 = transform_hlds__size_prof__Var_985;
          transform_hlds__size_prof__Var_997 = transform_hlds__size_prof__Var_986;
          transform_hlds__size_prof__Var_998 = transform_hlds__size_prof__TypeCtorMap0_248;
          transform_hlds__size_prof__Var_999 = transform_hlds__size_prof__Var_988;
          transform_hlds__size_prof__Var_1001 = transform_hlds__size_prof__Var_990;
          transform_hlds__size_prof__Var_1002 = transform_hlds__size_prof__Var_991;
          transform_hlds__size_prof__Var_1004 = transform_hlds__size_prof__Var_993;
          transform_hlds__size_prof__Var_1005 = transform_hlds__size_prof__Var_994;
          transform_hlds__size_prof__Var_1006 = transform_hlds__size_prof__Var_995;
          transform_hlds__size_prof__Var_1007 = transform_hlds__size_prof__Var_996;
          transform_hlds__size_prof__Var_1008 = transform_hlds__size_prof__Var_997;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_998));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_999));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_250));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_1001));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_1002));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_249));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_1004));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_1005));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_1006));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_1007));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_1008));
          }
          transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__size_prof__NegGoal_88);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__size_prof__LHS_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)));
          MR_Word transform_hlds__size_prof__RHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word transform_hlds__size_prof__UniMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word transform_hlds__size_prof__Unify0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word transform_hlds__size_prof__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 4)));

          switch (MR_tag((MR_Word) transform_hlds__size_prof__Unify0_13)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word transform_hlds__size_prof__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)));
                MR_Word transform_hlds__size_prof__ConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 1)));
                MR_Word transform_hlds__size_prof__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 2)));
                MR_Word transform_hlds__size_prof__ArgModes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 3)));
                MR_Word transform_hlds__size_prof__How_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 4)));
                MR_Word transform_hlds__size_prof__Unique_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 5)));
                MR_Word transform_hlds__size_prof__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Unify0_13, (MR_Integer) 6)));

                {
                  transform_hlds__size_prof__size_prof_process_construct_14_p_0(transform_hlds__size_prof__LHS_10, transform_hlds__size_prof__RHS_11, transform_hlds__size_prof__UniMode_12, transform_hlds__size_prof__UnifyContext_14, transform_hlds__size_prof__Var_15, transform_hlds__size_prof__ConsId_16, transform_hlds__size_prof__Args_17, transform_hlds__size_prof__ArgModes_18, transform_hlds__size_prof__How_19, transform_hlds__size_prof__Unique_20, transform_hlds__size_prof__GoalInfo0_9, &transform_hlds__size_prof__GoalExpr_22, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word transform_hlds__size_prof__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)));
                MR_Word transform_hlds__size_prof__ConsId_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 1)));
                MR_Word transform_hlds__size_prof__Args_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 2)));
                MR_Word transform_hlds__size_prof__ArgModes_185 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 3)));
                MR_Word transform_hlds__size_prof___CanFail_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 4)));
                MR_Word transform_hlds__size_prof___CanCGC_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Unify0_13, (MR_Integer) 5)));
                MR_Word transform_hlds__size_prof__BindingArgModes_25;
                MR_Word transform_hlds__size_prof__Var_179;
                MR_Word transform_hlds__size_prof__Var_26;
                MR_Word transform_hlds__size_prof__Var_27;

                {
                  transform_hlds__size_prof__Var_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_179, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_179, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_goal_4_p_0_2));
                  MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_179, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_179, 3) = ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_Info_0_95));
                }
                {
                  mercury__list__filter_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0, transform_hlds__size_prof__Var_179, transform_hlds__size_prof__ArgModes_185, &transform_hlds__size_prof__BindingArgModes_25);
                }
                transform_hlds__size_prof__succeeded = ((MR_tag((MR_Word) transform_hlds__size_prof__BindingArgModes_25)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__size_prof__succeeded)
                  {
                    transform_hlds__size_prof__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__BindingArgModes_25, (MR_Integer) 0)));
                    transform_hlds__size_prof__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__BindingArgModes_25, (MR_Integer) 1)));
                    {
                      transform_hlds__size_prof__size_prof_process_deconstruct_8_p_0(transform_hlds__size_prof__Var_182, transform_hlds__size_prof__ConsId_183, transform_hlds__size_prof__Args_184, transform_hlds__size_prof__ArgModes_185, transform_hlds__size_prof__Goal0_5, &transform_hlds__size_prof__GoalExpr_22, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                    }
                  }
                else
                  {
                    transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
                    *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
                *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Unify0_13, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
                    *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "complicated_unify");
                      return;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__size_prof__TypeCtorInfo_1022_1022 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
          MR_Word transform_hlds__size_prof__TypeInfo_1023_1023 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
          MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_172_172;
          MR_Word transform_hlds__size_prof__Var_173;
          MR_Word transform_hlds__size_prof__Var_175;
          MR_Word transform_hlds__size_prof__Var_252;
          MR_Word transform_hlds__size_prof__Var_253;
          MR_Word transform_hlds__size_prof__Var_254;
          MR_Word transform_hlds__size_prof__Var_255;
          MR_Word transform_hlds__size_prof__Var_256;
          MR_Word transform_hlds__size_prof__Var_257;
          MR_Word transform_hlds__size_prof__Var_258;
          MR_Word transform_hlds__size_prof__Var_259;
          MR_Word transform_hlds__size_prof__Var_260;
          MR_Word transform_hlds__size_prof__Var_261;
          MR_Word transform_hlds__size_prof__Var_251;
          MR_Word transform_hlds__size_prof__Var_262;
          MR_Word transform_hlds__size_prof__Var_263;
          MR_Word transform_hlds__size_prof__Var_265;
          MR_Word transform_hlds__size_prof__Var_266;
          MR_Word transform_hlds__size_prof__Var_267;
          MR_Word transform_hlds__size_prof__Var_268;
          MR_Word transform_hlds__size_prof__Var_269;
          MR_Word transform_hlds__size_prof__Var_270;
          MR_Word transform_hlds__size_prof__Var_271;
          MR_Word transform_hlds__size_prof__Var_272;
          MR_Word transform_hlds__size_prof__Var_264;

          {
            transform_hlds__size_prof__Var_173 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1022_1022, transform_hlds__size_prof__TypeInfo_1023_1023);
          }
          transform_hlds__size_prof__Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
          transform_hlds__size_prof__Var_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
          transform_hlds__size_prof__Var_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
          transform_hlds__size_prof__Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
          transform_hlds__size_prof__Var_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
          transform_hlds__size_prof__Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
          transform_hlds__size_prof__Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
          transform_hlds__size_prof__Var_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
          transform_hlds__size_prof__Var_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
          transform_hlds__size_prof__Var_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
          transform_hlds__size_prof__Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
          {
            transform_hlds__size_prof__STATE_VARIABLE_Info_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 0) = ((MR_Box) (transform_hlds__size_prof__Var_173));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 1) = ((MR_Box) (transform_hlds__size_prof__Var_252));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 2) = ((MR_Box) (transform_hlds__size_prof__Var_253));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 3) = ((MR_Box) (transform_hlds__size_prof__Var_254));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 4) = ((MR_Box) (transform_hlds__size_prof__Var_255));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 5) = ((MR_Box) (transform_hlds__size_prof__Var_256));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 6) = ((MR_Box) (transform_hlds__size_prof__Var_257));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 7) = ((MR_Box) (transform_hlds__size_prof__Var_258));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 8) = ((MR_Box) (transform_hlds__size_prof__Var_259));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 9) = ((MR_Box) (transform_hlds__size_prof__Var_260));
            MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, 10) = ((MR_Box) (transform_hlds__size_prof__Var_261));
          }
          {
            transform_hlds__size_prof__Var_175 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1023_1023, transform_hlds__size_prof__TypeCtorInfo_1022_1022);
          }
          transform_hlds__size_prof__Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 0)));
          transform_hlds__size_prof__Var_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 1)));
          transform_hlds__size_prof__Var_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 2)));
          transform_hlds__size_prof__Var_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 3)));
          transform_hlds__size_prof__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 4)));
          transform_hlds__size_prof__Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 5)));
          transform_hlds__size_prof__Var_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 6)));
          transform_hlds__size_prof__Var_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 7)));
          transform_hlds__size_prof__Var_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 8)));
          transform_hlds__size_prof__Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 9)));
          transform_hlds__size_prof__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_172_172, (MR_Integer) 10)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_262));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_263));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_175));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_265));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_266));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_267));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_268));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_269));
            MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_270));
            MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_271));
            MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_272));
          }
          transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__size_prof__TypeCtorInfo_1024_1024 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
              MR_Word transform_hlds__size_prof__TypeInfo_1025_1025 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_168_168;
              MR_Word transform_hlds__size_prof__Var_169;
              MR_Word transform_hlds__size_prof__Var_171;
              MR_Word transform_hlds__size_prof__Var_274;
              MR_Word transform_hlds__size_prof__Var_275;
              MR_Word transform_hlds__size_prof__Var_276;
              MR_Word transform_hlds__size_prof__Var_277;
              MR_Word transform_hlds__size_prof__Var_278;
              MR_Word transform_hlds__size_prof__Var_279;
              MR_Word transform_hlds__size_prof__Var_280;
              MR_Word transform_hlds__size_prof__Var_281;
              MR_Word transform_hlds__size_prof__Var_282;
              MR_Word transform_hlds__size_prof__Var_283;
              MR_Word transform_hlds__size_prof__Var_273;
              MR_Word transform_hlds__size_prof__Var_284;
              MR_Word transform_hlds__size_prof__Var_285;
              MR_Word transform_hlds__size_prof__Var_287;
              MR_Word transform_hlds__size_prof__Var_288;
              MR_Word transform_hlds__size_prof__Var_289;
              MR_Word transform_hlds__size_prof__Var_290;
              MR_Word transform_hlds__size_prof__Var_291;
              MR_Word transform_hlds__size_prof__Var_292;
              MR_Word transform_hlds__size_prof__Var_293;
              MR_Word transform_hlds__size_prof__Var_294;
              MR_Word transform_hlds__size_prof__Var_286;

              {
                transform_hlds__size_prof__Var_169 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1024_1024, transform_hlds__size_prof__TypeInfo_1025_1025);
              }
              transform_hlds__size_prof__Var_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
              transform_hlds__size_prof__Var_274 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
              transform_hlds__size_prof__Var_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
              transform_hlds__size_prof__Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
              transform_hlds__size_prof__Var_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
              transform_hlds__size_prof__Var_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
              transform_hlds__size_prof__Var_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
              transform_hlds__size_prof__Var_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
              transform_hlds__size_prof__Var_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
              transform_hlds__size_prof__Var_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
              transform_hlds__size_prof__Var_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
              {
                transform_hlds__size_prof__STATE_VARIABLE_Info_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 0) = ((MR_Box) (transform_hlds__size_prof__Var_169));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 1) = ((MR_Box) (transform_hlds__size_prof__Var_274));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 2) = ((MR_Box) (transform_hlds__size_prof__Var_275));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 3) = ((MR_Box) (transform_hlds__size_prof__Var_276));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 4) = ((MR_Box) (transform_hlds__size_prof__Var_277));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 5) = ((MR_Box) (transform_hlds__size_prof__Var_278));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 6) = ((MR_Box) (transform_hlds__size_prof__Var_279));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 7) = ((MR_Box) (transform_hlds__size_prof__Var_280));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 8) = ((MR_Box) (transform_hlds__size_prof__Var_281));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 9) = ((MR_Box) (transform_hlds__size_prof__Var_282));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, 10) = ((MR_Box) (transform_hlds__size_prof__Var_283));
              }
              {
                transform_hlds__size_prof__Var_171 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1025_1025, transform_hlds__size_prof__TypeCtorInfo_1024_1024);
              }
              transform_hlds__size_prof__Var_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 0)));
              transform_hlds__size_prof__Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 1)));
              transform_hlds__size_prof__Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 2)));
              transform_hlds__size_prof__Var_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 3)));
              transform_hlds__size_prof__Var_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 4)));
              transform_hlds__size_prof__Var_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 5)));
              transform_hlds__size_prof__Var_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 6)));
              transform_hlds__size_prof__Var_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 7)));
              transform_hlds__size_prof__Var_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 8)));
              transform_hlds__size_prof__Var_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 9)));
              transform_hlds__size_prof__Var_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_168_168, (MR_Integer) 10)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_284));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_285));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_171));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_287));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_288));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__Var_289));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_290));
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_291));
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_292));
                MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_293));
                MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_294));
              }
              transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
            }
            break;
          case (MR_Integer) 1:
            {
              transform_hlds__size_prof__GoalExpr_22 = transform_hlds__size_prof__GoalExpr0_8;
              *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = transform_hlds__size_prof__STATE_VARIABLE_Info_0_95;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__size_prof__ConjType_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__size_prof__Goals0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__size_prof__Goals_55;

              switch (transform_hlds__size_prof__ConjType_53) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word transform_hlds__size_prof__TypeCtorInfo_1026_1026;
                    MR_Word transform_hlds__size_prof__TypeInfo_1027_1027;
                    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
                    MR_Word transform_hlds__size_prof__TypeInfoMap0_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
                    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
                    MR_Word transform_hlds__size_prof__TypeCtorMap0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
                    MR_Word transform_hlds__size_prof__KnownSizeMap0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_158_158;
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_161_161;
                    MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_162_162;
                    MR_Word transform_hlds__size_prof__Var_163;
                    MR_Word transform_hlds__size_prof__Var_165;
                    MR_Word transform_hlds__size_prof__Var_345;
                    MR_Word transform_hlds__size_prof__Var_347;
                    MR_Word transform_hlds__size_prof__Var_350;
                    MR_Word transform_hlds__size_prof__Var_351;
                    MR_Word transform_hlds__size_prof__Var_352;
                    MR_Word transform_hlds__size_prof__Var_353;
                    MR_Word transform_hlds__size_prof__Var_354;
                    MR_Word transform_hlds__size_prof__Var_355;
                    MR_Word transform_hlds__size_prof__Var_356;
                    MR_Word transform_hlds__size_prof__Var_358;
                    MR_Word transform_hlds__size_prof__Var_360;
                    MR_Word transform_hlds__size_prof__Var_361;
                    MR_Word transform_hlds__size_prof__Var_362;
                    MR_Word transform_hlds__size_prof__Var_363;
                    MR_Word transform_hlds__size_prof__Var_364;
                    MR_Word transform_hlds__size_prof__Var_365;
                    MR_Word transform_hlds__size_prof__Var_366;
                    MR_Word transform_hlds__size_prof__Var_389;
                    MR_Word transform_hlds__size_prof__Var_390;
                    MR_Word transform_hlds__size_prof__Var_392;
                    MR_Word transform_hlds__size_prof__Var_393;
                    MR_Word transform_hlds__size_prof__Var_395;
                    MR_Word transform_hlds__size_prof__Var_396;
                    MR_Word transform_hlds__size_prof__Var_397;
                    MR_Word transform_hlds__size_prof__Var_398;
                    MR_Word transform_hlds__size_prof__Var_399;
                    MR_Word transform_hlds__size_prof__Var_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
                    MR_Word transform_hlds__size_prof__Var_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
                    MR_Word transform_hlds__size_prof__Var_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
                    MR_Word transform_hlds__size_prof__Var_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
                    MR_Word transform_hlds__size_prof__Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
                    MR_Word transform_hlds__size_prof__Var_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
                    MR_Word transform_hlds__size_prof__Var_346;
                    MR_Word transform_hlds__size_prof__Var_348;
                    MR_Word transform_hlds__size_prof__Var_349;
                    MR_Word transform_hlds__size_prof__Var_379;
                    MR_Word transform_hlds__size_prof__Var_380;
                    MR_Word transform_hlds__size_prof__Var_381;
                    MR_Word transform_hlds__size_prof__Var_382;
                    MR_Word transform_hlds__size_prof__Var_383;
                    MR_Word transform_hlds__size_prof__Var_384;
                    MR_Word transform_hlds__size_prof__Var_385;
                    MR_Word transform_hlds__size_prof__Var_386;
                    MR_Word transform_hlds__size_prof__Var_387;
                    MR_Word transform_hlds__size_prof__Var_388;
                    MR_Word transform_hlds__size_prof__Var_378;
                    MR_Word transform_hlds__size_prof__Var_391;
                    MR_Word transform_hlds__size_prof__Var_394;

                    {
                      transform_hlds__size_prof__size_prof_process_par_conj_8_p_0(transform_hlds__size_prof__Goals0_54, &transform_hlds__size_prof__Goals_55, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, transform_hlds__size_prof__TargetTypeInfoMap0_56, transform_hlds__size_prof__TypeInfoMap0_57, transform_hlds__size_prof__TypeCtorMap0_59, transform_hlds__size_prof__KnownSizeMap0_60);
                    }
                    transform_hlds__size_prof__Var_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 0)));
                    transform_hlds__size_prof__Var_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 1)));
                    transform_hlds__size_prof__Var_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 2)));
                    transform_hlds__size_prof__Var_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 3)));
                    transform_hlds__size_prof__Var_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 4)));
                    transform_hlds__size_prof__Var_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 5)));
                    transform_hlds__size_prof__Var_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 6)));
                    transform_hlds__size_prof__Var_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 7)));
                    transform_hlds__size_prof__Var_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 8)));
                    transform_hlds__size_prof__Var_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 9)));
                    transform_hlds__size_prof__Var_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_158_158, (MR_Integer) 10)));
                    transform_hlds__size_prof__Var_356 = transform_hlds__size_prof__Var_345;
                    transform_hlds__size_prof__Var_358 = transform_hlds__size_prof__Var_347;
                    transform_hlds__size_prof__Var_360 = transform_hlds__size_prof__TargetTypeInfoMap0_56;
                    transform_hlds__size_prof__Var_361 = transform_hlds__size_prof__Var_350;
                    transform_hlds__size_prof__Var_362 = transform_hlds__size_prof__Var_351;
                    transform_hlds__size_prof__Var_363 = transform_hlds__size_prof__Var_352;
                    transform_hlds__size_prof__Var_364 = transform_hlds__size_prof__Var_353;
                    transform_hlds__size_prof__Var_365 = transform_hlds__size_prof__Var_354;
                    transform_hlds__size_prof__Var_366 = transform_hlds__size_prof__Var_355;
                    {
                      transform_hlds__size_prof__STATE_VARIABLE_Info_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 0) = ((MR_Box) (transform_hlds__size_prof__Var_356));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap0_57));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 2) = ((MR_Box) (transform_hlds__size_prof__Var_358));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_58));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 4) = ((MR_Box) (transform_hlds__size_prof__Var_360));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 5) = ((MR_Box) (transform_hlds__size_prof__Var_361));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 6) = ((MR_Box) (transform_hlds__size_prof__Var_362));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 7) = ((MR_Box) (transform_hlds__size_prof__Var_363));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 8) = ((MR_Box) (transform_hlds__size_prof__Var_364));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 9) = ((MR_Box) (transform_hlds__size_prof__Var_365));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, 10) = ((MR_Box) (transform_hlds__size_prof__Var_366));
                    }
                    transform_hlds__size_prof__TypeCtorInfo_1026_1026 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                    transform_hlds__size_prof__TypeInfo_1027_1027 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
                    {
                      transform_hlds__size_prof__Var_163 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1026_1026, transform_hlds__size_prof__TypeInfo_1027_1027);
                    }
                    transform_hlds__size_prof__Var_378 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 0)));
                    transform_hlds__size_prof__Var_379 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 1)));
                    transform_hlds__size_prof__Var_380 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 2)));
                    transform_hlds__size_prof__Var_381 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 3)));
                    transform_hlds__size_prof__Var_382 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 4)));
                    transform_hlds__size_prof__Var_383 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 5)));
                    transform_hlds__size_prof__Var_384 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 6)));
                    transform_hlds__size_prof__Var_385 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 7)));
                    transform_hlds__size_prof__Var_386 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 8)));
                    transform_hlds__size_prof__Var_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 9)));
                    transform_hlds__size_prof__Var_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_161_161, (MR_Integer) 10)));
                    {
                      transform_hlds__size_prof__STATE_VARIABLE_Info_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 0) = ((MR_Box) (transform_hlds__size_prof__Var_163));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 1) = ((MR_Box) (transform_hlds__size_prof__Var_379));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 2) = ((MR_Box) (transform_hlds__size_prof__Var_380));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 3) = ((MR_Box) (transform_hlds__size_prof__Var_381));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 4) = ((MR_Box) (transform_hlds__size_prof__Var_382));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 5) = ((MR_Box) (transform_hlds__size_prof__Var_383));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 6) = ((MR_Box) (transform_hlds__size_prof__Var_384));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 7) = ((MR_Box) (transform_hlds__size_prof__Var_385));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 8) = ((MR_Box) (transform_hlds__size_prof__Var_386));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 9) = ((MR_Box) (transform_hlds__size_prof__Var_387));
                      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, 10) = ((MR_Box) (transform_hlds__size_prof__Var_388));
                    }
                    {
                      transform_hlds__size_prof__Var_165 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1027_1027, transform_hlds__size_prof__TypeCtorInfo_1026_1026);
                    }
                    transform_hlds__size_prof__Var_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 0)));
                    transform_hlds__size_prof__Var_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 1)));
                    transform_hlds__size_prof__Var_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 2)));
                    transform_hlds__size_prof__Var_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 3)));
                    transform_hlds__size_prof__Var_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 4)));
                    transform_hlds__size_prof__Var_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 5)));
                    transform_hlds__size_prof__Var_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 6)));
                    transform_hlds__size_prof__Var_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 7)));
                    transform_hlds__size_prof__Var_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 8)));
                    transform_hlds__size_prof__Var_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 9)));
                    transform_hlds__size_prof__Var_399 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_162_162, (MR_Integer) 10)));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                      *transform_hlds__size_prof__STATE_VARIABLE_Info_96 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__Var_389));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__Var_390));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__size_prof__Var_165));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__size_prof__Var_392));
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__size_prof__Var_393));
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_60));
                      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__size_prof__Var_395));
                      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__size_prof__Var_396));
                      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__size_prof__Var_397));
                      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__size_prof__Var_398));
                      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (transform_hlds__size_prof__Var_399));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    transform_hlds__size_prof__size_prof_process_conj_4_p_0(transform_hlds__size_prof__Goals0_54, &transform_hlds__size_prof__Goals_55, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
                  }
                  break;
              }
              {
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__ConjType_53));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__Goals_55));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__size_prof__Disjuncts0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__size_prof__Disjuncts_73;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_143_143;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_144_144;

              if ((transform_hlds__size_prof__Disjuncts0_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word transform_hlds__size_prof__TypeCtorInfo_1032_1032 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
                  MR_Word transform_hlds__size_prof__TypeInfo_1033_1033 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
                  MR_Word transform_hlds__size_prof__TypeCtorInfo_1034_1034;
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_129_129;
                  MR_Word transform_hlds__size_prof__Var_130;
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_131_131;
                  MR_Word transform_hlds__size_prof__Var_132;
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_133_133;
                  MR_Word transform_hlds__size_prof__Var_134;
                  MR_Word transform_hlds__size_prof__Var_136;
                  MR_Word transform_hlds__size_prof__Var_619;
                  MR_Word transform_hlds__size_prof__Var_621;
                  MR_Word transform_hlds__size_prof__Var_622;
                  MR_Word transform_hlds__size_prof__Var_623;
                  MR_Word transform_hlds__size_prof__Var_624;
                  MR_Word transform_hlds__size_prof__Var_625;
                  MR_Word transform_hlds__size_prof__Var_626;
                  MR_Word transform_hlds__size_prof__Var_627;
                  MR_Word transform_hlds__size_prof__Var_628;
                  MR_Word transform_hlds__size_prof__Var_629;
                  MR_Word transform_hlds__size_prof__Var_620;
                  MR_Word transform_hlds__size_prof__Var_630;
                  MR_Word transform_hlds__size_prof__Var_631;
                  MR_Word transform_hlds__size_prof__Var_633;
                  MR_Word transform_hlds__size_prof__Var_634;
                  MR_Word transform_hlds__size_prof__Var_635;
                  MR_Word transform_hlds__size_prof__Var_636;
                  MR_Word transform_hlds__size_prof__Var_637;
                  MR_Word transform_hlds__size_prof__Var_638;
                  MR_Word transform_hlds__size_prof__Var_639;
                  MR_Word transform_hlds__size_prof__Var_640;
                  MR_Word transform_hlds__size_prof__Var_632;
                  MR_Word transform_hlds__size_prof__Var_641;
                  MR_Word transform_hlds__size_prof__Var_643;
                  MR_Word transform_hlds__size_prof__Var_644;
                  MR_Word transform_hlds__size_prof__Var_645;
                  MR_Word transform_hlds__size_prof__Var_646;
                  MR_Word transform_hlds__size_prof__Var_647;
                  MR_Word transform_hlds__size_prof__Var_648;
                  MR_Word transform_hlds__size_prof__Var_649;
                  MR_Word transform_hlds__size_prof__Var_650;
                  MR_Word transform_hlds__size_prof__Var_651;
                  MR_Word transform_hlds__size_prof__Var_642;
                  MR_Word transform_hlds__size_prof__Var_652;
                  MR_Word transform_hlds__size_prof__Var_653;
                  MR_Word transform_hlds__size_prof__Var_655;
                  MR_Word transform_hlds__size_prof__Var_656;
                  MR_Word transform_hlds__size_prof__Var_657;
                  MR_Word transform_hlds__size_prof__Var_658;
                  MR_Word transform_hlds__size_prof__Var_659;
                  MR_Word transform_hlds__size_prof__Var_660;
                  MR_Word transform_hlds__size_prof__Var_661;
                  MR_Word transform_hlds__size_prof__Var_662;
                  MR_Word transform_hlds__size_prof__Var_654;

                  {
                    transform_hlds__size_prof__Var_130 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1032_1032, transform_hlds__size_prof__TypeInfo_1033_1033);
                  }
                  transform_hlds__size_prof__Var_619 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_620 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_621 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_622 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_623 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_624 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_625 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_626 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_627 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_628 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_629 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 0) = ((MR_Box) (transform_hlds__size_prof__Var_619));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 1) = ((MR_Box) (transform_hlds__size_prof__Var_130));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 2) = ((MR_Box) (transform_hlds__size_prof__Var_621));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 3) = ((MR_Box) (transform_hlds__size_prof__Var_622));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 4) = ((MR_Box) (transform_hlds__size_prof__Var_623));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 5) = ((MR_Box) (transform_hlds__size_prof__Var_624));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 6) = ((MR_Box) (transform_hlds__size_prof__Var_625));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 7) = ((MR_Box) (transform_hlds__size_prof__Var_626));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 8) = ((MR_Box) (transform_hlds__size_prof__Var_627));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 9) = ((MR_Box) (transform_hlds__size_prof__Var_628));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, 10) = ((MR_Box) (transform_hlds__size_prof__Var_629));
                  }
                  transform_hlds__size_prof__TypeCtorInfo_1034_1034 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                  {
                    transform_hlds__size_prof__Var_132 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1033_1033, transform_hlds__size_prof__TypeCtorInfo_1034_1034);
                  }
                  transform_hlds__size_prof__Var_630 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_631 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_632 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_633 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_634 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_635 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_636 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_637 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_638 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_639 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_640 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_129_129, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 0) = ((MR_Box) (transform_hlds__size_prof__Var_630));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 1) = ((MR_Box) (transform_hlds__size_prof__Var_631));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 2) = ((MR_Box) (transform_hlds__size_prof__Var_132));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 3) = ((MR_Box) (transform_hlds__size_prof__Var_633));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 4) = ((MR_Box) (transform_hlds__size_prof__Var_634));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 5) = ((MR_Box) (transform_hlds__size_prof__Var_635));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 6) = ((MR_Box) (transform_hlds__size_prof__Var_636));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 7) = ((MR_Box) (transform_hlds__size_prof__Var_637));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 8) = ((MR_Box) (transform_hlds__size_prof__Var_638));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 9) = ((MR_Box) (transform_hlds__size_prof__Var_639));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, 10) = ((MR_Box) (transform_hlds__size_prof__Var_640));
                  }
                  {
                    transform_hlds__size_prof__Var_134 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1032_1032, transform_hlds__size_prof__TypeInfo_1033_1033);
                  }
                  transform_hlds__size_prof__Var_641 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_642 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_643 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_644 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_645 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_646 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_647 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_648 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_649 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_650 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_651 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_131_131, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 0) = ((MR_Box) (transform_hlds__size_prof__Var_641));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 1) = ((MR_Box) (transform_hlds__size_prof__Var_134));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 2) = ((MR_Box) (transform_hlds__size_prof__Var_643));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 3) = ((MR_Box) (transform_hlds__size_prof__Var_644));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 4) = ((MR_Box) (transform_hlds__size_prof__Var_645));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 5) = ((MR_Box) (transform_hlds__size_prof__Var_646));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 6) = ((MR_Box) (transform_hlds__size_prof__Var_647));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 7) = ((MR_Box) (transform_hlds__size_prof__Var_648));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 8) = ((MR_Box) (transform_hlds__size_prof__Var_649));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 9) = ((MR_Box) (transform_hlds__size_prof__Var_650));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, 10) = ((MR_Box) (transform_hlds__size_prof__Var_651));
                  }
                  {
                    transform_hlds__size_prof__Var_136 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1033_1033, transform_hlds__size_prof__TypeCtorInfo_1034_1034);
                  }
                  transform_hlds__size_prof__Var_652 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_653 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_654 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_655 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_656 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_657 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_658 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_659 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_660 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_661 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_662 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_133_133, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 0) = ((MR_Box) (transform_hlds__size_prof__Var_652));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 1) = ((MR_Box) (transform_hlds__size_prof__Var_653));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 2) = ((MR_Box) (transform_hlds__size_prof__Var_136));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 3) = ((MR_Box) (transform_hlds__size_prof__Var_655));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 4) = ((MR_Box) (transform_hlds__size_prof__Var_656));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 5) = ((MR_Box) (transform_hlds__size_prof__Var_657));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 6) = ((MR_Box) (transform_hlds__size_prof__Var_658));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 7) = ((MR_Box) (transform_hlds__size_prof__Var_659));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 8) = ((MR_Box) (transform_hlds__size_prof__Var_660));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 9) = ((MR_Box) (transform_hlds__size_prof__Var_661));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 10) = ((MR_Box) (transform_hlds__size_prof__Var_662));
                  }
                  transform_hlds__size_prof__Disjuncts_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  MR_Word transform_hlds__size_prof__TypeCtorInfo_1030_1030;
                  MR_Word transform_hlds__size_prof__TypeInfo_1031_1031;
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_137_137;
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_138_138;
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_139_139;
                  MR_Word transform_hlds__size_prof__Var_140;
                  MR_Word transform_hlds__size_prof__Var_142;
                  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
                  MR_Word transform_hlds__size_prof__TypeInfoMap0_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
                  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
                  MR_Word transform_hlds__size_prof__TypeCtorMap0_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
                  MR_Word transform_hlds__size_prof__KnownSizeMap0_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
                  MR_Word transform_hlds__size_prof__First0_206 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts0_72, (MR_Integer) 0)));
                  MR_Word transform_hlds__size_prof__Later0_207 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts0_72, (MR_Integer) 1)));
                  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
                  MR_Word transform_hlds__size_prof__First_209;
                  MR_Word transform_hlds__size_prof__Later_210;
                  MR_Word transform_hlds__size_prof__TypeInfoMap_211;
                  MR_Word transform_hlds__size_prof__KnownSizeMap_212;
                  MR_Word transform_hlds__size_prof__Var_597;
                  MR_Word transform_hlds__size_prof__Var_598;
                  MR_Word transform_hlds__size_prof__Var_600;
                  MR_Word transform_hlds__size_prof__Var_601;
                  MR_Word transform_hlds__size_prof__Var_603;
                  MR_Word transform_hlds__size_prof__Var_604;
                  MR_Word transform_hlds__size_prof__Var_605;
                  MR_Word transform_hlds__size_prof__Var_606;
                  MR_Word transform_hlds__size_prof__Var_607;
                  MR_Word transform_hlds__size_prof__Var_520 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
                  MR_Word transform_hlds__size_prof__Var_521 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
                  MR_Word transform_hlds__size_prof__Var_522 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
                  MR_Word transform_hlds__size_prof__Var_523 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
                  MR_Word transform_hlds__size_prof__Var_524 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
                  MR_Word transform_hlds__size_prof__Var_575;
                  MR_Word transform_hlds__size_prof__Var_577;
                  MR_Word transform_hlds__size_prof__Var_578;
                  MR_Word transform_hlds__size_prof__Var_579;
                  MR_Word transform_hlds__size_prof__Var_580;
                  MR_Word transform_hlds__size_prof__Var_581;
                  MR_Word transform_hlds__size_prof__Var_582;
                  MR_Word transform_hlds__size_prof__Var_583;
                  MR_Word transform_hlds__size_prof__Var_584;
                  MR_Word transform_hlds__size_prof__Var_585;
                  MR_Word transform_hlds__size_prof__Var_576;
                  MR_Word transform_hlds__size_prof__Var_587;
                  MR_Word transform_hlds__size_prof__Var_588;
                  MR_Word transform_hlds__size_prof__Var_589;
                  MR_Word transform_hlds__size_prof__Var_590;
                  MR_Word transform_hlds__size_prof__Var_591;
                  MR_Word transform_hlds__size_prof__Var_592;
                  MR_Word transform_hlds__size_prof__Var_593;
                  MR_Word transform_hlds__size_prof__Var_594;
                  MR_Word transform_hlds__size_prof__Var_595;
                  MR_Word transform_hlds__size_prof__Var_596;
                  MR_Word transform_hlds__size_prof__Var_586;
                  MR_Word transform_hlds__size_prof__Var_599;
                  MR_Word transform_hlds__size_prof__Var_602;

                  {
                    transform_hlds__size_prof__size_prof_process_disj_14_p_0(transform_hlds__size_prof__First0_206, &transform_hlds__size_prof__First_209, transform_hlds__size_prof__Later0_207, &transform_hlds__size_prof__Later_210, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, transform_hlds__size_prof__TargetTypeInfoMap0_201, transform_hlds__size_prof__TypeInfoMap0_202, transform_hlds__size_prof__RevTypeInfoMap0_203, transform_hlds__size_prof__TypeCtorMap0_204, transform_hlds__size_prof__RevTypeCtorMap0_208, &transform_hlds__size_prof__TypeInfoMap_211, transform_hlds__size_prof__KnownSizeMap0_205, &transform_hlds__size_prof__KnownSizeMap_212);
                  }
                  transform_hlds__size_prof__Var_575 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_576 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_577 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_578 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_579 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_580 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_581 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_582 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_583 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_584 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_585 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_137_137, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 0) = ((MR_Box) (transform_hlds__size_prof__Var_575));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_211));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 2) = ((MR_Box) (transform_hlds__size_prof__Var_577));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 3) = ((MR_Box) (transform_hlds__size_prof__Var_578));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 4) = ((MR_Box) (transform_hlds__size_prof__Var_579));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 5) = ((MR_Box) (transform_hlds__size_prof__Var_580));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 6) = ((MR_Box) (transform_hlds__size_prof__Var_581));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 7) = ((MR_Box) (transform_hlds__size_prof__Var_582));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 8) = ((MR_Box) (transform_hlds__size_prof__Var_583));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 9) = ((MR_Box) (transform_hlds__size_prof__Var_584));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, 10) = ((MR_Box) (transform_hlds__size_prof__Var_585));
                  }
                  transform_hlds__size_prof__TypeCtorInfo_1030_1030 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                  transform_hlds__size_prof__TypeInfo_1031_1031 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
                  {
                    transform_hlds__size_prof__Var_140 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1030_1030, transform_hlds__size_prof__TypeInfo_1031_1031);
                  }
                  transform_hlds__size_prof__Var_586 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_587 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_588 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_589 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_590 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_591 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_592 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_593 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_594 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_595 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_596 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_138_138, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 0) = ((MR_Box) (transform_hlds__size_prof__Var_140));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 1) = ((MR_Box) (transform_hlds__size_prof__Var_587));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 2) = ((MR_Box) (transform_hlds__size_prof__Var_588));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 3) = ((MR_Box) (transform_hlds__size_prof__Var_589));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 4) = ((MR_Box) (transform_hlds__size_prof__Var_590));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 5) = ((MR_Box) (transform_hlds__size_prof__Var_591));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 6) = ((MR_Box) (transform_hlds__size_prof__Var_592));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 7) = ((MR_Box) (transform_hlds__size_prof__Var_593));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 8) = ((MR_Box) (transform_hlds__size_prof__Var_594));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 9) = ((MR_Box) (transform_hlds__size_prof__Var_595));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, 10) = ((MR_Box) (transform_hlds__size_prof__Var_596));
                  }
                  {
                    transform_hlds__size_prof__Var_142 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1031_1031, transform_hlds__size_prof__TypeCtorInfo_1030_1030);
                  }
                  transform_hlds__size_prof__Var_597 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_598 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_599 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_600 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_601 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_602 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_603 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_604 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_605 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_606 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_607 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_139_139, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 0) = ((MR_Box) (transform_hlds__size_prof__Var_597));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 1) = ((MR_Box) (transform_hlds__size_prof__Var_598));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 2) = ((MR_Box) (transform_hlds__size_prof__Var_142));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 3) = ((MR_Box) (transform_hlds__size_prof__Var_600));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 4) = ((MR_Box) (transform_hlds__size_prof__Var_601));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_212));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 6) = ((MR_Box) (transform_hlds__size_prof__Var_603));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 7) = ((MR_Box) (transform_hlds__size_prof__Var_604));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 8) = ((MR_Box) (transform_hlds__size_prof__Var_605));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 9) = ((MR_Box) (transform_hlds__size_prof__Var_606));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, 10) = ((MR_Box) (transform_hlds__size_prof__Var_607));
                  }
                  {
                    transform_hlds__size_prof__Disjuncts_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts_73, 0) = ((MR_Box) (transform_hlds__size_prof__First_209));
                    MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Disjuncts_73, 1) = ((MR_Box) (transform_hlds__size_prof__Later_210));
                  }
                }
              {
                transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_143_143, &transform_hlds__size_prof__STATE_VARIABLE_Info_144_144);
              }
              {
                transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_144_144, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
              }
              {
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Disjuncts_73));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__size_prof__SwitchVar_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__size_prof__CanFail_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__size_prof__Cases0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__size_prof__Cases_71;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_155_155;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_156_156;

              if ((transform_hlds__size_prof__Cases0_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "empty switch");
                    return;
                  }
                }
              else
                {
                  MR_Word transform_hlds__size_prof__TypeCtorInfo_1028_1028;
                  MR_Word transform_hlds__size_prof__TypeInfo_1029_1029;
                  MR_Word transform_hlds__size_prof__First0_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases0_63, (MR_Integer) 0)));
                  MR_Word transform_hlds__size_prof__Later0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases0_63, (MR_Integer) 1)));
                  MR_Word transform_hlds__size_prof__RevTypeCtorMap0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
                  MR_Word transform_hlds__size_prof__First_67;
                  MR_Word transform_hlds__size_prof__Later_68;
                  MR_Word transform_hlds__size_prof__TypeInfoMap_69;
                  MR_Word transform_hlds__size_prof__KnownSizeMap_70;
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_149_149;
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_150_150;
                  MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_151_151;
                  MR_Word transform_hlds__size_prof__Var_152;
                  MR_Word transform_hlds__size_prof__Var_154;
                  MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
                  MR_Word transform_hlds__size_prof__TypeInfoMap0_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
                  MR_Word transform_hlds__size_prof__RevTypeInfoMap0_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
                  MR_Word transform_hlds__size_prof__TypeCtorMap0_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
                  MR_Word transform_hlds__size_prof__KnownSizeMap0_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
                  MR_Word transform_hlds__size_prof__Var_493;
                  MR_Word transform_hlds__size_prof__Var_494;
                  MR_Word transform_hlds__size_prof__Var_496;
                  MR_Word transform_hlds__size_prof__Var_497;
                  MR_Word transform_hlds__size_prof__Var_499;
                  MR_Word transform_hlds__size_prof__Var_500;
                  MR_Word transform_hlds__size_prof__Var_501;
                  MR_Word transform_hlds__size_prof__Var_502;
                  MR_Word transform_hlds__size_prof__Var_503;
                  MR_Word transform_hlds__size_prof__Var_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
                  MR_Word transform_hlds__size_prof__Var_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
                  MR_Word transform_hlds__size_prof__Var_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
                  MR_Word transform_hlds__size_prof__Var_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
                  MR_Word transform_hlds__size_prof__Var_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
                  MR_Word transform_hlds__size_prof__Var_471;
                  MR_Word transform_hlds__size_prof__Var_473;
                  MR_Word transform_hlds__size_prof__Var_474;
                  MR_Word transform_hlds__size_prof__Var_475;
                  MR_Word transform_hlds__size_prof__Var_476;
                  MR_Word transform_hlds__size_prof__Var_477;
                  MR_Word transform_hlds__size_prof__Var_478;
                  MR_Word transform_hlds__size_prof__Var_479;
                  MR_Word transform_hlds__size_prof__Var_480;
                  MR_Word transform_hlds__size_prof__Var_481;
                  MR_Word transform_hlds__size_prof__Var_472;
                  MR_Word transform_hlds__size_prof__Var_483;
                  MR_Word transform_hlds__size_prof__Var_484;
                  MR_Word transform_hlds__size_prof__Var_485;
                  MR_Word transform_hlds__size_prof__Var_486;
                  MR_Word transform_hlds__size_prof__Var_487;
                  MR_Word transform_hlds__size_prof__Var_488;
                  MR_Word transform_hlds__size_prof__Var_489;
                  MR_Word transform_hlds__size_prof__Var_490;
                  MR_Word transform_hlds__size_prof__Var_491;
                  MR_Word transform_hlds__size_prof__Var_492;
                  MR_Word transform_hlds__size_prof__Var_482;
                  MR_Word transform_hlds__size_prof__Var_495;
                  MR_Word transform_hlds__size_prof__Var_498;

                  {
                    transform_hlds__size_prof__size_prof_process_switch_14_p_0(transform_hlds__size_prof__First0_64, &transform_hlds__size_prof__First_67, transform_hlds__size_prof__Later0_65, &transform_hlds__size_prof__Later_68, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, &transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, transform_hlds__size_prof__TargetTypeInfoMap0_186, transform_hlds__size_prof__TypeInfoMap0_187, transform_hlds__size_prof__RevTypeInfoMap0_188, transform_hlds__size_prof__TypeCtorMap0_189, transform_hlds__size_prof__RevTypeCtorMap0_66, &transform_hlds__size_prof__TypeInfoMap_69, transform_hlds__size_prof__KnownSizeMap0_190, &transform_hlds__size_prof__KnownSizeMap_70);
                  }
                  transform_hlds__size_prof__Var_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_149_149, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 0) = ((MR_Box) (transform_hlds__size_prof__Var_471));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_69));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 2) = ((MR_Box) (transform_hlds__size_prof__Var_473));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 3) = ((MR_Box) (transform_hlds__size_prof__Var_474));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 4) = ((MR_Box) (transform_hlds__size_prof__Var_475));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 5) = ((MR_Box) (transform_hlds__size_prof__Var_476));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 6) = ((MR_Box) (transform_hlds__size_prof__Var_477));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 7) = ((MR_Box) (transform_hlds__size_prof__Var_478));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 8) = ((MR_Box) (transform_hlds__size_prof__Var_479));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 9) = ((MR_Box) (transform_hlds__size_prof__Var_480));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, 10) = ((MR_Box) (transform_hlds__size_prof__Var_481));
                  }
                  transform_hlds__size_prof__TypeCtorInfo_1028_1028 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
                  transform_hlds__size_prof__TypeInfo_1029_1029 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
                  {
                    transform_hlds__size_prof__Var_152 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1028_1028, transform_hlds__size_prof__TypeInfo_1029_1029);
                  }
                  transform_hlds__size_prof__Var_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_150_150, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 0) = ((MR_Box) (transform_hlds__size_prof__Var_152));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 1) = ((MR_Box) (transform_hlds__size_prof__Var_483));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 2) = ((MR_Box) (transform_hlds__size_prof__Var_484));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 3) = ((MR_Box) (transform_hlds__size_prof__Var_485));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 4) = ((MR_Box) (transform_hlds__size_prof__Var_486));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 5) = ((MR_Box) (transform_hlds__size_prof__Var_487));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 6) = ((MR_Box) (transform_hlds__size_prof__Var_488));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 7) = ((MR_Box) (transform_hlds__size_prof__Var_489));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 8) = ((MR_Box) (transform_hlds__size_prof__Var_490));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 9) = ((MR_Box) (transform_hlds__size_prof__Var_491));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, 10) = ((MR_Box) (transform_hlds__size_prof__Var_492));
                  }
                  {
                    transform_hlds__size_prof__Var_154 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_1029_1029, transform_hlds__size_prof__TypeCtorInfo_1028_1028);
                  }
                  transform_hlds__size_prof__Var_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 0)));
                  transform_hlds__size_prof__Var_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 2)));
                  transform_hlds__size_prof__Var_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 3)));
                  transform_hlds__size_prof__Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 4)));
                  transform_hlds__size_prof__Var_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 5)));
                  transform_hlds__size_prof__Var_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 6)));
                  transform_hlds__size_prof__Var_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 7)));
                  transform_hlds__size_prof__Var_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 8)));
                  transform_hlds__size_prof__Var_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 9)));
                  transform_hlds__size_prof__Var_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_151_151, (MR_Integer) 10)));
                  {
                    transform_hlds__size_prof__STATE_VARIABLE_Info_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 0) = ((MR_Box) (transform_hlds__size_prof__Var_493));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 1) = ((MR_Box) (transform_hlds__size_prof__Var_494));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 2) = ((MR_Box) (transform_hlds__size_prof__Var_154));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 3) = ((MR_Box) (transform_hlds__size_prof__Var_496));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 4) = ((MR_Box) (transform_hlds__size_prof__Var_497));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_70));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 6) = ((MR_Box) (transform_hlds__size_prof__Var_499));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 7) = ((MR_Box) (transform_hlds__size_prof__Var_500));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 8) = ((MR_Box) (transform_hlds__size_prof__Var_501));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 9) = ((MR_Box) (transform_hlds__size_prof__Var_502));
                    MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, 10) = ((MR_Box) (transform_hlds__size_prof__Var_503));
                  }
                  {
                    transform_hlds__size_prof__Cases_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases_71, 0) = ((MR_Box) (transform_hlds__size_prof__First_67));
                    MR_hl_field(MR_mktag(1), transform_hlds__size_prof__Cases_71, 1) = ((MR_Box) (transform_hlds__size_prof__Later_68));
                  }
                }
              {
                transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_155_155, &transform_hlds__size_prof__STATE_VARIABLE_Info_156_156);
              }
              {
                transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_156_156, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
              }
              {
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__SwitchVar_61));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__CanFail_62));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 3) = ((MR_Box) (transform_hlds__size_prof__Cases_71));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__size_prof__Reason0_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__size_prof__SubGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__size_prof__Reason_92;
              MR_Word transform_hlds__size_prof__SubGoal_93;
              MR_Word transform_hlds__size_prof__TermVar_91;
              MR_Word transform_hlds__size_prof__Var_100;

              transform_hlds__size_prof__succeeded = ((((MR_tag((MR_Word) transform_hlds__size_prof__Reason0_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (transform_hlds__size_prof__succeeded)
                {
                  transform_hlds__size_prof__TermVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 1)));
                  transform_hlds__size_prof__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason0_89, (MR_Integer) 2)));
                  transform_hlds__size_prof__succeeded = (transform_hlds__size_prof__Var_100 == (MR_Integer) 1);
                }
              if (transform_hlds__size_prof__succeeded)
                {
                  {
                    transform_hlds__size_prof__Reason_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 1) = ((MR_Box) (transform_hlds__size_prof__TermVar_91));
                    MR_hl_field(MR_mktag(3), transform_hlds__size_prof__Reason_92, 2) = ((MR_Box) ((MR_Integer) 3));
                  }
                }
              else
                transform_hlds__size_prof__Reason_92 = transform_hlds__size_prof__Reason0_89;
              {
                transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__SubGoal0_90, &transform_hlds__size_prof__SubGoal_93, transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
              }
              {
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Reason_92));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__SubGoal_93));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__size_prof__TypeCtorInfo_1035_1035 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
              MR_Word transform_hlds__size_prof__TypeInfo_1036_1036 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
              MR_Word transform_hlds__size_prof__Quant_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__size_prof__Cond0_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__size_prof__Then0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__size_prof__Else0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word transform_hlds__size_prof__Cond_78;
              MR_Word transform_hlds__size_prof__Then_79;
              MR_Word transform_hlds__size_prof__TargetTypeInfoMapThen_80;
              MR_Word transform_hlds__size_prof__TypeInfoMapThen_81;
              MR_Word transform_hlds__size_prof__KnownSizeMapThen_82;
              MR_Word transform_hlds__size_prof__ElseTargetTypeInfoMap_83;
              MR_Word transform_hlds__size_prof__Else_84;
              MR_Word transform_hlds__size_prof__TypeInfoMapElse_85;
              MR_Word transform_hlds__size_prof__KnownSizeMapElse_86;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_110_110;
              MR_Word transform_hlds__size_prof__Var_111;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_112_112;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_113_113;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_114_114;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_121_121;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_122_122;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_123_123;
              MR_Word transform_hlds__size_prof__Var_125;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_126_126;
              MR_Word transform_hlds__size_prof__STATE_VARIABLE_Info_127_127;
              MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
              MR_Word transform_hlds__size_prof__TypeInfoMap0_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
              MR_Word transform_hlds__size_prof__RevTypeInfoMap0_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
              MR_Word transform_hlds__size_prof__TypeCtorMap0_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
              MR_Word transform_hlds__size_prof__KnownSizeMap0_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
              MR_Word transform_hlds__size_prof__RevTypeCtorMap0_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
              MR_Word transform_hlds__size_prof__TypeInfoMap_243;
              MR_Word transform_hlds__size_prof__KnownSizeMap_244;
              MR_Word transform_hlds__size_prof__Var_781;
              MR_Word transform_hlds__size_prof__Var_782;
              MR_Word transform_hlds__size_prof__Var_783;
              MR_Word transform_hlds__size_prof__Var_784;
              MR_Word transform_hlds__size_prof__Var_785;
              MR_Word transform_hlds__size_prof__Var_790;
              MR_Word transform_hlds__size_prof__Var_792;
              MR_Word transform_hlds__size_prof__Var_793;
              MR_Word transform_hlds__size_prof__Var_794;
              MR_Word transform_hlds__size_prof__Var_795;
              MR_Word transform_hlds__size_prof__Var_796;
              MR_Word transform_hlds__size_prof__Var_798;
              MR_Word transform_hlds__size_prof__Var_801;
              MR_Word transform_hlds__size_prof__Var_803;
              MR_Word transform_hlds__size_prof__Var_804;
              MR_Word transform_hlds__size_prof__Var_805;
              MR_Word transform_hlds__size_prof__Var_806;
              MR_Word transform_hlds__size_prof__Var_807;
              MR_Word transform_hlds__size_prof__Var_809;
              MR_Word transform_hlds__size_prof__Var_811;
              MR_Word transform_hlds__size_prof__Var_812;
              MR_Word transform_hlds__size_prof__Var_814;
              MR_Word transform_hlds__size_prof__Var_815;
              MR_Word transform_hlds__size_prof__Var_816;
              MR_Word transform_hlds__size_prof__Var_817;
              MR_Word transform_hlds__size_prof__Var_818;
              MR_Word transform_hlds__size_prof__Var_819;
              MR_Word transform_hlds__size_prof__Var_820;
              MR_Word transform_hlds__size_prof__Var_822;
              MR_Word transform_hlds__size_prof__Var_823;
              MR_Word transform_hlds__size_prof__Var_825;
              MR_Word transform_hlds__size_prof__Var_826;
              MR_Word transform_hlds__size_prof__Var_827;
              MR_Word transform_hlds__size_prof__Var_828;
              MR_Word transform_hlds__size_prof__Var_829;
              MR_Word transform_hlds__size_prof__Var_873;
              MR_Word transform_hlds__size_prof__Var_874;
              MR_Word transform_hlds__size_prof__Var_875;
              MR_Word transform_hlds__size_prof__Var_876;
              MR_Word transform_hlds__size_prof__Var_878;
              MR_Word transform_hlds__size_prof__Var_879;
              MR_Word transform_hlds__size_prof__Var_880;
              MR_Word transform_hlds__size_prof__Var_881;
              MR_Word transform_hlds__size_prof__Var_882;
              MR_Word transform_hlds__size_prof__Var_668 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
              MR_Word transform_hlds__size_prof__Var_669 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
              MR_Word transform_hlds__size_prof__Var_670 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
              MR_Word transform_hlds__size_prof__Var_671 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
              MR_Word transform_hlds__size_prof__Var_672 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
              MR_Word transform_hlds__size_prof__Var_723;
              MR_Word transform_hlds__size_prof__Var_724;
              MR_Word transform_hlds__size_prof__Var_725;
              MR_Word transform_hlds__size_prof__Var_726;
              MR_Word transform_hlds__size_prof__Var_728;
              MR_Word transform_hlds__size_prof__Var_729;
              MR_Word transform_hlds__size_prof__Var_730;
              MR_Word transform_hlds__size_prof__Var_731;
              MR_Word transform_hlds__size_prof__Var_732;
              MR_Word transform_hlds__size_prof__Var_733;
              MR_Word transform_hlds__size_prof__Var_727;
              MR_Word transform_hlds__size_prof__Var_734;
              MR_Word transform_hlds__size_prof__Var_735;
              MR_Word transform_hlds__size_prof__Var_736;
              MR_Word transform_hlds__size_prof__Var_737;
              MR_Word transform_hlds__size_prof__Var_739;
              MR_Word transform_hlds__size_prof__Var_740;
              MR_Word transform_hlds__size_prof__Var_741;
              MR_Word transform_hlds__size_prof__Var_742;
              MR_Word transform_hlds__size_prof__Var_743;
              MR_Word transform_hlds__size_prof__Var_744;
              MR_Word transform_hlds__size_prof__Var_738;
              MR_Word transform_hlds__size_prof__Var_745;
              MR_Word transform_hlds__size_prof__Var_747;
              MR_Word transform_hlds__size_prof__Var_748;
              MR_Word transform_hlds__size_prof__Var_750;
              MR_Word transform_hlds__size_prof__Var_751;
              MR_Word transform_hlds__size_prof__Var_752;
              MR_Word transform_hlds__size_prof__Var_753;
              MR_Word transform_hlds__size_prof__Var_754;
              MR_Word transform_hlds__size_prof__Var_775;
              MR_Word transform_hlds__size_prof__Var_776;
              MR_Word transform_hlds__size_prof__Var_777;
              MR_Word transform_hlds__size_prof__Var_778;
              MR_Word transform_hlds__size_prof__Var_779;
              MR_Word transform_hlds__size_prof__Var_780;
              MR_Word transform_hlds__size_prof__Var_841;
              MR_Word transform_hlds__size_prof__Var_842;
              MR_Word transform_hlds__size_prof__Var_843;
              MR_Word transform_hlds__size_prof__Var_844;
              MR_Word transform_hlds__size_prof__Var_846;
              MR_Word transform_hlds__size_prof__Var_847;
              MR_Word transform_hlds__size_prof__Var_848;
              MR_Word transform_hlds__size_prof__Var_849;
              MR_Word transform_hlds__size_prof__Var_850;
              MR_Word transform_hlds__size_prof__Var_861;
              MR_Word transform_hlds__size_prof__Var_863;
              MR_Word transform_hlds__size_prof__Var_864;
              MR_Word transform_hlds__size_prof__Var_865;
              MR_Word transform_hlds__size_prof__Var_866;
              MR_Word transform_hlds__size_prof__Var_867;
              MR_Word transform_hlds__size_prof__Var_868;
              MR_Word transform_hlds__size_prof__Var_869;
              MR_Word transform_hlds__size_prof__Var_870;
              MR_Word transform_hlds__size_prof__Var_871;
              MR_Word transform_hlds__size_prof__Var_862;
              MR_Word transform_hlds__size_prof__Var_872;
              MR_Word transform_hlds__size_prof__Var_877;

              {
                transform_hlds__size_prof__Var_111 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_1035_1035, transform_hlds__size_prof__TypeInfo_1036_1036);
              }
              transform_hlds__size_prof__Var_723 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
              transform_hlds__size_prof__Var_724 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
              transform_hlds__size_prof__Var_725 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
              transform_hlds__size_prof__Var_726 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
              transform_hlds__size_prof__Var_727 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
              transform_hlds__size_prof__Var_728 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
              transform_hlds__size_prof__Var_729 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
              transform_hlds__size_prof__Var_730 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 7)));
              transform_hlds__size_prof__Var_731 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 8)));
              transform_hlds__size_prof__Var_732 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 9)));
              transform_hlds__size_prof__Var_733 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_0_95, (MR_Integer) 10)));
              {
                transform_hlds__size_prof__STATE_VARIABLE_Info_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 0) = ((MR_Box) (transform_hlds__size_prof__Var_723));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 1) = ((MR_Box) (transform_hlds__size_prof__Var_724));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 2) = ((MR_Box) (transform_hlds__size_prof__Var_725));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 3) = ((MR_Box) (transform_hlds__size_prof__Var_726));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 4) = ((MR_Box) (transform_hlds__size_prof__Var_111));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 5) = ((MR_Box) (transform_hlds__size_prof__Var_728));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 6) = ((MR_Box) (transform_hlds__size_prof__Var_729));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 7) = ((MR_Box) (transform_hlds__size_prof__Var_730));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 8) = ((MR_Box) (transform_hlds__size_prof__Var_731));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 9) = ((MR_Box) (transform_hlds__size_prof__Var_732));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, 10) = ((MR_Box) (transform_hlds__size_prof__Var_733));
              }
              {
                transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Cond0_75, &transform_hlds__size_prof__Cond_78, transform_hlds__size_prof__STATE_VARIABLE_Info_110_110, &transform_hlds__size_prof__STATE_VARIABLE_Info_112_112);
              }
              transform_hlds__size_prof__Var_734 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 0)));
              transform_hlds__size_prof__Var_735 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 1)));
              transform_hlds__size_prof__Var_736 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 2)));
              transform_hlds__size_prof__Var_737 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 3)));
              transform_hlds__size_prof__Var_738 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 4)));
              transform_hlds__size_prof__Var_739 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 5)));
              transform_hlds__size_prof__Var_740 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 6)));
              transform_hlds__size_prof__Var_741 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 7)));
              transform_hlds__size_prof__Var_742 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 8)));
              transform_hlds__size_prof__Var_743 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 9)));
              transform_hlds__size_prof__Var_744 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_112_112, (MR_Integer) 10)));
              {
                transform_hlds__size_prof__STATE_VARIABLE_Info_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 0) = ((MR_Box) (transform_hlds__size_prof__Var_734));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 1) = ((MR_Box) (transform_hlds__size_prof__Var_735));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 2) = ((MR_Box) (transform_hlds__size_prof__Var_736));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 3) = ((MR_Box) (transform_hlds__size_prof__Var_737));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap0_237));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 5) = ((MR_Box) (transform_hlds__size_prof__Var_739));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 6) = ((MR_Box) (transform_hlds__size_prof__Var_740));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 7) = ((MR_Box) (transform_hlds__size_prof__Var_741));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 8) = ((MR_Box) (transform_hlds__size_prof__Var_742));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 9) = ((MR_Box) (transform_hlds__size_prof__Var_743));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, 10) = ((MR_Box) (transform_hlds__size_prof__Var_744));
              }
              {
                transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Then0_76, &transform_hlds__size_prof__Then_79, transform_hlds__size_prof__STATE_VARIABLE_Info_113_113, &transform_hlds__size_prof__STATE_VARIABLE_Info_114_114);
              }
              transform_hlds__size_prof__Var_745 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 0)));
              transform_hlds__size_prof__TypeInfoMapThen_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 1)));
              transform_hlds__size_prof__Var_747 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 2)));
              transform_hlds__size_prof__Var_748 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 3)));
              transform_hlds__size_prof__TargetTypeInfoMapThen_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 4)));
              transform_hlds__size_prof__KnownSizeMapThen_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 5)));
              transform_hlds__size_prof__Var_750 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 6)));
              transform_hlds__size_prof__Var_751 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 7)));
              transform_hlds__size_prof__Var_752 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 8)));
              transform_hlds__size_prof__Var_753 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 9)));
              transform_hlds__size_prof__Var_754 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 10)));
              {
                mercury__map__union_4_p_1(transform_hlds__size_prof__TypeInfo_1036_1036, transform_hlds__size_prof__TypeCtorInfo_1035_1035, (MR_Word) &transform_hlds__size_prof_scalar_common_2[6], transform_hlds__size_prof__TargetTypeInfoMapThen_80, transform_hlds__size_prof__TargetTypeInfoMap0_237, &transform_hlds__size_prof__ElseTargetTypeInfoMap_83);
              }
              transform_hlds__size_prof__Var_775 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 0)));
              transform_hlds__size_prof__Var_776 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 1)));
              transform_hlds__size_prof__Var_777 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 2)));
              transform_hlds__size_prof__Var_778 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 3)));
              transform_hlds__size_prof__Var_779 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 4)));
              transform_hlds__size_prof__Var_780 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 5)));
              transform_hlds__size_prof__Var_781 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 6)));
              transform_hlds__size_prof__Var_782 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 7)));
              transform_hlds__size_prof__Var_783 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 8)));
              transform_hlds__size_prof__Var_784 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 9)));
              transform_hlds__size_prof__Var_785 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_114_114, (MR_Integer) 10)));
              transform_hlds__size_prof__Var_790 = transform_hlds__size_prof__ElseTargetTypeInfoMap_83;
              transform_hlds__size_prof__Var_792 = transform_hlds__size_prof__Var_781;
              transform_hlds__size_prof__Var_793 = transform_hlds__size_prof__Var_782;
              transform_hlds__size_prof__Var_794 = transform_hlds__size_prof__Var_783;
              transform_hlds__size_prof__Var_795 = transform_hlds__size_prof__Var_784;
              transform_hlds__size_prof__Var_796 = transform_hlds__size_prof__Var_785;
              transform_hlds__size_prof__Var_798 = transform_hlds__size_prof__TypeInfoMap0_238;
              transform_hlds__size_prof__Var_801 = transform_hlds__size_prof__Var_790;
              transform_hlds__size_prof__Var_803 = transform_hlds__size_prof__Var_792;
              transform_hlds__size_prof__Var_804 = transform_hlds__size_prof__Var_793;
              transform_hlds__size_prof__Var_805 = transform_hlds__size_prof__Var_794;
              transform_hlds__size_prof__Var_806 = transform_hlds__size_prof__Var_795;
              transform_hlds__size_prof__Var_807 = transform_hlds__size_prof__Var_796;
              transform_hlds__size_prof__Var_809 = transform_hlds__size_prof__Var_798;
              transform_hlds__size_prof__Var_811 = transform_hlds__size_prof__RevTypeInfoMap0_239;
              transform_hlds__size_prof__Var_812 = transform_hlds__size_prof__Var_801;
              transform_hlds__size_prof__Var_814 = transform_hlds__size_prof__Var_803;
              transform_hlds__size_prof__Var_815 = transform_hlds__size_prof__Var_804;
              transform_hlds__size_prof__Var_816 = transform_hlds__size_prof__Var_805;
              transform_hlds__size_prof__Var_817 = transform_hlds__size_prof__Var_806;
              transform_hlds__size_prof__Var_818 = transform_hlds__size_prof__Var_807;
              transform_hlds__size_prof__Var_819 = transform_hlds__size_prof__TypeCtorMap0_240;
              transform_hlds__size_prof__Var_820 = transform_hlds__size_prof__Var_809;
              transform_hlds__size_prof__Var_822 = transform_hlds__size_prof__Var_811;
              transform_hlds__size_prof__Var_823 = transform_hlds__size_prof__Var_812;
              transform_hlds__size_prof__Var_825 = transform_hlds__size_prof__Var_814;
              transform_hlds__size_prof__Var_826 = transform_hlds__size_prof__Var_815;
              transform_hlds__size_prof__Var_827 = transform_hlds__size_prof__Var_816;
              transform_hlds__size_prof__Var_828 = transform_hlds__size_prof__Var_817;
              transform_hlds__size_prof__Var_829 = transform_hlds__size_prof__Var_818;
              {
                transform_hlds__size_prof__STATE_VARIABLE_Info_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 0) = ((MR_Box) (transform_hlds__size_prof__Var_819));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 1) = ((MR_Box) (transform_hlds__size_prof__Var_820));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_242));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 3) = ((MR_Box) (transform_hlds__size_prof__Var_822));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 4) = ((MR_Box) (transform_hlds__size_prof__Var_823));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_241));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 6) = ((MR_Box) (transform_hlds__size_prof__Var_825));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 7) = ((MR_Box) (transform_hlds__size_prof__Var_826));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 8) = ((MR_Box) (transform_hlds__size_prof__Var_827));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 9) = ((MR_Box) (transform_hlds__size_prof__Var_828));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, 10) = ((MR_Box) (transform_hlds__size_prof__Var_829));
              }
              {
                transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Else0_77, &transform_hlds__size_prof__Else_84, transform_hlds__size_prof__STATE_VARIABLE_Info_121_121, &transform_hlds__size_prof__STATE_VARIABLE_Info_122_122);
              }
              transform_hlds__size_prof__Var_841 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 0)));
              transform_hlds__size_prof__TypeInfoMapElse_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 1)));
              transform_hlds__size_prof__Var_842 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 2)));
              transform_hlds__size_prof__Var_843 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 3)));
              transform_hlds__size_prof__Var_844 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 4)));
              transform_hlds__size_prof__KnownSizeMapElse_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 5)));
              transform_hlds__size_prof__Var_846 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 6)));
              transform_hlds__size_prof__Var_847 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 7)));
              transform_hlds__size_prof__Var_848 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 8)));
              transform_hlds__size_prof__Var_849 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 9)));
              transform_hlds__size_prof__Var_850 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 10)));
              {
                transform_hlds__size_prof__TypeInfoMap_243 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeCtorInfo_1035_1035, transform_hlds__size_prof__TypeInfo_1036_1036, transform_hlds__size_prof__TypeInfoMapThen_81, transform_hlds__size_prof__TypeInfoMapElse_85);
              }
              {
                transform_hlds__size_prof__KnownSizeMap_244 = mercury__map__common_subset_2_f_0(transform_hlds__size_prof__TypeInfo_1036_1036, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__size_prof__KnownSizeMapThen_82, transform_hlds__size_prof__KnownSizeMapElse_86);
              }
              transform_hlds__size_prof__Var_861 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 0)));
              transform_hlds__size_prof__Var_862 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 1)));
              transform_hlds__size_prof__Var_863 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 2)));
              transform_hlds__size_prof__Var_864 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 3)));
              transform_hlds__size_prof__Var_865 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 4)));
              transform_hlds__size_prof__Var_866 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 5)));
              transform_hlds__size_prof__Var_867 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 6)));
              transform_hlds__size_prof__Var_868 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 7)));
              transform_hlds__size_prof__Var_869 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 8)));
              transform_hlds__size_prof__Var_870 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 9)));
              transform_hlds__size_prof__Var_871 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_122_122, (MR_Integer) 10)));
              {
                transform_hlds__size_prof__STATE_VARIABLE_Info_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 0) = ((MR_Box) (transform_hlds__size_prof__Var_861));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap_243));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 2) = ((MR_Box) (transform_hlds__size_prof__Var_863));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 3) = ((MR_Box) (transform_hlds__size_prof__Var_864));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 4) = ((MR_Box) (transform_hlds__size_prof__Var_865));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 5) = ((MR_Box) (transform_hlds__size_prof__Var_866));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 6) = ((MR_Box) (transform_hlds__size_prof__Var_867));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 7) = ((MR_Box) (transform_hlds__size_prof__Var_868));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 8) = ((MR_Box) (transform_hlds__size_prof__Var_869));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 9) = ((MR_Box) (transform_hlds__size_prof__Var_870));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, 10) = ((MR_Box) (transform_hlds__size_prof__Var_871));
              }
              {
                transform_hlds__size_prof__Var_125 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__size_prof__TypeInfo_1036_1036);
              }
              transform_hlds__size_prof__Var_872 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 0)));
              transform_hlds__size_prof__Var_873 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 1)));
              transform_hlds__size_prof__Var_874 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 2)));
              transform_hlds__size_prof__Var_875 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 3)));
              transform_hlds__size_prof__Var_876 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 4)));
              transform_hlds__size_prof__Var_877 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 5)));
              transform_hlds__size_prof__Var_878 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 6)));
              transform_hlds__size_prof__Var_879 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 7)));
              transform_hlds__size_prof__Var_880 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 8)));
              transform_hlds__size_prof__Var_881 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 9)));
              transform_hlds__size_prof__Var_882 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_123_123, (MR_Integer) 10)));
              {
                transform_hlds__size_prof__STATE_VARIABLE_Info_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 0) = ((MR_Box) (transform_hlds__size_prof__Var_125));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 1) = ((MR_Box) (transform_hlds__size_prof__Var_873));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 2) = ((MR_Box) (transform_hlds__size_prof__Var_874));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 3) = ((MR_Box) (transform_hlds__size_prof__Var_875));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 4) = ((MR_Box) (transform_hlds__size_prof__Var_876));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap_244));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 6) = ((MR_Box) (transform_hlds__size_prof__Var_878));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 7) = ((MR_Box) (transform_hlds__size_prof__Var_879));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 8) = ((MR_Box) (transform_hlds__size_prof__Var_880));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 9) = ((MR_Box) (transform_hlds__size_prof__Var_881));
                MR_hl_field(MR_mktag(0), transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, 10) = ((MR_Box) (transform_hlds__size_prof__Var_882));
              }
              {
                transform_hlds__size_prof__update_rev_maps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_126_126, &transform_hlds__size_prof__STATE_VARIABLE_Info_127_127);
              }
              {
                transform_hlds__size_prof__update_target_map_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_Info_127_127, transform_hlds__size_prof__STATE_VARIABLE_Info_96);
              }
              {
                transform_hlds__size_prof__GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 1) = ((MR_Box) (transform_hlds__size_prof__Quant_74));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 2) = ((MR_Box) (transform_hlds__size_prof__Cond_78));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 3) = ((MR_Box) (transform_hlds__size_prof__Then_79));
                MR_hl_field(MR_mktag(3), transform_hlds__size_prof__GoalExpr_22, 4) = ((MR_Box) (transform_hlds__size_prof__Else_84));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.size_prof", (MR_String) "predicate \140transform_hlds.size_prof.size_prof_process_goal\'/4", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__size_prof__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__size_prof__GoalExpr_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__size_prof__GoalInfo0_9));
    }
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0_1(
  MR_Box transform_hlds__size_prof__closure_arg,
  MR_Box transform_hlds__size_prof__wrapper_arg_1,
  MR_Box transform_hlds__size_prof__wrapper_arg_2,
  MR_Box * transform_hlds__size_prof__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__size_prof__closure = transform_hlds__size_prof__closure_arg;
    MR_Word transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14;

    {
      transform_hlds__size_prof__record_typeinfo_in_type_info_varmap_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__size_prof__wrapper_arg_1), ((MR_Word) transform_hlds__size_prof__wrapper_arg_2), &transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14);
    }
    *transform_hlds__size_prof__wrapper_arg_3 = ((MR_Box) (transform_hlds__size_prof__conv0_STATE_VARIABLE_Info_14));
  }
}

static void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_6_p_0(
  MR_Word transform_hlds__size_prof__Transform_7,
  MR_Word transform_hlds__size_prof__HeadVar__2_2,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_37,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_38,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_40)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;
    MR_Word transform_hlds__size_prof__TypeCtorInfo_85_85;
    MR_Word transform_hlds__size_prof__TypeInfo_86_86;
    MR_Word transform_hlds__size_prof__TypeCtorInfo_87_87;
    MR_Word transform_hlds__size_prof__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 0)));
    MR_Integer transform_hlds__size_prof__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word transform_hlds__size_prof__SimplifyTasks_12;
    MR_Word transform_hlds__size_prof__Goal0_13;
    MR_Word transform_hlds__size_prof__VarSet0_14;
    MR_Word transform_hlds__size_prof__VarTypes0_15;
    MR_Word transform_hlds__size_prof__InstMap0_16;
    MR_Word transform_hlds__size_prof__RttiVarMaps0_17;
    MR_Word transform_hlds__size_prof__TypeCtorMap0_18;
    MR_Word transform_hlds__size_prof__TypeInfoMap0_19;
    MR_Word transform_hlds__size_prof__RevTypeCtorMap0_20;
    MR_Word transform_hlds__size_prof__RevTypeInfoMap0_21;
    MR_Word transform_hlds__size_prof__TargetTypeInfoMap0_22;
    MR_Word transform_hlds__size_prof__KnownSizeMap0_23;
    MR_Word transform_hlds__size_prof__Info0_24;
    MR_Word transform_hlds__size_prof__TVars_25;
    MR_Word transform_hlds__size_prof__Info1_26;
    MR_Word transform_hlds__size_prof__Goal1_27;
    MR_Word transform_hlds__size_prof__Info_28;
    MR_Word transform_hlds__size_prof__HeadVars_29;
    MR_Word transform_hlds__size_prof__InstVarSet_30;
    MR_Word transform_hlds__size_prof__Goal2_32;
    MR_Word transform_hlds__size_prof__VarSet_33;
    MR_Word transform_hlds__size_prof__VarTypes_34;
    MR_Word transform_hlds__size_prof__RttiVarMaps_35;
    MR_Word transform_hlds__size_prof__Goal_36;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43;
    MR_Word transform_hlds__size_prof__Var_44;
    MR_Word transform_hlds__size_prof__Var_46;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_51_51;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52;
    MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53;
    MR_Word transform_hlds__size_prof__Var_61;
    MR_Word transform_hlds__size_prof__Var_63;
    MR_Box transform_hlds__size_prof__conv1_Info1_26;
    MR_Word transform_hlds__size_prof__Var_55;
    MR_Word transform_hlds__size_prof__Var_56;
    MR_Word transform_hlds__size_prof__Var_57;
    MR_Word transform_hlds__size_prof__Var_58;
    MR_Word transform_hlds__size_prof__Var_59;
    MR_Word transform_hlds__size_prof__Var_60;
    MR_Word transform_hlds__size_prof__Var_62;
    MR_Word transform_hlds__size_prof__Var_64;
    MR_Word transform_hlds__size_prof___Warnings_31;

    {
      transform_hlds__size_prof__SimplifyTasks_12 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    {
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(transform_hlds__size_prof__SimplifyTasks_12, transform_hlds__size_prof__PredId_8, transform_hlds__size_prof__ProcId_9, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_39, &transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_37, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__Goal0_13);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__VarSet0_14);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__VarTypes0_15);
    }
    {
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42, &transform_hlds__size_prof__InstMap0_16);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__RttiVarMaps0_17);
    }
    transform_hlds__size_prof__TypeCtorInfo_85_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
    transform_hlds__size_prof__TypeInfo_86_86 = (MR_Word) &transform_hlds__size_prof_scalar_common_1[0];
    {
      transform_hlds__size_prof__TypeCtorMap0_18 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_85_85, transform_hlds__size_prof__TypeInfo_86_86);
    }
    transform_hlds__size_prof__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    {
      transform_hlds__size_prof__TypeInfoMap0_19 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_87_87, transform_hlds__size_prof__TypeInfo_86_86);
    }
    {
      transform_hlds__size_prof__RevTypeCtorMap0_20 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_86_86, transform_hlds__size_prof__TypeCtorInfo_85_85);
    }
    {
      transform_hlds__size_prof__RevTypeInfoMap0_21 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_86_86, transform_hlds__size_prof__TypeCtorInfo_87_87);
    }
    {
      transform_hlds__size_prof__TargetTypeInfoMap0_22 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeCtorInfo_87_87, transform_hlds__size_prof__TypeInfo_86_86);
    }
    {
      transform_hlds__size_prof__KnownSizeMap0_23 = mercury__map__init_0_f_0(transform_hlds__size_prof__TypeInfo_86_86, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
    {
      transform_hlds__size_prof__Info0_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 0) = ((MR_Box) (transform_hlds__size_prof__TypeCtorMap0_18));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 1) = ((MR_Box) (transform_hlds__size_prof__TypeInfoMap0_19));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 2) = ((MR_Box) (transform_hlds__size_prof__RevTypeCtorMap0_20));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 3) = ((MR_Box) (transform_hlds__size_prof__RevTypeInfoMap0_21));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 4) = ((MR_Box) (transform_hlds__size_prof__TargetTypeInfoMap0_22));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 5) = ((MR_Box) (transform_hlds__size_prof__KnownSizeMap0_23));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 6) = ((MR_Box) (transform_hlds__size_prof__VarSet0_14));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 7) = ((MR_Box) (transform_hlds__size_prof__VarTypes0_15));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 8) = ((MR_Box) (transform_hlds__size_prof__Transform_7));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 9) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps0_17));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info0_24, 10) = ((MR_Box) (transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42));
    }
    {
      hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(transform_hlds__size_prof__RttiVarMaps0_17, &transform_hlds__size_prof__TVars_25);
    }
    {
      transform_hlds__size_prof__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_44, 0) = ((MR_Box) (&transform_hlds__size_prof_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_44, 1) = ((MR_Box) (transform_hlds__size_prof__size_prof_process_proc_6_p_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Var_44, 3) = ((MR_Box) (transform_hlds__size_prof__RttiVarMaps0_17));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__size_prof_scalar_common_1[1], (MR_Word) &transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0, transform_hlds__size_prof__Var_44, transform_hlds__size_prof__TVars_25, ((MR_Box) (transform_hlds__size_prof__Info0_24)), &transform_hlds__size_prof__conv1_Info1_26);
    }
    transform_hlds__size_prof__Info1_26 = ((MR_Word) transform_hlds__size_prof__conv1_Info1_26);
    {
      transform_hlds__size_prof__size_prof_process_goal_4_p_0(transform_hlds__size_prof__Goal0_13, &transform_hlds__size_prof__Goal1_27, transform_hlds__size_prof__Info1_26, &transform_hlds__size_prof__Info_28);
    }
    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__HeadVars_29);
    }
    {
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__InstVarSet_30);
    }
    transform_hlds__size_prof__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 0)));
    transform_hlds__size_prof__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 1)));
    transform_hlds__size_prof__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 2)));
    transform_hlds__size_prof__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 3)));
    transform_hlds__size_prof__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 4)));
    transform_hlds__size_prof__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 5)));
    transform_hlds__size_prof__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 6)));
    transform_hlds__size_prof__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 7)));
    transform_hlds__size_prof__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 8)));
    transform_hlds__size_prof__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 9)));
    transform_hlds__size_prof__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__size_prof__Info_28, (MR_Integer) 10)));
    {
      hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, transform_hlds__size_prof__HeadVars_29, &transform_hlds__size_prof___Warnings_31, transform_hlds__size_prof__Goal1_27, &transform_hlds__size_prof__Goal2_32, transform_hlds__size_prof__Var_46, &transform_hlds__size_prof__VarSet_33, transform_hlds__size_prof__Var_61, &transform_hlds__size_prof__VarTypes_34, transform_hlds__size_prof__Var_63, &transform_hlds__size_prof__RttiVarMaps_35);
    }
    {
      check_hlds__mode_util__recompute_instmap_delta_8_p_0((MR_Integer) 1, transform_hlds__size_prof__Goal2_32, &transform_hlds__size_prof__Goal_36, transform_hlds__size_prof__VarTypes_34, transform_hlds__size_prof__InstVarSet_30, transform_hlds__size_prof__InstMap0_16, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_40);
    }
    {
      hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__size_prof__Goal_36, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_43_43, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_51_51);
    }
    {
      hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__size_prof__VarSet_33, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_51_51, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52);
    }
    {
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__size_prof__VarTypes_34, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_52_52, &transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53);
    }
    {
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__size_prof__RttiVarMaps_35, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_53_53, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_38);
    }
  }
}

void MR_CALL 
transform_hlds__size_prof__size_prof_process_proc_msg_6_p_0(
  MR_Word transform_hlds__size_prof__Transform_7,
  MR_Word transform_hlds__size_prof__PredProcId_8,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_12,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_13,
  MR_Word transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_bool transform_hlds__size_prof__succeeded;

    {
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Adding typeinfos in ", transform_hlds__size_prof__PredProcId_8, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14);
    }
    {
      transform_hlds__size_prof__size_prof_process_proc_6_p_0(transform_hlds__size_prof__Transform_7, transform_hlds__size_prof__PredProcId_8, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_0_12, transform_hlds__size_prof__STATE_VARIABLE_ProcInfo_13, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15);
    }
    {
      hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "done.\n", transform_hlds__size_prof__PredProcId_8, *transform_hlds__size_prof__STATE_VARIABLE_ModuleInfo_15);
    }
  }
}

void mercury__transform_hlds__size_prof__init(void)
{
}

void mercury__transform_hlds__size_prof__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_known_size_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_ctor_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_rev_type_info_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_size_prof_info_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_ctor_map_0);
	MR_register_type_ctor_info(&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_type_info_map_0);
}

void mercury__transform_hlds__size_prof__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__size_prof__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.size_prof. */
